#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// Newtonsoft.Json.Utilities.Base64Encoder
struct Base64Encoder_t50655321AB6DEF635DD39A7248BBC5A7B6CBC47D;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Newtonsoft.Json.Bson.BsonToken
struct BsonToken_tD6B9C551285243DC8E0E6AC99016F83016F59F75;
// Newtonsoft.Json.Bson.BsonWriter
struct BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131;
// System.Globalization.Calendar
struct Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A;
// System.Globalization.CompareInfo
struct CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9;
// System.Globalization.CultureData
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529;
// System.Globalization.DateTimeFormatInfo
struct DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90;
// Newtonsoft.Json.Serialization.DefaultContractResolver
struct DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297;
// Newtonsoft.Json.Serialization.DefaultContractResolverState
struct DefaultContractResolverState_t001B39B9A72A4F97F591326782905F0F06A1FCD6;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Newtonsoft.Json.Serialization.ErrorContext
struct ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E;
// System.Text.RegularExpressions.ExclusiveReference
struct ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8;
// Newtonsoft.Json.Serialization.IAttributeProvider
struct IAttributeProvider_tF7E22CBCDA413FB49518DC169416B81552C2BA2B;
// Newtonsoft.Json.Serialization.IContractResolver
struct IContractResolver_t3AC4B2D1B05C5F24F4396E33341A1BE71159E959;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Newtonsoft.Json.Serialization.IReferenceResolver
struct IReferenceResolver_t9DFCBA0B0681428C203FCBF62C0A796EE5164F28;
// Newtonsoft.Json.Serialization.ITraceWriter
struct ITraceWriter_t0C94179C3EFFE88B08EBB1416318D3D31EAB1B0D;
// Newtonsoft.Json.Serialization.IValueProvider
struct IValueProvider_t682DD96350889FBD3BA8D4BCC58EC196D6C0DAB4;
// Newtonsoft.Json.Linq.JContainer
struct JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15;
// Newtonsoft.Json.Linq.JObject
struct JObject_tF150B38C95CC8B2C1CA2D59B665175F8444AC48C;
// Newtonsoft.Json.Linq.JProperty
struct JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445;
// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838;
// Newtonsoft.Json.Linq.JToken
struct JToken_t517F0381C4450A4525D6FA3480318381CE06C980;
// Newtonsoft.Json.Linq.JTokenEqualityComparer
struct JTokenEqualityComparer_tB0AE7D34C4015D2E65F7E7AFA219DC849C1FEC08;
// Newtonsoft.Json.Serialization.JsonContract
struct JsonContract_tF3638831C408783F93E44D96C7C10A699A0F7F0D;
// Newtonsoft.Json.JsonConverter
struct JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078;
// Newtonsoft.Json.JsonConverterCollection
struct JsonConverterCollection_t284B2A8526FB714415B0C3B682C8DDCB13DAB55F;
// Newtonsoft.Json.JsonException
struct JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32;
// Newtonsoft.Json.Serialization.JsonProperty
struct JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D;
// Newtonsoft.Json.JsonReader
struct JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91;
// Newtonsoft.Json.JsonSerializationException
struct JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8;
// Newtonsoft.Json.JsonSerializer
struct JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3;
// Newtonsoft.Json.JsonTextWriter
struct JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B;
// Newtonsoft.Json.JsonWriter
struct JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2;
// System.Runtime.InteropServices.MarshalAsAttribute
struct MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Newtonsoft.Json.Serialization.NamingStrategy
struct NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50;
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct ReflectionDelegateFactory_tBCB2E4D5639132D3DFF7CA2CFFAB903183670A16;
// Newtonsoft.Json.Serialization.ReflectionValueProvider
struct ReflectionValueProvider_tF9FF9FF758973AF2DD858CAF7C12E085E540B45D;
// System.Text.RegularExpressions.RegexCode
struct RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5;
// Newtonsoft.Json.Converters.RegexConverter
struct RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73;
// System.Text.RegularExpressions.RegexRunnerFactory
struct RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Newtonsoft.Json.Serialization.SerializationCallback
struct SerializationCallback_tFA478094A3FDF26735AE3B85B18B9945851F5DF1;
// Newtonsoft.Json.Serialization.SerializationErrorCallback
struct SerializationErrorCallback_t9C4BA1E797ECDB53622C2767ACABFD8BFEE86285;
// System.Text.RegularExpressions.SharedReference
struct SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926;
// Newtonsoft.Json.Converters.StringEnumConverter
struct StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E;
// System.Globalization.TextInfo
struct TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C;
// Newtonsoft.Json.Serialization.TraceJsonReader
struct TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B;
// Newtonsoft.Json.Serialization.TraceJsonWriter
struct TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A;
// Newtonsoft.Json.Utilities.TypeInformation
struct TypeInformation_t30731224CF3BE05F8F32F6DC4FD5FAFFD4F6997D;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// Newtonsoft.Json.Converters.VersionConverter
struct VersionConverter_t9BE2693D5B5F36AE882FABD6AB022254124E59E2;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Newtonsoft.Json.Utilities.ConvertUtils/<>c__DisplayClass9_0
struct U3CU3Ec__DisplayClass9_0_t3A4E56C60CDCDA0E3AE51AF8172FB902A9BBC187;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c
struct U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass38_0
struct U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass38_1
struct U3CU3Ec__DisplayClass38_1_t3AA8C8586136BB6D815B1DF622E7E918FA7B4E33;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass38_2
struct U3CU3Ec__DisplayClass38_2_tCCA3CA4FB84DADEBB49F8B4DAEBC7A7B9DE74F14;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass52_0
struct U3CU3Ec__DisplayClass52_0_t47D44CD99A914B975A5807FF43AA93BB479B9C8C;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass68_0
struct U3CU3Ec__DisplayClass68_0_t766708EC19046F0BD02D671A2671CD88B70FEA3E;
// Newtonsoft.Json.Serialization.DefaultContractResolver/<>c__DisplayClass69_0
struct U3CU3Ec__DisplayClass69_0_tFEECEE33CB16927EBB0FFEF0186F58FEFEA79F1E;
// Newtonsoft.Json.Utilities.EnumUtils/<>c
struct U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72;
// Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__55
struct U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0;
// Newtonsoft.Json.Linq.JProperty/JPropertyList
struct JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5;
// Newtonsoft.Json.Linq.JToken/LineInfoAnnotation
struct LineInfoAnnotation_t25E27B4B4C00CB5D2B80FB4E1F6793E0F4BE314C;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass73_0
struct U3CU3Ec__DisplayClass73_0_tDED699F39B829613F6126BA5E1C887311346B7EE;
// Newtonsoft.Json.Serialization.JsonContract/<>c__DisplayClass74_0
struct U3CU3Ec__DisplayClass74_0_tEB782E56C6643FDDCF2D7B0E5A2DF0A1AED3AEB8;
// Newtonsoft.Json.Serialization.JsonSerializerInternalBase/ReferenceEqualsEqualityComparer
struct ReferenceEqualsEqualityComparer_t7D73C0F6ABF9328B677D3328CF1D9490324F625A;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c
struct U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c__DisplayClass36_0
struct U3CU3Ec__DisplayClass36_0_tF59A60BEA88CC88FF146709D13E96A046DB7D43F;
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader/CreatorPropertyContext
struct CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c
struct U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8;
// Newtonsoft.Json.Serialization.JsonTypeReflector/<>c__DisplayClass20_0
struct U3CU3Ec__DisplayClass20_0_t4372BFC466654BC874AE3B7E8377F4018012ED74;
// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t698D68F8A4832DC94BD91657BD958CE2ECB410E0;
// Newtonsoft.Json.Utilities.PropertyNameTable/Entry
struct Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_0
struct U3CU3Ec__DisplayClass13_0_tD27FF2F8A49FF27EF149F9E61BB6C981251F9544;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_1
struct U3CU3Ec__DisplayClass13_1_t414A08FA62A08F6B9CB2E1510140AB05021714E8;
// Newtonsoft.Json.Utilities.ReflectionObject/<>c__DisplayClass13_2
struct U3CU3Ec__DisplayClass13_2_tA55985BA4FFD8AF33D671764AB13EC410498FBCE;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c
struct U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B;
// Newtonsoft.Json.Utilities.ReflectionUtils/<>c__DisplayClass42_0
struct U3CU3Ec__DisplayClass42_0_tA195C0D57C247970275535F099F05968450BDC91;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1
struct U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`2<System.Object,System.Object>
struct Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D;
// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct Collection_1_t2780FE79A65D8916FD76F5B194AF02532CF85CD1;
// System.Collections.ObjectModel.Collection`1<System.Object>
struct Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo>
struct Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402;
// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo>
struct Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC;
// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken>
struct Dictionary_2_t3D1DECC89DF9470B1C4DEF61627E0E08457660E9;
// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs>
struct EventHandler_1_t1D4D4A76514C9BC2DB366E18C9474AA63929E5B8;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty>
struct Func_2_t6B1DF8DB5F95EA0AC83DAD89DF9A793B538580DE;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader/PropertyPresence>
struct Func_2_t49C09D6B1EC6A842B203BFF46F8691937545DC26;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32>
struct Func_2_t8F844EB8518A7718FB0C7ABDD7C40555FA49F781;
// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String>
struct Func_2_t8A367805DEFB9B866B9246A6940244B185C9A4B6;
// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean>
struct Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C;
// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String>
struct Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6;
// System.Func`2<System.Reflection.FieldInfo,System.Boolean>
struct Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE;
// System.Func`2<System.Reflection.MemberInfo,System.Boolean>
struct Func_2_t7D30352C78352695FA12AEA57C26635DF9400618;
// System.Func`2<System.Reflection.MemberInfo,System.String>
struct Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Object,System.Type>
struct Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF;
// System.Func`2<System.Reflection.ParameterInfo,System.Type>
struct Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF;
// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>>
struct Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352;
// Newtonsoft.Json.IArrayPool`1<System.Char>
struct IArrayPool_1_tA060192847836D1A87C95FDF97B3EF272E37F072;
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD;
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>
struct IEnumerable_1_tC1469845CEBD36D92E7FE77DA40BA86D0F5DD295;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterInfo>
struct IEnumerable_1_t7893F3E646CA021CE48865708B04C4CDA68D7388;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428;
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>
struct IEnumerator_1_tE9BA6FB2F73388F6352B224097DEA9D3065EAC46;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<Newtonsoft.Json.Linq.JToken>
struct IList_1_t824F6EA825C1E8657573C7791527CFE9C7F2B5A5;
// System.Collections.Generic.IList`1<System.Reflection.MemberInfo>
struct IList_1_t52E4CE6A2808933DF561E8BD1A816878E4ED6EF1;
// System.Collections.Generic.IList`1<System.Object>
struct IList_1_t707982BD768B18C51D263C759F33BCDBDFA44901;
// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry>
struct LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92;
// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition>
struct List_1_t320FFC8A091A55AEADCD2F4D24351B95184C13D7;
// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363;
// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA;
// System.Runtime.Serialization.EnumMemberAttribute
struct EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Collections.Hashtable
struct Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t6C4C1F04B21BDE1E4B84BD6EC7DE494C186D6C68;
// System.IFormatProvider
struct IFormatProvider_tF2AECC4B14F41D36718920D67F930CED940412DF;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// Newtonsoft.Json.Linq.JTokenType[]
struct JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54;
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_tF552A57A77922E5E7F5B9590D8A8D20234A98464;
// Newtonsoft.Json.JsonConverter[]
struct JsonConverterU5BU5D_tB150F37E62D8CE8327B776F611D0ADC8AA9098C1;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E;
// System.Reflection.MethodBase
struct MethodBase_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7;
// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Text.RegularExpressions.Regex
struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// Newtonsoft.Json.JsonWriter/State[][]
struct StateU5BU5DU5BU5D_tE330453F8423BB38F5D021420F31359E600FEDC3;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.IO.StringWriter
struct StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.IO.TextWriter
struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.UInt32[]
struct UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.Version
struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C;

IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConvertUtils_t3E3908B3E0EB1A2095A846BC77BF0331866E03C3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnumUtils_t1788B4D6282C41E4BAF4456347682E84CDF01073_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tE9BA6FB2F73388F6352B224097DEA9D3065EAC46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IJsonLineInfo_t2AF80F82D378B1F09F75DD7734B607E71DAC5F61_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonToken_t63CB837C9C2C9D9B938921D92B457C8C56246314_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonTypeReflector_t4C6BD9BC9EF9527B5AB0C95FF2945BCCFB07B7EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B;
IL2CPP_EXTERN_C String_t* _stringLiteral136A55742A682B55E09AB7BC50610AD709A88AFF;
IL2CPP_EXTERN_C String_t* _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E;
IL2CPP_EXTERN_C String_t* _stringLiteral23B435163284C2F25AE5E84212B0650024F0760B;
IL2CPP_EXTERN_C String_t* _stringLiteral27D252BCBD1DF46C936D6761666B18C66CA086E0;
IL2CPP_EXTERN_C String_t* _stringLiteral2F3CA0198E1FC9ECBFAF5319F4200CDDC9B45957;
IL2CPP_EXTERN_C String_t* _stringLiteral34AC5C40D830EF0A8EF122F54B008863A6142239;
IL2CPP_EXTERN_C String_t* _stringLiteral353387D238AB271DB188C48D7B97628BE513D749;
IL2CPP_EXTERN_C String_t* _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869;
IL2CPP_EXTERN_C String_t* _stringLiteral4DE1853EEF8EA51A408D1E43572237AA9099A9F7;
IL2CPP_EXTERN_C String_t* _stringLiteral568E852BDA9DFECC46D2B85B19C5E6609D353EB8;
IL2CPP_EXTERN_C String_t* _stringLiteral5CA9455F82225506E9807EBEA47D2D77C4B0357C;
IL2CPP_EXTERN_C String_t* _stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442;
IL2CPP_EXTERN_C String_t* _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA;
IL2CPP_EXTERN_C String_t* _stringLiteral76E62EDFAA0D83ADA5E51419027E3B2555BC97C7;
IL2CPP_EXTERN_C String_t* _stringLiteral77A2BCDF7833AAF3267F008AEBA7BF1544830032;
IL2CPP_EXTERN_C String_t* _stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184;
IL2CPP_EXTERN_C String_t* _stringLiteral95C8A5370D26D671D01AC2995934B40AF9E59DB1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3EAA0F339183241CBE940583DB6DF3E8447B751;
IL2CPP_EXTERN_C String_t* _stringLiteralB5F971C21F0E429CC592BBB1C93532F72EFFC873;
IL2CPP_EXTERN_C String_t* _stringLiteralB62AA2CC6BFDA437017A321F61AE9B5B2FF52ADE;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralCEFE08E0E22F0F2F83881114AA953EB6602998C0;
IL2CPP_EXTERN_C String_t* _stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B;
IL2CPP_EXTERN_C String_t* _stringLiteralD1545CFDAAF7A5965985B205CE1C592FF9780059;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDE691340A62551B7980DCA7D2D7EB4C65FFF808D;
IL2CPP_EXTERN_C String_t* _stringLiteralE277CFF9C0F40D8AD278F095111F17D2F24BD7EA;
IL2CPP_EXTERN_C String_t* _stringLiteralF4BD78F14A295432B64B608CF7B12D9CA73E40A1;
IL2CPP_EXTERN_C String_t* _stringLiteralFF51AE1F9006774EB05DFE9C7EE8CC7B1AAA1446;
IL2CPP_EXTERN_C const RuntimeMethod* Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m50B1A0252CC83A50F60CD54CA63ED5FFDB91A945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CollectionUtils_AddRange_TisMemberInfo_t_m1854448383B4F405602E0226A428FE1C7548D31E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Collection_1_GetEnumerator_mDA086776175028440A51504C113337E91CC43500_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonSerializer_Deserialize_TisRegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4_m4331B7014627BC8041105D1E65D260B294A712F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2__ctor_mF3910C25EC821B78E3466B0458DE8EB7E827C263_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_m04F74D34BA67514B20CA552AEB2123AB5BF45717_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1__ctor_mF2706CF213CD61CDD98E8CFD43442578AB579AD4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mD96C04C8C19EAB83BB1DFF566EABF26350631691_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectConstructor_1_Invoke_mE81DB4C62C8D2F60FF83F56FB36AE9FC3BE4103B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionValueProvider_GetValue_m26EB30AFB2BDE690A4955BBFDC482CB2E67B4DE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReflectionValueProvider_SetValue_mF3A83C542EB0F0D53ADE0E384A043DA559182421_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexConverter_ReadJson_m670966D979ED51B085DCEBDFED7B53697D3B075B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* RegexConverter_ReadRegexObject_m305F9A55E4024BD86481052D19B398005B06C745_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StringEnumConverter_ReadJson_m8CBF3E38859B6EE0D34877D203E3A15759E516E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m6F252151C10498E360A4F8EF03F696DD2B40D602_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_Reset_m7EBB11E06B1F21F50C7DF8B06E60B5F6F7D093F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetCreatorU3Eb__20_1_mC6037338F8D1D9AFA8755A32D4D207646963D8E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__37_1_m828226D1FB4AA70347E063378F6BF4064E7002D3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass20_0_U3CGetCreatorU3Eb__0_m987F7CF1E29CCD749193506951C9C0348D193BCB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass38_1_U3CSetExtensionDataDelegatesU3Eb__0_m1351516A62F1D2E6BBD3950DCE4699F3F427F103_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValidationUtils_ArgumentNotNull_mA8AC1AD3B50DBCFC06ABF784BB1311468771A495_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionConverter_ReadJson_m68376FA957ADA8318CEBDAEFB20789829FF17049_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* VersionConverter_WriteJson_m3C0A7EC6D68CA11D3E62C55B9567E757DE963B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JToken_t517F0381C4450A4525D6FA3480318381CE06C980_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonConstructorAttribute_t892706D7BC0282A74D608533AC8F56337D08F1D4_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* JsonExtensionDataAttribute_t742C5494ED033ECB5BFA1DC6C68D6AF3C62E753C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t JPropertyList_GetEnumerator_mC715F77A28A06FEBF2DF905E4CC316395A29247A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionValueProvider_GetValue_m26EB30AFB2BDE690A4955BBFDC482CB2E67B4DE7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionValueProvider_SetValue_mF3A83C542EB0F0D53ADE0E384A043DA559182421_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ReflectionValueProvider__ctor_m4CCF1B6E29FAC08128AD2D0E980F29107FD29C19_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RegexConverter_CanConvert_mB8EE7F3824E272C0D5119E0004256A78500A00E9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RegexConverter_ReadJson_m670966D979ED51B085DCEBDFED7B53697D3B075B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RegexConverter_ReadRegexObject_m305F9A55E4024BD86481052D19B398005B06C745_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RegexConverter_ReadRegexString_m8416EBC385B8AD4B3DB08E1437E37DCAA9FA9734_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RegexConverter_WriteBson_m3D5E7CC84BCCD528C8D042FEFAF7EC1925887E03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RegexConverter_WriteJson_m2DFD8C928EE8DF8C5F5B2142C1BD4FD725A3A278_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RegexConverter_WriteJson_m3232C1B85602852FB040265237936D883586D344_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ResolverContractKey_Equals_m7EADD44C28175D677F9881E4D0021CF8936E0732_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializationCallback_BeginInvoke_mF0BA12B078DD0258912A68952DD078100F2A2FC7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializationErrorCallback_BeginInvoke_m99B5D1C187200AD2A22155C76FA0B53730CA44B3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringEnumConverter_CanConvert_m6BA1E7101AFFE136FA3C8AF768FB53FAF6D7B22C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringEnumConverter_ReadJson_m8CBF3E38859B6EE0D34877D203E3A15759E516E7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringEnumConverter_WriteJson_m8DC9F8D789673C3177069391003E74A76896E132_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringReferenceExtensions_IndexOf_m0521F7953B075BB955750D6AD8053D53D7ECD6AC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringUtils_CreateStringWriter_mECD1F544CCFBE0B6981309D5820C726B5BA7D629_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringUtils_FormatWith_m4FCAF6C2F661AFA5DECB79DDD2F4C1C63933AC02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringUtils_FormatWith_mF72FDDA3EB515E398CA2D73E829FC7F8AD4F1D2B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringUtils_FormatWith_mFFF18C22B96311F0FF31E7711F474AB79C1D96EF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringUtils_IsHighSurrogate_mF2BB7B9F8B5B5AE318D47AC53DA3DF1F4D759542_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringUtils_IsLowSurrogate_mFB8EFC08BA665DD434D3752CFA6642393EFEA55D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StringUtils_ToCamelCase_mE26865FEF3518BD16F38B0DDE4E2E915CAD0F7C3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m90913CA01160A53528846997BDA02BBFEF36123F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m3BF75683A19B5FC29E3D5290B5B3C1FA134C3148_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m7B4B018D9ECFC2AD388057DD8F0215AB21183D06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TraceJsonReader__ctor_mDF664DDFC7FF1739F887F50E0CE389D056EC382A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TraceJsonWriter__ctor_m29B26F2DC7065ED209EB7F1BD7454D085A7C1C41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeConvertKey_Equals_m4DE5600EBFEAFAA076537C2075A96573AB87D2BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeExtensions_ImplementInterface_m7183F3D7AF62459483F1E37786034552734BE904_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TypeNameKey_Equals_m2508626D8FED8CA829246608EE62F8E2D34B5AA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m6F252151C10498E360A4F8EF03F696DD2B40D602_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__55_MoveNext_mC5D9A78BE6D3987B3B5AB71C3DA7F3F508592D13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_Reset_m7EBB11E06B1F21F50C7DF8B06E60B5F6F7D093F6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_get_Current_mFC6CD295ED617B01F9BCB28202DE85AA867A633A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_mC5E82C16B976D0931DEC0A40D00530440E975833_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CCreatePropertiesU3Eb__64_0_m9D1FE6CBD5DC4C760920F028871456CF1ED36668_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGetAttributeConstructorU3Eb__40_0_m38369B1996FCCE4B636E39DDC6A86D92FD3A9B50_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_mEBAC516691175B5FD7C7844C45C45898D3478DF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__37_0_m318BBA49484CCF1794EEE5417693A55717838349_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__37_1_m828226D1FB4AA70347E063378F6BF4064E7002D3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGetSerializableMembersU3Eb__34_0_m65BB6F3B51232E8E2926903E2CEF175983AC3889_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec_U3CGetSerializableMembersU3Eb__34_1_m983D29D4AF1EA10B3ECA7BED337AEC11157DEF5A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m1916C10C0CB08965E2A5FDA9C7927E1D792DD06A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_mCCC4412A143E54E9BE84A5F07B6669851E1F5568_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m0C4B4C711AD85E71827E280A4AE041B65E6F7CC1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass20_0_U3CGetCreatorU3Eb__0_m987F7CF1E29CCD749193506951C9C0348D193BCB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass38_1_U3CSetExtensionDataDelegatesU3Eb__0_m1351516A62F1D2E6BBD3950DCE4699F3F427F103_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass38_2_U3CSetExtensionDataDelegatesU3Eb__1_m49B9CB881ECC01B15E43254D46A5692A06D2D2D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m222C3A1773447DE952CDB65AD6316A411747C3E5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass68_0_U3CCreateShouldSerializeTestU3Eb__0_mA20EFBB3085AFE25FE3DA66E0ADD0A770E158F1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass69_0_U3CSetIsSpecifiedActionsU3Eb__0_m8E32452942E950B4073E43EF6D9292CB07E4A382_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass73_0_U3CCreateSerializationCallbackU3Eb__0_mE55246604A2198788812A1B4BA3B191EB3103BD8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass74_0_U3CCreateSerializationErrorCallbackU3Eb__0_m4F0A8CF50687635531818316C9BE6CF622827EF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_mABC83D0C63CE3EBCE00AA99596C34DECE06E40A6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m57D7B5CC6C5C25588D21AA16B15B972D7EA17B16_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m79E2F51886AC0D350C73A7341E570086801F28F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mB684917E51C88F503F61405714BD76633F355FBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mC6D9E94CA60CFC141FFC835625A409CFA85F4E47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mCA6120DDC165F9A19952B593D0502A71AB4398AE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValidationUtils_ArgumentNotNull_mA8AC1AD3B50DBCFC06ABF784BB1311468771A495_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionConverter_CanConvert_mE3FCCFDE440B357CE0435B5066788ADCB8AD81C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionConverter_ReadJson_m68376FA957ADA8318CEBDAEFB20789829FF17049_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VersionConverter_WriteJson_m3C0A7EC6D68CA11D3E62C55B9567E757DE963B12_MetadataUsageId;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com;
struct CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com;
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JTokenU5BU5D_tF552A57A77922E5E7F5B9590D8A8D20234A98464;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E;
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B;
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// Newtonsoft.Json.JsonConverter
struct  JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Linq.JProperty_JPropertyList
struct  JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty_JPropertyList::_token
	JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ____token_0;

public:
	inline static int32_t get_offset_of__token_0() { return static_cast<int32_t>(offsetof(JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5, ____token_0)); }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * get__token_0() const { return ____token_0; }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 ** get_address_of__token_0() { return &____token_0; }
	inline void set__token_0(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * value)
	{
		____token_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____token_0), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1
struct  U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1::<>2__current
	JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JProperty_JPropertyList Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1::<>4__this
	JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF, ___U3CU3E2__current_1)); }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF, ___U3CU3E4__this_2)); }
	inline JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken
struct  JToken_t517F0381C4450A4525D6FA3480318381CE06C980  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Linq.JContainer Newtonsoft.Json.Linq.JToken::_parent
	JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15 * ____parent_1;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_previous
	JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ____previous_2;
	// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JToken::_next
	JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ____next_3;
	// System.Object Newtonsoft.Json.Linq.JToken::_annotations
	RuntimeObject * ____annotations_4;

public:
	inline static int32_t get_offset_of__parent_1() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980, ____parent_1)); }
	inline JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15 * get__parent_1() const { return ____parent_1; }
	inline JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15 ** get_address_of__parent_1() { return &____parent_1; }
	inline void set__parent_1(JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15 * value)
	{
		____parent_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_1), (void*)value);
	}

	inline static int32_t get_offset_of__previous_2() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980, ____previous_2)); }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * get__previous_2() const { return ____previous_2; }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 ** get_address_of__previous_2() { return &____previous_2; }
	inline void set__previous_2(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * value)
	{
		____previous_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____previous_2), (void*)value);
	}

	inline static int32_t get_offset_of__next_3() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980, ____next_3)); }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * get__next_3() const { return ____next_3; }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 ** get_address_of__next_3() { return &____next_3; }
	inline void set__next_3(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * value)
	{
		____next_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____next_3), (void*)value);
	}

	inline static int32_t get_offset_of__annotations_4() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980, ____annotations_4)); }
	inline RuntimeObject * get__annotations_4() const { return ____annotations_4; }
	inline RuntimeObject ** get_address_of__annotations_4() { return &____annotations_4; }
	inline void set__annotations_4(RuntimeObject * value)
	{
		____annotations_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____annotations_4), (void*)value);
	}
};

struct JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields
{
public:
	// Newtonsoft.Json.Linq.JTokenEqualityComparer Newtonsoft.Json.Linq.JToken::_equalityComparer
	JTokenEqualityComparer_tB0AE7D34C4015D2E65F7E7AFA219DC849C1FEC08 * ____equalityComparer_0;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BooleanTypes
	JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* ___BooleanTypes_5;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::NumberTypes
	JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* ___NumberTypes_6;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::StringTypes
	JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* ___StringTypes_7;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::GuidTypes
	JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* ___GuidTypes_8;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::TimeSpanTypes
	JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* ___TimeSpanTypes_9;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::UriTypes
	JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* ___UriTypes_10;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::CharTypes
	JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* ___CharTypes_11;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::DateTimeTypes
	JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* ___DateTimeTypes_12;
	// Newtonsoft.Json.Linq.JTokenType[] Newtonsoft.Json.Linq.JToken::BytesTypes
	JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* ___BytesTypes_13;

public:
	inline static int32_t get_offset_of__equalityComparer_0() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ____equalityComparer_0)); }
	inline JTokenEqualityComparer_tB0AE7D34C4015D2E65F7E7AFA219DC849C1FEC08 * get__equalityComparer_0() const { return ____equalityComparer_0; }
	inline JTokenEqualityComparer_tB0AE7D34C4015D2E65F7E7AFA219DC849C1FEC08 ** get_address_of__equalityComparer_0() { return &____equalityComparer_0; }
	inline void set__equalityComparer_0(JTokenEqualityComparer_tB0AE7D34C4015D2E65F7E7AFA219DC849C1FEC08 * value)
	{
		____equalityComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_0), (void*)value);
	}

	inline static int32_t get_offset_of_BooleanTypes_5() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ___BooleanTypes_5)); }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* get_BooleanTypes_5() const { return ___BooleanTypes_5; }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54** get_address_of_BooleanTypes_5() { return &___BooleanTypes_5; }
	inline void set_BooleanTypes_5(JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* value)
	{
		___BooleanTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BooleanTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_NumberTypes_6() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ___NumberTypes_6)); }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* get_NumberTypes_6() const { return ___NumberTypes_6; }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54** get_address_of_NumberTypes_6() { return &___NumberTypes_6; }
	inline void set_NumberTypes_6(JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* value)
	{
		___NumberTypes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NumberTypes_6), (void*)value);
	}

	inline static int32_t get_offset_of_StringTypes_7() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ___StringTypes_7)); }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* get_StringTypes_7() const { return ___StringTypes_7; }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54** get_address_of_StringTypes_7() { return &___StringTypes_7; }
	inline void set_StringTypes_7(JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* value)
	{
		___StringTypes_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringTypes_7), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_8() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ___GuidTypes_8)); }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* get_GuidTypes_8() const { return ___GuidTypes_8; }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54** get_address_of_GuidTypes_8() { return &___GuidTypes_8; }
	inline void set_GuidTypes_8(JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* value)
	{
		___GuidTypes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_8), (void*)value);
	}

	inline static int32_t get_offset_of_TimeSpanTypes_9() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ___TimeSpanTypes_9)); }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* get_TimeSpanTypes_9() const { return ___TimeSpanTypes_9; }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54** get_address_of_TimeSpanTypes_9() { return &___TimeSpanTypes_9; }
	inline void set_TimeSpanTypes_9(JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* value)
	{
		___TimeSpanTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TimeSpanTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriTypes_10() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ___UriTypes_10)); }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* get_UriTypes_10() const { return ___UriTypes_10; }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54** get_address_of_UriTypes_10() { return &___UriTypes_10; }
	inline void set_UriTypes_10(JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* value)
	{
		___UriTypes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriTypes_10), (void*)value);
	}

	inline static int32_t get_offset_of_CharTypes_11() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ___CharTypes_11)); }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* get_CharTypes_11() const { return ___CharTypes_11; }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54** get_address_of_CharTypes_11() { return &___CharTypes_11; }
	inline void set_CharTypes_11(JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* value)
	{
		___CharTypes_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharTypes_11), (void*)value);
	}

	inline static int32_t get_offset_of_DateTimeTypes_12() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ___DateTimeTypes_12)); }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* get_DateTimeTypes_12() const { return ___DateTimeTypes_12; }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54** get_address_of_DateTimeTypes_12() { return &___DateTimeTypes_12; }
	inline void set_DateTimeTypes_12(JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* value)
	{
		___DateTimeTypes_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DateTimeTypes_12), (void*)value);
	}

	inline static int32_t get_offset_of_BytesTypes_13() { return static_cast<int32_t>(offsetof(JToken_t517F0381C4450A4525D6FA3480318381CE06C980_StaticFields, ___BytesTypes_13)); }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* get_BytesTypes_13() const { return ___BytesTypes_13; }
	inline JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54** get_address_of_BytesTypes_13() { return &___BytesTypes_13; }
	inline void set_BytesTypes_13(JTokenTypeU5BU5D_tC3FBE7730D27CFDE952D8F6C9FADBCFA130B9A54* value)
	{
		___BytesTypes_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BytesTypes_13), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JToken_LineInfoAnnotation
struct  LineInfoAnnotation_t25E27B4B4C00CB5D2B80FB4E1F6793E0F4BE314C  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JToken_LineInfoAnnotation::LineNumber
	int32_t ___LineNumber_0;
	// System.Int32 Newtonsoft.Json.Linq.JToken_LineInfoAnnotation::LinePosition
	int32_t ___LinePosition_1;

public:
	inline static int32_t get_offset_of_LineNumber_0() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t25E27B4B4C00CB5D2B80FB4E1F6793E0F4BE314C, ___LineNumber_0)); }
	inline int32_t get_LineNumber_0() const { return ___LineNumber_0; }
	inline int32_t* get_address_of_LineNumber_0() { return &___LineNumber_0; }
	inline void set_LineNumber_0(int32_t value)
	{
		___LineNumber_0 = value;
	}

	inline static int32_t get_offset_of_LinePosition_1() { return static_cast<int32_t>(offsetof(LineInfoAnnotation_t25E27B4B4C00CB5D2B80FB4E1F6793E0F4BE314C, ___LinePosition_1)); }
	inline int32_t get_LinePosition_1() const { return ___LinePosition_1; }
	inline int32_t* get_address_of_LinePosition_1() { return &___LinePosition_1; }
	inline void set_LinePosition_1(int32_t value)
	{
		___LinePosition_1 = value;
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c
struct  U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<>9
	U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<>9__34_0
	Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * ___U3CU3E9__34_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<>9__34_1
	Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * ___U3CU3E9__34_1_2;
	// System.Func`2<System.Type,System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo>> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<>9__37_0
	Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * ___U3CU3E9__37_0_3;
	// System.Func`2<System.Reflection.MemberInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<>9__37_1
	Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * ___U3CU3E9__37_1_4;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<>9__40_0
	Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * ___U3CU3E9__40_0_5;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.Int32> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<>9__64_0
	Func_2_t8F844EB8518A7718FB0C7ABDD7C40555FA49F781 * ___U3CU3E9__64_0_6;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_StaticFields, ___U3CU3E9__34_0_1)); }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * get_U3CU3E9__34_0_1() const { return ___U3CU3E9__34_0_1; }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 ** get_address_of_U3CU3E9__34_0_1() { return &___U3CU3E9__34_0_1; }
	inline void set_U3CU3E9__34_0_1(Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * value)
	{
		___U3CU3E9__34_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__34_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_StaticFields, ___U3CU3E9__34_1_2)); }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * get_U3CU3E9__34_1_2() const { return ___U3CU3E9__34_1_2; }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 ** get_address_of_U3CU3E9__34_1_2() { return &___U3CU3E9__34_1_2; }
	inline void set_U3CU3E9__34_1_2(Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * value)
	{
		___U3CU3E9__34_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__34_1_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_StaticFields, ___U3CU3E9__37_0_3)); }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * get_U3CU3E9__37_0_3() const { return ___U3CU3E9__37_0_3; }
	inline Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 ** get_address_of_U3CU3E9__37_0_3() { return &___U3CU3E9__37_0_3; }
	inline void set_U3CU3E9__37_0_3(Func_2_t82FD39E4D5156B44C344A7052B0CA2545623F352 * value)
	{
		___U3CU3E9__37_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_StaticFields, ___U3CU3E9__37_1_4)); }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * get_U3CU3E9__37_1_4() const { return ___U3CU3E9__37_1_4; }
	inline Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 ** get_address_of_U3CU3E9__37_1_4() { return &___U3CU3E9__37_1_4; }
	inline void set_U3CU3E9__37_1_4(Func_2_t7D30352C78352695FA12AEA57C26635DF9400618 * value)
	{
		___U3CU3E9__37_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_1_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__40_0_5() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_StaticFields, ___U3CU3E9__40_0_5)); }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * get_U3CU3E9__40_0_5() const { return ___U3CU3E9__40_0_5; }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C ** get_address_of_U3CU3E9__40_0_5() { return &___U3CU3E9__40_0_5; }
	inline void set_U3CU3E9__40_0_5(Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * value)
	{
		___U3CU3E9__40_0_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__40_0_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__64_0_6() { return static_cast<int32_t>(offsetof(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_StaticFields, ___U3CU3E9__64_0_6)); }
	inline Func_2_t8F844EB8518A7718FB0C7ABDD7C40555FA49F781 * get_U3CU3E9__64_0_6() const { return ___U3CU3E9__64_0_6; }
	inline Func_2_t8F844EB8518A7718FB0C7ABDD7C40555FA49F781 ** get_address_of_U3CU3E9__64_0_6() { return &___U3CU3E9__64_0_6; }
	inline void set_U3CU3E9__64_0_6(Func_2_t8F844EB8518A7718FB0C7ABDD7C40555FA49F781 * value)
	{
		___U3CU3E9__64_0_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__64_0_6), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_0
struct  U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5  : public RuntimeObject
{
public:
	// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_0::getExtensionDataDictionary
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___getExtensionDataDictionary_0;
	// System.Reflection.MemberInfo Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_0::member
	MemberInfo_t * ___member_1;

public:
	inline static int32_t get_offset_of_getExtensionDataDictionary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5, ___getExtensionDataDictionary_0)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_getExtensionDataDictionary_0() const { return ___getExtensionDataDictionary_0; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_getExtensionDataDictionary_0() { return &___getExtensionDataDictionary_0; }
	inline void set_getExtensionDataDictionary_0(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___getExtensionDataDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___getExtensionDataDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_member_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5, ___member_1)); }
	inline MemberInfo_t * get_member_1() const { return ___member_1; }
	inline MemberInfo_t ** get_address_of_member_1() { return &___member_1; }
	inline void set_member_1(MemberInfo_t * value)
	{
		___member_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___member_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_1
struct  U3CU3Ec__DisplayClass38_1_t3AA8C8586136BB6D815B1DF622E7E918FA7B4E33  : public RuntimeObject
{
public:
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_1::setExtensionDataDictionary
	Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___setExtensionDataDictionary_0;
	// System.Func`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_1::createExtensionDataDictionary
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___createExtensionDataDictionary_1;
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_1::setExtensionDataDictionaryValue
	MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * ___setExtensionDataDictionaryValue_2;
	// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_0 Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_1::CSU24<>8__locals1
	U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * ___CSU24U3CU3E8__locals1_3;

public:
	inline static int32_t get_offset_of_setExtensionDataDictionary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_t3AA8C8586136BB6D815B1DF622E7E918FA7B4E33, ___setExtensionDataDictionary_0)); }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * get_setExtensionDataDictionary_0() const { return ___setExtensionDataDictionary_0; }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D ** get_address_of_setExtensionDataDictionary_0() { return &___setExtensionDataDictionary_0; }
	inline void set_setExtensionDataDictionary_0(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * value)
	{
		___setExtensionDataDictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setExtensionDataDictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_createExtensionDataDictionary_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_t3AA8C8586136BB6D815B1DF622E7E918FA7B4E33, ___createExtensionDataDictionary_1)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_createExtensionDataDictionary_1() const { return ___createExtensionDataDictionary_1; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_createExtensionDataDictionary_1() { return &___createExtensionDataDictionary_1; }
	inline void set_createExtensionDataDictionary_1(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___createExtensionDataDictionary_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createExtensionDataDictionary_1), (void*)value);
	}

	inline static int32_t get_offset_of_setExtensionDataDictionaryValue_2() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_t3AA8C8586136BB6D815B1DF622E7E918FA7B4E33, ___setExtensionDataDictionaryValue_2)); }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * get_setExtensionDataDictionaryValue_2() const { return ___setExtensionDataDictionaryValue_2; }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 ** get_address_of_setExtensionDataDictionaryValue_2() { return &___setExtensionDataDictionaryValue_2; }
	inline void set_setExtensionDataDictionaryValue_2(MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * value)
	{
		___setExtensionDataDictionaryValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setExtensionDataDictionaryValue_2), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals1_3() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_1_t3AA8C8586136BB6D815B1DF622E7E918FA7B4E33, ___CSU24U3CU3E8__locals1_3)); }
	inline U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * get_CSU24U3CU3E8__locals1_3() const { return ___CSU24U3CU3E8__locals1_3; }
	inline U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 ** get_address_of_CSU24U3CU3E8__locals1_3() { return &___CSU24U3CU3E8__locals1_3; }
	inline void set_CSU24U3CU3E8__locals1_3(U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * value)
	{
		___CSU24U3CU3E8__locals1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals1_3), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_2
struct  U3CU3Ec__DisplayClass38_2_tCCA3CA4FB84DADEBB49F8B4DAEBC7A7B9DE74F14  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_2::createEnumerableWrapper
	ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B * ___createEnumerableWrapper_0;
	// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_0 Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_2::CSU24<>8__locals2
	U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * ___CSU24U3CU3E8__locals2_1;

public:
	inline static int32_t get_offset_of_createEnumerableWrapper_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_2_tCCA3CA4FB84DADEBB49F8B4DAEBC7A7B9DE74F14, ___createEnumerableWrapper_0)); }
	inline ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B * get_createEnumerableWrapper_0() const { return ___createEnumerableWrapper_0; }
	inline ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B ** get_address_of_createEnumerableWrapper_0() { return &___createEnumerableWrapper_0; }
	inline void set_createEnumerableWrapper_0(ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B * value)
	{
		___createEnumerableWrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___createEnumerableWrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_CSU24U3CU3E8__locals2_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass38_2_tCCA3CA4FB84DADEBB49F8B4DAEBC7A7B9DE74F14, ___CSU24U3CU3E8__locals2_1)); }
	inline U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * get_CSU24U3CU3E8__locals2_1() const { return ___CSU24U3CU3E8__locals2_1; }
	inline U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 ** get_address_of_CSU24U3CU3E8__locals2_1() { return &___CSU24U3CU3E8__locals2_1; }
	inline void set_CSU24U3CU3E8__locals2_1(U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * value)
	{
		___CSU24U3CU3E8__locals2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CSU24U3CU3E8__locals2_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass52_0
struct  U3CU3Ec__DisplayClass52_0_t47D44CD99A914B975A5807FF43AA93BB479B9C8C  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass52_0::namingStrategy
	NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568 * ___namingStrategy_0;

public:
	inline static int32_t get_offset_of_namingStrategy_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass52_0_t47D44CD99A914B975A5807FF43AA93BB479B9C8C, ___namingStrategy_0)); }
	inline NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568 * get_namingStrategy_0() const { return ___namingStrategy_0; }
	inline NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568 ** get_address_of_namingStrategy_0() { return &___namingStrategy_0; }
	inline void set_namingStrategy_0(NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568 * value)
	{
		___namingStrategy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___namingStrategy_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass68_0
struct  U3CU3Ec__DisplayClass68_0_t766708EC19046F0BD02D671A2671CD88B70FEA3E  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass68_0::shouldSerializeCall
	MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * ___shouldSerializeCall_0;

public:
	inline static int32_t get_offset_of_shouldSerializeCall_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass68_0_t766708EC19046F0BD02D671A2671CD88B70FEA3E, ___shouldSerializeCall_0)); }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * get_shouldSerializeCall_0() const { return ___shouldSerializeCall_0; }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 ** get_address_of_shouldSerializeCall_0() { return &___shouldSerializeCall_0; }
	inline void set_shouldSerializeCall_0(MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * value)
	{
		___shouldSerializeCall_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shouldSerializeCall_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass69_0
struct  U3CU3Ec__DisplayClass69_0_tFEECEE33CB16927EBB0FFEF0186F58FEFEA79F1E  : public RuntimeObject
{
public:
	// System.Func`2<System.Object,System.Object> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass69_0::specifiedPropertyGet
	Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___specifiedPropertyGet_0;

public:
	inline static int32_t get_offset_of_specifiedPropertyGet_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass69_0_tFEECEE33CB16927EBB0FFEF0186F58FEFEA79F1E, ___specifiedPropertyGet_0)); }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * get_specifiedPropertyGet_0() const { return ___specifiedPropertyGet_0; }
	inline Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 ** get_address_of_specifiedPropertyGet_0() { return &___specifiedPropertyGet_0; }
	inline void set_specifiedPropertyGet_0(Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * value)
	{
		___specifiedPropertyGet_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___specifiedPropertyGet_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.ErrorContext
struct  ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E  : public RuntimeObject
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Traced>k__BackingField
	bool ___U3CTracedU3Ek__BackingField_0;
	// System.Exception Newtonsoft.Json.Serialization.ErrorContext::<Error>k__BackingField
	Exception_t * ___U3CErrorU3Ek__BackingField_1;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<OriginalObject>k__BackingField
	RuntimeObject * ___U3COriginalObjectU3Ek__BackingField_2;
	// System.Object Newtonsoft.Json.Serialization.ErrorContext::<Member>k__BackingField
	RuntimeObject * ___U3CMemberU3Ek__BackingField_3;
	// System.String Newtonsoft.Json.Serialization.ErrorContext::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_4;
	// System.Boolean Newtonsoft.Json.Serialization.ErrorContext::<Handled>k__BackingField
	bool ___U3CHandledU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CTracedU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E, ___U3CTracedU3Ek__BackingField_0)); }
	inline bool get_U3CTracedU3Ek__BackingField_0() const { return ___U3CTracedU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CTracedU3Ek__BackingField_0() { return &___U3CTracedU3Ek__BackingField_0; }
	inline void set_U3CTracedU3Ek__BackingField_0(bool value)
	{
		___U3CTracedU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CErrorU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E, ___U3CErrorU3Ek__BackingField_1)); }
	inline Exception_t * get_U3CErrorU3Ek__BackingField_1() const { return ___U3CErrorU3Ek__BackingField_1; }
	inline Exception_t ** get_address_of_U3CErrorU3Ek__BackingField_1() { return &___U3CErrorU3Ek__BackingField_1; }
	inline void set_U3CErrorU3Ek__BackingField_1(Exception_t * value)
	{
		___U3CErrorU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CErrorU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3COriginalObjectU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E, ___U3COriginalObjectU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3COriginalObjectU3Ek__BackingField_2() const { return ___U3COriginalObjectU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3COriginalObjectU3Ek__BackingField_2() { return &___U3COriginalObjectU3Ek__BackingField_2; }
	inline void set_U3COriginalObjectU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3COriginalObjectU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COriginalObjectU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E, ___U3CMemberU3Ek__BackingField_3)); }
	inline RuntimeObject * get_U3CMemberU3Ek__BackingField_3() const { return ___U3CMemberU3Ek__BackingField_3; }
	inline RuntimeObject ** get_address_of_U3CMemberU3Ek__BackingField_3() { return &___U3CMemberU3Ek__BackingField_3; }
	inline void set_U3CMemberU3Ek__BackingField_3(RuntimeObject * value)
	{
		___U3CMemberU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPathU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E, ___U3CPathU3Ek__BackingField_4)); }
	inline String_t* get_U3CPathU3Ek__BackingField_4() const { return ___U3CPathU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CPathU3Ek__BackingField_4() { return &___U3CPathU3Ek__BackingField_4; }
	inline void set_U3CPathU3Ek__BackingField_4(String_t* value)
	{
		___U3CPathU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPathU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CHandledU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E, ___U3CHandledU3Ek__BackingField_5)); }
	inline bool get_U3CHandledU3Ek__BackingField_5() const { return ___U3CHandledU3Ek__BackingField_5; }
	inline bool* get_address_of_U3CHandledU3Ek__BackingField_5() { return &___U3CHandledU3Ek__BackingField_5; }
	inline void set_U3CHandledU3Ek__BackingField_5(bool value)
	{
		___U3CHandledU3Ek__BackingField_5 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonContract_<>c__DisplayClass73_0
struct  U3CU3Ec__DisplayClass73_0_tDED699F39B829613F6126BA5E1C887311346B7EE  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract_<>c__DisplayClass73_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass73_0_tDED699F39B829613F6126BA5E1C887311346B7EE, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonContract_<>c__DisplayClass74_0
struct  U3CU3Ec__DisplayClass74_0_tEB782E56C6643FDDCF2D7B0E5A2DF0A1AED3AEB8  : public RuntimeObject
{
public:
	// System.Reflection.MethodInfo Newtonsoft.Json.Serialization.JsonContract_<>c__DisplayClass74_0::callbackMethodInfo
	MethodInfo_t * ___callbackMethodInfo_0;

public:
	inline static int32_t get_offset_of_callbackMethodInfo_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass74_0_tEB782E56C6643FDDCF2D7B0E5A2DF0A1AED3AEB8, ___callbackMethodInfo_0)); }
	inline MethodInfo_t * get_callbackMethodInfo_0() const { return ___callbackMethodInfo_0; }
	inline MethodInfo_t ** get_address_of_callbackMethodInfo_0() { return &___callbackMethodInfo_0; }
	inline void set_callbackMethodInfo_0(MethodInfo_t * value)
	{
		___callbackMethodInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callbackMethodInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalBase_ReferenceEqualsEqualityComparer
struct  ReferenceEqualsEqualityComparer_t7D73C0F6ABF9328B677D3328CF1D9490324F625A  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c
struct  U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::<>9
	U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * ___U3CU3E9_0;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::<>9__36_0
	Func_2_t8A367805DEFB9B866B9246A6940244B185C9A4B6 * ___U3CU3E9__36_0_1;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,System.String> Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::<>9__36_2
	Func_2_t8A367805DEFB9B866B9246A6940244B185C9A4B6 * ___U3CU3E9__36_2_2;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonProperty> Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::<>9__41_0
	Func_2_t6B1DF8DB5F95EA0AC83DAD89DF9A793B538580DE * ___U3CU3E9__41_0_3;
	// System.Func`2<Newtonsoft.Json.Serialization.JsonProperty,Newtonsoft.Json.Serialization.JsonSerializerInternalReader_PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::<>9__41_1
	Func_2_t49C09D6B1EC6A842B203BFF46F8691937545DC26 * ___U3CU3E9__41_1_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_StaticFields, ___U3CU3E9__36_0_1)); }
	inline Func_2_t8A367805DEFB9B866B9246A6940244B185C9A4B6 * get_U3CU3E9__36_0_1() const { return ___U3CU3E9__36_0_1; }
	inline Func_2_t8A367805DEFB9B866B9246A6940244B185C9A4B6 ** get_address_of_U3CU3E9__36_0_1() { return &___U3CU3E9__36_0_1; }
	inline void set_U3CU3E9__36_0_1(Func_2_t8A367805DEFB9B866B9246A6940244B185C9A4B6 * value)
	{
		___U3CU3E9__36_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__36_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_StaticFields, ___U3CU3E9__36_2_2)); }
	inline Func_2_t8A367805DEFB9B866B9246A6940244B185C9A4B6 * get_U3CU3E9__36_2_2() const { return ___U3CU3E9__36_2_2; }
	inline Func_2_t8A367805DEFB9B866B9246A6940244B185C9A4B6 ** get_address_of_U3CU3E9__36_2_2() { return &___U3CU3E9__36_2_2; }
	inline void set_U3CU3E9__36_2_2(Func_2_t8A367805DEFB9B866B9246A6940244B185C9A4B6 * value)
	{
		___U3CU3E9__36_2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__36_2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_StaticFields, ___U3CU3E9__41_0_3)); }
	inline Func_2_t6B1DF8DB5F95EA0AC83DAD89DF9A793B538580DE * get_U3CU3E9__41_0_3() const { return ___U3CU3E9__41_0_3; }
	inline Func_2_t6B1DF8DB5F95EA0AC83DAD89DF9A793B538580DE ** get_address_of_U3CU3E9__41_0_3() { return &___U3CU3E9__41_0_3; }
	inline void set_U3CU3E9__41_0_3(Func_2_t6B1DF8DB5F95EA0AC83DAD89DF9A793B538580DE * value)
	{
		___U3CU3E9__41_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__41_1_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_StaticFields, ___U3CU3E9__41_1_4)); }
	inline Func_2_t49C09D6B1EC6A842B203BFF46F8691937545DC26 * get_U3CU3E9__41_1_4() const { return ___U3CU3E9__41_1_4; }
	inline Func_2_t49C09D6B1EC6A842B203BFF46F8691937545DC26 ** get_address_of_U3CU3E9__41_1_4() { return &___U3CU3E9__41_1_4; }
	inline void set_U3CU3E9__41_1_4(Func_2_t49C09D6B1EC6A842B203BFF46F8691937545DC26 * value)
	{
		___U3CU3E9__41_1_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__41_1_4), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c__DisplayClass36_0
struct  U3CU3Ec__DisplayClass36_0_tF59A60BEA88CC88FF146709D13E96A046DB7D43F  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c__DisplayClass36_0::property
	JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * ___property_0;

public:
	inline static int32_t get_offset_of_property_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass36_0_tF59A60BEA88CC88FF146709D13E96A046DB7D43F, ___property_0)); }
	inline JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * get_property_0() const { return ___property_0; }
	inline JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D ** get_address_of_property_0() { return &___property_0; }
	inline void set_property_0(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * value)
	{
		___property_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___property_0), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonTypeReflector_<>c
struct  U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.JsonTypeReflector_<>c Newtonsoft.Json.Serialization.JsonTypeReflector_<>c::<>9
	U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 * ___U3CU3E9_0;
	// System.Func`2<System.Object,System.Type> Newtonsoft.Json.Serialization.JsonTypeReflector_<>c::<>9__20_1
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___U3CU3E9__20_1_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__20_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_StaticFields, ___U3CU3E9__20_1_1)); }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * get_U3CU3E9__20_1_1() const { return ___U3CU3E9__20_1_1; }
	inline Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF ** get_address_of_U3CU3E9__20_1_1() { return &___U3CU3E9__20_1_1; }
	inline void set_U3CU3E9__20_1_1(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * value)
	{
		___U3CU3E9__20_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__20_1_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonTypeReflector_<>c__DisplayClass20_0
struct  U3CU3Ec__DisplayClass20_0_t4372BFC466654BC874AE3B7E8377F4018012ED74  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector_<>c__DisplayClass20_0::type
	Type_t * ___type_0;
	// System.Func`1<System.Object> Newtonsoft.Json.Serialization.JsonTypeReflector_<>c__DisplayClass20_0::defaultConstructor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___defaultConstructor_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t4372BFC466654BC874AE3B7E8377F4018012ED74, ___type_0)); }
	inline Type_t * get_type_0() const { return ___type_0; }
	inline Type_t ** get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(Type_t * value)
	{
		___type_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_0), (void*)value);
	}

	inline static int32_t get_offset_of_defaultConstructor_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass20_0_t4372BFC466654BC874AE3B7E8377F4018012ED74, ___defaultConstructor_1)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_defaultConstructor_1() const { return ___defaultConstructor_1; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_defaultConstructor_1() { return &___defaultConstructor_1; }
	inline void set_defaultConstructor_1(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___defaultConstructor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultConstructor_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.NamingStrategy
struct  NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568  : public RuntimeObject
{
public:
	// System.Boolean Newtonsoft.Json.Serialization.NamingStrategy::<ProcessDictionaryKeys>k__BackingField
	bool ___U3CProcessDictionaryKeysU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Serialization.NamingStrategy::<OverrideSpecifiedNames>k__BackingField
	bool ___U3COverrideSpecifiedNamesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CProcessDictionaryKeysU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568, ___U3CProcessDictionaryKeysU3Ek__BackingField_0)); }
	inline bool get_U3CProcessDictionaryKeysU3Ek__BackingField_0() const { return ___U3CProcessDictionaryKeysU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CProcessDictionaryKeysU3Ek__BackingField_0() { return &___U3CProcessDictionaryKeysU3Ek__BackingField_0; }
	inline void set_U3CProcessDictionaryKeysU3Ek__BackingField_0(bool value)
	{
		___U3CProcessDictionaryKeysU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3COverrideSpecifiedNamesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568, ___U3COverrideSpecifiedNamesU3Ek__BackingField_1)); }
	inline bool get_U3COverrideSpecifiedNamesU3Ek__BackingField_1() const { return ___U3COverrideSpecifiedNamesU3Ek__BackingField_1; }
	inline bool* get_address_of_U3COverrideSpecifiedNamesU3Ek__BackingField_1() { return &___U3COverrideSpecifiedNamesU3Ek__BackingField_1; }
	inline void set_U3COverrideSpecifiedNamesU3Ek__BackingField_1(bool value)
	{
		___U3COverrideSpecifiedNamesU3Ek__BackingField_1 = value;
	}
};


// Newtonsoft.Json.Serialization.ReflectionValueProvider
struct  ReflectionValueProvider_tF9FF9FF758973AF2DD858CAF7C12E085E540B45D  : public RuntimeObject
{
public:
	// System.Reflection.MemberInfo Newtonsoft.Json.Serialization.ReflectionValueProvider::_memberInfo
	MemberInfo_t * ____memberInfo_0;

public:
	inline static int32_t get_offset_of__memberInfo_0() { return static_cast<int32_t>(offsetof(ReflectionValueProvider_tF9FF9FF758973AF2DD858CAF7C12E085E540B45D, ____memberInfo_0)); }
	inline MemberInfo_t * get__memberInfo_0() const { return ____memberInfo_0; }
	inline MemberInfo_t ** get_address_of__memberInfo_0() { return &____memberInfo_0; }
	inline void set__memberInfo_0(MemberInfo_t * value)
	{
		____memberInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____memberInfo_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ConvertUtils_<>c__DisplayClass9_0
struct  U3CU3Ec__DisplayClass9_0_t3A4E56C60CDCDA0E3AE51AF8172FB902A9BBC187  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ConvertUtils_<>c__DisplayClass9_0::call
	MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass9_0_t3A4E56C60CDCDA0E3AE51AF8172FB902A9BBC187, ___call_0)); }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.EnumUtils_<>c
struct  U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.EnumUtils_<>c Newtonsoft.Json.Utilities.EnumUtils_<>c::<>9
	U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 * ___U3CU3E9_0;
	// System.Func`2<System.Runtime.Serialization.EnumMemberAttribute,System.String> Newtonsoft.Json.Utilities.EnumUtils_<>c::<>9__1_0
	Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 * ___U3CU3E9__1_0_1;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.EnumUtils_<>c::<>9__5_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__5_0_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72_StaticFields, ___U3CU3E9__1_0_1)); }
	inline Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 * get_U3CU3E9__1_0_1() const { return ___U3CU3E9__1_0_1; }
	inline Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 ** get_address_of_U3CU3E9__1_0_1() { return &___U3CU3E9__1_0_1; }
	inline void set_U3CU3E9__1_0_1(Func_2_t09CC0ED4CE7ACCBB7C2AD9459E3258393A2525F6 * value)
	{
		___U3CU3E9__1_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__5_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72_StaticFields, ___U3CU3E9__5_0_2)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__5_0_2() const { return ___U3CU3E9__5_0_2; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__5_0_2() { return &___U3CU3E9__5_0_2; }
	inline void set_U3CU3E9__5_0_2(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__5_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__5_0_2), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass3_0
struct  U3CU3Ec__DisplayClass3_0_t698D68F8A4832DC94BD91657BD958CE2ECB410E0  : public RuntimeObject
{
public:
	// System.Reflection.ConstructorInfo Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass3_0::c
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c_0;
	// System.Reflection.MethodBase Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass3_0::method
	MethodBase_t * ___method_1;

public:
	inline static int32_t get_offset_of_c_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t698D68F8A4832DC94BD91657BD958CE2ECB410E0, ___c_0)); }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * get_c_0() const { return ___c_0; }
	inline ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B ** get_address_of_c_0() { return &___c_0; }
	inline void set_c_0(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * value)
	{
		___c_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___c_0), (void*)value);
	}

	inline static int32_t get_offset_of_method_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t698D68F8A4832DC94BD91657BD958CE2ECB410E0, ___method_1)); }
	inline MethodBase_t * get_method_1() const { return ___method_1; }
	inline MethodBase_t ** get_address_of_method_1() { return &___method_1; }
	inline void set_method_1(MethodBase_t * value)
	{
		___method_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_1), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.PropertyNameTable_Entry
struct  Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Utilities.PropertyNameTable_Entry::Value
	String_t* ___Value_0;
	// System.Int32 Newtonsoft.Json.Utilities.PropertyNameTable_Entry::HashCode
	int32_t ___HashCode_1;
	// Newtonsoft.Json.Utilities.PropertyNameTable_Entry Newtonsoft.Json.Utilities.PropertyNameTable_Entry::Next
	Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8 * ___Next_2;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8, ___Value_0)); }
	inline String_t* get_Value_0() const { return ___Value_0; }
	inline String_t** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(String_t* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}

	inline static int32_t get_offset_of_HashCode_1() { return static_cast<int32_t>(offsetof(Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8, ___HashCode_1)); }
	inline int32_t get_HashCode_1() const { return ___HashCode_1; }
	inline int32_t* get_address_of_HashCode_1() { return &___HashCode_1; }
	inline void set_HashCode_1(int32_t value)
	{
		___HashCode_1 = value;
	}

	inline static int32_t get_offset_of_Next_2() { return static_cast<int32_t>(offsetof(Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8, ___Next_2)); }
	inline Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8 * get_Next_2() const { return ___Next_2; }
	inline Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8 ** get_address_of_Next_2() { return &___Next_2; }
	inline void set_Next_2(Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8 * value)
	{
		___Next_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Next_2), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionDelegateFactory
struct  ReflectionDelegateFactory_tBCB2E4D5639132D3DFF7CA2CFFAB903183670A16  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_0
struct  U3CU3Ec__DisplayClass13_0_tD27FF2F8A49FF27EF149F9E61BB6C981251F9544  : public RuntimeObject
{
public:
	// System.Func`1<System.Object> Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_0::ctor
	Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___ctor_0;

public:
	inline static int32_t get_offset_of_ctor_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_0_tD27FF2F8A49FF27EF149F9E61BB6C981251F9544, ___ctor_0)); }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * get_ctor_0() const { return ___ctor_0; }
	inline Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 ** get_address_of_ctor_0() { return &___ctor_0; }
	inline void set_ctor_0(Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * value)
	{
		___ctor_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ctor_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_1
struct  U3CU3Ec__DisplayClass13_1_t414A08FA62A08F6B9CB2E1510140AB05021714E8  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_1::call
	MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_1_t414A08FA62A08F6B9CB2E1510140AB05021714E8, ___call_0)); }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_2
struct  U3CU3Ec__DisplayClass13_2_tA55985BA4FFD8AF33D671764AB13EC410498FBCE  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object> Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_2::call
	MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * ___call_0;

public:
	inline static int32_t get_offset_of_call_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass13_2_tA55985BA4FFD8AF33D671764AB13EC410498FBCE, ___call_0)); }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * get_call_0() const { return ___call_0; }
	inline MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 ** get_address_of_call_0() { return &___call_0; }
	inline void set_call_0(MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * value)
	{
		___call_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___call_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils_<>c
struct  U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_StaticFields
{
public:
	// Newtonsoft.Json.Utilities.ReflectionUtils_<>c Newtonsoft.Json.Utilities.ReflectionUtils_<>c::<>9
	U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * ___U3CU3E9_0;
	// System.Func`2<System.Reflection.ConstructorInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils_<>c::<>9__10_0
	Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * ___U3CU3E9__10_0_1;
	// System.Func`2<System.Reflection.MemberInfo,System.String> Newtonsoft.Json.Utilities.ReflectionUtils_<>c::<>9__29_0
	Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * ___U3CU3E9__29_0_2;
	// System.Func`2<System.Reflection.ParameterInfo,System.Type> Newtonsoft.Json.Utilities.ReflectionUtils_<>c::<>9__37_0
	Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * ___U3CU3E9__37_0_3;
	// System.Func`2<System.Reflection.FieldInfo,System.Boolean> Newtonsoft.Json.Utilities.ReflectionUtils_<>c::<>9__39_0
	Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * ___U3CU3E9__39_0_4;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__10_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_StaticFields, ___U3CU3E9__10_0_1)); }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * get_U3CU3E9__10_0_1() const { return ___U3CU3E9__10_0_1; }
	inline Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C ** get_address_of_U3CU3E9__10_0_1() { return &___U3CU3E9__10_0_1; }
	inline void set_U3CU3E9__10_0_1(Func_2_t6D7DD0FE4DA742E557BDCA2D3A8E6D7638B5673C * value)
	{
		___U3CU3E9__10_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__10_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__29_0_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_StaticFields, ___U3CU3E9__29_0_2)); }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * get_U3CU3E9__29_0_2() const { return ___U3CU3E9__29_0_2; }
	inline Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 ** get_address_of_U3CU3E9__29_0_2() { return &___U3CU3E9__29_0_2; }
	inline void set_U3CU3E9__29_0_2(Func_2_t82BDCCD3F9984E63AFAFFE2E311FD4AA25753329 * value)
	{
		___U3CU3E9__29_0_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__29_0_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__37_0_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_StaticFields, ___U3CU3E9__37_0_3)); }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * get_U3CU3E9__37_0_3() const { return ___U3CU3E9__37_0_3; }
	inline Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF ** get_address_of_U3CU3E9__37_0_3() { return &___U3CU3E9__37_0_3; }
	inline void set_U3CU3E9__37_0_3(Func_2_t5938BB484083AB6B9B4C4F0DBAD54A7F51611EBF * value)
	{
		___U3CU3E9__37_0_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__37_0_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__39_0_4() { return static_cast<int32_t>(offsetof(U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_StaticFields, ___U3CU3E9__39_0_4)); }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * get_U3CU3E9__39_0_4() const { return ___U3CU3E9__39_0_4; }
	inline Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE ** get_address_of_U3CU3E9__39_0_4() { return &___U3CU3E9__39_0_4; }
	inline void set_U3CU3E9__39_0_4(Func_2_t0BE5B54DD65017DAF1DC5DEC5A896A2B0550F8AE * value)
	{
		___U3CU3E9__39_0_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__39_0_4), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.ReflectionUtils_<>c__DisplayClass42_0
struct  U3CU3Ec__DisplayClass42_0_tA195C0D57C247970275535F099F05968450BDC91  : public RuntimeObject
{
public:
	// System.Reflection.PropertyInfo Newtonsoft.Json.Utilities.ReflectionUtils_<>c__DisplayClass42_0::subTypeProperty
	PropertyInfo_t * ___subTypeProperty_0;

public:
	inline static int32_t get_offset_of_subTypeProperty_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass42_0_tA195C0D57C247970275535F099F05968450BDC91, ___subTypeProperty_0)); }
	inline PropertyInfo_t * get_subTypeProperty_0() const { return ___subTypeProperty_0; }
	inline PropertyInfo_t ** get_address_of_subTypeProperty_0() { return &___subTypeProperty_0; }
	inline void set_subTypeProperty_0(PropertyInfo_t * value)
	{
		___subTypeProperty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subTypeProperty_0), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.StringReferenceExtensions
struct  StringReferenceExtensions_tEBA311DB9C048C894D9C1B6D8F01A4E4501F3327  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.StringUtils
struct  StringUtils_t3EA5628D6D6700734183C5E2BCFB2E99847AFD49  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.TypeExtensions
struct  TypeExtensions_tD99B77AB667AB754CDF59B0A6E9BCB48DFF86B7D  : public RuntimeObject
{
public:

public:
};


// Newtonsoft.Json.Utilities.ValidationUtils
struct  ValidationUtils_t8BE4C33FF8FD0E35B59DAE8720C3C870C506A1CC  : public RuntimeObject
{
public:

public:
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<System.Reflection.MemberInfo>
struct  List_1_t1E053584366104694FDDFF723CE187EAD7F857B0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____items_1)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__items_1() const { return ____items_1; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_StaticFields, ____emptyArray_5)); }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(MemberInfoU5BU5D_t04CE6CC3692D77C74DC079E7CAF110CBF031C99E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>
struct  Collection_1_t2780FE79A65D8916FD76F5B194AF02532CF85CD1  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.Collection`1::items
	RuntimeObject* ___items_0;
	// System.Object System.Collections.ObjectModel.Collection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_items_0() { return static_cast<int32_t>(offsetof(Collection_1_t2780FE79A65D8916FD76F5B194AF02532CF85CD1, ___items_0)); }
	inline RuntimeObject* get_items_0() const { return ___items_0; }
	inline RuntimeObject** get_address_of_items_0() { return &___items_0; }
	inline void set_items_0(RuntimeObject* value)
	{
		___items_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___items_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(Collection_1_t2780FE79A65D8916FD76F5B194AF02532CF85CD1, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.Globalization.CultureInfo
struct  CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98  : public RuntimeObject
{
public:
	// System.Boolean System.Globalization.CultureInfo::m_isReadOnly
	bool ___m_isReadOnly_3;
	// System.Int32 System.Globalization.CultureInfo::cultureID
	int32_t ___cultureID_4;
	// System.Int32 System.Globalization.CultureInfo::parent_lcid
	int32_t ___parent_lcid_5;
	// System.Int32 System.Globalization.CultureInfo::datetime_index
	int32_t ___datetime_index_6;
	// System.Int32 System.Globalization.CultureInfo::number_index
	int32_t ___number_index_7;
	// System.Int32 System.Globalization.CultureInfo::default_calendar_type
	int32_t ___default_calendar_type_8;
	// System.Boolean System.Globalization.CultureInfo::m_useUserOverride
	bool ___m_useUserOverride_9;
	// System.Globalization.NumberFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::numInfo
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	// System.Globalization.DateTimeFormatInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::dateTimeInfo
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	// System.Globalization.TextInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::textInfo
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	// System.String System.Globalization.CultureInfo::m_name
	String_t* ___m_name_13;
	// System.String System.Globalization.CultureInfo::englishname
	String_t* ___englishname_14;
	// System.String System.Globalization.CultureInfo::nativename
	String_t* ___nativename_15;
	// System.String System.Globalization.CultureInfo::iso3lang
	String_t* ___iso3lang_16;
	// System.String System.Globalization.CultureInfo::iso2lang
	String_t* ___iso2lang_17;
	// System.String System.Globalization.CultureInfo::win3lang
	String_t* ___win3lang_18;
	// System.String System.Globalization.CultureInfo::territory
	String_t* ___territory_19;
	// System.String[] System.Globalization.CultureInfo::native_calendar_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___native_calendar_names_20;
	// System.Globalization.CompareInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::compareInfo
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	// System.Void* System.Globalization.CultureInfo::textinfo_data
	void* ___textinfo_data_22;
	// System.Int32 System.Globalization.CultureInfo::m_dataItem
	int32_t ___m_dataItem_23;
	// System.Globalization.Calendar System.Globalization.CultureInfo::calendar
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::parent_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___parent_culture_25;
	// System.Boolean System.Globalization.CultureInfo::constructed
	bool ___constructed_26;
	// System.Byte[] System.Globalization.CultureInfo::cached_serialized_form
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___cached_serialized_form_27;
	// System.Globalization.CultureData System.Globalization.CultureInfo::m_cultureData
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * ___m_cultureData_28;
	// System.Boolean System.Globalization.CultureInfo::m_isInherited
	bool ___m_isInherited_29;

public:
	inline static int32_t get_offset_of_m_isReadOnly_3() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isReadOnly_3)); }
	inline bool get_m_isReadOnly_3() const { return ___m_isReadOnly_3; }
	inline bool* get_address_of_m_isReadOnly_3() { return &___m_isReadOnly_3; }
	inline void set_m_isReadOnly_3(bool value)
	{
		___m_isReadOnly_3 = value;
	}

	inline static int32_t get_offset_of_cultureID_4() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cultureID_4)); }
	inline int32_t get_cultureID_4() const { return ___cultureID_4; }
	inline int32_t* get_address_of_cultureID_4() { return &___cultureID_4; }
	inline void set_cultureID_4(int32_t value)
	{
		___cultureID_4 = value;
	}

	inline static int32_t get_offset_of_parent_lcid_5() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_lcid_5)); }
	inline int32_t get_parent_lcid_5() const { return ___parent_lcid_5; }
	inline int32_t* get_address_of_parent_lcid_5() { return &___parent_lcid_5; }
	inline void set_parent_lcid_5(int32_t value)
	{
		___parent_lcid_5 = value;
	}

	inline static int32_t get_offset_of_datetime_index_6() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___datetime_index_6)); }
	inline int32_t get_datetime_index_6() const { return ___datetime_index_6; }
	inline int32_t* get_address_of_datetime_index_6() { return &___datetime_index_6; }
	inline void set_datetime_index_6(int32_t value)
	{
		___datetime_index_6 = value;
	}

	inline static int32_t get_offset_of_number_index_7() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___number_index_7)); }
	inline int32_t get_number_index_7() const { return ___number_index_7; }
	inline int32_t* get_address_of_number_index_7() { return &___number_index_7; }
	inline void set_number_index_7(int32_t value)
	{
		___number_index_7 = value;
	}

	inline static int32_t get_offset_of_default_calendar_type_8() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___default_calendar_type_8)); }
	inline int32_t get_default_calendar_type_8() const { return ___default_calendar_type_8; }
	inline int32_t* get_address_of_default_calendar_type_8() { return &___default_calendar_type_8; }
	inline void set_default_calendar_type_8(int32_t value)
	{
		___default_calendar_type_8 = value;
	}

	inline static int32_t get_offset_of_m_useUserOverride_9() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_useUserOverride_9)); }
	inline bool get_m_useUserOverride_9() const { return ___m_useUserOverride_9; }
	inline bool* get_address_of_m_useUserOverride_9() { return &___m_useUserOverride_9; }
	inline void set_m_useUserOverride_9(bool value)
	{
		___m_useUserOverride_9 = value;
	}

	inline static int32_t get_offset_of_numInfo_10() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___numInfo_10)); }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * get_numInfo_10() const { return ___numInfo_10; }
	inline NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D ** get_address_of_numInfo_10() { return &___numInfo_10; }
	inline void set_numInfo_10(NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * value)
	{
		___numInfo_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___numInfo_10), (void*)value);
	}

	inline static int32_t get_offset_of_dateTimeInfo_11() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___dateTimeInfo_11)); }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * get_dateTimeInfo_11() const { return ___dateTimeInfo_11; }
	inline DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 ** get_address_of_dateTimeInfo_11() { return &___dateTimeInfo_11; }
	inline void set_dateTimeInfo_11(DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * value)
	{
		___dateTimeInfo_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dateTimeInfo_11), (void*)value);
	}

	inline static int32_t get_offset_of_textInfo_12() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textInfo_12)); }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * get_textInfo_12() const { return ___textInfo_12; }
	inline TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C ** get_address_of_textInfo_12() { return &___textInfo_12; }
	inline void set_textInfo_12(TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * value)
	{
		___textInfo_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_name_13() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_name_13)); }
	inline String_t* get_m_name_13() const { return ___m_name_13; }
	inline String_t** get_address_of_m_name_13() { return &___m_name_13; }
	inline void set_m_name_13(String_t* value)
	{
		___m_name_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_name_13), (void*)value);
	}

	inline static int32_t get_offset_of_englishname_14() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___englishname_14)); }
	inline String_t* get_englishname_14() const { return ___englishname_14; }
	inline String_t** get_address_of_englishname_14() { return &___englishname_14; }
	inline void set_englishname_14(String_t* value)
	{
		___englishname_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___englishname_14), (void*)value);
	}

	inline static int32_t get_offset_of_nativename_15() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___nativename_15)); }
	inline String_t* get_nativename_15() const { return ___nativename_15; }
	inline String_t** get_address_of_nativename_15() { return &___nativename_15; }
	inline void set_nativename_15(String_t* value)
	{
		___nativename_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nativename_15), (void*)value);
	}

	inline static int32_t get_offset_of_iso3lang_16() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso3lang_16)); }
	inline String_t* get_iso3lang_16() const { return ___iso3lang_16; }
	inline String_t** get_address_of_iso3lang_16() { return &___iso3lang_16; }
	inline void set_iso3lang_16(String_t* value)
	{
		___iso3lang_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso3lang_16), (void*)value);
	}

	inline static int32_t get_offset_of_iso2lang_17() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___iso2lang_17)); }
	inline String_t* get_iso2lang_17() const { return ___iso2lang_17; }
	inline String_t** get_address_of_iso2lang_17() { return &___iso2lang_17; }
	inline void set_iso2lang_17(String_t* value)
	{
		___iso2lang_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___iso2lang_17), (void*)value);
	}

	inline static int32_t get_offset_of_win3lang_18() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___win3lang_18)); }
	inline String_t* get_win3lang_18() const { return ___win3lang_18; }
	inline String_t** get_address_of_win3lang_18() { return &___win3lang_18; }
	inline void set_win3lang_18(String_t* value)
	{
		___win3lang_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___win3lang_18), (void*)value);
	}

	inline static int32_t get_offset_of_territory_19() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___territory_19)); }
	inline String_t* get_territory_19() const { return ___territory_19; }
	inline String_t** get_address_of_territory_19() { return &___territory_19; }
	inline void set_territory_19(String_t* value)
	{
		___territory_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___territory_19), (void*)value);
	}

	inline static int32_t get_offset_of_native_calendar_names_20() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___native_calendar_names_20)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_native_calendar_names_20() const { return ___native_calendar_names_20; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_native_calendar_names_20() { return &___native_calendar_names_20; }
	inline void set_native_calendar_names_20(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___native_calendar_names_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_calendar_names_20), (void*)value);
	}

	inline static int32_t get_offset_of_compareInfo_21() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___compareInfo_21)); }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * get_compareInfo_21() const { return ___compareInfo_21; }
	inline CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 ** get_address_of_compareInfo_21() { return &___compareInfo_21; }
	inline void set_compareInfo_21(CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * value)
	{
		___compareInfo_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compareInfo_21), (void*)value);
	}

	inline static int32_t get_offset_of_textinfo_data_22() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___textinfo_data_22)); }
	inline void* get_textinfo_data_22() const { return ___textinfo_data_22; }
	inline void** get_address_of_textinfo_data_22() { return &___textinfo_data_22; }
	inline void set_textinfo_data_22(void* value)
	{
		___textinfo_data_22 = value;
	}

	inline static int32_t get_offset_of_m_dataItem_23() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_dataItem_23)); }
	inline int32_t get_m_dataItem_23() const { return ___m_dataItem_23; }
	inline int32_t* get_address_of_m_dataItem_23() { return &___m_dataItem_23; }
	inline void set_m_dataItem_23(int32_t value)
	{
		___m_dataItem_23 = value;
	}

	inline static int32_t get_offset_of_calendar_24() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___calendar_24)); }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * get_calendar_24() const { return ___calendar_24; }
	inline Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A ** get_address_of_calendar_24() { return &___calendar_24; }
	inline void set_calendar_24(Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * value)
	{
		___calendar_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___calendar_24), (void*)value);
	}

	inline static int32_t get_offset_of_parent_culture_25() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___parent_culture_25)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_parent_culture_25() const { return ___parent_culture_25; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_parent_culture_25() { return &___parent_culture_25; }
	inline void set_parent_culture_25(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___parent_culture_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_culture_25), (void*)value);
	}

	inline static int32_t get_offset_of_constructed_26() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___constructed_26)); }
	inline bool get_constructed_26() const { return ___constructed_26; }
	inline bool* get_address_of_constructed_26() { return &___constructed_26; }
	inline void set_constructed_26(bool value)
	{
		___constructed_26 = value;
	}

	inline static int32_t get_offset_of_cached_serialized_form_27() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___cached_serialized_form_27)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_cached_serialized_form_27() const { return ___cached_serialized_form_27; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_cached_serialized_form_27() { return &___cached_serialized_form_27; }
	inline void set_cached_serialized_form_27(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___cached_serialized_form_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cached_serialized_form_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_cultureData_28() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_cultureData_28)); }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * get_m_cultureData_28() const { return ___m_cultureData_28; }
	inline CultureData_t53CDF1C5F789A28897415891667799420D3C5529 ** get_address_of_m_cultureData_28() { return &___m_cultureData_28; }
	inline void set_m_cultureData_28(CultureData_t53CDF1C5F789A28897415891667799420D3C5529 * value)
	{
		___m_cultureData_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cultureData_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_isInherited_29() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98, ___m_isInherited_29)); }
	inline bool get_m_isInherited_29() const { return ___m_isInherited_29; }
	inline bool* get_address_of_m_isInherited_29() { return &___m_isInherited_29; }
	inline void set_m_isInherited_29(bool value)
	{
		___m_isInherited_29 = value;
	}
};

struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields
{
public:
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::invariant_culture_info
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___invariant_culture_info_0;
	// System.Object System.Globalization.CultureInfo::shared_table_lock
	RuntimeObject * ___shared_table_lock_1;
	// System.Globalization.CultureInfo System.Globalization.CultureInfo::default_current_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___default_current_culture_2;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentUICulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentUICulture_33;
	// System.Globalization.CultureInfo modreq(System.Runtime.CompilerServices.IsVolatile) System.Globalization.CultureInfo::s_DefaultThreadCurrentCulture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___s_DefaultThreadCurrentCulture_34;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_number
	Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * ___shared_by_number_35;
	// System.Collections.Generic.Dictionary`2<System.String,System.Globalization.CultureInfo> System.Globalization.CultureInfo::shared_by_name
	Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * ___shared_by_name_36;
	// System.Boolean System.Globalization.CultureInfo::IsTaiwanSku
	bool ___IsTaiwanSku_37;

public:
	inline static int32_t get_offset_of_invariant_culture_info_0() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___invariant_culture_info_0)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_invariant_culture_info_0() const { return ___invariant_culture_info_0; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_invariant_culture_info_0() { return &___invariant_culture_info_0; }
	inline void set_invariant_culture_info_0(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___invariant_culture_info_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invariant_culture_info_0), (void*)value);
	}

	inline static int32_t get_offset_of_shared_table_lock_1() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_table_lock_1)); }
	inline RuntimeObject * get_shared_table_lock_1() const { return ___shared_table_lock_1; }
	inline RuntimeObject ** get_address_of_shared_table_lock_1() { return &___shared_table_lock_1; }
	inline void set_shared_table_lock_1(RuntimeObject * value)
	{
		___shared_table_lock_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_table_lock_1), (void*)value);
	}

	inline static int32_t get_offset_of_default_current_culture_2() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___default_current_culture_2)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_default_current_culture_2() const { return ___default_current_culture_2; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_default_current_culture_2() { return &___default_current_culture_2; }
	inline void set_default_current_culture_2(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___default_current_culture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___default_current_culture_2), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentUICulture_33() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentUICulture_33)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentUICulture_33() const { return ___s_DefaultThreadCurrentUICulture_33; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentUICulture_33() { return &___s_DefaultThreadCurrentUICulture_33; }
	inline void set_s_DefaultThreadCurrentUICulture_33(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentUICulture_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentUICulture_33), (void*)value);
	}

	inline static int32_t get_offset_of_s_DefaultThreadCurrentCulture_34() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___s_DefaultThreadCurrentCulture_34)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get_s_DefaultThreadCurrentCulture_34() const { return ___s_DefaultThreadCurrentCulture_34; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of_s_DefaultThreadCurrentCulture_34() { return &___s_DefaultThreadCurrentCulture_34; }
	inline void set_s_DefaultThreadCurrentCulture_34(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		___s_DefaultThreadCurrentCulture_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultThreadCurrentCulture_34), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_number_35() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_number_35)); }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * get_shared_by_number_35() const { return ___shared_by_number_35; }
	inline Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 ** get_address_of_shared_by_number_35() { return &___shared_by_number_35; }
	inline void set_shared_by_number_35(Dictionary_2_t5B8303F2C9869A39ED3E03C0FBB09F817E479402 * value)
	{
		___shared_by_number_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_number_35), (void*)value);
	}

	inline static int32_t get_offset_of_shared_by_name_36() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___shared_by_name_36)); }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * get_shared_by_name_36() const { return ___shared_by_name_36; }
	inline Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC ** get_address_of_shared_by_name_36() { return &___shared_by_name_36; }
	inline void set_shared_by_name_36(Dictionary_2_t0015CBF964B0687CBB5ECFDDE06671A8F3DDE4BC * value)
	{
		___shared_by_name_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shared_by_name_36), (void*)value);
	}

	inline static int32_t get_offset_of_IsTaiwanSku_37() { return static_cast<int32_t>(offsetof(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_StaticFields, ___IsTaiwanSku_37)); }
	inline bool get_IsTaiwanSku_37() const { return ___IsTaiwanSku_37; }
	inline bool* get_address_of_IsTaiwanSku_37() { return &___IsTaiwanSku_37; }
	inline void set_IsTaiwanSku_37(bool value)
	{
		___IsTaiwanSku_37 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	char* ___m_name_13;
	char* ___englishname_14;
	char* ___nativename_15;
	char* ___iso3lang_16;
	char* ___iso2lang_17;
	char* ___win3lang_18;
	char* ___territory_19;
	char** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_pinvoke* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_pinvoke* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};
// Native definition for COM marshalling of System.Globalization.CultureInfo
struct CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com
{
	int32_t ___m_isReadOnly_3;
	int32_t ___cultureID_4;
	int32_t ___parent_lcid_5;
	int32_t ___datetime_index_6;
	int32_t ___number_index_7;
	int32_t ___default_calendar_type_8;
	int32_t ___m_useUserOverride_9;
	NumberFormatInfo_t58780B43B6A840C38FD10C50CDFE2128884CAD1D * ___numInfo_10;
	DateTimeFormatInfo_t0B9F6CA631A51CFC98A3C6031CF8069843137C90 * ___dateTimeInfo_11;
	TextInfo_tE823D0684BFE8B203501C9B2B38585E8F06E872C * ___textInfo_12;
	Il2CppChar* ___m_name_13;
	Il2CppChar* ___englishname_14;
	Il2CppChar* ___nativename_15;
	Il2CppChar* ___iso3lang_16;
	Il2CppChar* ___iso2lang_17;
	Il2CppChar* ___win3lang_18;
	Il2CppChar* ___territory_19;
	Il2CppChar** ___native_calendar_names_20;
	CompareInfo_t4AB62EC32E8AF1E469E315620C7E3FB8B0CAE0C9 * ___compareInfo_21;
	void* ___textinfo_data_22;
	int32_t ___m_dataItem_23;
	Calendar_t3D638AEAB45F029DF47138EDA4CF9A7CBBB1C32A * ___calendar_24;
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_marshaled_com* ___parent_culture_25;
	int32_t ___constructed_26;
	Il2CppSafeArray/*NONE*/* ___cached_serialized_form_27;
	CultureData_t53CDF1C5F789A28897415891667799420D3C5529_marshaled_com* ___m_cultureData_28;
	int32_t ___m_isInherited_29;
};

// System.MarshalByRefObject
struct  MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8  : public RuntimeObject
{
public:
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject * ____identity_0;

public:
	inline static int32_t get_offset_of__identity_0() { return static_cast<int32_t>(offsetof(MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8, ____identity_0)); }
	inline RuntimeObject * get__identity_0() const { return ____identity_0; }
	inline RuntimeObject ** get_address_of__identity_0() { return &____identity_0; }
	inline void set__identity_0(RuntimeObject * value)
	{
		____identity_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____identity_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
};

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct  StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.Version
struct  Version_tBDAEDED25425A1D09910468B8BD1759115646E3C  : public RuntimeObject
{
public:
	// System.Int32 System.Version::_Major
	int32_t ____Major_0;
	// System.Int32 System.Version::_Minor
	int32_t ____Minor_1;
	// System.Int32 System.Version::_Build
	int32_t ____Build_2;
	// System.Int32 System.Version::_Revision
	int32_t ____Revision_3;

public:
	inline static int32_t get_offset_of__Major_0() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Major_0)); }
	inline int32_t get__Major_0() const { return ____Major_0; }
	inline int32_t* get_address_of__Major_0() { return &____Major_0; }
	inline void set__Major_0(int32_t value)
	{
		____Major_0 = value;
	}

	inline static int32_t get_offset_of__Minor_1() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Minor_1)); }
	inline int32_t get__Minor_1() const { return ____Minor_1; }
	inline int32_t* get_address_of__Minor_1() { return &____Minor_1; }
	inline void set__Minor_1(int32_t value)
	{
		____Minor_1 = value;
	}

	inline static int32_t get_offset_of__Build_2() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Build_2)); }
	inline int32_t get__Build_2() const { return ____Build_2; }
	inline int32_t* get_address_of__Build_2() { return &____Build_2; }
	inline void set__Build_2(int32_t value)
	{
		____Build_2 = value;
	}

	inline static int32_t get_offset_of__Revision_3() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C, ____Revision_3)); }
	inline int32_t get__Revision_3() const { return ____Revision_3; }
	inline int32_t* get_address_of__Revision_3() { return &____Revision_3; }
	inline void set__Revision_3(int32_t value)
	{
		____Revision_3 = value;
	}
};

struct Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields
{
public:
	// System.Char[] System.Version::SeparatorsArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SeparatorsArray_4;

public:
	inline static int32_t get_offset_of_SeparatorsArray_4() { return static_cast<int32_t>(offsetof(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_StaticFields, ___SeparatorsArray_4)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SeparatorsArray_4() const { return ___SeparatorsArray_4; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SeparatorsArray_4() { return &___SeparatorsArray_4; }
	inline void set_SeparatorsArray_4(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SeparatorsArray_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeparatorsArray_4), (void*)value);
	}
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D10
struct  __StaticArrayInitTypeSizeU3D10_t4C720D6FE03A095F9D343DC8307366B4EAA2CE15 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D10_t4C720D6FE03A095F9D343DC8307366B4EAA2CE15__padding[10];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D12
struct  __StaticArrayInitTypeSizeU3D12_t0F93D0D0254E95CB115A8942C51F6FA62BD6E14B 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D12_t0F93D0D0254E95CB115A8942C51F6FA62BD6E14B__padding[12];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D28
struct  __StaticArrayInitTypeSizeU3D28_tD21849499F668C3CA0320FB7DA71DF7E3041CDA3 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D28_tD21849499F668C3CA0320FB7DA71DF7E3041CDA3__padding[28];
	};

public:
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D52
struct  __StaticArrayInitTypeSizeU3D52_tC2EACC2C9146EF5CCC9EA68DEB2481E3D7EED376 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D52_tC2EACC2C9146EF5CCC9EA68DEB2481E3D7EED376__padding[52];
	};

public:
};


// Newtonsoft.Json.Converters.RegexConverter
struct  RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73  : public JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078
{
public:

public:
};


// Newtonsoft.Json.Converters.StringEnumConverter
struct  StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E  : public JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078
{
public:
	// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::<CamelCaseText>k__BackingField
	bool ___U3CCamelCaseTextU3Ek__BackingField_0;
	// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::<AllowIntegerValues>k__BackingField
	bool ___U3CAllowIntegerValuesU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CCamelCaseTextU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E, ___U3CCamelCaseTextU3Ek__BackingField_0)); }
	inline bool get_U3CCamelCaseTextU3Ek__BackingField_0() const { return ___U3CCamelCaseTextU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CCamelCaseTextU3Ek__BackingField_0() { return &___U3CCamelCaseTextU3Ek__BackingField_0; }
	inline void set_U3CCamelCaseTextU3Ek__BackingField_0(bool value)
	{
		___U3CCamelCaseTextU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CAllowIntegerValuesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E, ___U3CAllowIntegerValuesU3Ek__BackingField_1)); }
	inline bool get_U3CAllowIntegerValuesU3Ek__BackingField_1() const { return ___U3CAllowIntegerValuesU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CAllowIntegerValuesU3Ek__BackingField_1() { return &___U3CAllowIntegerValuesU3Ek__BackingField_1; }
	inline void set_U3CAllowIntegerValuesU3Ek__BackingField_1(bool value)
	{
		___U3CAllowIntegerValuesU3Ek__BackingField_1 = value;
	}
};


// Newtonsoft.Json.Converters.VersionConverter
struct  VersionConverter_t9BE2693D5B5F36AE882FABD6AB022254124E59E2  : public JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078
{
public:

public:
};


// Newtonsoft.Json.Linq.JContainer
struct  JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15  : public JToken_t517F0381C4450A4525D6FA3480318381CE06C980
{
public:
	// System.Object Newtonsoft.Json.Linq.JContainer::_syncRoot
	RuntimeObject * ____syncRoot_14;
	// System.Boolean Newtonsoft.Json.Linq.JContainer::_busy
	bool ____busy_15;

public:
	inline static int32_t get_offset_of__syncRoot_14() { return static_cast<int32_t>(offsetof(JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15, ____syncRoot_14)); }
	inline RuntimeObject * get__syncRoot_14() const { return ____syncRoot_14; }
	inline RuntimeObject ** get_address_of__syncRoot_14() { return &____syncRoot_14; }
	inline void set__syncRoot_14(RuntimeObject * value)
	{
		____syncRoot_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_14), (void*)value);
	}

	inline static int32_t get_offset_of__busy_15() { return static_cast<int32_t>(offsetof(JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15, ____busy_15)); }
	inline bool get__busy_15() const { return ____busy_15; }
	inline bool* get_address_of__busy_15() { return &____busy_15; }
	inline void set__busy_15(bool value)
	{
		____busy_15 = value;
	}
};


// Newtonsoft.Json.Linq.JPropertyKeyedCollection
struct  JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838  : public Collection_1_t2780FE79A65D8916FD76F5B194AF02532CF85CD1
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JPropertyKeyedCollection::_dictionary
	Dictionary_2_t3D1DECC89DF9470B1C4DEF61627E0E08457660E9 * ____dictionary_3;

public:
	inline static int32_t get_offset_of__dictionary_3() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838, ____dictionary_3)); }
	inline Dictionary_2_t3D1DECC89DF9470B1C4DEF61627E0E08457660E9 * get__dictionary_3() const { return ____dictionary_3; }
	inline Dictionary_2_t3D1DECC89DF9470B1C4DEF61627E0E08457660E9 ** get_address_of__dictionary_3() { return &____dictionary_3; }
	inline void set__dictionary_3(Dictionary_2_t3D1DECC89DF9470B1C4DEF61627E0E08457660E9 * value)
	{
		____dictionary_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dictionary_3), (void*)value);
	}
};

struct JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838_StaticFields
{
public:
	// System.Collections.Generic.IEqualityComparer`1<System.String> Newtonsoft.Json.Linq.JPropertyKeyedCollection::Comparer
	RuntimeObject* ___Comparer_2;

public:
	inline static int32_t get_offset_of_Comparer_2() { return static_cast<int32_t>(offsetof(JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838_StaticFields, ___Comparer_2)); }
	inline RuntimeObject* get_Comparer_2() const { return ___Comparer_2; }
	inline RuntimeObject** get_address_of_Comparer_2() { return &___Comparer_2; }
	inline void set_Comparer_2(RuntimeObject* value)
	{
		___Comparer_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Comparer_2), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey
struct  TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 
{
public:
	// System.String Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::AssemblyName
	String_t* ___AssemblyName_0;
	// System.String Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::TypeName
	String_t* ___TypeName_1;

public:
	inline static int32_t get_offset_of_AssemblyName_0() { return static_cast<int32_t>(offsetof(TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3, ___AssemblyName_0)); }
	inline String_t* get_AssemblyName_0() const { return ___AssemblyName_0; }
	inline String_t** get_address_of_AssemblyName_0() { return &___AssemblyName_0; }
	inline void set_AssemblyName_0(String_t* value)
	{
		___AssemblyName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssemblyName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeName_1() { return static_cast<int32_t>(offsetof(TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3, ___TypeName_1)); }
	inline String_t* get_TypeName_1() const { return ___TypeName_1; }
	inline String_t** get_address_of_TypeName_1() { return &___TypeName_1; }
	inline void set_TypeName_1(String_t* value)
	{
		___TypeName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeName_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshaled_pinvoke
{
	char* ___AssemblyName_0;
	char* ___TypeName_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
struct TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshaled_com
{
	Il2CppChar* ___AssemblyName_0;
	Il2CppChar* ___TypeName_1;
};

// Newtonsoft.Json.Serialization.ResolverContractKey
struct  ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 
{
public:
	// System.Type Newtonsoft.Json.Serialization.ResolverContractKey::_resolverType
	Type_t * ____resolverType_0;
	// System.Type Newtonsoft.Json.Serialization.ResolverContractKey::_contractType
	Type_t * ____contractType_1;

public:
	inline static int32_t get_offset_of__resolverType_0() { return static_cast<int32_t>(offsetof(ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4, ____resolverType_0)); }
	inline Type_t * get__resolverType_0() const { return ____resolverType_0; }
	inline Type_t ** get_address_of__resolverType_0() { return &____resolverType_0; }
	inline void set__resolverType_0(Type_t * value)
	{
		____resolverType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____resolverType_0), (void*)value);
	}

	inline static int32_t get_offset_of__contractType_1() { return static_cast<int32_t>(offsetof(ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4, ____contractType_1)); }
	inline Type_t * get__contractType_1() const { return ____contractType_1; }
	inline Type_t ** get_address_of__contractType_1() { return &____contractType_1; }
	inline void set__contractType_1(Type_t * value)
	{
		____contractType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contractType_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Serialization.ResolverContractKey
struct ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshaled_pinvoke
{
	Type_t * ____resolverType_0;
	Type_t * ____contractType_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Serialization.ResolverContractKey
struct ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshaled_com
{
	Type_t * ____resolverType_0;
	Type_t * ____contractType_1;
};

// Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey
struct  TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 
{
public:
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::_initialType
	Type_t * ____initialType_0;
	// System.Type Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::_targetType
	Type_t * ____targetType_1;

public:
	inline static int32_t get_offset_of__initialType_0() { return static_cast<int32_t>(offsetof(TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7, ____initialType_0)); }
	inline Type_t * get__initialType_0() const { return ____initialType_0; }
	inline Type_t ** get_address_of__initialType_0() { return &____initialType_0; }
	inline void set__initialType_0(Type_t * value)
	{
		____initialType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____initialType_0), (void*)value);
	}

	inline static int32_t get_offset_of__targetType_1() { return static_cast<int32_t>(offsetof(TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7, ____targetType_1)); }
	inline Type_t * get__targetType_1() const { return ____targetType_1; }
	inline Type_t ** get_address_of__targetType_1() { return &____targetType_1; }
	inline void set__targetType_1(Type_t * value)
	{
		____targetType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____targetType_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshaled_pinvoke
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
struct TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshaled_com
{
	Type_t * ____initialType_0;
	Type_t * ____targetType_1;
};

// Newtonsoft.Json.Utilities.StringBuffer
struct  StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::_buffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____buffer_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::_position
	int32_t ____position_1;

public:
	inline static int32_t get_offset_of__buffer_0() { return static_cast<int32_t>(offsetof(StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325, ____buffer_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__buffer_0() const { return ____buffer_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__buffer_0() { return &____buffer_0; }
	inline void set__buffer_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____buffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buffer_0), (void*)value);
	}

	inline static int32_t get_offset_of__position_1() { return static_cast<int32_t>(offsetof(StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325, ____position_1)); }
	inline int32_t get__position_1() const { return ____position_1; }
	inline int32_t* get_address_of__position_1() { return &____position_1; }
	inline void set__position_1(int32_t value)
	{
		____position_1 = value;
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshaled_pinvoke
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringBuffer
struct StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshaled_com
{
	uint8_t* ____buffer_0;
	int32_t ____position_1;
};

// Newtonsoft.Json.Utilities.StringReference
struct  StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C 
{
public:
	// System.Char[] Newtonsoft.Json.Utilities.StringReference::_chars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____chars_0;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_startIndex
	int32_t ____startIndex_1;
	// System.Int32 Newtonsoft.Json.Utilities.StringReference::_length
	int32_t ____length_2;

public:
	inline static int32_t get_offset_of__chars_0() { return static_cast<int32_t>(offsetof(StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C, ____chars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__chars_0() const { return ____chars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__chars_0() { return &____chars_0; }
	inline void set__chars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____chars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____chars_0), (void*)value);
	}

	inline static int32_t get_offset_of__startIndex_1() { return static_cast<int32_t>(offsetof(StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C, ____startIndex_1)); }
	inline int32_t get__startIndex_1() const { return ____startIndex_1; }
	inline int32_t* get_address_of__startIndex_1() { return &____startIndex_1; }
	inline void set__startIndex_1(int32_t value)
	{
		____startIndex_1 = value;
	}

	inline static int32_t get_offset_of__length_2() { return static_cast<int32_t>(offsetof(StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C, ____length_2)); }
	inline int32_t get__length_2() const { return ____length_2; }
	inline int32_t* get_address_of__length_2() { return &____length_2; }
	inline void set__length_2(int32_t value)
	{
		____length_2 = value;
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshaled_pinvoke
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};
// Native definition for COM marshalling of Newtonsoft.Json.Utilities.StringReference
struct StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshaled_com
{
	uint8_t* ____chars_0;
	int32_t ____startIndex_1;
	int32_t ____length_2;
};

// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>
struct  KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112, ___value_1)); }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * get_value_1() const { return ___value_1; }
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Decimal
struct  Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 
{
public:
	// System.Int32 System.Decimal::flags
	int32_t ___flags_14;
	// System.Int32 System.Decimal::hi
	int32_t ___hi_15;
	// System.Int32 System.Decimal::lo
	int32_t ___lo_16;
	// System.Int32 System.Decimal::mid
	int32_t ___mid_17;

public:
	inline static int32_t get_offset_of_flags_14() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___flags_14)); }
	inline int32_t get_flags_14() const { return ___flags_14; }
	inline int32_t* get_address_of_flags_14() { return &___flags_14; }
	inline void set_flags_14(int32_t value)
	{
		___flags_14 = value;
	}

	inline static int32_t get_offset_of_hi_15() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___hi_15)); }
	inline int32_t get_hi_15() const { return ___hi_15; }
	inline int32_t* get_address_of_hi_15() { return &___hi_15; }
	inline void set_hi_15(int32_t value)
	{
		___hi_15 = value;
	}

	inline static int32_t get_offset_of_lo_16() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___lo_16)); }
	inline int32_t get_lo_16() const { return ___lo_16; }
	inline int32_t* get_address_of_lo_16() { return &___lo_16; }
	inline void set_lo_16(int32_t value)
	{
		___lo_16 = value;
	}

	inline static int32_t get_offset_of_mid_17() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7, ___mid_17)); }
	inline int32_t get_mid_17() const { return ___mid_17; }
	inline int32_t* get_address_of_mid_17() { return &___mid_17; }
	inline void set_mid_17(int32_t value)
	{
		___mid_17 = value;
	}
};

struct Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields
{
public:
	// System.UInt32[] System.Decimal::Powers10
	UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* ___Powers10_6;
	// System.Decimal System.Decimal::Zero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___Zero_7;
	// System.Decimal System.Decimal::One
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___One_8;
	// System.Decimal System.Decimal::MinusOne
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinusOne_9;
	// System.Decimal System.Decimal::MaxValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MaxValue_10;
	// System.Decimal System.Decimal::MinValue
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___MinValue_11;
	// System.Decimal System.Decimal::NearNegativeZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearNegativeZero_12;
	// System.Decimal System.Decimal::NearPositiveZero
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___NearPositiveZero_13;

public:
	inline static int32_t get_offset_of_Powers10_6() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Powers10_6)); }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* get_Powers10_6() const { return ___Powers10_6; }
	inline UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF** get_address_of_Powers10_6() { return &___Powers10_6; }
	inline void set_Powers10_6(UInt32U5BU5D_tCF06F1E9E72E0302C762578FF5358CC523F2A2CF* value)
	{
		___Powers10_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Powers10_6), (void*)value);
	}

	inline static int32_t get_offset_of_Zero_7() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___Zero_7)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_Zero_7() const { return ___Zero_7; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_Zero_7() { return &___Zero_7; }
	inline void set_Zero_7(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___Zero_7 = value;
	}

	inline static int32_t get_offset_of_One_8() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___One_8)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_One_8() const { return ___One_8; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_One_8() { return &___One_8; }
	inline void set_One_8(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___One_8 = value;
	}

	inline static int32_t get_offset_of_MinusOne_9() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinusOne_9)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinusOne_9() const { return ___MinusOne_9; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinusOne_9() { return &___MinusOne_9; }
	inline void set_MinusOne_9(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinusOne_9 = value;
	}

	inline static int32_t get_offset_of_MaxValue_10() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MaxValue_10)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MaxValue_10() const { return ___MaxValue_10; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MaxValue_10() { return &___MaxValue_10; }
	inline void set_MaxValue_10(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MaxValue_10 = value;
	}

	inline static int32_t get_offset_of_MinValue_11() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___MinValue_11)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_MinValue_11() const { return ___MinValue_11; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_MinValue_11() { return &___MinValue_11; }
	inline void set_MinValue_11(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___MinValue_11 = value;
	}

	inline static int32_t get_offset_of_NearNegativeZero_12() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearNegativeZero_12)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearNegativeZero_12() const { return ___NearNegativeZero_12; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearNegativeZero_12() { return &___NearNegativeZero_12; }
	inline void set_NearNegativeZero_12(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearNegativeZero_12 = value;
	}

	inline static int32_t get_offset_of_NearPositiveZero_13() { return static_cast<int32_t>(offsetof(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7_StaticFields, ___NearPositiveZero_13)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_NearPositiveZero_13() const { return ___NearPositiveZero_13; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_NearPositiveZero_13() { return &___NearPositiveZero_13; }
	inline void set_NearPositiveZero_13(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___NearPositiveZero_13 = value;
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;

public:
	inline static int32_t get_offset_of__a_1() { return static_cast<int32_t>(offsetof(Guid_t, ____a_1)); }
	inline int32_t get__a_1() const { return ____a_1; }
	inline int32_t* get_address_of__a_1() { return &____a_1; }
	inline void set__a_1(int32_t value)
	{
		____a_1 = value;
	}

	inline static int32_t get_offset_of__b_2() { return static_cast<int32_t>(offsetof(Guid_t, ____b_2)); }
	inline int16_t get__b_2() const { return ____b_2; }
	inline int16_t* get_address_of__b_2() { return &____b_2; }
	inline void set__b_2(int16_t value)
	{
		____b_2 = value;
	}

	inline static int32_t get_offset_of__c_3() { return static_cast<int32_t>(offsetof(Guid_t, ____c_3)); }
	inline int16_t get__c_3() const { return ____c_3; }
	inline int16_t* get_address_of__c_3() { return &____c_3; }
	inline void set__c_3(int16_t value)
	{
		____c_3 = value;
	}

	inline static int32_t get_offset_of__d_4() { return static_cast<int32_t>(offsetof(Guid_t, ____d_4)); }
	inline uint8_t get__d_4() const { return ____d_4; }
	inline uint8_t* get_address_of__d_4() { return &____d_4; }
	inline void set__d_4(uint8_t value)
	{
		____d_4 = value;
	}

	inline static int32_t get_offset_of__e_5() { return static_cast<int32_t>(offsetof(Guid_t, ____e_5)); }
	inline uint8_t get__e_5() const { return ____e_5; }
	inline uint8_t* get_address_of__e_5() { return &____e_5; }
	inline void set__e_5(uint8_t value)
	{
		____e_5 = value;
	}

	inline static int32_t get_offset_of__f_6() { return static_cast<int32_t>(offsetof(Guid_t, ____f_6)); }
	inline uint8_t get__f_6() const { return ____f_6; }
	inline uint8_t* get_address_of__f_6() { return &____f_6; }
	inline void set__f_6(uint8_t value)
	{
		____f_6 = value;
	}

	inline static int32_t get_offset_of__g_7() { return static_cast<int32_t>(offsetof(Guid_t, ____g_7)); }
	inline uint8_t get__g_7() const { return ____g_7; }
	inline uint8_t* get_address_of__g_7() { return &____g_7; }
	inline void set__g_7(uint8_t value)
	{
		____g_7 = value;
	}

	inline static int32_t get_offset_of__h_8() { return static_cast<int32_t>(offsetof(Guid_t, ____h_8)); }
	inline uint8_t get__h_8() const { return ____h_8; }
	inline uint8_t* get_address_of__h_8() { return &____h_8; }
	inline void set__h_8(uint8_t value)
	{
		____h_8 = value;
	}

	inline static int32_t get_offset_of__i_9() { return static_cast<int32_t>(offsetof(Guid_t, ____i_9)); }
	inline uint8_t get__i_9() const { return ____i_9; }
	inline uint8_t* get_address_of__i_9() { return &____i_9; }
	inline void set__i_9(uint8_t value)
	{
		____i_9 = value;
	}

	inline static int32_t get_offset_of__j_10() { return static_cast<int32_t>(offsetof(Guid_t, ____j_10)); }
	inline uint8_t get__j_10() const { return ____j_10; }
	inline uint8_t* get_address_of__j_10() { return &____j_10; }
	inline void set__j_10(uint8_t value)
	{
		____j_10 = value;
	}

	inline static int32_t get_offset_of__k_11() { return static_cast<int32_t>(offsetof(Guid_t, ____k_11)); }
	inline uint8_t get__k_11() const { return ____k_11; }
	inline uint8_t* get_address_of__k_11() { return &____k_11; }
	inline void set__k_11(uint8_t value)
	{
		____k_11 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_0;
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_12;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____rng_13;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * ____fastRng_14;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_0)); }
	inline Guid_t  get_Empty_0() const { return ___Empty_0; }
	inline Guid_t * get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(Guid_t  value)
	{
		___Empty_0 = value;
	}

	inline static int32_t get_offset_of__rngAccess_12() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_12)); }
	inline RuntimeObject * get__rngAccess_12() const { return ____rngAccess_12; }
	inline RuntimeObject ** get_address_of__rngAccess_12() { return &____rngAccess_12; }
	inline void set__rngAccess_12(RuntimeObject * value)
	{
		____rngAccess_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rngAccess_12), (void*)value);
	}

	inline static int32_t get_offset_of__rng_13() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_13)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__rng_13() const { return ____rng_13; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__rng_13() { return &____rng_13; }
	inline void set__rng_13(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____rng_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rng_13), (void*)value);
	}

	inline static int32_t get_offset_of__fastRng_14() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_14)); }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * get__fastRng_14() const { return ____fastRng_14; }
	inline RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 ** get_address_of__fastRng_14() { return &____fastRng_14; }
	inline void set__fastRng_14(RandomNumberGenerator_t2CB5440F189986116A2FA9F907AE52644047AC50 * value)
	{
		____fastRng_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____fastRng_14), (void*)value);
	}
};


// System.IO.TextWriter
struct  TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643  : public MarshalByRefObject_tD4DF91B488B284F899417EC468D8E50E933306A8
{
public:
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___CoreNewLine_9;
	// System.IFormatProvider System.IO.TextWriter::InternalFormatProvider
	RuntimeObject* ___InternalFormatProvider_10;

public:
	inline static int32_t get_offset_of_CoreNewLine_9() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___CoreNewLine_9)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_CoreNewLine_9() const { return ___CoreNewLine_9; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_CoreNewLine_9() { return &___CoreNewLine_9; }
	inline void set_CoreNewLine_9(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___CoreNewLine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CoreNewLine_9), (void*)value);
	}

	inline static int32_t get_offset_of_InternalFormatProvider_10() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643, ___InternalFormatProvider_10)); }
	inline RuntimeObject* get_InternalFormatProvider_10() const { return ___InternalFormatProvider_10; }
	inline RuntimeObject** get_address_of_InternalFormatProvider_10() { return &___InternalFormatProvider_10; }
	inline void set_InternalFormatProvider_10(RuntimeObject* value)
	{
		___InternalFormatProvider_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InternalFormatProvider_10), (void*)value);
	}
};

struct TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields
{
public:
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___Null_1;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharDelegate_2;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteStringDelegate_3;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteCharArrayRangeDelegate_4;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharDelegate_5;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineStringDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineStringDelegate_6;
	// System.Action`1<System.Object> System.IO.TextWriter::_WriteLineCharArrayRangeDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____WriteLineCharArrayRangeDelegate_7;
	// System.Action`1<System.Object> System.IO.TextWriter::_FlushDelegate
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ____FlushDelegate_8;

public:
	inline static int32_t get_offset_of_Null_1() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ___Null_1)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get_Null_1() const { return ___Null_1; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of_Null_1() { return &___Null_1; }
	inline void set_Null_1(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		___Null_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Null_1), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharDelegate_2() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharDelegate_2)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharDelegate_2() const { return ____WriteCharDelegate_2; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharDelegate_2() { return &____WriteCharDelegate_2; }
	inline void set__WriteCharDelegate_2(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of__WriteStringDelegate_3() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteStringDelegate_3)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteStringDelegate_3() const { return ____WriteStringDelegate_3; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteStringDelegate_3() { return &____WriteStringDelegate_3; }
	inline void set__WriteStringDelegate_3(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteStringDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteStringDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of__WriteCharArrayRangeDelegate_4() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteCharArrayRangeDelegate_4)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteCharArrayRangeDelegate_4() const { return ____WriteCharArrayRangeDelegate_4; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteCharArrayRangeDelegate_4() { return &____WriteCharArrayRangeDelegate_4; }
	inline void set__WriteCharArrayRangeDelegate_4(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteCharArrayRangeDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteCharArrayRangeDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharDelegate_5() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharDelegate_5)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharDelegate_5() const { return ____WriteLineCharDelegate_5; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharDelegate_5() { return &____WriteLineCharDelegate_5; }
	inline void set__WriteLineCharDelegate_5(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineStringDelegate_6() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineStringDelegate_6)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineStringDelegate_6() const { return ____WriteLineStringDelegate_6; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineStringDelegate_6() { return &____WriteLineStringDelegate_6; }
	inline void set__WriteLineStringDelegate_6(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineStringDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineStringDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of__WriteLineCharArrayRangeDelegate_7() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____WriteLineCharArrayRangeDelegate_7)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__WriteLineCharArrayRangeDelegate_7() const { return ____WriteLineCharArrayRangeDelegate_7; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__WriteLineCharArrayRangeDelegate_7() { return &____WriteLineCharArrayRangeDelegate_7; }
	inline void set__WriteLineCharArrayRangeDelegate_7(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____WriteLineCharArrayRangeDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WriteLineCharArrayRangeDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of__FlushDelegate_8() { return static_cast<int32_t>(offsetof(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643_StaticFields, ____FlushDelegate_8)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get__FlushDelegate_8() const { return ____FlushDelegate_8; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of__FlushDelegate_8() { return &____FlushDelegate_8; }
	inline void set__FlushDelegate_8(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		____FlushDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____FlushDelegate_8), (void*)value);
	}
};


// System.Int16
struct  Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Byte>
struct  Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A 
{
public:
	// T System.Nullable`1::value
	uint8_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A, ___value_0)); }
	inline uint8_t get_value_0() const { return ___value_0; }
	inline uint8_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(uint8_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Double>
struct  Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209 
{
public:
	// T System.Nullable`1::value
	double ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___value_0)); }
	inline double get_value_0() const { return ___value_0; }
	inline double* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(double value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32>
struct  Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
};


// System.Reflection.PropertyInfo
struct  PropertyInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.Serialization.EnumMemberAttribute
struct  EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String System.Runtime.Serialization.EnumMemberAttribute::value
	String_t* ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC, ___value_0)); }
	inline String_t* get_value_0() const { return ___value_0; }
	inline String_t** get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(String_t* value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_0), (void*)value);
	}
};


// System.SByte
struct  SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct  UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// Newtonsoft.Json.ConstructorHandling
struct  ConstructorHandling_tB1B9B4944E1242E3DF8F3E262456DEDE67576B21 
{
public:
	// System.Int32 Newtonsoft.Json.ConstructorHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConstructorHandling_tB1B9B4944E1242E3DF8F3E262456DEDE67576B21, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateFormatHandling
struct  DateFormatHandling_tEBBE8B939BC9B0A2675E78C364FFB427959D8BDF 
{
public:
	// System.Int32 Newtonsoft.Json.DateFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateFormatHandling_tEBBE8B939BC9B0A2675E78C364FFB427959D8BDF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateParseHandling
struct  DateParseHandling_t96F2879A319C4EFFEC589E2BFC5667160352FBDB 
{
public:
	// System.Int32 Newtonsoft.Json.DateParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateParseHandling_t96F2879A319C4EFFEC589E2BFC5667160352FBDB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DateTimeZoneHandling
struct  DateTimeZoneHandling_t84F997DBDDAEB37F804C3C87B87334410AA165E8 
{
public:
	// System.Int32 Newtonsoft.Json.DateTimeZoneHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeZoneHandling_t84F997DBDDAEB37F804C3C87B87334410AA165E8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.DefaultValueHandling
struct  DefaultValueHandling_t1184EED87C3E17B62841C12572EB99E3A265660D 
{
public:
	// System.Int32 Newtonsoft.Json.DefaultValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DefaultValueHandling_t1184EED87C3E17B62841C12572EB99E3A265660D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatFormatHandling
struct  FloatFormatHandling_tC8EAFBC5F77418619522AE76B8D090C5D92A5F1B 
{
public:
	// System.Int32 Newtonsoft.Json.FloatFormatHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatFormatHandling_tC8EAFBC5F77418619522AE76B8D090C5D92A5F1B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.FloatParseHandling
struct  FloatParseHandling_t036F817380C37F4EEF713B7B6382ED8C27B35F97 
{
public:
	// System.Int32 Newtonsoft.Json.FloatParseHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FloatParseHandling_t036F817380C37F4EEF713B7B6382ED8C27B35F97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Formatting
struct  Formatting_tDA08319B4C9D9BB76D747CFC9CC7D827D2D3315D 
{
public:
	// System.Int32 Newtonsoft.Json.Formatting::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Formatting_tDA08319B4C9D9BB76D747CFC9CC7D827D2D3315D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonContainerType
struct  JsonContainerType_t95EC2F8457E4D66A529F8B9CD125D811EA5C1C1C 
{
public:
	// System.Int32 Newtonsoft.Json.JsonContainerType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonContainerType_t95EC2F8457E4D66A529F8B9CD125D811EA5C1C1C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonReader_State
struct  State_tE227CD461458EBD51D7C6166E99C69761D0269A4 
{
public:
	// System.Int32 Newtonsoft.Json.JsonReader_State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tE227CD461458EBD51D7C6166E99C69761D0269A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonToken
struct  JsonToken_t63CB837C9C2C9D9B938921D92B457C8C56246314 
{
public:
	// System.Int32 Newtonsoft.Json.JsonToken::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(JsonToken_t63CB837C9C2C9D9B938921D92B457C8C56246314, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonWriter_State
struct  State_t1D6C5223A4A8F51E06E34C306DF90A06FC38D2BF 
{
public:
	// System.Int32 Newtonsoft.Json.JsonWriter_State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t1D6C5223A4A8F51E06E34C306DF90A06FC38D2BF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Linq.JObject
struct  JObject_tF150B38C95CC8B2C1CA2D59B665175F8444AC48C  : public JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15
{
public:
	// Newtonsoft.Json.Linq.JPropertyKeyedCollection Newtonsoft.Json.Linq.JObject::_properties
	JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838 * ____properties_16;
	// System.ComponentModel.PropertyChangedEventHandler Newtonsoft.Json.Linq.JObject::PropertyChanged
	PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * ___PropertyChanged_17;

public:
	inline static int32_t get_offset_of__properties_16() { return static_cast<int32_t>(offsetof(JObject_tF150B38C95CC8B2C1CA2D59B665175F8444AC48C, ____properties_16)); }
	inline JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838 * get__properties_16() const { return ____properties_16; }
	inline JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838 ** get_address_of__properties_16() { return &____properties_16; }
	inline void set__properties_16(JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838 * value)
	{
		____properties_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____properties_16), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyChanged_17() { return static_cast<int32_t>(offsetof(JObject_tF150B38C95CC8B2C1CA2D59B665175F8444AC48C, ___PropertyChanged_17)); }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * get_PropertyChanged_17() const { return ___PropertyChanged_17; }
	inline PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 ** get_address_of_PropertyChanged_17() { return &___PropertyChanged_17; }
	inline void set_PropertyChanged_17(PropertyChangedEventHandler_t094CCD63C952DCD4E1ED794434160679C28A8E99 * value)
	{
		___PropertyChanged_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyChanged_17), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55
struct  U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0  : public RuntimeObject
{
public:
	// System.Int32 Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::<>2__current
	KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112  ___U3CU3E2__current_1;
	// Newtonsoft.Json.Linq.JObject Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::<>4__this
	JObject_tF150B38C95CC8B2C1CA2D59B665175F8444AC48C * ___U3CU3E4__this_2;
	// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::<>7__wrap1
	RuntimeObject* ___U3CU3E7__wrap1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0, ___U3CU3E2__current_1)); }
	inline KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112  get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112 * get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112  value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___U3CU3E2__current_1))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0, ___U3CU3E4__this_2)); }
	inline JObject_tF150B38C95CC8B2C1CA2D59B665175F8444AC48C * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline JObject_tF150B38C95CC8B2C1CA2D59B665175F8444AC48C ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(JObject_tF150B38C95CC8B2C1CA2D59B665175F8444AC48C * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E7__wrap1_3() { return static_cast<int32_t>(offsetof(U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0, ___U3CU3E7__wrap1_3)); }
	inline RuntimeObject* get_U3CU3E7__wrap1_3() const { return ___U3CU3E7__wrap1_3; }
	inline RuntimeObject** get_address_of_U3CU3E7__wrap1_3() { return &___U3CU3E7__wrap1_3; }
	inline void set_U3CU3E7__wrap1_3(RuntimeObject* value)
	{
		___U3CU3E7__wrap1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E7__wrap1_3), (void*)value);
	}
};


// Newtonsoft.Json.Linq.JProperty
struct  JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445  : public JContainer_tA29E0A4775F95ED18760C083EE799CD1D65E7E15
{
public:
	// Newtonsoft.Json.Linq.JProperty_JPropertyList Newtonsoft.Json.Linq.JProperty::_content
	JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * ____content_16;
	// System.String Newtonsoft.Json.Linq.JProperty::_name
	String_t* ____name_17;

public:
	inline static int32_t get_offset_of__content_16() { return static_cast<int32_t>(offsetof(JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445, ____content_16)); }
	inline JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * get__content_16() const { return ____content_16; }
	inline JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 ** get_address_of__content_16() { return &____content_16; }
	inline void set__content_16(JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * value)
	{
		____content_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____content_16), (void*)value);
	}

	inline static int32_t get_offset_of__name_17() { return static_cast<int32_t>(offsetof(JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445, ____name_17)); }
	inline String_t* get__name_17() const { return ____name_17; }
	inline String_t** get_address_of__name_17() { return &____name_17; }
	inline void set__name_17(String_t* value)
	{
		____name_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____name_17), (void*)value);
	}
};


// Newtonsoft.Json.MetadataPropertyHandling
struct  MetadataPropertyHandling_t3C2EFD1BC91754938FC4A9AA30B25D3D58D082C6 
{
public:
	// System.Int32 Newtonsoft.Json.MetadataPropertyHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MetadataPropertyHandling_t3C2EFD1BC91754938FC4A9AA30B25D3D58D082C6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.MissingMemberHandling
struct  MissingMemberHandling_t30265FF2340E77360B99632C25E7E278B2B4F4E0 
{
public:
	// System.Int32 Newtonsoft.Json.MissingMemberHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MissingMemberHandling_t30265FF2340E77360B99632C25E7E278B2B4F4E0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.NullValueHandling
struct  NullValueHandling_t900A48D4DB68BED2824777720E6CFA6F96ED0921 
{
public:
	// System.Int32 Newtonsoft.Json.NullValueHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NullValueHandling_t900A48D4DB68BED2824777720E6CFA6F96ED0921, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ObjectCreationHandling
struct  ObjectCreationHandling_t469CFEFE9C45DD20AA9C41FAED5B120180AB9E45 
{
public:
	// System.Int32 Newtonsoft.Json.ObjectCreationHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectCreationHandling_t469CFEFE9C45DD20AA9C41FAED5B120180AB9E45, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.PreserveReferencesHandling
struct  PreserveReferencesHandling_t1AA650F51C415CEB2460B728A5A0F56F8C897E1E 
{
public:
	// System.Int32 Newtonsoft.Json.PreserveReferencesHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PreserveReferencesHandling_t1AA650F51C415CEB2460B728A5A0F56F8C897E1E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.ReferenceLoopHandling
struct  ReferenceLoopHandling_tAF0E5D557952D5EA18EB80446554DB7AF6EA8829 
{
public:
	// System.Int32 Newtonsoft.Json.ReferenceLoopHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ReferenceLoopHandling_tAF0E5D557952D5EA18EB80446554DB7AF6EA8829, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Required
struct  Required_t900776506675E7A4240EA7675B115998379AA5F2 
{
public:
	// System.Int32 Newtonsoft.Json.Required::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Required_t900776506675E7A4240EA7675B115998379AA5F2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader_PropertyPresence
struct  PropertyPresence_tBAEA40A948B26FAA527F5AE216C56B9DF0365E03 
{
public:
	// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalReader_PropertyPresence::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyPresence_tBAEA40A948B26FAA527F5AE216C56B9DF0365E03, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.StringEscapeHandling
struct  StringEscapeHandling_tCF3A185C4E96DD03040889748FBDED0B3E9731A7 
{
public:
	// System.Int32 Newtonsoft.Json.StringEscapeHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringEscapeHandling_tCF3A185C4E96DD03040889748FBDED0B3E9731A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.TypeNameHandling
struct  TypeNameHandling_t00FDBF2FB49B273344C8A6CA3B6685EDFE82AF46 
{
public:
	// System.Int32 Newtonsoft.Json.TypeNameHandling::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeNameHandling_t00FDBF2FB49B273344C8A6CA3B6685EDFE82AF46, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Utilities.ConvertUtils_ConvertResult
struct  ConvertResult_t866202C7C728F70800FAA9225C68A8577D1EE380 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils_ConvertResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ConvertResult_t866202C7C728F70800FAA9225C68A8577D1EE380, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.Utilities.PrimitiveTypeCode
struct  PrimitiveTypeCode_t59B282F02D2BD22A2938DC9D37256600E96FA590 
{
public:
	// System.Int32 Newtonsoft.Json.Utilities.PrimitiveTypeCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveTypeCode_t59B282F02D2BD22A2938DC9D37256600E96FA590, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.WriteState
struct  WriteState_t07AB6309C96EE779AB23E5163B6160533EA3A67E 
{
public:
	// System.Int32 Newtonsoft.Json.WriteState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WriteState_t07AB6309C96EE779AB23E5163B6160533EA3A67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.DateTimeOffset
struct  DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_dateTime_2)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___MaxValue_1 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.IO.StringWriter
struct  StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839  : public TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643
{
public:
	// System.Text.StringBuilder System.IO.StringWriter::_sb
	StringBuilder_t * ____sb_11;
	// System.Boolean System.IO.StringWriter::_isOpen
	bool ____isOpen_12;

public:
	inline static int32_t get_offset_of__sb_11() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____sb_11)); }
	inline StringBuilder_t * get__sb_11() const { return ____sb_11; }
	inline StringBuilder_t ** get_address_of__sb_11() { return &____sb_11; }
	inline void set__sb_11(StringBuilder_t * value)
	{
		____sb_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sb_11), (void*)value);
	}

	inline static int32_t get_offset_of__isOpen_12() { return static_cast<int32_t>(offsetof(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839, ____isOpen_12)); }
	inline bool get__isOpen_12() const { return ____isOpen_12; }
	inline bool* get_address_of__isOpen_12() { return &____isOpen_12; }
	inline void set__isOpen_12(bool value)
	{
		____isOpen_12 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Nullable`1<System.DateTime>
struct  Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D 
{
public:
	// T System.Nullable`1::value
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___value_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_value_0() const { return ___value_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Decimal>
struct  Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E 
{
public:
	// T System.Nullable`1::value
	Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E, ___value_0)); }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  get_value_0() const { return ___value_0; }
	inline Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
	}
};


// System.Reflection.MemberTypes
struct  MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE 
{
public:
	// System.Int32 System.Reflection.MemberTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MemberTypes_tA4C0F24E8DE2439AA9E716F96FF8D394F26A5EDE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.MethodInfo
struct  MethodInfo_t  : public MethodBase_t
{
public:

public:
};


// System.Reflection.ParameterAttributes
struct  ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218 
{
public:
	// System.Int32 System.Reflection.ParameterAttributes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ParameterAttributes_t79BD378DEC3F187D9773B9A4EDE573866E930218, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.StringComparison
struct  StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998 
{
public:
	// System.Int32 System.StringComparison::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StringComparison_tCC9F72B9B1E2C3C6D2566DD0D3A61E1621048998, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Text.RegularExpressions.RegexOptions
struct  RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4 
{
public:
	// System.Int32 System.Text.RegularExpressions.RegexOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.TimeSpan
struct  TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___Zero_0;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaxValue_1;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MinValue_2;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_4;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_5;

public:
	inline static int32_t get_offset_of_Zero_0() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___Zero_0)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_Zero_0() const { return ___Zero_0; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_Zero_0() { return &___Zero_0; }
	inline void set_Zero_0(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___Zero_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MaxValue_1)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaxValue_1() const { return ___MaxValue_1; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinValue_2() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ___MinValue_2)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MinValue_2() const { return ___MinValue_2; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MinValue_2() { return &___MinValue_2; }
	inline void set_MinValue_2(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MinValue_2 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_4() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyConfigChecked_4)); }
	inline bool get__legacyConfigChecked_4() const { return ____legacyConfigChecked_4; }
	inline bool* get_address_of__legacyConfigChecked_4() { return &____legacyConfigChecked_4; }
	inline void set__legacyConfigChecked_4(bool value)
	{
		____legacyConfigChecked_4 = value;
	}

	inline static int32_t get_offset_of__legacyMode_5() { return static_cast<int32_t>(offsetof(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203_StaticFields, ____legacyMode_5)); }
	inline bool get__legacyMode_5() const { return ____legacyMode_5; }
	inline bool* get_address_of__legacyMode_5() { return &____legacyMode_5; }
	inline void set__legacyMode_5(bool value)
	{
		____legacyMode_5 = value;
	}
};


// System.Uri_Flags
struct  Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4 
{
public:
	// System.UInt64 System.Uri_Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t72C622DF5C3ED762F55AB36EC2CCDDF3AF56B8D4, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};


// System.UriIdnScope
struct  UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_tBA22B992BA582F68F2B98CDEBCB24299F249DE4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Newtonsoft.Json.JsonException
struct  JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32  : public Exception_t
{
public:

public:
};


// Newtonsoft.Json.JsonPosition
struct  JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798 
{
public:
	// Newtonsoft.Json.JsonContainerType Newtonsoft.Json.JsonPosition::Type
	int32_t ___Type_1;
	// System.Int32 Newtonsoft.Json.JsonPosition::Position
	int32_t ___Position_2;
	// System.String Newtonsoft.Json.JsonPosition::PropertyName
	String_t* ___PropertyName_3;
	// System.Boolean Newtonsoft.Json.JsonPosition::HasIndex
	bool ___HasIndex_4;

public:
	inline static int32_t get_offset_of_Type_1() { return static_cast<int32_t>(offsetof(JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798, ___Type_1)); }
	inline int32_t get_Type_1() const { return ___Type_1; }
	inline int32_t* get_address_of_Type_1() { return &___Type_1; }
	inline void set_Type_1(int32_t value)
	{
		___Type_1 = value;
	}

	inline static int32_t get_offset_of_Position_2() { return static_cast<int32_t>(offsetof(JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798, ___Position_2)); }
	inline int32_t get_Position_2() const { return ___Position_2; }
	inline int32_t* get_address_of_Position_2() { return &___Position_2; }
	inline void set_Position_2(int32_t value)
	{
		___Position_2 = value;
	}

	inline static int32_t get_offset_of_PropertyName_3() { return static_cast<int32_t>(offsetof(JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798, ___PropertyName_3)); }
	inline String_t* get_PropertyName_3() const { return ___PropertyName_3; }
	inline String_t** get_address_of_PropertyName_3() { return &___PropertyName_3; }
	inline void set_PropertyName_3(String_t* value)
	{
		___PropertyName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyName_3), (void*)value);
	}

	inline static int32_t get_offset_of_HasIndex_4() { return static_cast<int32_t>(offsetof(JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798, ___HasIndex_4)); }
	inline bool get_HasIndex_4() const { return ___HasIndex_4; }
	inline bool* get_address_of_HasIndex_4() { return &___HasIndex_4; }
	inline void set_HasIndex_4(bool value)
	{
		___HasIndex_4 = value;
	}
};

struct JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798_StaticFields
{
public:
	// System.Char[] Newtonsoft.Json.JsonPosition::SpecialCharacters
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___SpecialCharacters_0;

public:
	inline static int32_t get_offset_of_SpecialCharacters_0() { return static_cast<int32_t>(offsetof(JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798_StaticFields, ___SpecialCharacters_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_SpecialCharacters_0() const { return ___SpecialCharacters_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_SpecialCharacters_0() { return &___SpecialCharacters_0; }
	inline void set_SpecialCharacters_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___SpecialCharacters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SpecialCharacters_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798_marshaled_pinvoke
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	char* ___PropertyName_3;
	int32_t ___HasIndex_4;
};
// Native definition for COM marshalling of Newtonsoft.Json.JsonPosition
struct JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798_marshaled_com
{
	int32_t ___Type_1;
	int32_t ___Position_2;
	Il2CppChar* ___PropertyName_3;
	int32_t ___HasIndex_4;
};

// Newtonsoft.Json.Serialization.DefaultContractResolver
struct  DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297  : public RuntimeObject
{
public:
	// Newtonsoft.Json.Serialization.DefaultContractResolverState Newtonsoft.Json.Serialization.DefaultContractResolver::_instanceState
	DefaultContractResolverState_t001B39B9A72A4F97F591326782905F0F06A1FCD6 * ____instanceState_4;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::_sharedCache
	bool ____sharedCache_5;
	// System.Reflection.BindingFlags Newtonsoft.Json.Serialization.DefaultContractResolver::<DefaultMembersSearchFlags>k__BackingField
	int32_t ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<SerializeCompilerGeneratedMembers>k__BackingField
	bool ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableInterface>k__BackingField
	bool ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8;
	// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver::<IgnoreSerializableAttribute>k__BackingField
	bool ___U3CIgnoreSerializableAttributeU3Ek__BackingField_9;
	// Newtonsoft.Json.Serialization.NamingStrategy Newtonsoft.Json.Serialization.DefaultContractResolver::<NamingStrategy>k__BackingField
	NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568 * ___U3CNamingStrategyU3Ek__BackingField_10;

public:
	inline static int32_t get_offset_of__instanceState_4() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297, ____instanceState_4)); }
	inline DefaultContractResolverState_t001B39B9A72A4F97F591326782905F0F06A1FCD6 * get__instanceState_4() const { return ____instanceState_4; }
	inline DefaultContractResolverState_t001B39B9A72A4F97F591326782905F0F06A1FCD6 ** get_address_of__instanceState_4() { return &____instanceState_4; }
	inline void set__instanceState_4(DefaultContractResolverState_t001B39B9A72A4F97F591326782905F0F06A1FCD6 * value)
	{
		____instanceState_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instanceState_4), (void*)value);
	}

	inline static int32_t get_offset_of__sharedCache_5() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297, ____sharedCache_5)); }
	inline bool get__sharedCache_5() const { return ____sharedCache_5; }
	inline bool* get_address_of__sharedCache_5() { return &____sharedCache_5; }
	inline void set__sharedCache_5(bool value)
	{
		____sharedCache_5 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297, ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6)); }
	inline int32_t get_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6() const { return ___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6; }
	inline int32_t* get_address_of_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6() { return &___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6; }
	inline void set_U3CDefaultMembersSearchFlagsU3Ek__BackingField_6(int32_t value)
	{
		___U3CDefaultMembersSearchFlagsU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297, ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7)); }
	inline bool get_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7() const { return ___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7; }
	inline bool* get_address_of_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7() { return &___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7; }
	inline void set_U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7(bool value)
	{
		___U3CSerializeCompilerGeneratedMembersU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297, ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8)); }
	inline bool get_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8() const { return ___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8; }
	inline bool* get_address_of_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8() { return &___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8; }
	inline void set_U3CIgnoreSerializableInterfaceU3Ek__BackingField_8(bool value)
	{
		___U3CIgnoreSerializableInterfaceU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297, ___U3CIgnoreSerializableAttributeU3Ek__BackingField_9)); }
	inline bool get_U3CIgnoreSerializableAttributeU3Ek__BackingField_9() const { return ___U3CIgnoreSerializableAttributeU3Ek__BackingField_9; }
	inline bool* get_address_of_U3CIgnoreSerializableAttributeU3Ek__BackingField_9() { return &___U3CIgnoreSerializableAttributeU3Ek__BackingField_9; }
	inline void set_U3CIgnoreSerializableAttributeU3Ek__BackingField_9(bool value)
	{
		___U3CIgnoreSerializableAttributeU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CNamingStrategyU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297, ___U3CNamingStrategyU3Ek__BackingField_10)); }
	inline NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568 * get_U3CNamingStrategyU3Ek__BackingField_10() const { return ___U3CNamingStrategyU3Ek__BackingField_10; }
	inline NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568 ** get_address_of_U3CNamingStrategyU3Ek__BackingField_10() { return &___U3CNamingStrategyU3Ek__BackingField_10; }
	inline void set_U3CNamingStrategyU3Ek__BackingField_10(NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568 * value)
	{
		___U3CNamingStrategyU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNamingStrategyU3Ek__BackingField_10), (void*)value);
	}
};

struct DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297_StaticFields
{
public:
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.Serialization.DefaultContractResolver::_instance
	RuntimeObject* ____instance_0;
	// Newtonsoft.Json.JsonConverter[] Newtonsoft.Json.Serialization.DefaultContractResolver::BuiltInConverters
	JsonConverterU5BU5D_tB150F37E62D8CE8327B776F611D0ADC8AA9098C1* ___BuiltInConverters_1;
	// System.Object Newtonsoft.Json.Serialization.DefaultContractResolver::TypeContractCacheLock
	RuntimeObject * ___TypeContractCacheLock_2;
	// Newtonsoft.Json.Serialization.DefaultContractResolverState Newtonsoft.Json.Serialization.DefaultContractResolver::_sharedState
	DefaultContractResolverState_t001B39B9A72A4F97F591326782905F0F06A1FCD6 * ____sharedState_3;

public:
	inline static int32_t get_offset_of__instance_0() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297_StaticFields, ____instance_0)); }
	inline RuntimeObject* get__instance_0() const { return ____instance_0; }
	inline RuntimeObject** get_address_of__instance_0() { return &____instance_0; }
	inline void set__instance_0(RuntimeObject* value)
	{
		____instance_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____instance_0), (void*)value);
	}

	inline static int32_t get_offset_of_BuiltInConverters_1() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297_StaticFields, ___BuiltInConverters_1)); }
	inline JsonConverterU5BU5D_tB150F37E62D8CE8327B776F611D0ADC8AA9098C1* get_BuiltInConverters_1() const { return ___BuiltInConverters_1; }
	inline JsonConverterU5BU5D_tB150F37E62D8CE8327B776F611D0ADC8AA9098C1** get_address_of_BuiltInConverters_1() { return &___BuiltInConverters_1; }
	inline void set_BuiltInConverters_1(JsonConverterU5BU5D_tB150F37E62D8CE8327B776F611D0ADC8AA9098C1* value)
	{
		___BuiltInConverters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BuiltInConverters_1), (void*)value);
	}

	inline static int32_t get_offset_of_TypeContractCacheLock_2() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297_StaticFields, ___TypeContractCacheLock_2)); }
	inline RuntimeObject * get_TypeContractCacheLock_2() const { return ___TypeContractCacheLock_2; }
	inline RuntimeObject ** get_address_of_TypeContractCacheLock_2() { return &___TypeContractCacheLock_2; }
	inline void set_TypeContractCacheLock_2(RuntimeObject * value)
	{
		___TypeContractCacheLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeContractCacheLock_2), (void*)value);
	}

	inline static int32_t get_offset_of__sharedState_3() { return static_cast<int32_t>(offsetof(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297_StaticFields, ____sharedState_3)); }
	inline DefaultContractResolverState_t001B39B9A72A4F97F591326782905F0F06A1FCD6 * get__sharedState_3() const { return ____sharedState_3; }
	inline DefaultContractResolverState_t001B39B9A72A4F97F591326782905F0F06A1FCD6 ** get_address_of__sharedState_3() { return &____sharedState_3; }
	inline void set__sharedState_3(DefaultContractResolverState_t001B39B9A72A4F97F591326782905F0F06A1FCD6 * value)
	{
		____sharedState_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sharedState_3), (void*)value);
	}
};


// Newtonsoft.Json.Utilities.TypeInformation
struct  TypeInformation_t30731224CF3BE05F8F32F6DC4FD5FAFFD4F6997D  : public RuntimeObject
{
public:
	// System.Type Newtonsoft.Json.Utilities.TypeInformation::<Type>k__BackingField
	Type_t * ___U3CTypeU3Ek__BackingField_0;
	// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.TypeInformation::<TypeCode>k__BackingField
	int32_t ___U3CTypeCodeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TypeInformation_t30731224CF3BE05F8F32F6DC4FD5FAFFD4F6997D, ___U3CTypeU3Ek__BackingField_0)); }
	inline Type_t * get_U3CTypeU3Ek__BackingField_0() const { return ___U3CTypeU3Ek__BackingField_0; }
	inline Type_t ** get_address_of_U3CTypeU3Ek__BackingField_0() { return &___U3CTypeU3Ek__BackingField_0; }
	inline void set_U3CTypeU3Ek__BackingField_0(Type_t * value)
	{
		___U3CTypeU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTypeU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTypeCodeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TypeInformation_t30731224CF3BE05F8F32F6DC4FD5FAFFD4F6997D, ___U3CTypeCodeU3Ek__BackingField_1)); }
	inline int32_t get_U3CTypeCodeU3Ek__BackingField_1() const { return ___U3CTypeCodeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CTypeCodeU3Ek__BackingField_1() { return &___U3CTypeCodeU3Ek__BackingField_1; }
	inline void set_U3CTypeCodeU3Ek__BackingField_1(int32_t value)
	{
		___U3CTypeCodeU3Ek__BackingField_1 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.Nullable`1<Newtonsoft.Json.DateFormatHandling>
struct  Nullable_1_t13485763BBD44AD8D27C8A624B27016EF95BD642 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t13485763BBD44AD8D27C8A624B27016EF95BD642, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t13485763BBD44AD8D27C8A624B27016EF95BD642, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateParseHandling>
struct  Nullable_1_tF0877B1A14951065157EB7C02C0DE25358815C20 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF0877B1A14951065157EB7C02C0DE25358815C20, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF0877B1A14951065157EB7C02C0DE25358815C20, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling>
struct  Nullable_1_tAB9608100ACA10B2AD52BE8182EB78BF6B906BA1 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAB9608100ACA10B2AD52BE8182EB78BF6B906BA1, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAB9608100ACA10B2AD52BE8182EB78BF6B906BA1, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling>
struct  Nullable_1_t9E71C1BC6959F605B3ADD50064E610497ABD662D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t9E71C1BC6959F605B3ADD50064E610497ABD662D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t9E71C1BC6959F605B3ADD50064E610497ABD662D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling>
struct  Nullable_1_t18C70E5283BD35F6B0FC882274E21B74C954987D 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t18C70E5283BD35F6B0FC882274E21B74C954987D, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t18C70E5283BD35F6B0FC882274E21B74C954987D, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.FloatParseHandling>
struct  Nullable_1_tADE18A68B6691BCF86B354B5A495AD546B0409DD 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tADE18A68B6691BCF86B354B5A495AD546B0409DD, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tADE18A68B6691BCF86B354B5A495AD546B0409DD, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Formatting>
struct  Nullable_1_tB495D90EF0B3F06B5F80D56A7948A5EA502E4620 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tB495D90EF0B3F06B5F80D56A7948A5EA502E4620, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tB495D90EF0B3F06B5F80D56A7948A5EA502E4620, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.NullValueHandling>
struct  Nullable_1_tCF7ED79E51951378B32F7D38B8DE9C9343E4CD76 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCF7ED79E51951378B32F7D38B8DE9C9343E4CD76, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCF7ED79E51951378B32F7D38B8DE9C9343E4CD76, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling>
struct  Nullable_1_tC85F465BF404B6652FE5A67D9C06D947216C93E4 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tC85F465BF404B6652FE5A67D9C06D947216C93E4, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tC85F465BF404B6652FE5A67D9C06D947216C93E4, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling>
struct  Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Required>
struct  Nullable_1_tE1512B9004C32CB6EBA9B1989ADFFA76086747F6 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tE1512B9004C32CB6EBA9B1989ADFFA76086747F6, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tE1512B9004C32CB6EBA9B1989ADFFA76086747F6, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader_PropertyPresence>
struct  Nullable_1_tCD51EB07192BB7057A532D2925B93F71D157815F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tCD51EB07192BB7057A532D2925B93F71D157815F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tCD51EB07192BB7057A532D2925B93F71D157815F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling>
struct  Nullable_1_tF98A1FF65BCEEE060BF0A71617E3EADC87C1E3CA 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF98A1FF65BCEEE060BF0A71617E3EADC87C1E3CA, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF98A1FF65BCEEE060BF0A71617E3EADC87C1E3CA, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<Newtonsoft.Json.TypeNameHandling>
struct  Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.DateTimeOffset>
struct  Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7 
{
public:
	// T System.Nullable`1::value
	DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7, ___value_0)); }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  get_value_0() const { return ___value_0; }
	inline DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Int32Enum>
struct  Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Nullable`1<System.Text.RegularExpressions.RegexOptions>
struct  Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F 
{
public:
	// T System.Nullable`1::value
	int32_t ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F, ___value_0)); }
	inline int32_t get_value_0() const { return ___value_0; }
	inline int32_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(int32_t value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Reflection.ParameterInfo
struct  ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7  : public RuntimeObject
{
public:
	// System.Type System.Reflection.ParameterInfo::ClassImpl
	Type_t * ___ClassImpl_0;
	// System.Object System.Reflection.ParameterInfo::DefaultValueImpl
	RuntimeObject * ___DefaultValueImpl_1;
	// System.Reflection.MemberInfo System.Reflection.ParameterInfo::MemberImpl
	MemberInfo_t * ___MemberImpl_2;
	// System.String System.Reflection.ParameterInfo::NameImpl
	String_t* ___NameImpl_3;
	// System.Int32 System.Reflection.ParameterInfo::PositionImpl
	int32_t ___PositionImpl_4;
	// System.Reflection.ParameterAttributes System.Reflection.ParameterInfo::AttrsImpl
	int32_t ___AttrsImpl_5;
	// System.Runtime.InteropServices.MarshalAsAttribute System.Reflection.ParameterInfo::marshalAs
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;

public:
	inline static int32_t get_offset_of_ClassImpl_0() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___ClassImpl_0)); }
	inline Type_t * get_ClassImpl_0() const { return ___ClassImpl_0; }
	inline Type_t ** get_address_of_ClassImpl_0() { return &___ClassImpl_0; }
	inline void set_ClassImpl_0(Type_t * value)
	{
		___ClassImpl_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClassImpl_0), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultValueImpl_1() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___DefaultValueImpl_1)); }
	inline RuntimeObject * get_DefaultValueImpl_1() const { return ___DefaultValueImpl_1; }
	inline RuntimeObject ** get_address_of_DefaultValueImpl_1() { return &___DefaultValueImpl_1; }
	inline void set_DefaultValueImpl_1(RuntimeObject * value)
	{
		___DefaultValueImpl_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultValueImpl_1), (void*)value);
	}

	inline static int32_t get_offset_of_MemberImpl_2() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___MemberImpl_2)); }
	inline MemberInfo_t * get_MemberImpl_2() const { return ___MemberImpl_2; }
	inline MemberInfo_t ** get_address_of_MemberImpl_2() { return &___MemberImpl_2; }
	inline void set_MemberImpl_2(MemberInfo_t * value)
	{
		___MemberImpl_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberImpl_2), (void*)value);
	}

	inline static int32_t get_offset_of_NameImpl_3() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___NameImpl_3)); }
	inline String_t* get_NameImpl_3() const { return ___NameImpl_3; }
	inline String_t** get_address_of_NameImpl_3() { return &___NameImpl_3; }
	inline void set_NameImpl_3(String_t* value)
	{
		___NameImpl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameImpl_3), (void*)value);
	}

	inline static int32_t get_offset_of_PositionImpl_4() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___PositionImpl_4)); }
	inline int32_t get_PositionImpl_4() const { return ___PositionImpl_4; }
	inline int32_t* get_address_of_PositionImpl_4() { return &___PositionImpl_4; }
	inline void set_PositionImpl_4(int32_t value)
	{
		___PositionImpl_4 = value;
	}

	inline static int32_t get_offset_of_AttrsImpl_5() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___AttrsImpl_5)); }
	inline int32_t get_AttrsImpl_5() const { return ___AttrsImpl_5; }
	inline int32_t* get_address_of_AttrsImpl_5() { return &___AttrsImpl_5; }
	inline void set_AttrsImpl_5(int32_t value)
	{
		___AttrsImpl_5 = value;
	}

	inline static int32_t get_offset_of_marshalAs_6() { return static_cast<int32_t>(offsetof(ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7, ___marshalAs_6)); }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * get_marshalAs_6() const { return ___marshalAs_6; }
	inline MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 ** get_address_of_marshalAs_6() { return &___marshalAs_6; }
	inline void set_marshalAs_6(MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * value)
	{
		___marshalAs_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___marshalAs_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_pinvoke
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	char* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};
// Native definition for COM marshalling of System.Reflection.ParameterInfo
struct ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_marshaled_com
{
	Type_t * ___ClassImpl_0;
	Il2CppIUnknown* ___DefaultValueImpl_1;
	MemberInfo_t * ___MemberImpl_2;
	Il2CppChar* ___NameImpl_3;
	int32_t ___PositionImpl_4;
	int32_t ___AttrsImpl_5;
	MarshalAsAttribute_t1689F84A11C34D0F35491C8F0DA4421467B6EFE6 * ___marshalAs_6;
};

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Text.RegularExpressions.Regex
struct  Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F  : public RuntimeObject
{
public:
	// System.String System.Text.RegularExpressions.Regex::pattern
	String_t* ___pattern_0;
	// System.Text.RegularExpressions.RegexRunnerFactory System.Text.RegularExpressions.Regex::factory
	RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * ___factory_1;
	// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::roptions
	int32_t ___roptions_2;
	// System.TimeSpan System.Text.RegularExpressions.Regex::internalMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___internalMatchTimeout_5;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::caps
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___caps_8;
	// System.Collections.Hashtable System.Text.RegularExpressions.Regex::capnames
	Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * ___capnames_9;
	// System.String[] System.Text.RegularExpressions.Regex::capslist
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___capslist_10;
	// System.Int32 System.Text.RegularExpressions.Regex::capsize
	int32_t ___capsize_11;
	// System.Text.RegularExpressions.ExclusiveReference System.Text.RegularExpressions.Regex::runnerref
	ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * ___runnerref_12;
	// System.Text.RegularExpressions.SharedReference System.Text.RegularExpressions.Regex::replref
	SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * ___replref_13;
	// System.Text.RegularExpressions.RegexCode System.Text.RegularExpressions.Regex::code
	RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * ___code_14;
	// System.Boolean System.Text.RegularExpressions.Regex::refsInitialized
	bool ___refsInitialized_15;

public:
	inline static int32_t get_offset_of_pattern_0() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___pattern_0)); }
	inline String_t* get_pattern_0() const { return ___pattern_0; }
	inline String_t** get_address_of_pattern_0() { return &___pattern_0; }
	inline void set_pattern_0(String_t* value)
	{
		___pattern_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pattern_0), (void*)value);
	}

	inline static int32_t get_offset_of_factory_1() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___factory_1)); }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * get_factory_1() const { return ___factory_1; }
	inline RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 ** get_address_of_factory_1() { return &___factory_1; }
	inline void set_factory_1(RegexRunnerFactory_tA425EC5DC77FC0AAD86EB116E5483E94679CAA96 * value)
	{
		___factory_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___factory_1), (void*)value);
	}

	inline static int32_t get_offset_of_roptions_2() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___roptions_2)); }
	inline int32_t get_roptions_2() const { return ___roptions_2; }
	inline int32_t* get_address_of_roptions_2() { return &___roptions_2; }
	inline void set_roptions_2(int32_t value)
	{
		___roptions_2 = value;
	}

	inline static int32_t get_offset_of_internalMatchTimeout_5() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___internalMatchTimeout_5)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_internalMatchTimeout_5() const { return ___internalMatchTimeout_5; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_internalMatchTimeout_5() { return &___internalMatchTimeout_5; }
	inline void set_internalMatchTimeout_5(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___internalMatchTimeout_5 = value;
	}

	inline static int32_t get_offset_of_caps_8() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___caps_8)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_caps_8() const { return ___caps_8; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_caps_8() { return &___caps_8; }
	inline void set_caps_8(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___caps_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___caps_8), (void*)value);
	}

	inline static int32_t get_offset_of_capnames_9() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capnames_9)); }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * get_capnames_9() const { return ___capnames_9; }
	inline Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC ** get_address_of_capnames_9() { return &___capnames_9; }
	inline void set_capnames_9(Hashtable_t7565AB92A12227AD5BADD6911F10D87EE52509AC * value)
	{
		___capnames_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capnames_9), (void*)value);
	}

	inline static int32_t get_offset_of_capslist_10() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capslist_10)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_capslist_10() const { return ___capslist_10; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_capslist_10() { return &___capslist_10; }
	inline void set_capslist_10(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___capslist_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___capslist_10), (void*)value);
	}

	inline static int32_t get_offset_of_capsize_11() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___capsize_11)); }
	inline int32_t get_capsize_11() const { return ___capsize_11; }
	inline int32_t* get_address_of_capsize_11() { return &___capsize_11; }
	inline void set_capsize_11(int32_t value)
	{
		___capsize_11 = value;
	}

	inline static int32_t get_offset_of_runnerref_12() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___runnerref_12)); }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * get_runnerref_12() const { return ___runnerref_12; }
	inline ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 ** get_address_of_runnerref_12() { return &___runnerref_12; }
	inline void set_runnerref_12(ExclusiveReference_t7F4A5D2416EA34710F520BAD225E61BC1E98D1D8 * value)
	{
		___runnerref_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___runnerref_12), (void*)value);
	}

	inline static int32_t get_offset_of_replref_13() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___replref_13)); }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * get_replref_13() const { return ___replref_13; }
	inline SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 ** get_address_of_replref_13() { return &___replref_13; }
	inline void set_replref_13(SharedReference_t74AB40C102A76A7523C72269A49D2C8FBDD83926 * value)
	{
		___replref_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___replref_13), (void*)value);
	}

	inline static int32_t get_offset_of_code_14() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___code_14)); }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * get_code_14() const { return ___code_14; }
	inline RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 ** get_address_of_code_14() { return &___code_14; }
	inline void set_code_14(RegexCode_tF1653432E8EEDED5AB9517D09CA84B5FAA3CC0D5 * value)
	{
		___code_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___code_14), (void*)value);
	}

	inline static int32_t get_offset_of_refsInitialized_15() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F, ___refsInitialized_15)); }
	inline bool get_refsInitialized_15() const { return ___refsInitialized_15; }
	inline bool* get_address_of_refsInitialized_15() { return &___refsInitialized_15; }
	inline void set_refsInitialized_15(bool value)
	{
		___refsInitialized_15 = value;
	}
};

struct Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields
{
public:
	// System.TimeSpan System.Text.RegularExpressions.Regex::MaximumMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___MaximumMatchTimeout_3;
	// System.TimeSpan System.Text.RegularExpressions.Regex::InfiniteMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___InfiniteMatchTimeout_4;
	// System.TimeSpan System.Text.RegularExpressions.Regex::FallbackDefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___FallbackDefaultMatchTimeout_6;
	// System.TimeSpan System.Text.RegularExpressions.Regex::DefaultMatchTimeout
	TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___DefaultMatchTimeout_7;
	// System.Collections.Generic.LinkedList`1<System.Text.RegularExpressions.CachedCodeEntry> System.Text.RegularExpressions.Regex::livecode
	LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * ___livecode_16;
	// System.Int32 System.Text.RegularExpressions.Regex::cacheSize
	int32_t ___cacheSize_17;

public:
	inline static int32_t get_offset_of_MaximumMatchTimeout_3() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___MaximumMatchTimeout_3)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_MaximumMatchTimeout_3() const { return ___MaximumMatchTimeout_3; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_MaximumMatchTimeout_3() { return &___MaximumMatchTimeout_3; }
	inline void set_MaximumMatchTimeout_3(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___MaximumMatchTimeout_3 = value;
	}

	inline static int32_t get_offset_of_InfiniteMatchTimeout_4() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___InfiniteMatchTimeout_4)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_InfiniteMatchTimeout_4() const { return ___InfiniteMatchTimeout_4; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_InfiniteMatchTimeout_4() { return &___InfiniteMatchTimeout_4; }
	inline void set_InfiniteMatchTimeout_4(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___InfiniteMatchTimeout_4 = value;
	}

	inline static int32_t get_offset_of_FallbackDefaultMatchTimeout_6() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___FallbackDefaultMatchTimeout_6)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_FallbackDefaultMatchTimeout_6() const { return ___FallbackDefaultMatchTimeout_6; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_FallbackDefaultMatchTimeout_6() { return &___FallbackDefaultMatchTimeout_6; }
	inline void set_FallbackDefaultMatchTimeout_6(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___FallbackDefaultMatchTimeout_6 = value;
	}

	inline static int32_t get_offset_of_DefaultMatchTimeout_7() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___DefaultMatchTimeout_7)); }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  get_DefaultMatchTimeout_7() const { return ___DefaultMatchTimeout_7; }
	inline TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203 * get_address_of_DefaultMatchTimeout_7() { return &___DefaultMatchTimeout_7; }
	inline void set_DefaultMatchTimeout_7(TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  value)
	{
		___DefaultMatchTimeout_7 = value;
	}

	inline static int32_t get_offset_of_livecode_16() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___livecode_16)); }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * get_livecode_16() const { return ___livecode_16; }
	inline LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 ** get_address_of_livecode_16() { return &___livecode_16; }
	inline void set_livecode_16(LinkedList_1_t0AD3FC1D19E68F4B148AFF908DC3719C9B117D92 * value)
	{
		___livecode_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___livecode_16), (void*)value);
	}

	inline static int32_t get_offset_of_cacheSize_17() { return static_cast<int32_t>(offsetof(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_StaticFields, ___cacheSize_17)); }
	inline int32_t get_cacheSize_17() const { return ___cacheSize_17; }
	inline int32_t* get_address_of_cacheSize_17() { return &___cacheSize_17; }
	inline void set_cacheSize_17(int32_t value)
	{
		___cacheSize_17 = value;
	}
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.Uri
struct  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_13;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_14;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * ___m_Syntax_15;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_16;
	// System.Uri_Flags System.Uri::m_Flags
	uint64_t ___m_Flags_17;
	// System.Uri_UriInfo System.Uri::m_Info
	UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * ___m_Info_18;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_19;

public:
	inline static int32_t get_offset_of_m_String_13() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_String_13)); }
	inline String_t* get_m_String_13() const { return ___m_String_13; }
	inline String_t** get_address_of_m_String_13() { return &___m_String_13; }
	inline void set_m_String_13(String_t* value)
	{
		___m_String_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_String_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_14() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_originalUnicodeString_14)); }
	inline String_t* get_m_originalUnicodeString_14() const { return ___m_originalUnicodeString_14; }
	inline String_t** get_address_of_m_originalUnicodeString_14() { return &___m_originalUnicodeString_14; }
	inline void set_m_originalUnicodeString_14(String_t* value)
	{
		___m_originalUnicodeString_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_originalUnicodeString_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Syntax_15() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Syntax_15)); }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * get_m_Syntax_15() const { return ___m_Syntax_15; }
	inline UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A ** get_address_of_m_Syntax_15() { return &___m_Syntax_15; }
	inline void set_m_Syntax_15(UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A * value)
	{
		___m_Syntax_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Syntax_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_16() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_DnsSafeHost_16)); }
	inline String_t* get_m_DnsSafeHost_16() const { return ___m_DnsSafeHost_16; }
	inline String_t** get_address_of_m_DnsSafeHost_16() { return &___m_DnsSafeHost_16; }
	inline void set_m_DnsSafeHost_16(String_t* value)
	{
		___m_DnsSafeHost_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DnsSafeHost_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_17() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Flags_17)); }
	inline uint64_t get_m_Flags_17() const { return ___m_Flags_17; }
	inline uint64_t* get_address_of_m_Flags_17() { return &___m_Flags_17; }
	inline void set_m_Flags_17(uint64_t value)
	{
		___m_Flags_17 = value;
	}

	inline static int32_t get_offset_of_m_Info_18() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_Info_18)); }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * get_m_Info_18() const { return ___m_Info_18; }
	inline UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 ** get_address_of_m_Info_18() { return &___m_Info_18; }
	inline void set_m_Info_18(UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45 * value)
	{
		___m_Info_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Info_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_iriParsing_19() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612, ___m_iriParsing_19)); }
	inline bool get_m_iriParsing_19() const { return ___m_iriParsing_19; }
	inline bool* get_address_of_m_iriParsing_19() { return &___m_iriParsing_19; }
	inline void set_m_iriParsing_19(bool value)
	{
		___m_iriParsing_19 = value;
	}
};

struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_20;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_21;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_22;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_23;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_24;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_25;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_26;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___HexLowerChars_27;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____WSchars_28;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFile_0), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeFtp_1), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeGopher_2), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttp_3), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeHttps_4), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWs_5), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeWss_6), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeMailto_7), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNews_8), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNntp_9), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetTcp_10), (void*)value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UriSchemeNetPipe_11), (void*)value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SchemeDelimiter_12), (void*)value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_20() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitialized_20)); }
	inline bool get_s_ConfigInitialized_20() const { return ___s_ConfigInitialized_20; }
	inline bool* get_address_of_s_ConfigInitialized_20() { return &___s_ConfigInitialized_20; }
	inline void set_s_ConfigInitialized_20(bool value)
	{
		___s_ConfigInitialized_20 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_21() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_ConfigInitializing_21)); }
	inline bool get_s_ConfigInitializing_21() const { return ___s_ConfigInitializing_21; }
	inline bool* get_address_of_s_ConfigInitializing_21() { return &___s_ConfigInitializing_21; }
	inline void set_s_ConfigInitializing_21(bool value)
	{
		___s_ConfigInitializing_21 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_22() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IdnScope_22)); }
	inline int32_t get_s_IdnScope_22() const { return ___s_IdnScope_22; }
	inline int32_t* get_address_of_s_IdnScope_22() { return &___s_IdnScope_22; }
	inline void set_s_IdnScope_22(int32_t value)
	{
		___s_IdnScope_22 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_23() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_IriParsing_23)); }
	inline bool get_s_IriParsing_23() const { return ___s_IriParsing_23; }
	inline bool* get_address_of_s_IriParsing_23() { return &___s_IriParsing_23; }
	inline void set_s_IriParsing_23(bool value)
	{
		___s_IriParsing_23 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_24() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___useDotNetRelativeOrAbsolute_24)); }
	inline bool get_useDotNetRelativeOrAbsolute_24() const { return ___useDotNetRelativeOrAbsolute_24; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_24() { return &___useDotNetRelativeOrAbsolute_24; }
	inline void set_useDotNetRelativeOrAbsolute_24(bool value)
	{
		___useDotNetRelativeOrAbsolute_24 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_25() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___IsWindowsFileSystem_25)); }
	inline bool get_IsWindowsFileSystem_25() const { return ___IsWindowsFileSystem_25; }
	inline bool* get_address_of_IsWindowsFileSystem_25() { return &___IsWindowsFileSystem_25; }
	inline void set_IsWindowsFileSystem_25(bool value)
	{
		___IsWindowsFileSystem_25 = value;
	}

	inline static int32_t get_offset_of_s_initLock_26() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___s_initLock_26)); }
	inline RuntimeObject * get_s_initLock_26() const { return ___s_initLock_26; }
	inline RuntimeObject ** get_address_of_s_initLock_26() { return &___s_initLock_26; }
	inline void set_s_initLock_26(RuntimeObject * value)
	{
		___s_initLock_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_initLock_26), (void*)value);
	}

	inline static int32_t get_offset_of_HexLowerChars_27() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ___HexLowerChars_27)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_HexLowerChars_27() const { return ___HexLowerChars_27; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_HexLowerChars_27() { return &___HexLowerChars_27; }
	inline void set_HexLowerChars_27(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___HexLowerChars_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HexLowerChars_27), (void*)value);
	}

	inline static int32_t get_offset_of__WSchars_28() { return static_cast<int32_t>(offsetof(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_StaticFields, ____WSchars_28)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__WSchars_28() const { return ____WSchars_28; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__WSchars_28() { return &____WSchars_28; }
	inline void set__WSchars_28(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____WSchars_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____WSchars_28), (void*)value);
	}
};


// Newtonsoft.Json.JsonReader
struct  JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91  : public RuntimeObject
{
public:
	// Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::_tokenType
	int32_t ____tokenType_0;
	// System.Object Newtonsoft.Json.JsonReader::_value
	RuntimeObject * ____value_1;
	// System.Char Newtonsoft.Json.JsonReader::_quoteChar
	Il2CppChar ____quoteChar_2;
	// Newtonsoft.Json.JsonReader_State Newtonsoft.Json.JsonReader::_currentState
	int32_t ____currentState_3;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonReader::_currentPosition
	JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798  ____currentPosition_4;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonReader::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_5;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonReader::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_6;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_7;
	// System.Boolean Newtonsoft.Json.JsonReader::_hasExceededMaxDepth
	bool ____hasExceededMaxDepth_8;
	// Newtonsoft.Json.DateParseHandling Newtonsoft.Json.JsonReader::_dateParseHandling
	int32_t ____dateParseHandling_9;
	// Newtonsoft.Json.FloatParseHandling Newtonsoft.Json.JsonReader::_floatParseHandling
	int32_t ____floatParseHandling_10;
	// System.String Newtonsoft.Json.JsonReader::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonReader::_stack
	List_1_t320FFC8A091A55AEADCD2F4D24351B95184C13D7 * ____stack_12;
	// System.Boolean Newtonsoft.Json.JsonReader::<CloseInput>k__BackingField
	bool ___U3CCloseInputU3Ek__BackingField_13;
	// System.Boolean Newtonsoft.Json.JsonReader::<SupportMultipleContent>k__BackingField
	bool ___U3CSupportMultipleContentU3Ek__BackingField_14;

public:
	inline static int32_t get_offset_of__tokenType_0() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____tokenType_0)); }
	inline int32_t get__tokenType_0() const { return ____tokenType_0; }
	inline int32_t* get_address_of__tokenType_0() { return &____tokenType_0; }
	inline void set__tokenType_0(int32_t value)
	{
		____tokenType_0 = value;
	}

	inline static int32_t get_offset_of__value_1() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____value_1)); }
	inline RuntimeObject * get__value_1() const { return ____value_1; }
	inline RuntimeObject ** get_address_of__value_1() { return &____value_1; }
	inline void set__value_1(RuntimeObject * value)
	{
		____value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____value_1), (void*)value);
	}

	inline static int32_t get_offset_of__quoteChar_2() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____quoteChar_2)); }
	inline Il2CppChar get__quoteChar_2() const { return ____quoteChar_2; }
	inline Il2CppChar* get_address_of__quoteChar_2() { return &____quoteChar_2; }
	inline void set__quoteChar_2(Il2CppChar value)
	{
		____quoteChar_2 = value;
	}

	inline static int32_t get_offset_of__currentState_3() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____currentState_3)); }
	inline int32_t get__currentState_3() const { return ____currentState_3; }
	inline int32_t* get_address_of__currentState_3() { return &____currentState_3; }
	inline void set__currentState_3(int32_t value)
	{
		____currentState_3 = value;
	}

	inline static int32_t get_offset_of__currentPosition_4() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____currentPosition_4)); }
	inline JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798  get__currentPosition_4() const { return ____currentPosition_4; }
	inline JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798 * get_address_of__currentPosition_4() { return &____currentPosition_4; }
	inline void set__currentPosition_4(JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798  value)
	{
		____currentPosition_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_4))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__culture_5() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____culture_5)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_5() const { return ____culture_5; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_5() { return &____culture_5; }
	inline void set__culture_5(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_5), (void*)value);
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_6() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____dateTimeZoneHandling_6)); }
	inline int32_t get__dateTimeZoneHandling_6() const { return ____dateTimeZoneHandling_6; }
	inline int32_t* get_address_of__dateTimeZoneHandling_6() { return &____dateTimeZoneHandling_6; }
	inline void set__dateTimeZoneHandling_6(int32_t value)
	{
		____dateTimeZoneHandling_6 = value;
	}

	inline static int32_t get_offset_of__maxDepth_7() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____maxDepth_7)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_7() const { return ____maxDepth_7; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_7() { return &____maxDepth_7; }
	inline void set__maxDepth_7(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_7 = value;
	}

	inline static int32_t get_offset_of__hasExceededMaxDepth_8() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____hasExceededMaxDepth_8)); }
	inline bool get__hasExceededMaxDepth_8() const { return ____hasExceededMaxDepth_8; }
	inline bool* get_address_of__hasExceededMaxDepth_8() { return &____hasExceededMaxDepth_8; }
	inline void set__hasExceededMaxDepth_8(bool value)
	{
		____hasExceededMaxDepth_8 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_9() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____dateParseHandling_9)); }
	inline int32_t get__dateParseHandling_9() const { return ____dateParseHandling_9; }
	inline int32_t* get_address_of__dateParseHandling_9() { return &____dateParseHandling_9; }
	inline void set__dateParseHandling_9(int32_t value)
	{
		____dateParseHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_10() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____floatParseHandling_10)); }
	inline int32_t get__floatParseHandling_10() const { return ____floatParseHandling_10; }
	inline int32_t* get_address_of__floatParseHandling_10() { return &____floatParseHandling_10; }
	inline void set__floatParseHandling_10(int32_t value)
	{
		____floatParseHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__stack_12() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ____stack_12)); }
	inline List_1_t320FFC8A091A55AEADCD2F4D24351B95184C13D7 * get__stack_12() const { return ____stack_12; }
	inline List_1_t320FFC8A091A55AEADCD2F4D24351B95184C13D7 ** get_address_of__stack_12() { return &____stack_12; }
	inline void set__stack_12(List_1_t320FFC8A091A55AEADCD2F4D24351B95184C13D7 * value)
	{
		____stack_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCloseInputU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ___U3CCloseInputU3Ek__BackingField_13)); }
	inline bool get_U3CCloseInputU3Ek__BackingField_13() const { return ___U3CCloseInputU3Ek__BackingField_13; }
	inline bool* get_address_of_U3CCloseInputU3Ek__BackingField_13() { return &___U3CCloseInputU3Ek__BackingField_13; }
	inline void set_U3CCloseInputU3Ek__BackingField_13(bool value)
	{
		___U3CCloseInputU3Ek__BackingField_13 = value;
	}

	inline static int32_t get_offset_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91, ___U3CSupportMultipleContentU3Ek__BackingField_14)); }
	inline bool get_U3CSupportMultipleContentU3Ek__BackingField_14() const { return ___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CSupportMultipleContentU3Ek__BackingField_14() { return &___U3CSupportMultipleContentU3Ek__BackingField_14; }
	inline void set_U3CSupportMultipleContentU3Ek__BackingField_14(bool value)
	{
		___U3CSupportMultipleContentU3Ek__BackingField_14 = value;
	}
};


// Newtonsoft.Json.JsonSerializationException
struct  JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8  : public JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32
{
public:

public:
};


// Newtonsoft.Json.JsonSerializer
struct  JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3  : public RuntimeObject
{
public:
	// Newtonsoft.Json.TypeNameHandling Newtonsoft.Json.JsonSerializer::_typeNameHandling
	int32_t ____typeNameHandling_0;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle Newtonsoft.Json.JsonSerializer::_typeNameAssemblyFormat
	int32_t ____typeNameAssemblyFormat_1;
	// Newtonsoft.Json.PreserveReferencesHandling Newtonsoft.Json.JsonSerializer::_preserveReferencesHandling
	int32_t ____preserveReferencesHandling_2;
	// Newtonsoft.Json.ReferenceLoopHandling Newtonsoft.Json.JsonSerializer::_referenceLoopHandling
	int32_t ____referenceLoopHandling_3;
	// Newtonsoft.Json.MissingMemberHandling Newtonsoft.Json.JsonSerializer::_missingMemberHandling
	int32_t ____missingMemberHandling_4;
	// Newtonsoft.Json.ObjectCreationHandling Newtonsoft.Json.JsonSerializer::_objectCreationHandling
	int32_t ____objectCreationHandling_5;
	// Newtonsoft.Json.NullValueHandling Newtonsoft.Json.JsonSerializer::_nullValueHandling
	int32_t ____nullValueHandling_6;
	// Newtonsoft.Json.DefaultValueHandling Newtonsoft.Json.JsonSerializer::_defaultValueHandling
	int32_t ____defaultValueHandling_7;
	// Newtonsoft.Json.ConstructorHandling Newtonsoft.Json.JsonSerializer::_constructorHandling
	int32_t ____constructorHandling_8;
	// Newtonsoft.Json.MetadataPropertyHandling Newtonsoft.Json.JsonSerializer::_metadataPropertyHandling
	int32_t ____metadataPropertyHandling_9;
	// Newtonsoft.Json.JsonConverterCollection Newtonsoft.Json.JsonSerializer::_converters
	JsonConverterCollection_t284B2A8526FB714415B0C3B682C8DDCB13DAB55F * ____converters_10;
	// Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::_contractResolver
	RuntimeObject* ____contractResolver_11;
	// Newtonsoft.Json.Serialization.ITraceWriter Newtonsoft.Json.JsonSerializer::_traceWriter
	RuntimeObject* ____traceWriter_12;
	// System.Collections.IEqualityComparer Newtonsoft.Json.JsonSerializer::_equalityComparer
	RuntimeObject* ____equalityComparer_13;
	// System.Runtime.Serialization.SerializationBinder Newtonsoft.Json.JsonSerializer::_binder
	SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * ____binder_14;
	// System.Runtime.Serialization.StreamingContext Newtonsoft.Json.JsonSerializer::_context
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ____context_15;
	// Newtonsoft.Json.Serialization.IReferenceResolver Newtonsoft.Json.JsonSerializer::_referenceResolver
	RuntimeObject* ____referenceResolver_16;
	// System.Nullable`1<Newtonsoft.Json.Formatting> Newtonsoft.Json.JsonSerializer::_formatting
	Nullable_1_tB495D90EF0B3F06B5F80D56A7948A5EA502E4620  ____formatting_17;
	// System.Nullable`1<Newtonsoft.Json.DateFormatHandling> Newtonsoft.Json.JsonSerializer::_dateFormatHandling
	Nullable_1_t13485763BBD44AD8D27C8A624B27016EF95BD642  ____dateFormatHandling_18;
	// System.Nullable`1<Newtonsoft.Json.DateTimeZoneHandling> Newtonsoft.Json.JsonSerializer::_dateTimeZoneHandling
	Nullable_1_tAB9608100ACA10B2AD52BE8182EB78BF6B906BA1  ____dateTimeZoneHandling_19;
	// System.Nullable`1<Newtonsoft.Json.DateParseHandling> Newtonsoft.Json.JsonSerializer::_dateParseHandling
	Nullable_1_tF0877B1A14951065157EB7C02C0DE25358815C20  ____dateParseHandling_20;
	// System.Nullable`1<Newtonsoft.Json.FloatFormatHandling> Newtonsoft.Json.JsonSerializer::_floatFormatHandling
	Nullable_1_t18C70E5283BD35F6B0FC882274E21B74C954987D  ____floatFormatHandling_21;
	// System.Nullable`1<Newtonsoft.Json.FloatParseHandling> Newtonsoft.Json.JsonSerializer::_floatParseHandling
	Nullable_1_tADE18A68B6691BCF86B354B5A495AD546B0409DD  ____floatParseHandling_22;
	// System.Nullable`1<Newtonsoft.Json.StringEscapeHandling> Newtonsoft.Json.JsonSerializer::_stringEscapeHandling
	Nullable_1_tF98A1FF65BCEEE060BF0A71617E3EADC87C1E3CA  ____stringEscapeHandling_23;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonSerializer::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_24;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.JsonSerializer::_maxDepth
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ____maxDepth_25;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_maxDepthSet
	bool ____maxDepthSet_26;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonSerializer::_checkAdditionalContent
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ____checkAdditionalContent_27;
	// System.String Newtonsoft.Json.JsonSerializer::_dateFormatString
	String_t* ____dateFormatString_28;
	// System.Boolean Newtonsoft.Json.JsonSerializer::_dateFormatStringSet
	bool ____dateFormatStringSet_29;
	// System.EventHandler`1<Newtonsoft.Json.Serialization.ErrorEventArgs> Newtonsoft.Json.JsonSerializer::Error
	EventHandler_1_t1D4D4A76514C9BC2DB366E18C9474AA63929E5B8 * ___Error_30;

public:
	inline static int32_t get_offset_of__typeNameHandling_0() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____typeNameHandling_0)); }
	inline int32_t get__typeNameHandling_0() const { return ____typeNameHandling_0; }
	inline int32_t* get_address_of__typeNameHandling_0() { return &____typeNameHandling_0; }
	inline void set__typeNameHandling_0(int32_t value)
	{
		____typeNameHandling_0 = value;
	}

	inline static int32_t get_offset_of__typeNameAssemblyFormat_1() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____typeNameAssemblyFormat_1)); }
	inline int32_t get__typeNameAssemblyFormat_1() const { return ____typeNameAssemblyFormat_1; }
	inline int32_t* get_address_of__typeNameAssemblyFormat_1() { return &____typeNameAssemblyFormat_1; }
	inline void set__typeNameAssemblyFormat_1(int32_t value)
	{
		____typeNameAssemblyFormat_1 = value;
	}

	inline static int32_t get_offset_of__preserveReferencesHandling_2() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____preserveReferencesHandling_2)); }
	inline int32_t get__preserveReferencesHandling_2() const { return ____preserveReferencesHandling_2; }
	inline int32_t* get_address_of__preserveReferencesHandling_2() { return &____preserveReferencesHandling_2; }
	inline void set__preserveReferencesHandling_2(int32_t value)
	{
		____preserveReferencesHandling_2 = value;
	}

	inline static int32_t get_offset_of__referenceLoopHandling_3() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____referenceLoopHandling_3)); }
	inline int32_t get__referenceLoopHandling_3() const { return ____referenceLoopHandling_3; }
	inline int32_t* get_address_of__referenceLoopHandling_3() { return &____referenceLoopHandling_3; }
	inline void set__referenceLoopHandling_3(int32_t value)
	{
		____referenceLoopHandling_3 = value;
	}

	inline static int32_t get_offset_of__missingMemberHandling_4() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____missingMemberHandling_4)); }
	inline int32_t get__missingMemberHandling_4() const { return ____missingMemberHandling_4; }
	inline int32_t* get_address_of__missingMemberHandling_4() { return &____missingMemberHandling_4; }
	inline void set__missingMemberHandling_4(int32_t value)
	{
		____missingMemberHandling_4 = value;
	}

	inline static int32_t get_offset_of__objectCreationHandling_5() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____objectCreationHandling_5)); }
	inline int32_t get__objectCreationHandling_5() const { return ____objectCreationHandling_5; }
	inline int32_t* get_address_of__objectCreationHandling_5() { return &____objectCreationHandling_5; }
	inline void set__objectCreationHandling_5(int32_t value)
	{
		____objectCreationHandling_5 = value;
	}

	inline static int32_t get_offset_of__nullValueHandling_6() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____nullValueHandling_6)); }
	inline int32_t get__nullValueHandling_6() const { return ____nullValueHandling_6; }
	inline int32_t* get_address_of__nullValueHandling_6() { return &____nullValueHandling_6; }
	inline void set__nullValueHandling_6(int32_t value)
	{
		____nullValueHandling_6 = value;
	}

	inline static int32_t get_offset_of__defaultValueHandling_7() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____defaultValueHandling_7)); }
	inline int32_t get__defaultValueHandling_7() const { return ____defaultValueHandling_7; }
	inline int32_t* get_address_of__defaultValueHandling_7() { return &____defaultValueHandling_7; }
	inline void set__defaultValueHandling_7(int32_t value)
	{
		____defaultValueHandling_7 = value;
	}

	inline static int32_t get_offset_of__constructorHandling_8() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____constructorHandling_8)); }
	inline int32_t get__constructorHandling_8() const { return ____constructorHandling_8; }
	inline int32_t* get_address_of__constructorHandling_8() { return &____constructorHandling_8; }
	inline void set__constructorHandling_8(int32_t value)
	{
		____constructorHandling_8 = value;
	}

	inline static int32_t get_offset_of__metadataPropertyHandling_9() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____metadataPropertyHandling_9)); }
	inline int32_t get__metadataPropertyHandling_9() const { return ____metadataPropertyHandling_9; }
	inline int32_t* get_address_of__metadataPropertyHandling_9() { return &____metadataPropertyHandling_9; }
	inline void set__metadataPropertyHandling_9(int32_t value)
	{
		____metadataPropertyHandling_9 = value;
	}

	inline static int32_t get_offset_of__converters_10() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____converters_10)); }
	inline JsonConverterCollection_t284B2A8526FB714415B0C3B682C8DDCB13DAB55F * get__converters_10() const { return ____converters_10; }
	inline JsonConverterCollection_t284B2A8526FB714415B0C3B682C8DDCB13DAB55F ** get_address_of__converters_10() { return &____converters_10; }
	inline void set__converters_10(JsonConverterCollection_t284B2A8526FB714415B0C3B682C8DDCB13DAB55F * value)
	{
		____converters_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____converters_10), (void*)value);
	}

	inline static int32_t get_offset_of__contractResolver_11() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____contractResolver_11)); }
	inline RuntimeObject* get__contractResolver_11() const { return ____contractResolver_11; }
	inline RuntimeObject** get_address_of__contractResolver_11() { return &____contractResolver_11; }
	inline void set__contractResolver_11(RuntimeObject* value)
	{
		____contractResolver_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____contractResolver_11), (void*)value);
	}

	inline static int32_t get_offset_of__traceWriter_12() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____traceWriter_12)); }
	inline RuntimeObject* get__traceWriter_12() const { return ____traceWriter_12; }
	inline RuntimeObject** get_address_of__traceWriter_12() { return &____traceWriter_12; }
	inline void set__traceWriter_12(RuntimeObject* value)
	{
		____traceWriter_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____traceWriter_12), (void*)value);
	}

	inline static int32_t get_offset_of__equalityComparer_13() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____equalityComparer_13)); }
	inline RuntimeObject* get__equalityComparer_13() const { return ____equalityComparer_13; }
	inline RuntimeObject** get_address_of__equalityComparer_13() { return &____equalityComparer_13; }
	inline void set__equalityComparer_13(RuntimeObject* value)
	{
		____equalityComparer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____equalityComparer_13), (void*)value);
	}

	inline static int32_t get_offset_of__binder_14() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____binder_14)); }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * get__binder_14() const { return ____binder_14; }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 ** get_address_of__binder_14() { return &____binder_14; }
	inline void set__binder_14(SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * value)
	{
		____binder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____binder_14), (void*)value);
	}

	inline static int32_t get_offset_of__context_15() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____context_15)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get__context_15() const { return ____context_15; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of__context_15() { return &____context_15; }
	inline void set__context_15(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		____context_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____context_15))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of__referenceResolver_16() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____referenceResolver_16)); }
	inline RuntimeObject* get__referenceResolver_16() const { return ____referenceResolver_16; }
	inline RuntimeObject** get_address_of__referenceResolver_16() { return &____referenceResolver_16; }
	inline void set__referenceResolver_16(RuntimeObject* value)
	{
		____referenceResolver_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____referenceResolver_16), (void*)value);
	}

	inline static int32_t get_offset_of__formatting_17() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____formatting_17)); }
	inline Nullable_1_tB495D90EF0B3F06B5F80D56A7948A5EA502E4620  get__formatting_17() const { return ____formatting_17; }
	inline Nullable_1_tB495D90EF0B3F06B5F80D56A7948A5EA502E4620 * get_address_of__formatting_17() { return &____formatting_17; }
	inline void set__formatting_17(Nullable_1_tB495D90EF0B3F06B5F80D56A7948A5EA502E4620  value)
	{
		____formatting_17 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_18() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____dateFormatHandling_18)); }
	inline Nullable_1_t13485763BBD44AD8D27C8A624B27016EF95BD642  get__dateFormatHandling_18() const { return ____dateFormatHandling_18; }
	inline Nullable_1_t13485763BBD44AD8D27C8A624B27016EF95BD642 * get_address_of__dateFormatHandling_18() { return &____dateFormatHandling_18; }
	inline void set__dateFormatHandling_18(Nullable_1_t13485763BBD44AD8D27C8A624B27016EF95BD642  value)
	{
		____dateFormatHandling_18 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_19() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____dateTimeZoneHandling_19)); }
	inline Nullable_1_tAB9608100ACA10B2AD52BE8182EB78BF6B906BA1  get__dateTimeZoneHandling_19() const { return ____dateTimeZoneHandling_19; }
	inline Nullable_1_tAB9608100ACA10B2AD52BE8182EB78BF6B906BA1 * get_address_of__dateTimeZoneHandling_19() { return &____dateTimeZoneHandling_19; }
	inline void set__dateTimeZoneHandling_19(Nullable_1_tAB9608100ACA10B2AD52BE8182EB78BF6B906BA1  value)
	{
		____dateTimeZoneHandling_19 = value;
	}

	inline static int32_t get_offset_of__dateParseHandling_20() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____dateParseHandling_20)); }
	inline Nullable_1_tF0877B1A14951065157EB7C02C0DE25358815C20  get__dateParseHandling_20() const { return ____dateParseHandling_20; }
	inline Nullable_1_tF0877B1A14951065157EB7C02C0DE25358815C20 * get_address_of__dateParseHandling_20() { return &____dateParseHandling_20; }
	inline void set__dateParseHandling_20(Nullable_1_tF0877B1A14951065157EB7C02C0DE25358815C20  value)
	{
		____dateParseHandling_20 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_21() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____floatFormatHandling_21)); }
	inline Nullable_1_t18C70E5283BD35F6B0FC882274E21B74C954987D  get__floatFormatHandling_21() const { return ____floatFormatHandling_21; }
	inline Nullable_1_t18C70E5283BD35F6B0FC882274E21B74C954987D * get_address_of__floatFormatHandling_21() { return &____floatFormatHandling_21; }
	inline void set__floatFormatHandling_21(Nullable_1_t18C70E5283BD35F6B0FC882274E21B74C954987D  value)
	{
		____floatFormatHandling_21 = value;
	}

	inline static int32_t get_offset_of__floatParseHandling_22() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____floatParseHandling_22)); }
	inline Nullable_1_tADE18A68B6691BCF86B354B5A495AD546B0409DD  get__floatParseHandling_22() const { return ____floatParseHandling_22; }
	inline Nullable_1_tADE18A68B6691BCF86B354B5A495AD546B0409DD * get_address_of__floatParseHandling_22() { return &____floatParseHandling_22; }
	inline void set__floatParseHandling_22(Nullable_1_tADE18A68B6691BCF86B354B5A495AD546B0409DD  value)
	{
		____floatParseHandling_22 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_23() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____stringEscapeHandling_23)); }
	inline Nullable_1_tF98A1FF65BCEEE060BF0A71617E3EADC87C1E3CA  get__stringEscapeHandling_23() const { return ____stringEscapeHandling_23; }
	inline Nullable_1_tF98A1FF65BCEEE060BF0A71617E3EADC87C1E3CA * get_address_of__stringEscapeHandling_23() { return &____stringEscapeHandling_23; }
	inline void set__stringEscapeHandling_23(Nullable_1_tF98A1FF65BCEEE060BF0A71617E3EADC87C1E3CA  value)
	{
		____stringEscapeHandling_23 = value;
	}

	inline static int32_t get_offset_of__culture_24() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____culture_24)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_24() const { return ____culture_24; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_24() { return &____culture_24; }
	inline void set__culture_24(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_24), (void*)value);
	}

	inline static int32_t get_offset_of__maxDepth_25() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____maxDepth_25)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get__maxDepth_25() const { return ____maxDepth_25; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of__maxDepth_25() { return &____maxDepth_25; }
	inline void set__maxDepth_25(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		____maxDepth_25 = value;
	}

	inline static int32_t get_offset_of__maxDepthSet_26() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____maxDepthSet_26)); }
	inline bool get__maxDepthSet_26() const { return ____maxDepthSet_26; }
	inline bool* get_address_of__maxDepthSet_26() { return &____maxDepthSet_26; }
	inline void set__maxDepthSet_26(bool value)
	{
		____maxDepthSet_26 = value;
	}

	inline static int32_t get_offset_of__checkAdditionalContent_27() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____checkAdditionalContent_27)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get__checkAdditionalContent_27() const { return ____checkAdditionalContent_27; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of__checkAdditionalContent_27() { return &____checkAdditionalContent_27; }
	inline void set__checkAdditionalContent_27(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		____checkAdditionalContent_27 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_28() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____dateFormatString_28)); }
	inline String_t* get__dateFormatString_28() const { return ____dateFormatString_28; }
	inline String_t** get_address_of__dateFormatString_28() { return &____dateFormatString_28; }
	inline void set__dateFormatString_28(String_t* value)
	{
		____dateFormatString_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_28), (void*)value);
	}

	inline static int32_t get_offset_of__dateFormatStringSet_29() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ____dateFormatStringSet_29)); }
	inline bool get__dateFormatStringSet_29() const { return ____dateFormatStringSet_29; }
	inline bool* get_address_of__dateFormatStringSet_29() { return &____dateFormatStringSet_29; }
	inline void set__dateFormatStringSet_29(bool value)
	{
		____dateFormatStringSet_29 = value;
	}

	inline static int32_t get_offset_of_Error_30() { return static_cast<int32_t>(offsetof(JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3, ___Error_30)); }
	inline EventHandler_1_t1D4D4A76514C9BC2DB366E18C9474AA63929E5B8 * get_Error_30() const { return ___Error_30; }
	inline EventHandler_1_t1D4D4A76514C9BC2DB366E18C9474AA63929E5B8 ** get_address_of_Error_30() { return &___Error_30; }
	inline void set_Error_30(EventHandler_1_t1D4D4A76514C9BC2DB366E18C9474AA63929E5B8 * value)
	{
		___Error_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Error_30), (void*)value);
	}
};


// Newtonsoft.Json.JsonWriter
struct  JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<Newtonsoft.Json.JsonPosition> Newtonsoft.Json.JsonWriter::_stack
	List_1_t320FFC8A091A55AEADCD2F4D24351B95184C13D7 * ____stack_2;
	// Newtonsoft.Json.JsonPosition Newtonsoft.Json.JsonWriter::_currentPosition
	JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798  ____currentPosition_3;
	// Newtonsoft.Json.JsonWriter_State Newtonsoft.Json.JsonWriter::_currentState
	int32_t ____currentState_4;
	// Newtonsoft.Json.Formatting Newtonsoft.Json.JsonWriter::_formatting
	int32_t ____formatting_5;
	// System.Boolean Newtonsoft.Json.JsonWriter::<CloseOutput>k__BackingField
	bool ___U3CCloseOutputU3Ek__BackingField_6;
	// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::_dateFormatHandling
	int32_t ____dateFormatHandling_7;
	// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::_dateTimeZoneHandling
	int32_t ____dateTimeZoneHandling_8;
	// Newtonsoft.Json.StringEscapeHandling Newtonsoft.Json.JsonWriter::_stringEscapeHandling
	int32_t ____stringEscapeHandling_9;
	// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::_floatFormatHandling
	int32_t ____floatFormatHandling_10;
	// System.String Newtonsoft.Json.JsonWriter::_dateFormatString
	String_t* ____dateFormatString_11;
	// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::_culture
	CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ____culture_12;

public:
	inline static int32_t get_offset_of__stack_2() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____stack_2)); }
	inline List_1_t320FFC8A091A55AEADCD2F4D24351B95184C13D7 * get__stack_2() const { return ____stack_2; }
	inline List_1_t320FFC8A091A55AEADCD2F4D24351B95184C13D7 ** get_address_of__stack_2() { return &____stack_2; }
	inline void set__stack_2(List_1_t320FFC8A091A55AEADCD2F4D24351B95184C13D7 * value)
	{
		____stack_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stack_2), (void*)value);
	}

	inline static int32_t get_offset_of__currentPosition_3() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____currentPosition_3)); }
	inline JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798  get__currentPosition_3() const { return ____currentPosition_3; }
	inline JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798 * get_address_of__currentPosition_3() { return &____currentPosition_3; }
	inline void set__currentPosition_3(JsonPosition_t00EFF4D6A16239365565958558BAB8E8291B5798  value)
	{
		____currentPosition_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____currentPosition_3))->___PropertyName_3), (void*)NULL);
	}

	inline static int32_t get_offset_of__currentState_4() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____currentState_4)); }
	inline int32_t get__currentState_4() const { return ____currentState_4; }
	inline int32_t* get_address_of__currentState_4() { return &____currentState_4; }
	inline void set__currentState_4(int32_t value)
	{
		____currentState_4 = value;
	}

	inline static int32_t get_offset_of__formatting_5() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____formatting_5)); }
	inline int32_t get__formatting_5() const { return ____formatting_5; }
	inline int32_t* get_address_of__formatting_5() { return &____formatting_5; }
	inline void set__formatting_5(int32_t value)
	{
		____formatting_5 = value;
	}

	inline static int32_t get_offset_of_U3CCloseOutputU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ___U3CCloseOutputU3Ek__BackingField_6)); }
	inline bool get_U3CCloseOutputU3Ek__BackingField_6() const { return ___U3CCloseOutputU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CCloseOutputU3Ek__BackingField_6() { return &___U3CCloseOutputU3Ek__BackingField_6; }
	inline void set_U3CCloseOutputU3Ek__BackingField_6(bool value)
	{
		___U3CCloseOutputU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of__dateFormatHandling_7() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____dateFormatHandling_7)); }
	inline int32_t get__dateFormatHandling_7() const { return ____dateFormatHandling_7; }
	inline int32_t* get_address_of__dateFormatHandling_7() { return &____dateFormatHandling_7; }
	inline void set__dateFormatHandling_7(int32_t value)
	{
		____dateFormatHandling_7 = value;
	}

	inline static int32_t get_offset_of__dateTimeZoneHandling_8() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____dateTimeZoneHandling_8)); }
	inline int32_t get__dateTimeZoneHandling_8() const { return ____dateTimeZoneHandling_8; }
	inline int32_t* get_address_of__dateTimeZoneHandling_8() { return &____dateTimeZoneHandling_8; }
	inline void set__dateTimeZoneHandling_8(int32_t value)
	{
		____dateTimeZoneHandling_8 = value;
	}

	inline static int32_t get_offset_of__stringEscapeHandling_9() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____stringEscapeHandling_9)); }
	inline int32_t get__stringEscapeHandling_9() const { return ____stringEscapeHandling_9; }
	inline int32_t* get_address_of__stringEscapeHandling_9() { return &____stringEscapeHandling_9; }
	inline void set__stringEscapeHandling_9(int32_t value)
	{
		____stringEscapeHandling_9 = value;
	}

	inline static int32_t get_offset_of__floatFormatHandling_10() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____floatFormatHandling_10)); }
	inline int32_t get__floatFormatHandling_10() const { return ____floatFormatHandling_10; }
	inline int32_t* get_address_of__floatFormatHandling_10() { return &____floatFormatHandling_10; }
	inline void set__floatFormatHandling_10(int32_t value)
	{
		____floatFormatHandling_10 = value;
	}

	inline static int32_t get_offset_of__dateFormatString_11() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____dateFormatString_11)); }
	inline String_t* get__dateFormatString_11() const { return ____dateFormatString_11; }
	inline String_t** get_address_of__dateFormatString_11() { return &____dateFormatString_11; }
	inline void set__dateFormatString_11(String_t* value)
	{
		____dateFormatString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dateFormatString_11), (void*)value);
	}

	inline static int32_t get_offset_of__culture_12() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2, ____culture_12)); }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * get__culture_12() const { return ____culture_12; }
	inline CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 ** get_address_of__culture_12() { return &____culture_12; }
	inline void set__culture_12(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * value)
	{
		____culture_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____culture_12), (void*)value);
	}
};

struct JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2_StaticFields
{
public:
	// Newtonsoft.Json.JsonWriter_State[][] Newtonsoft.Json.JsonWriter::StateArray
	StateU5BU5DU5BU5D_tE330453F8423BB38F5D021420F31359E600FEDC3* ___StateArray_0;
	// Newtonsoft.Json.JsonWriter_State[][] Newtonsoft.Json.JsonWriter::StateArrayTempate
	StateU5BU5DU5BU5D_tE330453F8423BB38F5D021420F31359E600FEDC3* ___StateArrayTempate_1;

public:
	inline static int32_t get_offset_of_StateArray_0() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2_StaticFields, ___StateArray_0)); }
	inline StateU5BU5DU5BU5D_tE330453F8423BB38F5D021420F31359E600FEDC3* get_StateArray_0() const { return ___StateArray_0; }
	inline StateU5BU5DU5BU5D_tE330453F8423BB38F5D021420F31359E600FEDC3** get_address_of_StateArray_0() { return &___StateArray_0; }
	inline void set_StateArray_0(StateU5BU5DU5BU5D_tE330453F8423BB38F5D021420F31359E600FEDC3* value)
	{
		___StateArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArray_0), (void*)value);
	}

	inline static int32_t get_offset_of_StateArrayTempate_1() { return static_cast<int32_t>(offsetof(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2_StaticFields, ___StateArrayTempate_1)); }
	inline StateU5BU5DU5BU5D_tE330453F8423BB38F5D021420F31359E600FEDC3* get_StateArrayTempate_1() const { return ___StateArrayTempate_1; }
	inline StateU5BU5DU5BU5D_tE330453F8423BB38F5D021420F31359E600FEDC3** get_address_of_StateArrayTempate_1() { return &___StateArrayTempate_1; }
	inline void set_StateArrayTempate_1(StateU5BU5DU5BU5D_tE330453F8423BB38F5D021420F31359E600FEDC3* value)
	{
		___StateArrayTempate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StateArrayTempate_1), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.JsonProperty
struct  JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D  : public RuntimeObject
{
public:
	// System.Nullable`1<Newtonsoft.Json.Required> Newtonsoft.Json.Serialization.JsonProperty::_required
	Nullable_1_tE1512B9004C32CB6EBA9B1989ADFFA76086747F6  ____required_0;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasExplicitDefaultValue
	bool ____hasExplicitDefaultValue_1;
	// System.Object Newtonsoft.Json.Serialization.JsonProperty::_defaultValue
	RuntimeObject * ____defaultValue_2;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_hasGeneratedDefaultValue
	bool ____hasGeneratedDefaultValue_3;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::_propertyName
	String_t* ____propertyName_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::_skipPropertyNameEscape
	bool ____skipPropertyNameEscape_5;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::_propertyType
	Type_t * ____propertyType_6;
	// Newtonsoft.Json.Serialization.JsonContract Newtonsoft.Json.Serialization.JsonProperty::<PropertyContract>k__BackingField
	JsonContract_tF3638831C408783F93E44D96C7C10A699A0F7F0D * ___U3CPropertyContractU3Ek__BackingField_7;
	// System.Type Newtonsoft.Json.Serialization.JsonProperty::<DeclaringType>k__BackingField
	Type_t * ___U3CDeclaringTypeU3Ek__BackingField_8;
	// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::<Order>k__BackingField
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  ___U3COrderU3Ek__BackingField_9;
	// System.String Newtonsoft.Json.Serialization.JsonProperty::<UnderlyingName>k__BackingField
	String_t* ___U3CUnderlyingNameU3Ek__BackingField_10;
	// Newtonsoft.Json.Serialization.IValueProvider Newtonsoft.Json.Serialization.JsonProperty::<ValueProvider>k__BackingField
	RuntimeObject* ___U3CValueProviderU3Ek__BackingField_11;
	// Newtonsoft.Json.Serialization.IAttributeProvider Newtonsoft.Json.Serialization.JsonProperty::<AttributeProvider>k__BackingField
	RuntimeObject* ___U3CAttributeProviderU3Ek__BackingField_12;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<Converter>k__BackingField
	JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * ___U3CConverterU3Ek__BackingField_13;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<MemberConverter>k__BackingField
	JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * ___U3CMemberConverterU3Ek__BackingField_14;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Ignored>k__BackingField
	bool ___U3CIgnoredU3Ek__BackingField_15;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Readable>k__BackingField
	bool ___U3CReadableU3Ek__BackingField_16;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<Writable>k__BackingField
	bool ___U3CWritableU3Ek__BackingField_17;
	// System.Boolean Newtonsoft.Json.Serialization.JsonProperty::<HasMemberAttribute>k__BackingField
	bool ___U3CHasMemberAttributeU3Ek__BackingField_18;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<IsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CIsReferenceU3Ek__BackingField_19;
	// System.Nullable`1<Newtonsoft.Json.NullValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<NullValueHandling>k__BackingField
	Nullable_1_tCF7ED79E51951378B32F7D38B8DE9C9343E4CD76  ___U3CNullValueHandlingU3Ek__BackingField_20;
	// System.Nullable`1<Newtonsoft.Json.DefaultValueHandling> Newtonsoft.Json.Serialization.JsonProperty::<DefaultValueHandling>k__BackingField
	Nullable_1_t9E71C1BC6959F605B3ADD50064E610497ABD662D  ___U3CDefaultValueHandlingU3Ek__BackingField_21;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ReferenceLoopHandling>k__BackingField
	Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5  ___U3CReferenceLoopHandlingU3Ek__BackingField_22;
	// System.Nullable`1<Newtonsoft.Json.ObjectCreationHandling> Newtonsoft.Json.Serialization.JsonProperty::<ObjectCreationHandling>k__BackingField
	Nullable_1_tC85F465BF404B6652FE5A67D9C06D947216C93E4  ___U3CObjectCreationHandlingU3Ek__BackingField_23;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<TypeNameHandling>k__BackingField
	Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8  ___U3CTypeNameHandlingU3Ek__BackingField_24;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldSerialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldSerializeU3Ek__BackingField_25;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<ShouldDeserialize>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CShouldDeserializeU3Ek__BackingField_26;
	// System.Predicate`1<System.Object> Newtonsoft.Json.Serialization.JsonProperty::<GetIsSpecified>k__BackingField
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___U3CGetIsSpecifiedU3Ek__BackingField_27;
	// System.Action`2<System.Object,System.Object> Newtonsoft.Json.Serialization.JsonProperty::<SetIsSpecified>k__BackingField
	Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * ___U3CSetIsSpecifiedU3Ek__BackingField_28;
	// Newtonsoft.Json.JsonConverter Newtonsoft.Json.Serialization.JsonProperty::<ItemConverter>k__BackingField
	JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * ___U3CItemConverterU3Ek__BackingField_29;
	// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.JsonProperty::<ItemIsReference>k__BackingField
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___U3CItemIsReferenceU3Ek__BackingField_30;
	// System.Nullable`1<Newtonsoft.Json.TypeNameHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemTypeNameHandling>k__BackingField
	Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8  ___U3CItemTypeNameHandlingU3Ek__BackingField_31;
	// System.Nullable`1<Newtonsoft.Json.ReferenceLoopHandling> Newtonsoft.Json.Serialization.JsonProperty::<ItemReferenceLoopHandling>k__BackingField
	Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5  ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32;

public:
	inline static int32_t get_offset_of__required_0() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ____required_0)); }
	inline Nullable_1_tE1512B9004C32CB6EBA9B1989ADFFA76086747F6  get__required_0() const { return ____required_0; }
	inline Nullable_1_tE1512B9004C32CB6EBA9B1989ADFFA76086747F6 * get_address_of__required_0() { return &____required_0; }
	inline void set__required_0(Nullable_1_tE1512B9004C32CB6EBA9B1989ADFFA76086747F6  value)
	{
		____required_0 = value;
	}

	inline static int32_t get_offset_of__hasExplicitDefaultValue_1() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ____hasExplicitDefaultValue_1)); }
	inline bool get__hasExplicitDefaultValue_1() const { return ____hasExplicitDefaultValue_1; }
	inline bool* get_address_of__hasExplicitDefaultValue_1() { return &____hasExplicitDefaultValue_1; }
	inline void set__hasExplicitDefaultValue_1(bool value)
	{
		____hasExplicitDefaultValue_1 = value;
	}

	inline static int32_t get_offset_of__defaultValue_2() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ____defaultValue_2)); }
	inline RuntimeObject * get__defaultValue_2() const { return ____defaultValue_2; }
	inline RuntimeObject ** get_address_of__defaultValue_2() { return &____defaultValue_2; }
	inline void set__defaultValue_2(RuntimeObject * value)
	{
		____defaultValue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____defaultValue_2), (void*)value);
	}

	inline static int32_t get_offset_of__hasGeneratedDefaultValue_3() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ____hasGeneratedDefaultValue_3)); }
	inline bool get__hasGeneratedDefaultValue_3() const { return ____hasGeneratedDefaultValue_3; }
	inline bool* get_address_of__hasGeneratedDefaultValue_3() { return &____hasGeneratedDefaultValue_3; }
	inline void set__hasGeneratedDefaultValue_3(bool value)
	{
		____hasGeneratedDefaultValue_3 = value;
	}

	inline static int32_t get_offset_of__propertyName_4() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ____propertyName_4)); }
	inline String_t* get__propertyName_4() const { return ____propertyName_4; }
	inline String_t** get_address_of__propertyName_4() { return &____propertyName_4; }
	inline void set__propertyName_4(String_t* value)
	{
		____propertyName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyName_4), (void*)value);
	}

	inline static int32_t get_offset_of__skipPropertyNameEscape_5() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ____skipPropertyNameEscape_5)); }
	inline bool get__skipPropertyNameEscape_5() const { return ____skipPropertyNameEscape_5; }
	inline bool* get_address_of__skipPropertyNameEscape_5() { return &____skipPropertyNameEscape_5; }
	inline void set__skipPropertyNameEscape_5(bool value)
	{
		____skipPropertyNameEscape_5 = value;
	}

	inline static int32_t get_offset_of__propertyType_6() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ____propertyType_6)); }
	inline Type_t * get__propertyType_6() const { return ____propertyType_6; }
	inline Type_t ** get_address_of__propertyType_6() { return &____propertyType_6; }
	inline void set__propertyType_6(Type_t * value)
	{
		____propertyType_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyType_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPropertyContractU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CPropertyContractU3Ek__BackingField_7)); }
	inline JsonContract_tF3638831C408783F93E44D96C7C10A699A0F7F0D * get_U3CPropertyContractU3Ek__BackingField_7() const { return ___U3CPropertyContractU3Ek__BackingField_7; }
	inline JsonContract_tF3638831C408783F93E44D96C7C10A699A0F7F0D ** get_address_of_U3CPropertyContractU3Ek__BackingField_7() { return &___U3CPropertyContractU3Ek__BackingField_7; }
	inline void set_U3CPropertyContractU3Ek__BackingField_7(JsonContract_tF3638831C408783F93E44D96C7C10A699A0F7F0D * value)
	{
		___U3CPropertyContractU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPropertyContractU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CDeclaringTypeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CDeclaringTypeU3Ek__BackingField_8)); }
	inline Type_t * get_U3CDeclaringTypeU3Ek__BackingField_8() const { return ___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline Type_t ** get_address_of_U3CDeclaringTypeU3Ek__BackingField_8() { return &___U3CDeclaringTypeU3Ek__BackingField_8; }
	inline void set_U3CDeclaringTypeU3Ek__BackingField_8(Type_t * value)
	{
		___U3CDeclaringTypeU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDeclaringTypeU3Ek__BackingField_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3COrderU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3COrderU3Ek__BackingField_9)); }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  get_U3COrderU3Ek__BackingField_9() const { return ___U3COrderU3Ek__BackingField_9; }
	inline Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * get_address_of_U3COrderU3Ek__BackingField_9() { return &___U3COrderU3Ek__BackingField_9; }
	inline void set_U3COrderU3Ek__BackingField_9(Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  value)
	{
		___U3COrderU3Ek__BackingField_9 = value;
	}

	inline static int32_t get_offset_of_U3CUnderlyingNameU3Ek__BackingField_10() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CUnderlyingNameU3Ek__BackingField_10)); }
	inline String_t* get_U3CUnderlyingNameU3Ek__BackingField_10() const { return ___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline String_t** get_address_of_U3CUnderlyingNameU3Ek__BackingField_10() { return &___U3CUnderlyingNameU3Ek__BackingField_10; }
	inline void set_U3CUnderlyingNameU3Ek__BackingField_10(String_t* value)
	{
		___U3CUnderlyingNameU3Ek__BackingField_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUnderlyingNameU3Ek__BackingField_10), (void*)value);
	}

	inline static int32_t get_offset_of_U3CValueProviderU3Ek__BackingField_11() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CValueProviderU3Ek__BackingField_11)); }
	inline RuntimeObject* get_U3CValueProviderU3Ek__BackingField_11() const { return ___U3CValueProviderU3Ek__BackingField_11; }
	inline RuntimeObject** get_address_of_U3CValueProviderU3Ek__BackingField_11() { return &___U3CValueProviderU3Ek__BackingField_11; }
	inline void set_U3CValueProviderU3Ek__BackingField_11(RuntimeObject* value)
	{
		___U3CValueProviderU3Ek__BackingField_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValueProviderU3Ek__BackingField_11), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAttributeProviderU3Ek__BackingField_12() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CAttributeProviderU3Ek__BackingField_12)); }
	inline RuntimeObject* get_U3CAttributeProviderU3Ek__BackingField_12() const { return ___U3CAttributeProviderU3Ek__BackingField_12; }
	inline RuntimeObject** get_address_of_U3CAttributeProviderU3Ek__BackingField_12() { return &___U3CAttributeProviderU3Ek__BackingField_12; }
	inline void set_U3CAttributeProviderU3Ek__BackingField_12(RuntimeObject* value)
	{
		___U3CAttributeProviderU3Ek__BackingField_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAttributeProviderU3Ek__BackingField_12), (void*)value);
	}

	inline static int32_t get_offset_of_U3CConverterU3Ek__BackingField_13() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CConverterU3Ek__BackingField_13)); }
	inline JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * get_U3CConverterU3Ek__BackingField_13() const { return ___U3CConverterU3Ek__BackingField_13; }
	inline JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 ** get_address_of_U3CConverterU3Ek__BackingField_13() { return &___U3CConverterU3Ek__BackingField_13; }
	inline void set_U3CConverterU3Ek__BackingField_13(JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * value)
	{
		___U3CConverterU3Ek__BackingField_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CConverterU3Ek__BackingField_13), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMemberConverterU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CMemberConverterU3Ek__BackingField_14)); }
	inline JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * get_U3CMemberConverterU3Ek__BackingField_14() const { return ___U3CMemberConverterU3Ek__BackingField_14; }
	inline JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 ** get_address_of_U3CMemberConverterU3Ek__BackingField_14() { return &___U3CMemberConverterU3Ek__BackingField_14; }
	inline void set_U3CMemberConverterU3Ek__BackingField_14(JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * value)
	{
		___U3CMemberConverterU3Ek__BackingField_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberConverterU3Ek__BackingField_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIgnoredU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CIgnoredU3Ek__BackingField_15)); }
	inline bool get_U3CIgnoredU3Ek__BackingField_15() const { return ___U3CIgnoredU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CIgnoredU3Ek__BackingField_15() { return &___U3CIgnoredU3Ek__BackingField_15; }
	inline void set_U3CIgnoredU3Ek__BackingField_15(bool value)
	{
		___U3CIgnoredU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CReadableU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CReadableU3Ek__BackingField_16)); }
	inline bool get_U3CReadableU3Ek__BackingField_16() const { return ___U3CReadableU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CReadableU3Ek__BackingField_16() { return &___U3CReadableU3Ek__BackingField_16; }
	inline void set_U3CReadableU3Ek__BackingField_16(bool value)
	{
		___U3CReadableU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CWritableU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CWritableU3Ek__BackingField_17)); }
	inline bool get_U3CWritableU3Ek__BackingField_17() const { return ___U3CWritableU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CWritableU3Ek__BackingField_17() { return &___U3CWritableU3Ek__BackingField_17; }
	inline void set_U3CWritableU3Ek__BackingField_17(bool value)
	{
		___U3CWritableU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CHasMemberAttributeU3Ek__BackingField_18)); }
	inline bool get_U3CHasMemberAttributeU3Ek__BackingField_18() const { return ___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CHasMemberAttributeU3Ek__BackingField_18() { return &___U3CHasMemberAttributeU3Ek__BackingField_18; }
	inline void set_U3CHasMemberAttributeU3Ek__BackingField_18(bool value)
	{
		___U3CHasMemberAttributeU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CIsReferenceU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CIsReferenceU3Ek__BackingField_19)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CIsReferenceU3Ek__BackingField_19() const { return ___U3CIsReferenceU3Ek__BackingField_19; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CIsReferenceU3Ek__BackingField_19() { return &___U3CIsReferenceU3Ek__BackingField_19; }
	inline void set_U3CIsReferenceU3Ek__BackingField_19(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CIsReferenceU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CNullValueHandlingU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CNullValueHandlingU3Ek__BackingField_20)); }
	inline Nullable_1_tCF7ED79E51951378B32F7D38B8DE9C9343E4CD76  get_U3CNullValueHandlingU3Ek__BackingField_20() const { return ___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline Nullable_1_tCF7ED79E51951378B32F7D38B8DE9C9343E4CD76 * get_address_of_U3CNullValueHandlingU3Ek__BackingField_20() { return &___U3CNullValueHandlingU3Ek__BackingField_20; }
	inline void set_U3CNullValueHandlingU3Ek__BackingField_20(Nullable_1_tCF7ED79E51951378B32F7D38B8DE9C9343E4CD76  value)
	{
		___U3CNullValueHandlingU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CDefaultValueHandlingU3Ek__BackingField_21)); }
	inline Nullable_1_t9E71C1BC6959F605B3ADD50064E610497ABD662D  get_U3CDefaultValueHandlingU3Ek__BackingField_21() const { return ___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline Nullable_1_t9E71C1BC6959F605B3ADD50064E610497ABD662D * get_address_of_U3CDefaultValueHandlingU3Ek__BackingField_21() { return &___U3CDefaultValueHandlingU3Ek__BackingField_21; }
	inline void set_U3CDefaultValueHandlingU3Ek__BackingField_21(Nullable_1_t9E71C1BC6959F605B3ADD50064E610497ABD662D  value)
	{
		___U3CDefaultValueHandlingU3Ek__BackingField_21 = value;
	}

	inline static int32_t get_offset_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CReferenceLoopHandlingU3Ek__BackingField_22)); }
	inline Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5  get_U3CReferenceLoopHandlingU3Ek__BackingField_22() const { return ___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5 * get_address_of_U3CReferenceLoopHandlingU3Ek__BackingField_22() { return &___U3CReferenceLoopHandlingU3Ek__BackingField_22; }
	inline void set_U3CReferenceLoopHandlingU3Ek__BackingField_22(Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5  value)
	{
		___U3CReferenceLoopHandlingU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CObjectCreationHandlingU3Ek__BackingField_23)); }
	inline Nullable_1_tC85F465BF404B6652FE5A67D9C06D947216C93E4  get_U3CObjectCreationHandlingU3Ek__BackingField_23() const { return ___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline Nullable_1_tC85F465BF404B6652FE5A67D9C06D947216C93E4 * get_address_of_U3CObjectCreationHandlingU3Ek__BackingField_23() { return &___U3CObjectCreationHandlingU3Ek__BackingField_23; }
	inline void set_U3CObjectCreationHandlingU3Ek__BackingField_23(Nullable_1_tC85F465BF404B6652FE5A67D9C06D947216C93E4  value)
	{
		___U3CObjectCreationHandlingU3Ek__BackingField_23 = value;
	}

	inline static int32_t get_offset_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CTypeNameHandlingU3Ek__BackingField_24)); }
	inline Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8  get_U3CTypeNameHandlingU3Ek__BackingField_24() const { return ___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8 * get_address_of_U3CTypeNameHandlingU3Ek__BackingField_24() { return &___U3CTypeNameHandlingU3Ek__BackingField_24; }
	inline void set_U3CTypeNameHandlingU3Ek__BackingField_24(Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8  value)
	{
		___U3CTypeNameHandlingU3Ek__BackingField_24 = value;
	}

	inline static int32_t get_offset_of_U3CShouldSerializeU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CShouldSerializeU3Ek__BackingField_25)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldSerializeU3Ek__BackingField_25() const { return ___U3CShouldSerializeU3Ek__BackingField_25; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldSerializeU3Ek__BackingField_25() { return &___U3CShouldSerializeU3Ek__BackingField_25; }
	inline void set_U3CShouldSerializeU3Ek__BackingField_25(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldSerializeU3Ek__BackingField_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldSerializeU3Ek__BackingField_25), (void*)value);
	}

	inline static int32_t get_offset_of_U3CShouldDeserializeU3Ek__BackingField_26() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CShouldDeserializeU3Ek__BackingField_26)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CShouldDeserializeU3Ek__BackingField_26() const { return ___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CShouldDeserializeU3Ek__BackingField_26() { return &___U3CShouldDeserializeU3Ek__BackingField_26; }
	inline void set_U3CShouldDeserializeU3Ek__BackingField_26(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CShouldDeserializeU3Ek__BackingField_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CShouldDeserializeU3Ek__BackingField_26), (void*)value);
	}

	inline static int32_t get_offset_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CGetIsSpecifiedU3Ek__BackingField_27)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_U3CGetIsSpecifiedU3Ek__BackingField_27() const { return ___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_U3CGetIsSpecifiedU3Ek__BackingField_27() { return &___U3CGetIsSpecifiedU3Ek__BackingField_27; }
	inline void set_U3CGetIsSpecifiedU3Ek__BackingField_27(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___U3CGetIsSpecifiedU3Ek__BackingField_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CGetIsSpecifiedU3Ek__BackingField_27), (void*)value);
	}

	inline static int32_t get_offset_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CSetIsSpecifiedU3Ek__BackingField_28)); }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * get_U3CSetIsSpecifiedU3Ek__BackingField_28() const { return ___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D ** get_address_of_U3CSetIsSpecifiedU3Ek__BackingField_28() { return &___U3CSetIsSpecifiedU3Ek__BackingField_28; }
	inline void set_U3CSetIsSpecifiedU3Ek__BackingField_28(Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * value)
	{
		___U3CSetIsSpecifiedU3Ek__BackingField_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CSetIsSpecifiedU3Ek__BackingField_28), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemConverterU3Ek__BackingField_29() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CItemConverterU3Ek__BackingField_29)); }
	inline JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * get_U3CItemConverterU3Ek__BackingField_29() const { return ___U3CItemConverterU3Ek__BackingField_29; }
	inline JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 ** get_address_of_U3CItemConverterU3Ek__BackingField_29() { return &___U3CItemConverterU3Ek__BackingField_29; }
	inline void set_U3CItemConverterU3Ek__BackingField_29(JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * value)
	{
		___U3CItemConverterU3Ek__BackingField_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CItemConverterU3Ek__BackingField_29), (void*)value);
	}

	inline static int32_t get_offset_of_U3CItemIsReferenceU3Ek__BackingField_30() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CItemIsReferenceU3Ek__BackingField_30)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_U3CItemIsReferenceU3Ek__BackingField_30() const { return ___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_U3CItemIsReferenceU3Ek__BackingField_30() { return &___U3CItemIsReferenceU3Ek__BackingField_30; }
	inline void set_U3CItemIsReferenceU3Ek__BackingField_30(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___U3CItemIsReferenceU3Ek__BackingField_30 = value;
	}

	inline static int32_t get_offset_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CItemTypeNameHandlingU3Ek__BackingField_31)); }
	inline Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8  get_U3CItemTypeNameHandlingU3Ek__BackingField_31() const { return ___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8 * get_address_of_U3CItemTypeNameHandlingU3Ek__BackingField_31() { return &___U3CItemTypeNameHandlingU3Ek__BackingField_31; }
	inline void set_U3CItemTypeNameHandlingU3Ek__BackingField_31(Nullable_1_t2F1CC9B758E08CB54AC69036C01D864B37B762F8  value)
	{
		___U3CItemTypeNameHandlingU3Ek__BackingField_31 = value;
	}

	inline static int32_t get_offset_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return static_cast<int32_t>(offsetof(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D, ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32)); }
	inline Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5  get_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() const { return ___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5 * get_address_of_U3CItemReferenceLoopHandlingU3Ek__BackingField_32() { return &___U3CItemReferenceLoopHandlingU3Ek__BackingField_32; }
	inline void set_U3CItemReferenceLoopHandlingU3Ek__BackingField_32(Nullable_1_t57B13DA315CE71783582DA7AE97E421227FD72D5  value)
	{
		___U3CItemReferenceLoopHandlingU3Ek__BackingField_32 = value;
	}
};


// Newtonsoft.Json.Serialization.JsonSerializerInternalReader_CreatorPropertyContext
struct  CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC  : public RuntimeObject
{
public:
	// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader_CreatorPropertyContext::Name
	String_t* ___Name_0;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader_CreatorPropertyContext::Property
	JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * ___Property_1;
	// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader_CreatorPropertyContext::ConstructorProperty
	JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * ___ConstructorProperty_2;
	// System.Nullable`1<Newtonsoft.Json.Serialization.JsonSerializerInternalReader_PropertyPresence> Newtonsoft.Json.Serialization.JsonSerializerInternalReader_CreatorPropertyContext::Presence
	Nullable_1_tCD51EB07192BB7057A532D2925B93F71D157815F  ___Presence_3;
	// System.Object Newtonsoft.Json.Serialization.JsonSerializerInternalReader_CreatorPropertyContext::Value
	RuntimeObject * ___Value_4;
	// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader_CreatorPropertyContext::Used
	bool ___Used_5;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Property_1() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC, ___Property_1)); }
	inline JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * get_Property_1() const { return ___Property_1; }
	inline JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D ** get_address_of_Property_1() { return &___Property_1; }
	inline void set_Property_1(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * value)
	{
		___Property_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Property_1), (void*)value);
	}

	inline static int32_t get_offset_of_ConstructorProperty_2() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC, ___ConstructorProperty_2)); }
	inline JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * get_ConstructorProperty_2() const { return ___ConstructorProperty_2; }
	inline JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D ** get_address_of_ConstructorProperty_2() { return &___ConstructorProperty_2; }
	inline void set_ConstructorProperty_2(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * value)
	{
		___ConstructorProperty_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorProperty_2), (void*)value);
	}

	inline static int32_t get_offset_of_Presence_3() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC, ___Presence_3)); }
	inline Nullable_1_tCD51EB07192BB7057A532D2925B93F71D157815F  get_Presence_3() const { return ___Presence_3; }
	inline Nullable_1_tCD51EB07192BB7057A532D2925B93F71D157815F * get_address_of_Presence_3() { return &___Presence_3; }
	inline void set_Presence_3(Nullable_1_tCD51EB07192BB7057A532D2925B93F71D157815F  value)
	{
		___Presence_3 = value;
	}

	inline static int32_t get_offset_of_Value_4() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC, ___Value_4)); }
	inline RuntimeObject * get_Value_4() const { return ___Value_4; }
	inline RuntimeObject ** get_address_of_Value_4() { return &___Value_4; }
	inline void set_Value_4(RuntimeObject * value)
	{
		___Value_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_4), (void*)value);
	}

	inline static int32_t get_offset_of_Used_5() { return static_cast<int32_t>(offsetof(CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC, ___Used_5)); }
	inline bool get_Used_5() const { return ___Used_5; }
	inline bool* get_address_of_Used_5() { return &___Used_5; }
	inline void set_Used_5(bool value)
	{
		___Used_5 = value;
	}
};


// Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>
struct  ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.SerializationCallback
struct  SerializationCallback_tFA478094A3FDF26735AE3B85B18B9945851F5DF1  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Serialization.SerializationErrorCallback
struct  SerializationErrorCallback_t9C4BA1E797ECDB53622C2767ACABFD8BFEE86285  : public MulticastDelegate_t
{
public:

public:
};


// Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>
struct  MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`2<System.Object,System.Object>
struct  Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct  Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Type>
struct  Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// Newtonsoft.Json.Bson.BsonWriter
struct  BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131  : public JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2
{
public:
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_root
	BsonToken_tD6B9C551285243DC8E0E6AC99016F83016F59F75 * ____root_13;
	// Newtonsoft.Json.Bson.BsonToken Newtonsoft.Json.Bson.BsonWriter::_parent
	BsonToken_tD6B9C551285243DC8E0E6AC99016F83016F59F75 * ____parent_14;
	// System.String Newtonsoft.Json.Bson.BsonWriter::_propertyName
	String_t* ____propertyName_15;

public:
	inline static int32_t get_offset_of__root_13() { return static_cast<int32_t>(offsetof(BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131, ____root_13)); }
	inline BsonToken_tD6B9C551285243DC8E0E6AC99016F83016F59F75 * get__root_13() const { return ____root_13; }
	inline BsonToken_tD6B9C551285243DC8E0E6AC99016F83016F59F75 ** get_address_of__root_13() { return &____root_13; }
	inline void set__root_13(BsonToken_tD6B9C551285243DC8E0E6AC99016F83016F59F75 * value)
	{
		____root_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____root_13), (void*)value);
	}

	inline static int32_t get_offset_of__parent_14() { return static_cast<int32_t>(offsetof(BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131, ____parent_14)); }
	inline BsonToken_tD6B9C551285243DC8E0E6AC99016F83016F59F75 * get__parent_14() const { return ____parent_14; }
	inline BsonToken_tD6B9C551285243DC8E0E6AC99016F83016F59F75 ** get_address_of__parent_14() { return &____parent_14; }
	inline void set__parent_14(BsonToken_tD6B9C551285243DC8E0E6AC99016F83016F59F75 * value)
	{
		____parent_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____parent_14), (void*)value);
	}

	inline static int32_t get_offset_of__propertyName_15() { return static_cast<int32_t>(offsetof(BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131, ____propertyName_15)); }
	inline String_t* get__propertyName_15() const { return ____propertyName_15; }
	inline String_t** get_address_of__propertyName_15() { return &____propertyName_15; }
	inline void set__propertyName_15(String_t* value)
	{
		____propertyName_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____propertyName_15), (void*)value);
	}
};


// Newtonsoft.Json.JsonTextWriter
struct  JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B  : public JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2
{
public:
	// System.IO.TextWriter Newtonsoft.Json.JsonTextWriter::_writer
	TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ____writer_13;
	// Newtonsoft.Json.Utilities.Base64Encoder Newtonsoft.Json.JsonTextWriter::_base64Encoder
	Base64Encoder_t50655321AB6DEF635DD39A7248BBC5A7B6CBC47D * ____base64Encoder_14;
	// System.Char Newtonsoft.Json.JsonTextWriter::_indentChar
	Il2CppChar ____indentChar_15;
	// System.Int32 Newtonsoft.Json.JsonTextWriter::_indentation
	int32_t ____indentation_16;
	// System.Char Newtonsoft.Json.JsonTextWriter::_quoteChar
	Il2CppChar ____quoteChar_17;
	// System.Boolean Newtonsoft.Json.JsonTextWriter::_quoteName
	bool ____quoteName_18;
	// System.Boolean[] Newtonsoft.Json.JsonTextWriter::_charEscapeFlags
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ____charEscapeFlags_19;
	// System.Char[] Newtonsoft.Json.JsonTextWriter::_writeBuffer
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____writeBuffer_20;
	// Newtonsoft.Json.IArrayPool`1<System.Char> Newtonsoft.Json.JsonTextWriter::_arrayPool
	RuntimeObject* ____arrayPool_21;
	// System.Char[] Newtonsoft.Json.JsonTextWriter::_indentChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ____indentChars_22;

public:
	inline static int32_t get_offset_of__writer_13() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____writer_13)); }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * get__writer_13() const { return ____writer_13; }
	inline TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 ** get_address_of__writer_13() { return &____writer_13; }
	inline void set__writer_13(TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * value)
	{
		____writer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writer_13), (void*)value);
	}

	inline static int32_t get_offset_of__base64Encoder_14() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____base64Encoder_14)); }
	inline Base64Encoder_t50655321AB6DEF635DD39A7248BBC5A7B6CBC47D * get__base64Encoder_14() const { return ____base64Encoder_14; }
	inline Base64Encoder_t50655321AB6DEF635DD39A7248BBC5A7B6CBC47D ** get_address_of__base64Encoder_14() { return &____base64Encoder_14; }
	inline void set__base64Encoder_14(Base64Encoder_t50655321AB6DEF635DD39A7248BBC5A7B6CBC47D * value)
	{
		____base64Encoder_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____base64Encoder_14), (void*)value);
	}

	inline static int32_t get_offset_of__indentChar_15() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____indentChar_15)); }
	inline Il2CppChar get__indentChar_15() const { return ____indentChar_15; }
	inline Il2CppChar* get_address_of__indentChar_15() { return &____indentChar_15; }
	inline void set__indentChar_15(Il2CppChar value)
	{
		____indentChar_15 = value;
	}

	inline static int32_t get_offset_of__indentation_16() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____indentation_16)); }
	inline int32_t get__indentation_16() const { return ____indentation_16; }
	inline int32_t* get_address_of__indentation_16() { return &____indentation_16; }
	inline void set__indentation_16(int32_t value)
	{
		____indentation_16 = value;
	}

	inline static int32_t get_offset_of__quoteChar_17() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____quoteChar_17)); }
	inline Il2CppChar get__quoteChar_17() const { return ____quoteChar_17; }
	inline Il2CppChar* get_address_of__quoteChar_17() { return &____quoteChar_17; }
	inline void set__quoteChar_17(Il2CppChar value)
	{
		____quoteChar_17 = value;
	}

	inline static int32_t get_offset_of__quoteName_18() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____quoteName_18)); }
	inline bool get__quoteName_18() const { return ____quoteName_18; }
	inline bool* get_address_of__quoteName_18() { return &____quoteName_18; }
	inline void set__quoteName_18(bool value)
	{
		____quoteName_18 = value;
	}

	inline static int32_t get_offset_of__charEscapeFlags_19() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____charEscapeFlags_19)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get__charEscapeFlags_19() const { return ____charEscapeFlags_19; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of__charEscapeFlags_19() { return &____charEscapeFlags_19; }
	inline void set__charEscapeFlags_19(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		____charEscapeFlags_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____charEscapeFlags_19), (void*)value);
	}

	inline static int32_t get_offset_of__writeBuffer_20() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____writeBuffer_20)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__writeBuffer_20() const { return ____writeBuffer_20; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__writeBuffer_20() { return &____writeBuffer_20; }
	inline void set__writeBuffer_20(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____writeBuffer_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____writeBuffer_20), (void*)value);
	}

	inline static int32_t get_offset_of__arrayPool_21() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____arrayPool_21)); }
	inline RuntimeObject* get__arrayPool_21() const { return ____arrayPool_21; }
	inline RuntimeObject** get_address_of__arrayPool_21() { return &____arrayPool_21; }
	inline void set__arrayPool_21(RuntimeObject* value)
	{
		____arrayPool_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____arrayPool_21), (void*)value);
	}

	inline static int32_t get_offset_of__indentChars_22() { return static_cast<int32_t>(offsetof(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B, ____indentChars_22)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get__indentChars_22() const { return ____indentChars_22; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of__indentChars_22() { return &____indentChars_22; }
	inline void set__indentChars_22(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		____indentChars_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____indentChars_22), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.TraceJsonReader
struct  TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B  : public JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91
{
public:
	// Newtonsoft.Json.JsonReader Newtonsoft.Json.Serialization.TraceJsonReader::_innerReader
	JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ____innerReader_15;
	// Newtonsoft.Json.JsonTextWriter Newtonsoft.Json.Serialization.TraceJsonReader::_textWriter
	JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * ____textWriter_16;
	// System.IO.StringWriter Newtonsoft.Json.Serialization.TraceJsonReader::_sw
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * ____sw_17;

public:
	inline static int32_t get_offset_of__innerReader_15() { return static_cast<int32_t>(offsetof(TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B, ____innerReader_15)); }
	inline JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * get__innerReader_15() const { return ____innerReader_15; }
	inline JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 ** get_address_of__innerReader_15() { return &____innerReader_15; }
	inline void set__innerReader_15(JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * value)
	{
		____innerReader_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerReader_15), (void*)value);
	}

	inline static int32_t get_offset_of__textWriter_16() { return static_cast<int32_t>(offsetof(TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B, ____textWriter_16)); }
	inline JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * get__textWriter_16() const { return ____textWriter_16; }
	inline JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B ** get_address_of__textWriter_16() { return &____textWriter_16; }
	inline void set__textWriter_16(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * value)
	{
		____textWriter_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textWriter_16), (void*)value);
	}

	inline static int32_t get_offset_of__sw_17() { return static_cast<int32_t>(offsetof(TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B, ____sw_17)); }
	inline StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * get__sw_17() const { return ____sw_17; }
	inline StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 ** get_address_of__sw_17() { return &____sw_17; }
	inline void set__sw_17(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * value)
	{
		____sw_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sw_17), (void*)value);
	}
};


// Newtonsoft.Json.Serialization.TraceJsonWriter
struct  TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A  : public JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2
{
public:
	// Newtonsoft.Json.JsonWriter Newtonsoft.Json.Serialization.TraceJsonWriter::_innerWriter
	JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * ____innerWriter_13;
	// Newtonsoft.Json.JsonTextWriter Newtonsoft.Json.Serialization.TraceJsonWriter::_textWriter
	JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * ____textWriter_14;
	// System.IO.StringWriter Newtonsoft.Json.Serialization.TraceJsonWriter::_sw
	StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * ____sw_15;

public:
	inline static int32_t get_offset_of__innerWriter_13() { return static_cast<int32_t>(offsetof(TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A, ____innerWriter_13)); }
	inline JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * get__innerWriter_13() const { return ____innerWriter_13; }
	inline JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 ** get_address_of__innerWriter_13() { return &____innerWriter_13; }
	inline void set__innerWriter_13(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * value)
	{
		____innerWriter_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerWriter_13), (void*)value);
	}

	inline static int32_t get_offset_of__textWriter_14() { return static_cast<int32_t>(offsetof(TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A, ____textWriter_14)); }
	inline JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * get__textWriter_14() const { return ____textWriter_14; }
	inline JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B ** get_address_of__textWriter_14() { return &____textWriter_14; }
	inline void set__textWriter_14(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * value)
	{
		____textWriter_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____textWriter_14), (void*)value);
	}

	inline static int32_t get_offset_of__sw_15() { return static_cast<int32_t>(offsetof(TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A, ____sw_15)); }
	inline StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * get__sw_15() const { return ____sw_15; }
	inline StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 ** get_address_of__sw_15() { return &____sw_15; }
	inline void set__sw_15(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * value)
	{
		____sw_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____sw_15), (void*)value);
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.PropertyInfo[]
struct PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) PropertyInfo_t * m_Items[1];

public:
	inline PropertyInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline PropertyInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline PropertyInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, PropertyInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) FieldInfo_t * m_Items[1];

public:
	inline FieldInfo_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline FieldInfo_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline FieldInfo_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, FieldInfo_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Newtonsoft.Json.Linq.JToken[]
struct JTokenU5BU5D_tF552A57A77922E5E7F5B9590D8A8D20234A98464  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * m_Items[1];

public:
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JToken_t517F0381C4450A4525D6FA3480318381CE06C980 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * m_Items[1];

public:
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Int32Enum>(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JsonSerializer_Deserialize_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m99B83159744C4B9CF92A1906C9064E8C0A4255C1_gshared (JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, const RuntimeMethod* method);
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m904114DBE44D14D291456629D60BF66ECA75BB42_gshared (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32Enum>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mA8DDAB2C6553ED7FFC9A55E1A92A96B3571000EC_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m50B1A0252CC83A50F60CD54CA63ED5FFDB91A945_gshared (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method);
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E_gshared (MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Object>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollectionUtils_AddRange_TisRuntimeObject_m028A05F7C8653B74DFE1D2A54017D4857201C14E_gshared (RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method);
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectConstructor_1_Invoke_mE81DB4C62C8D2F60FF83F56FB36AE9FC3BE4103B_gshared (ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared (Collection_1_tC70665E043EEEEE0CE76CFA285D8ACDB39D36EB0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_mA8AC1AD3B50DBCFC06ABF784BB1311468771A495 (RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils::SetMemberValue(System.Reflection.MemberInfo,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionUtils_SetMemberValue_m1E2CC0C74BC61975558464CEC2E6B42F4F16ADD1 (MemberInfo_t * ___member0, RuntimeObject * ___target1, RuntimeObject * ___value2, const RuntimeMethod* method);
// System.Globalization.CultureInfo System.Globalization.CultureInfo::get_InvariantCulture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164 (const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_m4FCF2C5B84A90CDFD7C21E1C40E96C9315A9B552 (JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberValue(System.Reflection.MemberInfo,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionUtils_GetMemberValue_mE5AF9C55EFB2EF538341A06DE8839EB2138B66E8 (MemberInfo_t * ___member0, RuntimeObject * ___target1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteBson(Newtonsoft.Json.Bson.BsonWriter,System.Text.RegularExpressions.Regex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexConverter_WriteBson_m3D5E7CC84BCCD528C8D042FEFAF7EC1925887E03 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131 * ___writer0, Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___regex1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Text.RegularExpressions.Regex,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexConverter_WriteJson_m3232C1B85602852FB040265237936D883586D344 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * ___writer0, Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___regex1, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer2, const RuntimeMethod* method);
// System.Text.RegularExpressions.RegexOptions System.Text.RegularExpressions.Regex::get_Options()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2_inline (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Converters.RegexConverter::HasFlag(System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexConverter_HasFlag_m30BC848357FCD2222E2297FAA40C777EF58DAFDA (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, int32_t ___options0, int32_t ___flag1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Bson.BsonWriter::WriteRegex(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BsonWriter_WriteRegex_m5C12579C34320D1645D2FC518AF280F7B4EA5A81 (BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131 * __this, String_t* ___pattern0, String_t* ___options1, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver::GetResolvedPropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultContractResolver_GetResolvedPropertyName_mDAF5D5500B14C083619BAC1C8656C018541DC91A (DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297 * __this, String_t* ___propertyName0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializer::Serialize(Newtonsoft.Json.JsonWriter,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializer_Serialize_mFED2010B103C1A19C4601BFAAB18AEEAAB11DE2B (JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * __this, JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * ___jsonWriter0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Text.RegularExpressions.Regex Newtonsoft.Json.Converters.RegexConverter::ReadRegexObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * RegexConverter_ReadRegexObject_m305F9A55E4024BD86481052D19B398005B06C745 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer1, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Converters.RegexConverter::ReadRegexString(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RegexConverter_ReadRegexString_m8416EBC385B8AD4B3DB08E1437E37DCAA9FA9734 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, const RuntimeMethod* method);
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * JsonSerializationException_Create_m59D9D0A78A9893C93F966A7ADF83DF696415D38A (JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, String_t* ___message1, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Void System.Text.RegularExpressions.Regex::.ctor(System.String,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4 (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, String_t* ___pattern0, int32_t ___options1, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String,System.String,System.StringComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5 (String_t* ___a0, String_t* ___b1, int32_t ___comparisonType2, const RuntimeMethod* method);
// T Newtonsoft.Json.JsonSerializer::Deserialize<System.Text.RegularExpressions.RegexOptions>(Newtonsoft.Json.JsonReader)
inline int32_t JsonSerializer_Deserialize_TisRegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4_m4331B7014627BC8041105D1E65D260B294A712F8 (JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 *, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, const RuntimeMethod*))JsonSerializer_Deserialize_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m99B83159744C4B9CF92A1906C9064E8C0A4255C1_gshared)(__this, ___reader0, method);
}
// System.Void System.Nullable`1<System.Text.RegularExpressions.RegexOptions>::.ctor(!0)
inline void Nullable_1__ctor_mF2706CF213CD61CDD98E8CFD43442578AB579AD4 (Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F * __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F *, int32_t, const RuntimeMethod*))Nullable_1__ctor_m904114DBE44D14D291456629D60BF66ECA75BB42_gshared)(__this, ___value0, method);
}
// System.Void Newtonsoft.Json.JsonReader::Skip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader_Skip_mC8CB495BD0C5108D4AFFD1D660CDFCB659A25591 (JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Text.RegularExpressions.RegexOptions>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD96C04C8C19EAB83BB1DFF566EABF26350631691_inline (Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F *, const RuntimeMethod*))Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Text.RegularExpressions.RegexOptions>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_m04F74D34BA67514B20CA552AEB2123AB5BF45717_inline (Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mA8DDAB2C6553ED7FFC9A55E1A92A96B3571000EC_gshared_inline)(__this, method);
}
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonConverter__ctor_mBE413F963C1E1D20875BCFE94DB01E09836EA97B (JsonConverter_t5A6B22A3A8FF4D18454F768F55824DFDCB796078 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.ResolverContractKey::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolverContractKey__ctor_m5C7C616DF53AB9D3EE81A19395431BA9B0A3EB9C (ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * __this, Type_t * ___resolverType0, Type_t * ___contractType1, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Serialization.ResolverContractKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResolverContractKey_GetHashCode_mCF78DF3E9A1EB11DACA737FA5A306F172A8A0D6B (ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Serialization.ResolverContractKey::Equals(Newtonsoft.Json.Serialization.ResolverContractKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResolverContractKey_Equals_m7F6E1B33EEBDE4971264A88E6662D9CDDE4CFC18 (ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * __this, ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4  ___other0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Serialization.ResolverContractKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResolverContractKey_Equals_m7EADD44C28175D677F9881E4D0021CF8936E0732 (ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringBuffer_get_Position_m424CA0E4A0274918489C5986D189CB6DDEA6F11F_inline (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringBuffer_set_Position_mE931269D642EEE14E2D84EEE1F0706536D65401F_inline (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.StringBuffer::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringBuffer_get_IsEmpty_m3B5208A8E035C3BF103F48C4BD666BA7D16C7682 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method);
// System.Char[] Newtonsoft.Json.Utilities.BufferUtils::RentBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* BufferUtils_RentBuffer_m4571362D52D6FA4B460A644F8FFA669102B842D1 (RuntimeObject* ___bufferPool0, int32_t ___minSize1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer__ctor_m80178B6D27B163F78337AC8C7BA4D6026696FA83 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer__ctor_m658802150D63B715C3470D6B2C0170551ECB7DD5 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, int32_t ___initalSize1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer_EnsureSize_m76D11C8EED77ACD0299390A98CE072C5F2FE9EC0 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, int32_t ___appendLength1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer_Append_m0FCC4FB58E15B226B908B153D32045BBFF1D76F0 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, Il2CppChar ___value1, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Int32,System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877 (RuntimeArray * ___sourceArray0, int32_t ___sourceIndex1, RuntimeArray * ___destinationArray2, int32_t ___destinationIndex3, int32_t ___length4, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer_Append_m603D9B2C24029588D05093561F805BC76C4DF0EA (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.BufferUtils::ReturnBuffer(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BufferUtils_ReturnBuffer_m8CED72FDBE1C197A91AE32EC7C89D2A8B94FFA4D (RuntimeObject* ___bufferPool0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear(Newtonsoft.Json.IArrayPool`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer_Clear_m56DC59C94CAF5F3A5830C14E2E38F0C205F78610 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, const RuntimeMethod* method);
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803 (RuntimeArray * ___sourceArray0, RuntimeArray * ___destinationArray1, int32_t ___length2, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuffer_ToString_m88EAF73086605E7A0C898D962CA6B5CF8A6B0F07 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuffer_ToString_m10B8FF428EAE38BBC65EEC7809ADC392532B5927 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::get_InternalBuffer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* StringBuffer_get_InternalBuffer_mF41DB26CCDD88E4ACE7B65840ADB74BF5EEE748A_inline (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::set_AllowIntegerValues(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringEnumConverter_set_AllowIntegerValues_mEACC7F32E56720B5672D222F6F091D725CCD9AD7_inline (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, bool ___value0, const RuntimeMethod* method);
// System.String System.Enum::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m4F8C0882A819B1D1E3286920D14CC649200F24A1 (RuntimeObject * __this, String_t* ___format0, const RuntimeMethod* method);
// System.Boolean System.Char::IsNumber(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsNumber_m1575CB90219C78EABADD70B3E53D53522CB0BB9D (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::get_CamelCaseText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringEnumConverter_get_CamelCaseText_m6FAE5CD5B17B260B07290EF17A3A299CF27CF455_inline (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.EnumUtils::ToEnumName(System.Type,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* EnumUtils_ToEnumName_m3C314BD356B95F38B62417D537E0D2AFC51464A1 (Type_t * ___enumType0, String_t* ___enumText1, bool ___camelCaseText2, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsNullableType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsNullableType_m087178E090D00C75843BB2F93A7CAA414FEFAFB6 (Type_t * ___t0, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method);
// System.Type System.Nullable::GetUnderlyingType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629 (Type_t * ___nullableType0, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Utilities.EnumUtils::ParseEnumName(System.String,System.Boolean,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * EnumUtils_ParseEnumName_mB751E3EE2A360E26CE4A573952DC4334DCB7AE73 (String_t* ___enumText0, bool ___isNullable1, Type_t * ___t2, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::get_AllowIntegerValues()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringEnumConverter_get_AllowIntegerValues_m2373FC3B126C386FFD4BDB64E65B4175E44EFE45_inline (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, const RuntimeMethod* method);
// System.Object Newtonsoft.Json.Utilities.ConvertUtils::ConvertOrCast(System.Object,System.Globalization.CultureInfo,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConvertUtils_ConvertOrCast_m7862E65C180FF18A2F4847F8051C181290AEDDA8 (RuntimeObject * ___initialValue0, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture1, Type_t * ___targetType2, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.MiscellaneousUtils::FormatValueForPrint(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* MiscellaneousUtils_FormatValueForPrint_mFFFDA40B3A3DA1DBD8F875A305D995A430BC700F (RuntimeObject * ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.JsonSerializationException Newtonsoft.Json.JsonSerializationException::Create(Newtonsoft.Json.JsonReader,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * JsonSerializationException_Create_m55E8DF615AD31911F8A5BBFDED20ED83549BD64E (JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, String_t* ___message1, Exception_t * ___ex2, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsEnum(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsEnum_m3D3EA9AF4638A68716201C314A1C75C0D0FE6CAA (Type_t * ___type0, const RuntimeMethod* method);
// System.Char Newtonsoft.Json.Utilities.StringReference::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringReference_get_Item_m34C3ABEC482DD4EC5541D0A56EC05D05F669B0A0 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, int32_t ___i0, const RuntimeMethod* method);
// System.Char[] Newtonsoft.Json.Utilities.StringReference::get_Chars()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* StringReference_get_Chars_m5EF63176FDB3554674E394261BE5786170C47024_inline (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_StartIndex()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringReference_get_StartIndex_mB09EFAA44487DB78CF15BDF61052689823A4C2C9_inline (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringReference_get_Length_m194CFDC809C99311F4040820C9F4A3B5E5F77EA4_inline (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.StringReference::.ctor(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReference__ctor_m3AE890FED005EFC9FF5CDF3C7F740E743168B616 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Utilities.StringReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringReference_ToString_mFE493A141754B54CA6B7DC1903730740DAB2A881 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method);
// System.Int32 System.Array::IndexOf<System.Char>(!!0[],!!0,System.Int32,System.Int32)
inline int32_t Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m50B1A0252CC83A50F60CD54CA63ED5FFDB91A945 (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___array0, Il2CppChar ___value1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	return ((  int32_t (*) (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*, Il2CppChar, int32_t, int32_t, const RuntimeMethod*))Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m50B1A0252CC83A50F60CD54CA63ED5FFDB91A945_gshared)(___array0, ___value1, ___startIndex2, ___count3, method);
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mF72FDDA3EB515E398CA2D73E829FC7F8AD4F1D2B (String_t* ___format0, RuntimeObject* ___provider1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.String System.String::Format(System.IFormatProvider,System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21 (RuntimeObject* ___provider0, String_t* ___format1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E (StringBuilder_t * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.Text.StringBuilder,System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mB18BB8248DA5C0677EF9312B26C16D06898E9165 (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, StringBuilder_t * ___sb0, RuntimeObject* ___formatProvider1, const RuntimeMethod* method);
// System.Char Newtonsoft.Json.Utilities.MathUtils::IntToHex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar MathUtils_IntToHex_m47CB9EFD50D3ABF2C2F3E9E19F2B1438197B6286 (int32_t ___n0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Boolean System.Char::IsUpper(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsUpper_m72EAD892A02AD10D2050EA09BF3735DDE6921892 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C (String_t* __this, const RuntimeMethod* method);
// System.Char System.Char::ToLower(System.Char,System.Globalization.CultureInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar Char_ToLower_m42C052EB06C3F461C8CEBAD492E102EB721FDECE (Il2CppChar ___c0, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___culture1, const RuntimeMethod* method);
// System.String System.String::CreateString(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344 (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___val0, const RuntimeMethod* method);
// System.Boolean System.Char::IsHighSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsHighSurrogate_m7BECD1C98C902946F069D8936F8A557F1F7DFF01 (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Boolean System.Char::IsLowSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Char_IsLowSurrogate_m44FA7AA923FDA925E1D536F3DA0A7E1E049E936E (Il2CppChar ___c0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonReader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonReader__ctor_m538C842DADDC1A2123EC0A967DAE5B2D238B4FB9 (JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * __this, const RuntimeMethod* method);
// System.Void System.IO.StringWriter::.ctor(System.IFormatProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringWriter__ctor_mDF4AB6FD46E8B9824F2F7A9C26EA086A2C1AE5CF (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * __this, RuntimeObject* ___formatProvider0, const RuntimeMethod* method);
// System.String System.Environment::get_NewLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4 (const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonTextWriter::.ctor(System.IO.TextWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonTextWriter__ctor_mC16FDDC0DAEC5D2B51445A44A40273E4E45D03C8 (JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * __this, TextWriter_t4CB195237F3B6CADD850FBC3604A049C7C564643 * ___textWriter0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::set_Formatting(Newtonsoft.Json.Formatting)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_Formatting_m095D00C9220A17CD8CF9A678804C7F53AA436D68 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter__ctor_m831946FD2352BD57949E806795F738B790BF4471 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Globalization.CultureInfo Newtonsoft.Json.JsonWriter::get_Culture()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * JsonWriter_get_Culture_mC42B914B29D7FEC2B0F98DE7AA32F289DB318F89 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::set_Culture(System.Globalization.CultureInfo)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Culture_mDEE561B11776B97A927F1300FF7B6A3ADE81B2CA_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.DateFormatHandling Newtonsoft.Json.JsonWriter::get_DateFormatHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateFormatHandling_m41BD1D20C51ECF8DA8202C37B62A9FF0E28823DD_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::set_DateFormatHandling(Newtonsoft.Json.DateFormatHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_DateFormatHandling_mDE99B2D5CE84B4848D5B986BCEDA0B3ECF022923 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.String Newtonsoft.Json.JsonWriter::get_DateFormatString()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonWriter_get_DateFormatString_m69A32477FF1B1AF8DF997B4D018C24BD5825FCCB_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::set_DateFormatString(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_DateFormatString_mF4ECA8F9127550A893C594291DBFBB0BA1B31F3F_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, String_t* ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.DateTimeZoneHandling Newtonsoft.Json.JsonWriter::get_DateTimeZoneHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateTimeZoneHandling_mD0C65660E7AE6E3C2FA819B280CCB795B7A2728A_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::set_DateTimeZoneHandling(Newtonsoft.Json.DateTimeZoneHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_DateTimeZoneHandling_m05E9A774E4CD7AFC7DB4F8F072C653360648BF20 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, int32_t ___value0, const RuntimeMethod* method);
// Newtonsoft.Json.FloatFormatHandling Newtonsoft.Json.JsonWriter::get_FloatFormatHandling()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_FloatFormatHandling_mD88C6F4D05A2BA565E093D2D864537B3BB78FF52_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::set_FloatFormatHandling(Newtonsoft.Json.FloatFormatHandling)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_set_FloatFormatHandling_m0AED0049F5DCE536ED7C5B9D32EA996CC6B6D8A1 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mC37C52C1891FE1988D9C92D8D55BB9E890B1B6ED (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m23C293A28ADF73EAC984FBFA034E995CA39C96C8 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m97D7CA12924339EEDB30C971A6C94F93A8C430FE (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, uint8_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mAC90C70E3B38A618B91D7FDDF8F4C4CD9BD59FB9 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A  ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m248832B7521A3E12DC721F129DCADA8A5E6B0D64 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mEEE2D6400B690F240DC6E8B58AD3613DD6719821 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m65ADF4B7E727362C28EE741700A6B1B070379672 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m0E6A04360432620F55CC03FF7E274ECF8171CD33 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m3ECA9D982522775E820520C0DEF96D5A10A7ABE9 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, double ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteUndefined_m3B0651930350243F73ACE48B331FEB7255B80878 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mBAD37C743F5E6B0E0CF3AD23B6C475BF651E7CCF (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, float ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m82BA7513906CB1637720C0209867F2542A6B84D0 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, Guid_t  ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m1FEFF250C239D3D1837EC5BCA4AFBFFC5D6E0D34 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m93F9CEFC9ED2EF7A9449B780DEB568D44430F72F (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mFADE6F7C5F09296F7CA03DCBC78BF3A7587E1141 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, RuntimeObject * ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m402DBD63BF18B24EAA0D34D7D6208CE8C696F3AF (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, int8_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mC2E8EEA42CBCEF2CE3D63B1CC50EDC4029060DB0 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, int16_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mB0E1A92D2F72F3463065BEF9972FB452631C08F6 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m1BFD61E3B8431D93875DED43BDBA437CF2E43345 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m9B2A0C880487EFEE143F0A2F0282A24F58E39BB6 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, uint32_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_m3B79659B76CE197EA62C98D9380CA276779BA041 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, uint64_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mE84B57D0BC684CB7BEA071587B6E5F04DAB3240F (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteValue_mD04367BAD3BA9FC4D4991C0BA35B49DA15675F96 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, uint16_t ___value0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteComment_m40A51166C1CABA6F1F5637A5373F2503C91083BC (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartArray_m645721F97E9CEEE7E587FDF935E35A6E7BBF3292 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteEndArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEndArray_m9CD3DFB809FDFAD3C5F607A6E06B41ED4F33CA7B (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteStartConstructor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartConstructor_mA7E763E836F04492AF16B86F6675F2BC1584206E (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteEndConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEndConstructor_m178608E8B682B73E3E06D9C5B89A2D449A170094 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WritePropertyName_mB9C984656F23C60FB0B42602B4B6770C20758106 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteStartObject_mAD048398098C2F44099A1479284A011012215F5D (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteEndObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteEndObject_mFA72AE0AA3FC180698A8D2B9BFD54799EF9E5BEB (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::InternalWriteValue(Newtonsoft.Json.JsonToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_InternalWriteValue_m28397BF3152152BC8AE2D8CC9A864E87D66FDC48 (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, int32_t ___token0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::WriteRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_WriteRaw_mF11816DF21E2285E0E6E6E51440290572C1E8BFC (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, String_t* ___json0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonWriter_Close_mB691844CE67B0DF402BBB9D373F9031EC8A441CD (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsInterface()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsClass()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsSealed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsSealed_m688591A832F192E584223CFA48F37EA06C0C0AA5 (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsAbstract()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::BaseType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeExtensions_BaseType_mB412285DD088CA76F89534B78D1AE65FFF30F754 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_AssignableToTypeName_mD522101DAFD0E49737C49A7BE5162B7D23312CC0 (Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ImplementInterface_m7183F3D7AF62459483F1E37786034552734BE904 (Type_t * ___type0, Type_t * ___interfaceType1, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonSerializationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonSerializationException__ctor_m6FE8C668628845DB845F9DDEC79C50C300007444 (JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void System.Version::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Version__ctor_mB484853E49F58F771DF106B7BDC92E49ACE3DAAE (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * __this, String_t* ___version0, const RuntimeMethod* method);
// TResult Newtonsoft.Json.Utilities.MethodCall`2<System.Object,System.Object>::Invoke(T,System.Object[])
inline RuntimeObject * MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E (MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * __this, RuntimeObject * ___target0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args1, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 *, RuntimeObject *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E_gshared)(__this, ___target0, ___args1, method);
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_InitialType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_InitialType_m0F65A2432EB92CAA1377B113C1BAEF2C0283F634_inline (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, const RuntimeMethod* method);
// System.Type Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::get_TargetType()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_TargetType_m8F2288FCB1DB8039CEE75810A72EC31B0085805D_inline (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConvertKey__ctor_mAE2DD8A2A907D194638D666DED0AAC9FF3AA9E48 (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConvertKey_GetHashCode_mC12EC356438B1840646DBA4ADEB7F6EB4AFDE894 (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_mCCE90DDED2DF5DA439CDA3277A1BBB36E6E94C13 (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7  ___other0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_m4DE5600EBFEAFAA076537C2075A96573AB87D2BE (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE66D46B991808823CB3824E4B29BFA6C149E3738 (U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsIndexedProperty(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsIndexedProperty_m1A60AB81E965E535B27CDA1FFF29DEB3C755033D (MemberInfo_t * ___member0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Reflection.MemberInfo>::.ctor()
inline void List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334 (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Newtonsoft.Json.Utilities.CollectionUtils::AddRange<System.Reflection.MemberInfo>(System.Collections.Generic.IList`1<T>,System.Collections.Generic.IEnumerable`1<T>)
inline void CollectionUtils_AddRange_TisMemberInfo_t_m1854448383B4F405602E0226A428FE1C7548D31E (RuntimeObject* ___initial0, RuntimeObject* ___collection1, const RuntimeMethod* method)
{
	((  void (*) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*))CollectionUtils_AddRange_TisRuntimeObject_m028A05F7C8653B74DFE1D2A54017D4857201C14E_gshared)(___initial0, ___collection1, method);
}
// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_MemberType_m6B0C77E72F48DC1B4204737359510A81F3E464C4 (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::CanReadMemberValue(System.Reflection.MemberInfo,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_CanReadMemberValue_m2CA3EDD4A8D77B8755BC39203EC2CC199E68FC28 (MemberInfo_t * ___member0, bool ___nonPublic1, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver::GetClrTypeFullName(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DefaultContractResolver_GetClrTypeFullName_m874A85E4D811BEB8F07F8AA427CA76E435AEDC68 (Type_t * ___type0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mF60EC8D80BCE3097C5F731299209E8C4FD800D32 (JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils::GetMemberUnderlyingType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * ReflectionUtils_GetMemberUnderlyingType_m369A749B80A046506D574AFBB1DA224B610DAAF3 (MemberInfo_t * ___member0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::ImplementsGenericDefinition(System.Type,System.Type,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_ImplementsGenericDefinition_m5C3C97154DE1303207DD359EAE64A00B3533A8AC (Type_t * ___type0, Type_t * ___genericInterfaceDefinition1, Type_t ** ___implementingType2, const RuntimeMethod* method);
// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.JsonProperty::get_Order()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  JsonProperty_get_Order_mEF3E149DB2B59B8CA34317D3C09DFF703F31EF81_inline (JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * __this, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<System.Int32>::get_HasValue()
inline bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<System.Int32>::GetValueOrDefault()
inline int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *, const RuntimeMethod*))Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline)(__this, method);
}
// !1 System.Func`2<System.Object,System.Object>::Invoke(!0)
inline RuntimeObject * Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___arg0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, const RuntimeMethod*))Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_gshared)(__this, ___arg0, method);
}
// !0 System.Func`1<System.Object>::Invoke()
inline RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726 (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void System.Action`2<System.Object,System.Object>::Invoke(!0,!1)
inline void Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382 (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * __this, RuntimeObject * ___arg10, RuntimeObject * ___arg21, const RuntimeMethod* method)
{
	((  void (*) (Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_gshared)(__this, ___arg10, ___arg21, method);
}
// System.Object Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object>::Invoke(System.Object[])
inline RuntimeObject * ObjectConstructor_1_Invoke_mE81DB4C62C8D2F60FF83F56FB36AE9FC3BE4103B (ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B *, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))ObjectConstructor_1_Invoke_mE81DB4C62C8D2F60FF83F56FB36AE9FC3BE4103B_gshared)(__this, ___args0, method);
}
// System.Void Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameKey__ctor_mDC4275014619C46DE6BB5BE66BEEEA2962D1DDCD (TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * __this, String_t* ___assemblyName0, String_t* ___typeName1, const RuntimeMethod* method);
// System.Int32 Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeNameKey_GetHashCode_m6F14E3CA5E0098A41949DDA45EC588069B2F7A4A (TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_m4114698DBBE4F208BBD13645CF9DF3500A5B2F6E (TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * __this, TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3  ___other0, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_m2508626D8FED8CA829246608EE62F8E2D34B5AA5 (TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.EnumUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9257036A860F5D9D46AC71795DC0DC889CB519C3 (U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 * __this, const RuntimeMethod* method);
// System.String System.Runtime.Serialization.EnumMemberAttribute::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3_inline (EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * __this, const RuntimeMethod* method);
// System.Boolean System.Reflection.FieldInfo::get_IsLiteral()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsLiteral_mF2657F6BAB384894EB2C861D51093179E3EE77D9 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__55::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_mC5E82C16B976D0931DEC0A40D00530440E975833 (U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.Collection`1<Newtonsoft.Json.Linq.JToken>::GetEnumerator()
inline RuntimeObject* Collection_1_GetEnumerator_mDA086776175028440A51504C113337E91CC43500 (Collection_1_t2780FE79A65D8916FD76F5B194AF02532CF85CD1 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Collection_1_t2780FE79A65D8916FD76F5B194AF02532CF85CD1 *, const RuntimeMethod*))Collection_1_GetEnumerator_mBA3E12623E936348728135E0108ED24DE0E53FAB_gshared)(__this, method);
}
// System.String Newtonsoft.Json.Linq.JProperty::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_m1F999A1D1AB6DE471307B863143DFE0713496E56_inline (JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445 * __this, const RuntimeMethod* method);
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * JProperty_get_Value_mAABBD10438136C61CBEB0E739A4ED09AA54D7BC3 (JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken>::.ctor(!0,!1)
inline void KeyValuePair_2__ctor_mF3910C25EC821B78E3466B0458DE8EB7E827C263 (KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112 * __this, String_t* ___key0, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112 *, String_t*, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *, const RuntimeMethod*))KeyValuePair_2__ctor_m74B9EB9E16A0CC0F80B0AB74B8E1E91C16E6998E_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Newtonsoft.Json.Linq.JObject/<GetEnumerator>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_System_IDisposable_Dispose_mB223527BC52FC70E28D161FF63DDD2E52AAFAFF0 (U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Linq.JProperty/JPropertyList/<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mBEF84F4FECA516310F51ECF6074B5481DCBAFC03 (U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty/JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_mC715F77A28A06FEBF2DF905E4CC316395A29247A (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, const RuntimeMethod* method);
// System.Object System.Reflection.MethodBase::Invoke(System.Object,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3 (MethodBase_t * __this, RuntimeObject * ___obj0, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters1, const RuntimeMethod* method);
// System.Int32 System.Runtime.CompilerServices.RuntimeHelpers::GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1 (RuntimeObject * ___o0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF4F6C6B34C47B9F6E948DBC0A421CE0D2D9FE54C (U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * __this, const RuntimeMethod* method);
// System.String Newtonsoft.Json.Serialization.JsonProperty::get_PropertyName()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_m72817401FC680F87EC4202862CD5B52CF6300C60_inline (JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * __this, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10DDD7E3D143A479BA4ABEA1D4361ACC61E136E5 (U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 * __this, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Type>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Type>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258 (RuntimeObject* ___source0, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.Type>(System.Collections.Generic.IEnumerable`1<!!0>)
inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C (Type_t * __this, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method);
// Newtonsoft.Json.Utilities.ReflectionDelegateFactory Newtonsoft.Json.Serialization.JsonTypeReflector::get_ReflectionDelegateFactory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReflectionDelegateFactory_tBCB2E4D5639132D3DFF7CA2CFFAB903183670A16 * JsonTypeReflector_get_ReflectionDelegateFactory_mD5A0D3AA68CA62CCD31B219ED5B1C03C63AAAEC6 (const RuntimeMethod* method);
// System.Void Newtonsoft.Json.JsonException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JsonException__ctor_mEEBCB87D800D5FF413A4B0B17783DE362C8C8B2F (JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF109C838FBEC05DBB2F0E89B8543BE1E18D1F902 (U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * __this, const RuntimeMethod* method);
// System.Boolean System.Linq.Enumerable::Any<System.Reflection.ParameterInfo>(System.Collections.Generic.IEnumerable`1<!!0>)
inline bool Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_Any_TisRuntimeObject_m4EC05D3E15710E112A6399BED7BC82A128B5DED4_gshared)(___source0, method);
}
// System.Boolean System.Reflection.FieldInfo::get_IsPrivate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072 (FieldInfo_t * __this, const RuntimeMethod* method);
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils::IsVirtual(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReflectionUtils_IsVirtual_mDAB826DEBE824D7B3DED6ACE9F582D37ADBDECD1 (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
// System.Reflection.MethodInfo Newtonsoft.Json.Utilities.ReflectionUtils::GetBaseDefinition(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t * ReflectionUtils_GetBaseDefinition_m1495E37E8666896240BC6A5904F061950A1783CB (PropertyInfo_t * ___propertyInfo0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.ReflectionValueProvider::.ctor(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionValueProvider__ctor_m4CCF1B6E29FAC08128AD2D0E980F29107FD29C19 (ReflectionValueProvider_tF9FF9FF758973AF2DD858CAF7C12E085E540B45D * __this, MemberInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionValueProvider__ctor_m4CCF1B6E29FAC08128AD2D0E980F29107FD29C19_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		MemberInfo_t * L_0 = ___memberInfo0;
		ValidationUtils_ArgumentNotNull_mA8AC1AD3B50DBCFC06ABF784BB1311468771A495(L_0, _stringLiteral568E852BDA9DFECC46D2B85B19C5E6609D353EB8, /*hidden argument*/NULL);
		MemberInfo_t * L_1 = ___memberInfo0;
		__this->set__memberInfo_0(L_1);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.ReflectionValueProvider::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReflectionValueProvider_SetValue_mF3A83C542EB0F0D53ADE0E384A043DA559182421 (ReflectionValueProvider_tF9FF9FF758973AF2DD858CAF7C12E085E540B45D * __this, RuntimeObject * ___target0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionValueProvider_SetValue_mF3A83C542EB0F0D53ADE0E384A043DA559182421_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		MemberInfo_t * L_0 = __this->get__memberInfo_0();
		RuntimeObject * L_1 = ___target0;
		RuntimeObject * L_2 = ___value1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		ReflectionUtils_SetMemberValue_m1E2CC0C74BC61975558464CEC2E6B42F4F16ADD1(L_0, L_1, L_2, /*hidden argument*/NULL);
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000f;
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.Exception)
		V_0 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_4 = __this->get__memberInfo_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		RuntimeObject * L_6 = ___target0;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_6, /*hidden argument*/NULL);
		String_t* L_8 = StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8(_stringLiteralDE691340A62551B7980DCA7D2D7EB4C65FFF808D, L_3, L_5, L_7, /*hidden argument*/NULL);
		Exception_t * L_9 = V_0;
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_10 = (JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 *)il2cpp_codegen_object_new(JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8_il2cpp_TypeInfo_var);
		JsonSerializationException__ctor_m4FCF2C5B84A90CDFD7C21E1C40E96C9315A9B552(L_10, L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ReflectionValueProvider_SetValue_mF3A83C542EB0F0D53ADE0E384A043DA559182421_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0037:
	{
		return;
	}
}
// System.Object Newtonsoft.Json.Serialization.ReflectionValueProvider::GetValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ReflectionValueProvider_GetValue_m26EB30AFB2BDE690A4955BBFDC482CB2E67B4DE7 (ReflectionValueProvider_tF9FF9FF758973AF2DD858CAF7C12E085E540B45D * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ReflectionValueProvider_GetValue_m26EB30AFB2BDE690A4955BBFDC482CB2E67B4DE7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		MemberInfo_t * L_0 = __this->get__memberInfo_0();
		RuntimeObject * L_1 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ReflectionUtils_GetMemberValue_mE5AF9C55EFB2EF538341A06DE8839EB2138B66E8(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		goto IL_0037;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_000f;
		throw e;
	}

CATCH_000f:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_3 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_4 = __this->get__memberInfo_0();
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_4);
		RuntimeObject * L_6 = ___target0;
		NullCheck(L_6);
		Type_t * L_7 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_6, /*hidden argument*/NULL);
		String_t* L_8 = StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8(_stringLiteral77A2BCDF7833AAF3267F008AEBA7BF1544830032, L_3, L_5, L_7, /*hidden argument*/NULL);
		Exception_t * L_9 = V_1;
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_10 = (JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 *)il2cpp_codegen_object_new(JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8_il2cpp_TypeInfo_var);
		JsonSerializationException__ctor_m4FCF2C5B84A90CDFD7C21E1C40E96C9315A9B552(L_10, L_8, L_9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, ReflectionValueProvider_GetValue_m26EB30AFB2BDE690A4955BBFDC482CB2E67B4DE7_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0037:
	{
		RuntimeObject * L_11 = V_0;
		return L_11;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexConverter_WriteJson_m2DFD8C928EE8DF8C5F5B2142C1BD4FD725A3A278 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * ___writer0, RuntimeObject * ___value1, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegexConverter_WriteJson_m2DFD8C928EE8DF8C5F5B2142C1BD4FD725A3A278_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * V_0 = NULL;
	BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131 * V_1 = NULL;
	{
		RuntimeObject * L_0 = ___value1;
		V_0 = ((Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)CastclassClass((RuntimeObject*)L_0, Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var));
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = ___writer0;
		V_1 = ((BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131 *)IsInstClass((RuntimeObject*)L_1, BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131_il2cpp_TypeInfo_var));
		BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131 * L_2 = V_1;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131 * L_3 = V_1;
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_4 = V_0;
		RegexConverter_WriteBson_m3D5E7CC84BCCD528C8D042FEFAF7EC1925887E03(__this, L_3, L_4, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_5 = ___writer0;
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_6 = V_0;
		JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * L_7 = ___serializer2;
		RegexConverter_WriteJson_m3232C1B85602852FB040265237936D883586D344(__this, L_5, L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Converters.RegexConverter::HasFlag(System.Text.RegularExpressions.RegexOptions,System.Text.RegularExpressions.RegexOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexConverter_HasFlag_m30BC848357FCD2222E2297FAA40C777EF58DAFDA (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, int32_t ___options0, int32_t ___flag1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___options0;
		int32_t L_1 = ___flag1;
		int32_t L_2 = ___flag1;
		return (bool)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)L_1))) == ((int32_t)L_2))? 1 : 0);
	}
}
// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteBson(Newtonsoft.Json.Bson.BsonWriter,System.Text.RegularExpressions.Regex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexConverter_WriteBson_m3D5E7CC84BCCD528C8D042FEFAF7EC1925887E03 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131 * ___writer0, Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___regex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegexConverter_WriteBson_m3D5E7CC84BCCD528C8D042FEFAF7EC1925887E03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		V_0 = (String_t*)NULL;
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_0 = ___regex1;
		NullCheck(L_0);
		int32_t L_1 = Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2_inline(L_0, /*hidden argument*/NULL);
		bool L_2 = RegexConverter_HasFlag_m30BC848357FCD2222E2297FAA40C777EF58DAFDA(__this, L_1, 1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		String_t* L_3 = V_0;
		String_t* L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_3, _stringLiteral1B8590E2F95A4B0631E98EAF5F61AFD63A1C031E, /*hidden argument*/NULL);
		V_0 = L_4;
	}

IL_001d:
	{
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_5 = ___regex1;
		NullCheck(L_5);
		int32_t L_6 = Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2_inline(L_5, /*hidden argument*/NULL);
		bool L_7 = RegexConverter_HasFlag_m30BC848357FCD2222E2297FAA40C777EF58DAFDA(__this, L_6, 2, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_8 = V_0;
		String_t* L_9 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_8, _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, /*hidden argument*/NULL);
		V_0 = L_9;
	}

IL_0038:
	{
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_10 = ___regex1;
		NullCheck(L_10);
		int32_t L_11 = Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2_inline(L_10, /*hidden argument*/NULL);
		bool L_12 = RegexConverter_HasFlag_m30BC848357FCD2222E2297FAA40C777EF58DAFDA(__this, L_11, ((int32_t)16), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_0054;
		}
	}
	{
		String_t* L_13 = V_0;
		String_t* L_14 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_13, _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0054:
	{
		String_t* L_15 = V_0;
		String_t* L_16 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_15, _stringLiteralD07B59B474E59375E25F09D75E1BAC7660C9373B, /*hidden argument*/NULL);
		V_0 = L_16;
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_17 = ___regex1;
		NullCheck(L_17);
		int32_t L_18 = Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2_inline(L_17, /*hidden argument*/NULL);
		bool L_19 = RegexConverter_HasFlag_m30BC848357FCD2222E2297FAA40C777EF58DAFDA(__this, L_18, 4, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_007b;
		}
	}
	{
		String_t* L_20 = V_0;
		String_t* L_21 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_20, _stringLiteral062DB096C728515E033CF8C48A1C1F0B9A79384B, /*hidden argument*/NULL);
		V_0 = L_21;
	}

IL_007b:
	{
		BsonWriter_tB73D39AD997FE52DBBC6B8B78982370C18A39131 * L_22 = ___writer0;
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_23 = ___regex1;
		NullCheck(L_23);
		String_t* L_24 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_23);
		String_t* L_25 = V_0;
		NullCheck(L_22);
		BsonWriter_WriteRegex_m5C12579C34320D1645D2FC518AF280F7B4EA5A81(L_22, L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.RegexConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Text.RegularExpressions.Regex,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexConverter_WriteJson_m3232C1B85602852FB040265237936D883586D344 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * ___writer0, Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * ___regex1, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegexConverter_WriteJson_m3232C1B85602852FB040265237936D883586D344_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297 * V_0 = NULL;
	JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * G_B2_0 = NULL;
	JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * G_B3_1 = NULL;
	JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * G_B5_0 = NULL;
	JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * G_B4_0 = NULL;
	String_t* G_B6_0 = NULL;
	JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * G_B6_1 = NULL;
	{
		JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * L_0 = ___serializer2;
		NullCheck(L_0);
		RuntimeObject* L_1 = VirtFuncInvoker0< RuntimeObject* >::Invoke(23 /* Newtonsoft.Json.Serialization.IContractResolver Newtonsoft.Json.JsonSerializer::get_ContractResolver() */, L_0);
		V_0 = ((DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297 *)IsInstClass((RuntimeObject*)L_1, DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297_il2cpp_TypeInfo_var));
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = ___writer0;
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(7 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_2);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_3 = ___writer0;
		DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297 * L_4 = V_0;
		G_B1_0 = L_3;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001d;
		}
	}
	{
		G_B3_0 = _stringLiteral4DE1853EEF8EA51A408D1E43572237AA9099A9F7;
		G_B3_1 = G_B1_0;
		goto IL_0028;
	}

IL_001d:
	{
		DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297 * L_5 = V_0;
		NullCheck(L_5);
		String_t* L_6 = DefaultContractResolver_GetResolvedPropertyName_mDAF5D5500B14C083619BAC1C8656C018541DC91A(L_5, _stringLiteral4DE1853EEF8EA51A408D1E43572237AA9099A9F7, /*hidden argument*/NULL);
		G_B3_0 = L_6;
		G_B3_1 = G_B2_0;
	}

IL_0028:
	{
		NullCheck(G_B3_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, G_B3_1, G_B3_0);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_7 = ___writer0;
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_8 = ___regex1;
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_8);
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(25 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_7, L_9);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_10 = ___writer0;
		DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297 * L_11 = V_0;
		G_B4_0 = L_10;
		if (L_11)
		{
			G_B5_0 = L_10;
			goto IL_0044;
		}
	}
	{
		G_B6_0 = _stringLiteralF4BD78F14A295432B64B608CF7B12D9CA73E40A1;
		G_B6_1 = G_B4_0;
		goto IL_004f;
	}

IL_0044:
	{
		DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297 * L_12 = V_0;
		NullCheck(L_12);
		String_t* L_13 = DefaultContractResolver_GetResolvedPropertyName_mDAF5D5500B14C083619BAC1C8656C018541DC91A(L_12, _stringLiteralF4BD78F14A295432B64B608CF7B12D9CA73E40A1, /*hidden argument*/NULL);
		G_B6_0 = L_13;
		G_B6_1 = G_B5_0;
	}

IL_004f:
	{
		NullCheck(G_B6_1);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, G_B6_1, G_B6_0);
		JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * L_14 = ___serializer2;
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_15 = ___writer0;
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_16 = ___regex1;
		NullCheck(L_16);
		int32_t L_17 = Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2_inline(L_16, /*hidden argument*/NULL);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(RegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_14);
		JsonSerializer_Serialize_mFED2010B103C1A19C4601BFAAB18AEEAAB11DE2B(L_14, L_15, L_19, /*hidden argument*/NULL);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_20 = ___writer0;
		NullCheck(L_20);
		VirtActionInvoker0::Invoke(8 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_20);
		return;
	}
}
// System.Object Newtonsoft.Json.Converters.RegexConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RegexConverter_ReadJson_m670966D979ED51B085DCEBDFED7B53697D3B075B (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegexConverter_ReadJson_m670966D979ED51B085DCEBDFED7B53697D3B075B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0013;
		}
	}
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_2 = ___reader0;
		JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * L_3 = ___serializer3;
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_4 = RegexConverter_ReadRegexObject_m305F9A55E4024BD86481052D19B398005B06C745(__this, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0013:
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_5 = ___reader0;
		NullCheck(L_5);
		int32_t L_6 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_5);
		if ((!(((uint32_t)L_6) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0025;
		}
	}
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_7 = ___reader0;
		RuntimeObject * L_8 = RegexConverter_ReadRegexString_m8416EBC385B8AD4B3DB08E1437E37DCAA9FA9734(__this, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0025:
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_9 = ___reader0;
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_10 = JsonSerializationException_Create_m59D9D0A78A9893C93F966A7ADF83DF696415D38A(L_9, _stringLiteral353387D238AB271DB188C48D7B97628BE513D749, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, RegexConverter_ReadJson_m670966D979ED51B085DCEBDFED7B53697D3B075B_RuntimeMethod_var);
	}
}
// System.Object Newtonsoft.Json.Converters.RegexConverter::ReadRegexString(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * RegexConverter_ReadRegexString_m8416EBC385B8AD4B3DB08E1437E37DCAA9FA9734 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegexConverter_ReadRegexString_m8416EBC385B8AD4B3DB08E1437E37DCAA9FA9734_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	int32_t V_4 = 0;
	Il2CppChar V_5 = 0x0;
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = ___reader0;
		NullCheck(L_0);
		RuntimeObject * L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_0);
		String_t* L_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_1, String_t_il2cpp_TypeInfo_var));
		NullCheck(L_2);
		int32_t L_3 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_2, ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_3;
		String_t* L_4 = L_2;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		String_t* L_6 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_4, 1, ((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_6;
		int32_t L_7 = V_0;
		NullCheck(L_4);
		String_t* L_8 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_4, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)), /*hidden argument*/NULL);
		V_2 = 0;
		V_3 = L_8;
		V_4 = 0;
		goto IL_0078;
	}

IL_002f:
	{
		String_t* L_9 = V_3;
		int32_t L_10 = V_4;
		NullCheck(L_9);
		Il2CppChar L_11 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_9, L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		Il2CppChar L_12 = V_5;
		if ((!(((uint32_t)L_12) <= ((uint32_t)((int32_t)109)))))
		{
			goto IL_004d;
		}
	}
	{
		Il2CppChar L_13 = V_5;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)105))))
		{
			goto IL_005b;
		}
	}
	{
		Il2CppChar L_14 = V_5;
		if ((((int32_t)L_14) == ((int32_t)((int32_t)109))))
		{
			goto IL_0061;
		}
	}
	{
		goto IL_0072;
	}

IL_004d:
	{
		Il2CppChar L_15 = V_5;
		if ((((int32_t)L_15) == ((int32_t)((int32_t)115))))
		{
			goto IL_0067;
		}
	}
	{
		Il2CppChar L_16 = V_5;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)120))))
		{
			goto IL_006e;
		}
	}
	{
		goto IL_0072;
	}

IL_005b:
	{
		int32_t L_17 = V_2;
		V_2 = ((int32_t)((int32_t)L_17|(int32_t)1));
		goto IL_0072;
	}

IL_0061:
	{
		int32_t L_18 = V_2;
		V_2 = ((int32_t)((int32_t)L_18|(int32_t)2));
		goto IL_0072;
	}

IL_0067:
	{
		int32_t L_19 = V_2;
		V_2 = ((int32_t)((int32_t)L_19|(int32_t)((int32_t)16)));
		goto IL_0072;
	}

IL_006e:
	{
		int32_t L_20 = V_2;
		V_2 = ((int32_t)((int32_t)L_20|(int32_t)4));
	}

IL_0072:
	{
		int32_t L_21 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0078:
	{
		int32_t L_22 = V_4;
		String_t* L_23 = V_3;
		NullCheck(L_23);
		int32_t L_24 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_23, /*hidden argument*/NULL);
		if ((((int32_t)L_22) < ((int32_t)L_24)))
		{
			goto IL_002f;
		}
	}
	{
		String_t* L_25 = V_1;
		int32_t L_26 = V_2;
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_27 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4(L_27, L_25, L_26, /*hidden argument*/NULL);
		return L_27;
	}
}
// System.Text.RegularExpressions.Regex Newtonsoft.Json.Converters.RegexConverter::ReadRegexObject(Newtonsoft.Json.JsonReader,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * RegexConverter_ReadRegexObject_m305F9A55E4024BD86481052D19B398005B06C745 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegexConverter_ReadRegexObject_m305F9A55E4024BD86481052D19B398005B06C745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	String_t* V_3 = NULL;
	Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F  V_4;
	memset((&V_4), 0, sizeof(V_4));
	String_t* G_B16_0 = NULL;
	String_t* G_B15_0 = NULL;
	int32_t G_B17_0 = 0;
	String_t* G_B17_1 = NULL;
	{
		V_0 = (String_t*)NULL;
		il2cpp_codegen_initobj((&V_1), sizeof(Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F ));
		goto IL_00b9;
	}

IL_000f:
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		V_2 = L_1;
		int32_t L_2 = V_2;
		if ((((int32_t)L_2) == ((int32_t)4)))
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_3 = V_2;
		if ((((int32_t)L_3) == ((int32_t)5)))
		{
			goto IL_00b9;
		}
	}
	{
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)13))))
		{
			goto IL_008d;
		}
	}
	{
		goto IL_00b9;
	}

IL_002b:
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_5 = ___reader0;
		NullCheck(L_5);
		RuntimeObject * L_6 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_5);
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_6);
		V_3 = L_7;
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_8 = ___reader0;
		NullCheck(L_8);
		bool L_9 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_8);
		if (L_9)
		{
			goto IL_004b;
		}
	}
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_10 = ___reader0;
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_11 = JsonSerializationException_Create_m59D9D0A78A9893C93F966A7ADF83DF696415D38A(L_10, _stringLiteralB5F971C21F0E429CC592BBB1C93532F72EFFC873, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, RegexConverter_ReadRegexObject_m305F9A55E4024BD86481052D19B398005B06C745_RuntimeMethod_var);
	}

IL_004b:
	{
		String_t* L_12 = V_3;
		bool L_13 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_12, _stringLiteral4DE1853EEF8EA51A408D1E43572237AA9099A9F7, 5, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0067;
		}
	}
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_14 = ___reader0;
		NullCheck(L_14);
		RuntimeObject * L_15 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_14);
		V_0 = ((String_t*)CastclassSealed((RuntimeObject*)L_15, String_t_il2cpp_TypeInfo_var));
		goto IL_00b9;
	}

IL_0067:
	{
		String_t* L_16 = V_3;
		bool L_17 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_16, _stringLiteralF4BD78F14A295432B64B608CF7B12D9CA73E40A1, 5, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0085;
		}
	}
	{
		JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * L_18 = ___serializer1;
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_19 = ___reader0;
		NullCheck(L_18);
		int32_t L_20 = JsonSerializer_Deserialize_TisRegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4_m4331B7014627BC8041105D1E65D260B294A712F8(L_18, L_19, /*hidden argument*/JsonSerializer_Deserialize_TisRegexOptions_t8F8CD5BC6C55FC2B657722FD09ABDFDF5BA6F6A4_m4331B7014627BC8041105D1E65D260B294A712F8_RuntimeMethod_var);
		Nullable_1__ctor_mF2706CF213CD61CDD98E8CFD43442578AB579AD4((Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F *)(&V_1), L_20, /*hidden argument*/Nullable_1__ctor_mF2706CF213CD61CDD98E8CFD43442578AB579AD4_RuntimeMethod_var);
		goto IL_00b9;
	}

IL_0085:
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_21 = ___reader0;
		NullCheck(L_21);
		JsonReader_Skip_mC8CB495BD0C5108D4AFFD1D660CDFCB659A25591(L_21, /*hidden argument*/NULL);
		goto IL_00b9;
	}

IL_008d:
	{
		String_t* L_22 = V_0;
		if (L_22)
		{
			goto IL_009c;
		}
	}
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_23 = ___reader0;
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_24 = JsonSerializationException_Create_m59D9D0A78A9893C93F966A7ADF83DF696415D38A(L_23, _stringLiteralA3EAA0F339183241CBE940583DB6DF3E8447B751, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, RegexConverter_ReadRegexObject_m305F9A55E4024BD86481052D19B398005B06C745_RuntimeMethod_var);
	}

IL_009c:
	{
		String_t* L_25 = V_0;
		Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F  L_26 = V_1;
		V_4 = L_26;
		bool L_27 = Nullable_1_get_HasValue_mD96C04C8C19EAB83BB1DFF566EABF26350631691_inline((Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F *)(&V_4), /*hidden argument*/Nullable_1_get_HasValue_mD96C04C8C19EAB83BB1DFF566EABF26350631691_RuntimeMethod_var);
		G_B15_0 = L_25;
		if (L_27)
		{
			G_B16_0 = L_25;
			goto IL_00ac;
		}
	}
	{
		G_B17_0 = 0;
		G_B17_1 = G_B15_0;
		goto IL_00b3;
	}

IL_00ac:
	{
		int32_t L_28 = Nullable_1_GetValueOrDefault_m04F74D34BA67514B20CA552AEB2123AB5BF45717_inline((Nullable_1_tF9654764DD75E5CBA4742E6CD7D2D6982996EA2F *)(&V_4), /*hidden argument*/Nullable_1_GetValueOrDefault_m04F74D34BA67514B20CA552AEB2123AB5BF45717_RuntimeMethod_var);
		G_B17_0 = ((int32_t)(L_28));
		G_B17_1 = G_B16_0;
	}

IL_00b3:
	{
		Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * L_29 = (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F *)il2cpp_codegen_object_new(Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_il2cpp_TypeInfo_var);
		Regex__ctor_m5BA9C047FEB3C93AD388668FA855CB1A63FB62A4(L_29, G_B17_1, G_B17_0, /*hidden argument*/NULL);
		return L_29;
	}

IL_00b9:
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_30 = ___reader0;
		NullCheck(L_30);
		bool L_31 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_30);
		if (L_31)
		{
			goto IL_000f;
		}
	}
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_32 = ___reader0;
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_33 = JsonSerializationException_Create_m59D9D0A78A9893C93F966A7ADF83DF696415D38A(L_32, _stringLiteralB5F971C21F0E429CC592BBB1C93532F72EFFC873, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, RegexConverter_ReadRegexObject_m305F9A55E4024BD86481052D19B398005B06C745_RuntimeMethod_var);
	}
}
// System.Boolean Newtonsoft.Json.Converters.RegexConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RegexConverter_CanConvert_mB8EE7F3824E272C0D5119E0004256A78500A00E9 (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RegexConverter_CanConvert_mB8EE7F3824E272C0D5119E0004256A78500A00E9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___objectType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Void Newtonsoft.Json.Converters.RegexConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RegexConverter__ctor_mA8551DA4763F879B008CAA285672515BACAE949E (RegexConverter_tDDBD75C4622669C2FD28AE2B65FD7EAEB7752C73 * __this, const RuntimeMethod* method)
{
	{
		JsonConverter__ctor_mBE413F963C1E1D20875BCFE94DB01E09836EA97B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Serialization.ResolverContractKey
IL2CPP_EXTERN_C void ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshal_pinvoke(const ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4& unmarshaled, ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshaled_pinvoke& marshaled)
{
	Exception_t* ____resolverType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_resolverType' of type 'ResolverContractKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____resolverType_0Exception, NULL);
}
IL2CPP_EXTERN_C void ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshal_pinvoke_back(const ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshaled_pinvoke& marshaled, ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4& unmarshaled)
{
	Exception_t* ____resolverType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_resolverType' of type 'ResolverContractKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____resolverType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Serialization.ResolverContractKey
IL2CPP_EXTERN_C void ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshal_pinvoke_cleanup(ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Newtonsoft.Json.Serialization.ResolverContractKey
IL2CPP_EXTERN_C void ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshal_com(const ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4& unmarshaled, ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshaled_com& marshaled)
{
	Exception_t* ____resolverType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_resolverType' of type 'ResolverContractKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____resolverType_0Exception, NULL);
}
IL2CPP_EXTERN_C void ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshal_com_back(const ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshaled_com& marshaled, ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4& unmarshaled)
{
	Exception_t* ____resolverType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_resolverType' of type 'ResolverContractKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____resolverType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Serialization.ResolverContractKey
IL2CPP_EXTERN_C void ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshal_com_cleanup(ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_marshaled_com& marshaled)
{
}
// System.Void Newtonsoft.Json.Serialization.ResolverContractKey::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResolverContractKey__ctor_m5C7C616DF53AB9D3EE81A19395431BA9B0A3EB9C (ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * __this, Type_t * ___resolverType0, Type_t * ___contractType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___resolverType0;
		__this->set__resolverType_0(L_0);
		Type_t * L_1 = ___contractType1;
		__this->set__contractType_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ResolverContractKey__ctor_m5C7C616DF53AB9D3EE81A19395431BA9B0A3EB9C_AdjustorThunk (RuntimeObject * __this, Type_t * ___resolverType0, Type_t * ___contractType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * _thisAdjusted = reinterpret_cast<ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 *>(__this + _offset);
	ResolverContractKey__ctor_m5C7C616DF53AB9D3EE81A19395431BA9B0A3EB9C(_thisAdjusted, ___resolverType0, ___contractType1, method);
}
// System.Int32 Newtonsoft.Json.Serialization.ResolverContractKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ResolverContractKey_GetHashCode_mCF78DF3E9A1EB11DACA737FA5A306F172A8A0D6B (ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__resolverType_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		Type_t * L_2 = __this->get__contractType_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t ResolverContractKey_GetHashCode_mCF78DF3E9A1EB11DACA737FA5A306F172A8A0D6B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * _thisAdjusted = reinterpret_cast<ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 *>(__this + _offset);
	return ResolverContractKey_GetHashCode_mCF78DF3E9A1EB11DACA737FA5A306F172A8A0D6B(_thisAdjusted, method);
}
// System.Boolean Newtonsoft.Json.Serialization.ResolverContractKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResolverContractKey_Equals_m7EADD44C28175D677F9881E4D0021CF8936E0732 (ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResolverContractKey_Equals_m7EADD44C28175D677F9881E4D0021CF8936E0732_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = ResolverContractKey_Equals_m7F6E1B33EEBDE4971264A88E6662D9CDDE4CFC18((ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 *)__this, ((*(ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 *)((ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 *)UnBox(L_1, ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool ResolverContractKey_Equals_m7EADD44C28175D677F9881E4D0021CF8936E0732_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * _thisAdjusted = reinterpret_cast<ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 *>(__this + _offset);
	return ResolverContractKey_Equals_m7EADD44C28175D677F9881E4D0021CF8936E0732(_thisAdjusted, ___obj0, method);
}
// System.Boolean Newtonsoft.Json.Serialization.ResolverContractKey::Equals(Newtonsoft.Json.Serialization.ResolverContractKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ResolverContractKey_Equals_m7F6E1B33EEBDE4971264A88E6662D9CDDE4CFC18 (ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * __this, ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4  ___other0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__resolverType_0();
		ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4  L_1 = ___other0;
		Type_t * L_2 = L_1.get__resolverType_0();
		if ((!(((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_3 = __this->get__contractType_1();
		ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4  L_4 = ___other0;
		Type_t * L_5 = L_4.get__contractType_1();
		return (bool)((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool ResolverContractKey_Equals_m7F6E1B33EEBDE4971264A88E6662D9CDDE4CFC18_AdjustorThunk (RuntimeObject * __this, ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 * _thisAdjusted = reinterpret_cast<ResolverContractKey_tAF8848FA6DC539B7F526ABC132ED4D37B01934B4 *>(__this + _offset);
	return ResolverContractKey_Equals_m7F6E1B33EEBDE4971264A88E6662D9CDDE4CFC18(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.SerializationCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCallback__ctor_m6390FE6B107CA5EAB4EC582D0E814888EC3680CA (SerializationCallback_tFA478094A3FDF26735AE3B85B18B9945851F5DF1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Newtonsoft.Json.Serialization.SerializationCallback::Invoke(System.Object,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCallback_Invoke_m98C5D43F75883EA2EFD0B8E5DF2B3996A1A3D820 (SerializationCallback_tFA478094A3FDF26735AE3B85B18B9945851F5DF1 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___o0, ___context1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, ___context1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  >::Invoke(targetMethod, ___o0, ___context1);
					else
						GenericVirtActionInvoker1< StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  >::Invoke(targetMethod, ___o0, ___context1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___o0, ___context1);
					else
						VirtActionInvoker1< StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___o0, ___context1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___context1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___o0, ___context1, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___o0, ___context1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  >::Invoke(targetMethod, targetThis, ___o0, ___context1);
					else
						GenericVirtActionInvoker2< RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  >::Invoke(targetMethod, targetThis, ___o0, ___context1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___o0, ___context1);
					else
						VirtActionInvoker2< RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___o0, ___context1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___o0) - 1), ___context1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, ___context1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Newtonsoft.Json.Serialization.SerializationCallback::BeginInvoke(System.Object,System.Runtime.Serialization.StreamingContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationCallback_BeginInvoke_mF0BA12B078DD0258912A68952DD078100F2A2FC7 (SerializationCallback_tFA478094A3FDF26735AE3B85B18B9945851F5DF1 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializationCallback_BeginInvoke_mF0BA12B078DD0258912A68952DD078100F2A2FC7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___o0;
	__d_args[1] = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &___context1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Newtonsoft.Json.Serialization.SerializationCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCallback_EndInvoke_mA939F9CCA8AD61FF04550DD641140185A89100EB (SerializationCallback_tFA478094A3FDF26735AE3B85B18B9945851F5DF1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.SerializationErrorCallback::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationErrorCallback__ctor_m11C9CA3B46DB9BD502DF841CE81F601DDC2683EE (SerializationErrorCallback_t9C4BA1E797ECDB53622C2767ACABFD8BFEE86285 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Newtonsoft.Json.Serialization.SerializationErrorCallback::Invoke(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationErrorCallback_Invoke_m1A623FEF15281AAF20963A8725839BFC98E1FA64 (SerializationErrorCallback_t9C4BA1E797ECDB53622C2767ACABFD8BFEE86285 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * ___errorContext2, const RuntimeMethod* method)
{
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___o0, ___context1, ___errorContext2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, ___context1, ___errorContext2, targetMethod);
			}
		}
		else if (___parameterCount != 3)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * >::Invoke(targetMethod, ___o0, ___context1, ___errorContext2);
					else
						GenericVirtActionInvoker2< StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * >::Invoke(targetMethod, ___o0, ___context1, ___errorContext2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___o0, ___context1, ___errorContext2);
					else
						VirtActionInvoker2< StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___o0, ___context1, ___errorContext2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___context1) - 1), ___errorContext2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___o0, ___context1, ___errorContext2, targetMethod);
				}
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___o0, ___context1, ___errorContext2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * >::Invoke(targetMethod, targetThis, ___o0, ___context1, ___errorContext2);
					else
						GenericVirtActionInvoker3< RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * >::Invoke(targetMethod, targetThis, ___o0, ___context1, ___errorContext2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___o0, ___context1, ___errorContext2);
					else
						VirtActionInvoker3< RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___o0, ___context1, ___errorContext2);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___o0) - 1), ___context1, ___errorContext2, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 , ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___o0, ___context1, ___errorContext2, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Newtonsoft.Json.Serialization.SerializationErrorCallback::BeginInvoke(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationErrorCallback_BeginInvoke_m99B5D1C187200AD2A22155C76FA0B53730CA44B3 (SerializationErrorCallback_t9C4BA1E797ECDB53622C2767ACABFD8BFEE86285 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * ___errorContext2, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializationErrorCallback_BeginInvoke_m99B5D1C187200AD2A22155C76FA0B53730CA44B3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = ___o0;
	__d_args[1] = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &___context1);
	__d_args[2] = ___errorContext2;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void Newtonsoft.Json.Serialization.SerializationErrorCallback::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationErrorCallback_EndInvoke_mF47C19FD1740E216FA2A34D9689B9F0520864D93 (SerializationErrorCallback_t9C4BA1E797ECDB53622C2767ACABFD8BFEE86285 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringBuffer
IL2CPP_EXTERN_C void StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshal_pinvoke(const StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325& unmarshaled, StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__buffer_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__buffer_Length = (unmarshaled.get__buffer_0())->max_length;
		marshaled.____buffer_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__buffer_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__buffer_Length); i++)
		{
			(marshaled.____buffer_0)[i] = static_cast<uint8_t>((unmarshaled.get__buffer_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____buffer_0 = NULL;
	}
	marshaled.____position_1 = unmarshaled.get__position_1();
}
IL2CPP_EXTERN_C void StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshal_pinvoke_back(const StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshaled_pinvoke& marshaled, StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____buffer_0 != NULL)
	{
		if (unmarshaled.get__buffer_0() == NULL)
		{
			unmarshaled.set__buffer_0(reinterpret_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__buffer_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__buffer_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____buffer_0)[i]));
		}
	}
	int32_t unmarshaled__position_temp_1 = 0;
	unmarshaled__position_temp_1 = marshaled.____position_1;
	unmarshaled.set__position_1(unmarshaled__position_temp_1);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringBuffer
IL2CPP_EXTERN_C void StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshal_pinvoke_cleanup(StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshaled_pinvoke& marshaled)
{
	if (marshaled.____buffer_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____buffer_0);
		marshaled.____buffer_0 = NULL;
	}
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringBuffer
IL2CPP_EXTERN_C void StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshal_com(const StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325& unmarshaled, StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshaled_com& marshaled)
{
	if (unmarshaled.get__buffer_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__buffer_Length = (unmarshaled.get__buffer_0())->max_length;
		marshaled.____buffer_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__buffer_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__buffer_Length); i++)
		{
			(marshaled.____buffer_0)[i] = static_cast<uint8_t>((unmarshaled.get__buffer_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____buffer_0 = NULL;
	}
	marshaled.____position_1 = unmarshaled.get__position_1();
}
IL2CPP_EXTERN_C void StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshal_com_back(const StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshaled_com& marshaled, StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____buffer_0 != NULL)
	{
		if (unmarshaled.get__buffer_0() == NULL)
		{
			unmarshaled.set__buffer_0(reinterpret_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__buffer_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__buffer_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____buffer_0)[i]));
		}
	}
	int32_t unmarshaled__position_temp_1 = 0;
	unmarshaled__position_temp_1 = marshaled.____position_1;
	unmarshaled.set__position_1(unmarshaled__position_temp_1);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringBuffer
IL2CPP_EXTERN_C void StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshal_com_cleanup(StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325_marshaled_com& marshaled)
{
	if (marshaled.____buffer_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____buffer_0);
		marshaled.____buffer_0 = NULL;
	}
}
// System.Int32 Newtonsoft.Json.Utilities.StringBuffer::get_Position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringBuffer_get_Position_m424CA0E4A0274918489C5986D189CB6DDEA6F11F (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StringBuffer_get_Position_m424CA0E4A0274918489C5986D189CB6DDEA6F11F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	return StringBuffer_get_Position_m424CA0E4A0274918489C5986D189CB6DDEA6F11F_inline(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::set_Position(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer_set_Position_mE931269D642EEE14E2D84EEE1F0706536D65401F (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__position_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void StringBuffer_set_Position_mE931269D642EEE14E2D84EEE1F0706536D65401F_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	StringBuffer_set_Position_mE931269D642EEE14E2D84EEE1F0706536D65401F_inline(_thisAdjusted, ___value0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.StringBuffer::get_IsEmpty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringBuffer_get_IsEmpty_m3B5208A8E035C3BF103F48C4BD666BA7D16C7682 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get__buffer_0();
		return (bool)((((RuntimeObject*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
	}
}
IL2CPP_EXTERN_C  bool StringBuffer_get_IsEmpty_m3B5208A8E035C3BF103F48C4BD666BA7D16C7682_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	return StringBuffer_get_IsEmpty_m3B5208A8E035C3BF103F48C4BD666BA7D16C7682(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer__ctor_m658802150D63B715C3470D6B2C0170551ECB7DD5 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, int32_t ___initalSize1, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = ___bufferPool0;
		int32_t L_1 = ___initalSize1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = BufferUtils_RentBuffer_m4571362D52D6FA4B460A644F8FFA669102B842D1(L_0, L_1, /*hidden argument*/NULL);
		StringBuffer__ctor_m80178B6D27B163F78337AC8C7BA4D6026696FA83((StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *)__this, L_2, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void StringBuffer__ctor_m658802150D63B715C3470D6B2C0170551ECB7DD5_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, int32_t ___initalSize1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	StringBuffer__ctor_m658802150D63B715C3470D6B2C0170551ECB7DD5(_thisAdjusted, ___bufferPool0, ___initalSize1, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::.ctor(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer__ctor_m80178B6D27B163F78337AC8C7BA4D6026696FA83 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___buffer0;
		__this->set__buffer_0(L_0);
		__this->set__position_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void StringBuffer__ctor_m80178B6D27B163F78337AC8C7BA4D6026696FA83_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	StringBuffer__ctor_m80178B6D27B163F78337AC8C7BA4D6026696FA83(_thisAdjusted, ___buffer0, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer_Append_m0FCC4FB58E15B226B908B153D32045BBFF1D76F0 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get__position_1();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = __this->get__buffer_0();
		NullCheck(L_1);
		if ((!(((uint32_t)L_0) == ((uint32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))))))
		{
			goto IL_0018;
		}
	}
	{
		RuntimeObject* L_2 = ___bufferPool0;
		StringBuffer_EnsureSize_m76D11C8EED77ACD0299390A98CE072C5F2FE9EC0((StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *)__this, L_2, 1, /*hidden argument*/NULL);
	}

IL_0018:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = __this->get__buffer_0();
		int32_t L_4 = __this->get__position_1();
		V_0 = L_4;
		int32_t L_5 = V_0;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = V_0;
		Il2CppChar L_7 = ___value1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Il2CppChar)L_7);
		return;
	}
}
IL2CPP_EXTERN_C  void StringBuffer_Append_m0FCC4FB58E15B226B908B153D32045BBFF1D76F0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	StringBuffer_Append_m0FCC4FB58E15B226B908B153D32045BBFF1D76F0(_thisAdjusted, ___bufferPool0, ___value1, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Append(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer_Append_m603D9B2C24029588D05093561F805BC76C4DF0EA (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		int32_t L_1 = ___count3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = __this->get__buffer_0();
		NullCheck(L_2);
		if ((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))))))
		{
			goto IL_001c;
		}
	}
	{
		RuntimeObject* L_3 = ___bufferPool0;
		int32_t L_4 = ___count3;
		StringBuffer_EnsureSize_m76D11C8EED77ACD0299390A98CE072C5F2FE9EC0((StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *)__this, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001c:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___buffer1;
		int32_t L_6 = ___startIndex2;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = __this->get__buffer_0();
		int32_t L_8 = __this->get__position_1();
		int32_t L_9 = ___count3;
		Array_Copy_m3F127FFB5149532135043FFE285F9177C80CB877((RuntimeArray *)(RuntimeArray *)L_5, L_6, (RuntimeArray *)(RuntimeArray *)L_7, L_8, L_9, /*hidden argument*/NULL);
		int32_t L_10 = __this->get__position_1();
		int32_t L_11 = ___count3;
		__this->set__position_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11)));
		return;
	}
}
IL2CPP_EXTERN_C  void StringBuffer_Append_m603D9B2C24029588D05093561F805BC76C4DF0EA_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer1, int32_t ___startIndex2, int32_t ___count3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	StringBuffer_Append_m603D9B2C24029588D05093561F805BC76C4DF0EA(_thisAdjusted, ___bufferPool0, ___buffer1, ___startIndex2, ___count3, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::Clear(Newtonsoft.Json.IArrayPool`1<System.Char>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer_Clear_m56DC59C94CAF5F3A5830C14E2E38F0C205F78610 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get__buffer_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		RuntimeObject* L_1 = ___bufferPool0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = __this->get__buffer_0();
		BufferUtils_ReturnBuffer_m8CED72FDBE1C197A91AE32EC7C89D2A8B94FFA4D(L_1, L_2, /*hidden argument*/NULL);
		__this->set__buffer_0((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)NULL);
	}

IL_001b:
	{
		__this->set__position_1(0);
		return;
	}
}
IL2CPP_EXTERN_C  void StringBuffer_Clear_m56DC59C94CAF5F3A5830C14E2E38F0C205F78610_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	StringBuffer_Clear_m56DC59C94CAF5F3A5830C14E2E38F0C205F78610(_thisAdjusted, ___bufferPool0, method);
}
// System.Void Newtonsoft.Json.Utilities.StringBuffer::EnsureSize(Newtonsoft.Json.IArrayPool`1<System.Char>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuffer_EnsureSize_m76D11C8EED77ACD0299390A98CE072C5F2FE9EC0 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, RuntimeObject* ___bufferPool0, int32_t ___appendLength1, const RuntimeMethod* method)
{
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___bufferPool0;
		int32_t L_1 = __this->get__position_1();
		int32_t L_2 = ___appendLength1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = BufferUtils_RentBuffer_m4571362D52D6FA4B460A644F8FFA669102B842D1(L_0, ((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), (int32_t)2)), /*hidden argument*/NULL);
		V_0 = L_3;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_4 = __this->get__buffer_0();
		if (!L_4)
		{
			goto IL_0037;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = __this->get__buffer_0();
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_6 = V_0;
		int32_t L_7 = __this->get__position_1();
		Array_Copy_m40103AA97DC582C557B912CF4BBE86A4D166F803((RuntimeArray *)(RuntimeArray *)L_5, (RuntimeArray *)(RuntimeArray *)L_6, L_7, /*hidden argument*/NULL);
		RuntimeObject* L_8 = ___bufferPool0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = __this->get__buffer_0();
		BufferUtils_ReturnBuffer_m8CED72FDBE1C197A91AE32EC7C89D2A8B94FFA4D(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0037:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_10 = V_0;
		__this->set__buffer_0(L_10);
		return;
	}
}
IL2CPP_EXTERN_C  void StringBuffer_EnsureSize_m76D11C8EED77ACD0299390A98CE072C5F2FE9EC0_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___bufferPool0, int32_t ___appendLength1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	StringBuffer_EnsureSize_m76D11C8EED77ACD0299390A98CE072C5F2FE9EC0(_thisAdjusted, ___bufferPool0, ___appendLength1, method);
}
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuffer_ToString_m10B8FF428EAE38BBC65EEC7809ADC392532B5927 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		String_t* L_1 = StringBuffer_ToString_m88EAF73086605E7A0C898D962CA6B5CF8A6B0F07((StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *)__this, 0, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  String_t* StringBuffer_ToString_m10B8FF428EAE38BBC65EEC7809ADC392532B5927_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	return StringBuffer_ToString_m10B8FF428EAE38BBC65EEC7809ADC392532B5927(_thisAdjusted, method);
}
// System.String Newtonsoft.Json.Utilities.StringBuffer::ToString(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuffer_ToString_m88EAF73086605E7A0C898D962CA6B5CF8A6B0F07 (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get__buffer_0();
		int32_t L_1 = ___start0;
		int32_t L_2 = ___length1;
		String_t* L_3 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* StringBuffer_ToString_m88EAF73086605E7A0C898D962CA6B5CF8A6B0F07_AdjustorThunk (RuntimeObject * __this, int32_t ___start0, int32_t ___length1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	return StringBuffer_ToString_m88EAF73086605E7A0C898D962CA6B5CF8A6B0F07(_thisAdjusted, ___start0, ___length1, method);
}
// System.Char[] Newtonsoft.Json.Utilities.StringBuffer::get_InternalBuffer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* StringBuffer_get_InternalBuffer_mF41DB26CCDD88E4ACE7B65840ADB74BF5EEE748A (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get__buffer_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* StringBuffer_get_InternalBuffer_mF41DB26CCDD88E4ACE7B65840ADB74BF5EEE748A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * _thisAdjusted = reinterpret_cast<StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 *>(__this + _offset);
	return StringBuffer_get_InternalBuffer_mF41DB26CCDD88E4ACE7B65840ADB74BF5EEE748A_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::get_CamelCaseText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringEnumConverter_get_CamelCaseText_m6FAE5CD5B17B260B07290EF17A3A299CF27CF455 (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CCamelCaseTextU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::get_AllowIntegerValues()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringEnumConverter_get_AllowIntegerValues_m2373FC3B126C386FFD4BDB64E65B4175E44EFE45 (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowIntegerValuesU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::set_AllowIntegerValues(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEnumConverter_set_AllowIntegerValues_mEACC7F32E56720B5672D222F6F091D725CCD9AD7 (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAllowIntegerValuesU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEnumConverter__ctor_mB7C19A0074AF05D80E0782AFF3D4D7CFA1B7C199 (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, const RuntimeMethod* method)
{
	{
		JsonConverter__ctor_mBE413F963C1E1D20875BCFE94DB01E09836EA97B(__this, /*hidden argument*/NULL);
		StringEnumConverter_set_AllowIntegerValues_mEACC7F32E56720B5672D222F6F091D725CCD9AD7_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Converters.StringEnumConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringEnumConverter_WriteJson_m8DC9F8D789673C3177069391003E74A76896E132 (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * ___writer0, RuntimeObject * ___value1, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringEnumConverter_WriteJson_m8DC9F8D789673C3177069391003E74A76896E132_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enum_t23B90B40F60E677A8025267341651C94AE079CDA * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	{
		RuntimeObject * L_0 = ___value1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = ___writer0;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(21 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, L_1);
		return;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___value1;
		V_0 = ((Enum_t23B90B40F60E677A8025267341651C94AE079CDA *)CastclassClass((RuntimeObject*)L_2, Enum_t23B90B40F60E677A8025267341651C94AE079CDA_il2cpp_TypeInfo_var));
		Enum_t23B90B40F60E677A8025267341651C94AE079CDA * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = Enum_ToString_m4F8C0882A819B1D1E3286920D14CC649200F24A1(L_3, _stringLiteral3DCC6243286938BE75C3FA773B9BA71160A2E869, /*hidden argument*/NULL);
		V_1 = L_4;
		String_t* L_5 = V_1;
		NullCheck(L_5);
		Il2CppChar L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_5, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_7 = Char_IsNumber_m1575CB90219C78EABADD70B3E53D53522CB0BB9D(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0036;
		}
	}
	{
		String_t* L_8 = V_1;
		NullCheck(L_8);
		Il2CppChar L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, 0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)45)))))
		{
			goto IL_003e;
		}
	}

IL_0036:
	{
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_10 = ___writer0;
		RuntimeObject * L_11 = ___value1;
		NullCheck(L_10);
		VirtActionInvoker1< RuntimeObject * >::Invoke(62 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Object) */, L_10, L_11);
		return;
	}

IL_003e:
	{
		Enum_t23B90B40F60E677A8025267341651C94AE079CDA * L_12 = V_0;
		NullCheck(L_12);
		Type_t * L_13 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_12, /*hidden argument*/NULL);
		String_t* L_14 = V_1;
		bool L_15 = StringEnumConverter_get_CamelCaseText_m6FAE5CD5B17B260B07290EF17A3A299CF27CF455_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t1788B4D6282C41E4BAF4456347682E84CDF01073_il2cpp_TypeInfo_var);
		String_t* L_16 = EnumUtils_ToEnumName_m3C314BD356B95F38B62417D537E0D2AFC51464A1(L_13, L_14, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_17 = ___writer0;
		String_t* L_18 = V_2;
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(25 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_17, L_18);
		return;
	}
}
// System.Object Newtonsoft.Json.Converters.StringEnumConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StringEnumConverter_ReadJson_m8CBF3E38859B6EE0D34877D203E3A15759E516E7 (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringEnumConverter_ReadJson_m8CBF3E38859B6EE0D34877D203E3A15759E516E7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Type_t * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Type_t * G_B7_0 = NULL;
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_002b;
		}
	}
	{
		Type_t * L_2 = ___objectType1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		bool L_3 = ReflectionUtils_IsNullableType_m087178E090D00C75843BB2F93A7CAA414FEFAFB6(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0029;
		}
	}
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_4 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_5 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		Type_t * L_6 = ___objectType1;
		String_t* L_7 = StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D(_stringLiteral27D252BCBD1DF46C936D6761666B18C66CA086E0, L_5, L_6, /*hidden argument*/NULL);
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_8 = JsonSerializationException_Create_m59D9D0A78A9893C93F966A7ADF83DF696415D38A(L_4, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, StringEnumConverter_ReadJson_m8CBF3E38859B6EE0D34877D203E3A15759E516E7_RuntimeMethod_var);
	}

IL_0029:
	{
		return NULL;
	}

IL_002b:
	{
		Type_t * L_9 = ___objectType1;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		bool L_10 = ReflectionUtils_IsNullableType_m087178E090D00C75843BB2F93A7CAA414FEFAFB6(L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		bool L_11 = V_0;
		if (L_11)
		{
			goto IL_0038;
		}
	}
	{
		Type_t * L_12 = ___objectType1;
		G_B7_0 = L_12;
		goto IL_003e;
	}

IL_0038:
	{
		Type_t * L_13 = ___objectType1;
		Type_t * L_14 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_13, /*hidden argument*/NULL);
		G_B7_0 = L_14;
	}

IL_003e:
	{
		V_1 = G_B7_0;
	}

IL_003f:
	try
	{ // begin try (depth: 1)
		{
			JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_15 = ___reader0;
			NullCheck(L_15);
			int32_t L_16 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_15);
			if ((!(((uint32_t)L_16) == ((uint32_t)((int32_t)9)))))
			{
				goto IL_0061;
			}
		}

IL_0049:
		{
			JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_17 = ___reader0;
			NullCheck(L_17);
			RuntimeObject * L_18 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_17);
			NullCheck(L_18);
			String_t* L_19 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_18);
			bool L_20 = V_0;
			Type_t * L_21 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(EnumUtils_t1788B4D6282C41E4BAF4456347682E84CDF01073_il2cpp_TypeInfo_var);
			RuntimeObject * L_22 = EnumUtils_ParseEnumName_mB751E3EE2A360E26CE4A573952DC4334DCB7AE73(L_19, L_20, L_21, /*hidden argument*/NULL);
			V_2 = L_22;
			goto IL_00e9;
		}

IL_0061:
		{
			JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_23 = ___reader0;
			NullCheck(L_23);
			int32_t L_24 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_23);
			if ((!(((uint32_t)L_24) == ((uint32_t)7))))
			{
				goto IL_00a2;
			}
		}

IL_006a:
		{
			bool L_25 = StringEnumConverter_get_AllowIntegerValues_m2373FC3B126C386FFD4BDB64E65B4175E44EFE45_inline(__this, /*hidden argument*/NULL);
			if (L_25)
			{
				goto IL_008e;
			}
		}

IL_0072:
		{
			JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_26 = ___reader0;
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_27 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_28 = ___reader0;
			NullCheck(L_28);
			RuntimeObject * L_29 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_28);
			String_t* L_30 = StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D(_stringLiteralD1545CFDAAF7A5965985B205CE1C592FF9780059, L_27, L_29, /*hidden argument*/NULL);
			JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_31 = JsonSerializationException_Create_m59D9D0A78A9893C93F966A7ADF83DF696415D38A(L_26, L_30, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_31, StringEnumConverter_ReadJson_m8CBF3E38859B6EE0D34877D203E3A15759E516E7_RuntimeMethod_var);
		}

IL_008e:
		{
			JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_32 = ___reader0;
			NullCheck(L_32);
			RuntimeObject * L_33 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_32);
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_34 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_35 = V_1;
			IL2CPP_RUNTIME_CLASS_INIT(ConvertUtils_t3E3908B3E0EB1A2095A846BC77BF0331866E03C3_il2cpp_TypeInfo_var);
			RuntimeObject * L_36 = ConvertUtils_ConvertOrCast_m7862E65C180FF18A2F4847F8051C181290AEDDA8(L_33, L_34, L_35, /*hidden argument*/NULL);
			V_2 = L_36;
			goto IL_00e9;
		}

IL_00a2:
		{
			goto IL_00c8;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_00a4;
		throw e;
	}

CATCH_00a4:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_37 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_38 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_39 = ___reader0;
		NullCheck(L_39);
		RuntimeObject * L_40 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_39);
		String_t* L_41 = MiscellaneousUtils_FormatValueForPrint_mFFFDA40B3A3DA1DBD8F875A305D995A430BC700F(L_40, /*hidden argument*/NULL);
		Type_t * L_42 = ___objectType1;
		String_t* L_43 = StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8(_stringLiteral34AC5C40D830EF0A8EF122F54B008863A6142239, L_38, L_41, L_42, /*hidden argument*/NULL);
		Exception_t * L_44 = V_3;
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_45 = JsonSerializationException_Create_m55E8DF615AD31911F8A5BBFDED20ED83549BD64E(L_37, L_43, L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, StringEnumConverter_ReadJson_m8CBF3E38859B6EE0D34877D203E3A15759E516E7_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00c8:
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_46 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_47 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_48 = ___reader0;
		NullCheck(L_48);
		int32_t L_49 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_48);
		int32_t L_50 = L_49;
		RuntimeObject * L_51 = Box(JsonToken_t63CB837C9C2C9D9B938921D92B457C8C56246314_il2cpp_TypeInfo_var, &L_50);
		String_t* L_52 = StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D(_stringLiteral5CA9455F82225506E9807EBEA47D2D77C4B0357C, L_47, L_51, /*hidden argument*/NULL);
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_53 = JsonSerializationException_Create_m59D9D0A78A9893C93F966A7ADF83DF696415D38A(L_46, L_52, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_53, StringEnumConverter_ReadJson_m8CBF3E38859B6EE0D34877D203E3A15759E516E7_RuntimeMethod_var);
	}

IL_00e9:
	{
		RuntimeObject * L_54 = V_2;
		return L_54;
	}
}
// System.Boolean Newtonsoft.Json.Converters.StringEnumConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringEnumConverter_CanConvert_m6BA1E7101AFFE136FA3C8AF768FB53FAF6D7B22C (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringEnumConverter_CanConvert_m6BA1E7101AFFE136FA3C8AF768FB53FAF6D7B22C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * G_B3_0 = NULL;
	{
		Type_t * L_0 = ___objectType0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		bool L_1 = ReflectionUtils_IsNullableType_m087178E090D00C75843BB2F93A7CAA414FEFAFB6(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		Type_t * L_2 = ___objectType0;
		G_B3_0 = L_2;
		goto IL_0011;
	}

IL_000b:
	{
		Type_t * L_3 = ___objectType0;
		Type_t * L_4 = Nullable_GetUnderlyingType_mC5699E7E11E1AFE25365CAB564A48F0193318629(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_0011:
	{
		bool L_5 = TypeExtensions_IsEnum_m3D3EA9AF4638A68716201C314A1C75C0D0FE6CAA(G_B3_0, /*hidden argument*/NULL);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringReference
IL2CPP_EXTERN_C void StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshal_pinvoke(const StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C& unmarshaled, StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshaled_pinvoke& marshaled)
{
	if (unmarshaled.get__chars_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__chars_Length = (unmarshaled.get__chars_0())->max_length;
		marshaled.____chars_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__chars_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__chars_Length); i++)
		{
			(marshaled.____chars_0)[i] = static_cast<uint8_t>((unmarshaled.get__chars_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____chars_0 = NULL;
	}
	marshaled.____startIndex_1 = unmarshaled.get__startIndex_1();
	marshaled.____length_2 = unmarshaled.get__length_2();
}
IL2CPP_EXTERN_C void StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshal_pinvoke_back(const StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshaled_pinvoke& marshaled, StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____chars_0 != NULL)
	{
		if (unmarshaled.get__chars_0() == NULL)
		{
			unmarshaled.set__chars_0(reinterpret_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__chars_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__chars_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____chars_0)[i]));
		}
	}
	int32_t unmarshaled__startIndex_temp_1 = 0;
	unmarshaled__startIndex_temp_1 = marshaled.____startIndex_1;
	unmarshaled.set__startIndex_1(unmarshaled__startIndex_temp_1);
	int32_t unmarshaled__length_temp_2 = 0;
	unmarshaled__length_temp_2 = marshaled.____length_2;
	unmarshaled.set__length_2(unmarshaled__length_temp_2);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringReference
IL2CPP_EXTERN_C void StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshal_pinvoke_cleanup(StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshaled_pinvoke& marshaled)
{
	if (marshaled.____chars_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____chars_0);
		marshaled.____chars_0 = NULL;
	}
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.StringReference
IL2CPP_EXTERN_C void StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshal_com(const StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C& unmarshaled, StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshaled_com& marshaled)
{
	if (unmarshaled.get__chars_0() != NULL)
	{
		il2cpp_array_size_t _unmarshaled__chars_Length = (unmarshaled.get__chars_0())->max_length;
		marshaled.____chars_0 = il2cpp_codegen_marshal_allocate_array<uint8_t>(_unmarshaled__chars_Length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_unmarshaled__chars_Length); i++)
		{
			(marshaled.____chars_0)[i] = static_cast<uint8_t>((unmarshaled.get__chars_0())->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
		}
	}
	else
	{
		marshaled.____chars_0 = NULL;
	}
	marshaled.____startIndex_1 = unmarshaled.get__startIndex_1();
	marshaled.____length_2 = unmarshaled.get__length_2();
}
IL2CPP_EXTERN_C void StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshal_com_back(const StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshaled_com& marshaled, StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	if (marshaled.____chars_0 != NULL)
	{
		if (unmarshaled.get__chars_0() == NULL)
		{
			unmarshaled.set__chars_0(reinterpret_cast<CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*>((CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, 1)));
		}
		il2cpp_array_size_t _arrayLength = (unmarshaled.get__chars_0())->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			(unmarshaled.get__chars_0())->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), static_cast<Il2CppChar>((marshaled.____chars_0)[i]));
		}
	}
	int32_t unmarshaled__startIndex_temp_1 = 0;
	unmarshaled__startIndex_temp_1 = marshaled.____startIndex_1;
	unmarshaled.set__startIndex_1(unmarshaled__startIndex_temp_1);
	int32_t unmarshaled__length_temp_2 = 0;
	unmarshaled__length_temp_2 = marshaled.____length_2;
	unmarshaled.set__length_2(unmarshaled__length_temp_2);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.StringReference
IL2CPP_EXTERN_C void StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshal_com_cleanup(StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C_marshaled_com& marshaled)
{
	if (marshaled.____chars_0 != NULL)
	{
		il2cpp_codegen_marshal_free(marshaled.____chars_0);
		marshaled.____chars_0 = NULL;
	}
}
// System.Char Newtonsoft.Json.Utilities.StringReference::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar StringReference_get_Item_m34C3ABEC482DD4EC5541D0A56EC05D05F669B0A0 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, int32_t ___i0, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get__chars_0();
		int32_t L_1 = ___i0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		uint16_t L_3 = (uint16_t)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C  Il2CppChar StringReference_get_Item_m34C3ABEC482DD4EC5541D0A56EC05D05F669B0A0_AdjustorThunk (RuntimeObject * __this, int32_t ___i0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * _thisAdjusted = reinterpret_cast<StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *>(__this + _offset);
	return StringReference_get_Item_m34C3ABEC482DD4EC5541D0A56EC05D05F669B0A0(_thisAdjusted, ___i0, method);
}
// System.Char[] Newtonsoft.Json.Utilities.StringReference::get_Chars()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* StringReference_get_Chars_m5EF63176FDB3554674E394261BE5786170C47024 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get__chars_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* StringReference_get_Chars_m5EF63176FDB3554674E394261BE5786170C47024_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * _thisAdjusted = reinterpret_cast<StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *>(__this + _offset);
	return StringReference_get_Chars_m5EF63176FDB3554674E394261BE5786170C47024_inline(_thisAdjusted, method);
}
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_StartIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringReference_get_StartIndex_mB09EFAA44487DB78CF15BDF61052689823A4C2C9 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__startIndex_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StringReference_get_StartIndex_mB09EFAA44487DB78CF15BDF61052689823A4C2C9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * _thisAdjusted = reinterpret_cast<StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *>(__this + _offset);
	return StringReference_get_StartIndex_mB09EFAA44487DB78CF15BDF61052689823A4C2C9_inline(_thisAdjusted, method);
}
// System.Int32 Newtonsoft.Json.Utilities.StringReference::get_Length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringReference_get_Length_m194CFDC809C99311F4040820C9F4A3B5E5F77EA4 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__length_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C  int32_t StringReference_get_Length_m194CFDC809C99311F4040820C9F4A3B5E5F77EA4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * _thisAdjusted = reinterpret_cast<StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *>(__this + _offset);
	return StringReference_get_Length_m194CFDC809C99311F4040820C9F4A3B5E5F77EA4_inline(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.StringReference::.ctor(System.Char[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringReference__ctor_m3AE890FED005EFC9FF5CDF3C7F740E743168B616 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___chars0;
		__this->set__chars_0(L_0);
		int32_t L_1 = ___startIndex1;
		__this->set__startIndex_1(L_1);
		int32_t L_2 = ___length2;
		__this->set__length_2(L_2);
		return;
	}
}
IL2CPP_EXTERN_C  void StringReference__ctor_m3AE890FED005EFC9FF5CDF3C7F740E743168B616_AdjustorThunk (RuntimeObject * __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___chars0, int32_t ___startIndex1, int32_t ___length2, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * _thisAdjusted = reinterpret_cast<StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *>(__this + _offset);
	StringReference__ctor_m3AE890FED005EFC9FF5CDF3C7F740E743168B616(_thisAdjusted, ___chars0, ___startIndex1, ___length2, method);
}
// System.String Newtonsoft.Json.Utilities.StringReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringReference_ToString_mFE493A141754B54CA6B7DC1903730740DAB2A881 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get__chars_0();
		int32_t L_1 = __this->get__startIndex_1();
		int32_t L_2 = __this->get__length_2();
		String_t* L_3 = String_CreateString_m16F181739FD8BA877868803DE2CE0EF0A4668D0E(NULL, L_0, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C  String_t* StringReference_ToString_mFE493A141754B54CA6B7DC1903730740DAB2A881_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * _thisAdjusted = reinterpret_cast<StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *>(__this + _offset);
	return StringReference_ToString_mFE493A141754B54CA6B7DC1903730740DAB2A881(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Newtonsoft.Json.Utilities.StringReferenceExtensions::IndexOf(Newtonsoft.Json.Utilities.StringReference,System.Char,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StringReferenceExtensions_IndexOf_m0521F7953B075BB955750D6AD8053D53D7ECD6AC (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C  ___s0, Il2CppChar ___c1, int32_t ___startIndex2, int32_t ___length3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringReferenceExtensions_IndexOf_m0521F7953B075BB955750D6AD8053D53D7ECD6AC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = StringReference_get_Chars_m5EF63176FDB3554674E394261BE5786170C47024_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		Il2CppChar L_1 = ___c1;
		int32_t L_2 = StringReference_get_StartIndex_mB09EFAA44487DB78CF15BDF61052689823A4C2C9_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		int32_t L_3 = ___startIndex2;
		int32_t L_4 = ___length3;
		int32_t L_5 = Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m50B1A0252CC83A50F60CD54CA63ED5FFDB91A945(L_0, L_1, ((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)), L_4, /*hidden argument*/Array_IndexOf_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_m50B1A0252CC83A50F60CD54CA63ED5FFDB91A945_RuntimeMethod_var);
		V_0 = L_5;
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_001e;
		}
	}
	{
		return (-1);
	}

IL_001e:
	{
		int32_t L_7 = V_0;
		int32_t L_8 = StringReference_get_StartIndex_mB09EFAA44487DB78CF15BDF61052689823A4C2C9_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		return ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8));
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::StartsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringReferenceExtensions_StartsWith_m6D9020568686A182328C1F71CFC1800A870CFEB3 (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C  ___s0, String_t* ___text1, const RuntimeMethod* method)
{
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___text1;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m194CFDC809C99311F4040820C9F4A3B5E5F77EA4_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = StringReference_get_Chars_m5EF63176FDB3554674E394261BE5786170C47024_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_0037;
	}

IL_001d:
	{
		String_t* L_4 = ___text1;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		Il2CppChar L_6 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_4, L_5, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = V_0;
		int32_t L_8 = V_1;
		int32_t L_9 = StringReference_get_StartIndex_mB09EFAA44487DB78CF15BDF61052689823A4C2C9_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)L_9));
		uint16_t L_11 = (uint16_t)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		if ((((int32_t)L_6) == ((int32_t)L_11)))
		{
			goto IL_0033;
		}
	}
	{
		return (bool)0;
	}

IL_0033:
	{
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0037:
	{
		int32_t L_13 = V_1;
		String_t* L_14 = ___text1;
		NullCheck(L_14);
		int32_t L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		if ((((int32_t)L_13) < ((int32_t)L_15)))
		{
			goto IL_001d;
		}
	}
	{
		return (bool)1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringReferenceExtensions::EndsWith(Newtonsoft.Json.Utilities.StringReference,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringReferenceExtensions_EndsWith_mD6F3B9EEC429EAB4F6E05E69EECF814DDF3F764B (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C  ___s0, String_t* ___text1, const RuntimeMethod* method)
{
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	{
		String_t* L_0 = ___text1;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		int32_t L_2 = StringReference_get_Length_m194CFDC809C99311F4040820C9F4A3B5E5F77EA4_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0011;
		}
	}
	{
		return (bool)0;
	}

IL_0011:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_3 = StringReference_get_Chars_m5EF63176FDB3554674E394261BE5786170C47024_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = StringReference_get_StartIndex_mB09EFAA44487DB78CF15BDF61052689823A4C2C9_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		int32_t L_5 = StringReference_get_Length_m194CFDC809C99311F4040820C9F4A3B5E5F77EA4_inline((StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C *)(&___s0), /*hidden argument*/NULL);
		String_t* L_6 = ___text1;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		V_1 = ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)), (int32_t)L_7));
		V_2 = 0;
		goto IL_0048;
	}

IL_0034:
	{
		String_t* L_8 = ___text1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		Il2CppChar L_10 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_8, L_9, /*hidden argument*/NULL);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = V_0;
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)L_13));
		uint16_t L_15 = (uint16_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		if ((((int32_t)L_10) == ((int32_t)L_15)))
		{
			goto IL_0044;
		}
	}
	{
		return (bool)0;
	}

IL_0044:
	{
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0048:
	{
		int32_t L_17 = V_2;
		String_t* L_18 = ___text1;
		NullCheck(L_18);
		int32_t L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		if ((((int32_t)L_17) < ((int32_t)L_19)))
		{
			goto IL_0034;
		}
	}
	{
		return (bool)1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg02;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		String_t* L_5 = StringUtils_FormatWith_mF72FDDA3EB515E398CA2D73E829FC7F8AD4F1D2B(L_0, L_1, L_3, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg02;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		RuntimeObject * L_6 = ___arg13;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		String_t* L_7 = StringUtils_FormatWith_mF72FDDA3EB515E398CA2D73E829FC7F8AD4F1D2B(L_0, L_1, L_5, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_m4FCAF6C2F661AFA5DECB79DDD2F4C1C63933AC02 (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_m4FCAF6C2F661AFA5DECB79DDD2F4C1C63933AC02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)3);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg02;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		RuntimeObject * L_6 = ___arg13;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		RuntimeObject * L_8 = ___arg24;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		String_t* L_9 = StringUtils_FormatWith_mF72FDDA3EB515E398CA2D73E829FC7F8AD4F1D2B(L_0, L_1, L_7, /*hidden argument*/NULL);
		return L_9;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mFFF18C22B96311F0FF31E7711F474AB79C1D96EF (String_t* ___format0, RuntimeObject* ___provider1, RuntimeObject * ___arg02, RuntimeObject * ___arg13, RuntimeObject * ___arg24, RuntimeObject * ___arg35, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_mFFF18C22B96311F0FF31E7711F474AB79C1D96EF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		RuntimeObject* L_1 = ___provider1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg02;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = L_3;
		RuntimeObject * L_6 = ___arg13;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, L_6);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_5;
		RuntimeObject * L_8 = ___arg24;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)L_8);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_9 = L_7;
		RuntimeObject * L_10 = ___arg35;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, L_10);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_10);
		String_t* L_11 = StringUtils_FormatWith_mF72FDDA3EB515E398CA2D73E829FC7F8AD4F1D2B(L_0, L_1, L_9, /*hidden argument*/NULL);
		return L_11;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::FormatWith(System.String,System.IFormatProvider,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_FormatWith_mF72FDDA3EB515E398CA2D73E829FC7F8AD4F1D2B (String_t* ___format0, RuntimeObject* ___provider1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_FormatWith_mF72FDDA3EB515E398CA2D73E829FC7F8AD4F1D2B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___format0;
		ValidationUtils_ArgumentNotNull_mA8AC1AD3B50DBCFC06ABF784BB1311468771A495(L_0, _stringLiteral75C9716749EA210206E3467390B7A11F3F33DDFA, /*hidden argument*/NULL);
		RuntimeObject* L_1 = ___provider1;
		String_t* L_2 = ___format0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args2;
		String_t* L_4 = String_Format_mF96F0621DC567D09C07F1EAC66B31AD261A9DC21(L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.IO.StringWriter Newtonsoft.Json.Utilities.StringUtils::CreateStringWriter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * StringUtils_CreateStringWriter_mECD1F544CCFBE0B6981309D5820C726B5BA7D629 (int32_t ___capacity0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_CreateStringWriter_mECD1F544CCFBE0B6981309D5820C726B5BA7D629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___capacity0;
		StringBuilder_t * L_1 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_mEDFFE2D378A15F6DAB54D52661C84C1B52E7BA2E(L_1, L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_2 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_3 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mB18BB8248DA5C0677EF9312B26C16D06898E9165(L_3, L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Newtonsoft.Json.Utilities.StringUtils::ToCharAsUnicode(System.Char,System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringUtils_ToCharAsUnicode_mB1A7A9E1E08E5D6C9FDDB3503C94A0478BCD7A83 (Il2CppChar ___c0, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___buffer1, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = ___buffer1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)92));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = ___buffer1;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(1), (Il2CppChar)((int32_t)117));
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = ___buffer1;
		Il2CppChar L_3 = ___c0;
		Il2CppChar L_4 = MathUtils_IntToHex_m47CB9EFD50D3ABF2C2F3E9E19F2B1438197B6286(((int32_t)((int32_t)((int32_t)((int32_t)L_3>>(int32_t)((int32_t)12)))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(2), (Il2CppChar)L_4);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_5 = ___buffer1;
		Il2CppChar L_6 = ___c0;
		Il2CppChar L_7 = MathUtils_IntToHex_m47CB9EFD50D3ABF2C2F3E9E19F2B1438197B6286(((int32_t)((int32_t)((int32_t)((int32_t)L_6>>(int32_t)8))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(3), (Il2CppChar)L_7);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_8 = ___buffer1;
		Il2CppChar L_9 = ___c0;
		Il2CppChar L_10 = MathUtils_IntToHex_m47CB9EFD50D3ABF2C2F3E9E19F2B1438197B6286(((int32_t)((int32_t)((int32_t)((int32_t)L_9>>(int32_t)4))&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(4), (Il2CppChar)L_10);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_11 = ___buffer1;
		Il2CppChar L_12 = ___c0;
		Il2CppChar L_13 = MathUtils_IntToHex_m47CB9EFD50D3ABF2C2F3E9E19F2B1438197B6286(((int32_t)((int32_t)L_12&(int32_t)((int32_t)15))), /*hidden argument*/NULL);
		NullCheck(L_11);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(5), (Il2CppChar)L_13);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.StringUtils::ToCamelCase(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringUtils_ToCamelCase_mE26865FEF3518BD16F38B0DDE4E2E915CAD0F7C3 (String_t* ___s0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_ToCamelCase_mE26865FEF3518BD16F38B0DDE4E2E915CAD0F7C3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	Il2CppChar V_3 = 0x0;
	{
		String_t* L_0 = ___s0;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0016;
		}
	}
	{
		String_t* L_2 = ___s0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, 0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_4 = Char_IsUpper_m72EAD892A02AD10D2050EA09BF3735DDE6921892(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0018;
		}
	}

IL_0016:
	{
		String_t* L_5 = ___s0;
		return L_5;
	}

IL_0018:
	{
		String_t* L_6 = ___s0;
		NullCheck(L_6);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_7 = String_ToCharArray_m33E93AEB7086CBEBDFA5730EAAC49686F144089C(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		V_1 = 0;
		goto IL_0064;
	}

IL_0023:
	{
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0031;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		uint16_t L_12 = (uint16_t)(L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_13 = Char_IsUpper_m72EAD892A02AD10D2050EA09BF3735DDE6921892(L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_006a;
		}
	}

IL_0031:
	{
		int32_t L_14 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_15 = V_0;
		NullCheck(L_15);
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))? 1 : 0);
		int32_t L_16 = V_1;
		bool L_17 = V_2;
		if (!((int32_t)((int32_t)((((int32_t)L_16) > ((int32_t)0))? 1 : 0)&(int32_t)L_17)))
		{
			goto IL_004e;
		}
	}
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_18 = V_0;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
		uint16_t L_21 = (uint16_t)(L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_22 = Char_IsUpper_m72EAD892A02AD10D2050EA09BF3735DDE6921892(L_21, /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_006a;
		}
	}

IL_004e:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_23 = V_0;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		uint16_t L_26 = (uint16_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_27 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		Il2CppChar L_28 = Char_ToLower_m42C052EB06C3F461C8CEBAD492E102EB721FDECE(L_26, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = V_0;
		int32_t L_30 = V_1;
		Il2CppChar L_31 = V_3;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (Il2CppChar)L_31);
		int32_t L_32 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_0064:
	{
		int32_t L_33 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_34 = V_0;
		NullCheck(L_34);
		if ((((int32_t)L_33) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length)))))))
		{
			goto IL_0023;
		}
	}

IL_006a:
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_35 = V_0;
		String_t* L_36 = String_CreateString_mC7F57CE6ED768CF86591160424FE55D5CBA7C344(NULL, L_35, /*hidden argument*/NULL);
		return L_36;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsHighSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_IsHighSurrogate_mF2BB7B9F8B5B5AE318D47AC53DA3DF1F4D759542 (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_IsHighSurrogate_mF2BB7B9F8B5B5AE318D47AC53DA3DF1F4D759542_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsHighSurrogate_m7BECD1C98C902946F069D8936F8A557F1F7DFF01(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::IsLowSurrogate(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_IsLowSurrogate_mFB8EFC08BA665DD434D3752CFA6642393EFEA55D (Il2CppChar ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StringUtils_IsLowSurrogate_mFB8EFC08BA665DD434D3752CFA6642393EFEA55D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Il2CppChar L_0 = ___c0;
		IL2CPP_RUNTIME_CLASS_INIT(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_il2cpp_TypeInfo_var);
		bool L_1 = Char_IsLowSurrogate_m44FA7AA923FDA925E1D536F3DA0A7E1E049E936E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::StartsWith(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_StartsWith_mE4107459C8D1B42D395CB2238CC00C24411B4640 (String_t* ___source0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = ___source0;
		NullCheck(L_2);
		Il2CppChar L_3 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, 0, /*hidden argument*/NULL);
		Il2CppChar L_4 = ___value1;
		return (bool)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0);
	}

IL_0014:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.StringUtils::EndsWith(System.String,System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StringUtils_EndsWith_m66FA0222A273889E4E523E10DE65E833F5536F58 (String_t* ___source0, Il2CppChar ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___source0;
		NullCheck(L_0);
		int32_t L_1 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_0, /*hidden argument*/NULL);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_2 = ___source0;
		String_t* L_3 = ___source0;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Il2CppChar L_5 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_2, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)), /*hidden argument*/NULL);
		Il2CppChar L_6 = ___value1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}

IL_001b:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.TraceJsonReader::.ctor(Newtonsoft.Json.JsonReader)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonReader__ctor_mDF664DDFC7FF1739F887F50E0CE389D056EC382A (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___innerReader0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TraceJsonReader__ctor_mDF664DDFC7FF1739F887F50E0CE389D056EC382A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		JsonReader__ctor_m538C842DADDC1A2123EC0A967DAE5B2D238B4FB9(__this, /*hidden argument*/NULL);
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = ___innerReader0;
		__this->set__innerReader_15(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mDF4AB6FD46E8B9824F2F7A9C26EA086A2C1AE5CF(L_2, L_1, /*hidden argument*/NULL);
		__this->set__sw_17(L_2);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_3 = __this->get__sw_17();
		String_t* L_4 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB62AA2CC6BFDA437017A321F61AE9B5B2FF52ADE, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_3, L_5);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_6 = __this->get__sw_17();
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_7 = (JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B *)il2cpp_codegen_object_new(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B_il2cpp_TypeInfo_var);
		JsonTextWriter__ctor_mC16FDDC0DAEC5D2B51445A44A40273E4E45D03C8(L_7, L_6, /*hidden argument*/NULL);
		__this->set__textWriter_16(L_7);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_8 = __this->get__textWriter_16();
		NullCheck(L_8);
		JsonWriter_set_Formatting_m095D00C9220A17CD8CF9A678804C7F53AA436D68(L_8, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.TraceJsonReader::GetDeserializedJsonMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TraceJsonReader_GetDeserializedJsonMessage_m0AE711BAFA1A2B758D450B50F5992D2DE714EED7 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_0 = __this->get__sw_17();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.TraceJsonReader::Read()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TraceJsonReader_Read_mB5B1144C2D86F9AA7E2BE7F332ACA7342D916838 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(10 /* System.Boolean Newtonsoft.Json.JsonReader::Read() */, L_0);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_2 = __this->get__textWriter_16();
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_3 = __this->get__innerReader_15();
		NullCheck(L_2);
		VirtActionInvoker4< JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, bool, bool, bool >::Invoke(16 /* System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean) */, L_2, L_3, (bool)0, (bool)0, (bool)1);
		return L_1;
	}
}
// System.Nullable`1<System.Int32> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsInt32()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  TraceJsonReader_ReadAsInt32_mDD9B61D65D8F0BFDC4D785CBD169A5C0B0E20BD4 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_1 = VirtFuncInvoker0< Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  >::Invoke(11 /* System.Nullable`1<System.Int32> Newtonsoft.Json.JsonReader::ReadAsInt32() */, L_0);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_2 = __this->get__textWriter_16();
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_3 = __this->get__innerReader_15();
		NullCheck(L_2);
		VirtActionInvoker4< JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, bool, bool, bool >::Invoke(16 /* System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean) */, L_2, L_3, (bool)0, (bool)0, (bool)1);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TraceJsonReader_ReadAsString_mDB0A396A74EE34E81D9510752177369AD220B95C (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String Newtonsoft.Json.JsonReader::ReadAsString() */, L_0);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_2 = __this->get__textWriter_16();
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_3 = __this->get__innerReader_15();
		NullCheck(L_2);
		VirtActionInvoker4< JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, bool, bool, bool >::Invoke(16 /* System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean) */, L_2, L_3, (bool)0, (bool)0, (bool)1);
		return L_1;
	}
}
// System.Byte[] Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsBytes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* TraceJsonReader_ReadAsBytes_mF34242EE6F6C15B4BCACEA72F6EC654279B8E954 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = VirtFuncInvoker0< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(13 /* System.Byte[] Newtonsoft.Json.JsonReader::ReadAsBytes() */, L_0);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_2 = __this->get__textWriter_16();
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_3 = __this->get__innerReader_15();
		NullCheck(L_2);
		VirtActionInvoker4< JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, bool, bool, bool >::Invoke(16 /* System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean) */, L_2, L_3, (bool)0, (bool)0, (bool)1);
		return L_1;
	}
}
// System.Nullable`1<System.Decimal> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsDecimal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  TraceJsonReader_ReadAsDecimal_m2866C8E8D0D8A1786B23940FFF3550809322D130 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  L_1 = VirtFuncInvoker0< Nullable_1_tD7EB7EB39E548910812AA4DC702F9C7E3E84A84E  >::Invoke(16 /* System.Nullable`1<System.Decimal> Newtonsoft.Json.JsonReader::ReadAsDecimal() */, L_0);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_2 = __this->get__textWriter_16();
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_3 = __this->get__innerReader_15();
		NullCheck(L_2);
		VirtActionInvoker4< JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, bool, bool, bool >::Invoke(16 /* System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean) */, L_2, L_3, (bool)0, (bool)0, (bool)1);
		return L_1;
	}
}
// System.Nullable`1<System.Double> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsDouble()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  TraceJsonReader_ReadAsDouble_mD59C86D67B8FC8AD056DFC9A7A7E55B9A1DCFB74 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  L_1 = VirtFuncInvoker0< Nullable_1_t75730434CAD4E48A4EE117588CFD586FFBCAC209  >::Invoke(14 /* System.Nullable`1<System.Double> Newtonsoft.Json.JsonReader::ReadAsDouble() */, L_0);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_2 = __this->get__textWriter_16();
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_3 = __this->get__innerReader_15();
		NullCheck(L_2);
		VirtActionInvoker4< JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, bool, bool, bool >::Invoke(16 /* System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean) */, L_2, L_3, (bool)0, (bool)0, (bool)1);
		return L_1;
	}
}
// System.Nullable`1<System.Boolean> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsBoolean()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  TraceJsonReader_ReadAsBoolean_m189B58C223EC61B7A0114228F697D07C2B376AD6 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  L_1 = VirtFuncInvoker0< Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  >::Invoke(15 /* System.Nullable`1<System.Boolean> Newtonsoft.Json.JsonReader::ReadAsBoolean() */, L_0);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_2 = __this->get__textWriter_16();
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_3 = __this->get__innerReader_15();
		NullCheck(L_2);
		VirtActionInvoker4< JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, bool, bool, bool >::Invoke(16 /* System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean) */, L_2, L_3, (bool)0, (bool)0, (bool)1);
		return L_1;
	}
}
// System.Nullable`1<System.DateTime> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsDateTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  TraceJsonReader_ReadAsDateTime_m31E9688C8F20CB5F1A3517A80EF27920679DFD1A (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  L_1 = VirtFuncInvoker0< Nullable_1_t70A8504898A1894C4480C80B2A7FAC6E7823F89D  >::Invoke(17 /* System.Nullable`1<System.DateTime> Newtonsoft.Json.JsonReader::ReadAsDateTime() */, L_0);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_2 = __this->get__textWriter_16();
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_3 = __this->get__innerReader_15();
		NullCheck(L_2);
		VirtActionInvoker4< JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, bool, bool, bool >::Invoke(16 /* System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean) */, L_2, L_3, (bool)0, (bool)0, (bool)1);
		return L_1;
	}
}
// System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.Serialization.TraceJsonReader::ReadAsDateTimeOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  TraceJsonReader_ReadAsDateTimeOffset_mDAEE1C904D638231A033EAC8DE603B42779AA3FD (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  L_1 = VirtFuncInvoker0< Nullable_1_t862AD0841486B81E2FD6C56B0467C57F00E804C7  >::Invoke(18 /* System.Nullable`1<System.DateTimeOffset> Newtonsoft.Json.JsonReader::ReadAsDateTimeOffset() */, L_0);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_2 = __this->get__textWriter_16();
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_3 = __this->get__innerReader_15();
		NullCheck(L_2);
		VirtActionInvoker4< JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 *, bool, bool, bool >::Invoke(16 /* System.Void Newtonsoft.Json.JsonWriter::WriteToken(Newtonsoft.Json.JsonReader,System.Boolean,System.Boolean,System.Boolean) */, L_2, L_3, (bool)0, (bool)0, (bool)1);
		return L_1;
	}
}
// System.Int32 Newtonsoft.Json.Serialization.TraceJsonReader::get_Depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TraceJsonReader_get_Depth_mE3AFA404FCA65349C5C5DCBC71F0F3770177DA3C (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(8 /* System.Int32 Newtonsoft.Json.JsonReader::get_Depth() */, L_0);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Serialization.TraceJsonReader::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TraceJsonReader_get_Path_m1F5468102FAA80E5B8DB599FD71A5B30F0E0CA60 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(9 /* System.String Newtonsoft.Json.JsonReader::get_Path() */, L_0);
		return L_1;
	}
}
// Newtonsoft.Json.JsonToken Newtonsoft.Json.Serialization.TraceJsonReader::get_TokenType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TraceJsonReader_get_TokenType_m3934A485BDEC03D4E11CFD340077E6B0DADBF6BD (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		return L_1;
	}
}
// System.Object Newtonsoft.Json.Serialization.TraceJsonReader::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TraceJsonReader_get_Value_mB8C60D4BBD15E4ECDBDE49556E9E07F55047F93E (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		RuntimeObject * L_1 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Serialization.TraceJsonReader::get_ValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TraceJsonReader_get_ValueType_mD2045D7D802F3759CB8DE2FB293AB76D3E16EF12 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(7 /* System.Type Newtonsoft.Json.JsonReader::get_ValueType() */, L_0);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonReader::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonReader_Close_mDB33FA7E4687365BDD88D0AFDEAD0253C1A3D1AF (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(20 /* System.Void Newtonsoft.Json.JsonReader::Close() */, L_0);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.TraceJsonReader::Newtonsoft.Json.IJsonLineInfo.HasLineInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m90913CA01160A53528846997BDA02BBFEF36123F (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_HasLineInfo_m90913CA01160A53528846997BDA02BBFEF36123F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IJsonLineInfo_t2AF80F82D378B1F09F75DD7734B607E71DAC5F61_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean Newtonsoft.Json.IJsonLineInfo::HasLineInfo() */, IJsonLineInfo_t2AF80F82D378B1F09F75DD7734B607E71DAC5F61_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}

IL_0016:
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Serialization.TraceJsonReader::Newtonsoft.Json.IJsonLineInfo.get_LineNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m3BF75683A19B5FC29E3D5290B5B3C1FA134C3148 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_get_LineNumber_m3BF75683A19B5FC29E3D5290B5B3C1FA134C3148_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IJsonLineInfo_t2AF80F82D378B1F09F75DD7734B607E71DAC5F61_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 Newtonsoft.Json.IJsonLineInfo::get_LineNumber() */, IJsonLineInfo_t2AF80F82D378B1F09F75DD7734B607E71DAC5F61_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
// System.Int32 Newtonsoft.Json.Serialization.TraceJsonReader::Newtonsoft.Json.IJsonLineInfo.get_LinePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m7B4B018D9ECFC2AD388057DD8F0215AB21183D06 (TraceJsonReader_tED1574838AC50AA33760F28CCA9246125C562F2B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TraceJsonReader_Newtonsoft_Json_IJsonLineInfo_get_LinePosition_m7B4B018D9ECFC2AD388057DD8F0215AB21183D06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = __this->get__innerReader_15();
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IJsonLineInfo_t2AF80F82D378B1F09F75DD7734B607E71DAC5F61_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (L_1)
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 Newtonsoft.Json.IJsonLineInfo::get_LinePosition() */, IJsonLineInfo_t2AF80F82D378B1F09F75DD7734B607E71DAC5F61_il2cpp_TypeInfo_var, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::.ctor(Newtonsoft.Json.JsonWriter)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter__ctor_m29B26F2DC7065ED209EB7F1BD7454D085A7C1C41 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * ___innerWriter0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TraceJsonWriter__ctor_m29B26F2DC7065ED209EB7F1BD7454D085A7C1C41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2_il2cpp_TypeInfo_var);
		JsonWriter__ctor_m831946FD2352BD57949E806795F738B790BF4471(__this, /*hidden argument*/NULL);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_0 = ___innerWriter0;
		__this->set__innerWriter_13(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_1 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_2 = (StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 *)il2cpp_codegen_object_new(StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839_il2cpp_TypeInfo_var);
		StringWriter__ctor_mDF4AB6FD46E8B9824F2F7A9C26EA086A2C1AE5CF(L_2, L_1, /*hidden argument*/NULL);
		__this->set__sw_15(L_2);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_3 = __this->get__sw_15();
		String_t* L_4 = Environment_get_NewLine_mD145C8EE917C986BAA7C5243DEFAF4D333C521B4(/*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral95C8A5370D26D671D01AC2995934B40AF9E59DB1, L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(14 /* System.Void System.IO.TextWriter::Write(System.String) */, L_3, L_5);
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_6 = __this->get__sw_15();
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_7 = (JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B *)il2cpp_codegen_object_new(JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B_il2cpp_TypeInfo_var);
		JsonTextWriter__ctor_mC16FDDC0DAEC5D2B51445A44A40273E4E45D03C8(L_7, L_6, /*hidden argument*/NULL);
		__this->set__textWriter_14(L_7);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_8 = __this->get__textWriter_14();
		NullCheck(L_8);
		JsonWriter_set_Formatting_m095D00C9220A17CD8CF9A678804C7F53AA436D68(L_8, 1, /*hidden argument*/NULL);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_9 = __this->get__textWriter_14();
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_10 = ___innerWriter0;
		NullCheck(L_10);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_11 = JsonWriter_get_Culture_mC42B914B29D7FEC2B0F98DE7AA32F289DB318F89(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		JsonWriter_set_Culture_mDEE561B11776B97A927F1300FF7B6A3ADE81B2CA_inline(L_9, L_11, /*hidden argument*/NULL);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_12 = __this->get__textWriter_14();
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_13 = ___innerWriter0;
		NullCheck(L_13);
		int32_t L_14 = JsonWriter_get_DateFormatHandling_m41BD1D20C51ECF8DA8202C37B62A9FF0E28823DD_inline(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		JsonWriter_set_DateFormatHandling_mDE99B2D5CE84B4848D5B986BCEDA0B3ECF022923(L_12, L_14, /*hidden argument*/NULL);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_15 = __this->get__textWriter_14();
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_16 = ___innerWriter0;
		NullCheck(L_16);
		String_t* L_17 = JsonWriter_get_DateFormatString_m69A32477FF1B1AF8DF997B4D018C24BD5825FCCB_inline(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		JsonWriter_set_DateFormatString_mF4ECA8F9127550A893C594291DBFBB0BA1B31F3F_inline(L_15, L_17, /*hidden argument*/NULL);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_18 = __this->get__textWriter_14();
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_19 = ___innerWriter0;
		NullCheck(L_19);
		int32_t L_20 = JsonWriter_get_DateTimeZoneHandling_mD0C65660E7AE6E3C2FA819B280CCB795B7A2728A_inline(L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		JsonWriter_set_DateTimeZoneHandling_m05E9A774E4CD7AFC7DB4F8F072C653360648BF20(L_18, L_20, /*hidden argument*/NULL);
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_21 = __this->get__textWriter_14();
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_22 = ___innerWriter0;
		NullCheck(L_22);
		int32_t L_23 = JsonWriter_get_FloatFormatHandling_mD88C6F4D05A2BA565E093D2D864537B3BB78FF52_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		JsonWriter_set_FloatFormatHandling_m0AED0049F5DCE536ED7C5B9D32EA996CC6B6D8A1(L_21, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.TraceJsonWriter::GetSerializedJsonMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TraceJsonWriter_GetSerializedJsonMessage_m5B843782EA9D7D098F54283024609893F47AC118 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, const RuntimeMethod* method)
{
	{
		StringWriter_t7BEF6B06B35BC25817D8BE28593FB52F0525B839 * L_0 = __this->get__sw_15();
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_0);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Decimal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m9BF104BFCC9361F1F1177B7DDDC55A5D0994AC9A (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  >::Invoke(38 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  >::Invoke(38 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Decimal) */, L_2, L_3);
		Decimal_t2978B229CA86D3B7BA66A0AEEE014E0DE4F940D7  L_4 = ___value0;
		JsonWriter_WriteValue_mC37C52C1891FE1988D9C92D8D55BB9E890B1B6ED(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m3E4B078F2B00FD5250754A6A66DC5973AD6CA60C (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		bool L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< bool >::Invoke(32 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		bool L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< bool >::Invoke(32 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Boolean) */, L_2, L_3);
		bool L_4 = ___value0;
		JsonWriter_WriteValue_m23C293A28ADF73EAC984FBFA034E995CA39C96C8(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_mAE9F6E644A236BD55983E01C96D04F2E8A92F3B8 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, uint8_t ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		uint8_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint8_t >::Invoke(36 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		uint8_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< uint8_t >::Invoke(36 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte) */, L_2, L_3);
		uint8_t L_4 = ___value0;
		JsonWriter_WriteValue_m97D7CA12924339EEDB30C971A6C94F93A8C430FE(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Nullable`1<System.Byte>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m6FE35B7C9F77BDD538F59AE2C597F27E1E155426 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A  ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A  L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A  >::Invoke(53 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Byte>) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A  L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A  >::Invoke(53 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Nullable`1<System.Byte>) */, L_2, L_3);
		Nullable_1_tB8731C5376343A257B20238BFA4DB19FB85B8C9A  L_4 = ___value0;
		JsonWriter_WriteValue_mAC90C70E3B38A618B91D7FDDF8F4C4CD9BD59FB9(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m9707DAACD55CB7D657F0971CB43B9228DC55609E (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, Il2CppChar ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		Il2CppChar L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Il2CppChar >::Invoke(35 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		Il2CppChar L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< Il2CppChar >::Invoke(35 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Char) */, L_2, L_3);
		Il2CppChar L_4 = ___value0;
		JsonWriter_WriteValue_m248832B7521A3E12DC721F129DCADA8A5E6B0D64(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m91400888E8FFDE94292C9F7B1FACEC38A92627B0 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(60 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[]) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* >::Invoke(60 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Byte[]) */, L_2, L_3);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___value0;
		JsonWriter_WriteValue_mEEE2D6400B690F240DC6E8B58AD3613DD6719821(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m0D48CE333EDDA2EEF769CB10E783215A805ED1F2 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  >::Invoke(39 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  >::Invoke(39 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTime) */, L_2, L_3);
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_4 = ___value0;
		JsonWriter_WriteValue_m65ADF4B7E727362C28EE741700A6B1B070379672(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.DateTimeOffset)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m93AC35D2DC22F752D361B42AB92E09BE043FB55B (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  >::Invoke(40 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTimeOffset) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  >::Invoke(40 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.DateTimeOffset) */, L_2, L_3);
		DateTimeOffset_t205B59B1EFB6646DCE3CC50553377BF6023615B5  L_4 = ___value0;
		JsonWriter_WriteValue_m0E6A04360432620F55CC03FF7E274ECF8171CD33(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m06D2926D295E1814C93DCB9468ADF5064897438C (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, double ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		double L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< double >::Invoke(31 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		double L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< double >::Invoke(31 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Double) */, L_2, L_3);
		double L_4 = ___value0;
		JsonWriter_WriteValue_m3ECA9D982522775E820520C0DEF96D5A10A7ABE9(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteUndefined()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteUndefined_m1D80B8C61BA78FE70E157994F1F461A43C6DA9D5 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(22 /* System.Void Newtonsoft.Json.JsonWriter::WriteUndefined() */, L_0);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = __this->get__innerWriter_13();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(22 /* System.Void Newtonsoft.Json.JsonWriter::WriteUndefined() */, L_1);
		JsonWriter_WriteUndefined_m3B0651930350243F73ACE48B331FEB7255B80878(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteNull_m1C114CBB5198BAD1346622F30F2E06536E6A67E7 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(21 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, L_0);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = __this->get__innerWriter_13();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(21 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, L_1);
		JsonWriter_WriteUndefined_m3B0651930350243F73ACE48B331FEB7255B80878(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m9CFECDBD50358F59CC88998F625E88D08137E25B (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, float ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		float L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(30 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		float L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< float >::Invoke(30 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Single) */, L_2, L_3);
		float L_4 = ___value0;
		JsonWriter_WriteValue_mBAD37C743F5E6B0E0CF3AD23B6C475BF651E7CCF(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Guid)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m8F557D0F46C8D9DFE5D77540E300E6653DBC2E23 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, Guid_t  ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		Guid_t  L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Guid_t  >::Invoke(41 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		Guid_t  L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< Guid_t  >::Invoke(41 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Guid) */, L_2, L_3);
		Guid_t  L_4 = ___value0;
		JsonWriter_WriteValue_m82BA7513906CB1637720C0209867F2542A6B84D0(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m86B387D4711067F1A4BA39F1A2F0C2CF1FC4CD8E (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		int32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int32_t >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		int32_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< int32_t >::Invoke(26 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int32) */, L_2, L_3);
		int32_t L_4 = ___value0;
		JsonWriter_WriteValue_m1FEFF250C239D3D1837EC5BCA4AFBFFC5D6E0D34(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_mC1359523457AF58B6E45E73EB4FD7DC6ADB9514F (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		int64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(28 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		int64_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< int64_t >::Invoke(28 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int64) */, L_2, L_3);
		int64_t L_4 = ___value0;
		JsonWriter_WriteValue_m93F9CEFC9ED2EF7A9449B780DEB568D44430F72F(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m79541058FEFF7C6DA92EFB036BB7FE7359F33711 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, RuntimeObject * ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		RuntimeObject * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< RuntimeObject * >::Invoke(62 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Object) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		RuntimeObject * L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< RuntimeObject * >::Invoke(62 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Object) */, L_2, L_3);
		RuntimeObject * L_4 = ___value0;
		JsonWriter_WriteValue_mFADE6F7C5F09296F7CA03DCBC78BF3A7587E1141(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.SByte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_mCF70906D73F2F874C153CCF43176C7F270DCD534 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, int8_t ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		int8_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int8_t >::Invoke(37 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		int8_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< int8_t >::Invoke(37 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.SByte) */, L_2, L_3);
		int8_t L_4 = ___value0;
		JsonWriter_WriteValue_m402DBD63BF18B24EAA0D34D7D6208CE8C696F3AF(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Int16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_mAB836F999AC85984937844DA3DB99EAFB593D291 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, int16_t ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		int16_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< int16_t >::Invoke(33 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		int16_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< int16_t >::Invoke(33 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Int16) */, L_2, L_3);
		int16_t L_4 = ___value0;
		JsonWriter_WriteValue_mC2E8EEA42CBCEF2CE3D63B1CC50EDC4029060DB0(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_mD0DB38AA9308B0E181BC2AEE2EFF513A75E2F4FC (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		String_t* L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(25 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		String_t* L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(25 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_2, L_3);
		String_t* L_4 = ___value0;
		JsonWriter_WriteValue_mB0E1A92D2F72F3463065BEF9972FB452631C08F6(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m348A56226E7608135E82F3FCAC6F91D578C11C86 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  >::Invoke(42 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  >::Invoke(42 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.TimeSpan) */, L_2, L_3);
		TimeSpan_t4F6A0E13E703B65365CFCAB58E05EE0AF3EE6203  L_4 = ___value0;
		JsonWriter_WriteValue_m1BFD61E3B8431D93875DED43BDBA437CF2E43345(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.UInt32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m3C731AE9FD7B5898C197719457A3F87C549BF43D (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, uint32_t ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		uint32_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint32_t >::Invoke(27 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		uint32_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< uint32_t >::Invoke(27 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt32) */, L_2, L_3);
		uint32_t L_4 = ___value0;
		JsonWriter_WriteValue_m9B2A0C880487EFEE143F0A2F0282A24F58E39BB6(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.UInt64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_mCE1C9ED077BDA0E5DEEFD3E4A106C5A57EA90850 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, uint64_t ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		uint64_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint64_t >::Invoke(29 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		uint64_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< uint64_t >::Invoke(29 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt64) */, L_2, L_3);
		uint64_t L_4 = ___value0;
		JsonWriter_WriteValue_m3B79659B76CE197EA62C98D9380CA276779BA041(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m3B0429ABD3FCB2E96E4BC4C3205D947C6F15B861 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(61 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * >::Invoke(61 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.Uri) */, L_2, L_3);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = ___value0;
		JsonWriter_WriteValue_mE84B57D0BC684CB7BEA071587B6E5F04DAB3240F(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteValue(System.UInt16)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteValue_m516ABC62B17BBF4E077B78D574738B3955C51B72 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, uint16_t ___value0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		uint16_t L_1 = ___value0;
		NullCheck(L_0);
		VirtActionInvoker1< uint16_t >::Invoke(34 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		uint16_t L_3 = ___value0;
		NullCheck(L_2);
		VirtActionInvoker1< uint16_t >::Invoke(34 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.UInt16) */, L_2, L_3);
		uint16_t L_4 = ___value0;
		JsonWriter_WriteValue_mD04367BAD3BA9FC4D4991C0BA35B49DA15675F96(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteComment(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteComment_m7B6A62C629652A13C48DB7BF8F9E99FB0E2F18FE (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		String_t* L_1 = ___text0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(63 /* System.Void Newtonsoft.Json.JsonWriter::WriteComment(System.String) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		String_t* L_3 = ___text0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(63 /* System.Void Newtonsoft.Json.JsonWriter::WriteComment(System.String) */, L_2, L_3);
		String_t* L_4 = ___text0;
		JsonWriter_WriteComment_m40A51166C1CABA6F1F5637A5373F2503C91083BC(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteStartArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteStartArray_m62E5F20C404EA5F6B7C2F8BE8BCEB8D5CF3607CF (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(9 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_0);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = __this->get__innerWriter_13();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(9 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartArray() */, L_1);
		JsonWriter_WriteStartArray_m645721F97E9CEEE7E587FDF935E35A6E7BBF3292(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteEndArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteEndArray_m4292FCDB4F4E922D9199500BED9C07888680690C (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(10 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_0);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = __this->get__innerWriter_13();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(10 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndArray() */, L_1);
		JsonWriter_WriteEndArray_m9CD3DFB809FDFAD3C5F607A6E06B41ED4F33CA7B(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteStartConstructor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteStartConstructor_m8C1F7EA7AF1EE915319DD74B1FD74165F925FE7F (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartConstructor(System.String) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(11 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartConstructor(System.String) */, L_2, L_3);
		String_t* L_4 = ___name0;
		JsonWriter_WriteStartConstructor_mA7E763E836F04492AF16B86F6675F2BC1584206E(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteEndConstructor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteEndConstructor_m82D598D7C412DF807185B9FC4C712CD69C005D34 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(12 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndConstructor() */, L_0);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = __this->get__innerWriter_13();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(12 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndConstructor() */, L_1);
		JsonWriter_WriteEndConstructor_m178608E8B682B73E3E06D9C5B89A2D449A170094(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WritePropertyName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WritePropertyName_m8E987A764C0769862EEE598BFF9EB5B03B571B64 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		String_t* L_1 = ___name0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(13 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String) */, L_2, L_3);
		String_t* L_4 = ___name0;
		JsonWriter_WritePropertyName_mB9C984656F23C60FB0B42602B4B6770C20758106(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WritePropertyName(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WritePropertyName_mBA2E40CB1DAA827635B2FCDA37A66919E1507835 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, String_t* ___name0, bool ___escape1, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		String_t* L_1 = ___name0;
		bool L_2 = ___escape1;
		NullCheck(L_0);
		VirtActionInvoker2< String_t*, bool >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String,System.Boolean) */, L_0, L_1, L_2);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_3 = __this->get__innerWriter_13();
		String_t* L_4 = ___name0;
		bool L_5 = ___escape1;
		NullCheck(L_3);
		VirtActionInvoker2< String_t*, bool >::Invoke(14 /* System.Void Newtonsoft.Json.JsonWriter::WritePropertyName(System.String,System.Boolean) */, L_3, L_4, L_5);
		String_t* L_6 = ___name0;
		JsonWriter_WritePropertyName_mB9C984656F23C60FB0B42602B4B6770C20758106(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteStartObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteStartObject_m2EE8F71A1FD5BDDEEFCAE0E5C3689C5DC8B24A30 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(7 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_0);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = __this->get__innerWriter_13();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(7 /* System.Void Newtonsoft.Json.JsonWriter::WriteStartObject() */, L_1);
		JsonWriter_WriteStartObject_mAD048398098C2F44099A1479284A011012215F5D(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteEndObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteEndObject_m7417900A02D479036FB4FE283727929A303AE56E (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(8 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_0);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = __this->get__innerWriter_13();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(8 /* System.Void Newtonsoft.Json.JsonWriter::WriteEndObject() */, L_1);
		JsonWriter_WriteEndObject_mFA72AE0AA3FC180698A8D2B9BFD54799EF9E5BEB(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteRawValue(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteRawValue_m02839B921BF871F752B464D19C65D92389B1C8B1 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, String_t* ___json0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		String_t* L_1 = ___json0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(24 /* System.Void Newtonsoft.Json.JsonWriter::WriteRawValue(System.String) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		String_t* L_3 = ___json0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(24 /* System.Void Newtonsoft.Json.JsonWriter::WriteRawValue(System.String) */, L_2, L_3);
		JsonWriter_InternalWriteValue_m28397BF3152152BC8AE2D8CC9A864E87D66FDC48(__this, ((int32_t)12), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::WriteRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_WriteRaw_mF5798374D6F0A1AFEB8E3AEBEBA41B7171393138 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, String_t* ___json0, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		String_t* L_1 = ___json0;
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(23 /* System.Void Newtonsoft.Json.JsonWriter::WriteRaw(System.String) */, L_0, L_1);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_2 = __this->get__innerWriter_13();
		String_t* L_3 = ___json0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(23 /* System.Void Newtonsoft.Json.JsonWriter::WriteRaw(System.String) */, L_2, L_3);
		String_t* L_4 = ___json0;
		JsonWriter_WriteRaw_mF11816DF21E2285E0E6E6E51440290572C1E8BFC(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.TraceJsonWriter::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TraceJsonWriter_Close_mD31D297A991DB57260137EF39AD6C641E1F8C852 (TraceJsonWriter_tF92C6EC2B284FD1BE8234D5E9C8FB234C486889A * __this, const RuntimeMethod* method)
{
	{
		JsonTextWriter_t33A7556B4AA038ACC39A2D995AA874612F62A10B * L_0 = __this->get__textWriter_14();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(6 /* System.Void Newtonsoft.Json.JsonWriter::Close() */, L_0);
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = __this->get__innerWriter_13();
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(6 /* System.Void Newtonsoft.Json.JsonWriter::Close() */, L_1);
		JsonWriter_Close_mB691844CE67B0DF402BBB9D373F9031EC8A441CD(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Reflection.MemberTypes Newtonsoft.Json.Utilities.TypeExtensions::MemberType(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeExtensions_MemberType_m6B0C77E72F48DC1B4204737359510A81F3E464C4 (MemberInfo_t * ___memberInfo0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___memberInfo0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(7 /* System.Reflection.MemberTypes System.Reflection.MemberInfo::get_MemberType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ContainsGenericParameters(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ContainsGenericParameters_m291B9B1787BCE6E8D410828890476C7E868ED823 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(82 /* System.Boolean System.Type::get_ContainsGenericParameters() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsInterface(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsInterface_mC86FEECE611B133413962A5EFE5DC85B92D76381 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsInterface_mB10C34DEE8B22E1597C813211BBED17DD724FC07(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsGenericType_mD7A79EF6D299F4D40932AEA3CF8BC3DD8E0C06D2 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(78 /* System.Boolean System.Type::get_IsGenericType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsGenericTypeDefinition(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsGenericTypeDefinition_m16881F2378C11CF6BFB7B3A127643F4129293AF8 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(79 /* System.Boolean System.Type::get_IsGenericTypeDefinition() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.TypeExtensions::BaseType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeExtensions_BaseType_mB412285DD088CA76F89534B78D1AE65FFF30F754 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(30 /* System.Type System.Type::get_BaseType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsEnum(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsEnum_m3D3EA9AF4638A68716201C314A1C75C0D0FE6CAA (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = VirtFuncInvoker0< bool >::Invoke(74 /* System.Boolean System.Type::get_IsEnum() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsClass(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsClass_mF1942239F1A4C2B093A05F39F7F8F7D94EE34A1D (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsClass_m2D39ED0DAFC534D527F8B019DA8B90859A7CA787(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsSealed(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsSealed_m9BF5CB41B9F60342CE4634AA4DE803492059844F (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsSealed_m688591A832F192E584223CFA48F37EA06C0C0AA5(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsAbstract(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsAbstract_m3E114BBDB2B178E154B5AD58D0C203A51BE091F0 (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsAbstract_mB16DB56FCABF55740019D32C5286F38E30CAA19F(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::IsValueType(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_IsValueType_mCAEDF96A86663613DC39781684AF92CC1531DF2B (Type_t * ___type0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___type0;
		NullCheck(L_0);
		bool L_1 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String,System.Type&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_AssignableToTypeName_mD522101DAFD0E49737C49A7BE5162B7D23312CC0 (Type_t * ___type0, String_t* ___fullTypeName1, Type_t ** ___match2, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_1 = NULL;
	int32_t V_2 = 0;
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_001f;
	}

IL_0004:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(26 /* System.String System.Type::get_FullName() */, L_1);
		String_t* L_3 = ___fullTypeName1;
		bool L_4 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_2, L_3, 4, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		Type_t ** L_5 = ___match2;
		Type_t * L_6 = V_0;
		*((RuntimeObject **)L_5) = (RuntimeObject *)L_6;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_5, (void*)(RuntimeObject *)L_6);
		return (bool)1;
	}

IL_0018:
	{
		Type_t * L_7 = V_0;
		Type_t * L_8 = TypeExtensions_BaseType_mB412285DD088CA76F89534B78D1AE65FFF30F754(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
	}

IL_001f:
	{
		Type_t * L_9 = V_0;
		if (L_9)
		{
			goto IL_0004;
		}
	}
	{
		Type_t * L_10 = ___type0;
		NullCheck(L_10);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_11 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(48 /* System.Type[] System.Type::GetInterfaces() */, L_10);
		V_1 = L_11;
		V_2 = 0;
		goto IL_0047;
	}

IL_002d:
	{
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_12 = V_1;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Type_t * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		String_t* L_16 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_15);
		String_t* L_17 = ___fullTypeName1;
		bool L_18 = String_Equals_mD65682B0BB7933CC7A8561AE34DED02E4F3BBBE5(L_16, L_17, 4, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0043;
		}
	}
	{
		Type_t ** L_19 = ___match2;
		Type_t * L_20 = ___type0;
		*((RuntimeObject **)L_19) = (RuntimeObject *)L_20;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_19, (void*)(RuntimeObject *)L_20);
		return (bool)1;
	}

IL_0043:
	{
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0047:
	{
		int32_t L_22 = V_2;
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_23 = V_1;
		NullCheck(L_23);
		if ((((int32_t)L_22) < ((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length)))))))
		{
			goto IL_002d;
		}
	}
	{
		Type_t ** L_24 = ___match2;
		*((RuntimeObject **)L_24) = (RuntimeObject *)NULL;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_24, (void*)(RuntimeObject *)NULL);
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::AssignableToTypeName(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_AssignableToTypeName_mF0CE3AB37FDF6B916128D0B9735D8ABD7CC649A4 (Type_t * ___type0, String_t* ___fullTypeName1, const RuntimeMethod* method)
{
	Type_t * V_0 = NULL;
	{
		Type_t * L_0 = ___type0;
		String_t* L_1 = ___fullTypeName1;
		bool L_2 = TypeExtensions_AssignableToTypeName_mD522101DAFD0E49737C49A7BE5162B7D23312CC0(L_0, L_1, (Type_t **)(&V_0), /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.TypeExtensions::ImplementInterface(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeExtensions_ImplementInterface_m7183F3D7AF62459483F1E37786034552734BE904 (Type_t * ___type0, Type_t * ___interfaceType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeExtensions_ImplementInterface_m7183F3D7AF62459483F1E37786034552734BE904_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t * V_2 = NULL;
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Type_t * L_0 = ___type0;
		V_0 = L_0;
		goto IL_0048;
	}

IL_0004:
	{
		Type_t * L_1 = V_0;
		NullCheck(L_1);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_2 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(48 /* System.Type[] System.Type::GetInterfaces() */, L_1);
		NullCheck((RuntimeObject*)(RuntimeObject*)L_2);
		RuntimeObject* L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<System.Type>::GetEnumerator() */, IEnumerable_1_tA2CFC624CD7D291A0E486D1A5FC78BF6425F9428_il2cpp_TypeInfo_var, (RuntimeObject*)(RuntimeObject*)L_2);
		V_1 = L_3;
	}

IL_0010:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002d;
		}

IL_0012:
		{
			RuntimeObject* L_4 = V_1;
			NullCheck(L_4);
			Type_t * L_5 = InterfaceFuncInvoker0< Type_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Type>::get_Current() */, IEnumerator_1_t5C4FADAE1CD0985640B2EDB887FE74A475EDEEDB_il2cpp_TypeInfo_var, L_4);
			V_2 = L_5;
			Type_t * L_6 = V_2;
			Type_t * L_7 = ___interfaceType1;
			if ((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_7)))
			{
				goto IL_0029;
			}
		}

IL_001d:
		{
			Type_t * L_8 = V_2;
			if (!L_8)
			{
				goto IL_002d;
			}
		}

IL_0020:
		{
			Type_t * L_9 = V_2;
			Type_t * L_10 = ___interfaceType1;
			bool L_11 = TypeExtensions_ImplementInterface_m7183F3D7AF62459483F1E37786034552734BE904(L_9, L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_002d;
			}
		}

IL_0029:
		{
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x4D, FINALLY_0037);
		}

IL_002d:
		{
			RuntimeObject* L_12 = V_1;
			NullCheck(L_12);
			bool L_13 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_12);
			if (L_13)
			{
				goto IL_0012;
			}
		}

IL_0035:
		{
			IL2CPP_LEAVE(0x41, FINALLY_0037);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0037;
	}

FINALLY_0037:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_14 = V_1;
			if (!L_14)
			{
				goto IL_0040;
			}
		}

IL_003a:
		{
			RuntimeObject* L_15 = V_1;
			NullCheck(L_15);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_15);
		}

IL_0040:
		{
			IL2CPP_END_FINALLY(55)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(55)
	{
		IL2CPP_JUMP_TBL(0x4D, IL_004d)
		IL2CPP_JUMP_TBL(0x41, IL_0041)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0041:
	{
		Type_t * L_16 = V_0;
		Type_t * L_17 = TypeExtensions_BaseType_mB412285DD088CA76F89534B78D1AE65FFF30F754(L_16, /*hidden argument*/NULL);
		V_0 = L_17;
	}

IL_0048:
	{
		Type_t * L_18 = V_0;
		if (L_18)
		{
			goto IL_0004;
		}
	}
	{
		return (bool)0;
	}

IL_004d:
	{
		bool L_19 = V_3;
		return L_19;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Type Newtonsoft.Json.Utilities.TypeInformation::get_Type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeInformation_get_Type_mF16FF676DAA9DEC81AF0A9FB81DA0834709F1F9D (TypeInformation_t30731224CF3BE05F8F32F6DC4FD5FAFFD4F6997D * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get_U3CTypeU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::set_Type(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInformation_set_Type_m87F6F17BD4A47C4F020DBC8E25462D3F4651B750 (TypeInformation_t30731224CF3BE05F8F32F6DC4FD5FAFFD4F6997D * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___value0;
		__this->set_U3CTypeU3Ek__BackingField_0(L_0);
		return;
	}
}
// Newtonsoft.Json.Utilities.PrimitiveTypeCode Newtonsoft.Json.Utilities.TypeInformation::get_TypeCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeInformation_get_TypeCode_m3F9374AB9A57BA647C5B53B633D16102723C8435 (TypeInformation_t30731224CF3BE05F8F32F6DC4FD5FAFFD4F6997D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CTypeCodeU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::set_TypeCode(Newtonsoft.Json.Utilities.PrimitiveTypeCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInformation_set_TypeCode_mD82AA32EF804000604122B9541C621AF00622767 (TypeInformation_t30731224CF3BE05F8F32F6DC4FD5FAFFD4F6997D * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CTypeCodeU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.TypeInformation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInformation__ctor_m957F0EFDD41CC462F8CA296702E33F67DBB3CB98 (TypeInformation_t30731224CF3BE05F8F32F6DC4FD5FAFFD4F6997D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ValidationUtils::ArgumentNotNull(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidationUtils_ArgumentNotNull_mA8AC1AD3B50DBCFC06ABF784BB1311468771A495 (RuntimeObject * ___value0, String_t* ___parameterName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValidationUtils_ArgumentNotNull_mA8AC1AD3B50DBCFC06ABF784BB1311468771A495_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		String_t* L_1 = ___parameterName1;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, L_1, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ValidationUtils_ArgumentNotNull_mA8AC1AD3B50DBCFC06ABF784BB1311468771A495_RuntimeMethod_var);
	}

IL_000a:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Converters.VersionConverter::WriteJson(Newtonsoft.Json.JsonWriter,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionConverter_WriteJson_m3C0A7EC6D68CA11D3E62C55B9567E757DE963B12 (VersionConverter_t9BE2693D5B5F36AE882FABD6AB022254124E59E2 * __this, JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * ___writer0, RuntimeObject * ___value1, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionConverter_WriteJson_m3C0A7EC6D68CA11D3E62C55B9567E757DE963B12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___value1;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_1 = ___writer0;
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(21 /* System.Void Newtonsoft.Json.JsonWriter::WriteNull() */, L_1);
		return;
	}

IL_000a:
	{
		RuntimeObject * L_2 = ___value1;
		if (!((Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)IsInstSealed((RuntimeObject*)L_2, Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var)))
		{
			goto IL_001f;
		}
	}
	{
		JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * L_3 = ___writer0;
		RuntimeObject * L_4 = ___value1;
		NullCheck(L_4);
		String_t* L_5 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_4);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(25 /* System.Void Newtonsoft.Json.JsonWriter::WriteValue(System.String) */, L_3, L_5);
		return;
	}

IL_001f:
	{
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_6 = (JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 *)il2cpp_codegen_object_new(JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8_il2cpp_TypeInfo_var);
		JsonSerializationException__ctor_m6FE8C668628845DB845F9DDEC79C50C300007444(L_6, _stringLiteralFF51AE1F9006774EB05DFE9C7EE8CC7B1AAA1446, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, VersionConverter_WriteJson_m3C0A7EC6D68CA11D3E62C55B9567E757DE963B12_RuntimeMethod_var);
	}
}
// System.Object Newtonsoft.Json.Converters.VersionConverter::ReadJson(Newtonsoft.Json.JsonReader,System.Type,System.Object,Newtonsoft.Json.JsonSerializer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * VersionConverter_ReadJson_m68376FA957ADA8318CEBDAEFB20789829FF17049 (VersionConverter_t9BE2693D5B5F36AE882FABD6AB022254124E59E2 * __this, JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * ___reader0, Type_t * ___objectType1, RuntimeObject * ___existingValue2, JsonSerializer_tCB6DBE5B2AA2EE465979EB49802CE4ECC4F141E3 * ___serializer3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionConverter_ReadJson_m68376FA957ADA8318CEBDAEFB20789829FF17049_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_0 = ___reader0;
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_0);
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_000c;
		}
	}
	{
		return NULL;
	}

IL_000c:
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_2 = ___reader0;
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_2);
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0047;
		}
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_4 = ___reader0;
		NullCheck(L_4);
		RuntimeObject * L_5 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_4);
		Version_tBDAEDED25425A1D09910468B8BD1759115646E3C * L_6 = (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C *)il2cpp_codegen_object_new(Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_il2cpp_TypeInfo_var);
		Version__ctor_mB484853E49F58F771DF106B7BDC92E49ACE3DAAE(L_6, ((String_t*)CastclassSealed((RuntimeObject*)L_5, String_t_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_006e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0029;
		throw e;
	}

CATCH_0029:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_7 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_8 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_9 = ___reader0;
		NullCheck(L_9);
		RuntimeObject * L_10 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_9);
		String_t* L_11 = StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D(_stringLiteralCEFE08E0E22F0F2F83881114AA953EB6602998C0, L_8, L_10, /*hidden argument*/NULL);
		Exception_t * L_12 = V_1;
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_13 = JsonSerializationException_Create_m55E8DF615AD31911F8A5BBFDED20ED83549BD64E(L_7, L_11, L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, VersionConverter_ReadJson_m68376FA957ADA8318CEBDAEFB20789829FF17049_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0047:
	{
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_14 = ___reader0;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_15 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_16 = ___reader0;
		NullCheck(L_16);
		int32_t L_17 = VirtFuncInvoker0< int32_t >::Invoke(5 /* Newtonsoft.Json.JsonToken Newtonsoft.Json.JsonReader::get_TokenType() */, L_16);
		int32_t L_18 = L_17;
		RuntimeObject * L_19 = Box(JsonToken_t63CB837C9C2C9D9B938921D92B457C8C56246314_il2cpp_TypeInfo_var, &L_18);
		JsonReader_tD653CD612543D2FCECBC0A7B94961B76955BDA91 * L_20 = ___reader0;
		NullCheck(L_20);
		RuntimeObject * L_21 = VirtFuncInvoker0< RuntimeObject * >::Invoke(6 /* System.Object Newtonsoft.Json.JsonReader::get_Value() */, L_20);
		String_t* L_22 = StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8(_stringLiteralE277CFF9C0F40D8AD278F095111F17D2F24BD7EA, L_15, L_19, L_21, /*hidden argument*/NULL);
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_23 = JsonSerializationException_Create_m59D9D0A78A9893C93F966A7ADF83DF696415D38A(L_14, L_22, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, VersionConverter_ReadJson_m68376FA957ADA8318CEBDAEFB20789829FF17049_RuntimeMethod_var);
	}

IL_006e:
	{
		RuntimeObject * L_24 = V_0;
		return L_24;
	}
}
// System.Boolean Newtonsoft.Json.Converters.VersionConverter::CanConvert(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool VersionConverter_CanConvert_mE3FCCFDE440B357CE0435B5066788ADCB8AD81C7 (VersionConverter_t9BE2693D5B5F36AE882FABD6AB022254124E59E2 * __this, Type_t * ___objectType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VersionConverter_CanConvert_mE3FCCFDE440B357CE0435B5066788ADCB8AD81C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Type_t * L_0 = ___objectType0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (Version_tBDAEDED25425A1D09910468B8BD1759115646E3C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		return (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
	}
}
// System.Void Newtonsoft.Json.Converters.VersionConverter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VersionConverter__ctor_m1726FAEF21FA951AD0185C796AF5A9D504C6EFD8 (VersionConverter_t9BE2693D5B5F36AE882FABD6AB022254124E59E2 * __this, const RuntimeMethod* method)
{
	{
		JsonConverter__ctor_mBE413F963C1E1D20875BCFE94DB01E09836EA97B(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ConvertUtils_<>c__DisplayClass9_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass9_0__ctor_mEE0F27194D15971B9E25917E60E41FD430A3E92B (U3CU3Ec__DisplayClass9_0_t3A4E56C60CDCDA0E3AE51AF8172FB902A9BBC187 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ConvertUtils_<>c__DisplayClass9_0::<CreateCastConverter>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_mABC83D0C63CE3EBCE00AA99596C34DECE06E40A6 (U3CU3Ec__DisplayClass9_0_t3A4E56C60CDCDA0E3AE51AF8172FB902A9BBC187 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass9_0_U3CCreateCastConverterU3Eb__0_mABC83D0C63CE3EBCE00AA99596C34DECE06E40A6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * L_0 = __this->get_call_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = L_1;
		RuntimeObject * L_3 = ___o0;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, L_3);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_3);
		NullCheck(L_0);
		RuntimeObject * L_4 = MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E(L_0, NULL, L_2, /*hidden argument*/MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E_RuntimeMethod_var);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshal_pinvoke(const TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7& unmarshaled, TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshaled_pinvoke& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshal_pinvoke_back(const TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshaled_pinvoke& marshaled, TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshal_pinvoke_cleanup(TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshal_com(const TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7& unmarshaled, TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshaled_com& marshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
IL2CPP_EXTERN_C void TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshal_com_back(const TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshaled_com& marshaled, TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7& unmarshaled)
{
	Exception_t* ____initialType_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field '_initialType' of type 'TypeConvertKey': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(____initialType_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Utilities.ConvertUtils/TypeConvertKey
IL2CPP_EXTERN_C void TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshal_com_cleanup(TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_marshaled_com& marshaled)
{
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::get_InitialType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_InitialType_m0F65A2432EB92CAA1377B113C1BAEF2C0283F634 (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * TypeConvertKey_get_InitialType_m0F65A2432EB92CAA1377B113C1BAEF2C0283F634_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 *>(__this + _offset);
	return TypeConvertKey_get_InitialType_m0F65A2432EB92CAA1377B113C1BAEF2C0283F634_inline(_thisAdjusted, method);
}
// System.Type Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::get_TargetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_TargetType_m8F2288FCB1DB8039CEE75810A72EC31B0085805D (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__targetType_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  Type_t * TypeConvertKey_get_TargetType_m8F2288FCB1DB8039CEE75810A72EC31B0085805D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 *>(__this + _offset);
	return TypeConvertKey_get_TargetType_m8F2288FCB1DB8039CEE75810A72EC31B0085805D_inline(_thisAdjusted, method);
}
// System.Void Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::.ctor(System.Type,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConvertKey__ctor_mAE2DD8A2A907D194638D666DED0AAC9FF3AA9E48 (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = ___initialType0;
		__this->set__initialType_0(L_0);
		Type_t * L_1 = ___targetType1;
		__this->set__targetType_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TypeConvertKey__ctor_mAE2DD8A2A907D194638D666DED0AAC9FF3AA9E48_AdjustorThunk (RuntimeObject * __this, Type_t * ___initialType0, Type_t * ___targetType1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 *>(__this + _offset);
	TypeConvertKey__ctor_mAE2DD8A2A907D194638D666DED0AAC9FF3AA9E48(_thisAdjusted, ___initialType0, ___targetType1, method);
}
// System.Int32 Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeConvertKey_GetHashCode_mC12EC356438B1840646DBA4ADEB7F6EB4AFDE894 (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		Type_t * L_2 = __this->get__targetType_1();
		NullCheck(L_2);
		int32_t L_3 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_2);
		return ((int32_t)((int32_t)L_1^(int32_t)L_3));
	}
}
IL2CPP_EXTERN_C  int32_t TypeConvertKey_GetHashCode_mC12EC356438B1840646DBA4ADEB7F6EB4AFDE894_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 *>(__this + _offset);
	return TypeConvertKey_GetHashCode_mC12EC356438B1840646DBA4ADEB7F6EB4AFDE894(_thisAdjusted, method);
}
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_m4DE5600EBFEAFAA076537C2075A96573AB87D2BE (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeConvertKey_Equals_m4DE5600EBFEAFAA076537C2075A96573AB87D2BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TypeConvertKey_Equals_mCCE90DDED2DF5DA439CDA3277A1BBB36E6E94C13((TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 *)__this, ((*(TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 *)((TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 *)UnBox(L_1, TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool TypeConvertKey_Equals_m4DE5600EBFEAFAA076537C2075A96573AB87D2BE_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 *>(__this + _offset);
	return TypeConvertKey_Equals_m4DE5600EBFEAFAA076537C2075A96573AB87D2BE(_thisAdjusted, ___obj0, method);
}
// System.Boolean Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey::Equals(Newtonsoft.Json.Utilities.ConvertUtils_TypeConvertKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeConvertKey_Equals_mCCE90DDED2DF5DA439CDA3277A1BBB36E6E94C13 (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7  ___other0, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7  L_1 = ___other0;
		Type_t * L_2 = L_1.get__initialType_0();
		if ((!(((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))))
		{
			goto IL_001d;
		}
	}
	{
		Type_t * L_3 = __this->get__targetType_1();
		TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7  L_4 = ___other0;
		Type_t * L_5 = L_4.get__targetType_1();
		return (bool)((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_5))? 1 : 0);
	}

IL_001d:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TypeConvertKey_Equals_mCCE90DDED2DF5DA439CDA3277A1BBB36E6E94C13_AdjustorThunk (RuntimeObject * __this, TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * _thisAdjusted = reinterpret_cast<TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 *>(__this + _offset);
	return TypeConvertKey_Equals_mCCE90DDED2DF5DA439CDA3277A1BBB36E6E94C13(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC6D9E94CA60CFC141FFC835625A409CFA85F4E47 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mC6D9E94CA60CFC141FFC835625A409CFA85F4E47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * L_0 = (U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA *)il2cpp_codegen_object_new(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE66D46B991808823CB3824E4B29BFA6C149E3738(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE66D46B991808823CB3824E4B29BFA6C149E3738 (U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<GetSerializableMembers>b__34_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSerializableMembersU3Eb__34_0_m65BB6F3B51232E8E2926903E2CEF175983AC3889 (U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetSerializableMembersU3Eb__34_0_m65BB6F3B51232E8E2926903E2CEF175983AC3889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		bool L_1 = ReflectionUtils_IsIndexedProperty_m1A60AB81E965E535B27CDA1FFF29DEB3C755033D(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<GetSerializableMembers>b__34_1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetSerializableMembersU3Eb__34_1_m983D29D4AF1EA10B3ECA7BED337AEC11157DEF5A (U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetSerializableMembersU3Eb__34_1_m983D29D4AF1EA10B3ECA7BED337AEC11157DEF5A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MemberInfo_t * L_0 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		bool L_1 = ReflectionUtils_IsIndexedProperty_m1A60AB81E965E535B27CDA1FFF29DEB3C755033D(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
// System.Collections.Generic.IEnumerable`1<System.Reflection.MemberInfo> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<GetExtensionDataMemberForType>b__37_0(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__37_0_m318BBA49484CCF1794EEE5417693A55717838349 (U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * __this, Type_t * ___baseType0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__37_0_m318BBA49484CCF1794EEE5417693A55717838349_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_0 = (List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 *)il2cpp_codegen_object_new(List_1_t1E053584366104694FDDFF723CE187EAD7F857B0_il2cpp_TypeInfo_var);
		List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334(L_0, /*hidden argument*/List_1__ctor_m72D0C29E962FEB94D4A06EB3E3E4E687A5708334_RuntimeMethod_var);
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_1 = L_0;
		Type_t * L_2 = ___baseType0;
		NullCheck(L_2);
		PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A* L_3 = VirtFuncInvoker1< PropertyInfoU5BU5D_tE59E95F68533BDA98ABBBEACB6A99BF2C7A4A26A*, int32_t >::Invoke(57 /* System.Reflection.PropertyInfo[] System.Type::GetProperties(System.Reflection.BindingFlags) */, L_2, ((int32_t)54));
		CollectionUtils_AddRange_TisMemberInfo_t_m1854448383B4F405602E0226A428FE1C7548D31E(L_1, (RuntimeObject*)(RuntimeObject*)L_3, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m1854448383B4F405602E0226A428FE1C7548D31E_RuntimeMethod_var);
		List_1_t1E053584366104694FDDFF723CE187EAD7F857B0 * L_4 = L_1;
		Type_t * L_5 = ___baseType0;
		NullCheck(L_5);
		FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E* L_6 = VirtFuncInvoker1< FieldInfoU5BU5D_tD84513FCA07C63AAFE671A5B39E3ADD6E903938E*, int32_t >::Invoke(47 /* System.Reflection.FieldInfo[] System.Type::GetFields(System.Reflection.BindingFlags) */, L_5, ((int32_t)54));
		CollectionUtils_AddRange_TisMemberInfo_t_m1854448383B4F405602E0226A428FE1C7548D31E(L_4, (RuntimeObject*)(RuntimeObject*)L_6, /*hidden argument*/CollectionUtils_AddRange_TisMemberInfo_t_m1854448383B4F405602E0226A428FE1C7548D31E_RuntimeMethod_var);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<GetExtensionDataMemberForType>b__37_1(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__37_1_m828226D1FB4AA70347E063378F6BF4064E7002D3 (U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__37_1_m828226D1FB4AA70347E063378F6BF4064E7002D3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Type_t * V_1 = NULL;
	Type_t * V_2 = NULL;
	{
		MemberInfo_t * L_0 = ___m0;
		int32_t L_1 = TypeExtensions_MemberType_m6B0C77E72F48DC1B4204737359510A81F3E464C4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)16))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		MemberInfo_t * L_4 = ___m0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (JsonExtensionDataAttribute_t742C5494ED033ECB5BFA1DC6C68D6AF3C62E753C_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_7 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_4, L_6, (bool)0);
		if (L_7)
		{
			goto IL_0027;
		}
	}
	{
		return (bool)0;
	}

IL_0027:
	{
		MemberInfo_t * L_8 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		bool L_9 = ReflectionUtils_CanReadMemberValue_m2CA3EDD4A8D77B8755BC39203EC2CC199E68FC28(L_8, (bool)1, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0056;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_10 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_11 = ___m0;
		NullCheck(L_11);
		Type_t * L_12 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_11);
		IL2CPP_RUNTIME_CLASS_INIT(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297_il2cpp_TypeInfo_var);
		String_t* L_13 = DefaultContractResolver_GetClrTypeFullName_m874A85E4D811BEB8F07F8AA427CA76E435AEDC68(L_12, /*hidden argument*/NULL);
		MemberInfo_t * L_14 = ___m0;
		NullCheck(L_14);
		String_t* L_15 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_14);
		String_t* L_16 = StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8(_stringLiteral136A55742A682B55E09AB7BC50610AD709A88AFF, L_10, L_13, L_15, /*hidden argument*/NULL);
		JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 * L_17 = (JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 *)il2cpp_codegen_object_new(JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32_il2cpp_TypeInfo_var);
		JsonException__ctor_mF60EC8D80BCE3097C5F731299209E8C4FD800D32(L_17, L_16, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_17, U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__37_1_m828226D1FB4AA70347E063378F6BF4064E7002D3_RuntimeMethod_var);
	}

IL_0056:
	{
		MemberInfo_t * L_18 = ___m0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		Type_t * L_19 = ReflectionUtils_GetMemberUnderlyingType_m369A749B80A046506D574AFBB1DA224B610DAAF3(L_18, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (IDictionary_2_t2C2074B0821BAD300B43C061B5CED76258A70C1E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_20, /*hidden argument*/NULL);
		bool L_22 = ReflectionUtils_ImplementsGenericDefinition_m5C3C97154DE1303207DD359EAE64A00B3533A8AC(L_19, L_21, (Type_t **)(&V_1), /*hidden argument*/NULL);
		if (!L_22)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t * L_23 = V_1;
		NullCheck(L_23);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_24 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_23);
		NullCheck(L_24);
		int32_t L_25 = 0;
		Type_t * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		Type_t * L_27 = V_1;
		NullCheck(L_27);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_28 = VirtFuncInvoker0< TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* >::Invoke(102 /* System.Type[] System.Type::GetGenericArguments() */, L_27);
		NullCheck(L_28);
		int32_t L_29 = 1;
		Type_t * L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		V_2 = L_30;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_31, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_33 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_26, L_32);
		if (!L_33)
		{
			goto IL_00a5;
		}
	}
	{
		Type_t * L_34 = V_2;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_35 = { reinterpret_cast<intptr_t> (JToken_t517F0381C4450A4525D6FA3480318381CE06C980_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_36 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_35, /*hidden argument*/NULL);
		NullCheck(L_34);
		bool L_37 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_34, L_36);
		if (!L_37)
		{
			goto IL_00a5;
		}
	}
	{
		return (bool)1;
	}

IL_00a5:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_38 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		MemberInfo_t * L_39 = ___m0;
		NullCheck(L_39);
		Type_t * L_40 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_39);
		IL2CPP_RUNTIME_CLASS_INIT(DefaultContractResolver_t191C29E332665EFC1B0B1F1082BEC4B7DE866297_il2cpp_TypeInfo_var);
		String_t* L_41 = DefaultContractResolver_GetClrTypeFullName_m874A85E4D811BEB8F07F8AA427CA76E435AEDC68(L_40, /*hidden argument*/NULL);
		MemberInfo_t * L_42 = ___m0;
		NullCheck(L_42);
		String_t* L_43 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_42);
		String_t* L_44 = StringUtils_FormatWith_mEB092C5B96EC84FDC050432B1A40DF8A83BFA2E8(_stringLiteral2F3CA0198E1FC9ECBFAF5319F4200CDDC9B45957, L_38, L_41, L_43, /*hidden argument*/NULL);
		JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 * L_45 = (JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 *)il2cpp_codegen_object_new(JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32_il2cpp_TypeInfo_var);
		JsonException__ctor_mF60EC8D80BCE3097C5F731299209E8C4FD800D32(L_45, L_44, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_45, U3CU3Ec_U3CGetExtensionDataMemberForTypeU3Eb__37_1_m828226D1FB4AA70347E063378F6BF4064E7002D3_RuntimeMethod_var);
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<GetAttributeConstructor>b__40_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetAttributeConstructorU3Eb__40_0_m38369B1996FCCE4B636E39DDC6A86D92FD3A9B50 (U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetAttributeConstructorU3Eb__40_0_m38369B1996FCCE4B636E39DDC6A86D92FD3A9B50_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (JsonConstructorAttribute_t892706D7BC0282A74D608533AC8F56337D08F1D4_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_3 = VirtFuncInvoker2< bool, Type_t *, bool >::Invoke(13 /* System.Boolean System.Reflection.MemberInfo::IsDefined(System.Type,System.Boolean) */, L_0, L_2, (bool)1);
		return L_3;
	}
}
// System.Int32 Newtonsoft.Json.Serialization.DefaultContractResolver_<>c::<CreateProperties>b__64_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CCreatePropertiesU3Eb__64_0_m9D1FE6CBD5DC4C760920F028871456CF1ED36668 (U3CU3Ec_t30F8D20CDE2939ABE1BA132502CFBFDB37A519CA * __this, JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CCreatePropertiesU3Eb__64_0_m9D1FE6CBD5DC4C760920F028871456CF1ED36668_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * L_0 = ___p0;
		NullCheck(L_0);
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_1 = JsonProperty_get_Order_mEF3E149DB2B59B8CA34317D3C09DFF703F31EF81_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0012;
		}
	}
	{
		return (-1);
	}

IL_0012:
	{
		int32_t L_3 = Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_inline((Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 *)(&V_0), /*hidden argument*/Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_RuntimeMethod_var);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_0__ctor_m9657B517275E07644EA8F2780E8530AB46582701 (U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_1__ctor_m480F13BCCC0D3EC2A81ACBD4DC1D40A0D14A006B (U3CU3Ec__DisplayClass38_1_t3AA8C8586136BB6D815B1DF622E7E918FA7B4E33 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_1::<SetExtensionDataDelegates>b__0(System.Object,System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_1_U3CSetExtensionDataDelegatesU3Eb__0_m1351516A62F1D2E6BBD3950DCE4699F3F427F103 (U3CU3Ec__DisplayClass38_1_t3AA8C8586136BB6D815B1DF622E7E918FA7B4E33 * __this, RuntimeObject * ___o0, String_t* ___key1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass38_1_U3CSetExtensionDataDelegatesU3Eb__0_m1351516A62F1D2E6BBD3950DCE4699F3F427F103_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * L_0 = __this->get_CSU24U3CU3E8__locals1_3();
		NullCheck(L_0);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_1 = L_0->get_getExtensionDataDictionary_0();
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_1);
		RuntimeObject * L_3 = Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E(L_1, L_2, /*hidden argument*/Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_005b;
		}
	}
	{
		Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * L_5 = __this->get_setExtensionDataDictionary_0();
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_6 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * L_7 = __this->get_CSU24U3CU3E8__locals1_3();
		NullCheck(L_7);
		MemberInfo_t * L_8 = L_7->get_member_1();
		NullCheck(L_8);
		String_t* L_9 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_8);
		String_t* L_10 = StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D(_stringLiteral76E62EDFAA0D83ADA5E51419027E3B2555BC97C7, L_6, L_9, /*hidden argument*/NULL);
		JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 * L_11 = (JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8 *)il2cpp_codegen_object_new(JsonSerializationException_t54C8A83C1734E86E80321113073005B2E9A453A8_il2cpp_TypeInfo_var);
		JsonSerializationException__ctor_m6FE8C668628845DB845F9DDEC79C50C300007444(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, U3CU3Ec__DisplayClass38_1_U3CSetExtensionDataDelegatesU3Eb__0_m1351516A62F1D2E6BBD3950DCE4699F3F427F103_RuntimeMethod_var);
	}

IL_0042:
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_12 = __this->get_createExtensionDataDictionary_1();
		NullCheck(L_12);
		RuntimeObject * L_13 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_12, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		V_0 = L_13;
		Action_2_t4FB8E5660AE634E13BF340904C61FEA9DCE9D52D * L_14 = __this->get_setExtensionDataDictionary_0();
		RuntimeObject * L_15 = ___o0;
		RuntimeObject * L_16 = V_0;
		NullCheck(L_14);
		Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382(L_14, L_15, L_16, /*hidden argument*/Action_2_Invoke_m54EE979C4D83695ED736A3177A68C2968C8C4382_RuntimeMethod_var);
	}

IL_005b:
	{
		MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * L_17 = __this->get_setExtensionDataDictionaryValue_2();
		RuntimeObject * L_18 = V_0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_19 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_20 = L_19;
		String_t* L_21 = ___key1;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, L_21);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_21);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_22 = L_20;
		RuntimeObject * L_23 = ___value2;
		NullCheck(L_22);
		ArrayElementTypeCheck (L_22, L_23);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_23);
		NullCheck(L_17);
		MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E(L_17, L_18, L_22, /*hidden argument*/MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass38_2__ctor_m3B6A995ED361FD637F5C890F6A330DB29C642C46 (U3CU3Ec__DisplayClass38_2_tCCA3CA4FB84DADEBB49F8B4DAEBC7A7B9DE74F14 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>> Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass38_2::<SetExtensionDataDelegates>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass38_2_U3CSetExtensionDataDelegatesU3Eb__1_m49B9CB881ECC01B15E43254D46A5692A06D2D2D4 (U3CU3Ec__DisplayClass38_2_tCCA3CA4FB84DADEBB49F8B4DAEBC7A7B9DE74F14 * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass38_2_U3CSetExtensionDataDelegatesU3Eb__1_m49B9CB881ECC01B15E43254D46A5692A06D2D2D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		U3CU3Ec__DisplayClass38_0_tBC9EDBB30C9F971EB64E970CF8287B67D8EE96B5 * L_0 = __this->get_CSU24U3CU3E8__locals2_1();
		NullCheck(L_0);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_1 = L_0->get_getExtensionDataDictionary_0();
		RuntimeObject * L_2 = ___o0;
		NullCheck(L_1);
		RuntimeObject * L_3 = Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E(L_1, L_2, /*hidden argument*/Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		V_0 = L_3;
		RuntimeObject * L_4 = V_0;
		if (L_4)
		{
			goto IL_0017;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0017:
	{
		ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B * L_5 = __this->get_createEnumerableWrapper_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_6;
		RuntimeObject * L_8 = V_0;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_8);
		NullCheck(L_5);
		RuntimeObject * L_9 = ObjectConstructor_1_Invoke_mE81DB4C62C8D2F60FF83F56FB36AE9FC3BE4103B(L_5, L_7, /*hidden argument*/ObjectConstructor_1_Invoke_mE81DB4C62C8D2F60FF83F56FB36AE9FC3BE4103B_RuntimeMethod_var);
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_9, IEnumerable_1_t22A35158F9E40077A7147A082319C0D1DFFBE2FD_il2cpp_TypeInfo_var));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass52_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass52_0__ctor_m0E4A38D649056BACFD2EABC64E065902BCA5AB1C (U3CU3Ec__DisplayClass52_0_t47D44CD99A914B975A5807FF43AA93BB479B9C8C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass52_0::<CreateDictionaryContract>b__0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec__DisplayClass52_0_U3CCreateDictionaryContractU3Eb__0_mD31CCB9C2E5FCCD990199DF086122D9EA0607600 (U3CU3Ec__DisplayClass52_0_t47D44CD99A914B975A5807FF43AA93BB479B9C8C * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		NamingStrategy_t5D39FF458CF086DD0CE681796D85AEB675DF3568 * L_0 = __this->get_namingStrategy_0();
		String_t* L_1 = ___s0;
		NullCheck(L_0);
		String_t* L_2 = VirtFuncInvoker1< String_t*, String_t* >::Invoke(5 /* System.String Newtonsoft.Json.Serialization.NamingStrategy::GetDictionaryKey(System.String) */, L_0, L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass68_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass68_0__ctor_mE7807E8FF0E1599649F65AF657A2B02F90E18829 (U3CU3Ec__DisplayClass68_0_t766708EC19046F0BD02D671A2671CD88B70FEA3E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass68_0::<CreateShouldSerializeTest>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass68_0_U3CCreateShouldSerializeTestU3Eb__0_mA20EFBB3085AFE25FE3DA66E0ADD0A770E158F1D (U3CU3Ec__DisplayClass68_0_t766708EC19046F0BD02D671A2671CD88B70FEA3E * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass68_0_U3CCreateShouldSerializeTestU3Eb__0_mA20EFBB3085AFE25FE3DA66E0ADD0A770E158F1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * L_0 = __this->get_shouldSerializeCall_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E_RuntimeMethod_var);
		return ((*(bool*)((bool*)UnBox(L_3, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass69_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass69_0__ctor_m828A909BC5D34B88E20B77CD87E7ED09ED12EBDD (U3CU3Ec__DisplayClass69_0_tFEECEE33CB16927EBB0FFEF0186F58FEFEA79F1E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultContractResolver_<>c__DisplayClass69_0::<SetIsSpecifiedActions>b__0(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass69_0_U3CSetIsSpecifiedActionsU3Eb__0_m8E32452942E950B4073E43EF6D9292CB07E4A382 (U3CU3Ec__DisplayClass69_0_tFEECEE33CB16927EBB0FFEF0186F58FEFEA79F1E * __this, RuntimeObject * ___o0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass69_0_U3CSetIsSpecifiedActionsU3Eb__0_m8E32452942E950B4073E43EF6D9292CB07E4A382_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_0 = __this->get_specifiedPropertyGet_0();
		RuntimeObject * L_1 = ___o0;
		NullCheck(L_0);
		RuntimeObject * L_2 = Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E(L_0, L_1, /*hidden argument*/Func_2_Invoke_m461CBB28D101DF799424D8E70D7A3EEA6E21545E_RuntimeMethod_var);
		return ((*(bool*)((bool*)UnBox(L_2, Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_il2cpp_TypeInfo_var))));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshal_pinvoke(const TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3& unmarshaled, TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshaled_pinvoke& marshaled)
{
	marshaled.___AssemblyName_0 = il2cpp_codegen_marshal_string(unmarshaled.get_AssemblyName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_string(unmarshaled.get_TypeName_1());
}
IL2CPP_EXTERN_C void TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshal_pinvoke_back(const TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshaled_pinvoke& marshaled, TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3& unmarshaled)
{
	unmarshaled.set_AssemblyName_0(il2cpp_codegen_marshal_string_result(marshaled.___AssemblyName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_string_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshal_pinvoke_cleanup(TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___AssemblyName_0);
	marshaled.___AssemblyName_0 = NULL;
	il2cpp_codegen_marshal_free(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// Conversion methods for marshalling of: Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshal_com(const TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3& unmarshaled, TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshaled_com& marshaled)
{
	marshaled.___AssemblyName_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_AssemblyName_0());
	marshaled.___TypeName_1 = il2cpp_codegen_marshal_bstring(unmarshaled.get_TypeName_1());
}
IL2CPP_EXTERN_C void TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshal_com_back(const TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshaled_com& marshaled, TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3& unmarshaled)
{
	unmarshaled.set_AssemblyName_0(il2cpp_codegen_marshal_bstring_result(marshaled.___AssemblyName_0));
	unmarshaled.set_TypeName_1(il2cpp_codegen_marshal_bstring_result(marshaled.___TypeName_1));
}
// Conversion method for clean up from marshalling of: Newtonsoft.Json.Serialization.DefaultSerializationBinder/TypeNameKey
IL2CPP_EXTERN_C void TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshal_com_cleanup(TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___AssemblyName_0);
	marshaled.___AssemblyName_0 = NULL;
	il2cpp_codegen_marshal_free_bstring(marshaled.___TypeName_1);
	marshaled.___TypeName_1 = NULL;
}
// System.Void Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeNameKey__ctor_mDC4275014619C46DE6BB5BE66BEEEA2962D1DDCD (TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * __this, String_t* ___assemblyName0, String_t* ___typeName1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___assemblyName0;
		__this->set_AssemblyName_0(L_0);
		String_t* L_1 = ___typeName1;
		__this->set_TypeName_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void TypeNameKey__ctor_mDC4275014619C46DE6BB5BE66BEEEA2962D1DDCD_AdjustorThunk (RuntimeObject * __this, String_t* ___assemblyName0, String_t* ___typeName1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * _thisAdjusted = reinterpret_cast<TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 *>(__this + _offset);
	TypeNameKey__ctor_mDC4275014619C46DE6BB5BE66BEEEA2962D1DDCD(_thisAdjusted, ___assemblyName0, ___typeName1, method);
}
// System.Int32 Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TypeNameKey_GetHashCode_m6F14E3CA5E0098A41949DDA45EC588069B2F7A4A (TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * __this, const RuntimeMethod* method)
{
	int32_t G_B3_0 = 0;
	int32_t G_B5_0 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	int32_t G_B6_1 = 0;
	{
		String_t* L_0 = __this->get_AssemblyName_0();
		if (L_0)
		{
			goto IL_000b;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_0016;
	}

IL_000b:
	{
		String_t* L_1 = __this->get_AssemblyName_0();
		NullCheck(L_1);
		int32_t L_2 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_1);
		G_B3_0 = L_2;
	}

IL_0016:
	{
		String_t* L_3 = __this->get_TypeName_1();
		G_B4_0 = G_B3_0;
		if (L_3)
		{
			G_B5_0 = G_B3_0;
			goto IL_0021;
		}
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_002c;
	}

IL_0021:
	{
		String_t* L_4 = __this->get_TypeName_1();
		NullCheck(L_4);
		int32_t L_5 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_4);
		G_B6_0 = L_5;
		G_B6_1 = G_B5_0;
	}

IL_002c:
	{
		return ((int32_t)((int32_t)G_B6_1^(int32_t)G_B6_0));
	}
}
IL2CPP_EXTERN_C  int32_t TypeNameKey_GetHashCode_m6F14E3CA5E0098A41949DDA45EC588069B2F7A4A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * _thisAdjusted = reinterpret_cast<TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 *>(__this + _offset);
	return TypeNameKey_GetHashCode_m6F14E3CA5E0098A41949DDA45EC588069B2F7A4A(_thisAdjusted, method);
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_m2508626D8FED8CA829246608EE62F8E2D34B5AA5 (TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TypeNameKey_Equals_m2508626D8FED8CA829246608EE62F8E2D34B5AA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = ___obj0;
		if (((RuntimeObject *)IsInstSealed((RuntimeObject*)L_0, TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_il2cpp_TypeInfo_var)))
		{
			goto IL_000a;
		}
	}
	{
		return (bool)0;
	}

IL_000a:
	{
		RuntimeObject * L_1 = ___obj0;
		bool L_2 = TypeNameKey_Equals_m4114698DBBE4F208BBD13645CF9DF3500A5B2F6E((TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 *)__this, ((*(TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 *)((TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 *)UnBox(L_1, TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3_il2cpp_TypeInfo_var)))), /*hidden argument*/NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool TypeNameKey_Equals_m2508626D8FED8CA829246608EE62F8E2D34B5AA5_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * _thisAdjusted = reinterpret_cast<TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 *>(__this + _offset);
	return TypeNameKey_Equals_m2508626D8FED8CA829246608EE62F8E2D34B5AA5(_thisAdjusted, ___obj0, method);
}
// System.Boolean Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey::Equals(Newtonsoft.Json.Serialization.DefaultSerializationBinder_TypeNameKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeNameKey_Equals_m4114698DBBE4F208BBD13645CF9DF3500A5B2F6E (TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * __this, TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3  ___other0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_AssemblyName_0();
		TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3  L_1 = ___other0;
		String_t* L_2 = L_1.get_AssemblyName_0();
		bool L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_0, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0025;
		}
	}
	{
		String_t* L_4 = __this->get_TypeName_1();
		TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3  L_5 = ___other0;
		String_t* L_6 = L_5.get_TypeName_1();
		bool L_7 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_4, L_6, /*hidden argument*/NULL);
		return L_7;
	}

IL_0025:
	{
		return (bool)0;
	}
}
IL2CPP_EXTERN_C  bool TypeNameKey_Equals_m4114698DBBE4F208BBD13645CF9DF3500A5B2F6E_AdjustorThunk (RuntimeObject * __this, TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3  ___other0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 * _thisAdjusted = reinterpret_cast<TypeNameKey_tAECD9EC6BDB6CD7DFABADC3CDE05CF5C2232F3E3 *>(__this + _offset);
	return TypeNameKey_Equals_m4114698DBBE4F208BBD13645CF9DF3500A5B2F6E(_thisAdjusted, ___other0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.EnumUtils_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mCA6120DDC165F9A19952B593D0502A71AB4398AE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mCA6120DDC165F9A19952B593D0502A71AB4398AE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 * L_0 = (U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 *)il2cpp_codegen_object_new(U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m9257036A860F5D9D46AC71795DC0DC889CB519C3(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.EnumUtils_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m9257036A860F5D9D46AC71795DC0DC889CB519C3 (U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Utilities.EnumUtils_<>c::<InitializeEnumType>b__1_0(System.Runtime.Serialization.EnumMemberAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CInitializeEnumTypeU3Eb__1_0_mD95ED21242B7DCD2DD87E0715E473DEE541CAE02 (U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 * __this, EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * ___a0, const RuntimeMethod* method)
{
	{
		EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * L_0 = ___a0;
		NullCheck(L_0);
		String_t* L_1 = EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.EnumUtils_<>c::<GetValues>b__5_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetValuesU3Eb__5_0_m643A368F4C078D3341829711A08DDE21CD2A3681 (U3CU3Ec_tC317791BE9F418DD0572473673C4C8FBBA96DB72 * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1 = FieldInfo_get_IsLiteral_mF2657F6BAB384894EB2C861D51093179E3EE77D9(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55__ctor_m39D073F670254F7B83DEDDAE2F7DB060F3C74C72 (U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_System_IDisposable_Dispose_mB223527BC52FC70E28D161FF63DDD2E52AAFAFF0 (U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-3))))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_001a;
		}
	}

IL_0010:
	{
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		IL2CPP_LEAVE(0x1A, FINALLY_0013);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0013;
	}

FINALLY_0013:
	{ // begin finally (depth: 1)
		U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_mC5E82C16B976D0931DEC0A40D00530440E975833(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(19)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(19)
	{
		IL2CPP_JUMP_TBL(0x1A, IL_001a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_001a:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__55_MoveNext_mC5D9A78BE6D3987B3B5AB71C3DA7F3F508592D13 (U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__55_MoveNext_mC5D9A78BE6D3987B3B5AB71C3DA7F3F508592D13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_U3CU3E1__state_0();
			V_1 = L_0;
			int32_t L_1 = V_1;
			if (!L_1)
			{
				goto IL_0015;
			}
		}

IL_000a:
		{
			int32_t L_2 = V_1;
			if ((((int32_t)L_2) == ((int32_t)1)))
			{
				goto IL_006f;
			}
		}

IL_000e:
		{
			V_0 = (bool)0;
			goto IL_009c;
		}

IL_0015:
		{
			__this->set_U3CU3E1__state_0((-1));
			JObject_tF150B38C95CC8B2C1CA2D59B665175F8444AC48C * L_3 = __this->get_U3CU3E4__this_2();
			NullCheck(L_3);
			JPropertyKeyedCollection_t15E86A62BDB14C05DBB8DB727AE06AD74EEB9838 * L_4 = L_3->get__properties_16();
			NullCheck(L_4);
			RuntimeObject* L_5 = Collection_1_GetEnumerator_mDA086776175028440A51504C113337E91CC43500(L_4, /*hidden argument*/Collection_1_GetEnumerator_mDA086776175028440A51504C113337E91CC43500_RuntimeMethod_var);
			__this->set_U3CU3E7__wrap1_3(L_5);
			__this->set_U3CU3E1__state_0(((int32_t)-3));
			goto IL_0077;
		}

IL_003c:
		{
			RuntimeObject* L_6 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_6);
			JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_7 = InterfaceFuncInvoker0< JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken>::get_Current() */, IEnumerator_1_tE9BA6FB2F73388F6352B224097DEA9D3065EAC46_il2cpp_TypeInfo_var, L_6);
			V_2 = ((JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445 *)CastclassClass((RuntimeObject*)L_7, JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445_il2cpp_TypeInfo_var));
			JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445 * L_8 = V_2;
			NullCheck(L_8);
			String_t* L_9 = JProperty_get_Name_m1F999A1D1AB6DE471307B863143DFE0713496E56_inline(L_8, /*hidden argument*/NULL);
			JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445 * L_10 = V_2;
			NullCheck(L_10);
			JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_11 = JProperty_get_Value_mAABBD10438136C61CBEB0E739A4ED09AA54D7BC3(L_10, /*hidden argument*/NULL);
			KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112  L_12;
			memset((&L_12), 0, sizeof(L_12));
			KeyValuePair_2__ctor_mF3910C25EC821B78E3466B0458DE8EB7E827C263((&L_12), L_9, L_11, /*hidden argument*/KeyValuePair_2__ctor_mF3910C25EC821B78E3466B0458DE8EB7E827C263_RuntimeMethod_var);
			__this->set_U3CU3E2__current_1(L_12);
			__this->set_U3CU3E1__state_0(1);
			V_0 = (bool)1;
			goto IL_009c;
		}

IL_006f:
		{
			__this->set_U3CU3E1__state_0(((int32_t)-3));
		}

IL_0077:
		{
			RuntimeObject* L_13 = __this->get_U3CU3E7__wrap1_3();
			NullCheck(L_13);
			bool L_14 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_13);
			if (L_14)
			{
				goto IL_003c;
			}
		}

IL_0084:
		{
			U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_mC5E82C16B976D0931DEC0A40D00530440E975833(__this, /*hidden argument*/NULL);
			__this->set_U3CU3E7__wrap1_3((RuntimeObject*)NULL);
			V_0 = (bool)0;
			goto IL_009c;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FAULT_0095;
	}

FAULT_0095:
	{ // begin fault (depth: 1)
		U3CGetEnumeratorU3Ed__55_System_IDisposable_Dispose_mB223527BC52FC70E28D161FF63DDD2E52AAFAFF0(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(149)
	} // end fault
	IL2CPP_CLEANUP(149)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_009c:
	{
		bool L_15 = V_0;
		return L_15;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::<>m__Finally1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_mC5E82C16B976D0931DEC0A40D00530440E975833 (U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__55_U3CU3Em__Finally1_mC5E82C16B976D0931DEC0A40D00530440E975833_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_U3CU3E1__state_0((-1));
		RuntimeObject* L_0 = __this->get_U3CU3E7__wrap1_3();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		RuntimeObject* L_1 = __this->get_U3CU3E7__wrap1_3();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_1);
	}

IL_001a:
	{
		return;
	}
}
// System.Collections.Generic.KeyValuePair`2<System.String,Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,Newtonsoft.Json.Linq.JToken>>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112  U3CGetEnumeratorU3Ed__55_System_Collections_Generic_IEnumeratorU3CSystem_Collections_Generic_KeyValuePairU3CSystem_StringU2CNewtonsoft_Json_Linq_JTokenU3EU3E_get_Current_m5FFD0E3046EE93A727BA843ABBA0DEE02CC07F26 (U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112  L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_Reset_m7EBB11E06B1F21F50C7DF8B06E60B5F6F7D093F6 (U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_Reset_m7EBB11E06B1F21F50C7DF8B06E60B5F6F7D093F6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_Reset_m7EBB11E06B1F21F50C7DF8B06E60B5F6F7D093F6_RuntimeMethod_var);
	}
}
// System.Object Newtonsoft.Json.Linq.JObject_<GetEnumerator>d__55::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_get_Current_mFC6CD295ED617B01F9BCB28202DE85AA867A633A (U3CGetEnumeratorU3Ed__55_t50B1A76506E66840537E151407F41782804F32C0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__55_System_Collections_IEnumerator_get_Current_mFC6CD295ED617B01F9BCB28202DE85AA867A633A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112  L_0 = __this->get_U3CU3E2__current_1();
		KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112  L_1 = L_0;
		RuntimeObject * L_2 = Box(KeyValuePair_2_t749D96D71D930BF08E1918384837A50C82056112_il2cpp_TypeInfo_var, &L_1);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.IEnumerator`1<Newtonsoft.Json.Linq.JToken> Newtonsoft.Json.Linq.JProperty_JPropertyList::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_GetEnumerator_mC715F77A28A06FEBF2DF905E4CC316395A29247A (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (JPropertyList_GetEnumerator_mC715F77A28A06FEBF2DF905E4CC316395A29247A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF * L_0 = (U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF *)il2cpp_codegen_object_new(U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF_il2cpp_TypeInfo_var);
		U3CGetEnumeratorU3Ed__1__ctor_mBEF84F4FECA516310F51ECF6074B5481DCBAFC03(L_0, 0, /*hidden argument*/NULL);
		U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Newtonsoft.Json.Linq.JProperty_JPropertyList::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JPropertyList_System_Collections_IEnumerable_GetEnumerator_m57640C57EF08AFA19CB03DEAEF19833CA244CB08 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0 = JPropertyList_GetEnumerator_mC715F77A28A06FEBF2DF905E4CC316395A29247A(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList::Add(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Add_mE2036C30C71EE88951AE012B361E4C8586E15234 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_0 = ___item0;
		__this->set__token_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Clear_m5353069EB331F32B972401577656AB72B279F83D (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, const RuntimeMethod* method)
{
	{
		__this->set__token_0((JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty_JPropertyList::Contains(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Contains_m13519860B353FBCB3C243ACA83313840144BA361 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_0 = __this->get__token_0();
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_1 = ___item0;
		return (bool)((((RuntimeObject*)(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)L_0) == ((RuntimeObject*)(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)L_1))? 1 : 0);
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList::CopyTo(Newtonsoft.Json.Linq.JToken[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_CopyTo_m5AF90907755679814E12E33015089DB877AA5587 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, JTokenU5BU5D_tF552A57A77922E5E7F5B9590D8A8D20234A98464* ___array0, int32_t ___arrayIndex1, const RuntimeMethod* method)
{
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_0 = __this->get__token_0();
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		JTokenU5BU5D_tF552A57A77922E5E7F5B9590D8A8D20234A98464* L_1 = ___array0;
		int32_t L_2 = ___arrayIndex1;
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_3 = __this->get__token_0();
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)L_3);
	}

IL_0011:
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty_JPropertyList::Remove(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_Remove_m232A46183906111F72F0D0DCD2530A61DA2D50E2 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_0 = __this->get__token_0();
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_1 = ___item0;
		if ((!(((RuntimeObject*)(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)L_0) == ((RuntimeObject*)(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)L_1))))
		{
			goto IL_0012;
		}
	}
	{
		__this->set__token_0((JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)NULL);
		return (bool)1;
	}

IL_0012:
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty_JPropertyList::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_get_Count_m0712AB23E0E750D48F1431991EE727DB17E73EF8 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, const RuntimeMethod* method)
{
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_0 = __this->get__token_0();
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		return 1;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty_JPropertyList::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool JPropertyList_get_IsReadOnly_mD916305B0F311B933E5B5FA5CE872B0F9FD81CB9 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, const RuntimeMethod* method)
{
	{
		return (bool)0;
	}
}
// System.Int32 Newtonsoft.Json.Linq.JProperty_JPropertyList::IndexOf(Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t JPropertyList_IndexOf_mC0E9DA37EB58DE6473194570F444D62EFFD80104 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ___item0, const RuntimeMethod* method)
{
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_0 = __this->get__token_0();
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_1 = ___item0;
		if ((((RuntimeObject*)(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)L_0) == ((RuntimeObject*)(JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)L_1)))
		{
			goto IL_000b;
		}
	}
	{
		return (-1);
	}

IL_000b:
	{
		return 0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList::Insert(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_Insert_m7560BD5A885C21D7A54AC52E82D5C24F3413EBDC (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, int32_t ___index0, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ___item1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_1 = ___item1;
		__this->set__token_0(L_1);
	}

IL_000a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_RemoveAt_mF447B85B11AB42FF2A5354503373253368345AB8 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		__this->set__token_0((JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)NULL);
	}

IL_000a:
	{
		return;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty_JPropertyList::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * JPropertyList_get_Item_mDD795A43E43E112FC71D6C8F761BA9E93B840ECE (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (!L_0)
		{
			goto IL_0005;
		}
	}
	{
		return (JToken_t517F0381C4450A4525D6FA3480318381CE06C980 *)NULL;
	}

IL_0005:
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_1 = __this->get__token_0();
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList::set_Item(System.Int32,Newtonsoft.Json.Linq.JToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList_set_Item_m93158067C5359D1598BE4B63A2BA391AED695D4F (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, int32_t ___index0, JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * ___value1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_1 = ___value1;
		__this->set__token_0(L_1);
	}

IL_000a:
	{
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JPropertyList__ctor_m789EDCC8699BD0426F52109213C8F54D6AB4C139 (JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JToken_LineInfoAnnotation::.ctor(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LineInfoAnnotation__ctor_mC736BA7937641CAFF922E45BE0DB76FFB3EF79D2 (LineInfoAnnotation_t25E27B4B4C00CB5D2B80FB4E1F6793E0F4BE314C * __this, int32_t ___lineNumber0, int32_t ___linePosition1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lineNumber0;
		__this->set_LineNumber_0(L_0);
		int32_t L_1 = ___linePosition1;
		__this->set_LinePosition_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonContract_<>c__DisplayClass73_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0__ctor_m327FFFA0BFB55C64621A1600416F6051D2CC8F2C (U3CU3Ec__DisplayClass73_0_tDED699F39B829613F6126BA5E1C887311346B7EE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract_<>c__DisplayClass73_0::<CreateSerializationCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass73_0_U3CCreateSerializationCallbackU3Eb__0_mE55246604A2198788812A1B4BA3B191EB3103BD8 (U3CU3Ec__DisplayClass73_0_tDED699F39B829613F6126BA5E1C887311346B7EE * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass73_0_U3CCreateSerializationCallbackU3Eb__0_mE55246604A2198788812A1B4BA3B191EB3103BD8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		NullCheck(L_0);
		MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonContract_<>c__DisplayClass74_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0__ctor_m32174118CAC919A99277D1670F6F5A45B2A5DE11 (U3CU3Ec__DisplayClass74_0_tEB782E56C6643FDDCF2D7B0E5A2DF0A1AED3AEB8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonContract_<>c__DisplayClass74_0::<CreateSerializationErrorCallback>b__0(System.Object,System.Runtime.Serialization.StreamingContext,Newtonsoft.Json.Serialization.ErrorContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass74_0_U3CCreateSerializationErrorCallbackU3Eb__0_m4F0A8CF50687635531818316C9BE6CF622827EF6 (U3CU3Ec__DisplayClass74_0_tEB782E56C6643FDDCF2D7B0E5A2DF0A1AED3AEB8 * __this, RuntimeObject * ___o0, StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___context1, ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * ___econtext2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass74_0_U3CCreateSerializationErrorCallbackU3Eb__0_m4F0A8CF50687635531818316C9BE6CF622827EF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodInfo_t * L_0 = __this->get_callbackMethodInfo_0();
		RuntimeObject * L_1 = ___o0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)2);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_4 = ___context1;
		StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  L_5 = L_4;
		RuntimeObject * L_6 = Box(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_il2cpp_TypeInfo_var, &L_5);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_6);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_6);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_7 = L_3;
		ErrorContext_tFCEA6129DB7CC94DFEFC6A3EE16A4420F57B417E * L_8 = ___econtext2;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_8);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_8);
		NullCheck(L_0);
		MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, L_1, L_7, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.Equals(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_Equals_m9C19FB863E99FB0E8F684911A1A1B0AFAF67AA34 (ReferenceEqualsEqualityComparer_t7D73C0F6ABF9328B677D3328CF1D9490324F625A * __this, RuntimeObject * ___x0, RuntimeObject * ___y1, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___x0;
		RuntimeObject * L_1 = ___y1;
		return (bool)((((RuntimeObject*)(RuntimeObject *)L_0) == ((RuntimeObject*)(RuntimeObject *)L_1))? 1 : 0);
	}
}
// System.Int32 Newtonsoft.Json.Serialization.JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::System.Collections.Generic.IEqualityComparer<System.Object>.GetHashCode(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ReferenceEqualsEqualityComparer_System_Collections_Generic_IEqualityComparerU3CSystem_ObjectU3E_GetHashCode_m959D403ACF199A3EB9C7EA6769AE2A2B394FF44A (ReferenceEqualsEqualityComparer_t7D73C0F6ABF9328B677D3328CF1D9490324F625A * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___obj0;
		int32_t L_1 = RuntimeHelpers_GetHashCode_mDA6691034E245B5F619B108F3597725FF7862DA1(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalBase_ReferenceEqualsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReferenceEqualsEqualityComparer__ctor_m0D20F7AF62826C7CA9086E605EBD9B8585C07952 (ReferenceEqualsEqualityComparer_t7D73C0F6ABF9328B677D3328CF1D9490324F625A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mB684917E51C88F503F61405714BD76633F355FBB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mB684917E51C88F503F61405714BD76633F355FBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * L_0 = (U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE *)il2cpp_codegen_object_new(U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF4F6C6B34C47B9F6E948DBC0A421CE0D2D9FE54C(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF4F6C6B34C47B9F6E948DBC0A421CE0D2D9FE54C (U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::<CreateObjectUsingCreatorWithParameters>b__36_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__36_0_mCA4E9FE5023F67CB745B33C6131CD61BCC1011CE (U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * __this, JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = JsonProperty_get_PropertyName_m72817401FC680F87EC4202862CD5B52CF6300C60_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::<CreateObjectUsingCreatorWithParameters>b__36_2(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CCreateObjectUsingCreatorWithParametersU3Eb__36_2_mF210A2A7E2294BADE518A6C7A22B58F156D9BD9A (U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * __this, JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * ___p0, const RuntimeMethod* method)
{
	{
		JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = JsonProperty_get_PropertyName_m72817401FC680F87EC4202862CD5B52CF6300C60_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Newtonsoft.Json.Serialization.JsonProperty Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::<PopulateObject>b__41_0(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * U3CU3Ec_U3CPopulateObjectU3Eb__41_0_mC4D620E4B29ED60E3F597B565298DD297BB5D085 (U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * __this, JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * ___m0, const RuntimeMethod* method)
{
	{
		JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * L_0 = ___m0;
		return L_0;
	}
}
// Newtonsoft.Json.Serialization.JsonSerializerInternalReader_PropertyPresence Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c::<PopulateObject>b__41_1(Newtonsoft.Json.Serialization.JsonProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CPopulateObjectU3Eb__41_1_mCA072CB7AD311FEE48B3069C04307DB8DA0A9D3F (U3CU3Ec_t57015DC78EDF73461DBB54732385DD028CFEC6EE * __this, JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * ___m0, const RuntimeMethod* method)
{
	{
		return (int32_t)(0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c__DisplayClass36_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass36_0__ctor_mB414BA3C9E61ECB1CF0021617BFD87D4EA440EAD (U3CU3Ec__DisplayClass36_0_tF59A60BEA88CC88FF146709D13E96A046DB7D43F * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Serialization.JsonSerializerInternalReader_<>c__DisplayClass36_0::<CreateObjectUsingCreatorWithParameters>b__1(Newtonsoft.Json.Serialization.JsonSerializerInternalReader_CreatorPropertyContext)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass36_0_U3CCreateObjectUsingCreatorWithParametersU3Eb__1_m078EF0420FA95A85416CE2B26EC0DAEAABE15DF2 (U3CU3Ec__DisplayClass36_0_tF59A60BEA88CC88FF146709D13E96A046DB7D43F * __this, CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC * ___p0, const RuntimeMethod* method)
{
	{
		CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC * L_0 = ___p0;
		NullCheck(L_0);
		JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * L_1 = L_0->get_Property_1();
		JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * L_2 = __this->get_property_0();
		return (bool)((((int32_t)((((RuntimeObject*)(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D *)L_1) == ((RuntimeObject*)(JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D *)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonSerializerInternalReader_CreatorPropertyContext::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreatorPropertyContext__ctor_mB81D9D361C71DAE2AAB86DB1F791AD259D0674C4 (CreatorPropertyContext_t6454EDD5368AD90CA526CC70F95358B11B1836AC * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m57D7B5CC6C5C25588D21AA16B15B972D7EA17B16 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m57D7B5CC6C5C25588D21AA16B15B972D7EA17B16_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 * L_0 = (U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 *)il2cpp_codegen_object_new(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m10DDD7E3D143A479BA4ABEA1D4361ACC61E136E5(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m10DDD7E3D143A479BA4ABEA1D4361ACC61E136E5 (U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Type Newtonsoft.Json.Serialization.JsonTypeReflector_<>c::<GetCreator>b__20_1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetCreatorU3Eb__20_1_mC6037338F8D1D9AFA8755A32D4D207646963D8E1 (U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 * __this, RuntimeObject * ___param0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___param0;
		NullCheck(L_0);
		Type_t * L_1 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Serialization.JsonTypeReflector_<>c__DisplayClass20_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass20_0__ctor_m6FF8C47EB6FB31F8952DA33F7B70A293F502A0E2 (U3CU3Ec__DisplayClass20_0_t4372BFC466654BC874AE3B7E8377F4018012ED74 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Serialization.JsonTypeReflector_<>c__DisplayClass20_0::<GetCreator>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass20_0_U3CGetCreatorU3Eb__0_m987F7CF1E29CCD749193506951C9C0348D193BCB (U3CU3Ec__DisplayClass20_0_t4372BFC466654BC874AE3B7E8377F4018012ED74 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass20_0_U3CGetCreatorU3Eb__0_m987F7CF1E29CCD749193506951C9C0348D193BCB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* V_0 = NULL;
	ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * V_1 = NULL;
	RuntimeObject * V_2 = NULL;
	Exception_t * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B3_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B3_1 = NULL;
	Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * G_B2_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* G_B2_1 = NULL;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___parameters0;
			if (!L_0)
			{
				goto IL_006d;
			}
		}

IL_0003:
		{
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___parameters0;
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_il2cpp_TypeInfo_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_2 = ((U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_il2cpp_TypeInfo_var))->get_U3CU3E9__20_1_1();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_3 = L_2;
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			if (L_3)
			{
				G_B3_0 = L_3;
				G_B3_1 = L_1;
				goto IL_0023;
			}
		}

IL_000c:
		{
			IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_il2cpp_TypeInfo_var);
			U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8 * L_4 = ((U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_5 = (Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF *)il2cpp_codegen_object_new(Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF_il2cpp_TypeInfo_var);
			Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CGetCreatorU3Eb__20_1_mC6037338F8D1D9AFA8755A32D4D207646963D8E1_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m84B84849EC5A4CBDFA2EAC12D68E99B17D87EAFD_RuntimeMethod_var);
			Func_2_t1BAD9F1A22B63A9F2F0380E7FB5D5BB7FED704BF * L_6 = L_5;
			((U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t848677FBF04141492E7BF64DD58B81754F46E5E8_il2cpp_TypeInfo_var))->set_U3CU3E9__20_1_1(L_6);
			G_B3_0 = L_6;
			G_B3_1 = G_B2_1;
		}

IL_0023:
		{
			RuntimeObject* L_7 = Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258((RuntimeObject*)(RuntimeObject*)G_B3_1, G_B3_0, /*hidden argument*/Enumerable_Select_TisRuntimeObject_TisType_t_m9172D480F276E4D46B7848B73E3042F3A9771258_RuntimeMethod_var);
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_8 = Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945(L_7, /*hidden argument*/Enumerable_ToArray_TisType_t_mDB744C25D97BD49BD70979DC17395D271EA84945_RuntimeMethod_var);
			V_0 = L_8;
			Type_t * L_9 = __this->get_type_0();
			TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_10 = V_0;
			NullCheck(L_9);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_11 = Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C(L_9, L_10, /*hidden argument*/NULL);
			V_1 = L_11;
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_12 = V_1;
			if (!L_12)
			{
				goto IL_0052;
			}
		}

IL_003e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(JsonTypeReflector_t4C6BD9BC9EF9527B5AB0C95FF2945BCCFB07B7EC_il2cpp_TypeInfo_var);
			ReflectionDelegateFactory_tBCB2E4D5639132D3DFF7CA2CFFAB903183670A16 * L_13 = JsonTypeReflector_get_ReflectionDelegateFactory_mD5A0D3AA68CA62CCD31B219ED5B1C03C63AAAEC6(/*hidden argument*/NULL);
			ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_14 = V_1;
			NullCheck(L_13);
			ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B * L_15 = VirtFuncInvoker1< ObjectConstructor_1_t278129D4AAB5A6571534946CF0CFC112FD9A083B *, MethodBase_t * >::Invoke(5 /* Newtonsoft.Json.Serialization.ObjectConstructor`1<System.Object> Newtonsoft.Json.Utilities.ReflectionDelegateFactory::CreateParameterizedConstructor(System.Reflection.MethodBase) */, L_13, L_14);
			ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_16 = ___parameters0;
			NullCheck(L_15);
			RuntimeObject * L_17 = ObjectConstructor_1_Invoke_mE81DB4C62C8D2F60FF83F56FB36AE9FC3BE4103B(L_15, L_16, /*hidden argument*/ObjectConstructor_1_Invoke_mE81DB4C62C8D2F60FF83F56FB36AE9FC3BE4103B_RuntimeMethod_var);
			V_2 = L_17;
			goto IL_00bb;
		}

IL_0052:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_18 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_19 = __this->get_type_0();
			String_t* L_20 = StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D(_stringLiteral23B435163284C2F25AE5E84212B0650024F0760B, L_18, L_19, /*hidden argument*/NULL);
			JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 * L_21 = (JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 *)il2cpp_codegen_object_new(JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32_il2cpp_TypeInfo_var);
			JsonException__ctor_mF60EC8D80BCE3097C5F731299209E8C4FD800D32(L_21, L_20, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_21, U3CU3Ec__DisplayClass20_0_U3CGetCreatorU3Eb__0_m987F7CF1E29CCD749193506951C9C0348D193BCB_RuntimeMethod_var);
		}

IL_006d:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_22 = __this->get_defaultConstructor_1();
			if (L_22)
			{
				goto IL_0090;
			}
		}

IL_0075:
		{
			IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
			CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_23 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
			Type_t * L_24 = __this->get_type_0();
			String_t* L_25 = StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D(_stringLiteral92A38C953A6126D97ED1B04B582F3B4519E7D184, L_23, L_24, /*hidden argument*/NULL);
			JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 * L_26 = (JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 *)il2cpp_codegen_object_new(JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32_il2cpp_TypeInfo_var);
			JsonException__ctor_mF60EC8D80BCE3097C5F731299209E8C4FD800D32(L_26, L_25, /*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, U3CU3Ec__DisplayClass20_0_U3CGetCreatorU3Eb__0_m987F7CF1E29CCD749193506951C9C0348D193BCB_RuntimeMethod_var);
		}

IL_0090:
		{
			Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_27 = __this->get_defaultConstructor_1();
			NullCheck(L_27);
			RuntimeObject * L_28 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_27, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
			V_2 = L_28;
			goto IL_00bb;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_009e;
		throw e;
	}

CATCH_009e:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t *)__exception_local);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98_il2cpp_TypeInfo_var);
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_29 = CultureInfo_get_InvariantCulture_m9FAAFAF8A00091EE1FCB7098AD3F163ECDF02164(/*hidden argument*/NULL);
		Type_t * L_30 = __this->get_type_0();
		String_t* L_31 = StringUtils_FormatWith_mF78320AE4049E77D6DDEC01680F7D98C44E2442D(_stringLiteral6699410DAF356A90DFDDE06D8F3571412FFE4442, L_29, L_30, /*hidden argument*/NULL);
		Exception_t * L_32 = V_3;
		JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 * L_33 = (JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32 *)il2cpp_codegen_object_new(JsonException_t574EB792A58D700737FC98459B93FAF9C33A5C32_il2cpp_TypeInfo_var);
		JsonException__ctor_mEEBCB87D800D5FF413A4B0B17783DE362C8C8B2F(L_33, L_31, L_32, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, U3CU3Ec__DisplayClass20_0_U3CGetCreatorU3Eb__0_m987F7CF1E29CCD749193506951C9C0348D193BCB_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_00bb:
	{
		RuntimeObject * L_34 = V_2;
		return L_34;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_mD2FC00D4390F4313D4BB7BDA84E21AEEC8E30905 (U3CU3Ec__DisplayClass3_0_t698D68F8A4832DC94BD91657BD958CE2ECB410E0 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__0_m3B6E3896DB55426A7BCBA2E3F4798B1B3CA9F572 (U3CU3Ec__DisplayClass3_0_t698D68F8A4832DC94BD91657BD958CE2ECB410E0 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ___a0;
		V_0 = L_0;
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_1 = __this->get_c_0();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = V_0;
		NullCheck(L_1);
		RuntimeObject * L_3 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Object Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory_<>c__DisplayClass3_0::<CreateParameterizedConstructor>b__1(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass3_0_U3CCreateParameterizedConstructorU3Eb__1_mA1EB9CF9119962212F08D067D713E1E43822B606 (U3CU3Ec__DisplayClass3_0_t698D68F8A4832DC94BD91657BD958CE2ECB410E0 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___a0, const RuntimeMethod* method)
{
	{
		MethodBase_t * L_0 = __this->get_method_1();
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___a0;
		NullCheck(L_0);
		RuntimeObject * L_2 = MethodBase_Invoke_m5DA5E74F34F8FFA8133445BAE0266FD54F7D4EB3(L_0, NULL, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.PropertyNameTable_Entry::.ctor(System.String,System.Int32,Newtonsoft.Json.Utilities.PropertyNameTable_Entry)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Entry__ctor_m6EA60CD174E302820D6EE496A08E9D047D936F8F (Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8 * __this, String_t* ___value0, int32_t ___hashCode1, Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8 * ___next2, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___value0;
		__this->set_Value_0(L_0);
		int32_t L_1 = ___hashCode1;
		__this->set_HashCode_1(L_1);
		Entry_t1BC8C3965C88BA8AA4105A94190D967CA4F57FE8 * L_2 = ___next2;
		__this->set_Next_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_0__ctor_m194BBD26BC7DA32EC4879BE571E60D14A58AB2C8 (U3CU3Ec__DisplayClass13_0_tD27FF2F8A49FF27EF149F9E61BB6C981251F9544 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_0::<Create>b__0(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m1916C10C0CB08965E2A5FDA9C7927E1D792DD06A (U3CU3Ec__DisplayClass13_0_tD27FF2F8A49FF27EF149F9E61BB6C981251F9544 * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_0_U3CCreateU3Eb__0_m1916C10C0CB08965E2A5FDA9C7927E1D792DD06A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_0 = __this->get_ctor_0();
		NullCheck(L_0);
		RuntimeObject * L_1 = Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726(L_0, /*hidden argument*/Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_RuntimeMethod_var);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_1__ctor_mC40724E6465DF77E0B9F1AA336696A8A7532950D (U3CU3Ec__DisplayClass13_1_t414A08FA62A08F6B9CB2E1510140AB05021714E8 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Object Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_1::<Create>b__1(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_mCCC4412A143E54E9BE84A5F07B6669851E1F5568 (U3CU3Ec__DisplayClass13_1_t414A08FA62A08F6B9CB2E1510140AB05021714E8 * __this, RuntimeObject * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_1_U3CCreateU3Eb__1_mCCC4412A143E54E9BE84A5F07B6669851E1F5568_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)0);
		NullCheck(L_0);
		RuntimeObject * L_3 = MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E(L_0, L_1, L_2, /*hidden argument*/MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E_RuntimeMethod_var);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_2__ctor_m04577715D78911D1017E05613577AD31B44FC8E1 (U3CU3Ec__DisplayClass13_2_tA55985BA4FFD8AF33D671764AB13EC410498FBCE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionObject_<>c__DisplayClass13_2::<Create>b__2(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m0C4B4C711AD85E71827E280A4AE041B65E6F7CC1 (U3CU3Ec__DisplayClass13_2_tA55985BA4FFD8AF33D671764AB13EC410498FBCE * __this, RuntimeObject * ___target0, RuntimeObject * ___arg1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass13_2_U3CCreateU3Eb__2_m0C4B4C711AD85E71827E280A4AE041B65E6F7CC1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MethodCall_2_t9ECB572095D2FA2D1018C15B4B73F43C6C55E363 * L_0 = __this->get_call_0();
		RuntimeObject * L_1 = ___target0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE_il2cpp_TypeInfo_var, (uint32_t)1);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = L_2;
		RuntimeObject * L_4 = ___arg1;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)L_4);
		NullCheck(L_0);
		MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E(L_0, L_1, L_3, /*hidden argument*/MethodCall_2_Invoke_m66E73F1FB9A42A4790F6DD6D448E53BE3AE1433E_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m79E2F51886AC0D350C73A7341E570086801F28F1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m79E2F51886AC0D350C73A7341E570086801F28F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * L_0 = (U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B *)il2cpp_codegen_object_new(U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mF109C838FBEC05DBB2F0E89B8543BE1E18D1F902(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mF109C838FBEC05DBB2F0E89B8543BE1E18D1F902 (U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils_<>c::<GetDefaultConstructor>b__10_0(System.Reflection.ConstructorInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_mEBAC516691175B5FD7C7844C45C45898D3478DF6 (U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * __this, ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * ___c0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec_U3CGetDefaultConstructorU3Eb__10_0_mEBAC516691175B5FD7C7844C45C45898D3478DF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_0 = ___c0;
		NullCheck(L_0);
		ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* L_1 = VirtFuncInvoker0< ParameterInfoU5BU5D_tB1B367487BAA9E1B2DA7EAA95B443D0B183AF80B* >::Invoke(18 /* System.Reflection.ParameterInfo[] System.Reflection.MethodBase::GetParameters() */, L_0);
		bool L_2 = Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F((RuntimeObject*)(RuntimeObject*)L_1, /*hidden argument*/Enumerable_Any_TisParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7_mC34A3CF45962BF5A4FDF04D029B51F4B0CFD938F_RuntimeMethod_var);
		return (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
	}
}
// System.String Newtonsoft.Json.Utilities.ReflectionUtils_<>c::<GetFieldsAndProperties>b__29_0(System.Reflection.MemberInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3CGetFieldsAndPropertiesU3Eb__29_0_m183FF91D6BBD2D1F05B4E57E690128FC298B35B1 (U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * __this, MemberInfo_t * ___m0, const RuntimeMethod* method)
{
	{
		MemberInfo_t * L_0 = ___m0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		return L_1;
	}
}
// System.Type Newtonsoft.Json.Utilities.ReflectionUtils_<>c::<GetMemberInfoFromType>b__37_0(System.Reflection.ParameterInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * U3CU3Ec_U3CGetMemberInfoFromTypeU3Eb__37_0_m871095E1FABE62782EA72E595F1E18E758F07850 (U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * __this, ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * ___p0, const RuntimeMethod* method)
{
	{
		ParameterInfo_t9D9DBDD93E685815E35F4F6D6F58E90EBC8852B7 * L_0 = ___p0;
		NullCheck(L_0);
		Type_t * L_1 = VirtFuncInvoker0< Type_t * >::Invoke(8 /* System.Type System.Reflection.ParameterInfo::get_ParameterType() */, L_0);
		return L_1;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils_<>c::<GetChildPrivateFields>b__39_0(System.Reflection.FieldInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetChildPrivateFieldsU3Eb__39_0_m0D7F2247B937D9C2120BD8779A685032A08FFD39 (U3CU3Ec_t87B663D83EAE8982030BB4BF4A7FB9C4BEAC982B * __this, FieldInfo_t * ___f0, const RuntimeMethod* method)
{
	{
		FieldInfo_t * L_0 = ___f0;
		NullCheck(L_0);
		bool L_1 = FieldInfo_get_IsPrivate_m33AC8E111CE7497070E6F65F11E68CD536D42072(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Utilities.ReflectionUtils_<>c__DisplayClass42_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass42_0__ctor_m41469F7DA375544E91F8CDCE9BD78BBDA4D3DC82 (U3CU3Ec__DisplayClass42_0_tA195C0D57C247970275535F099F05968450BDC91 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils_<>c__DisplayClass42_0::<GetChildPrivateProperties>b__0(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__0_m5380F6591C2980BEB7CB9E82A691AAC2D17A5CE3 (U3CU3Ec__DisplayClass42_0_tA195C0D57C247970275535F099F05968450BDC91 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils_<>c__DisplayClass42_0::<GetChildPrivateProperties>b__1(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__1_m87A8496C6B2964587C139987D42A5D22EB605FCE (U3CU3Ec__DisplayClass42_0_tA195C0D57C247970275535F099F05968450BDC91 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_002c;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		NullCheck(L_5);
		Type_t * L_6 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_5);
		PropertyInfo_t * L_7 = __this->get_subTypeProperty_0();
		NullCheck(L_7);
		Type_t * L_8 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_7);
		return (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
	}

IL_002c:
	{
		return (bool)0;
	}
}
// System.Boolean Newtonsoft.Json.Utilities.ReflectionUtils_<>c__DisplayClass42_0::<GetChildPrivateProperties>b__2(System.Reflection.PropertyInfo)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m222C3A1773447DE952CDB65AD6316A411747C3E5 (U3CU3Ec__DisplayClass42_0_tA195C0D57C247970275535F099F05968450BDC91 * __this, PropertyInfo_t * ___p0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__DisplayClass42_0_U3CGetChildPrivatePropertiesU3Eb__2_m222C3A1773447DE952CDB65AD6316A411747C3E5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyInfo_t * L_0 = ___p0;
		NullCheck(L_0);
		String_t* L_1 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_0);
		PropertyInfo_t * L_2 = __this->get_subTypeProperty_0();
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(8 /* System.String System.Reflection.MemberInfo::get_Name() */, L_2);
		bool L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_5 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		bool L_6 = ReflectionUtils_IsVirtual_mDAB826DEBE824D7B3DED6ACE9F582D37ADBDECD1(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_7 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		MethodInfo_t * L_8 = ReflectionUtils_GetBaseDefinition_m1495E37E8666896240BC6A5904F061950A1783CB(L_7, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_0049;
		}
	}
	{
		PropertyInfo_t * L_9 = ___p0;
		IL2CPP_RUNTIME_CLASS_INIT(ReflectionUtils_t52FD79CBF528CE948B0F0D12C860FF87C1A5213B_il2cpp_TypeInfo_var);
		MethodInfo_t * L_10 = ReflectionUtils_GetBaseDefinition_m1495E37E8666896240BC6A5904F061950A1783CB(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		Type_t * L_11 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_10);
		PropertyInfo_t * L_12 = __this->get_subTypeProperty_0();
		MethodInfo_t * L_13 = ReflectionUtils_GetBaseDefinition_m1495E37E8666896240BC6A5904F061950A1783CB(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		Type_t * L_14 = VirtFuncInvoker0< Type_t * >::Invoke(9 /* System.Type System.Reflection.MemberInfo::get_DeclaringType() */, L_13);
		NullCheck(L_11);
		bool L_15 = VirtFuncInvoker1< bool, Type_t * >::Invoke(113 /* System.Boolean System.Type::IsAssignableFrom(System.Type) */, L_11, L_14);
		return L_15;
	}

IL_0049:
	{
		return (bool)0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1__ctor_mBEF84F4FECA516310F51ECF6074B5481DCBAFC03 (U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_IDisposable_Dispose_mA92E2DDC3E696AEC9BCD508B7BB6ECDD77F2D073 (U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CGetEnumeratorU3Ed__1_MoveNext_mCCC5F2909EDC633273DE2984C6CA135433E8B048 (U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_003e;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_4 = L_3->get__token_0();
		if (!L_4)
		{
			goto IL_0045;
		}
	}
	{
		JPropertyList_tCBF3CEB2299F76F91E4D82309B3E8D2FFCD65FC5 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_6 = L_5->get__token_0();
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003e:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0045:
	{
		return (bool)0;
	}
}
// Newtonsoft.Json.Linq.JToken Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<Newtonsoft.Json.Linq.JToken>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * U3CGetEnumeratorU3Ed__1_System_Collections_Generic_IEnumeratorU3CNewtonsoft_Json_Linq_JTokenU3E_get_Current_m16D68E785A0158DEE617A1FE6F12A8BE24C6F5C6 (U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF * __this, const RuntimeMethod* method)
{
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m6F252151C10498E360A4F8EF03F696DD2B40D602 (U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m6F252151C10498E360A4F8EF03F696DD2B40D602_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_Reset_m6F252151C10498E360A4F8EF03F696DD2B40D602_RuntimeMethod_var);
	}
}
// System.Object Newtonsoft.Json.Linq.JProperty_JPropertyList_<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CGetEnumeratorU3Ed__1_System_Collections_IEnumerator_get_Current_mC7CBC21C88488C98341AA6BE60B435673B98AD3E (U3CGetEnumeratorU3Ed__1_tD367F85DA46C5BCC4F55C9F8A7D40C15A7B056BF * __this, const RuntimeMethod* method)
{
	{
		JToken_t517F0381C4450A4525D6FA3480318381CE06C980 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Regex_get_Options_m96441AFDEDDDDC9AD8A21C54C1C05B63581154E2_inline (Regex_t90F443D398F44965EA241A652ED75DF5BA072A1F * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_roptions_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringBuffer_get_Position_m424CA0E4A0274918489C5986D189CB6DDEA6F11F_inline (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__position_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringBuffer_set_Position_mE931269D642EEE14E2D84EEE1F0706536D65401F_inline (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set__position_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* StringBuffer_get_InternalBuffer_mF41DB26CCDD88E4ACE7B65840ADB74BF5EEE748A_inline (StringBuffer_tF4799481D39E8C84F4DC0F0C9FA4B7318094A325 * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get__buffer_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StringEnumConverter_set_AllowIntegerValues_mEACC7F32E56720B5672D222F6F091D725CCD9AD7_inline (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CAllowIntegerValuesU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringEnumConverter_get_CamelCaseText_m6FAE5CD5B17B260B07290EF17A3A299CF27CF455_inline (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CCamelCaseTextU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool StringEnumConverter_get_AllowIntegerValues_m2373FC3B126C386FFD4BDB64E65B4175E44EFE45_inline (StringEnumConverter_tB590EC0862256B6A0C600A3AE4166A48FDB0545E * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CAllowIntegerValuesU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* StringReference_get_Chars_m5EF63176FDB3554674E394261BE5786170C47024_inline (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method)
{
	{
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_0 = __this->get__chars_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringReference_get_StartIndex_mB09EFAA44487DB78CF15BDF61052689823A4C2C9_inline (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__startIndex_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StringReference_get_Length_m194CFDC809C99311F4040820C9F4A3B5E5F77EA4_inline (StringReference_tF51D47B7A913E2F501FC14FB1B432AD2DEC8E27C * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__length_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_Culture_mDEE561B11776B97A927F1300FF7B6A3ADE81B2CA_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * ___value0, const RuntimeMethod* method)
{
	{
		CultureInfo_t1B787142231DB79ABDCE0659823F908A040E9A98 * L_0 = ___value0;
		__this->set__culture_12(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateFormatHandling_m41BD1D20C51ECF8DA8202C37B62A9FF0E28823DD_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__dateFormatHandling_7();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonWriter_get_DateFormatString_m69A32477FF1B1AF8DF997B4D018C24BD5825FCCB_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__dateFormatString_11();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void JsonWriter_set_DateFormatString_mF4ECA8F9127550A893C594291DBFBB0BA1B31F3F_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set__dateFormatString_11(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_DateTimeZoneHandling_mD0C65660E7AE6E3C2FA819B280CCB795B7A2728A_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__dateTimeZoneHandling_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t JsonWriter_get_FloatFormatHandling_mD88C6F4D05A2BA565E093D2D864537B3BB78FF52_inline (JsonWriter_tDA82E9438C69ABAC3DF260ADBF20E9E287D41BB2 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get__floatFormatHandling_10();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_InitialType_m0F65A2432EB92CAA1377B113C1BAEF2C0283F634_inline (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__initialType_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Type_t * TypeConvertKey_get_TargetType_m8F2288FCB1DB8039CEE75810A72EC31B0085805D_inline (TypeConvertKey_t6256D13E7C0C6452BA4D3D6E3EC81001039CD1D7 * __this, const RuntimeMethod* method)
{
	{
		Type_t * L_0 = __this->get__targetType_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  JsonProperty_get_Order_mEF3E149DB2B59B8CA34317D3C09DFF703F31EF81_inline (JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * __this, const RuntimeMethod* method)
{
	{
		Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103  L_0 = __this->get_U3COrderU3Ek__BackingField_9();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* EnumMemberAttribute_get_Value_mC26949F87E6A636CF952151DC4F77110050627A3_inline (EnumMemberAttribute_t3EFC3FD8E6B03AE6083C53E8DB2AC8E3C797D4AC * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JProperty_get_Name_m1F999A1D1AB6DE471307B863143DFE0713496E56_inline (JProperty_tB646FD797A179FDECFEBD47618AC247767EE1445 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__name_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* JsonProperty_get_PropertyName_m72817401FC680F87EC4202862CD5B52CF6300C60_inline (JsonProperty_t41E840165F50D3CE4A2E9A48DD6064FCD59AAA0D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get__propertyName_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m4C033F49F5318E94BC8CBA9CE5175EFDBFADEF9C_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mA8DDAB2C6553ED7FFC9A55E1A92A96B3571000EC_gshared_inline (Nullable_1_t64244F99361E39CBE565C5E89436C898F18DF5DC * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m7455E879CFAAE682AE3786D4D2B1F65C8AA23921_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Nullable_1_GetValueOrDefault_mB4CE6E77EC85DD762FDA6C24F96EBC2A75E28546_gshared_inline (Nullable_1_t864FD0051A05D37F91C857AB496BFCB3FE756103 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_value_0();
		return L_0;
	}
}
