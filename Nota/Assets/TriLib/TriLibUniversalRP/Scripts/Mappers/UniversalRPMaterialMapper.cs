using System;
using TriLibCore.General;
using TriLibCore.Mappers;
using TriLibCore.Utils;
using UnityEngine;

namespace TriLibCore.URP.Mappers
{
    /// <summary>Represents a Material Mapper that converts TriLib Materials into Unity UniversalRP Materials.</summary>
    [Serializable]
    [CreateAssetMenu(menuName = "TriLib/Mappers/Material/Universal RP Material Mapper", fileName = "UniversalRPMaterialMapper")]
    public class UniversalRPMaterialMapper : MaterialMapper
    {
        #region Standard
        public override Material MaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Standard/TriLibUniversalRP");

        public override Material CutoutMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Standard/TriLibUniversalRPAlphaCutout");

        public override Material TransparentMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Standard/TriLibUniversalRPAlpha");

        public override Material TransparentComposeMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Standard/TriLibUniversalRPAlpha");
        #endregion

        #region Specular
        public override Material SpecularMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Specular/TriLibUniversalRPSpecular");

        public override Material SpecularCutoutMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Specular/TriLibUniversalRPAlphaCutoutSpecular");

        public override Material SpecularTransparentMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Specular/TriLibUniversalRPAlphaSpecular");

        public override Material SpecularTransparentComposeMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Specular/TriLibUniversalRPAlphaSpecular");
        #endregion
				
        #region Autodesk
        public override Material AutodeskMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Autodesk/TriLibUniversalRPAutodesk");

        public override Material AutodeskCutoutMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Autodesk/TriLibUniversalRPAlphaCutoutAutodesk");

        public override Material AutodeskTransparentMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Autodesk/TriLibUniversalRPAlphaAutodesk");

        public override Material AutodeskTransparentComposeMaterialPreset => Resources.Load<Material>("Materials/UniversalRP/Autodesk/TriLibUniversalRPAlphaAutodesk");
        #endregion

        public override Material LoadingMaterial => Resources.Load<Material>("Materials/UniversalRP/TriLibUniversalRPLoading");

        ///<inheritdoc />
        public override bool IsCompatible(MaterialMapperContext materialMapperContext)
        {
            return TriLibSettings.GetBool("UniversalRPMaterialMapper");
        }

        ///<inheritdoc />
        public override void Map(MaterialMapperContext materialMapperContext)
        {
            materialMapperContext.VirtualMaterial = new VirtualMaterial();

            CheckDiffuseColor(materialMapperContext);
            CheckDiffuseMapTexture(materialMapperContext);
            CheckNormalMapTexture(materialMapperContext);
            CheckEmissionColor(materialMapperContext);
            CheckEmissionMapTexture(materialMapperContext);
            CheckOcclusionMapTexture(materialMapperContext);
            CheckParallaxMapTexture(materialMapperContext);

            if (materialMapperContext.Material.MaterialShadingSetup == MaterialShadingSetup.Specular)
            {
                CheckMetallicValue(materialMapperContext);
                CheckMetallicGlossMapTexture(materialMapperContext);
                CheckGlossinessValue(materialMapperContext);
                CheckSpecularTexture(materialMapperContext);
            }
            else
            {
                CheckGlossinessValue(materialMapperContext);
                CheckSpecularTexture(materialMapperContext);
                CheckMetallicValue(materialMapperContext);
                CheckMetallicGlossMapTexture(materialMapperContext);
            }

            Dispatcher.InvokeAsync(BuildMaterial, materialMapperContext);
        }

        private void CheckDiffuseMapTexture(MaterialMapperContext materialMapperContext)
        {
            var diffuseTexturePropertyName = materialMapperContext.Material.GetGenericPropertyName(GenericMaterialProperty.DiffuseTexture);
            var texture = LoadTexture(materialMapperContext, TextureType.Diffuse, materialMapperContext.Material.GetTextureValue(diffuseTexturePropertyName));
            ApplyDiffuseMapTexture(materialMapperContext, TextureType.Diffuse, texture);
        }

        private void ApplyDiffuseMapTexture(MaterialMapperContext materialMapperContext, TextureType textureType, Texture texture)
        {  
            materialMapperContext.VirtualMaterial.SetProperty(GetDiffuseTextureName(materialMapperContext), texture);
            if (texture != null && materialMapperContext.Context.Options.ApplyTexturesOffsetAndScaling)
            {
                var diffuseTexturePropertyName = materialMapperContext.Material.GetGenericPropertyName(GenericMaterialProperty.DiffuseTexture);
                var diffuseTexture = materialMapperContext.Material.GetTextureValue(diffuseTexturePropertyName);
                materialMapperContext.VirtualMaterial.Tiling = diffuseTexture.Tiling;
                materialMapperContext.VirtualMaterial.Offset = diffuseTexture.Offset;
            }
        }

        private void CheckGlossinessValue(MaterialMapperContext materialMapperContext)
        {
            var value = materialMapperContext.Material.GetGenericPropertyValueMultiplied(GenericMaterialProperty.Glossiness, materialMapperContext.Material.GetGenericFloatValue(GenericMaterialProperty.Glossiness));
            materialMapperContext.VirtualMaterial.SetProperty("_Smoothness", value);
        }

        private void CheckMetallicValue(MaterialMapperContext materialMapperContext)
        {
            var value = materialMapperContext.Material.GetGenericFloatValue(GenericMaterialProperty.Metallic);
            materialMapperContext.VirtualMaterial.SetProperty("_Metallic", value);
        }

        private void CheckEmissionMapTexture(MaterialMapperContext materialMapperContext)
        {
            var emissionTexturePropertyName = materialMapperContext.Material.GetGenericPropertyName(GenericMaterialProperty.EmissionTexture);
            var texture = LoadTexture(materialMapperContext, TextureType.Emission, materialMapperContext.Material.GetTextureValue(emissionTexturePropertyName));
            ApplyEmissionMapTexture(materialMapperContext, TextureType.Emission, texture);
        }

        private void ApplyEmissionMapTexture(MaterialMapperContext materialMapperContext, TextureType textureType, Texture texture)
        {
            materialMapperContext.VirtualMaterial.SetProperty("_EmissionMap", texture);
            if (texture)
            {
                materialMapperContext.VirtualMaterial.EnableKeyword("_EMISSION");
                materialMapperContext.VirtualMaterial.GlobalIlluminationFlags = MaterialGlobalIlluminationFlags.RealtimeEmissive;
            }
            else
            {
                materialMapperContext.VirtualMaterial.DisableKeyword("_EMISSION");
                materialMapperContext.VirtualMaterial.GlobalIlluminationFlags = MaterialGlobalIlluminationFlags.EmissiveIsBlack;
            }
        }

        private void CheckNormalMapTexture(MaterialMapperContext materialMapperContext)
        {
            var normalMapTexturePropertyName = materialMapperContext.Material.GetGenericPropertyName(GenericMaterialProperty.NormalTexture);
            var texture = LoadTexture(materialMapperContext, TextureType.NormalMap, materialMapperContext.Material.GetTextureValue(normalMapTexturePropertyName));
            ApplyNormalMapTexture(materialMapperContext, TextureType.NormalMap, texture);
        }

        private void ApplyNormalMapTexture(MaterialMapperContext materialMapperContext, TextureType textureType, Texture texture)
        {
            materialMapperContext.VirtualMaterial.SetProperty("_BumpMap", texture);
            if (texture != null)
            {
                materialMapperContext.VirtualMaterial.EnableKeyword("_NORMALMAP");
                materialMapperContext.VirtualMaterial.SetProperty("_NormalScale", materialMapperContext.Material.GetGenericPropertyValueMultiplied(GenericMaterialProperty.NormalTexture, 1f));
            }
            else
            {
                materialMapperContext.VirtualMaterial.DisableKeyword("_NORMALMAP");
            }
        }

        private void CheckSpecularTexture(MaterialMapperContext materialMapperContext)
        {
            var specularTexturePropertyName = materialMapperContext.Material.GetGenericPropertyName(GenericMaterialProperty.SpecularTexture);
            var texture = LoadTexture(materialMapperContext, TextureType.Specular, materialMapperContext.Material.GetTextureValue(specularTexturePropertyName));
            ApplySpecGlossMapTexture(materialMapperContext, TextureType.Specular, texture);
        }

        private void ApplySpecGlossMapTexture(MaterialMapperContext materialMapperContext, TextureType textureType, Texture texture)
        {
            materialMapperContext.VirtualMaterial.SetProperty("_SpecGlossMap", texture);
            if (texture != null)
            {
                materialMapperContext.VirtualMaterial.EnableKeyword("_METALLICSPECGLOSSMAP");
            }
            else
            {
                materialMapperContext.VirtualMaterial.DisableKeyword("_METALLICSPECGLOSSMAP");
            }
        }

        private void CheckOcclusionMapTexture(MaterialMapperContext materialMapperContext)
        {
            var occlusionMapTextureName = materialMapperContext.Material.GetGenericPropertyName(GenericMaterialProperty.OcclusionTexture);
            var texture = LoadTexture(materialMapperContext, TextureType.Occlusion, materialMapperContext.Material.GetTextureValue(occlusionMapTextureName));
            ApplyOcclusionMapTexture(materialMapperContext, TextureType.Occlusion, texture);
        }

        private void ApplyOcclusionMapTexture(MaterialMapperContext materialMapperContext, TextureType textureType, Texture texture)
        {
            materialMapperContext.VirtualMaterial.SetProperty("_OcclusionMap", texture);
            if (texture != null)
            {
                materialMapperContext.VirtualMaterial.EnableKeyword("_OCCLUSIONMAP");
            }
            else
            {
                materialMapperContext.VirtualMaterial.DisableKeyword("_OCCLUSIONMAP");
            }
        }

        private void CheckParallaxMapTexture(MaterialMapperContext materialMapperContext)
        {
            var parallaxMapTextureName = materialMapperContext.Material.GetGenericPropertyName(GenericMaterialProperty.ParallaxMap);
            var texture = LoadTexture(materialMapperContext, TextureType.Parallax, materialMapperContext.Material.GetTextureValue(parallaxMapTextureName));
            ApplyParallaxMapTexture(materialMapperContext, TextureType.Parallax, texture);
        }

        private void ApplyParallaxMapTexture(MaterialMapperContext materialMapperContext, TextureType textureType, Texture texture)
        {
            materialMapperContext.VirtualMaterial.SetProperty("_ParallaxMap", texture);
            if (texture)
            {
                materialMapperContext.VirtualMaterial.EnableKeyword("_PARALLAXMAP");
            }
            else
            {
                materialMapperContext.VirtualMaterial.DisableKeyword("_PARALLAXMAP");
            }
        }

        private void CheckMetallicGlossMapTexture(MaterialMapperContext materialMapperContext)
        {
            var metallicGlossMapTextureName = materialMapperContext.Material.GetGenericPropertyName(GenericMaterialProperty.MetallicGlossMap);
            var texture = LoadTexture(materialMapperContext, TextureType.Metalness, materialMapperContext.Material.GetTextureValue(metallicGlossMapTextureName));
            ApplyMetallicGlossMapTexture(materialMapperContext, TextureType.Metalness, texture);
        }

        private void ApplyMetallicGlossMapTexture(MaterialMapperContext materialMapperContext, TextureType textureType, Texture texture)
        {
            materialMapperContext.VirtualMaterial.SetProperty("_MetallicGlossMap", texture);
            if (texture != null)
            {
                materialMapperContext.VirtualMaterial.EnableKeyword("_METALLICGLOSSMAP");
            }
            else
            {
                materialMapperContext.VirtualMaterial.DisableKeyword("_METALLICGLOSSMAP");
            }
        }

        private void CheckEmissionColor(MaterialMapperContext materialMapperContext)
        {
            var value = materialMapperContext.Material.GetGenericColorValue(GenericMaterialProperty.EmissionColor) * materialMapperContext.Material.GetGenericPropertyValueMultiplied(GenericMaterialProperty.EmissionColor, 1f);
            materialMapperContext.VirtualMaterial.SetProperty("_EmissionColor", value);
            if (value != Color.black)
            {
                materialMapperContext.VirtualMaterial.EnableKeyword("_EMISSION");
                materialMapperContext.VirtualMaterial.GlobalIlluminationFlags = MaterialGlobalIlluminationFlags.RealtimeEmissive;
            }
            else
            {
                materialMapperContext.VirtualMaterial.DisableKeyword("_EMISSION");
                materialMapperContext.VirtualMaterial.GlobalIlluminationFlags = MaterialGlobalIlluminationFlags.EmissiveIsBlack;
            }
        }

        private void CheckDiffuseColor(MaterialMapperContext materialMapperContext)
        {
            var value = materialMapperContext.Material.GetGenericColorValue(GenericMaterialProperty.DiffuseColor) * materialMapperContext.Material.GetGenericPropertyValueMultiplied(GenericMaterialProperty.DiffuseColor, 1f);
            value.a *= materialMapperContext.Material.GetGenericPropertyValueMultiplied(GenericMaterialProperty.AlphaValue, materialMapperContext.Material.GetGenericFloatValue(GenericMaterialProperty.AlphaValue));
            if (!materialMapperContext.VirtualMaterial.HasAlpha && value.a < 1f)
            {
                materialMapperContext.VirtualMaterial.HasAlpha = true;
            }
            materialMapperContext.VirtualMaterial.SetProperty("_BaseColor", value);
        }
		
        public override string GetDiffuseTextureName(MaterialMapperContext materialMapperContext) 
		{
			var useAutodeskInteractive = materialMapperContext.Context.Options.UseAutodeskInteractiveMaterials && materialMapperContext.Material.IsAutodeskInteractive; 
            return useAutodeskInteractive ? "_MainTex" : "_BaseMap";
		}

    }
}