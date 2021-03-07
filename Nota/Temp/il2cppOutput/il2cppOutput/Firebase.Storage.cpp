﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericVirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
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
template <typename R>
struct GenericInterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct GenericInterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Threading.CancellationCallbackInfo
struct CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// Firebase.Storage.ControllerInternal
struct ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Firebase.Platform.FirebaseAppPlatform
struct FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5;
// Firebase.Storage.FirebaseStorage
struct FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91;
// Firebase.Storage.FirebaseStorageInternal
struct FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36;
// Firebase.Storage.Future_StorageMetadata
struct Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// Firebase.Storage.MetadataChange
struct MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1;
// Firebase.Storage.MetadataInternal
struct MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Firebase.Storage.Internal.ModuleLogger
struct ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608;
// Firebase.Storage.MonitorControllerInternal
struct MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// Firebase.Storage.StorageException
struct StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A;
// Firebase.Storage.StorageMetadata
struct StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060;
// Firebase.Storage.StorageReference
struct StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F;
// Firebase.Storage.StorageReferenceInternal
struct StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// Firebase.Storage.Internal.TransferState
struct TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935;
// Firebase.Storage.UploadState
struct UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C;
// System.UriParser
struct UriParser_t6DEBE5C6CDC3C29C9019CD951C7ECEBD6A5D3E3A;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Firebase.FirebaseApp/CreateDelegate
struct CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0;
// Firebase.FutureString/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4;
// Firebase.Storage.Future_StorageMetadata/<GetTask>c__AnonStorey0
struct U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7;
// Firebase.Storage.Future_StorageMetadata/Action
struct Action_t1A01C351F74C95684C76A3BE30208EADA4B35480;
// Firebase.Storage.Future_StorageMetadata/SWIG_CompletionDelegate
struct SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699;
// Firebase.Storage.MonitorControllerInternal/<Create>c__AnonStorey0
struct U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91;
// Firebase.Storage.MonitorControllerInternal/<OnPaused>c__AnonStorey1
struct U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C;
// Firebase.Storage.MonitorControllerInternal/<OnProgress>c__AnonStorey2
struct U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1;
// Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate
struct MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93;
// Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper
struct SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB;
// Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper
struct SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2;
// Firebase.Storage.StorageReference/<GetDownloadUrlAsync>c__AnonStoreyA
struct U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555;
// Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1
struct U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA;
// Firebase.Storage.StorageReference/<PutBytesUsingMonitorControllerAsync>c__AnonStorey0
struct U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826;
// Firebase.Storage.StorageReference/TaskCompletionStatus
struct TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// System.Uri/UriInfo
struct UriInfo_tCB2302A896132D1F70E47C3895FAB9A0F2A6EE45;
// Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate
struct ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328;
// Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate
struct ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB;
// Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate
struct SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB;
// Firebase.Storage.StorageReference/<GetDownloadUrlAsync>c__AnonStoreyA/<GetDownloadUrlAsync>c__AnonStoreyB
struct U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9;
// Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1/<PutBytesUsingCompletionSourceAsync>c__AnonStorey2
struct U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E;
// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A;
// System.Action`1<System.Threading.Tasks.Task`1<System.Object>>
struct Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D;
// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>
struct Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>
struct Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString/Action>
struct Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B;
// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>
struct Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp>
struct Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>
struct Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F;
// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp>
struct Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D;
// System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>
struct Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11;
// System.EventHandler`1<System.EventArgs>
struct EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722;
// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB;
// System.Func`1<Firebase.DependencyStatus>
struct Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC;
// System.Func`1<Firebase.Storage.StorageMetadata>
struct Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`1<System.Boolean>
struct Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Uri>
struct Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079;
// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>,System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct Func_2_t269638A3911C516EB54F9DF88A1F457387FEA32B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>>
struct Func_2_t25715FE444A3D770EDADDAB8122A7DE9F227A6EB;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>>
struct Func_2_tDB0094BB334243781876233C835779F769F7183D;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.String>>
struct Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Uri>>
struct Func_2_t50869D0C8AE5184B71F6759B5520DAE40D9502CE;
// System.Func`2<System.Threading.Tasks.Task`1<System.Object>,System.Object>
struct Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>>
struct Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91;
// System.Collections.Generic.IEnumerator`1<System.Exception>
struct IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t2DC97C7D486BF9E077C2BC2E517E434F393AA76E;
// System.Collections.Generic.IEqualityComparer`1<Firebase.Storage.ErrorInternal>
struct IEqualityComparer_1_t0D7B98EB6DFA29C03951855DA0E158903637C1B7;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.IntPtr>
struct IEqualityComparer_1_t19B34EAD810249AF015A661D23DF1909EADEB101;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IList`1<System.Exception>
struct IList_1_tB51174A6DE5821B98ECC7865DCD68970EC83EC0F;
// System.IProgress`1<Firebase.Storage.UploadState>
struct IProgress_1_tC33211938D8AC03940EB9F664C6DBF5DB7499B7C;
// System.IProgress`1<System.Object>
struct IProgress_1_t7EC2362B7BE7179B33B71A0350049D2A75686FA7;
// System.Collections.Generic.Dictionary`2/KeyCollection<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>
struct KeyCollection_t17D84159BD9C3E51D774301DEA95F3FA7AE41A09;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>
struct KeyCollection_t5DD9E03426D1A49EC417202AEEE87DE5176D16EF;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.IntPtr,System.WeakReference>
struct KeyCollection_t858959191232E5F0DE0B198A7CEA49D6D25E7692;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,Firebase.Storage.FirebaseStorage>
struct KeyCollection_t7FC536BDB3CCC976C51462CB743420B1B372B841;
// System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>
struct List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.WeakReference>
struct List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>
struct ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3;
// System.Threading.SparselyPopulatedArrayFragment`1<System.Threading.CancellationCallbackInfo>
struct SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>
struct TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738;
// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>
struct TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124;
// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903;
// System.Threading.Tasks.TaskCompletionSource`1<System.Uri>
struct TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B;
// System.Threading.Tasks.TaskFactory`1<Firebase.Storage.MetadataInternal>
struct TaskFactory_1_tB0AACF88AB7D7EB96315EE54BB2F3BA8F419B83C;
// System.Threading.Tasks.TaskFactory`1<Firebase.Storage.StorageMetadata>
struct TaskFactory_1_t9383B845905785E432D474115F7020535F37CD3D;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct TaskFactory_1_t5BF47ADB42BA2EA9324776C9D887F1ABD2BAF074;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<System.String>
struct TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB;
// System.Threading.Tasks.TaskFactory`1<System.Uri>
struct TaskFactory_1_tB6F880802E253554549EDB6C0254635FD04C7765;
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>
struct Task_1_t9744B6AD55320186C36CC7626916272750E46384;
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>
struct Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct Task_1_t25BD7331494EE1D3795B89B7038987A39373E015;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<System.Object>>
struct Task_1_t4A805773480425D0A659D93F81B4A3568D8C50CA;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.String>
struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3;
// System.Threading.Tasks.Task`1<System.Uri>
struct Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD;
// Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>
struct TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809;
// Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>
struct TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16;
// System.Tuple`2<System.Int32,System.Int32Enum>
struct Tuple_2_tA8C0380315DDBC685CC273129020D3C7192B905D;
// System.Tuple`2<System.Int32,System.Net.HttpStatusCode>
struct Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5;
// System.Collections.Generic.Dictionary`2/ValueCollection<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>
struct ValueCollection_t2AD4D8DCB989FEE85D3AB2623EF407BE608F212D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>
struct ValueCollection_t9BA954E1B3C781669C6B19BB746C97D32DAC7BFF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.IntPtr,System.WeakReference>
struct ValueCollection_tBD07BD0576E2D88B0FC164F7BCE60638B86687AA;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Firebase.Storage.FirebaseStorage>
struct ValueCollection_t3EEC18FD2BA84EB669EAF72FDCD50486CD9E76AD;
// System.Action
struct Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6;
// System.AggregateException
struct AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1;
// Firebase.AppOptions
struct AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F;
// System.ApplicationException
struct ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.ArithmeticException
struct ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate
struct Delegate_t;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.DivideByZeroException
struct DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3;
// System.Collections.Generic.Dictionary`2/Entry<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>[]
struct EntryU5BU5D_t70D018AAE686B4442C0E9E2D8F77F482826CF3B1;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>[]
struct EntryU5BU5D_t921E0DF954BC2122845AEB46C8D635E96B117F72;
// System.Collections.Generic.Dictionary`2/Entry<System.IntPtr,System.WeakReference>[]
struct EntryU5BU5D_tA8DBF9909BBBC9BDD52A53A08C138753F0CEBA18;
// System.Collections.Generic.Dictionary`2/Entry<System.String,Firebase.Storage.FirebaseStorage>[]
struct EntryU5BU5D_t9D59D7003E1A695BB8208F0145633A4948545879;
// System.EventArgs
struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA;
// System.EventHandler
struct EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B;
// System.Exception
struct Exception_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// Firebase.FirebaseApp
struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D;
// Firebase.FirebaseException
struct FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47;
// Firebase.FutureBase
struct FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4;
// Firebase.FutureString
struct FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.IO.IOException
struct IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.InvalidCastException
struct InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463;
// System.InvalidOperationException
struct InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB;
// Firebase.Storage.Internal.ModuleLogger[]
struct ModuleLoggerU5BU5D_tACD3DC43F0F475AD3331132CE36581CD1B5ACF84;
// System.NullReferenceException
struct NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724;
// System.OutOfMemoryException
struct OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC;
// System.OverflowException
struct OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// System.Uri
struct Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612;
// System.WeakReference
struct WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76;
// System.WeakReference[]
struct WeakReferenceU5BU5D_t22BA889724BAED024D73816F36AC821BC9D320F6;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_t1A01C351F74C95684C76A3BE30208EADA4B35480_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FieldAccessException_t88FFE38715CE4D411C1174EBBD26BC4BC583AD1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TargetException_t24392281B50548C1502540A59617BC50E2EAF8C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral001FAA6D3CC28196BCAAE1682C7C0948845703F0;
IL2CPP_EXTERN_C String_t* _stringLiteral0B47BC9031A69F662702621810EC706E2C081467;
IL2CPP_EXTERN_C String_t* _stringLiteral14EACC5384CECC75A8982A1F46DE55705CB54DFD;
IL2CPP_EXTERN_C String_t* _stringLiteral1B2C5CD5AD315F121A16E97051C59081DE484465;
IL2CPP_EXTERN_C String_t* _stringLiteral1CB4C6D8E752BD4A976FB4BF3FD6276F3FF8A77A;
IL2CPP_EXTERN_C String_t* _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
IL2CPP_EXTERN_C String_t* _stringLiteral21ACA7A9F2007E52DEC2066F7037F9F7456B3B91;
IL2CPP_EXTERN_C String_t* _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745;
IL2CPP_EXTERN_C String_t* _stringLiteral23D374B805E7C318DEBA3F3DF4C1304D85FADD6C;
IL2CPP_EXTERN_C String_t* _stringLiteral25B302D60E13CE4F75DBA8F5B002C2B1AD81C5A1;
IL2CPP_EXTERN_C String_t* _stringLiteral2735032CF824904F31866A3DDD0204F0B7FE22CD;
IL2CPP_EXTERN_C String_t* _stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F;
IL2CPP_EXTERN_C String_t* _stringLiteral3D736BA169A8DC89DC353AD0EAA96FE683CA1B2D;
IL2CPP_EXTERN_C String_t* _stringLiteral3EEAB15902D7B9E5B95F0F17AA9E004D9C742836;
IL2CPP_EXTERN_C String_t* _stringLiteral407476E0245E9411EC476740A1368498AC28A67F;
IL2CPP_EXTERN_C String_t* _stringLiteral465D8053A968C034065EEA4680E5BA0DA4E093BA;
IL2CPP_EXTERN_C String_t* _stringLiteral47B60EB9A7DD966F2D170292CD7E78CEE515C121;
IL2CPP_EXTERN_C String_t* _stringLiteral48D4D8ED8E68AFC8225395CC9DDC336D97D83573;
IL2CPP_EXTERN_C String_t* _stringLiteral492E12A1EA6FD8EAA33E4BE4E8391BE2B07462CF;
IL2CPP_EXTERN_C String_t* _stringLiteral51269C898D1575314B2DB88966C1E86552B6863A;
IL2CPP_EXTERN_C String_t* _stringLiteral5258266D8258C1C3EBCEA3316BAE21542E7FFC60;
IL2CPP_EXTERN_C String_t* _stringLiteral59358F49E2B3138E277F9DD45CD625C26DE28B03;
IL2CPP_EXTERN_C String_t* _stringLiteral5B60826B672AE8FDF846D50BC3A8441BCD134FF9;
IL2CPP_EXTERN_C String_t* _stringLiteral7624E265BB383FB22ED234A2DC36A755B34594EC;
IL2CPP_EXTERN_C String_t* _stringLiteral86149811E84E20CCC982587E52B8CF7A38EF9589;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral8E0D467E808FBDA0581E9B787E361A39CCD1302A;
IL2CPP_EXTERN_C String_t* _stringLiteral9AA76BBF7EB0D3B88FF0AE06C7A8FE8CF8BE2236;
IL2CPP_EXTERN_C String_t* _stringLiteral9BBCAE8C0C6F0957BF6DE7D5A947F5C084B3F4A7;
IL2CPP_EXTERN_C String_t* _stringLiteral9E4AFE5694A4F8055A4D886D9E15DC3AFBFC53BE;
IL2CPP_EXTERN_C String_t* _stringLiteral9F801AE6E6E2D908D38CEB0291DD9138A0955C1F;
IL2CPP_EXTERN_C String_t* _stringLiteral9FE7C8888EB04B126D755228521F465454FD6B21;
IL2CPP_EXTERN_C String_t* _stringLiteralA709CBC3188708C18877C22E6AF1D6538EB08EAD;
IL2CPP_EXTERN_C String_t* _stringLiteralAA9E04A4F0FAA2410217C8B3DD5093BC82D04A7E;
IL2CPP_EXTERN_C String_t* _stringLiteralABBB41CC11C60D234659F31874B9FB7B8DD1259D;
IL2CPP_EXTERN_C String_t* _stringLiteralB121E7338C61F36A1C41A66ACE3BC040CD083E7D;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB703A2BE7C7C622C41AA27448E688623872F3623;
IL2CPP_EXTERN_C String_t* _stringLiteralBD2C0B3974A906DFD731ADCD696F181498081EC5;
IL2CPP_EXTERN_C String_t* _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE;
IL2CPP_EXTERN_C String_t* _stringLiteralE452FBB4FDE6913F8CF541DF8BB1626D735FD33E;
IL2CPP_EXTERN_C String_t* _stringLiteralE5ACD853F8874D5E90622ED276C4C96160520552;
IL2CPP_EXTERN_C String_t* _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A;
IL2CPP_EXTERN_C String_t* _stringLiteralFE45832FA8619B51BADFA5FA6E889D63BD0649CB;
IL2CPP_EXTERN_C String_t* _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m5537F6CA859251E8D7793A74B4D15A6FA29FD319_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_mBB7F7BEA488977932D354CC486E7EECC39F6F65E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ControllerInternal_Cancel_m09455A3E886138D02F2AB5CBCDB0F59D06837600_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m313F3480769BF130D3890DCD1F9917B4836D3ECF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mB1A6EC5F52415194B87D88ABD8D605FF62BD9548_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mC3B3EE0C566D6AB2793E53A4FEC43EA58786ECCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m080F9F073DBB321B63576C2BDAAEEBAF134546A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_m949CD363E60929CBCA66B51BCCA4EDF8F0EA4B12_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mAD449DBAABB82E3F179221AC5C3F4C4D059331D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mC7C2819D0F27E73CB10A73163ACE0D5F504EAC09_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m0BC474EDF4502EC7B33C88B37D646A9FBBD67B5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m65F6790350CA62B5AB371DD62E55278707281A2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m8032C2FE80E98D3C44CF88FFC5F60C88D981BD3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mC123202C4E90DFC3FFED4883F6B392A6C49D463E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m2061781CAABA74A552DE840861C37F546E9A6A73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mC1322A23CE40537452EA237A1FCD7F852C10BBA9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_mF007077FE1D3B13F3DA69B4205011879E6AC84AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m6C512C3F9B96B0A6F943F8F79F065B2539D72F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mF3E688796FD192420538BA3193746ABE46E11C18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mF65B301C5D049845A6ECD5B80754E25F76B227EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_GetInstanceInternal_m97EBB2762C810B78E695CFC2051C1ED259D36538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_GetReferenceFromUrl_mE8ACDA413CCCECC978A1F7EE27EFA935E9A9AF11_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_ReleaseReferenceInternal_m469E5D75647171C997032C08A100E1FDFC64D422_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_get_App_m4D9B68C2100C679EF71EAFD523E739D22D1BAD8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorageInternal_get_Url_m425C6396457782FF410100806B804B820E891085_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_GetInstanceInternal_m5F406685D26131AB6405BE7FD64B91FED3BA1396_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_GetReferenceFromUrl_mB5F25AA313AD7D2CD6AC6FAD0E52BA74CA8C29C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_OnAppDisposed_m8FFADE1C2D2DDAD4E0AEA367356BF42FBD64E539_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_ThrowIfNull_m392D1788F987DB111E04ED22499C897524442F1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FirebaseStorage_ValidateStorageReferenceInternal_m2DB5A7D4F8068258A09885D7B93585D9919D8F38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m31A959776B78F9A8F3D8A429A797A09895E6071B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m5C72D9FA73D9638CD3B9AB6A6E073D15BACF9416_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m79834B32DC11FA6ACB5E96ECF86ED900DDCF0CC6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_GetResult_m00904CA09846B2728A440B3FBBC84B91975BA3AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_SWIG_CompletionDispatcher_mBD53FFA5A73C38A7CD49CC9FFB189224CA7ED21D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_SWIG_FreeCompletionData_m3439C5D916D057735ECC4DBCB24D399B8C2EE20E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_SWIG_OnCompletion_mDD87DE88A0C881E1E8AF79A9A7CFC23F3CB51557_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Future_StorageMetadata_ThrowIfDisposed_m936E3F3BF89CB09FA692EC9A7CB73E0FB5163403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2710CA2DB82113D284343181B9F462898A2B0C83_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mB6897D4B3D836B0107EF00A49336597535967178_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m37E8EAFDF7065CE6B47C8D97497A1A1E9B0EBFE6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m11C54F533B343E973F475CFF0E9F862162A04BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m4D075AF8D24EA6C142A7431D2D4784F882D75B31_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mA92AA708E519485775F1D0E326DFC3425CC99D3D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mABCAEBACF4789B353E5F58E05ABB03419BFA12F2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MetadataInternal_CopyCppObject_mAAD5E2F0807126BFFA92ED2235E65BE4188B13B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_OnPaused_m6E500BCB6FF2708CD36D916E22CE29966A6B077D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_OnProgress_mDB71A8D606636D726A8462DD3C0FE7B66476C288_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_SetPausedEvent_mDF53613DCBE762F739808F13F09B46EB0BF33D14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_SetProgressEvent_m6555A4476F3B9BB68820EE8A049699123BC4DFAB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_U3CRegisterCancellationTokenU3Em__0_mE96C8370C568DB8323A65170E72E063DEE46F91B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal__ctor_m2015E8382F85E76DB9FA75786D69E3E803072CB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_get_BytesTransferred_m0A2F0CC3FD7967B5D3F9011B21153C34D3A416D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_get_Controller_m789601B36E247CC221E26783BD82DE9425294C29_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MonitorControllerInternal_get_TotalByteCount_m0F02F962C5E95B89DE97AE1D30DEC38251AB4B80_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingApplicationException_mE4A57C08BA674F90CB20212239445EE5861BCC2F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentException_m9E866960F2D8359572D1C86250FAD061750E9B47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentNullException_m66ADF14C992180DD55E0C4B7798D12610E887403_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m18DDFA77768CBA9275826A89B5DE593DDC446CF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingArithmeticException_mB82507CD2AB9F2F81984DC2EA437525F0E08A18E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingDivideByZeroException_m1F075F08BEEDD2FEE94538574AED1E286BA3BA85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIOException_mA195C481473D8F7DD7A70B92FE875D6E6377C94E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD7C5AB6A5F32F652353A15035EC9D6D2795FF8D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidCastException_m01055CF5321D305418D2965A985D6673C0840C3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingInvalidOperationException_m4251D47C148E02697222FBCB3227E13905556FBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingNullReferenceException_mBBFFC1B9A5704370E37374A37C255A185D9AD412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOutOfMemoryException_mD3BC4134504E186EFFC773B90C96F01DE0062174_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingOverflowException_m44402DD9964628721176A7177635DFF76A551917_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGExceptionHelper_SetPendingSystemException_m86EDF8DDD6B0B2A082E98B0B4A558EF79A98ECC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SWIGStringHelper_CreateString_mA4BAF503E92C6B62A953BB553C435E9F64506F20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_Child_mB213D92C1A792396860518C9BE34B3543AD2DC10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_GetDownloadUrlAsync_mE2E99BFDEAB4FCE8A4514051E455C71468BB167C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m34427017752A4B418BDC7C61F20DEA8A413056AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_get_Bucket_mBD757EA3852F9E8D7B829C208015CA5A5C747693_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_get_FullPath_m4AF95AC247E1CF014CB80235594DC0862C9EFB47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReferenceInternal_get_IsValid_mE6974AE9F4500567F662E861A6FCD0E35DAB028B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReference_CompleteTask_TisMetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_TisStorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_m3F52D66436B38764F6958A1A4B46B436895598B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* StorageReference_CompleteTask_TisString_t_TisUri_t4A915E1CC15B2C650F478099AD448E9466CBF612_mF243928C92BBEEFC2E723270865A46576D71A33F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetCanceled_mDEF5F6D8623C5992819FBBAC0377F9974DAA052B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetException_mB6C19B4DD3C5A9FEBE258E2EC15FF348EF5A9452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_SetResult_mF150EA4C2F543C3458DC99C93D2270543736347F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m0A82D3C746DB9615E72F614755DC5CC16DFD6EC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_m9E13EEB0EA2C4702B86E160FB8B4725A689E39BD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1__ctor_mF4FC8FACCC46FBC588CA6931AABC72ED28EF2213_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m4DA775DA9894E49F999A410C2F253966D03A937F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_m4F9A726939863963B5671ADBA686E23ADE0C4FB1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskCompletionSource_1_get_Task_mC4F854995F4E34D06EFF8645A2C7FE63A7E36E17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TaskExtensions_Unwrap_TisMetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_m6928684B9644695798212D113BE399471A512B74_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_TisTask_1_t9744B6AD55320186C36CC7626916272750E46384_mD7A2AA7BA6EE2952C6358BC73D2DE94EE2C081FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m3305B87C01A4BC1D29F7C00B61EF0A22AEC7FB22_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_ContinueWith_m75E3A577C38E74D9536362ED875D503E536E3204_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m49B9A0DA69ECD33F7F946948364A63C1EE1EEBA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_1_get_Result_m9A58CC099EC7938F5CE074298FF7480564DCB86E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransferStateUpdater_1_SetMetadata_m1BFF84F93583D678D9BA14C9520336DCBA3FE8DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransferStateUpdater_1__ctor_m3F575E78F6B369C6E80E27FA4A27F7BC7457681E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TransferStateUpdater_1_get_MonitorController_m350102272D1EA06E92156E09D9B3DE94803528CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item1_m98F4AF0ED6DFBCD88D8F3531AD46A8FDD67E19E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Tuple_2_get_Item2_mAE33F3B65B2728E482F543B8BB3F76506B91B9D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m42BB613D76FD25D6E6218B9718536EA82506A46A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m7872BFB32CE8E08BDD427E4B68E8A93FB97C1BAC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_m6520E2D9BCD0AADC0DA27D6FCBFEA51C9BAE8A17_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m6CE73665E5201212CE900DD8CAF94D0B9FA34CBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mDDB68359371D43F88C0B1D91A90B5ED88CCA8219_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_mFF44F0F1536A8782007269A2CF52DDDB723C8D8E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_m4CC08DAA01CFC4AB1E7D03B3F52B93FD0D87F4B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_mF4898EA52AAD56F0D7769A267C638C12B65E3400_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m78676667BD22EB946B6A117D09E1C5CBF3122F88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_U3CU3Em__0_m56A55C478315456AD2F8C3C7D6EBC7C8D69BEB9B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var;
IL2CPP_EXTERN_C const uint32_t ControllerInternal_Cancel_m09455A3E886138D02F2AB5CBCDB0F59D06837600_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ControllerInternal_Dispose_mF380B45A9036A94602E19456808941D88E565D41_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_Dispose_m41ED2FA3448548BD83CF0E69278EDD5AA64DE769_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_GetInstanceInternal_m97EBB2762C810B78E695CFC2051C1ED259D36538_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_GetReferenceFromUrl_mE8ACDA413CCCECC978A1F7EE27EFA935E9A9AF11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_ReleaseReferenceInternal_m469E5D75647171C997032C08A100E1FDFC64D422_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_getCPtr_mD5B445F5C0A11BFA7670F93A931064FDD48668B1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_get_App_m4D9B68C2100C679EF71EAFD523E739D22D1BAD8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorageInternal_get_Url_m425C6396457782FF410100806B804B820E891085_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_ConstructFormattedUri_m30866AD2A7AC8B9764B12728451E0EBD7017FF3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_Dispose_m49855FDA95AC895C380A8FF8C156F629B484DA4D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_Finalize_m0E6F941982188050BD9B531AEECF248660F8F79A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_FindByKey_m6EF3BABE9BA15FA72C5E6B3BCB890291052465C7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_GetInstanceInternal_m5F406685D26131AB6405BE7FD64B91FED3BA1396_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_GetInstance_m44B5B7CB1BA8AB00F31860D48CE31EB4940DF6BF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_GetReferenceFromUrl_mB5F25AA313AD7D2CD6AC6FAD0E52BA74CA8C29C0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_OnAppDisposed_m8FFADE1C2D2DDAD4E0AEA367356BF42FBD64E539_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_ThrowIfNull_m392D1788F987DB111E04ED22499C897524442F1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_ValidateStorageReferenceInternal_m2DB5A7D4F8068258A09885D7B93585D9919D8F38_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage__cctor_m17CCA987F9FC01F02981A45AA53DE4396289471A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage__ctor_m3FC01B84D3001B1846FAD4799E4358FFFDC3F297_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FirebaseStorage_get_DefaultInstance_m57584267322C66F070C5E2F58173A698754593E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_Dispose_m6CB060D21D3B21116FA2C9B6FF29CF844F63C288_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_GetResult_m00904CA09846B2728A440B3FBBC84B91975BA3AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_GetTask_mEC24F7196CE27D81111FEB9BEC03C9EE7C41C32F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_SWIG_CompletionDispatcher_mBD53FFA5A73C38A7CD49CC9FFB189224CA7ED21D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_SWIG_FreeCompletionData_m3439C5D916D057735ECC4DBCB24D399B8C2EE20E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_SWIG_OnCompletion_mDD87DE88A0C881E1E8AF79A9A7CFC23F3CB51557_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_SetOnCompletionCallback_m08B60F35359985371E6ED7B64DA181A71839264A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata_ThrowIfDisposed_m936E3F3BF89CB09FA692EC9A7CB73E0FB5163403_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata__cctor_mFE7A3443594ADF229FE921CA99D180885EB24DEB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Future_StorageMetadata__ctor_m7BAA8F7AF59C436996C2C282C9D8307D8104F1FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataChange_Build_mA2883C2BF178C881FF38FF5FD10DC96FB3DD57A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataInternal_CopyCppObject_mAAD5E2F0807126BFFA92ED2235E65BE4188B13B4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataInternal_Dispose_m6F2A0B6664306257FD59FC2BEF76DBB6D48F92E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MetadataInternal_getCPtr_m90DB4CA8CE4A6E66F7423F9AF1C5DC823C2885C6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger_Finalize_m88B1DDE29D4D6F4CF33FD166F51D5C504B9B71B5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger__cctor_m7672488A611F1EEBD494C675ABF9CD052011F346_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger__ctor_mE8D814C24F604C09F5D9A651BDB56DEF9ABB556E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger_get_Level_m72D5C473200CBD2E5A9A3E7E5E762CCFC61527FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ModuleLogger_get_Tag_m21D179CE4DF7AF1143E8ED00D4A370059D7C162A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerEventDelegate_BeginInvoke_m84A99C9F10160902634BE3548348360AD6F2B202_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_Create_m1140BF6BC694E4C12D2B84E01E989653FC47D64B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_Dispose_mD43C0C92185EFD1CE922A7AC64037DFA299CFE18_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_OnPaused_m6E500BCB6FF2708CD36D916E22CE29966A6B077D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_OnProgress_mDB71A8D606636D726A8462DD3C0FE7B66476C288_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_ProxyFromCPtr_m2A8A8FC568FC32B99E2C4EA34B36BA9746DD7BFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_RegisterCancellationToken_mC93001C569376B80E9283B834218877AFBD3424D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_SetPausedEvent_mDF53613DCBE762F739808F13F09B46EB0BF33D14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_SetProgressEvent_m6555A4476F3B9BB68820EE8A049699123BC4DFAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal__cctor_mF4AD36E1359DE11396985E646205F9518BC95B80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal__ctor_m2015E8382F85E76DB9FA75786D69E3E803072CB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_add_Progress_m5D0A16DCB4FC81EBA714D7D8EE99B9F6CB06E46A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_getCPtr_m8CFBA5FC9CE3DCACBED297C78AB0D31E69BA8423_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_get_BytesTransferred_m0A2F0CC3FD7967B5D3F9011B21153C34D3A416D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_get_Controller_m789601B36E247CC221E26783BD82DE9425294C29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_get_TotalByteCount_m0F02F962C5E95B89DE97AE1D30DEC38251AB4B80_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MonitorControllerInternal_remove_Progress_m2234B667AA8E1454FDEB17EF6B939CF55AB134DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingApplicationException_mE4A57C08BA674F90CB20212239445EE5861BCC2F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentException_m9E866960F2D8359572D1C86250FAD061750E9B47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentNullException_m66ADF14C992180DD55E0C4B7798D12610E887403_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m18DDFA77768CBA9275826A89B5DE593DDC446CF8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingArithmeticException_mB82507CD2AB9F2F81984DC2EA437525F0E08A18E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingDivideByZeroException_m1F075F08BEEDD2FEE94538574AED1E286BA3BA85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIOException_mA195C481473D8F7DD7A70B92FE875D6E6377C94E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD7C5AB6A5F32F652353A15035EC9D6D2795FF8D7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidCastException_m01055CF5321D305418D2965A985D6673C0840C3E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingInvalidOperationException_m4251D47C148E02697222FBCB3227E13905556FBD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingNullReferenceException_mBBFFC1B9A5704370E37374A37C255A185D9AD412_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOutOfMemoryException_mD3BC4134504E186EFFC773B90C96F01DE0062174_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingOverflowException_m44402DD9964628721176A7177635DFF76A551917_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper_SetPendingSystemException_m86EDF8DDD6B0B2A082E98B0B4A558EF79A98ECC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGExceptionHelper__cctor_m524D10168851F1FDA7EDA69F08F7EB0989A0BDA8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIGStringHelper__cctor_mFAD3941CB7652129CD92615C06E1A97DCAB471B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SWIG_CompletionDelegate_BeginInvoke_mB4E55CE8039752C0EB2523EDC5B589CE6E04873B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageException_CreateFromException_m324DF221BCB586CFA8E1229F6F36D7DBFD373D95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageException_GetErrorMessageForCode_m235C1EB75E22ED990C2C3469BFB3866F3ECC6F9A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageException__cctor_mD116A0538265E2D3AA1A30B3B42C35846F27FB12_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageException__ctor_m7A56D2F34A8578B2D30D5B5D56AB3DAD7AAF1310_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageInternalPINVOKE__cctor_mEDBDA5F454C4DEF54ECE7BD2D61FB4DA9F2D6CF9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageMetadata_BuildMetadataInternal_m8A228D5950AC9395B506DE2E690433068F1C2D85_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageMetadata__cctor_mEFBED20C02A8D24ED59ED6887116ACC230DD94A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_Child_mB213D92C1A792396860518C9BE34B3543AD2DC10_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_Dispose_m6DF406C59205ED0D37CEBBC6EC404F46A2A6AAF6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_GetDownloadUrlAsync_mE2E99BFDEAB4FCE8A4514051E455C71468BB167C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m34427017752A4B418BDC7C61F20DEA8A413056AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_getCPtr_m19196AA4E38CCA3D0135FA7810763A335B19BCEC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_get_Bucket_mBD757EA3852F9E8D7B829C208015CA5A5C747693_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_get_FullPath_m4AF95AC247E1CF014CB80235594DC0862C9EFB47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReferenceInternal_get_IsValid_mE6974AE9F4500567F662E861A6FCD0E35DAB028B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_Child_m222183D6618915FF258B6B1E020FF7F4AA694D28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_Equals_m894E1FD80AA9209C02E2840EAE243C56DDBD9FFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_GetDownloadUrlAsync_m41C1F4A825516C97CAA616D24691924F50BE7DD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_PutBytesAsync_m84984D37088DCCB88A8E84A70248C4592B2C2104_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_PutBytesUsingCompletionSourceAsync_m4B4AB4E9D2CE12533FE97D9B423E348C3E47A2A0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_PutBytesUsingMonitorControllerAsync_mA0AE399A738E0B9AB5446A3129647C169C495A63_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference_ToString_m260F7C63A3FD0E17F50A3706A8C7652831D4CFD3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t StorageReference__ctor_mC09ABE63B921CA4FF2EEA622C567FB1A3FB4B6C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TaskCompletionStatus__ctor_m2EFB845454673F24F49514B8D578AC3E792432AB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m42BB613D76FD25D6E6218B9718536EA82506A46A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m7872BFB32CE8E08BDD427E4B68E8A93FB97C1BAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_m6520E2D9BCD0AADC0DA27D6FCBFEA51C9BAE8A17_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m6CE73665E5201212CE900DD8CAF94D0B9FA34CBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mDDB68359371D43F88C0B1D91A90B5ED88CCA8219_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_mFF44F0F1536A8782007269A2CF52DDDB723C8D8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_m4CC08DAA01CFC4AB1E7D03B3F52B93FD0D87F4B0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_mF4898EA52AAD56F0D7769A267C638C12B65E3400_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m78676667BD22EB946B6A117D09E1C5CBF3122F88_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UploadState__ctor_m4C2E77580D8E2AA6660D91FF3739D93BB999B8E0_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tF096E81C3E580F588E3FD0B06295BD6BC4F58876 
{
public:

public:
};


// System.Object


// Firebase.AppOptions
struct  AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F  : public RuntimeObject
{
public:
	// System.Uri Firebase.AppOptions::<DatabaseUrl>k__BackingField
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CDatabaseUrlU3Ek__BackingField_0;
	// System.String Firebase.AppOptions::<AppId>k__BackingField
	String_t* ___U3CAppIdU3Ek__BackingField_1;
	// System.String Firebase.AppOptions::<ApiKey>k__BackingField
	String_t* ___U3CApiKeyU3Ek__BackingField_2;
	// System.String Firebase.AppOptions::<MessageSenderId>k__BackingField
	String_t* ___U3CMessageSenderIdU3Ek__BackingField_3;
	// System.String Firebase.AppOptions::<StorageBucket>k__BackingField
	String_t* ___U3CStorageBucketU3Ek__BackingField_4;
	// System.String Firebase.AppOptions::<ProjectId>k__BackingField
	String_t* ___U3CProjectIdU3Ek__BackingField_5;
	// System.String Firebase.AppOptions::<PackageName>k__BackingField
	String_t* ___U3CPackageNameU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_U3CDatabaseUrlU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CDatabaseUrlU3Ek__BackingField_0)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CDatabaseUrlU3Ek__BackingField_0() const { return ___U3CDatabaseUrlU3Ek__BackingField_0; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CDatabaseUrlU3Ek__BackingField_0() { return &___U3CDatabaseUrlU3Ek__BackingField_0; }
	inline void set_U3CDatabaseUrlU3Ek__BackingField_0(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CDatabaseUrlU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CDatabaseUrlU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CAppIdU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CAppIdU3Ek__BackingField_1)); }
	inline String_t* get_U3CAppIdU3Ek__BackingField_1() const { return ___U3CAppIdU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CAppIdU3Ek__BackingField_1() { return &___U3CAppIdU3Ek__BackingField_1; }
	inline void set_U3CAppIdU3Ek__BackingField_1(String_t* value)
	{
		___U3CAppIdU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CAppIdU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CApiKeyU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CApiKeyU3Ek__BackingField_2)); }
	inline String_t* get_U3CApiKeyU3Ek__BackingField_2() const { return ___U3CApiKeyU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CApiKeyU3Ek__BackingField_2() { return &___U3CApiKeyU3Ek__BackingField_2; }
	inline void set_U3CApiKeyU3Ek__BackingField_2(String_t* value)
	{
		___U3CApiKeyU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CApiKeyU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMessageSenderIdU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CMessageSenderIdU3Ek__BackingField_3)); }
	inline String_t* get_U3CMessageSenderIdU3Ek__BackingField_3() const { return ___U3CMessageSenderIdU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CMessageSenderIdU3Ek__BackingField_3() { return &___U3CMessageSenderIdU3Ek__BackingField_3; }
	inline void set_U3CMessageSenderIdU3Ek__BackingField_3(String_t* value)
	{
		___U3CMessageSenderIdU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMessageSenderIdU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CStorageBucketU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CStorageBucketU3Ek__BackingField_4)); }
	inline String_t* get_U3CStorageBucketU3Ek__BackingField_4() const { return ___U3CStorageBucketU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CStorageBucketU3Ek__BackingField_4() { return &___U3CStorageBucketU3Ek__BackingField_4; }
	inline void set_U3CStorageBucketU3Ek__BackingField_4(String_t* value)
	{
		___U3CStorageBucketU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStorageBucketU3Ek__BackingField_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProjectIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CProjectIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CProjectIdU3Ek__BackingField_5() const { return ___U3CProjectIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CProjectIdU3Ek__BackingField_5() { return &___U3CProjectIdU3Ek__BackingField_5; }
	inline void set_U3CProjectIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CProjectIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProjectIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CPackageNameU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F, ___U3CPackageNameU3Ek__BackingField_6)); }
	inline String_t* get_U3CPackageNameU3Ek__BackingField_6() const { return ___U3CPackageNameU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CPackageNameU3Ek__BackingField_6() { return &___U3CPackageNameU3Ek__BackingField_6; }
	inline void set_U3CPackageNameU3Ek__BackingField_6(String_t* value)
	{
		___U3CPackageNameU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPackageNameU3Ek__BackingField_6), (void*)value);
	}
};


// Firebase.Storage.FirebaseStorage
struct  FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91  : public RuntimeObject
{
public:
	// Firebase.Storage.FirebaseStorageInternal Firebase.Storage.FirebaseStorage::storageInternal
	FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * ___storageInternal_1;
	// Firebase.FirebaseApp Firebase.Storage.FirebaseStorage::firebaseApp
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___firebaseApp_2;
	// System.String Firebase.Storage.FirebaseStorage::instanceKey
	String_t* ___instanceKey_3;
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::<Logger>k__BackingField
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___U3CLoggerU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_storageInternal_1() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91, ___storageInternal_1)); }
	inline FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * get_storageInternal_1() const { return ___storageInternal_1; }
	inline FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 ** get_address_of_storageInternal_1() { return &___storageInternal_1; }
	inline void set_storageInternal_1(FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * value)
	{
		___storageInternal_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storageInternal_1), (void*)value);
	}

	inline static int32_t get_offset_of_firebaseApp_2() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91, ___firebaseApp_2)); }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * get_firebaseApp_2() const { return ___firebaseApp_2; }
	inline FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D ** get_address_of_firebaseApp_2() { return &___firebaseApp_2; }
	inline void set_firebaseApp_2(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * value)
	{
		___firebaseApp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseApp_2), (void*)value);
	}

	inline static int32_t get_offset_of_instanceKey_3() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91, ___instanceKey_3)); }
	inline String_t* get_instanceKey_3() const { return ___instanceKey_3; }
	inline String_t** get_address_of_instanceKey_3() { return &___instanceKey_3; }
	inline void set_instanceKey_3(String_t* value)
	{
		___instanceKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instanceKey_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggerU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91, ___U3CLoggerU3Ek__BackingField_5)); }
	inline ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * get_U3CLoggerU3Ek__BackingField_5() const { return ___U3CLoggerU3Ek__BackingField_5; }
	inline ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 ** get_address_of_U3CLoggerU3Ek__BackingField_5() { return &___U3CLoggerU3Ek__BackingField_5; }
	inline void set_U3CLoggerU3Ek__BackingField_5(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * value)
	{
		___U3CLoggerU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggerU3Ek__BackingField_5), (void*)value);
	}
};

struct FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage> Firebase.Storage.FirebaseStorage::storageByInstanceKey
	Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * ___storageByInstanceKey_0;
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::logger
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___logger_4;
	// System.Reflection.FieldInfo Firebase.Storage.FirebaseStorage::pathFieldInfo
	FieldInfo_t * ___pathFieldInfo_6;
	// System.Reflection.FieldInfo Firebase.Storage.FirebaseStorage::cachedToString
	FieldInfo_t * ___cachedToString_7;

public:
	inline static int32_t get_offset_of_storageByInstanceKey_0() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields, ___storageByInstanceKey_0)); }
	inline Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * get_storageByInstanceKey_0() const { return ___storageByInstanceKey_0; }
	inline Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 ** get_address_of_storageByInstanceKey_0() { return &___storageByInstanceKey_0; }
	inline void set_storageByInstanceKey_0(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * value)
	{
		___storageByInstanceKey_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storageByInstanceKey_0), (void*)value);
	}

	inline static int32_t get_offset_of_logger_4() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields, ___logger_4)); }
	inline ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * get_logger_4() const { return ___logger_4; }
	inline ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 ** get_address_of_logger_4() { return &___logger_4; }
	inline void set_logger_4(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * value)
	{
		___logger_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_4), (void*)value);
	}

	inline static int32_t get_offset_of_pathFieldInfo_6() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields, ___pathFieldInfo_6)); }
	inline FieldInfo_t * get_pathFieldInfo_6() const { return ___pathFieldInfo_6; }
	inline FieldInfo_t ** get_address_of_pathFieldInfo_6() { return &___pathFieldInfo_6; }
	inline void set_pathFieldInfo_6(FieldInfo_t * value)
	{
		___pathFieldInfo_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pathFieldInfo_6), (void*)value);
	}

	inline static int32_t get_offset_of_cachedToString_7() { return static_cast<int32_t>(offsetof(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields, ___cachedToString_7)); }
	inline FieldInfo_t * get_cachedToString_7() const { return ___cachedToString_7; }
	inline FieldInfo_t ** get_address_of_cachedToString_7() { return &___cachedToString_7; }
	inline void set_cachedToString_7(FieldInfo_t * value)
	{
		___cachedToString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cachedToString_7), (void*)value);
	}
};


// Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0
struct  U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7  : public RuntimeObject
{
public:
	// Firebase.Storage.Future_StorageMetadata Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0::fu
	Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * ___fu_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal> Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0::tcs
	TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * ___tcs_1;

public:
	inline static int32_t get_offset_of_fu_0() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7, ___fu_0)); }
	inline Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * get_fu_0() const { return ___fu_0; }
	inline Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE ** get_address_of_fu_0() { return &___fu_0; }
	inline void set_fu_0(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * value)
	{
		___fu_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fu_0), (void*)value);
	}

	inline static int32_t get_offset_of_tcs_1() { return static_cast<int32_t>(offsetof(U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7, ___tcs_1)); }
	inline TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * get_tcs_1() const { return ___tcs_1; }
	inline TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 ** get_address_of_tcs_1() { return &___tcs_1; }
	inline void set_tcs_1(TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * value)
	{
		___tcs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tcs_1), (void*)value);
	}
};


// Firebase.Storage.Internal.TransferState
struct  TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935  : public RuntimeObject
{
public:
	// System.Int64 Firebase.Storage.Internal.TransferState::<BytesTransferred>k__BackingField
	int64_t ___U3CBytesTransferredU3Ek__BackingField_0;
	// System.Int64 Firebase.Storage.Internal.TransferState::<TotalByteCount>k__BackingField
	int64_t ___U3CTotalByteCountU3Ek__BackingField_1;
	// System.Uri Firebase.Storage.Internal.TransferState::<UploadSessionUri>k__BackingField
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___U3CUploadSessionUriU3Ek__BackingField_2;
	// Firebase.Storage.StorageMetadata Firebase.Storage.Internal.TransferState::<Metadata>k__BackingField
	StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___U3CMetadataU3Ek__BackingField_3;
	// Firebase.Storage.StorageReference Firebase.Storage.Internal.TransferState::<Reference>k__BackingField
	StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___U3CReferenceU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_U3CBytesTransferredU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935, ___U3CBytesTransferredU3Ek__BackingField_0)); }
	inline int64_t get_U3CBytesTransferredU3Ek__BackingField_0() const { return ___U3CBytesTransferredU3Ek__BackingField_0; }
	inline int64_t* get_address_of_U3CBytesTransferredU3Ek__BackingField_0() { return &___U3CBytesTransferredU3Ek__BackingField_0; }
	inline void set_U3CBytesTransferredU3Ek__BackingField_0(int64_t value)
	{
		___U3CBytesTransferredU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CTotalByteCountU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935, ___U3CTotalByteCountU3Ek__BackingField_1)); }
	inline int64_t get_U3CTotalByteCountU3Ek__BackingField_1() const { return ___U3CTotalByteCountU3Ek__BackingField_1; }
	inline int64_t* get_address_of_U3CTotalByteCountU3Ek__BackingField_1() { return &___U3CTotalByteCountU3Ek__BackingField_1; }
	inline void set_U3CTotalByteCountU3Ek__BackingField_1(int64_t value)
	{
		___U3CTotalByteCountU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CUploadSessionUriU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935, ___U3CUploadSessionUriU3Ek__BackingField_2)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_U3CUploadSessionUriU3Ek__BackingField_2() const { return ___U3CUploadSessionUriU3Ek__BackingField_2; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_U3CUploadSessionUriU3Ek__BackingField_2() { return &___U3CUploadSessionUriU3Ek__BackingField_2; }
	inline void set_U3CUploadSessionUriU3Ek__BackingField_2(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___U3CUploadSessionUriU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUploadSessionUriU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMetadataU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935, ___U3CMetadataU3Ek__BackingField_3)); }
	inline StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * get_U3CMetadataU3Ek__BackingField_3() const { return ___U3CMetadataU3Ek__BackingField_3; }
	inline StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 ** get_address_of_U3CMetadataU3Ek__BackingField_3() { return &___U3CMetadataU3Ek__BackingField_3; }
	inline void set_U3CMetadataU3Ek__BackingField_3(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * value)
	{
		___U3CMetadataU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMetadataU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CReferenceU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935, ___U3CReferenceU3Ek__BackingField_4)); }
	inline StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * get_U3CReferenceU3Ek__BackingField_4() const { return ___U3CReferenceU3Ek__BackingField_4; }
	inline StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F ** get_address_of_U3CReferenceU3Ek__BackingField_4() { return &___U3CReferenceU3Ek__BackingField_4; }
	inline void set_U3CReferenceU3Ek__BackingField_4(StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * value)
	{
		___U3CReferenceU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CReferenceU3Ek__BackingField_4), (void*)value);
	}
};


// Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>
struct  TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809  : public RuntimeObject
{
public:
	// System.IProgress`1<T> Firebase.Storage.Internal.TransferStateUpdater`1::handler
	RuntimeObject* ___handler_0;
	// Firebase.Storage.Internal.TransferState Firebase.Storage.Internal.TransferStateUpdater`1::transferState
	TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * ___transferState_1;
	// T Firebase.Storage.Internal.TransferStateUpdater`1::<ProgressState>k__BackingField
	UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * ___U3CProgressStateU3Ek__BackingField_2;
	// Firebase.Storage.MonitorControllerInternal Firebase.Storage.Internal.TransferStateUpdater`1::<MonitorController>k__BackingField
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___U3CMonitorControllerU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809, ___handler_0)); }
	inline RuntimeObject* get_handler_0() const { return ___handler_0; }
	inline RuntimeObject** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(RuntimeObject* value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_transferState_1() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809, ___transferState_1)); }
	inline TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * get_transferState_1() const { return ___transferState_1; }
	inline TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 ** get_address_of_transferState_1() { return &___transferState_1; }
	inline void set_transferState_1(TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * value)
	{
		___transferState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transferState_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProgressStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809, ___U3CProgressStateU3Ek__BackingField_2)); }
	inline UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * get_U3CProgressStateU3Ek__BackingField_2() const { return ___U3CProgressStateU3Ek__BackingField_2; }
	inline UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C ** get_address_of_U3CProgressStateU3Ek__BackingField_2() { return &___U3CProgressStateU3Ek__BackingField_2; }
	inline void set_U3CProgressStateU3Ek__BackingField_2(UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * value)
	{
		___U3CProgressStateU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProgressStateU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMonitorControllerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809, ___U3CMonitorControllerU3Ek__BackingField_3)); }
	inline MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * get_U3CMonitorControllerU3Ek__BackingField_3() const { return ___U3CMonitorControllerU3Ek__BackingField_3; }
	inline MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 ** get_address_of_U3CMonitorControllerU3Ek__BackingField_3() { return &___U3CMonitorControllerU3Ek__BackingField_3; }
	inline void set_U3CMonitorControllerU3Ek__BackingField_3(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * value)
	{
		___U3CMonitorControllerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMonitorControllerU3Ek__BackingField_3), (void*)value);
	}
};


// Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>
struct  TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16  : public RuntimeObject
{
public:
	// System.IProgress`1<T> Firebase.Storage.Internal.TransferStateUpdater`1::handler
	RuntimeObject* ___handler_0;
	// Firebase.Storage.Internal.TransferState Firebase.Storage.Internal.TransferStateUpdater`1::transferState
	TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * ___transferState_1;
	// T Firebase.Storage.Internal.TransferStateUpdater`1::<ProgressState>k__BackingField
	RuntimeObject * ___U3CProgressStateU3Ek__BackingField_2;
	// Firebase.Storage.MonitorControllerInternal Firebase.Storage.Internal.TransferStateUpdater`1::<MonitorController>k__BackingField
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___U3CMonitorControllerU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_handler_0() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16, ___handler_0)); }
	inline RuntimeObject* get_handler_0() const { return ___handler_0; }
	inline RuntimeObject** get_address_of_handler_0() { return &___handler_0; }
	inline void set_handler_0(RuntimeObject* value)
	{
		___handler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handler_0), (void*)value);
	}

	inline static int32_t get_offset_of_transferState_1() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16, ___transferState_1)); }
	inline TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * get_transferState_1() const { return ___transferState_1; }
	inline TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 ** get_address_of_transferState_1() { return &___transferState_1; }
	inline void set_transferState_1(TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * value)
	{
		___transferState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transferState_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CProgressStateU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16, ___U3CProgressStateU3Ek__BackingField_2)); }
	inline RuntimeObject * get_U3CProgressStateU3Ek__BackingField_2() const { return ___U3CProgressStateU3Ek__BackingField_2; }
	inline RuntimeObject ** get_address_of_U3CProgressStateU3Ek__BackingField_2() { return &___U3CProgressStateU3Ek__BackingField_2; }
	inline void set_U3CProgressStateU3Ek__BackingField_2(RuntimeObject * value)
	{
		___U3CProgressStateU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CProgressStateU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMonitorControllerU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16, ___U3CMonitorControllerU3Ek__BackingField_3)); }
	inline MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * get_U3CMonitorControllerU3Ek__BackingField_3() const { return ___U3CMonitorControllerU3Ek__BackingField_3; }
	inline MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 ** get_address_of_U3CMonitorControllerU3Ek__BackingField_3() { return &___U3CMonitorControllerU3Ek__BackingField_3; }
	inline void set_U3CMonitorControllerU3Ek__BackingField_3(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * value)
	{
		___U3CMonitorControllerU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMonitorControllerU3Ek__BackingField_3), (void*)value);
	}
};


// Firebase.Storage.MetadataChange
struct  MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1  : public RuntimeObject
{
public:
	// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::metadata
	StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___metadata_0;

public:
	inline static int32_t get_offset_of_metadata_0() { return static_cast<int32_t>(offsetof(MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1, ___metadata_0)); }
	inline StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * get_metadata_0() const { return ___metadata_0; }
	inline StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 ** get_address_of_metadata_0() { return &___metadata_0; }
	inline void set_metadata_0(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * value)
	{
		___metadata_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metadata_0), (void*)value);
	}
};


// Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0
struct  U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91  : public RuntimeObject
{
public:
	// Firebase.Storage.MonitorControllerInternal Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0::proxy
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___proxy_0;

public:
	inline static int32_t get_offset_of_proxy_0() { return static_cast<int32_t>(offsetof(U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91, ___proxy_0)); }
	inline MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * get_proxy_0() const { return ___proxy_0; }
	inline MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 ** get_address_of_proxy_0() { return &___proxy_0; }
	inline void set_proxy_0(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * value)
	{
		___proxy_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___proxy_0), (void*)value);
	}
};


// Firebase.Storage.StorageInternalPINVOKE
struct  StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D  : public RuntimeObject
{
public:

public:
};

struct StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_StaticFields
{
public:
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper Firebase.Storage.StorageInternalPINVOKE::swigExceptionHelper
	SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB * ___swigExceptionHelper_0;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper Firebase.Storage.StorageInternalPINVOKE::swigStringHelper
	SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2 * ___swigStringHelper_1;

public:
	inline static int32_t get_offset_of_swigExceptionHelper_0() { return static_cast<int32_t>(offsetof(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_StaticFields, ___swigExceptionHelper_0)); }
	inline SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB * get_swigExceptionHelper_0() const { return ___swigExceptionHelper_0; }
	inline SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB ** get_address_of_swigExceptionHelper_0() { return &___swigExceptionHelper_0; }
	inline void set_swigExceptionHelper_0(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB * value)
	{
		___swigExceptionHelper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigExceptionHelper_0), (void*)value);
	}

	inline static int32_t get_offset_of_swigStringHelper_1() { return static_cast<int32_t>(offsetof(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_StaticFields, ___swigStringHelper_1)); }
	inline SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2 * get_swigStringHelper_1() const { return ___swigStringHelper_1; }
	inline SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2 ** get_address_of_swigStringHelper_1() { return &___swigStringHelper_1; }
	inline void set_swigStringHelper_1(SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2 * value)
	{
		___swigStringHelper_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___swigStringHelper_1), (void*)value);
	}
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper
struct  SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB  : public RuntimeObject
{
public:

public:
};

struct SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields
{
public:
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::applicationDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___applicationDelegate_0;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::arithmeticDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___arithmeticDelegate_1;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::divideByZeroDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___divideByZeroDelegate_2;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::indexOutOfRangeDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___indexOutOfRangeDelegate_3;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::invalidCastDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___invalidCastDelegate_4;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::invalidOperationDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___invalidOperationDelegate_5;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::ioDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___ioDelegate_6;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::nullReferenceDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___nullReferenceDelegate_7;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::outOfMemoryDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___outOfMemoryDelegate_8;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::overflowDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___overflowDelegate_9;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::systemDelegate
	ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___systemDelegate_10;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::argumentDelegate
	ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * ___argumentDelegate_11;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::argumentNullDelegate
	ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * ___argumentNullDelegate_12;
	// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::argumentOutOfRangeDelegate
	ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * ___argumentOutOfRangeDelegate_13;

public:
	inline static int32_t get_offset_of_applicationDelegate_0() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___applicationDelegate_0)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_applicationDelegate_0() const { return ___applicationDelegate_0; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_applicationDelegate_0() { return &___applicationDelegate_0; }
	inline void set_applicationDelegate_0(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___applicationDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___applicationDelegate_0), (void*)value);
	}

	inline static int32_t get_offset_of_arithmeticDelegate_1() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___arithmeticDelegate_1)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_arithmeticDelegate_1() const { return ___arithmeticDelegate_1; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_arithmeticDelegate_1() { return &___arithmeticDelegate_1; }
	inline void set_arithmeticDelegate_1(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___arithmeticDelegate_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arithmeticDelegate_1), (void*)value);
	}

	inline static int32_t get_offset_of_divideByZeroDelegate_2() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___divideByZeroDelegate_2)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_divideByZeroDelegate_2() const { return ___divideByZeroDelegate_2; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_divideByZeroDelegate_2() { return &___divideByZeroDelegate_2; }
	inline void set_divideByZeroDelegate_2(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___divideByZeroDelegate_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___divideByZeroDelegate_2), (void*)value);
	}

	inline static int32_t get_offset_of_indexOutOfRangeDelegate_3() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___indexOutOfRangeDelegate_3)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_indexOutOfRangeDelegate_3() const { return ___indexOutOfRangeDelegate_3; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_indexOutOfRangeDelegate_3() { return &___indexOutOfRangeDelegate_3; }
	inline void set_indexOutOfRangeDelegate_3(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___indexOutOfRangeDelegate_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___indexOutOfRangeDelegate_3), (void*)value);
	}

	inline static int32_t get_offset_of_invalidCastDelegate_4() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___invalidCastDelegate_4)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_invalidCastDelegate_4() const { return ___invalidCastDelegate_4; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_invalidCastDelegate_4() { return &___invalidCastDelegate_4; }
	inline void set_invalidCastDelegate_4(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___invalidCastDelegate_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidCastDelegate_4), (void*)value);
	}

	inline static int32_t get_offset_of_invalidOperationDelegate_5() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___invalidOperationDelegate_5)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_invalidOperationDelegate_5() const { return ___invalidOperationDelegate_5; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_invalidOperationDelegate_5() { return &___invalidOperationDelegate_5; }
	inline void set_invalidOperationDelegate_5(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___invalidOperationDelegate_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___invalidOperationDelegate_5), (void*)value);
	}

	inline static int32_t get_offset_of_ioDelegate_6() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___ioDelegate_6)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_ioDelegate_6() const { return ___ioDelegate_6; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_ioDelegate_6() { return &___ioDelegate_6; }
	inline void set_ioDelegate_6(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___ioDelegate_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ioDelegate_6), (void*)value);
	}

	inline static int32_t get_offset_of_nullReferenceDelegate_7() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___nullReferenceDelegate_7)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_nullReferenceDelegate_7() const { return ___nullReferenceDelegate_7; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_nullReferenceDelegate_7() { return &___nullReferenceDelegate_7; }
	inline void set_nullReferenceDelegate_7(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___nullReferenceDelegate_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nullReferenceDelegate_7), (void*)value);
	}

	inline static int32_t get_offset_of_outOfMemoryDelegate_8() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___outOfMemoryDelegate_8)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_outOfMemoryDelegate_8() const { return ___outOfMemoryDelegate_8; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_outOfMemoryDelegate_8() { return &___outOfMemoryDelegate_8; }
	inline void set_outOfMemoryDelegate_8(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___outOfMemoryDelegate_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outOfMemoryDelegate_8), (void*)value);
	}

	inline static int32_t get_offset_of_overflowDelegate_9() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___overflowDelegate_9)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_overflowDelegate_9() const { return ___overflowDelegate_9; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_overflowDelegate_9() { return &___overflowDelegate_9; }
	inline void set_overflowDelegate_9(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___overflowDelegate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overflowDelegate_9), (void*)value);
	}

	inline static int32_t get_offset_of_systemDelegate_10() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___systemDelegate_10)); }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * get_systemDelegate_10() const { return ___systemDelegate_10; }
	inline ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB ** get_address_of_systemDelegate_10() { return &___systemDelegate_10; }
	inline void set_systemDelegate_10(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * value)
	{
		___systemDelegate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___systemDelegate_10), (void*)value);
	}

	inline static int32_t get_offset_of_argumentDelegate_11() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___argumentDelegate_11)); }
	inline ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * get_argumentDelegate_11() const { return ___argumentDelegate_11; }
	inline ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 ** get_address_of_argumentDelegate_11() { return &___argumentDelegate_11; }
	inline void set_argumentDelegate_11(ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * value)
	{
		___argumentDelegate_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentDelegate_11), (void*)value);
	}

	inline static int32_t get_offset_of_argumentNullDelegate_12() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___argumentNullDelegate_12)); }
	inline ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * get_argumentNullDelegate_12() const { return ___argumentNullDelegate_12; }
	inline ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 ** get_address_of_argumentNullDelegate_12() { return &___argumentNullDelegate_12; }
	inline void set_argumentNullDelegate_12(ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * value)
	{
		___argumentNullDelegate_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentNullDelegate_12), (void*)value);
	}

	inline static int32_t get_offset_of_argumentOutOfRangeDelegate_13() { return static_cast<int32_t>(offsetof(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields, ___argumentOutOfRangeDelegate_13)); }
	inline ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * get_argumentOutOfRangeDelegate_13() const { return ___argumentOutOfRangeDelegate_13; }
	inline ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 ** get_address_of_argumentOutOfRangeDelegate_13() { return &___argumentOutOfRangeDelegate_13; }
	inline void set_argumentOutOfRangeDelegate_13(ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * value)
	{
		___argumentOutOfRangeDelegate_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___argumentOutOfRangeDelegate_13), (void*)value);
	}
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException
struct  SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC  : public RuntimeObject
{
public:

public:
};

struct SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_StaticFields
{
public:
	// System.Int32 Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException::numExceptionsPending
	int32_t ___numExceptionsPending_1;

public:
	inline static int32_t get_offset_of_numExceptionsPending_1() { return static_cast<int32_t>(offsetof(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_StaticFields, ___numExceptionsPending_1)); }
	inline int32_t get_numExceptionsPending_1() const { return ___numExceptionsPending_1; }
	inline int32_t* get_address_of_numExceptionsPending_1() { return &___numExceptionsPending_1; }
	inline void set_numExceptionsPending_1(int32_t value)
	{
		___numExceptionsPending_1 = value;
	}
};

struct SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_ThreadStaticFields
{
public:
	// System.Exception Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException::pendingException
	Exception_t * ___pendingException_0;

public:
	inline static int32_t get_offset_of_pendingException_0() { return static_cast<int32_t>(offsetof(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_ThreadStaticFields, ___pendingException_0)); }
	inline Exception_t * get_pendingException_0() const { return ___pendingException_0; }
	inline Exception_t ** get_address_of_pendingException_0() { return &___pendingException_0; }
	inline void set_pendingException_0(Exception_t * value)
	{
		___pendingException_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pendingException_0), (void*)value);
	}
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper
struct  SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2  : public RuntimeObject
{
public:

public:
};

struct SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2_StaticFields
{
public:
	// Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::stringDelegate
	SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * ___stringDelegate_0;

public:
	inline static int32_t get_offset_of_stringDelegate_0() { return static_cast<int32_t>(offsetof(SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2_StaticFields, ___stringDelegate_0)); }
	inline SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * get_stringDelegate_0() const { return ___stringDelegate_0; }
	inline SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB ** get_address_of_stringDelegate_0() { return &___stringDelegate_0; }
	inline void set_stringDelegate_0(SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * value)
	{
		___stringDelegate_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stringDelegate_0), (void*)value);
	}
};


// Firebase.Storage.StorageReference
struct  StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F  : public RuntimeObject
{
public:
	// Firebase.Storage.FirebaseStorage Firebase.Storage.StorageReference::firebaseStorage
	FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * ___firebaseStorage_0;
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.StorageReference::<Logger>k__BackingField
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___U3CLoggerU3Ek__BackingField_1;
	// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReference::<Internal>k__BackingField
	StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___U3CInternalU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_firebaseStorage_0() { return static_cast<int32_t>(offsetof(StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F, ___firebaseStorage_0)); }
	inline FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * get_firebaseStorage_0() const { return ___firebaseStorage_0; }
	inline FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 ** get_address_of_firebaseStorage_0() { return &___firebaseStorage_0; }
	inline void set_firebaseStorage_0(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * value)
	{
		___firebaseStorage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firebaseStorage_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLoggerU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F, ___U3CLoggerU3Ek__BackingField_1)); }
	inline ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * get_U3CLoggerU3Ek__BackingField_1() const { return ___U3CLoggerU3Ek__BackingField_1; }
	inline ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 ** get_address_of_U3CLoggerU3Ek__BackingField_1() { return &___U3CLoggerU3Ek__BackingField_1; }
	inline void set_U3CLoggerU3Ek__BackingField_1(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * value)
	{
		___U3CLoggerU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLoggerU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInternalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F, ___U3CInternalU3Ek__BackingField_2)); }
	inline StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * get_U3CInternalU3Ek__BackingField_2() const { return ___U3CInternalU3Ek__BackingField_2; }
	inline StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F ** get_address_of_U3CInternalU3Ek__BackingField_2() { return &___U3CInternalU3Ek__BackingField_2; }
	inline void set_U3CInternalU3Ek__BackingField_2(StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * value)
	{
		___U3CInternalU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalU3Ek__BackingField_2), (void*)value);
	}
};


// Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA
struct  U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555  : public RuntimeObject
{
public:
	// System.Threading.Tasks.TaskCompletionSource`1<System.Uri> Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA::result
	TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B * ___result_0;
	// Firebase.Storage.StorageReference Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA::U24this
	StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___U24this_1;

public:
	inline static int32_t get_offset_of_result_0() { return static_cast<int32_t>(offsetof(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555, ___result_0)); }
	inline TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B * get_result_0() const { return ___result_0; }
	inline TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B ** get_address_of_result_0() { return &___result_0; }
	inline void set_result_0(TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B * value)
	{
		___result_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_0), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_1() { return static_cast<int32_t>(offsetof(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555, ___U24this_1)); }
	inline StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * get_U24this_1() const { return ___U24this_1; }
	inline StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F ** get_address_of_U24this_1() { return &___U24this_1; }
	inline void set_U24this_1(StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * value)
	{
		___U24this_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_1), (void*)value);
	}
};


// Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB
struct  U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<System.String> Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB::task
	Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___task_0;
	// Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB::<>f__refU2410
	U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * ___U3CU3Ef__refU2410_1;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9, ___task_0)); }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * get_task_0() const { return ___task_0; }
	inline Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 ** get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___task_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU2410_1() { return static_cast<int32_t>(offsetof(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9, ___U3CU3Ef__refU2410_1)); }
	inline U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * get_U3CU3Ef__refU2410_1() const { return ___U3CU3Ef__refU2410_1; }
	inline U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 ** get_address_of_U3CU3Ef__refU2410_1() { return &___U3CU3Ef__refU2410_1; }
	inline void set_U3CU3Ef__refU2410_1(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * value)
	{
		___U3CU3Ef__refU2410_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU2410_1), (void*)value);
	}
};


// Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2
struct  U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::task
	Task_1_t9744B6AD55320186C36CC7626916272750E46384 * ___task_0;
	// Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1 Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::<>f__refU241
	U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * ___U3CU3Ef__refU241_1;

public:
	inline static int32_t get_offset_of_task_0() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E, ___task_0)); }
	inline Task_1_t9744B6AD55320186C36CC7626916272750E46384 * get_task_0() const { return ___task_0; }
	inline Task_1_t9744B6AD55320186C36CC7626916272750E46384 ** get_address_of_task_0() { return &___task_0; }
	inline void set_task_0(Task_1_t9744B6AD55320186C36CC7626916272750E46384 * value)
	{
		___task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___task_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__refU241_1() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E, ___U3CU3Ef__refU241_1)); }
	inline U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * get_U3CU3Ef__refU241_1() const { return ___U3CU3Ef__refU241_1; }
	inline U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA ** get_address_of_U3CU3Ef__refU241_1() { return &___U3CU3Ef__refU241_1; }
	inline void set_U3CU3Ef__refU241_1(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * value)
	{
		___U3CU3Ef__refU241_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__refU241_1), (void*)value);
	}
};


// Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0
struct  U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826  : public RuntimeObject
{
public:
	// Firebase.Storage.MonitorControllerInternal Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::monitorController
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___monitorController_0;
	// Firebase.Storage.MetadataInternal Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::metadata
	MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___metadata_1;

public:
	inline static int32_t get_offset_of_monitorController_0() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826, ___monitorController_0)); }
	inline MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * get_monitorController_0() const { return ___monitorController_0; }
	inline MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 ** get_address_of_monitorController_0() { return &___monitorController_0; }
	inline void set_monitorController_0(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * value)
	{
		___monitorController_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___monitorController_0), (void*)value);
	}

	inline static int32_t get_offset_of_metadata_1() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826, ___metadata_1)); }
	inline MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * get_metadata_1() const { return ___metadata_1; }
	inline MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 ** get_address_of_metadata_1() { return &___metadata_1; }
	inline void set_metadata_1(MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * value)
	{
		___metadata_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___metadata_1), (void*)value);
	}
};


// Firebase.Storage.StorageReference_TaskCompletionStatus
struct  TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD  : public RuntimeObject
{
public:
	// System.Boolean Firebase.Storage.StorageReference_TaskCompletionStatus::<IsSuccessful>k__BackingField
	bool ___U3CIsSuccessfulU3Ek__BackingField_0;
	// System.Boolean Firebase.Storage.StorageReference_TaskCompletionStatus::<IsCanceled>k__BackingField
	bool ___U3CIsCanceledU3Ek__BackingField_1;
	// System.Exception Firebase.Storage.StorageReference_TaskCompletionStatus::<Exception>k__BackingField
	Exception_t * ___U3CExceptionU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_U3CIsSuccessfulU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD, ___U3CIsSuccessfulU3Ek__BackingField_0)); }
	inline bool get_U3CIsSuccessfulU3Ek__BackingField_0() const { return ___U3CIsSuccessfulU3Ek__BackingField_0; }
	inline bool* get_address_of_U3CIsSuccessfulU3Ek__BackingField_0() { return &___U3CIsSuccessfulU3Ek__BackingField_0; }
	inline void set_U3CIsSuccessfulU3Ek__BackingField_0(bool value)
	{
		___U3CIsSuccessfulU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CIsCanceledU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD, ___U3CIsCanceledU3Ek__BackingField_1)); }
	inline bool get_U3CIsCanceledU3Ek__BackingField_1() const { return ___U3CIsCanceledU3Ek__BackingField_1; }
	inline bool* get_address_of_U3CIsCanceledU3Ek__BackingField_1() { return &___U3CIsCanceledU3Ek__BackingField_1; }
	inline void set_U3CIsCanceledU3Ek__BackingField_1(bool value)
	{
		___U3CIsCanceledU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CExceptionU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD, ___U3CExceptionU3Ek__BackingField_2)); }
	inline Exception_t * get_U3CExceptionU3Ek__BackingField_2() const { return ___U3CExceptionU3Ek__BackingField_2; }
	inline Exception_t ** get_address_of_U3CExceptionU3Ek__BackingField_2() { return &___U3CExceptionU3Ek__BackingField_2; }
	inline void set_U3CExceptionU3Ek__BackingField_2(Exception_t * value)
	{
		___U3CExceptionU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CExceptionU3Ek__BackingField_2), (void*)value);
	}
};


// Firebase.Storage.UploadState
struct  UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C  : public RuntimeObject
{
public:
	// Firebase.Storage.Internal.TransferState Firebase.Storage.UploadState::<State>k__BackingField
	TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * ___U3CStateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CStateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C, ___U3CStateU3Ek__BackingField_0)); }
	inline TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * get_U3CStateU3Ek__BackingField_0() const { return ___U3CStateU3Ek__BackingField_0; }
	inline TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 ** get_address_of_U3CStateU3Ek__BackingField_0() { return &___U3CStateU3Ek__BackingField_0; }
	inline void set_U3CStateU3Ek__BackingField_0(TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * value)
	{
		___U3CStateU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CStateU3Ek__BackingField_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>
struct  Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t70D018AAE686B4442C0E9E2D8F77F482826CF3B1* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t17D84159BD9C3E51D774301DEA95F3FA7AE41A09 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2AD4D8DCB989FEE85D3AB2623EF407BE608F212D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ___entries_1)); }
	inline EntryU5BU5D_t70D018AAE686B4442C0E9E2D8F77F482826CF3B1* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t70D018AAE686B4442C0E9E2D8F77F482826CF3B1** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t70D018AAE686B4442C0E9E2D8F77F482826CF3B1* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ___keys_7)); }
	inline KeyCollection_t17D84159BD9C3E51D774301DEA95F3FA7AE41A09 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t17D84159BD9C3E51D774301DEA95F3FA7AE41A09 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t17D84159BD9C3E51D774301DEA95F3FA7AE41A09 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ___values_8)); }
	inline ValueCollection_t2AD4D8DCB989FEE85D3AB2623EF407BE608F212D * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2AD4D8DCB989FEE85D3AB2623EF407BE608F212D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2AD4D8DCB989FEE85D3AB2623EF407BE608F212D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata_Action>
struct  Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t921E0DF954BC2122845AEB46C8D635E96B117F72* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5DD9E03426D1A49EC417202AEEE87DE5176D16EF * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t9BA954E1B3C781669C6B19BB746C97D32DAC7BFF * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ___entries_1)); }
	inline EntryU5BU5D_t921E0DF954BC2122845AEB46C8D635E96B117F72* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t921E0DF954BC2122845AEB46C8D635E96B117F72** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t921E0DF954BC2122845AEB46C8D635E96B117F72* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ___keys_7)); }
	inline KeyCollection_t5DD9E03426D1A49EC417202AEEE87DE5176D16EF * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5DD9E03426D1A49EC417202AEEE87DE5176D16EF ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5DD9E03426D1A49EC417202AEEE87DE5176D16EF * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ___values_8)); }
	inline ValueCollection_t9BA954E1B3C781669C6B19BB746C97D32DAC7BFF * get_values_8() const { return ___values_8; }
	inline ValueCollection_t9BA954E1B3C781669C6B19BB746C97D32DAC7BFF ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t9BA954E1B3C781669C6B19BB746C97D32DAC7BFF * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>
struct  Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tA8DBF9909BBBC9BDD52A53A08C138753F0CEBA18* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t858959191232E5F0DE0B198A7CEA49D6D25E7692 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBD07BD0576E2D88B0FC164F7BCE60638B86687AA * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ___entries_1)); }
	inline EntryU5BU5D_tA8DBF9909BBBC9BDD52A53A08C138753F0CEBA18* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tA8DBF9909BBBC9BDD52A53A08C138753F0CEBA18** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tA8DBF9909BBBC9BDD52A53A08C138753F0CEBA18* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ___keys_7)); }
	inline KeyCollection_t858959191232E5F0DE0B198A7CEA49D6D25E7692 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t858959191232E5F0DE0B198A7CEA49D6D25E7692 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t858959191232E5F0DE0B198A7CEA49D6D25E7692 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ___values_8)); }
	inline ValueCollection_tBD07BD0576E2D88B0FC164F7BCE60638B86687AA * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBD07BD0576E2D88B0FC164F7BCE60638B86687AA ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBD07BD0576E2D88B0FC164F7BCE60638B86687AA * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>
struct  Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2_Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9D59D7003E1A695BB8208F0145633A4948545879* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2_KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t7FC536BDB3CCC976C51462CB743420B1B372B841 * ___keys_7;
	// System.Collections.Generic.Dictionary`2_ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3EEC18FD2BA84EB669EAF72FDCD50486CD9E76AD * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ___entries_1)); }
	inline EntryU5BU5D_t9D59D7003E1A695BB8208F0145633A4948545879* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9D59D7003E1A695BB8208F0145633A4948545879** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9D59D7003E1A695BB8208F0145633A4948545879* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ___keys_7)); }
	inline KeyCollection_t7FC536BDB3CCC976C51462CB743420B1B372B841 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t7FC536BDB3CCC976C51462CB743420B1B372B841 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t7FC536BDB3CCC976C51462CB743420B1B372B841 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ___values_8)); }
	inline ValueCollection_t3EEC18FD2BA84EB669EAF72FDCD50486CD9E76AD * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3EEC18FD2BA84EB669EAF72FDCD50486CD9E76AD ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3EEC18FD2BA84EB669EAF72FDCD50486CD9E76AD * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>
struct  List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ModuleLoggerU5BU5D_tACD3DC43F0F475AD3331132CE36581CD1B5ACF84* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A, ____items_1)); }
	inline ModuleLoggerU5BU5D_tACD3DC43F0F475AD3331132CE36581CD1B5ACF84* get__items_1() const { return ____items_1; }
	inline ModuleLoggerU5BU5D_tACD3DC43F0F475AD3331132CE36581CD1B5ACF84** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ModuleLoggerU5BU5D_tACD3DC43F0F475AD3331132CE36581CD1B5ACF84* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ModuleLoggerU5BU5D_tACD3DC43F0F475AD3331132CE36581CD1B5ACF84* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A_StaticFields, ____emptyArray_5)); }
	inline ModuleLoggerU5BU5D_tACD3DC43F0F475AD3331132CE36581CD1B5ACF84* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ModuleLoggerU5BU5D_tACD3DC43F0F475AD3331132CE36581CD1B5ACF84** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ModuleLoggerU5BU5D_tACD3DC43F0F475AD3331132CE36581CD1B5ACF84* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.WeakReference>
struct  List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	WeakReferenceU5BU5D_t22BA889724BAED024D73816F36AC821BC9D320F6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4, ____items_1)); }
	inline WeakReferenceU5BU5D_t22BA889724BAED024D73816F36AC821BC9D320F6* get__items_1() const { return ____items_1; }
	inline WeakReferenceU5BU5D_t22BA889724BAED024D73816F36AC821BC9D320F6** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(WeakReferenceU5BU5D_t22BA889724BAED024D73816F36AC821BC9D320F6* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	WeakReferenceU5BU5D_t22BA889724BAED024D73816F36AC821BC9D320F6* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4_StaticFields, ____emptyArray_5)); }
	inline WeakReferenceU5BU5D_t22BA889724BAED024D73816F36AC821BC9D320F6* get__emptyArray_5() const { return ____emptyArray_5; }
	inline WeakReferenceU5BU5D_t22BA889724BAED024D73816F36AC821BC9D320F6** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(WeakReferenceU5BU5D_t22BA889724BAED024D73816F36AC821BC9D320F6* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>
struct  ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_1), (void*)value);
	}
};


// System.EventArgs
struct  EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA  : public RuntimeObject
{
public:

public:
};

struct EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields
{
public:
	// System.EventArgs System.EventArgs::Empty
	EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___Empty_0;

public:
	inline static int32_t get_offset_of_Empty_0() { return static_cast<int32_t>(offsetof(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields, ___Empty_0)); }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * get_Empty_0() const { return ___Empty_0; }
	inline EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA ** get_address_of_Empty_0() { return &___Empty_0; }
	inline void set_Empty_0(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * value)
	{
		___Empty_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_0), (void*)value);
	}
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


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>
struct  TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t9744B6AD55320186C36CC7626916272750E46384 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738, ___m_task_0)); }
	inline Task_1_t9744B6AD55320186C36CC7626916272750E46384 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t9744B6AD55320186C36CC7626916272750E46384 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t9744B6AD55320186C36CC7626916272750E46384 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>
struct  TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124, ___m_task_0)); }
	inline Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Object>
struct  TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Threading.Tasks.TaskCompletionSource`1<System.Uri>
struct  TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskCompletionSource`1::m_task
	Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B, ___m_task_0)); }
	inline Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.WeakReference>
struct  Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7, ___list_0)); }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * get_list_0() const { return ___list_0; }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7, ___current_3)); }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * get_current_3() const { return ___current_3; }
	inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// System.Reflection.FieldInfo
struct  FieldInfo_t  : public MemberInfo_t
{
public:

public:
};


// System.Runtime.InteropServices.GCHandle
struct  GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandle::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo>
struct  SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 
{
public:
	// System.Threading.SparselyPopulatedArrayFragment`1<T> System.Threading.SparselyPopulatedArrayAddInfo`1::m_source
	SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * ___m_source_0;
	// System.Int32 System.Threading.SparselyPopulatedArrayAddInfo`1::m_index
	int32_t ___m_index_1;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_source_0)); }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * get_m_source_0() const { return ___m_source_0; }
	inline SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(SparselyPopulatedArrayFragment_1_t93197EF47D6A025755987003D5D62F3AED371C21 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_index_1() { return static_cast<int32_t>(offsetof(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0, ___m_index_1)); }
	inline int32_t get_m_index_1() const { return ___m_index_1; }
	inline int32_t* get_address_of_m_index_1() { return &___m_index_1; }
	inline void set_m_index_1(int32_t value)
	{
		___m_index_1 = value;
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


// Firebase.FutureStatus
struct  FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215 
{
public:
	// System.Int32 Firebase.FutureStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FutureStatus_t8911DB3874A49AD6E15CB4AB118D20E27A659215, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.InitResult
struct  InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194 
{
public:
	// System.Int32 Firebase.InitResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InitResult_tF92E9771916F81F66EDFD2049E35623277EEF194, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.LogLevel
struct  LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200 
{
public:
	// System.Int32 Firebase.LogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LogLevel_t308AFEEB17156412A4E9F577B863B2B20533D200, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Platform.PlatformLogLevel
struct  PlatformLogLevel_tBEEE87BEEE806C09EDE048024FD099F211A62E14 
{
public:
	// System.Int32 Firebase.Platform.PlatformLogLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlatformLogLevel_tBEEE87BEEE806C09EDE048024FD099F211A62E14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Storage.ErrorInternal
struct  ErrorInternal_tEAB47F436DAE691ADD1C3ABD2876E4FD5DB32CF6 
{
public:
	// System.Int32 Firebase.Storage.ErrorInternal::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ErrorInternal_tEAB47F436DAE691ADD1C3ABD2876E4FD5DB32CF6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Firebase.Storage.MonitorControllerInternal_<OnPaused>c__AnonStorey1
struct  U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Storage.MonitorControllerInternal_<OnPaused>c__AnonStorey1::controllerPtr
	intptr_t ___controllerPtr_0;

public:
	inline static int32_t get_offset_of_controllerPtr_0() { return static_cast<int32_t>(offsetof(U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C, ___controllerPtr_0)); }
	inline intptr_t get_controllerPtr_0() const { return ___controllerPtr_0; }
	inline intptr_t* get_address_of_controllerPtr_0() { return &___controllerPtr_0; }
	inline void set_controllerPtr_0(intptr_t value)
	{
		___controllerPtr_0 = value;
	}
};


// Firebase.Storage.MonitorControllerInternal_<OnProgress>c__AnonStorey2
struct  U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1  : public RuntimeObject
{
public:
	// System.IntPtr Firebase.Storage.MonitorControllerInternal_<OnProgress>c__AnonStorey2::controllerPtr
	intptr_t ___controllerPtr_0;

public:
	inline static int32_t get_offset_of_controllerPtr_0() { return static_cast<int32_t>(offsetof(U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1, ___controllerPtr_0)); }
	inline intptr_t get_controllerPtr_0() const { return ___controllerPtr_0; }
	inline intptr_t* get_address_of_controllerPtr_0() { return &___controllerPtr_0; }
	inline void set_controllerPtr_0(intptr_t value)
	{
		___controllerPtr_0 = value;
	}
};


// Firebase.Storage.StorageMetadata
struct  StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060  : public RuntimeObject
{
public:
	// Firebase.Storage.StorageReference Firebase.Storage.StorageMetadata::storageReference
	StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___storageReference_1;
	// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::<Internal>k__BackingField
	MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___U3CInternalU3Ek__BackingField_2;

public:
	inline static int32_t get_offset_of_storageReference_1() { return static_cast<int32_t>(offsetof(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060, ___storageReference_1)); }
	inline StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * get_storageReference_1() const { return ___storageReference_1; }
	inline StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F ** get_address_of_storageReference_1() { return &___storageReference_1; }
	inline void set_storageReference_1(StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * value)
	{
		___storageReference_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storageReference_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CInternalU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060, ___U3CInternalU3Ek__BackingField_2)); }
	inline MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * get_U3CInternalU3Ek__BackingField_2() const { return ___U3CInternalU3Ek__BackingField_2; }
	inline MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 ** get_address_of_U3CInternalU3Ek__BackingField_2() { return &___U3CInternalU3Ek__BackingField_2; }
	inline void set_U3CInternalU3Ek__BackingField_2(MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * value)
	{
		___U3CInternalU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CInternalU3Ek__BackingField_2), (void*)value);
	}
};

struct StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_StaticFields
{
public:
	// System.DateTime Firebase.Storage.StorageMetadata::UnixEpoch
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___UnixEpoch_0;

public:
	inline static int32_t get_offset_of_UnixEpoch_0() { return static_cast<int32_t>(offsetof(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_StaticFields, ___UnixEpoch_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_UnixEpoch_0() const { return ___UnixEpoch_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_UnixEpoch_0() { return &___UnixEpoch_0; }
	inline void set_UnixEpoch_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___UnixEpoch_0 = value;
	}
};


// Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1
struct  U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.GCHandle Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::bytesHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___bytesHandle_0;
	// System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::completionSource
	TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * ___completionSource_1;
	// Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState> Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::transferStateUpdater
	TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 * ___transferStateUpdater_2;
	// Firebase.Storage.StorageReference Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::U24this
	StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___U24this_3;

public:
	inline static int32_t get_offset_of_bytesHandle_0() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA, ___bytesHandle_0)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_bytesHandle_0() const { return ___bytesHandle_0; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_bytesHandle_0() { return &___bytesHandle_0; }
	inline void set_bytesHandle_0(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___bytesHandle_0 = value;
	}

	inline static int32_t get_offset_of_completionSource_1() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA, ___completionSource_1)); }
	inline TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * get_completionSource_1() const { return ___completionSource_1; }
	inline TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 ** get_address_of_completionSource_1() { return &___completionSource_1; }
	inline void set_completionSource_1(TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * value)
	{
		___completionSource_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___completionSource_1), (void*)value);
	}

	inline static int32_t get_offset_of_transferStateUpdater_2() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA, ___transferStateUpdater_2)); }
	inline TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 * get_transferStateUpdater_2() const { return ___transferStateUpdater_2; }
	inline TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 ** get_address_of_transferStateUpdater_2() { return &___transferStateUpdater_2; }
	inline void set_transferStateUpdater_2(TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 * value)
	{
		___transferStateUpdater_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___transferStateUpdater_2), (void*)value);
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA, ___U24this_3)); }
	inline StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * get_U24this_3() const { return ___U24this_3; }
	inline StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U24this_3), (void*)value);
	}
};


// System.DateTimeKind
struct  DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DateTimeKind_tA0B5F3F88991AC3B7F24393E15B54062722571D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Net.HttpStatusCode
struct  HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98 
{
public:
	// System.Int32 System.Net.HttpStatusCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HttpStatusCode_tFCB1BA96A101857DA7C390345DE43B77F9567D98, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
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


// System.Runtime.InteropServices.GCHandleType
struct  GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38 
{
public:
	// System.Int32 System.Runtime.InteropServices.GCHandleType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCHandleType_t5D58978165671EDEFCCAE1E2B237BD5AE4E8BC38, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.InteropServices.HandleRef
struct  HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF 
{
public:
	// System.Object System.Runtime.InteropServices.HandleRef::m_wrapper
	RuntimeObject * ___m_wrapper_0;
	// System.IntPtr System.Runtime.InteropServices.HandleRef::m_handle
	intptr_t ___m_handle_1;

public:
	inline static int32_t get_offset_of_m_wrapper_0() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_wrapper_0)); }
	inline RuntimeObject * get_m_wrapper_0() const { return ___m_wrapper_0; }
	inline RuntimeObject ** get_address_of_m_wrapper_0() { return &___m_wrapper_0; }
	inline void set_m_wrapper_0(RuntimeObject * value)
	{
		___m_wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_wrapper_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_handle_1() { return static_cast<int32_t>(offsetof(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF, ___m_handle_1)); }
	inline intptr_t get_m_handle_1() const { return ___m_handle_1; }
	inline intptr_t* get_address_of_m_handle_1() { return &___m_handle_1; }
	inline void set_m_handle_1(intptr_t value)
	{
		___m_handle_1 = value;
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


// System.Threading.CancellationTokenRegistration
struct  CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A 
{
public:
	// System.Threading.CancellationCallbackInfo System.Threading.CancellationTokenRegistration::m_callbackInfo
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	// System.Threading.SparselyPopulatedArrayAddInfo`1<System.Threading.CancellationCallbackInfo> System.Threading.CancellationTokenRegistration::m_registrationInfo
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;

public:
	inline static int32_t get_offset_of_m_callbackInfo_0() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_callbackInfo_0)); }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * get_m_callbackInfo_0() const { return ___m_callbackInfo_0; }
	inline CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B ** get_address_of_m_callbackInfo_0() { return &___m_callbackInfo_0; }
	inline void set_m_callbackInfo_0(CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * value)
	{
		___m_callbackInfo_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_callbackInfo_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_registrationInfo_1() { return static_cast<int32_t>(offsetof(CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A, ___m_registrationInfo_1)); }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  get_m_registrationInfo_1() const { return ___m_registrationInfo_1; }
	inline SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0 * get_address_of_m_registrationInfo_1() { return &___m_registrationInfo_1; }
	inline void set_m_registrationInfo_1(SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  value)
	{
		___m_registrationInfo_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_registrationInfo_1))->___m_source_0), (void*)NULL);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_pinvoke
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};
// Native definition for COM marshalling of System.Threading.CancellationTokenRegistration
struct CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A_marshaled_com
{
	CancellationCallbackInfo_t7FC8CF6DB4845FCB0138771E86AE058710B1117B * ___m_callbackInfo_0;
	SparselyPopulatedArrayAddInfo_1_t6EE25E0D720E03DE7A660791DB554CADCD247FC0  ___m_registrationInfo_1;
};

// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_28;
	// System.Threading.Tasks.Task_ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_33;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_28() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_28)); }
	inline RuntimeObject * get_m_continuationObject_28() const { return ___m_continuationObject_28; }
	inline RuntimeObject ** get_address_of_m_continuationObject_28() { return &___m_continuationObject_28; }
	inline void set_m_continuationObject_28(RuntimeObject * value)
	{
		___m_continuationObject_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_33() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_33)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_33() const { return ___m_contingentProperties_33; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_33() { return &___m_contingentProperties_33; }
	inline void set_m_contingentProperties_33(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_33), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_29;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_30;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_31;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_32;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_34;
	// System.Func`1<System.Threading.Tasks.Task_ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_35;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_36;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_37;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_38;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_39;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_29() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_29)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_29() const { return ___s_taskCompletionSentinel_29; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_29() { return &___s_taskCompletionSentinel_29; }
	inline void set_s_taskCompletionSentinel_29(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_29), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_30() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_30)); }
	inline bool get_s_asyncDebuggingEnabled_30() const { return ___s_asyncDebuggingEnabled_30; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_30() { return &___s_asyncDebuggingEnabled_30; }
	inline void set_s_asyncDebuggingEnabled_30(bool value)
	{
		___s_asyncDebuggingEnabled_30 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_31() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_31)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_31() const { return ___s_currentActiveTasks_31; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_31() { return &___s_currentActiveTasks_31; }
	inline void set_s_currentActiveTasks_31(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_31), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_32() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_32)); }
	inline RuntimeObject * get_s_activeTasksLock_32() const { return ___s_activeTasksLock_32; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_32() { return &___s_activeTasksLock_32; }
	inline void set_s_activeTasksLock_32(RuntimeObject * value)
	{
		___s_activeTasksLock_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_32), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_34() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_34)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_34() const { return ___s_taskCancelCallback_34; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_34() { return &___s_taskCancelCallback_34; }
	inline void set_s_taskCancelCallback_34(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_34), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_35() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_35)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_35() const { return ___s_createContingentProperties_35; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_35() { return &___s_createContingentProperties_35; }
	inline void set_s_createContingentProperties_35(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_35), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_36() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_36)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_36() const { return ___s_completedTask_36; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_36() { return &___s_completedTask_36; }
	inline void set_s_completedTask_36(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_37() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_37)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_37() const { return ___s_IsExceptionObservedByParentPredicate_37; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_37() { return &___s_IsExceptionObservedByParentPredicate_37; }
	inline void set_s_IsExceptionObservedByParentPredicate_37(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_37), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_38() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_38)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_38() const { return ___s_ecCallback_38; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_38() { return &___s_ecCallback_38; }
	inline void set_s_ecCallback_38(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_38), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_39() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_39)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_39() const { return ___s_IsTaskContinuationNullPredicate_39; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_39() { return &___s_IsTaskContinuationNullPredicate_39; }
	inline void set_s_IsTaskContinuationNullPredicate_39(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_39), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
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


// System.WeakReference
struct  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76  : public RuntimeObject
{
public:
	// System.Boolean System.WeakReference::isLongReference
	bool ___isLongReference_0;
	// System.Runtime.InteropServices.GCHandle System.WeakReference::gcHandle
	GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  ___gcHandle_1;

public:
	inline static int32_t get_offset_of_isLongReference_0() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___isLongReference_0)); }
	inline bool get_isLongReference_0() const { return ___isLongReference_0; }
	inline bool* get_address_of_isLongReference_0() { return &___isLongReference_0; }
	inline void set_isLongReference_0(bool value)
	{
		___isLongReference_0 = value;
	}

	inline static int32_t get_offset_of_gcHandle_1() { return static_cast<int32_t>(offsetof(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76, ___gcHandle_1)); }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  get_gcHandle_1() const { return ___gcHandle_1; }
	inline GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * get_address_of_gcHandle_1() { return &___gcHandle_1; }
	inline void set_gcHandle_1(GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  value)
	{
		___gcHandle_1 = value;
	}
};


// Firebase.FirebaseApp
struct  FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FirebaseApp::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.String Firebase.FirebaseApp::name
	String_t* ___name_3;
	// System.EventHandler Firebase.FirebaseApp::AppDisposed
	EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___AppDisposed_4;
	// Firebase.Platform.FirebaseAppPlatform Firebase.FirebaseApp::appPlatform
	FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * ___appPlatform_15;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_name_3() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___name_3)); }
	inline String_t* get_name_3() const { return ___name_3; }
	inline String_t** get_address_of_name_3() { return &___name_3; }
	inline void set_name_3(String_t* value)
	{
		___name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_3), (void*)value);
	}

	inline static int32_t get_offset_of_AppDisposed_4() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___AppDisposed_4)); }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * get_AppDisposed_4() const { return ___AppDisposed_4; }
	inline EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B ** get_address_of_AppDisposed_4() { return &___AppDisposed_4; }
	inline void set_AppDisposed_4(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * value)
	{
		___AppDisposed_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppDisposed_4), (void*)value);
	}

	inline static int32_t get_offset_of_appPlatform_15() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D, ___appPlatform_15)); }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * get_appPlatform_15() const { return ___appPlatform_15; }
	inline FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 ** get_address_of_appPlatform_15() { return &___appPlatform_15; }
	inline void set_appPlatform_15(FirebaseAppPlatform_t021911DCA26421E6DA90CB02A5028748C46B0ED5 * value)
	{
		___appPlatform_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___appPlatform_15), (void*)value);
	}
};

struct FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields
{
public:
	// System.Object Firebase.FirebaseApp::disposeLock
	RuntimeObject * ___disposeLock_2;
	// System.Collections.Generic.Dictionary`2<System.String,Firebase.FirebaseApp> Firebase.FirebaseApp::nameToProxy
	Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * ___nameToProxy_5;
	// System.Collections.Generic.Dictionary`2<System.IntPtr,Firebase.FirebaseApp> Firebase.FirebaseApp::cPtrToProxy
	Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * ___cPtrToProxy_6;
	// System.Boolean Firebase.FirebaseApp::AppUtilCallbacksInitialized
	bool ___AppUtilCallbacksInitialized_7;
	// System.Object Firebase.FirebaseApp::AppUtilCallbacksLock
	RuntimeObject * ___AppUtilCallbacksLock_8;
	// System.Boolean Firebase.FirebaseApp::PreventOnAllAppsDestroyed
	bool ___PreventOnAllAppsDestroyed_9;
	// System.Boolean Firebase.FirebaseApp::crashlyticsInitializationAttempted
	bool ___crashlyticsInitializationAttempted_10;
	// System.Int32 Firebase.FirebaseApp::CheckDependenciesThread
	int32_t ___CheckDependenciesThread_13;
	// System.Object Firebase.FirebaseApp::CheckDependenciesThreadLock
	RuntimeObject * ___CheckDependenciesThreadLock_14;
	// Firebase.FirebaseApp_CreateDelegate Firebase.FirebaseApp::<>f__amU24cache0
	CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * ___U3CU3Ef__amU24cache0_16;
	// System.Func`1<System.Boolean> Firebase.FirebaseApp::<>f__amU24cache1
	Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * ___U3CU3Ef__amU24cache1_17;
	// System.Func`1<Firebase.DependencyStatus> Firebase.FirebaseApp::<>f__amU24cache2
	Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * ___U3CU3Ef__amU24cache2_18;
	// System.Func`2<System.Threading.Tasks.Task`1<Firebase.DependencyStatus>,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache3
	Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * ___U3CU3Ef__amU24cache3_19;
	// System.Func`2<System.Threading.Tasks.Task,System.Threading.Tasks.Task`1<Firebase.DependencyStatus>> Firebase.FirebaseApp::<>f__amU24cache4
	Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * ___U3CU3Ef__amU24cache4_20;

public:
	inline static int32_t get_offset_of_disposeLock_2() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___disposeLock_2)); }
	inline RuntimeObject * get_disposeLock_2() const { return ___disposeLock_2; }
	inline RuntimeObject ** get_address_of_disposeLock_2() { return &___disposeLock_2; }
	inline void set_disposeLock_2(RuntimeObject * value)
	{
		___disposeLock_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disposeLock_2), (void*)value);
	}

	inline static int32_t get_offset_of_nameToProxy_5() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___nameToProxy_5)); }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * get_nameToProxy_5() const { return ___nameToProxy_5; }
	inline Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D ** get_address_of_nameToProxy_5() { return &___nameToProxy_5; }
	inline void set_nameToProxy_5(Dictionary_2_t80DF01C9A4AD3C3163F30545B040CD72186CD93D * value)
	{
		___nameToProxy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameToProxy_5), (void*)value);
	}

	inline static int32_t get_offset_of_cPtrToProxy_6() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___cPtrToProxy_6)); }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * get_cPtrToProxy_6() const { return ___cPtrToProxy_6; }
	inline Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 ** get_address_of_cPtrToProxy_6() { return &___cPtrToProxy_6; }
	inline void set_cPtrToProxy_6(Dictionary_2_tB08E4A073303DAA95DDF54DF97769846A97A0BB8 * value)
	{
		___cPtrToProxy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrToProxy_6), (void*)value);
	}

	inline static int32_t get_offset_of_AppUtilCallbacksInitialized_7() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksInitialized_7)); }
	inline bool get_AppUtilCallbacksInitialized_7() const { return ___AppUtilCallbacksInitialized_7; }
	inline bool* get_address_of_AppUtilCallbacksInitialized_7() { return &___AppUtilCallbacksInitialized_7; }
	inline void set_AppUtilCallbacksInitialized_7(bool value)
	{
		___AppUtilCallbacksInitialized_7 = value;
	}

	inline static int32_t get_offset_of_AppUtilCallbacksLock_8() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___AppUtilCallbacksLock_8)); }
	inline RuntimeObject * get_AppUtilCallbacksLock_8() const { return ___AppUtilCallbacksLock_8; }
	inline RuntimeObject ** get_address_of_AppUtilCallbacksLock_8() { return &___AppUtilCallbacksLock_8; }
	inline void set_AppUtilCallbacksLock_8(RuntimeObject * value)
	{
		___AppUtilCallbacksLock_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppUtilCallbacksLock_8), (void*)value);
	}

	inline static int32_t get_offset_of_PreventOnAllAppsDestroyed_9() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___PreventOnAllAppsDestroyed_9)); }
	inline bool get_PreventOnAllAppsDestroyed_9() const { return ___PreventOnAllAppsDestroyed_9; }
	inline bool* get_address_of_PreventOnAllAppsDestroyed_9() { return &___PreventOnAllAppsDestroyed_9; }
	inline void set_PreventOnAllAppsDestroyed_9(bool value)
	{
		___PreventOnAllAppsDestroyed_9 = value;
	}

	inline static int32_t get_offset_of_crashlyticsInitializationAttempted_10() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___crashlyticsInitializationAttempted_10)); }
	inline bool get_crashlyticsInitializationAttempted_10() const { return ___crashlyticsInitializationAttempted_10; }
	inline bool* get_address_of_crashlyticsInitializationAttempted_10() { return &___crashlyticsInitializationAttempted_10; }
	inline void set_crashlyticsInitializationAttempted_10(bool value)
	{
		___crashlyticsInitializationAttempted_10 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThread_13() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThread_13)); }
	inline int32_t get_CheckDependenciesThread_13() const { return ___CheckDependenciesThread_13; }
	inline int32_t* get_address_of_CheckDependenciesThread_13() { return &___CheckDependenciesThread_13; }
	inline void set_CheckDependenciesThread_13(int32_t value)
	{
		___CheckDependenciesThread_13 = value;
	}

	inline static int32_t get_offset_of_CheckDependenciesThreadLock_14() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___CheckDependenciesThreadLock_14)); }
	inline RuntimeObject * get_CheckDependenciesThreadLock_14() const { return ___CheckDependenciesThreadLock_14; }
	inline RuntimeObject ** get_address_of_CheckDependenciesThreadLock_14() { return &___CheckDependenciesThreadLock_14; }
	inline void set_CheckDependenciesThreadLock_14(RuntimeObject * value)
	{
		___CheckDependenciesThreadLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CheckDependenciesThreadLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache0_16() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache0_16)); }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * get_U3CU3Ef__amU24cache0_16() const { return ___U3CU3Ef__amU24cache0_16; }
	inline CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 ** get_address_of_U3CU3Ef__amU24cache0_16() { return &___U3CU3Ef__amU24cache0_16; }
	inline void set_U3CU3Ef__amU24cache0_16(CreateDelegate_t9B561D6BB5D924D814406F9D8AB6E93DB219BAA0 * value)
	{
		___U3CU3Ef__amU24cache0_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache0_16), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache1_17() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache1_17)); }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * get_U3CU3Ef__amU24cache1_17() const { return ___U3CU3Ef__amU24cache1_17; }
	inline Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F ** get_address_of_U3CU3Ef__amU24cache1_17() { return &___U3CU3Ef__amU24cache1_17; }
	inline void set_U3CU3Ef__amU24cache1_17(Func_1_t76FCDA5C58178ED310C472967481FDE5F47DCF0F * value)
	{
		___U3CU3Ef__amU24cache1_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache1_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache2_18() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache2_18)); }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * get_U3CU3Ef__amU24cache2_18() const { return ___U3CU3Ef__amU24cache2_18; }
	inline Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC ** get_address_of_U3CU3Ef__amU24cache2_18() { return &___U3CU3Ef__amU24cache2_18; }
	inline void set_U3CU3Ef__amU24cache2_18(Func_1_tE31066EBAC96C15B2B1A23B36A5EA7E028E19EAC * value)
	{
		___U3CU3Ef__amU24cache2_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache2_18), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache3_19() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache3_19)); }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * get_U3CU3Ef__amU24cache3_19() const { return ___U3CU3Ef__amU24cache3_19; }
	inline Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 ** get_address_of_U3CU3Ef__amU24cache3_19() { return &___U3CU3Ef__amU24cache3_19; }
	inline void set_U3CU3Ef__amU24cache3_19(Func_2_t6263458F4D5A237EA55DE064D01BBCEA453FE079 * value)
	{
		___U3CU3Ef__amU24cache3_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache3_19), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__amU24cache4_20() { return static_cast<int32_t>(offsetof(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields, ___U3CU3Ef__amU24cache4_20)); }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * get_U3CU3Ef__amU24cache4_20() const { return ___U3CU3Ef__amU24cache4_20; }
	inline Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 ** get_address_of_U3CU3Ef__amU24cache4_20() { return &___U3CU3Ef__amU24cache4_20; }
	inline void set_U3CU3Ef__amU24cache4_20(Func_2_t0AF0BC5FCFF7606A4CFF83A68368661E19454A91 * value)
	{
		___U3CU3Ef__amU24cache4_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__amU24cache4_20), (void*)value);
	}
};


// Firebase.FirebaseException
struct  FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47  : public Exception_t
{
public:
	// System.Int32 Firebase.FirebaseException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_17;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47, ___U3CErrorCodeU3Ek__BackingField_17)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_17() const { return ___U3CErrorCodeU3Ek__BackingField_17; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_17() { return &___U3CErrorCodeU3Ek__BackingField_17; }
	inline void set_U3CErrorCodeU3Ek__BackingField_17(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_17 = value;
	}
};


// Firebase.FutureBase
struct  FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureBase::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.FutureBase::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Storage.ControllerInternal
struct  ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.ControllerInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.ControllerInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Storage.FirebaseStorageInternal
struct  FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.FirebaseStorageInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.FirebaseStorageInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// Firebase.Storage.Internal.ModuleLogger
struct  ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608  : public RuntimeObject
{
public:
	// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.Internal.ModuleLogger::parent
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___parent_2;
	// System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger> Firebase.Storage.Internal.ModuleLogger::children
	List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A * ___children_3;
	// System.String Firebase.Storage.Internal.ModuleLogger::tag
	String_t* ___tag_4;
	// Firebase.LogLevel Firebase.Storage.Internal.ModuleLogger::logLevel
	int32_t ___logLevel_5;

public:
	inline static int32_t get_offset_of_parent_2() { return static_cast<int32_t>(offsetof(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608, ___parent_2)); }
	inline ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * get_parent_2() const { return ___parent_2; }
	inline ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 ** get_address_of_parent_2() { return &___parent_2; }
	inline void set_parent_2(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * value)
	{
		___parent_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parent_2), (void*)value);
	}

	inline static int32_t get_offset_of_children_3() { return static_cast<int32_t>(offsetof(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608, ___children_3)); }
	inline List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A * get_children_3() const { return ___children_3; }
	inline List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A ** get_address_of_children_3() { return &___children_3; }
	inline void set_children_3(List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A * value)
	{
		___children_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___children_3), (void*)value);
	}

	inline static int32_t get_offset_of_tag_4() { return static_cast<int32_t>(offsetof(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608, ___tag_4)); }
	inline String_t* get_tag_4() const { return ___tag_4; }
	inline String_t** get_address_of_tag_4() { return &___tag_4; }
	inline void set_tag_4(String_t* value)
	{
		___tag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tag_4), (void*)value);
	}

	inline static int32_t get_offset_of_logLevel_5() { return static_cast<int32_t>(offsetof(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608, ___logLevel_5)); }
	inline int32_t get_logLevel_5() const { return ___logLevel_5; }
	inline int32_t* get_address_of_logLevel_5() { return &___logLevel_5; }
	inline void set_logLevel_5(int32_t value)
	{
		___logLevel_5 = value;
	}
};

struct ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields
{
public:
	// System.Object Firebase.Storage.Internal.ModuleLogger::lockObject
	RuntimeObject * ___lockObject_0;
	// System.Collections.Generic.List`1<System.WeakReference> Firebase.Storage.Internal.ModuleLogger::roots
	List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * ___roots_1;

public:
	inline static int32_t get_offset_of_lockObject_0() { return static_cast<int32_t>(offsetof(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields, ___lockObject_0)); }
	inline RuntimeObject * get_lockObject_0() const { return ___lockObject_0; }
	inline RuntimeObject ** get_address_of_lockObject_0() { return &___lockObject_0; }
	inline void set_lockObject_0(RuntimeObject * value)
	{
		___lockObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lockObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_roots_1() { return static_cast<int32_t>(offsetof(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields, ___roots_1)); }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * get_roots_1() const { return ___roots_1; }
	inline List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 ** get_address_of_roots_1() { return &___roots_1; }
	inline void set_roots_1(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * value)
	{
		___roots_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roots_1), (void*)value);
	}
};


// Firebase.Storage.MetadataInternal
struct  MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.MetadataInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.MetadataInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
	// Firebase.Storage.FirebaseStorage Firebase.Storage.MetadataInternal::storage
	FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * ___storage_2;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_storage_2() { return static_cast<int32_t>(offsetof(MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2, ___storage_2)); }
	inline FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * get_storage_2() const { return ___storage_2; }
	inline FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 ** get_address_of_storage_2() { return &___storage_2; }
	inline void set_storage_2(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * value)
	{
		___storage_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storage_2), (void*)value);
	}
};


// Firebase.Storage.MonitorControllerInternal
struct  MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.MonitorControllerInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.MonitorControllerInternal::swigCMemOwn
	bool ___swigCMemOwn_1;
	// System.EventHandler`1<System.EventArgs> Firebase.Storage.MonitorControllerInternal::Paused
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___Paused_2;
	// System.EventHandler`1<System.EventArgs> Firebase.Storage.MonitorControllerInternal::Progress
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___Progress_3;
	// System.Action Firebase.Storage.MonitorControllerInternal::forwardToPausedEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___forwardToPausedEvent_4;
	// System.Action Firebase.Storage.MonitorControllerInternal::forwardToProgressEvent
	Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___forwardToProgressEvent_5;
	// Firebase.Storage.StorageReferenceInternal Firebase.Storage.MonitorControllerInternal::storageReference
	StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___storageReference_6;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}

	inline static int32_t get_offset_of_Paused_2() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46, ___Paused_2)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_Paused_2() const { return ___Paused_2; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_Paused_2() { return &___Paused_2; }
	inline void set_Paused_2(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___Paused_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Paused_2), (void*)value);
	}

	inline static int32_t get_offset_of_Progress_3() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46, ___Progress_3)); }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * get_Progress_3() const { return ___Progress_3; }
	inline EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** get_address_of_Progress_3() { return &___Progress_3; }
	inline void set_Progress_3(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * value)
	{
		___Progress_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Progress_3), (void*)value);
	}

	inline static int32_t get_offset_of_forwardToPausedEvent_4() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46, ___forwardToPausedEvent_4)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_forwardToPausedEvent_4() const { return ___forwardToPausedEvent_4; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_forwardToPausedEvent_4() { return &___forwardToPausedEvent_4; }
	inline void set_forwardToPausedEvent_4(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___forwardToPausedEvent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forwardToPausedEvent_4), (void*)value);
	}

	inline static int32_t get_offset_of_forwardToProgressEvent_5() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46, ___forwardToProgressEvent_5)); }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * get_forwardToProgressEvent_5() const { return ___forwardToProgressEvent_5; }
	inline Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 ** get_address_of_forwardToProgressEvent_5() { return &___forwardToProgressEvent_5; }
	inline void set_forwardToProgressEvent_5(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * value)
	{
		___forwardToProgressEvent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___forwardToProgressEvent_5), (void*)value);
	}

	inline static int32_t get_offset_of_storageReference_6() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46, ___storageReference_6)); }
	inline StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * get_storageReference_6() const { return ___storageReference_6; }
	inline StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F ** get_address_of_storageReference_6() { return &___storageReference_6; }
	inline void set_storageReference_6(StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * value)
	{
		___storageReference_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___storageReference_6), (void*)value);
	}
};

struct MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference> Firebase.Storage.MonitorControllerInternal::cPtrsToProxies
	Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * ___cPtrsToProxies_7;
	// Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate Firebase.Storage.MonitorControllerInternal::<>f__mgU24cache0
	MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___U3CU3Ef__mgU24cache0_8;
	// Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate Firebase.Storage.MonitorControllerInternal::<>f__mgU24cache1
	MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___U3CU3Ef__mgU24cache1_9;

public:
	inline static int32_t get_offset_of_cPtrsToProxies_7() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields, ___cPtrsToProxies_7)); }
	inline Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * get_cPtrsToProxies_7() const { return ___cPtrsToProxies_7; }
	inline Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 ** get_address_of_cPtrsToProxies_7() { return &___cPtrsToProxies_7; }
	inline void set_cPtrsToProxies_7(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * value)
	{
		___cPtrsToProxies_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cPtrsToProxies_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache0_8() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields, ___U3CU3Ef__mgU24cache0_8)); }
	inline MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * get_U3CU3Ef__mgU24cache0_8() const { return ___U3CU3Ef__mgU24cache0_8; }
	inline MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 ** get_address_of_U3CU3Ef__mgU24cache0_8() { return &___U3CU3Ef__mgU24cache0_8; }
	inline void set_U3CU3Ef__mgU24cache0_8(MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * value)
	{
		___U3CU3Ef__mgU24cache0_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache0_8), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__mgU24cache1_9() { return static_cast<int32_t>(offsetof(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields, ___U3CU3Ef__mgU24cache1_9)); }
	inline MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * get_U3CU3Ef__mgU24cache1_9() const { return ___U3CU3Ef__mgU24cache1_9; }
	inline MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 ** get_address_of_U3CU3Ef__mgU24cache1_9() { return &___U3CU3Ef__mgU24cache1_9; }
	inline void set_U3CU3Ef__mgU24cache1_9(MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * value)
	{
		___U3CU3Ef__mgU24cache1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3Ef__mgU24cache1_9), (void*)value);
	}
};


// Firebase.Storage.StorageException
struct  StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A  : public Exception_t
{
public:
	// System.Int32 Firebase.Storage.StorageException::<ErrorCode>k__BackingField
	int32_t ___U3CErrorCodeU3Ek__BackingField_19;
	// System.Int32 Firebase.Storage.StorageException::<HttpResultCode>k__BackingField
	int32_t ___U3CHttpResultCodeU3Ek__BackingField_20;

public:
	inline static int32_t get_offset_of_U3CErrorCodeU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A, ___U3CErrorCodeU3Ek__BackingField_19)); }
	inline int32_t get_U3CErrorCodeU3Ek__BackingField_19() const { return ___U3CErrorCodeU3Ek__BackingField_19; }
	inline int32_t* get_address_of_U3CErrorCodeU3Ek__BackingField_19() { return &___U3CErrorCodeU3Ek__BackingField_19; }
	inline void set_U3CErrorCodeU3Ek__BackingField_19(int32_t value)
	{
		___U3CErrorCodeU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CHttpResultCodeU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A, ___U3CHttpResultCodeU3Ek__BackingField_20)); }
	inline int32_t get_U3CHttpResultCodeU3Ek__BackingField_20() const { return ___U3CHttpResultCodeU3Ek__BackingField_20; }
	inline int32_t* get_address_of_U3CHttpResultCodeU3Ek__BackingField_20() { return &___U3CHttpResultCodeU3Ek__BackingField_20; }
	inline void set_U3CHttpResultCodeU3Ek__BackingField_20(int32_t value)
	{
		___U3CHttpResultCodeU3Ek__BackingField_20 = value;
	}
};

struct StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>> Firebase.Storage.StorageException::errorToStorageErrorAndHttpStatusCode
	Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * ___errorToStorageErrorAndHttpStatusCode_17;
	// System.Tuple`2<System.Int32,System.Net.HttpStatusCode> Firebase.Storage.StorageException::unknownError
	Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * ___unknownError_18;

public:
	inline static int32_t get_offset_of_errorToStorageErrorAndHttpStatusCode_17() { return static_cast<int32_t>(offsetof(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_StaticFields, ___errorToStorageErrorAndHttpStatusCode_17)); }
	inline Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * get_errorToStorageErrorAndHttpStatusCode_17() const { return ___errorToStorageErrorAndHttpStatusCode_17; }
	inline Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF ** get_address_of_errorToStorageErrorAndHttpStatusCode_17() { return &___errorToStorageErrorAndHttpStatusCode_17; }
	inline void set_errorToStorageErrorAndHttpStatusCode_17(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * value)
	{
		___errorToStorageErrorAndHttpStatusCode_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorToStorageErrorAndHttpStatusCode_17), (void*)value);
	}

	inline static int32_t get_offset_of_unknownError_18() { return static_cast<int32_t>(offsetof(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_StaticFields, ___unknownError_18)); }
	inline Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * get_unknownError_18() const { return ___unknownError_18; }
	inline Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 ** get_address_of_unknownError_18() { return &___unknownError_18; }
	inline void set_unknownError_18(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * value)
	{
		___unknownError_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unknownError_18), (void*)value);
	}
};


// Firebase.Storage.StorageReferenceInternal
struct  StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F  : public RuntimeObject
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.StorageReferenceInternal::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_0;
	// System.Boolean Firebase.Storage.StorageReferenceInternal::swigCMemOwn
	bool ___swigCMemOwn_1;

public:
	inline static int32_t get_offset_of_swigCPtr_0() { return static_cast<int32_t>(offsetof(StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F, ___swigCPtr_0)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_0() const { return ___swigCPtr_0; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_0() { return &___swigCPtr_0; }
	inline void set_swigCPtr_0(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_0))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_swigCMemOwn_1() { return static_cast<int32_t>(offsetof(StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F, ___swigCMemOwn_1)); }
	inline bool get_swigCMemOwn_1() const { return ___swigCMemOwn_1; }
	inline bool* get_address_of_swigCMemOwn_1() { return &___swigCMemOwn_1; }
	inline void set_swigCMemOwn_1(bool value)
	{
		___swigCMemOwn_1 = value;
	}
};


// System.AggregateException
struct  AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1  : public Exception_t
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::m_innerExceptions
	ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * ___m_innerExceptions_17;

public:
	inline static int32_t get_offset_of_m_innerExceptions_17() { return static_cast<int32_t>(offsetof(AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1, ___m_innerExceptions_17)); }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * get_m_innerExceptions_17() const { return ___m_innerExceptions_17; }
	inline ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE ** get_address_of_m_innerExceptions_17() { return &___m_innerExceptions_17; }
	inline void set_m_innerExceptions_17(ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * value)
	{
		___m_innerExceptions_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_innerExceptions_17), (void*)value);
	}
};


// System.ApplicationException
struct  ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407  : public Exception_t
{
public:

public:
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>
struct  Task_1_t9744B6AD55320186C36CC7626916272750E46384  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t9744B6AD55320186C36CC7626916272750E46384, ___m_result_40)); }
	inline MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * get_m_result_40() const { return ___m_result_40; }
	inline MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t9744B6AD55320186C36CC7626916272750E46384_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB0AACF88AB7D7EB96315EE54BB2F3BA8F419B83C * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t269638A3911C516EB54F9DF88A1F457387FEA32B * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t9744B6AD55320186C36CC7626916272750E46384_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tB0AACF88AB7D7EB96315EE54BB2F3BA8F419B83C * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tB0AACF88AB7D7EB96315EE54BB2F3BA8F419B83C ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tB0AACF88AB7D7EB96315EE54BB2F3BA8F419B83C * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t9744B6AD55320186C36CC7626916272750E46384_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t269638A3911C516EB54F9DF88A1F457387FEA32B * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t269638A3911C516EB54F9DF88A1F457387FEA32B ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t269638A3911C516EB54F9DF88A1F457387FEA32B * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata>
struct  Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE, ___m_result_40)); }
	inline StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * get_m_result_40() const { return ___m_result_40; }
	inline StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9383B845905785E432D474115F7020535F37CD3D * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t25715FE444A3D770EDADDAB8122A7DE9F227A6EB * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9383B845905785E432D474115F7020535F37CD3D * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9383B845905785E432D474115F7020535F37CD3D ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9383B845905785E432D474115F7020535F37CD3D * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t25715FE444A3D770EDADDAB8122A7DE9F227A6EB * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t25715FE444A3D770EDADDAB8122A7DE9F227A6EB ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t25715FE444A3D770EDADDAB8122A7DE9F227A6EB * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_40)); }
	inline RuntimeObject * get_m_result_40() const { return ___m_result_40; }
	inline RuntimeObject ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(RuntimeObject * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.String>
struct  Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	String_t* ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3, ___m_result_40)); }
	inline String_t* get_m_result_40() const { return ___m_result_40; }
	inline String_t** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(String_t* value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t9179B7311982EC4F85FDFBA0C89416AB321E74CB * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tC39B0B05F6B9D37E14D29C14F1C4BCEAE6381FAC * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct  Task_1_t25BD7331494EE1D3795B89B7038987A39373E015  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Task_1_t9744B6AD55320186C36CC7626916272750E46384 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_t25BD7331494EE1D3795B89B7038987A39373E015, ___m_result_40)); }
	inline Task_1_t9744B6AD55320186C36CC7626916272750E46384 * get_m_result_40() const { return ___m_result_40; }
	inline Task_1_t9744B6AD55320186C36CC7626916272750E46384 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Task_1_t9744B6AD55320186C36CC7626916272750E46384 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_t25BD7331494EE1D3795B89B7038987A39373E015_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t5BF47ADB42BA2EA9324776C9D887F1ABD2BAF074 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_tDB0094BB334243781876233C835779F769F7183D * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_t25BD7331494EE1D3795B89B7038987A39373E015_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_t5BF47ADB42BA2EA9324776C9D887F1ABD2BAF074 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_t5BF47ADB42BA2EA9324776C9D887F1ABD2BAF074 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_t5BF47ADB42BA2EA9324776C9D887F1ABD2BAF074 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_t25BD7331494EE1D3795B89B7038987A39373E015_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_tDB0094BB334243781876233C835779F769F7183D * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_tDB0094BB334243781876233C835779F769F7183D ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_tDB0094BB334243781876233C835779F769F7183D * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Uri>
struct  Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___m_result_40;

public:
	inline static int32_t get_offset_of_m_result_40() { return static_cast<int32_t>(offsetof(Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD, ___m_result_40)); }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * get_m_result_40() const { return ___m_result_40; }
	inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 ** get_address_of_m_result_40() { return &___m_result_40; }
	inline void set_m_result_40(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * value)
	{
		___m_result_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_40), (void*)value);
	}
};

struct Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tB6F880802E253554549EDB6C0254635FD04C7765 * ___s_Factory_41;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t50869D0C8AE5184B71F6759B5520DAE40D9502CE * ___TaskWhenAnyCast_42;

public:
	inline static int32_t get_offset_of_s_Factory_41() { return static_cast<int32_t>(offsetof(Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD_StaticFields, ___s_Factory_41)); }
	inline TaskFactory_1_tB6F880802E253554549EDB6C0254635FD04C7765 * get_s_Factory_41() const { return ___s_Factory_41; }
	inline TaskFactory_1_tB6F880802E253554549EDB6C0254635FD04C7765 ** get_address_of_s_Factory_41() { return &___s_Factory_41; }
	inline void set_s_Factory_41(TaskFactory_1_tB6F880802E253554549EDB6C0254635FD04C7765 * value)
	{
		___s_Factory_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_41), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_42() { return static_cast<int32_t>(offsetof(Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD_StaticFields, ___TaskWhenAnyCast_42)); }
	inline Func_2_t50869D0C8AE5184B71F6759B5520DAE40D9502CE * get_TaskWhenAnyCast_42() const { return ___TaskWhenAnyCast_42; }
	inline Func_2_t50869D0C8AE5184B71F6759B5520DAE40D9502CE ** get_address_of_TaskWhenAnyCast_42() { return &___TaskWhenAnyCast_42; }
	inline void set_TaskWhenAnyCast_42(Func_2_t50869D0C8AE5184B71F6759B5520DAE40D9502CE * value)
	{
		___TaskWhenAnyCast_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_42), (void*)value);
	}
};


// System.Tuple`2<System.Int32,System.Int32Enum>
struct  Tuple_2_tA8C0380315DDBC685CC273129020D3C7192B905D  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_tA8C0380315DDBC685CC273129020D3C7192B905D, ___m_Item1_0)); }
	inline int32_t get_m_Item1_0() const { return ___m_Item1_0; }
	inline int32_t* get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(int32_t value)
	{
		___m_Item1_0 = value;
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_tA8C0380315DDBC685CC273129020D3C7192B905D, ___m_Item2_1)); }
	inline int32_t get_m_Item2_1() const { return ___m_Item2_1; }
	inline int32_t* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(int32_t value)
	{
		___m_Item2_1 = value;
	}
};


// System.Tuple`2<System.Int32,System.Net.HttpStatusCode>
struct  Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	int32_t ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	int32_t ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5, ___m_Item1_0)); }
	inline int32_t get_m_Item1_0() const { return ___m_Item1_0; }
	inline int32_t* get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(int32_t value)
	{
		___m_Item1_0 = value;
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5, ___m_Item2_1)); }
	inline int32_t get_m_Item2_1() const { return ___m_Item2_1; }
	inline int32_t* get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(int32_t value)
	{
		___m_Item2_1 = value;
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


// Firebase.FutureString
struct  FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.FutureString::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.FutureString::callbackData
	intptr_t ___callbackData_6;
	// Firebase.FutureString_SWIG_CompletionDelegate Firebase.FutureString::SWIG_CompletionCB
	SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_t35CC860C339E840CDE3B3C97B2EB8DE9ACEF1BC4 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.FutureString_Action> Firebase.FutureString::Callbacks
	Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * ___Callbacks_3;
	// System.Int32 Firebase.FutureString::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.FutureString::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t88186B632A53C712F2276780B889F862D4A6AC1B * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// Firebase.Storage.Future_StorageMetadata
struct  Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE  : public FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4
{
public:
	// System.Runtime.InteropServices.HandleRef Firebase.Storage.Future_StorageMetadata::swigCPtr
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___swigCPtr_2;
	// System.IntPtr Firebase.Storage.Future_StorageMetadata::callbackData
	intptr_t ___callbackData_6;
	// Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate Firebase.Storage.Future_StorageMetadata::SWIG_CompletionCB
	SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * ___SWIG_CompletionCB_7;

public:
	inline static int32_t get_offset_of_swigCPtr_2() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE, ___swigCPtr_2)); }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  get_swigCPtr_2() const { return ___swigCPtr_2; }
	inline HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * get_address_of_swigCPtr_2() { return &___swigCPtr_2; }
	inline void set_swigCPtr_2(HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  value)
	{
		___swigCPtr_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___swigCPtr_2))->___m_wrapper_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_callbackData_6() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE, ___callbackData_6)); }
	inline intptr_t get_callbackData_6() const { return ___callbackData_6; }
	inline intptr_t* get_address_of_callbackData_6() { return &___callbackData_6; }
	inline void set_callbackData_6(intptr_t value)
	{
		___callbackData_6 = value;
	}

	inline static int32_t get_offset_of_SWIG_CompletionCB_7() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE, ___SWIG_CompletionCB_7)); }
	inline SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * get_SWIG_CompletionCB_7() const { return ___SWIG_CompletionCB_7; }
	inline SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 ** get_address_of_SWIG_CompletionCB_7() { return &___SWIG_CompletionCB_7; }
	inline void set_SWIG_CompletionCB_7(SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * value)
	{
		___SWIG_CompletionCB_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SWIG_CompletionCB_7), (void*)value);
	}
};

struct Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata_Action> Firebase.Storage.Future_StorageMetadata::Callbacks
	Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * ___Callbacks_3;
	// System.Int32 Firebase.Storage.Future_StorageMetadata::CallbackIndex
	int32_t ___CallbackIndex_4;
	// System.Object Firebase.Storage.Future_StorageMetadata::CallbackLock
	RuntimeObject * ___CallbackLock_5;

public:
	inline static int32_t get_offset_of_Callbacks_3() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields, ___Callbacks_3)); }
	inline Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * get_Callbacks_3() const { return ___Callbacks_3; }
	inline Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 ** get_address_of_Callbacks_3() { return &___Callbacks_3; }
	inline void set_Callbacks_3(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * value)
	{
		___Callbacks_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Callbacks_3), (void*)value);
	}

	inline static int32_t get_offset_of_CallbackIndex_4() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields, ___CallbackIndex_4)); }
	inline int32_t get_CallbackIndex_4() const { return ___CallbackIndex_4; }
	inline int32_t* get_address_of_CallbackIndex_4() { return &___CallbackIndex_4; }
	inline void set_CallbackIndex_4(int32_t value)
	{
		___CallbackIndex_4 = value;
	}

	inline static int32_t get_offset_of_CallbackLock_5() { return static_cast<int32_t>(offsetof(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields, ___CallbackLock_5)); }
	inline RuntimeObject * get_CallbackLock_5() const { return ___CallbackLock_5; }
	inline RuntimeObject ** get_address_of_CallbackLock_5() { return &___CallbackLock_5; }
	inline void set_CallbackLock_5(RuntimeObject * value)
	{
		___CallbackLock_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackLock_5), (void*)value);
	}
};


// Firebase.Storage.Future_StorageMetadata_Action
struct  Action_t1A01C351F74C95684C76A3BE30208EADA4B35480  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate
struct  SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate
struct  MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate
struct  ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate
struct  ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB  : public MulticastDelegate_t
{
public:

public:
};


// Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate
struct  SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB  : public MulticastDelegate_t
{
public:

public:
};


// System.Action
struct  Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct  Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<System.Threading.Tasks.Task`1<System.String>>
struct  Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882  : public MulticastDelegate_t
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


// System.ArithmeticException
struct  ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler
struct  EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B  : public MulticastDelegate_t
{
public:

public:
};


// System.EventHandler`1<System.EventArgs>
struct  EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<Firebase.Storage.StorageMetadata>
struct  Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Uri>
struct  Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>,System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>
struct  Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C  : public MulticastDelegate_t
{
public:

public:
};


// System.IO.IOException
struct  IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.IO.IOException::_maybeFullPath
	String_t* ____maybeFullPath_17;

public:
	inline static int32_t get_offset_of__maybeFullPath_17() { return static_cast<int32_t>(offsetof(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA, ____maybeFullPath_17)); }
	inline String_t* get__maybeFullPath_17() const { return ____maybeFullPath_17; }
	inline String_t** get_address_of__maybeFullPath_17() { return &____maybeFullPath_17; }
	inline void set__maybeFullPath_17(String_t* value)
	{
		____maybeFullPath_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____maybeFullPath_17), (void*)value);
	}
};


// System.IndexOutOfRangeException
struct  IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidCastException
struct  InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.InvalidOperationException
struct  InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.MemberAccessException
struct  MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NullReferenceException
struct  NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.OutOfMemoryException
struct  OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.Reflection.TargetException
struct  TargetException_t24392281B50548C1502540A59617BC50E2EAF8C2  : public ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// System.DivideByZeroException
struct  DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};


// System.FieldAccessException
struct  FieldAccessException_t88FFE38715CE4D411C1174EBBD26BC4BC583AD1D  : public MemberAccessException_tD623E47056C7D98D56B63B4B954D4E5E128A30FC
{
public:

public:
};


// System.OverflowException
struct  OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9  : public ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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


// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, Exception_t * ___exception0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Object>::get_Task()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::set_Item(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, intptr_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared (Dictionary_2_t905A8A2669CCF7FE1D201006A028388B945E2B5F * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared (ReadOnlyCollection_1_t921D1901AD35062BE31FAEB0798A4B814F33A3C3 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// !1 System.Tuple`2<System.Int32,System.Int32Enum>::get_Item2()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_mEA706559A417C166E2F77D7B23738BB33C21BBA2_gshared_inline (Tuple_2_tA8C0380315DDBC685CC273129020D3C7192B905D * __this, const RuntimeMethod* method);
// !0 System.Tuple`2<System.Int32,System.Int32Enum>::get_Item1()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_m796304B7E4938AA120C7F40CCB7E51ED0360E09F_gshared_inline (Tuple_2_tA8C0380315DDBC685CC273129020D3C7192B905D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, const RuntimeMethod* method);
// System.Void System.Tuple`2<System.Int32,System.Int32Enum>::.ctor(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m6AF5710423E0F3B674D09A608C27C76B363089D1_gshared (Tuple_2_tA8C0380315DDBC685CC273129020D3C7192B905D * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32Enum,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared (Dictionary_2_t7E8D40B461AB586AEA5DD75D8354C4913EEB1337 * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<System.Object>::ContinueWith<System.Object>(System.Func`2<System.Threading.Tasks.Task`1<!0>,!!0>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_1_ContinueWith_TisRuntimeObject_m9333E52269EFEEE109F8A285E91ABCE0D0C3DF95_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Func_2_tCFF101E8462704D1AB4ECCE0E86BAF02B0ADC2D6 * ___continuationFunction0, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.TaskExtensions::Unwrap<System.Object>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<!!0>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskExtensions_Unwrap_TisRuntimeObject_m145F68D4BF6EEBFA795C0DD8ED28A235796ADD14_gshared (Task_1_t4A805773480425D0A659D93F81B4A3568D8C50CA * ___task0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>::.ctor(Firebase.Storage.StorageReference,System.IProgress`1<T>,T,Firebase.Storage.Internal.TransferState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferStateUpdater_1__ctor_m147F1FEE25D9F7923612DF75C81111F382895349_gshared (TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16 * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___storageReference0, RuntimeObject* ___progressHandler1, RuntimeObject * ___progressState2, TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * ___progressStateBackingStore3, const RuntimeMethod* method);
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>::get_MonitorController()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * TransferStateUpdater_1_get_MonitorController_m6F7F53BB71905E8F49A9B2E85AD0F21A8B241C80_gshared_inline (TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.Object>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, Action_1_tFE20E1B68D8FC8F70518B6977AEA92C696288F1D * ___continuationAction0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Object>::SetResult(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, RuntimeObject * ___result0, const RuntimeMethod* method);
// System.Void System.EventHandler`1<System.Object>::Invoke(System.Object,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared (EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// O Firebase.Storage.StorageReference::CompleteTask<System.Object,System.Object>(System.Threading.Tasks.Task`1<I>,System.Threading.Tasks.TaskCompletionSource`1<O>,System.Func`1<O>,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * StorageReference_CompleteTask_TisRuntimeObject_TisRuntimeObject_mBC2F55D00C7FAE33F4EF54BC2FA2613910D31D5F_gshared (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___task0, TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * ___completionSource1, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___getResult2, String_t* ___operationDescription3, bool ___setCompletionSourceResult4, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.Object>::get_Result()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferStateUpdater`1<System.Object>::SetMetadata(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferStateUpdater_1_SetMetadata_m3C10A2BE916E922934F3C4A3FF1BBB5AAD19300D_gshared (TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16 * __this, StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___metadata0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.HandleRef::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, RuntimeObject * ___wrapper0, intptr_t ___handle1, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Enter(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.HandleRef::get_Handle()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_ControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_ControllerInternal_mD1FC9B42FB2BC6F0B8E9C3D4B7224C1B599F1337 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Boolean Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_ControllerInternal_Cancel(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageInternalPINVOKE_Firebase_Storage_ControllerInternal_Cancel_m66B2A2427E1607BC89EA7561B71E290FC6AEA2EE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.AppUtilPINVOKE/SWIGPendingException::get_Pending()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD (const RuntimeMethod* method);
// System.Exception Firebase.AppUtilPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD (const RuntimeMethod* method);
// System.Void System.EventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78 (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::add_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.ModuleLogger::.ctor(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger__ctor_mE8D814C24F604C09F5D9A651BDB56DEF9ABB556E (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___parentLogger0, const RuntimeMethod* method);
// System.String Firebase.Storage.Internal.ModuleLogger::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleLogger_get_Tag_m21D179CE4DF7AF1143E8ED00D4A370059D7C162A (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.FirebaseStorageInternal::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseStorageInternal_get_Url_m425C6396457782FF410100806B804B820E891085 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.ModuleLogger::set_Tag(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModuleLogger_set_Tag_m7ECACA8B7C965C422E171F9AD64A3CF377641A13_inline (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, String_t* ___value0, const RuntimeMethod* method);
// Firebase.LogLevel Firebase.FirebaseApp::get_LogLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF (const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.ModuleLogger::set_Level(Firebase.LogLevel)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModuleLogger_set_Level_m5BA3815BE5A9457A780F508962931E2DAC4AEBC6_inline (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorage::set_Logger(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseStorage_set_Logger_m1241ABB29DEFBB0EC0F19263C3EFEB7221EFDF72_inline (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorageInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseStorageInternal_SetSwigCMemOwn_m92F09F2A153ED27C2745E3B85AB045B3D37A3102_inline (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, bool ___ownership0, const RuntimeMethod* method);
// System.String Firebase.Storage.FirebaseStorageInternal::get_InstanceKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseStorageInternal_get_InstanceKey_mE87BB7C66F3082EB3380EA1B48DAA97809F8C987 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, const RuntimeMethod* method);
// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::get_Logger()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.ModuleLogger::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0 (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_Dispose_m49855FDA95AC895C380A8FF8C156F629B484DA4D (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Storage.FirebaseStorageInternal::getCPtr(Firebase.Storage.FirebaseStorageInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseStorageInternal_getCPtr_mD5B445F5C0A11BFA7670F93A931064FDD48668B1 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * ___obj0, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::remove_AppDisposed(System.EventHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * ___value0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>::Remove(!0)
inline bool Dictionary_2_Remove_mC3B3EE0C566D6AB2793E53A4FEC43EA58786ECCA (Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 *, String_t*, const RuntimeMethod*))Dictionary_2_Remove_m32325BAD86F31C471AEBE80C6A7A8A6908EB0611_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Platform.FirebaseLogger::LogMessage(Firebase.Platform.PlatformLogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86 (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, const RuntimeMethod* method);
// System.Void System.Uri::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, String_t* ___uriString0, const RuntimeMethod* method);
// System.String System.Uri::get_PathAndQuery()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35 (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * __this, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * FirebaseStorage_get_DefaultInstance_m57584267322C66F070C5E2F58173A698754593E6 (const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m80AFBEF2F3857F9D6A67126F4C4D9A9B9CEC5902 (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.String System.String::Replace(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D (String_t* __this, String_t* ___oldValue0, String_t* ___newValue1, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B (String_t* __this, int32_t ___startIndex0, int32_t ___length1, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void System.Reflection.FieldInfo::SetValue(System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C (FieldInfo_t * __this, RuntimeObject * ___obj0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.GC::KeepAlive(System.Object)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR void GC_KeepAlive_m16C41A64E08E35865A249CB5479A37BACBEDC75C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.FirebaseApp::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7 (const RuntimeMethod* method);
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * FirebaseStorage_GetInstance_m44B5B7CB1BA8AB00F31860D48CE31EB4940DF6BF (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// Firebase.AppOptions Firebase.FirebaseApp::get_Options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * FirebaseApp_get_Options_m98E649DAB99D126DC16D6E78682F933B02049180 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.String Firebase.AppOptions::get_StorageBucket()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AppOptions_get_StorageBucket_m63489CFD73EA950BCF40D828F23658740C8B35FB_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, const RuntimeMethod* method);
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::GetInstanceInternal(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * FirebaseStorage_GetInstanceInternal_m5F406685D26131AB6405BE7FD64B91FED3BA1396 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___bucketUrl1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m080F9F073DBB321B63576C2BDAAEEBAF134546A3 (Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * __this, String_t* ___key0, FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 *, String_t*, FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m048C13E0F44BDC16F7CF01D14E918A84EE72C62C_gshared)(__this, ___key0, ___value1, method);
}
// Firebase.Storage.FirebaseStorageInternal Firebase.Storage.FirebaseStorageInternal::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * FirebaseStorageInternal_GetInstanceInternal_m97EBB2762C810B78E695CFC2051C1ED259D36538 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::FindByKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * FirebaseStorage_FindByKey_m6EF3BABE9BA15FA72C5E6B3BCB890291052465C7 (String_t* ___instanceKey0, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorage::.ctor(Firebase.Storage.FirebaseStorageInternal,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage__ctor_m3FC01B84D3001B1846FAD4799E4358FFFDC3F297 (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * ___storage0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mC1322A23CE40537452EA237A1FCD7F852C10BBA9 (Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * __this, String_t* ___key0, FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 *, String_t*, FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 *, const RuntimeMethod*))Dictionary_2_set_Item_mE6BF870B04922441F9F2760E782DEE6EE682615A_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean Firebase.Storage.StorageReferenceInternal::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageReferenceInternal_get_IsValid_mE6974AE9F4500567F662E861A6FCD0E35DAB028B (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorage::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_ThrowIfNull_m392D1788F987DB111E04ED22499C897524442F1E (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, const RuntimeMethod* method);
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.FirebaseStorageInternal::GetReferenceFromUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * FirebaseStorageInternal_GetReferenceFromUrl_mE8ACDA413CCCECC978A1F7EE27EFA935E9A9AF11 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, String_t* ___url0, const RuntimeMethod* method);
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.FirebaseStorage::ValidateStorageReferenceInternal(Firebase.Storage.StorageReferenceInternal,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * FirebaseStorage_ValidateStorageReferenceInternal_m2DB5A7D4F8068258A09885D7B93585D9919D8F38 (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___reference0, String_t* ___message1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference::.ctor(Firebase.Storage.FirebaseStorage,Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReference__ctor_mC09ABE63B921CA4FF2EEA622C567FB1A3FB4B6C5 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * ___storage0, StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___storageReferenceInternal1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.String,Firebase.Storage.FirebaseStorage>::.ctor()
inline void Dictionary_2__ctor_m8032C2FE80E98D3C44CF88FFC5F60C88D981BD3A (Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 *, const RuntimeMethod*))Dictionary_2__ctor_m2C8EE5C13636D67F6C451C4935049F534AEC658F_gshared)(__this, method);
}
// System.Void Firebase.Storage.FirebaseStorageInternal::ReleaseReferenceInternal(Firebase.Storage.FirebaseStorageInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_ReleaseReferenceInternal_m469E5D75647171C997032C08A100E1FDFC64D422 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * ___instance0, const RuntimeMethod* method);
// Firebase.FirebaseApp Firebase.Storage.FirebaseStorageInternal::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseStorageInternal_get_App_m4D9B68C2100C679EF71EAFD523E739D22D1BAD8C (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, const RuntimeMethod* method);
// System.String Firebase.FirebaseApp::get_Name()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0_m4D7F73FBC07183FE3511D70158508EA2FDC35696 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReferenceInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReferenceInternal__ctor_mAC63CF4DCBAAD690883596AC1961550209864AD2 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.FirebaseApp::getCPtr(Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal_m0A66DD0BEDE5C0C3AB7CA56456F706CF994D8F35 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Storage.FirebaseStorageInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal__ctor_m82C47BB978DBE52118D41F8EDA86920C6FD23ED1 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal_m6A406313FF6F90F6B4B360A883ECA262B71B4DA5 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_App_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_App_get_mE1F82516CF5CB0DD9995BA0FDD2C538B99E59BBE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FirebaseApp::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseApp__ctor_mB94B4439B6474A9B3420A388F4C847153BB7DA2B (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_Url_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_Url_get_mB19EBC03B4F911B9ABC4A1598D9131A6DF156BB5 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SWIG_CompletionDispatcher_mBD53FFA5A73C38A7CD49CC9FFB189224CA7ED21D (int32_t ___key0, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIGUpcast_mBE021ECAAE278E80A044F6E2A980FB569D6C812E (intptr_t ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SetCompletionData_m5B7B3B5DA93099C9C06860AB023E460F7511F012 (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_Future_StorageMetadata(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_Future_StorageMetadata_mD71C908C2FB28CAD92C8342F8AAD8F6DE68B5E31 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureBase::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata/<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m455B9396E995372C47CC09F16F56363889AEFAF1 (U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::.ctor()
inline void TaskCompletionSource_1__ctor_m0A82D3C746DB9615E72F614755DC5CC16DFD6EC2 (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// Firebase.FutureStatus Firebase.FutureBase::status()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.Void Firebase.FirebaseException::.ctor(System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, int32_t ___errorCode0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::SetException(System.Exception)
inline void TaskCompletionSource_1_SetException_mB6C19B4DD3C5A9FEBE258E2EC15FF348EF5A9452 (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * __this, Exception_t * ___exception0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 *, Exception_t *, const RuntimeMethod*))TaskCompletionSource_1_SetException_mDD594BEBBEE23B395C77001EE646A1E9F4C820BE_gshared)(__this, ___exception0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::get_Task()
inline Task_1_t9744B6AD55320186C36CC7626916272750E46384 * TaskCompletionSource_1_get_Task_m4F9A726939863963B5671ADBA686E23ADE0C4FB1_inline (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t9744B6AD55320186C36CC7626916272750E46384 * (*) (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Void Firebase.Storage.Future_StorageMetadata/Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mDD610D6E883AC75D9B7E02A7E4A34301F3053C3D (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::SetOnCompletionCallback(Firebase.Storage.Future_StorageMetadata/Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SetOnCompletionCallback_m08B60F35359985371E6ED7B64DA181A71839264A (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * ___userCompletionCallback0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_ThrowIfDisposed_m936E3F3BF89CB09FA692EC9A7CB73E0FB5163403 (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata/SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m3FE20902A15BFB7B5032AADF8A7AD940697145C2 (SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>::.ctor()
inline void Dictionary_2__ctor_mC123202C4E90DFC3FFED4883F6B392A6C49D463E (Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_m2061781CAABA74A552DE840861C37F546E9A6A73 (Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * __this, int32_t ___key0, Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 *, int32_t, Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 *, const RuntimeMethod*))Dictionary_2_set_Item_m71867F9FFBB49DE962FD0036368A0F6E87F30C90_gshared)(__this, ___key0, ___value1, method);
}
// System.IntPtr Firebase.Storage.Future_StorageMetadata::SWIG_OnCompletion(Firebase.Storage.Future_StorageMetadata/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_StorageMetadata_SWIG_OnCompletion_mDD87DE88A0C881E1E8AF79A9A7CFC23F3CB51557 (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SWIG_FreeCompletionData_m3439C5D916D057735ECC4DBCB24D399B8C2EE20E (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, intptr_t ___data0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mC7C2819D0F27E73CB10A73163ACE0D5F504EAC09 (Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * __this, int32_t ___key0, Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 *, int32_t, Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,Firebase.Storage.Future_StorageMetadata/Action>::Remove(!0)
inline bool Dictionary_2_Remove_m313F3480769BF130D3890DCD1F9917B4836D3ECF (Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Storage.Future_StorageMetadata/Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m56C0A774070FF999888E48EAF92EF6B35A7018AB (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Storage.Future_StorageMetadata/SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion_m098C1658357527B5AE4244F1EAAB490E6BA571A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData_m6146F054C4FD5B39CD611246AE07CFA979DAED7A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_GetResult_mD33208FB3398219C70F9EC01FDD26BA77B1FEAB2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Storage.MetadataInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal__ctor_mA2208F1B26842FA7EF968DB3509ABC14CDBB9BF8 (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageMetadata::.ctor(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_mC16F1F6078E4DEB307CEC2E439946EA65F56B88C (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___metadataToCopy0, const RuntimeMethod* method);
// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * MetadataChange_Build_mA2883C2BF178C881FF38FF5FD10DC96FB3DD57A1 (MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_MetadataInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_MetadataInternal_m722E78E62E12770B09320315CBC69C42A241FD24 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.MetadataInternal::CopyCppObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * MetadataInternal_CopyCppObject_mAAD5E2F0807126BFFA92ED2235E65BE4188B13B4 (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * __this, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MetadataInternal_CopyCppObject(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_MetadataInternal_CopyCppObject_m519317BB7883D3EDEC4892B39662FDCDFF22CD50 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>::.ctor()
inline void List_1__ctor_mA92AA708E519485775F1D0E326DFC3425CC99D3D (List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.WeakReference::.ctor(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeakReference__ctor_m7795108201F1C4E5FB7BAA894AE8DA7D6CBCD6F0 (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * __this, RuntimeObject * ___target0, bool ___trackResurrection1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.WeakReference>::Add(!0)
inline void List_1_Add_mB6897D4B3D836B0107EF00A49336597535967178 (List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * __this, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>::Add(!0)
inline void List_1_Add_m2710CA2DB82113D284343181B9F462898A2B0C83 (List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A *, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.WeakReference>::GetEnumerator()
inline Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7  List_1_GetEnumerator_m37E8EAFDF7065CE6B47C8D97497A1A1E9B0EBFE6 (List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7  (*) (List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.WeakReference>::get_Current()
inline WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * Enumerator_get_Current_mF65B301C5D049845A6ECD5B80754E25F76B227EB_inline (Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 * __this, const RuntimeMethod* method)
{
	return ((  WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * (*) (Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Object Firebase.FirebaseApp::WeakReferenceGetTarget(System.WeakReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * FirebaseApp_WeakReferenceGetTarget_m4F195CE3072FD67139BDC76BAB407034828B2C3C (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___weakReference0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.WeakReference>::Remove(!0)
inline bool List_1_Remove_m4D075AF8D24EA6C142A7431D2D4784F882D75B31 (List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * __this, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 *, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.WeakReference>::MoveNext()
inline bool Enumerator_MoveNext_mF3E688796FD192420538BA3193746ABE46E11C18 (Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.WeakReference>::Dispose()
inline void Enumerator_Dispose_m6C512C3F9B96B0A6F943F8F79F065B2539D72F61 (Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1<Firebase.Storage.Internal.ModuleLogger>::Remove(!0)
inline bool List_1_Remove_m11C54F533B343E973F475CFF0E9F862162A04BD3 (List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A *, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *, const RuntimeMethod*))List_1_Remove_m753F7B4281CC4D02C07AE90726F51EF34B588DF7_gshared)(__this, ___item0, method);
}
// Firebase.LogLevel Firebase.Storage.Internal.ModuleLogger::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleLogger_get_Level_m72D5C473200CBD2E5A9A3E7E5E762CCFC61527FF (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, const RuntimeMethod* method);
// System.Void Firebase.LogUtil::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B (int32_t ___logLevel0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.WeakReference>::.ctor()
inline void List_1__ctor_mABCAEBACF4789B353E5F58E05ABB03419BFA12F2 (List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Firebase.Storage.MonitorControllerInternal::OnPaused(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_OnPaused_m6E500BCB6FF2708CD36D916E22CE29966A6B077D (intptr_t ___controllerPtr0, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::OnProgress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_OnProgress_mDB71A8D606636D726A8462DD3C0FE7B66476C288 (intptr_t ___controllerPtr0, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Storage.StorageReferenceInternal::getCPtr(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  StorageReferenceInternal_getCPtr_m19196AA4E38CCA3D0135FA7810763A335B19BCEC (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_new_MonitorControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_new_MonitorControllerInternal_mBE183D623E231AE1DE6D693376B600C0C561B160 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__ctor_m4F9D98104BA0962D294B377AF03495B4A16C9E55 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::Remove(!0)
inline bool Dictionary_2_Remove_mB1A6EC5F52415194B87D88ABD8D605FF62BD9548 (Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * __this, intptr_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 *, intptr_t, const RuntimeMethod*))Dictionary_2_Remove_m5FB51733E8B0DE7758129A38CD12A34D8A3611AA_gshared)(__this, ___key0, method);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_MonitorControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_MonitorControllerInternal_m782082791AF219A56AA57E27D91579E0ABFA4033 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4 (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal/<Create>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ec__AnonStorey0__ctor_m7D8618D1408D36D7693BC26234BB53FBE8373164 (U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::.ctor(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__ctor_m2015E8382F85E76DB9FA75786D69E3E803072CB9 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___storage_reference0, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Storage.MonitorControllerInternal::getCPtr(Firebase.Storage.MonitorControllerInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  MonitorControllerInternal_getCPtr_m8CFBA5FC9CE3DCACBED297C78AB0D31E69BA8423 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___obj0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::set_Item(!0,!1)
inline void Dictionary_2_set_Item_mF007077FE1D3B13F3DA69B4205011879E6AC84AE (Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * __this, intptr_t ___key0, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 *, intptr_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *, const RuntimeMethod*))Dictionary_2_set_Item_mC74BFF830339D88298A79E07C29B93A8143F0A40_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerEventDelegate__ctor_mF9E87B8DAD63604453874B596847AB650E7335A3 (MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::SetPausedEvent(Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_SetPausedEvent_mDF53613DCBE762F739808F13F09B46EB0BF33D14 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___arg00, intptr_t ___event_data1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::SetProgressEvent(Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_SetProgressEvent_m6555A4476F3B9BB68820EE8A049699123BC4DFAB (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___arg00, intptr_t ___event_data1, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal/<OnPaused>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPausedU3Ec__AnonStorey1__ctor_m1EB3277C430263727B8E641ACD952FADCEA1A7CD (U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C * __this, const RuntimeMethod* method);
// System.Void Firebase.ExceptionAggregator::Wrap(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415 (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___action0, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal/<OnProgress>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnProgressU3Ec__AnonStorey2__ctor_mA2BC6F1809F36186D131D8539C1AE524DE79C04D (U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mAD449DBAABB82E3F179221AC5C3F4C4D059331D4 (Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * __this, intptr_t ___key0, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 *, intptr_t, WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **, const RuntimeMethod*))Dictionary_2_TryGetValue_mC002B8F8D7AB9065246821904ABD04E840591852_gshared)(__this, ___key0, ___value1, method);
}
// System.Threading.CancellationTokenRegistration System.Threading.CancellationToken::Register(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CancellationTokenRegistration_t407059AA0E00ABE74F43C533E7D035C4BA451F6A  CancellationToken_Register_m6C186260806A5918D17E0B3A5AF2520D8AFF0787 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * ___callback0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_SetPausedEvent(System.Runtime.InteropServices.HandleRef,Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetPausedEvent_m334C1361E3730C9038EA21049FFC99A3B8BC5BAA (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___jarg21, intptr_t ___jarg32, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_SetProgressEvent(System.Runtime.InteropServices.HandleRef,Firebase.Storage.MonitorControllerInternal/MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetProgressEvent_m0548BCFB6FC5D00530BB621F5BE9D60C8E11F36F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___jarg21, intptr_t ___jarg32, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_Controller_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_Controller_get_m962C17247887896E4807E28F1CF86149D2B125AF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.Storage.ControllerInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInternal__ctor_mE950689CB83D0659B476F653CC604FBA5F648D68 (ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Int64 Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_BytesTransferred_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_BytesTransferred_get_mEBB71DDF98EE231462A9E5D90CF8AD999DC99EB4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Int64 Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_TotalByteCount_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_TotalByteCount_get_m204054FC629671DDF1649BD41E49CE679F9A46EB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.IntPtr,System.WeakReference>::.ctor()
inline void Dictionary_2__ctor_m65F6790350CA62B5AB371DD62E55278707281A2B (Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 *, const RuntimeMethod*))Dictionary_2__ctor_m3FA1B1E4199CC8659D8E27B7876EA63DD22C8A97_gshared)(__this, method);
}
// Firebase.Storage.ControllerInternal Firebase.Storage.MonitorControllerInternal::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * MonitorControllerInternal_get_Controller_m789601B36E247CC221E26783BD82DE9425294C29 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, const RuntimeMethod* method);
// System.Boolean Firebase.Storage.ControllerInternal::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerInternal_Cancel_m09455A3E886138D02F2AB5CBCDB0F59D06837600 (ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageException::GetErrorMessageForCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageException_GetErrorMessageForCode_m235C1EB75E22ED990C2C3469BFB3866F3ECC6F9A (int32_t ___errorCode0, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageException::set_ErrorCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageException_set_ErrorCode_m7F1E6499E95BC4CE92F61396018B18069FD9FD10_inline (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageException::set_HttpResultCode(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageException_set_HttpResultCode_m9E9AEFF8E15CE1DE5F195354BFE11B973D41816B_inline (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception> System.AggregateException::get_InnerExceptions()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * AggregateException_get_InnerExceptions_m2020FC3A2334DDB72FEBFB2BF4CFE088FF83FEFE_inline (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<!0> System.Collections.ObjectModel.ReadOnlyCollection`1<System.Exception>::GetEnumerator()
inline RuntimeObject* ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983 (ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE *, const RuntimeMethod*))ReadOnlyCollection_1_GetEnumerator_m0CE931B041CCAD14563EF1808A3182A88EF2B812_gshared)(__this, method);
}
// System.Int32 Firebase.FirebaseException::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mA7E9CF1AB755AEEE49032E4AC4A7A253C3735F60_inline (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_m949CD363E60929CBCA66B51BCCA4EDF8F0EA4B12 (Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * __this, int32_t ___key0, Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF *, int32_t, Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m527DF4A24FFE4FC2C2B470A538DDA56010F72885_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Tuple`2<System.Int32,System.Net.HttpStatusCode>::get_Item2()
inline int32_t Tuple_2_get_Item2_mAE33F3B65B2728E482F543B8BB3F76506B91B9D2_inline (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *, const RuntimeMethod*))Tuple_2_get_Item2_mEA706559A417C166E2F77D7B23738BB33C21BBA2_gshared_inline)(__this, method);
}
// !0 System.Tuple`2<System.Int32,System.Net.HttpStatusCode>::get_Item1()
inline int32_t Tuple_2_get_Item1_m98F4AF0ED6DFBCD88D8F3531AD46A8FDD67E19E8_inline (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *, const RuntimeMethod*))Tuple_2_get_Item1_m796304B7E4938AA120C7F40CCB7E51ED0360E09F_gshared_inline)(__this, method);
}
// System.Void Firebase.Storage.StorageException::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException__ctor_m7A56D2F34A8578B2D30D5B5D56AB3DAD7AAF1310 (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, int32_t ___errorCode0, int32_t ___httpResultCode1, String_t* ___errorMessage2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>::.ctor()
inline void Dictionary_2__ctor_m0BC474EDF4502EC7B33C88B37D646A9FBBD67B5F (Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF *, const RuntimeMethod*))Dictionary_2__ctor_mF42565DC9AD476065ED33869AD6DC710F775F641_gshared)(__this, method);
}
// System.Void System.Tuple`2<System.Int32,System.Net.HttpStatusCode>::.ctor(!0,!1)
inline void Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595 (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * __this, int32_t ___item10, int32_t ___item21, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *, int32_t, int32_t, const RuntimeMethod*))Tuple_2__ctor_m6AF5710423E0F3B674D09A608C27C76B363089D1_gshared)(__this, ___item10, ___item21, method);
}
// System.Void System.Collections.Generic.Dictionary`2<Firebase.Storage.ErrorInternal,System.Tuple`2<System.Int32,System.Net.HttpStatusCode>>::Add(!0,!1)
inline void Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25 (Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * __this, int32_t ___key0, Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF *, int32_t, Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *, const RuntimeMethod*))Dictionary_2_Add_mEA7DC2B06A480A5EC7DE49B6E83C2D121D1962EF_gshared)(__this, ___key0, ___value1, method);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m36C57AF2D059EA55E5FFBA6831E7D313BD218C5E (SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mD587E21387B1095963CEDEBCC76E95AF6286A2B7 (SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageMetadata::set_Internal(Firebase.Storage.MetadataInternal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageMetadata_set_Internal_m04FC4FD97C2FA2B7AE16654FB78793628DDE9FD6_inline (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___value0, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::get_Internal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * StorageMetadata_get_Internal_m2EE37A1FF1ED7F5295F124069C553F98B03A1497_inline (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.MetadataInternal::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * MetadataInternal_Copy_mDF42819C422E2D122738158D606A8BD973010E0C (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * __this, const RuntimeMethod* method);
// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::Build(Firebase.Storage.MetadataChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * MetadataChange_Build_m5FD5867B6CB7C2FF6FE9EF86EC7F582FE4A12F2F (MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * ___metadataChange0, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::GetMetadataInternal(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * StorageMetadata_GetMetadataInternal_mDD8ADEE71DC422F54A290A4DCB39640F48DB2DB2 (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___metadata0, const RuntimeMethod* method);
// System.Void System.DateTime::.ctor(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.DateTimeKind)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA (DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * __this, int32_t ___year0, int32_t ___month1, int32_t ___day2, int32_t ___hour3, int32_t ___minute4, int32_t ___second5, int32_t ___kind6, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference::set_Internal(Firebase.Storage.StorageReferenceInternal)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageReference_set_Internal_mCE9F92CBF066C6CFB870B0C4BB5B523BF5014CE6_inline (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference::set_Logger(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageReference_set_Logger_mA4934385891F36A75E7CF86DF5CC78568A42BCA1_inline (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___value0, const RuntimeMethod* method);
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReference::get_Internal()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * StorageReference_get_Internal_m337277BB1424AB2DB192EDC3B69EE9A80B2F36F1_inline (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageReferenceInternal::get_FullPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReferenceInternal_get_FullPath_m4AF95AC247E1CF014CB80235594DC0862C9EFB47 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageReferenceInternal::get_Bucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReferenceInternal_get_Bucket_mBD757EA3852F9E8D7B829C208015CA5A5C747693 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method);
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReferenceInternal::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * StorageReferenceInternal_Child_mB213D92C1A792396860518C9BE34B3543AD2DC10 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, String_t* ___path0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>::.ctor()
inline void TaskCompletionSource_1__ctor_mF4FC8FACCC46FBC588CA6931AABC72ED28EF2213 (TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference::PutBytesUsingCompletionSourceAsync(System.Byte[],Firebase.Storage.MetadataChange,System.IProgress`1<Firebase.Storage.UploadState>,System.Threading.CancellationToken,System.Uri,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * StorageReference_PutBytesUsingCompletionSourceAsync_m4B4AB4E9D2CE12533FE97D9B423E348C3E47A2A0 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * ___customMetadata1, RuntimeObject* ___progressHandler2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken3, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___previousSessionUri4, TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * ___completionSource5, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0__ctor_mF244687FE14CAF5EDA5634EFE238AB0696E18EB5 (U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * __this, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReferenceInternal::PutBytesUsingMonitorControllerAsync(System.IntPtr,System.UInt32,Firebase.Storage.MetadataInternal,Firebase.Storage.MonitorControllerInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9744B6AD55320186C36CC7626916272750E46384 * StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m34427017752A4B418BDC7C61F20DEA8A413056AB (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, intptr_t ___buffer0, uint32_t ___buffer_size1, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___metadata2, MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___monitor_controller3, const RuntimeMethod* method);
// System.Void Firebase.Storage.MonitorControllerInternal::RegisterCancellationToken(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_RegisterCancellationToken_mC93001C569376B80E9283B834218877AFBD3424D (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method);
// System.Void System.Func`2<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>,System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m79834B32DC11FA6ACB5E96ECF86ED900DDCF0CC6 (Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>::ContinueWith<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>(System.Func`2<System.Threading.Tasks.Task`1<!0>,!!0>)
inline Task_1_t25BD7331494EE1D3795B89B7038987A39373E015 * Task_1_ContinueWith_TisTask_1_t9744B6AD55320186C36CC7626916272750E46384_mD7A2AA7BA6EE2952C6358BC73D2DE94EE2C081FE (Task_1_t9744B6AD55320186C36CC7626916272750E46384 * __this, Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C * ___continuationFunction0, const RuntimeMethod* method)
{
	return ((  Task_1_t25BD7331494EE1D3795B89B7038987A39373E015 * (*) (Task_1_t9744B6AD55320186C36CC7626916272750E46384 *, Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C *, const RuntimeMethod*))Task_1_ContinueWith_TisRuntimeObject_m9333E52269EFEEE109F8A285E91ABCE0D0C3DF95_gshared)(__this, ___continuationFunction0, method);
}
// System.Threading.Tasks.Task`1<!!0> System.Threading.Tasks.TaskExtensions::Unwrap<Firebase.Storage.MetadataInternal>(System.Threading.Tasks.Task`1<System.Threading.Tasks.Task`1<!!0>>)
inline Task_1_t9744B6AD55320186C36CC7626916272750E46384 * TaskExtensions_Unwrap_TisMetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_m6928684B9644695798212D113BE399471A512B74 (Task_1_t25BD7331494EE1D3795B89B7038987A39373E015 * ___task0, const RuntimeMethod* method)
{
	return ((  Task_1_t9744B6AD55320186C36CC7626916272750E46384 * (*) (Task_1_t25BD7331494EE1D3795B89B7038987A39373E015 *, const RuntimeMethod*))TaskExtensions_Unwrap_TisRuntimeObject_m145F68D4BF6EEBFA795C0DD8ED28A235796ADD14_gshared)(___task0, method);
}
// System.Void Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1__ctor_mC9531CEEA3138F85A30D9BB5916BC9A7A202B22B (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.UploadState::.ctor(Firebase.Storage.StorageReference,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadState__ctor_m4C2E77580D8E2AA6660D91FF3739D93BB999B8E0 (UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___reference0, int64_t ___totalByteCount1, const RuntimeMethod* method);
// Firebase.Storage.Internal.TransferState Firebase.Storage.UploadState::get_State()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * UploadState_get_State_m41DBB6A43534377466296E74CFC403EE6F269DAF_inline (UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>::.ctor(Firebase.Storage.StorageReference,System.IProgress`1<T>,T,Firebase.Storage.Internal.TransferState)
inline void TransferStateUpdater_1__ctor_m3F575E78F6B369C6E80E27FA4A27F7BC7457681E (TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___storageReference0, RuntimeObject* ___progressHandler1, UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * ___progressState2, TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * ___progressStateBackingStore3, const RuntimeMethod* method)
{
	((  void (*) (TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 *, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F *, RuntimeObject*, UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C *, TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 *, const RuntimeMethod*))TransferStateUpdater_1__ctor_m147F1FEE25D9F7923612DF75C81111F382895349_gshared)(__this, ___storageReference0, ___progressHandler1, ___progressState2, ___progressStateBackingStore3, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object,System.Runtime.InteropServices.GCHandleType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC (RuntimeObject * ___value0, int32_t ___type1, const RuntimeMethod* method);
// System.IntPtr System.Runtime.InteropServices.GCHandle::AddrOfPinnedObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::BuildMetadataInternal(Firebase.Storage.MetadataChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * StorageMetadata_BuildMetadataInternal_m8A228D5950AC9395B506DE2E690433068F1C2D85 (MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * ___metadataChange0, const RuntimeMethod* method);
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>::get_MonitorController()
inline MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * TransferStateUpdater_1_get_MonitorController_m350102272D1EA06E92156E09D9B3DE94803528CE_inline (TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 * __this, const RuntimeMethod* method)
{
	return ((  MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * (*) (TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 *, const RuntimeMethod*))TransferStateUpdater_1_get_MonitorController_m6F7F53BB71905E8F49A9B2E85AD0F21A8B241C80_gshared_inline)(__this, method);
}
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReference::PutBytesUsingMonitorControllerAsync(System.IntPtr,System.UInt32,Firebase.Storage.MetadataInternal,Firebase.Storage.MonitorControllerInternal,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9744B6AD55320186C36CC7626916272750E46384 * StorageReference_PutBytesUsingMonitorControllerAsync_mA0AE399A738E0B9AB5446A3129647C169C495A63 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, intptr_t ___buffer0, uint32_t ___bufferSize1, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___metadata2, MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___monitorController3, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken4, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m5537F6CA859251E8D7793A74B4D15A6FA29FD319 (Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m75E3A577C38E74D9536362ED875D503E536E3204 (Task_1_t9744B6AD55320186C36CC7626916272750E46384 * __this, Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t9744B6AD55320186C36CC7626916272750E46384 *, Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>::get_Task()
inline Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * TaskCompletionSource_1_get_Task_m4DA775DA9894E49F999A410C2F253966D03A937F_inline (TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * __this, const RuntimeMethod* method)
{
	return ((  Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * (*) (TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.Void Firebase.Storage.StorageReference/<GetDownloadUrlAsync>c__AnonStoreyA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA__ctor_m39FA371756130BF1878B185EA04A7533BDCFBCC0 (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<System.Uri>::.ctor()
inline void TaskCompletionSource_1__ctor_m9E13EEB0EA2C4702B86E160FB8B4725A689E39BD (TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B *, const RuntimeMethod*))TaskCompletionSource_1__ctor_m93D38CA57B11BA7F5B3E7ED1E573E2F0249E44BB_gshared)(__this, method);
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Storage.StorageReferenceInternal::GetDownloadUrlAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * StorageReferenceInternal_GetDownloadUrlAsync_mE2E99BFDEAB4FCE8A4514051E455C71468BB167C (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Threading.Tasks.Task`1<System.String>>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_mBB7F7BEA488977932D354CC486E7EECC39F6F65E (Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Threading.Tasks.Task System.Threading.Tasks.Task`1<System.String>::ContinueWith(System.Action`1<System.Threading.Tasks.Task`1<!0>>)
inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_1_ContinueWith_m3305B87C01A4BC1D29F7C00B61EF0A22AEC7FB22 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882 * ___continuationAction0, const RuntimeMethod* method)
{
	return ((  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882 *, const RuntimeMethod*))Task_1_ContinueWith_mD0894365AE360E310C6E4D365ADBEEDCE18D6BF7_gshared)(__this, ___continuationAction0, method);
}
// System.Threading.Tasks.Task`1<!0> System.Threading.Tasks.TaskCompletionSource`1<System.Uri>::get_Task()
inline Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD * TaskCompletionSource_1_get_Task_mC4F854995F4E34D06EFF8645A2C7FE63A7E36E17_inline (TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B * __this, const RuntimeMethod* method)
{
	return ((  Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD * (*) (TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B *, const RuntimeMethod*))TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline)(__this, method);
}
// System.String Firebase.Storage.StorageReference::get_Bucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_get_Bucket_mCF992377719B4F8DB104F27F962E3803E109B22E (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageReference::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_get_Path_m1FF88166D520470BF00DAF4F7450F3CDF617684F (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method);
// System.Boolean System.String::Equals(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D (String_t* __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_StorageReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_StorageReferenceInternal_m34B41A840BEC4DE56D82A806D284D87663F62580 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Child__SWIG_0_m5AEFA0464B9CF2F0C32090C645E051784E46453C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_GetDownloadUrl(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_GetDownloadUrl_m5227B054D5C42B4F1CFFF34E88D9C270F9D8D74F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Void Firebase.FutureString::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FutureString__ctor_mEE94FE29EDA6856652FFBFE07AF06BD33B5BBC82 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<System.String> Firebase.FutureString::GetTask(Firebase.FutureString)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * FutureString_GetTask_m7CF681D446F480F4930D6B4A406CF9CE12B4A761 (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * ___fu0, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_Bucket_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Bucket_get_m03EE518779776CF4B92903C053D5018BEFC8068A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_FullPath_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_FullPath_get_m872CD8FC5D597DD7F0A81C7F6D8EDA81192A46C5 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Boolean Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_IsValid_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_IsValid_get_m1F8009623152EE6DC06C3A00BAA53B9E82CBF3FE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method);
// System.Runtime.InteropServices.HandleRef Firebase.Storage.MetadataInternal::getCPtr(Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  MetadataInternal_getCPtr_m90DB4CA8CE4A6E66F7423F9AF1C5DC823C2885C6 (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___obj0, const RuntimeMethod* method);
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.UInt32,System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController_m1E932A7026086F9250DCA94DB425BF42477C2F88 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, uint32_t ___jarg32, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg43, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg54, const RuntimeMethod* method);
// System.Void Firebase.Storage.Future_StorageMetadata::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata__ctor_m7BAA8F7AF59C436996C2C282C9D8307D8104F1FA (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method);
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.Future_StorageMetadata::GetTask(Firebase.Storage.Future_StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9744B6AD55320186C36CC7626916272750E46384 * Future_StorageMetadata_GetTask_mEC24F7196CE27D81111FEB9BEC03C9EE7C41C32F (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * ___fu0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferState::set_Reference(Firebase.Storage.StorageReference)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransferState_set_Reference_m5CE8FB86AA8B620852C444B7E6DFB76739DEF0D1_inline (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferState::.ctor(Firebase.Storage.StorageReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState__ctor_mDF9590F2DB008B90AD8548B6D30667A647A2370C (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___reference0, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferState::set_TotalByteCount(System.Int64)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransferState_set_TotalByteCount_m3D270DEDE3CE7421D13A0092F48D52163B9B4441_inline (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, int64_t ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.UploadState::set_State(Firebase.Storage.Internal.TransferState)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UploadState_set_State_m0BEC312E906D39DB1588D02B13C3250FDE3F7544_inline (UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * __this, TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * ___value0, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::SetCanceled()
inline void TaskCompletionSource_1_SetCanceled_mDEF5F6D8623C5992819FBBAC0377F9974DAA052B (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * __this, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 *, const RuntimeMethod*))TaskCompletionSource_1_SetCanceled_m297148FA6868B7BC0B56FB1FD9C237C349AA57AA_gshared)(__this, method);
}
// System.Int32 Firebase.FutureBase::error()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// System.String Firebase.FutureBase::error_message()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774 (FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 * __this, const RuntimeMethod* method);
// Firebase.Storage.MetadataInternal Firebase.Storage.Future_StorageMetadata::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * Future_StorageMetadata_GetResult_m00904CA09846B2728A440B3FBBC84B91975BA3AB (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, const RuntimeMethod* method);
// System.Void System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.MetadataInternal>::SetResult(!0)
inline void TaskCompletionSource_1_SetResult_mF150EA4C2F543C3458DC99C93D2270543736347F (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * __this, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___result0, const RuntimeMethod* method)
{
	((  void (*) (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 *, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 *, const RuntimeMethod*))TaskCompletionSource_1_SetResult_m114264415DE45978C357F9A2A7A2E87D84B54443_gshared)(__this, ___result0, method);
}
// System.Void System.EventHandler`1<System.EventArgs>::Invoke(System.Object,!0)
inline void EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___e1, const RuntimeMethod* method)
{
	((  void (*) (EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *, RuntimeObject *, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA *, const RuntimeMethod*))EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_gshared)(__this, ___sender0, ___e1, method);
}
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.MonitorControllerInternal::ProxyFromCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * MonitorControllerInternal_ProxyFromCPtr_m2A8A8FC568FC32B99E2C4EA34B36BA9746DD7BFF (intptr_t ___controllerPtr0, const RuntimeMethod* method);
// System.Void System.Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mE4A57C08BA674F90CB20212239445EE5861BCC2F (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mB82507CD2AB9F2F81984DC2EA437525F0E08A18E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m1F075F08BEEDD2FEE94538574AED1E286BA3BA85 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD7C5AB6A5F32F652353A15035EC9D6D2795FF8D7 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m01055CF5321D305418D2965A985D6673C0840C3E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m4251D47C148E02697222FBCB3227E13905556FBD (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mA195C481473D8F7DD7A70B92FE875D6E6377C94E (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mBBFFC1B9A5704370E37374A37C255A185D9AD412 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mD3BC4134504E186EFFC773B90C96F01DE0062174 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m44402DD9964628721176A7177635DFF76A551917 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m86EDF8DDD6B0B2A082E98B0B4A558EF79A98ECC8 (String_t* ___message0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m9E866960F2D8359572D1C86250FAD061750E9B47 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m66ADF14C992180DD55E0C4B7798D12610E887403 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m18DDFA77768CBA9275826A89B5DE593DDC446CF8 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m5BC4EB29D086A1677C72AA75D0A5F56552FF0BB5 (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_StorageInternal(Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_StorageInternal_m54110DC64E033F8561BFE87596C6697C45FEDC61 (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___applicationDelegate0, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___arithmeticDelegate1, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___divideByZeroDelegate2, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___indexOutOfRangeDelegate3, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___invalidCastDelegate4, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___invalidOperationDelegate5, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___ioDelegate6, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___nullReferenceDelegate7, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___outOfMemoryDelegate8, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___overflowDelegate9, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___systemExceptionDelegate10, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_StorageInternal(Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate,Firebase.Storage.StorageInternalPINVOKE/SWIGExceptionHelper/ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_StorageInternal_m38988C29FCB80D85021040F29CBF696828D19E67 (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * ___argumentDelegate0, ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method);
// System.Exception Firebase.Storage.StorageInternalPINVOKE/SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1 (const RuntimeMethod* method);
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861 (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4 (Exception_t * ___e0, const RuntimeMethod* method);
// System.Void System.ArithmeticException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17 (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.DivideByZeroException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918 (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidCastException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.IO.IOException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7 (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.NullReferenceException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9 (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OutOfMemoryException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0 (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.OverflowException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14 (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.SystemException::.ctor(System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94 (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * __this, String_t* ___message0, Exception_t * ___innerException1, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String,System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80 (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, Exception_t * ___innerException2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005 (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method);
// System.String Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mA4BAF503E92C6B62A953BB553C435E9F64506F20 (String_t* ___cString0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m2FA36D3BA28ED9A7C0067A0511549BAE45A4AC26 (SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper::SWIGRegisterStringCallback_StorageInternal(Firebase.Storage.StorageInternalPINVOKE/SWIGStringHelper/SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_StorageInternal_mA592756B33DF2251948D18CA96B59A4BBD4048E5 (SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * ___stringDelegate0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/<GetDownloadUrlAsync>c__AnonStoreyA/<GetDownloadUrlAsync>c__AnonStoreyB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB__ctor_m25C1C46062F0AE18971A78F9DF29DEA4B3B96069 (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Uri>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m31A959776B78F9A8F3D8A429A797A09895E6071B (Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// O Firebase.Storage.StorageReference::CompleteTask<System.String,System.Uri>(System.Threading.Tasks.Task`1<I>,System.Threading.Tasks.TaskCompletionSource`1<O>,System.Func`1<O>,System.String,System.Boolean)
inline Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * StorageReference_CompleteTask_TisString_t_TisUri_t4A915E1CC15B2C650F478099AD448E9466CBF612_mF243928C92BBEEFC2E723270865A46576D71A33F (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___task0, TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B * ___completionSource1, Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D * ___getResult2, String_t* ___operationDescription3, bool ___setCompletionSourceResult4, const RuntimeMethod* method)
{
	return ((  Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * (*) (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F *, Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B *, Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D *, String_t*, bool, const RuntimeMethod*))StorageReference_CompleteTask_TisRuntimeObject_TisRuntimeObject_mBC2F55D00C7FAE33F4EF54BC2FA2613910D31D5F_gshared)(__this, ___task0, ___completionSource1, ___getResult2, ___operationDescription3, ___setCompletionSourceResult4, method);
}
// System.Void Firebase.Storage.StorageReference/<PutBytesUsingCompletionSourceAsync>c__AnonStorey1/<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2__ctor_m01DDF1171FF626C47FA2FAA661402B693E782665 (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E * __this, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025 (GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<Firebase.Storage.StorageMetadata>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m5C72D9FA73D9638CD3B9AB6A6E073D15BACF9416 (Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// O Firebase.Storage.StorageReference::CompleteTask<Firebase.Storage.MetadataInternal,Firebase.Storage.StorageMetadata>(System.Threading.Tasks.Task`1<I>,System.Threading.Tasks.TaskCompletionSource`1<O>,System.Func`1<O>,System.String,System.Boolean)
inline StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * StorageReference_CompleteTask_TisMetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_TisStorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_m3F52D66436B38764F6958A1A4B46B436895598B6 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, Task_1_t9744B6AD55320186C36CC7626916272750E46384 * ___task0, TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * ___completionSource1, Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294 * ___getResult2, String_t* ___operationDescription3, bool ___setCompletionSourceResult4, const RuntimeMethod* method)
{
	return ((  StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * (*) (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F *, Task_1_t9744B6AD55320186C36CC7626916272750E46384 *, TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 *, Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294 *, String_t*, bool, const RuntimeMethod*))StorageReference_CompleteTask_TisRuntimeObject_TisRuntimeObject_mBC2F55D00C7FAE33F4EF54BC2FA2613910D31D5F_gshared)(__this, ___task0, ___completionSource1, ___getResult2, ___operationDescription3, ___setCompletionSourceResult4, method);
}
// System.Boolean System.Threading.Tasks.Task::get_IsCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsFaulted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Boolean System.Threading.Tasks.Task::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_get_IsCanceled_m4D3446507B67CD13F0A7A50D0299105E2817FC66 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/TaskCompletionStatus::set_IsSuccessful(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsSuccessful_mAB0F0455B5AF7AE5003981889CCF77387A42D194_inline (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, bool ___value0, const RuntimeMethod* method);
// System.AggregateException System.Threading.Tasks.Task::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81 (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * __this, const RuntimeMethod* method);
// Firebase.Storage.StorageException Firebase.Storage.StorageException::CreateFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * StorageException_CreateFromException_m324DF221BCB586CFA8E1229F6F36D7DBFD373D95 (Exception_t * ___exception0, const RuntimeMethod* method);
// System.Int32 Firebase.Storage.StorageException::get_ErrorCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StorageException_get_ErrorCode_m559860A50ACD01BEFAE8B80950624689DE744368_inline (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/TaskCompletionStatus::set_IsCanceled(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsCanceled_mC5394D71988284F08D583677AA39466AE2004501_inline (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Firebase.Storage.StorageReference/TaskCompletionStatus::set_Exception(System.Exception)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_Exception_m657523E1C7197F19AAF71F1F80A0C3D834A82D66_inline (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, Exception_t * ___value0, const RuntimeMethod* method);
// System.Exception Firebase.Storage.StorageReference/TaskCompletionStatus::get_Exception()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * TaskCompletionStatus_get_Exception_m71957E945B0D7BC6CCDDF9915D724EA1F6CF5086_inline (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, const RuntimeMethod* method);
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * __this, String_t* ___message0, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<System.String>::get_Result()
inline String_t* Task_1_get_Result_m49B9A0DA69ECD33F7F946948364A63C1EE1EEBA0 (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.Uri Firebase.Storage.FirebaseStorage::ConstructFormattedUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * FirebaseStorage_ConstructFormattedUri_m30866AD2A7AC8B9764B12728451E0EBD7017FF3C (String_t* ___formattedUrl0, const RuntimeMethod* method);
// !0 System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>::get_Result()
inline MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * Task_1_get_Result_m9A58CC099EC7938F5CE074298FF7480564DCB86E (Task_1_t9744B6AD55320186C36CC7626916272750E46384 * __this, const RuntimeMethod* method)
{
	return ((  MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * (*) (Task_1_t9744B6AD55320186C36CC7626916272750E46384 *, const RuntimeMethod*))Task_1_get_Result_m5A339E4CA9D86AC691E5754F29A452802A8DE548_gshared)(__this, method);
}
// System.Void Firebase.Storage.StorageMetadata::.ctor(Firebase.Storage.StorageReference,Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_mFBED4D3E575AE070D6494EF81F878F53D938C824 (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___reference0, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___metadata1, const RuntimeMethod* method);
// System.Void Firebase.Storage.Internal.TransferStateUpdater`1<Firebase.Storage.UploadState>::SetMetadata(Firebase.Storage.StorageMetadata)
inline void TransferStateUpdater_1_SetMetadata_m1BFF84F93583D678D9BA14C9520336DCBA3FE8DA (TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 * __this, StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___metadata0, const RuntimeMethod* method)
{
	((  void (*) (TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 *, StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 *, const RuntimeMethod*))TransferStateUpdater_1_SetMetadata_m3C10A2BE916E922934F3C4A3FF1BBB5AAD19300D_gshared)(__this, ___metadata0, method);
}
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion(void*, Il2CppMethodPointer, int32_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData(void*, intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_Future_StorageMetadata_GetResult(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_Future_StorageMetadata(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_ControllerInternal(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Storage_ControllerInternal_Cancel(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_MetadataInternal(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_MetadataInternal_CopyCppObject(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_StorageReferenceInternal(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_Child__SWIG_0(void*, char*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_GetDownloadUrl(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_Bucket_get(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_FullPath_get(void*);
IL2CPP_EXTERN_C int32_t DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_IsValid_get(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController(void*, intptr_t, uint32_t, void*, void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_new_MonitorControllerInternal(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_delete_MonitorControllerInternal(void*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_SetPausedEvent(void*, Il2CppMethodPointer, intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_SetProgressEvent(void*, Il2CppMethodPointer, intptr_t);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_Controller_get(void*);
IL2CPP_EXTERN_C int64_t DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_BytesTransferred_get(void*);
IL2CPP_EXTERN_C int64_t DEFAULT_CALL Firebase_Storage_MonitorControllerInternal_TotalByteCount_get(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0(void*, char*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal(void*, char*, int32_t*);
IL2CPP_EXTERN_C void DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_App_get(void*);
IL2CPP_EXTERN_C char* DEFAULT_CALL Firebase_Storage_FirebaseStorageInternal_Url_get(void*);
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL Firebase_Storage_Future_StorageMetadata_SWIGUpcast(intptr_t);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacks_StorageInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterExceptionCallbacksArgument_StorageInternal(Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);
IL2CPP_EXTERN_C void DEFAULT_CALL SWIGRegisterStringCallback_StorageInternal(Il2CppMethodPointer);
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
// System.Void Firebase.Storage.ControllerInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInternal__ctor_mE950689CB83D0659B476F653CC604FBA5F648D68 (ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Storage.ControllerInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInternal_Finalize_m919D89E9DBE46901F0D3BED4380A3C095B02BF78 (ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * __this, const RuntimeMethod* method)
{
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.ControllerInternal::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Storage.ControllerInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ControllerInternal_Dispose_mF380B45A9036A94602E19456808941D88E565D41 (ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInternal_Dispose_mF380B45A9036A94602E19456808941D88E565D41_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_ControllerInternal_mD1FC9B42FB2BC6F0B8E9C3D4B7224C1B599F1337(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// System.Boolean Firebase.Storage.ControllerInternal::Cancel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ControllerInternal_Cancel_m09455A3E886138D02F2AB5CBCDB0F59D06837600 (ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ControllerInternal_Cancel_m09455A3E886138D02F2AB5CBCDB0F59D06837600_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		bool L_1 = StorageInternalPINVOKE_Firebase_Storage_ControllerInternal_Cancel_m66B2A2427E1607BC89EA7561B71E290FC6AEA2EE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ControllerInternal_Cancel_m09455A3E886138D02F2AB5CBCDB0F59D06837600_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
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
// System.Void Firebase.Storage.FirebaseStorage::.ctor(Firebase.Storage.FirebaseStorageInternal,Firebase.FirebaseApp)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage__ctor_m3FC01B84D3001B1846FAD4799E4358FFFDC3F297 (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * ___storage0, FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage__ctor_m3FC01B84D3001B1846FAD4799E4358FFFDC3F297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app1;
		__this->set_firebaseApp_2(L_0);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_1 = __this->get_firebaseApp_2();
		EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_2 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
		EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_2, __this, (intptr_t)((intptr_t)FirebaseStorage_OnAppDisposed_m8FFADE1C2D2DDAD4E0AEA367356BF42FBD64E539_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_1);
		FirebaseApp_add_AppDisposed_m72EFA96351AC82CC8DF3A42ABEFB313B0D9E7D79(L_1, L_2, /*hidden argument*/NULL);
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_3 = ___storage0;
		__this->set_storageInternal_1(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_4 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_logger_4();
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_5 = (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *)il2cpp_codegen_object_new(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
		ModuleLogger__ctor_mE8D814C24F604C09F5D9A651BDB56DEF9ABB556E(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_6 = V_0;
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_7 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_logger_4();
		NullCheck(L_7);
		String_t* L_8 = ModuleLogger_get_Tag_m21D179CE4DF7AF1143E8ED00D4A370059D7C162A(L_7, /*hidden argument*/NULL);
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_9 = __this->get_storageInternal_1();
		NullCheck(L_9);
		String_t* L_10 = FirebaseStorageInternal_get_Url_m425C6396457782FF410100806B804B820E891085(L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral2735032CF824904F31866A3DDD0204F0B7FE22CD, L_8, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		ModuleLogger_set_Tag_m7ECACA8B7C965C422E171F9AD64A3CF377641A13_inline(L_6, L_11, /*hidden argument*/NULL);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_12 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		int32_t L_13 = FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF(/*hidden argument*/NULL);
		NullCheck(L_12);
		ModuleLogger_set_Level_m5BA3815BE5A9457A780F508962931E2DAC4AEBC6_inline(L_12, L_13, /*hidden argument*/NULL);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_14 = V_0;
		FirebaseStorage_set_Logger_m1241ABB29DEFBB0EC0F19263C3EFEB7221EFDF72_inline(__this, L_14, /*hidden argument*/NULL);
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_15 = __this->get_storageInternal_1();
		NullCheck(L_15);
		FirebaseStorageInternal_SetSwigCMemOwn_m92F09F2A153ED27C2745E3B85AB045B3D37A3102_inline(L_15, (bool)1, /*hidden argument*/NULL);
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_16 = __this->get_storageInternal_1();
		NullCheck(L_16);
		String_t* L_17 = FirebaseStorageInternal_get_InstanceKey_mE87BB7C66F3082EB3380EA1B48DAA97809F8C987(L_16, /*hidden argument*/NULL);
		__this->set_instanceKey_3(L_17);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_18 = FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline(__this, /*hidden argument*/NULL);
		String_t* L_19 = __this->get_instanceKey_3();
		String_t* L_20 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralB703A2BE7C7C622C41AA27448E688623872F3623, L_19, /*hidden argument*/NULL);
		NullCheck(L_18);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_18, 1, L_20, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_Finalize_m0E6F941982188050BD9B531AEECF248660F8F79A (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_Finalize_m0E6F941982188050BD9B531AEECF248660F8F79A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
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
		FirebaseStorage_Dispose_m49855FDA95AC895C380A8FF8C156F629B484DA4D(__this, /*hidden argument*/NULL);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_0 = FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline(__this, /*hidden argument*/NULL);
		String_t* L_1 = __this->get_instanceKey_3();
		String_t* L_2 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral7624E265BB383FB22ED234A2DC36A755B34594EC, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_0, 1, L_2, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x2E, FINALLY_0027);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0027;
	}

FINALLY_0027:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(39)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(39)
	{
		IL2CPP_JUMP_TBL(0x2E, IL_002e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002e:
	{
		return;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_Dispose_m49855FDA95AC895C380A8FF8C156F629B484DA4D (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_Dispose_m49855FDA95AC895C380A8FF8C156F629B484DA4D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * L_0 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_0012:
	try
	{ // begin try (depth: 1)
		{
			FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_2 = __this->get_storageInternal_1();
			if (!L_2)
			{
				goto IL_0079;
			}
		}

IL_001d:
		{
			FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_3 = __this->get_storageInternal_1();
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4 = FirebaseStorageInternal_getCPtr_mD5B445F5C0A11BFA7670F93A931064FDD48668B1(L_3, /*hidden argument*/NULL);
			V_1 = L_4;
			intptr_t L_5 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_1), /*hidden argument*/NULL);
			bool L_6 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_5, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_6)
			{
				goto IL_0079;
			}
		}

IL_003f:
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_7 = __this->get_firebaseApp_2();
			EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B * L_8 = (EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B *)il2cpp_codegen_object_new(EventHandler_t084491E53EC706ACA0A15CA17488C075B4ECA44B_il2cpp_TypeInfo_var);
			EventHandler__ctor_m9D4CC7B806AFF3B790E5E1A3B891F6775A146B78(L_8, __this, (intptr_t)((intptr_t)FirebaseStorage_OnAppDisposed_m8FFADE1C2D2DDAD4E0AEA367356BF42FBD64E539_RuntimeMethod_var), /*hidden argument*/NULL);
			NullCheck(L_7);
			FirebaseApp_remove_AppDisposed_m1E390E9068C2247AFF44122B61195EC3627F7812(L_7, L_8, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
			Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * L_9 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
			String_t* L_10 = __this->get_instanceKey_3();
			NullCheck(L_9);
			Dictionary_2_Remove_mC3B3EE0C566D6AB2793E53A4FEC43EA58786ECCA(L_9, L_10, /*hidden argument*/Dictionary_2_Remove_mC3B3EE0C566D6AB2793E53A4FEC43EA58786ECCA_RuntimeMethod_var);
			FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_11 = __this->get_storageInternal_1();
			NullCheck(L_11);
			VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.FirebaseStorageInternal::Dispose() */, L_11);
			__this->set_storageInternal_1((FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 *)NULL);
		}

IL_0079:
		{
			IL2CPP_LEAVE(0x85, FINALLY_007e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_007e;
	}

FINALLY_007e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_12 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_12, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(126)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(126)
	{
		IL2CPP_JUMP_TBL(0x85, IL_0085)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0085:
	{
		return;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::OnAppDisposed(System.Object,System.EventArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_OnAppDisposed_m8FFADE1C2D2DDAD4E0AEA367356BF42FBD64E539 (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, RuntimeObject * ___sender0, EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * ___eventArgs1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_OnAppDisposed_m8FFADE1C2D2DDAD4E0AEA367356BF42FBD64E539_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseLogger_tB696AEC3ADE56D7BCDB5DB37DEBF039C4BA3BB2A_il2cpp_TypeInfo_var);
		FirebaseLogger_LogMessage_mA65FB8012E13AA044A6FF15E9792D2755AF84B86(3, _stringLiteralE5ACD853F8874D5E90622ED276C4C96160520552, /*hidden argument*/NULL);
		FirebaseStorage_Dispose_m49855FDA95AC895C380A8FF8C156F629B484DA4D(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::ThrowIfNull()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_ThrowIfNull_m392D1788F987DB111E04ED22499C897524442F1E (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_ThrowIfNull_m392D1788F987DB111E04ED22499C897524442F1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_0 = __this->get_storageInternal_1();
		if (!L_0)
		{
			goto IL_002d;
		}
	}
	{
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_1 = __this->get_storageInternal_1();
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2 = FirebaseStorageInternal_getCPtr_mD5B445F5C0A11BFA7670F93A931064FDD48668B1(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_0), /*hidden argument*/NULL);
		bool L_4 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0033;
		}
	}

IL_002d:
	{
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_5 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_m669954F23A336EC873149F0ED0D291F2B509017A(L_5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, FirebaseStorage_ThrowIfNull_m392D1788F987DB111E04ED22499C897524442F1E_RuntimeMethod_var);
	}

IL_0033:
	{
		return;
	}
}
// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.FirebaseStorage::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735 (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, const RuntimeMethod* method)
{
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_0 = __this->get_U3CLoggerU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::set_Logger(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage_set_Logger_m1241ABB29DEFBB0EC0F19263C3EFEB7221EFDF72 (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___value0, const RuntimeMethod* method)
{
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_0 = ___value0;
		__this->set_U3CLoggerU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Uri Firebase.Storage.FirebaseStorage::ConstructFormattedUri(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * FirebaseStorage_ConstructFormattedUri_m30866AD2A7AC8B9764B12728451E0EBD7017FF3C (String_t* ___formattedUrl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_ConstructFormattedUri_m30866AD2A7AC8B9764B12728451E0EBD7017FF3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * V_3 = NULL;
	int32_t V_4 = 0;
	String_t* V_5 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 7);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = ___formattedUrl0;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_1 = (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)il2cpp_codegen_object_new(Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_il2cpp_TypeInfo_var);
		Uri__ctor_m7724F43B1525624FFF97A774B6B909B075714D5C(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = Uri_get_PathAndQuery_m0FFF28F15DF953C5866C2A0DEEA2034ECE6A0F35(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		FieldInfo_t * L_4 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_pathFieldInfo_6();
		if (L_4)
		{
			goto IL_005f;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_5 = { reinterpret_cast<intptr_t> (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_6 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		FieldInfo_t * L_7 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_6, _stringLiteralFE79FF373808574898C82AC1320C55C1182FB75A, ((int32_t)36));
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->set_pathFieldInfo_6(L_7);
		FieldInfo_t * L_8 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_pathFieldInfo_6();
		if (L_8)
		{
			goto IL_005f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_9 = FirebaseStorage_get_DefaultInstance_m57584267322C66F070C5E2F58173A698754593E6(/*hidden argument*/NULL);
		NullCheck(L_9);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_10 = FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline(L_9, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_11 = V_0;
		NullCheck(L_11);
		String_t* L_12 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_11);
		String_t* L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral492E12A1EA6FD8EAA33E4BE4E8391BE2B07462CF, L_12, /*hidden argument*/NULL);
		NullCheck(L_10);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_10, 1, L_13, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_14 = V_0;
		return L_14;
	}

IL_005f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		FieldInfo_t * L_15 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_cachedToString_7();
		if (L_15)
		{
			goto IL_00ae;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_16 = { reinterpret_cast<intptr_t> (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_17 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		FieldInfo_t * L_18 = VirtFuncInvoker2< FieldInfo_t *, String_t*, int32_t >::Invoke(44 /* System.Reflection.FieldInfo System.Type::GetField(System.String,System.Reflection.BindingFlags) */, L_17, _stringLiteral8E0D467E808FBDA0581E9B787E361A39CCD1302A, ((int32_t)36));
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->set_cachedToString_7(L_18);
		FieldInfo_t * L_19 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_cachedToString_7();
		if (L_19)
		{
			goto IL_00ae;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_20 = FirebaseStorage_get_DefaultInstance_m57584267322C66F070C5E2F58173A698754593E6(/*hidden argument*/NULL);
		NullCheck(L_20);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_21 = FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline(L_20, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_22 = V_0;
		NullCheck(L_22);
		String_t* L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_22);
		String_t* L_24 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral9E4AFE5694A4F8055A4D886D9E15DC3AFBFC53BE, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_21, 1, L_24, /*hidden argument*/NULL);
	}

IL_00ae:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
			FieldInfo_t * L_25 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_pathFieldInfo_6();
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_26 = V_0;
			NullCheck(L_25);
			RuntimeObject * L_27 = VirtFuncInvoker1< RuntimeObject *, RuntimeObject * >::Invoke(20 /* System.Object System.Reflection.FieldInfo::GetValue(System.Object) */, L_25, L_26);
			V_2 = ((String_t*)CastclassSealed((RuntimeObject*)L_27, String_t_il2cpp_TypeInfo_var));
			String_t* L_28 = V_2;
			if (L_28)
			{
				goto IL_00cc;
			}
		}

IL_00c5:
		{
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_29 = V_0;
			V_3 = L_29;
			goto IL_01cd;
		}

IL_00cc:
		{
			String_t* L_30 = V_2;
			NullCheck(L_30);
			int32_t L_31 = String_LastIndexOf_m80AFBEF2F3857F9D6A67126F4C4D9A9B9CEC5902(L_30, _stringLiteral9AA76BBF7EB0D3B88FF0AE06C7A8FE8CF8BE2236, /*hidden argument*/NULL);
			V_4 = L_31;
			int32_t L_32 = V_4;
			if ((!(((uint32_t)L_32) == ((uint32_t)(-1)))))
			{
				goto IL_00e8;
			}
		}

IL_00e1:
		{
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_33 = V_0;
			V_3 = L_33;
			goto IL_01cd;
		}

IL_00e8:
		{
			int32_t L_34 = V_4;
			String_t* L_35 = V_2;
			NullCheck(L_35);
			int32_t L_36 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_35, /*hidden argument*/NULL);
			if ((!(((uint32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)3))) == ((uint32_t)L_36))))
			{
				goto IL_00fe;
			}
		}

IL_00f7:
		{
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_37 = V_0;
			V_3 = L_37;
			goto IL_01cd;
		}

IL_00fe:
		{
			String_t* L_38 = V_2;
			int32_t L_39 = V_4;
			NullCheck(L_38);
			String_t* L_40 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_38, ((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)3)), /*hidden argument*/NULL);
			NullCheck(L_40);
			String_t* L_41 = String_Replace_m98184150DC4E2FBDF13E723BF5B7353D9602AC4D(L_40, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, _stringLiteral5B60826B672AE8FDF846D50BC3A8441BCD134FF9, /*hidden argument*/NULL);
			V_5 = L_41;
			String_t* L_42 = V_2;
			int32_t L_43 = V_4;
			NullCheck(L_42);
			String_t* L_44 = String_Substring_m7A39A2AC0893AE940CF4CEC841326D56FFB9D86B(L_42, 0, ((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)3)), /*hidden argument*/NULL);
			String_t* L_45 = V_5;
			String_t* L_46 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_44, L_45, /*hidden argument*/NULL);
			V_2 = L_46;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
			FieldInfo_t * L_47 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_pathFieldInfo_6();
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_48 = V_0;
			String_t* L_49 = V_2;
			NullCheck(L_47);
			FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_47, L_48, L_49, /*hidden argument*/NULL);
			FieldInfo_t * L_50 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_cachedToString_7();
			if (!L_50)
			{
				goto IL_014e;
			}
		}

IL_0142:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
			FieldInfo_t * L_51 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_cachedToString_7();
			Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_52 = V_0;
			String_t* L_53 = ___formattedUrl0;
			NullCheck(L_51);
			FieldInfo_SetValue_mA1EFB5DA5E4B930A617744E29E909FE9DEAA663C(L_51, L_52, L_53, /*hidden argument*/NULL);
		}

IL_014e:
		{
			goto IL_01c5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (FieldAccessException_t88FFE38715CE4D411C1174EBBD26BC4BC583AD1D_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0153;
		if(il2cpp_codegen_class_is_assignable_from (TargetException_t24392281B50548C1502540A59617BC50E2EAF8C2_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0179;
		if(il2cpp_codegen_class_is_assignable_from (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_019f;
		throw e;
	}

CATCH_0153:
	{ // begin catch(System.FieldAccessException)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_54 = FirebaseStorage_get_DefaultInstance_m57584267322C66F070C5E2F58173A698754593E6(/*hidden argument*/NULL);
		NullCheck(L_54);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_55 = FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline(L_54, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_56 = V_0;
		NullCheck(L_56);
		String_t* L_57 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_56);
		String_t* L_58 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral25B302D60E13CE4F75DBA8F5B002C2B1AD81C5A1, L_57, /*hidden argument*/NULL);
		NullCheck(L_55);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_55, 1, L_58, /*hidden argument*/NULL);
		goto IL_01c5;
	} // end catch (depth: 1)

CATCH_0179:
	{ // begin catch(System.Reflection.TargetException)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_59 = FirebaseStorage_get_DefaultInstance_m57584267322C66F070C5E2F58173A698754593E6(/*hidden argument*/NULL);
		NullCheck(L_59);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_60 = FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline(L_59, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_61 = V_0;
		NullCheck(L_61);
		String_t* L_62 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_61);
		String_t* L_63 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1B2C5CD5AD315F121A16E97051C59081DE484465, L_62, /*hidden argument*/NULL);
		NullCheck(L_60);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_60, 1, L_63, /*hidden argument*/NULL);
		goto IL_01c5;
	} // end catch (depth: 1)

CATCH_019f:
	{ // begin catch(System.ArgumentException)
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_64 = FirebaseStorage_get_DefaultInstance_m57584267322C66F070C5E2F58173A698754593E6(/*hidden argument*/NULL);
		NullCheck(L_64);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_65 = FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline(L_64, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_66 = V_0;
		NullCheck(L_66);
		String_t* L_67 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_66);
		String_t* L_68 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral001FAA6D3CC28196BCAAE1682C7C0948845703F0, L_67, /*hidden argument*/NULL);
		NullCheck(L_65);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_65, 1, L_68, /*hidden argument*/NULL);
		goto IL_01c5;
	} // end catch (depth: 1)

IL_01c5:
	{
		String_t* L_69 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_KeepAlive_m16C41A64E08E35865A249CB5479A37BACBEDC75C(L_69, /*hidden argument*/NULL);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_70 = V_0;
		return L_70;
	}

IL_01cd:
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_71 = V_3;
		return L_71;
	}
}
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::get_DefaultInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * FirebaseStorage_get_DefaultInstance_m57584267322C66F070C5E2F58173A698754593E6 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_get_DefaultInstance_m57584267322C66F070C5E2F58173A698754593E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_1 = FirebaseStorage_GetInstance_m44B5B7CB1BA8AB00F31860D48CE31EB4940DF6BF(L_0, (String_t*)NULL, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::GetInstance(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * FirebaseStorage_GetInstance_m44B5B7CB1BA8AB00F31860D48CE31EB4940DF6BF (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_GetInstance_m44B5B7CB1BA8AB00F31860D48CE31EB4940DF6BF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B2_0 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B1_0 = NULL;
	String_t* G_B5_0 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B5_1 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B4_0 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B3_0 = NULL;
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		String_t* L_1 = ___url1;
		bool L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		G_B1_0 = L_0;
		if (L_2)
		{
			G_B2_0 = L_0;
			goto IL_0012;
		}
	}
	{
		String_t* L_3 = ___url1;
		G_B5_0 = L_3;
		G_B5_1 = G_B1_0;
		goto IL_0042;
	}

IL_0012:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_4 = ___app0;
		NullCheck(L_4);
		AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * L_5 = FirebaseApp_get_Options_m98E649DAB99D126DC16D6E78682F933B02049180(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		String_t* L_6 = AppOptions_get_StorageBucket_m63489CFD73EA950BCF40D828F23658740C8B35FB_inline(L_5, /*hidden argument*/NULL);
		bool L_7 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_6, /*hidden argument*/NULL);
		G_B3_0 = G_B2_0;
		if (L_7)
		{
			G_B4_0 = G_B2_0;
			goto IL_0041;
		}
	}
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_8 = ___app0;
		NullCheck(L_8);
		AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * L_9 = FirebaseApp_get_Options_m98E649DAB99D126DC16D6E78682F933B02049180(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		String_t* L_10 = AppOptions_get_StorageBucket_m63489CFD73EA950BCF40D828F23658740C8B35FB_inline(L_9, /*hidden argument*/NULL);
		String_t* L_11 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralABBB41CC11C60D234659F31874B9FB7B8DD1259D, L_10, /*hidden argument*/NULL);
		G_B5_0 = L_11;
		G_B5_1 = G_B3_0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B5_0 = ((String_t*)(NULL));
		G_B5_1 = G_B4_0;
	}

IL_0042:
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_12 = FirebaseStorage_GetInstanceInternal_m5F406685D26131AB6405BE7FD64B91FED3BA1396(G_B5_1, G_B5_0, /*hidden argument*/NULL);
		return L_12;
	}
}
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::FindByKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * FirebaseStorage_FindByKey_m6EF3BABE9BA15FA72C5E6B3BCB890291052465C7 (String_t* ___instanceKey0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_FindByKey_m6EF3BABE9BA15FA72C5E6B3BCB890291052465C7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * V_1 = NULL;
	FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * L_0 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			V_1 = (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 *)NULL;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
			Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * L_2 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
			String_t* L_3 = ___instanceKey0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_m080F9F073DBB321B63576C2BDAAEEBAF134546A3(L_2, L_3, (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 **)(&V_1), /*hidden argument*/Dictionary_2_TryGetValue_m080F9F073DBB321B63576C2BDAAEEBAF134546A3_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_0039;
			}
		}

IL_0020:
		{
			FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_5 = V_1;
			if (!L_5)
			{
				goto IL_002d;
			}
		}

IL_0026:
		{
			FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_6 = V_1;
			V_2 = L_6;
			IL2CPP_LEAVE(0x47, FINALLY_003e);
		}

IL_002d:
		{
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
			Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * L_7 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
			String_t* L_8 = ___instanceKey0;
			NullCheck(L_7);
			Dictionary_2_Remove_mC3B3EE0C566D6AB2793E53A4FEC43EA58786ECCA(L_7, L_8, /*hidden argument*/Dictionary_2_Remove_mC3B3EE0C566D6AB2793E53A4FEC43EA58786ECCA_RuntimeMethod_var);
		}

IL_0039:
		{
			IL2CPP_LEAVE(0x45, FINALLY_003e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003e;
	}

FINALLY_003e:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(62)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(62)
	{
		IL2CPP_JUMP_TBL(0x47, IL_0047)
		IL2CPP_JUMP_TBL(0x45, IL_0045)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0045:
	{
		return (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 *)NULL;
	}

IL_0047:
	{
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_10 = V_2;
		return L_10;
	}
}
// Firebase.Storage.FirebaseStorage Firebase.Storage.FirebaseStorage::GetInstanceInternal(Firebase.FirebaseApp,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * FirebaseStorage_GetInstanceInternal_m5F406685D26131AB6405BE7FD64B91FED3BA1396 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___bucketUrl1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_GetInstanceInternal_m5F406685D26131AB6405BE7FD64B91FED3BA1396_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * V_1 = NULL;
	ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * V_2 = NULL;
	FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * V_3 = NULL;
	RuntimeObject * V_4 = NULL;
	String_t* V_5 = NULL;
	FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * V_6 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B2_0 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B1_0 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B8_1 = NULL;
	String_t* G_B7_0 = NULL;
	String_t* G_B7_1 = NULL;
	String_t* G_B12_0 = NULL;
	String_t* G_B12_1 = NULL;
	int32_t G_B12_2 = 0;
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * G_B12_3 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B11_1 = NULL;
	int32_t G_B11_2 = 0;
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * G_B11_3 = NULL;
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000d;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_2 = FirebaseApp_get_DefaultInstance_mCC924BAC33B68B03C851ACE856930B839F8267D7(/*hidden argument*/NULL);
		G_B2_0 = L_2;
	}

IL_000d:
	{
		___app0 = G_B2_0;
		V_1 = (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 *)NULL;
	}

IL_0011:
	try
	{ // begin try (depth: 1)
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_3 = ___app0;
		String_t* L_4 = ___bucketUrl1;
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_5 = FirebaseStorageInternal_GetInstanceInternal_m97EBB2762C810B78E695CFC2051C1ED259D36538(L_3, L_4, (int32_t*)(&V_0), /*hidden argument*/NULL);
		V_1 = L_5;
		goto IL_002d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_0020;
		throw e;
	}

CATCH_0020:
	{ // begin catch(System.ApplicationException)
		V_2 = ((ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)__exception_local);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_6 = V_2;
		NullCheck(L_6);
		String_t* L_7 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_6);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_8, L_7, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, FirebaseStorage_GetInstanceInternal_m5F406685D26131AB6405BE7FD64B91FED3BA1396_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_002d:
	{
		int32_t L_9 = V_0;
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		String_t* L_10 = ___bucketUrl1;
		String_t* L_11 = L_10;
		G_B7_0 = L_11;
		G_B7_1 = _stringLiteral47B60EB9A7DD966F2D170292CD7E78CEE515C121;
		if (L_11)
		{
			G_B8_0 = L_11;
			G_B8_1 = _stringLiteral47B60EB9A7DD966F2D170292CD7E78CEE515C121;
			goto IL_0045;
		}
	}
	{
		String_t* L_12 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B8_0 = L_12;
		G_B8_1 = G_B7_1;
	}

IL_0045:
	{
		String_t* L_13 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(G_B8_1, G_B8_0, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_14 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_14, L_13, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, FirebaseStorage_GetInstanceInternal_m5F406685D26131AB6405BE7FD64B91FED3BA1396_RuntimeMethod_var);
	}

IL_0050:
	{
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_15 = V_1;
		if (L_15)
		{
			goto IL_007a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_16 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_logger_4();
		String_t* L_17 = ___bucketUrl1;
		String_t* L_18 = L_17;
		G_B11_0 = L_18;
		G_B11_1 = _stringLiteralBD2C0B3974A906DFD731ADCD696F181498081EC5;
		G_B11_2 = 4;
		G_B11_3 = L_16;
		if (L_18)
		{
			G_B12_0 = L_18;
			G_B12_1 = _stringLiteralBD2C0B3974A906DFD731ADCD696F181498081EC5;
			G_B12_2 = 4;
			G_B12_3 = L_16;
			goto IL_006e;
		}
	}
	{
		String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B12_0 = L_19;
		G_B12_1 = G_B11_1;
		G_B12_2 = G_B11_2;
		G_B12_3 = G_B11_3;
	}

IL_006e:
	{
		String_t* L_20 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(G_B12_1, G_B12_0, /*hidden argument*/NULL);
		NullCheck(G_B12_3);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(G_B12_3, G_B12_2, L_20, /*hidden argument*/NULL);
		return (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 *)NULL;
	}

IL_007a:
	{
		V_3 = (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * L_21 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
		V_4 = L_21;
		RuntimeObject * L_22 = V_4;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_22, /*hidden argument*/NULL);
	}

IL_008a:
	try
	{ // begin try (depth: 1)
		{
			FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_23 = V_1;
			NullCheck(L_23);
			String_t* L_24 = FirebaseStorageInternal_get_InstanceKey_mE87BB7C66F3082EB3380EA1B48DAA97809F8C987(L_23, /*hidden argument*/NULL);
			V_5 = L_24;
			String_t* L_25 = V_5;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
			FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_26 = FirebaseStorage_FindByKey_m6EF3BABE9BA15FA72C5E6B3BCB890291052465C7(L_25, /*hidden argument*/NULL);
			V_3 = L_26;
			FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_27 = V_3;
			if (!L_27)
			{
				goto IL_00a8;
			}
		}

IL_00a0:
		{
			FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_28 = V_3;
			V_6 = L_28;
			IL2CPP_LEAVE(0xCC, FINALLY_00c2);
		}

IL_00a8:
		{
			FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_29 = V_1;
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_30 = ___app0;
			FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_31 = (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 *)il2cpp_codegen_object_new(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
			FirebaseStorage__ctor_m3FC01B84D3001B1846FAD4799E4358FFFDC3F297(L_31, L_29, L_30, /*hidden argument*/NULL);
			V_3 = L_31;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
			Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * L_32 = ((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->get_storageByInstanceKey_0();
			String_t* L_33 = V_5;
			FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_34 = V_3;
			NullCheck(L_32);
			Dictionary_2_set_Item_mC1322A23CE40537452EA237A1FCD7F852C10BBA9(L_32, L_33, L_34, /*hidden argument*/Dictionary_2_set_Item_mC1322A23CE40537452EA237A1FCD7F852C10BBA9_RuntimeMethod_var);
			IL2CPP_LEAVE(0xCA, FINALLY_00c2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00c2;
	}

FINALLY_00c2:
	{ // begin finally (depth: 1)
		RuntimeObject * L_35 = V_4;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_35, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(194)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(194)
	{
		IL2CPP_JUMP_TBL(0xCC, IL_00cc)
		IL2CPP_JUMP_TBL(0xCA, IL_00ca)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00ca:
	{
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_36 = V_3;
		return L_36;
	}

IL_00cc:
	{
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_37 = V_6;
		return L_37;
	}
}
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.FirebaseStorage::ValidateStorageReferenceInternal(Firebase.Storage.StorageReferenceInternal,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * FirebaseStorage_ValidateStorageReferenceInternal_m2DB5A7D4F8068258A09885D7B93585D9919D8F38 (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___reference0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_ValidateStorageReferenceInternal_m2DB5A7D4F8068258A09885D7B93585D9919D8F38_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_0 = ___reference0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_1 = ___reference0;
		NullCheck(L_1);
		bool L_2 = StorageReferenceInternal_get_IsValid_mE6974AE9F4500567F662E861A6FCD0E35DAB028B(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0018;
		}
	}

IL_0011:
	{
		String_t* L_3 = ___message1;
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_4 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_4, L_3, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, FirebaseStorage_ValidateStorageReferenceInternal_m2DB5A7D4F8068258A09885D7B93585D9919D8F38_RuntimeMethod_var);
	}

IL_0018:
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_5 = ___reference0;
		return L_5;
	}
}
// Firebase.Storage.StorageReference Firebase.Storage.FirebaseStorage::GetReferenceFromUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * FirebaseStorage_GetReferenceFromUrl_mB5F25AA313AD7D2CD6AC6FAD0E52BA74CA8C29C0 (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, String_t* ___fullUrl0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage_GetReferenceFromUrl_mB5F25AA313AD7D2CD6AC6FAD0E52BA74CA8C29C0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * V_0 = NULL;
	ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * V_1 = NULL;
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
		FirebaseStorage_ThrowIfNull_m392D1788F987DB111E04ED22499C897524442F1E(__this, /*hidden argument*/NULL);
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_0 = __this->get_storageInternal_1();
		String_t* L_1 = ___fullUrl0;
		NullCheck(L_0);
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_2 = FirebaseStorageInternal_GetReferenceFromUrl_mE8ACDA413CCCECC978A1F7EE27EFA935E9A9AF11(L_0, L_1, /*hidden argument*/NULL);
		String_t* L_3 = ___fullUrl0;
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_4 = __this->get_storageInternal_1();
		NullCheck(L_4);
		String_t* L_5 = FirebaseStorageInternal_get_Url_m425C6396457782FF410100806B804B820E891085(L_4, /*hidden argument*/NULL);
		String_t* L_6 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral59358F49E2B3138E277F9DD45CD625C26DE28B03, L_3, L_5, /*hidden argument*/NULL);
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_7 = FirebaseStorage_ValidateStorageReferenceInternal_m2DB5A7D4F8068258A09885D7B93585D9919D8F38(__this, L_2, L_6, /*hidden argument*/NULL);
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_8 = (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F *)il2cpp_codegen_object_new(StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F_il2cpp_TypeInfo_var);
		StorageReference__ctor_mC09ABE63B921CA4FF2EEA622C567FB1A3FB4B6C5(L_8, __this, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0047;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_003a;
		throw e;
	}

CATCH_003a:
	{ // begin catch(System.ApplicationException)
		V_1 = ((ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)__exception_local);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_9 = V_1;
		NullCheck(L_9);
		String_t* L_10 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_9);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_11 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_11, L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, FirebaseStorage_GetReferenceFromUrl_mB5F25AA313AD7D2CD6AC6FAD0E52BA74CA8C29C0_RuntimeMethod_var);
	} // end catch (depth: 1)

IL_0047:
	{
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_12 = V_0;
		return L_12;
	}
}
// System.Void Firebase.Storage.FirebaseStorage::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorage__cctor_m17CCA987F9FC01F02981A45AA53DE4396289471A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorage__cctor_m17CCA987F9FC01F02981A45AA53DE4396289471A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * V_0 = NULL;
	{
		Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 * L_0 = (Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11 *)il2cpp_codegen_object_new(Dictionary_2_tE84ACEEB36F885611B890E5C8CA267919F160F11_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m8032C2FE80E98D3C44CF88FFC5F60C88D981BD3A(L_0, /*hidden argument*/Dictionary_2__ctor_m8032C2FE80E98D3C44CF88FFC5F60C88D981BD3A_RuntimeMethod_var);
		((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->set_storageByInstanceKey_0(L_0);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_1 = (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *)il2cpp_codegen_object_new(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
		ModuleLogger__ctor_mE8D814C24F604C09F5D9A651BDB56DEF9ABB556E(L_1, (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_2 = V_0;
		NullCheck(L_2);
		ModuleLogger_set_Tag_m7ECACA8B7C965C422E171F9AD64A3CF377641A13_inline(L_2, _stringLiteralAA9E04A4F0FAA2410217C8B3DD5093BC82D04A7E, /*hidden argument*/NULL);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_3 = V_0;
		((FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var))->set_logger_4(L_3);
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
// System.Void Firebase.Storage.FirebaseStorageInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal__ctor_m82C47BB978DBE52118D41F8EDA86920C6FD23ED1 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Storage.FirebaseStorageInternal::getCPtr(Firebase.Storage.FirebaseStorageInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  FirebaseStorageInternal_getCPtr_mD5B445F5C0A11BFA7670F93A931064FDD48668B1 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_getCPtr_mD5B445F5C0A11BFA7670F93A931064FDD48668B1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Storage.FirebaseStorageInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_Finalize_m7C7E53E8E778F680DB7DE1D11A085F2FF685379F (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, const RuntimeMethod* method)
{
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.FirebaseStorageInternal::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Storage.FirebaseStorageInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_Dispose_m41ED2FA3448548BD83CF0E69278EDD5AA64DE769 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_Dispose_m41ED2FA3448548BD83CF0E69278EDD5AA64DE769_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		FirebaseStorageInternal_ReleaseReferenceInternal_m469E5D75647171C997032C08A100E1FDFC64D422(__this, /*hidden argument*/NULL);
		__this->set_swigCMemOwn_1((bool)0);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		IL2CPP_LEAVE(0x36, FINALLY_002f);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002f;
	}

FINALLY_002f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_3 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(47)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(47)
	{
		IL2CPP_JUMP_TBL(0x36, IL_0036)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0036:
	{
		return;
	}
}
// System.String Firebase.Storage.FirebaseStorageInternal::get_InstanceKey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseStorageInternal_get_InstanceKey_mE87BB7C66F3082EB3380EA1B48DAA97809F8C987 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, const RuntimeMethod* method)
{
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = FirebaseStorageInternal_get_App_m4D9B68C2100C679EF71EAFD523E739D22D1BAD8C(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline(L_0, /*hidden argument*/NULL);
		String_t* L_2 = FirebaseStorageInternal_get_Url_m425C6396457782FF410100806B804B820E891085(__this, /*hidden argument*/NULL);
		String_t* L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_1, L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
// System.Void Firebase.Storage.FirebaseStorageInternal::SetSwigCMemOwn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_SetSwigCMemOwn_m92F09F2A153ED27C2745E3B85AB045B3D37A3102 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, bool ___ownership0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ownership0;
		__this->set_swigCMemOwn_1(L_0);
		return;
	}
}
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.FirebaseStorageInternal::GetReferenceFromUrl(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * FirebaseStorageInternal_GetReferenceFromUrl_mE8ACDA413CCCECC978A1F7EE27EFA935E9A9AF11 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, String_t* ___url0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_GetReferenceFromUrl_mE8ACDA413CCCECC978A1F7EE27EFA935E9A9AF11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___url0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_2 = StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0_m4D7F73FBC07183FE3511D70158508EA2FDC35696(L_0, L_1, /*hidden argument*/NULL);
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_3 = (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F *)il2cpp_codegen_object_new(StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F_il2cpp_TypeInfo_var);
		StorageReferenceInternal__ctor_mAC63CF4DCBAAD690883596AC1961550209864AD2(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, FirebaseStorageInternal_GetReferenceFromUrl_mE8ACDA413CCCECC978A1F7EE27EFA935E9A9AF11_RuntimeMethod_var);
	}

IL_0023:
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_6 = V_0;
		return L_6;
	}
}
// Firebase.Storage.FirebaseStorageInternal Firebase.Storage.FirebaseStorageInternal::GetInstanceInternal(Firebase.FirebaseApp,System.String,Firebase.InitResult&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * FirebaseStorageInternal_GetInstanceInternal_m97EBB2762C810B78E695CFC2051C1ED259D36538 (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * ___app0, String_t* ___url1, int32_t* ___init_result_out2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_GetInstanceInternal_m97EBB2762C810B78E695CFC2051C1ED259D36538_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * V_2 = NULL;
	FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * G_B4_0 = NULL;
	{
		V_0 = 0;
	}

IL_0002:
	try
	{ // begin try (depth: 1)
		{
			FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_0 = ___app0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1 = FirebaseApp_getCPtr_mB9BA3F66814A2FC1CCF1355B112F2D1DD4E72E86(L_0, /*hidden argument*/NULL);
			String_t* L_2 = ___url1;
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
			intptr_t L_3 = StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal_m0A66DD0BEDE5C0C3AB7CA56456F706CF994D8F35(L_1, L_2, (int32_t*)(&V_0), /*hidden argument*/NULL);
			V_1 = (intptr_t)L_3;
			intptr_t L_4 = V_1;
			bool L_5 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_4, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_5)
			{
				goto IL_0027;
			}
		}

IL_0021:
		{
			G_B4_0 = ((FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 *)(NULL));
			goto IL_002e;
		}

IL_0027:
		{
			intptr_t L_6 = V_1;
			FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_7 = (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 *)il2cpp_codegen_object_new(FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36_il2cpp_TypeInfo_var);
			FirebaseStorageInternal__ctor_m82C47BB978DBE52118D41F8EDA86920C6FD23ED1(L_7, (intptr_t)L_6, (bool)0, /*hidden argument*/NULL);
			G_B4_0 = L_7;
		}

IL_002e:
		{
			V_2 = G_B4_0;
			bool L_8 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
			if (!L_8)
			{
				goto IL_003f;
			}
		}

IL_0039:
		{
			Exception_t * L_9 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
			IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, FirebaseStorageInternal_GetInstanceInternal_m97EBB2762C810B78E695CFC2051C1ED259D36538_RuntimeMethod_var);
		}

IL_003f:
		{
			FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_10 = V_2;
			V_3 = L_10;
			IL2CPP_LEAVE(0x4A, FINALLY_0046);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0046;
	}

FINALLY_0046:
	{ // begin finally (depth: 1)
		int32_t* L_11 = ___init_result_out2;
		int32_t L_12 = V_0;
		*((int32_t*)L_11) = (int32_t)L_12;
		IL2CPP_END_FINALLY(70)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(70)
	{
		IL2CPP_JUMP_TBL(0x4A, IL_004a)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004a:
	{
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_13 = V_3;
		return L_13;
	}
}
// System.Void Firebase.Storage.FirebaseStorageInternal::ReleaseReferenceInternal(Firebase.Storage.FirebaseStorageInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FirebaseStorageInternal_ReleaseReferenceInternal_m469E5D75647171C997032C08A100E1FDFC64D422 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_ReleaseReferenceInternal_m469E5D75647171C997032C08A100E1FDFC64D422_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * L_0 = ___instance0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1 = FirebaseStorageInternal_getCPtr_mD5B445F5C0A11BFA7670F93A931064FDD48668B1(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal_m6A406313FF6F90F6B4B360A883ECA262B71B4DA5(L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseStorageInternal_ReleaseReferenceInternal_m469E5D75647171C997032C08A100E1FDFC64D422_RuntimeMethod_var);
	}

IL_001b:
	{
		return;
	}
}
// Firebase.FirebaseApp Firebase.Storage.FirebaseStorageInternal::get_App()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * FirebaseStorageInternal_get_App_m4D9B68C2100C679EF71EAFD523E739D22D1BAD8C (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_get_App_m4D9B68C2100C679EF71EAFD523E739D22D1BAD8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * V_1 = NULL;
	FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * G_B3_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_App_get_mE1F82516CF5CB0DD9995BA0FDD2C538B99E59BBE(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_5 = (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D *)il2cpp_codegen_object_new(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		FirebaseApp__ctor_mB94B4439B6474A9B3420A388F4C847153BB7DA2B(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		bool L_6 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		Exception_t * L_7 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, FirebaseStorageInternal_get_App_m4D9B68C2100C679EF71EAFD523E739D22D1BAD8C_RuntimeMethod_var);
	}

IL_003a:
	{
		FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * L_8 = V_1;
		return L_8;
	}
}
// System.String Firebase.Storage.FirebaseStorageInternal::get_Url()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FirebaseStorageInternal_get_Url_m425C6396457782FF410100806B804B820E891085 (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FirebaseStorageInternal_get_Url_m425C6396457782FF410100806B804B820E891085_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		String_t* L_1 = StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_Url_get_mB19EBC03B4F911B9ABC4A1598D9131A6DF156BB5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, FirebaseStorageInternal_get_Url_m425C6396457782FF410100806B804B820E891085_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_Future_StorageMetadata_SWIG_CompletionDispatcher_mBD53FFA5A73C38A7CD49CC9FFB189224CA7ED21D(int32_t ___key0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	Future_StorageMetadata_SWIG_CompletionDispatcher_mBD53FFA5A73C38A7CD49CC9FFB189224CA7ED21D(___key0, NULL);

}
// System.Void Firebase.Storage.Future_StorageMetadata::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata__ctor_m7BAA8F7AF59C436996C2C282C9D8307D8104F1FA (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata__ctor_m7BAA8F7AF59C436996C2C282C9D8307D8104F1FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_callbackData_6((intptr_t)(0));
		intptr_t L_0 = ___cPtr0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIGUpcast_mBE021ECAAE278E80A044F6E2A980FB569D6C812E((intptr_t)L_0, /*hidden argument*/NULL);
		bool L_2 = ___cMemoryOwn1;
		FutureBase__ctor_m69C88EC69B422C5752B2E249303D92F649B8C8AC(__this, (intptr_t)L_1, L_2, /*hidden argument*/NULL);
		intptr_t L_3 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4;
		memset((&L_4), 0, sizeof(L_4));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_4), __this, (intptr_t)L_3, /*hidden argument*/NULL);
		__this->set_swigCPtr_2(L_4);
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_Finalize_mD065A8FA06513506A9C62BD2FA2DE97F13BA871E (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, const RuntimeMethod* method)
{
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		FutureBase_Finalize_m02E7843DEC68FBDDCA2B009E905FE4657C2B04AC(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_Dispose_m6CB060D21D3B21116FA2C9B6FF29CF844F63C288 (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_Dispose_m6CB060D21D3B21116FA2C9B6FF29CF844F63C288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_2();
			intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_005f;
			}
		}

IL_0026:
		{
			Future_StorageMetadata_SetCompletionData_m5B7B3B5DA93099C9C06860AB023E460F7511F012(__this, (intptr_t)(0), /*hidden argument*/NULL);
			bool L_5 = ((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_004e;
			}
		}

IL_003c:
		{
			((FutureBase_t8A0245B874D87A58E48E0C9F16C54FD8003534F4 *)__this)->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_2();
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_Future_StorageMetadata_mD71C908C2FB28CAD92C8342F8AAD8F6DE68B5E31(L_6, /*hidden argument*/NULL);
		}

IL_004e:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_2(L_7);
		}

IL_005f:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			FutureBase_Dispose_m2C0FDC1F8EF2499A1E52D6CFEA94348388784BDB(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x77, FINALLY_0070);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0070;
	}

FINALLY_0070:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(112)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(112)
	{
		IL2CPP_JUMP_TBL(0x77, IL_0077)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0077:
	{
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.Future_StorageMetadata::GetTask(Firebase.Storage.Future_StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9744B6AD55320186C36CC7626916272750E46384 * Future_StorageMetadata_GetTask_mEC24F7196CE27D81111FEB9BEC03C9EE7C41C32F (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * ___fu0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_GetTask_mEC24F7196CE27D81111FEB9BEC03C9EE7C41C32F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * V_0 = NULL;
	{
		U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * L_0 = (U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 *)il2cpp_codegen_object_new(U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7_il2cpp_TypeInfo_var);
		U3CGetTaskU3Ec__AnonStorey0__ctor_m455B9396E995372C47CC09F16F56363889AEFAF1(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * L_1 = V_0;
		Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * L_2 = ___fu0;
		NullCheck(L_1);
		L_1->set_fu_0(L_2);
		U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * L_3 = V_0;
		TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * L_4 = (TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m0A82D3C746DB9615E72F614755DC5CC16DFD6EC2(L_4, /*hidden argument*/TaskCompletionSource_1__ctor_m0A82D3C746DB9615E72F614755DC5CC16DFD6EC2_RuntimeMethod_var);
		NullCheck(L_3);
		L_3->set_tcs_1(L_4);
		U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * L_5 = V_0;
		NullCheck(L_5);
		Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * L_6 = L_5->get_fu_0();
		NullCheck(L_6);
		int32_t L_7 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_6, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_004b;
		}
	}
	{
		U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * L_9 = L_8->get_tcs_1();
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
		FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_10, 0, _stringLiteralBDC976839D65581464FE3F4DB84C2D27603F0F18, /*hidden argument*/NULL);
		NullCheck(L_9);
		TaskCompletionSource_1_SetException_mB6C19B4DD3C5A9FEBE258E2EC15FF348EF5A9452(L_9, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_mB6C19B4DD3C5A9FEBE258E2EC15FF348EF5A9452_RuntimeMethod_var);
		U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * L_11 = V_0;
		NullCheck(L_11);
		TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * L_12 = L_11->get_tcs_1();
		NullCheck(L_12);
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_13 = TaskCompletionSource_1_get_Task_m4F9A726939863963B5671ADBA686E23ADE0C4FB1_inline(L_12, /*hidden argument*/TaskCompletionSource_1_get_Task_m4F9A726939863963B5671ADBA686E23ADE0C4FB1_RuntimeMethod_var);
		return L_13;
	}

IL_004b:
	{
		U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * L_14 = V_0;
		NullCheck(L_14);
		Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * L_15 = L_14->get_fu_0();
		U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * L_16 = V_0;
		Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * L_17 = (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 *)il2cpp_codegen_object_new(Action_t1A01C351F74C95684C76A3BE30208EADA4B35480_il2cpp_TypeInfo_var);
		Action__ctor_mDD610D6E883AC75D9B7E02A7E4A34301F3053C3D(L_17, L_16, (intptr_t)((intptr_t)U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mDDB68359371D43F88C0B1D91A90B5ED88CCA8219_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_15);
		Future_StorageMetadata_SetOnCompletionCallback_m08B60F35359985371E6ED7B64DA181A71839264A(L_15, L_17, /*hidden argument*/NULL);
		U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * L_18 = V_0;
		NullCheck(L_18);
		TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * L_19 = L_18->get_tcs_1();
		NullCheck(L_19);
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_20 = TaskCompletionSource_1_get_Task_m4F9A726939863963B5671ADBA686E23ADE0C4FB1_inline(L_19, /*hidden argument*/TaskCompletionSource_1_get_Task_m4F9A726939863963B5671ADBA686E23ADE0C4FB1_RuntimeMethod_var);
		return L_20;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::ThrowIfDisposed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_ThrowIfDisposed_m936E3F3BF89CB09FA692EC9A7CB73E0FB5163403 (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_ThrowIfDisposed_m936E3F3BF89CB09FA692EC9A7CB73E0FB5163403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_0 = __this->get_address_of_swigCPtr_2();
		intptr_t L_1 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_0, /*hidden argument*/NULL);
		bool L_2 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_3 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_3, _stringLiteralE952D19344D880EF06EC8AACBF9B79603FCE8F3A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Future_StorageMetadata_ThrowIfDisposed_m936E3F3BF89CB09FA692EC9A7CB73E0FB5163403_RuntimeMethod_var);
	}

IL_0025:
	{
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::SetOnCompletionCallback(Firebase.Storage.Future_StorageMetadata_Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SetOnCompletionCallback_m08B60F35359985371E6ED7B64DA181A71839264A (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * ___userCompletionCallback0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_SetOnCompletionCallback_m08B60F35359985371E6ED7B64DA181A71839264A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Future_StorageMetadata_ThrowIfDisposed_m936E3F3BF89CB09FA692EC9A7CB73E0FB5163403(__this, /*hidden argument*/NULL);
		SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * L_0 = __this->get_SWIG_CompletionCB_7();
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * L_1 = (SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 *)il2cpp_codegen_object_new(SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699_il2cpp_TypeInfo_var);
		SWIG_CompletionDelegate__ctor_m3FE20902A15BFB7B5032AADF8A7AD940697145C2(L_1, NULL, (intptr_t)((intptr_t)Future_StorageMetadata_SWIG_CompletionDispatcher_mBD53FFA5A73C38A7CD49CC9FFB189224CA7ED21D_RuntimeMethod_var), /*hidden argument*/NULL);
		__this->set_SWIG_CompletionCB_7(L_1);
	}

IL_0023:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_2;
		RuntimeObject * L_3 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_002f:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
			Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * L_4 = ((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (L_4)
			{
				goto IL_0043;
			}
		}

IL_0039:
		{
			Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * L_5 = (Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 *)il2cpp_codegen_object_new(Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4_il2cpp_TypeInfo_var);
			Dictionary_2__ctor_mC123202C4E90DFC3FFED4883F6B392A6C49D463E(L_5, /*hidden argument*/Dictionary_2__ctor_mC123202C4E90DFC3FFED4883F6B392A6C49D463E_RuntimeMethod_var);
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
			((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->set_Callbacks_3(L_5);
		}

IL_0043:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
			int32_t L_6 = ((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->get_CallbackIndex_4();
			int32_t L_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
			((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->set_CallbackIndex_4(L_7);
			V_0 = L_7;
			Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * L_8 = ((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_9 = V_0;
			Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * L_10 = ___userCompletionCallback0;
			NullCheck(L_8);
			Dictionary_2_set_Item_m2061781CAABA74A552DE840861C37F546E9A6A73(L_8, L_9, L_10, /*hidden argument*/Dictionary_2_set_Item_m2061781CAABA74A552DE840861C37F546E9A6A73_RuntimeMethod_var);
			IL2CPP_LEAVE(0x69, FINALLY_0062);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0062;
	}

FINALLY_0062:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(98)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(98)
	{
		IL2CPP_JUMP_TBL(0x69, IL_0069)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0069:
	{
		SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * L_12 = __this->get_SWIG_CompletionCB_7();
		int32_t L_13 = V_0;
		intptr_t L_14 = Future_StorageMetadata_SWIG_OnCompletion_mDD87DE88A0C881E1E8AF79A9A7CFC23F3CB51557(__this, L_12, L_13, /*hidden argument*/NULL);
		Future_StorageMetadata_SetCompletionData_m5B7B3B5DA93099C9C06860AB023E460F7511F012(__this, (intptr_t)L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::SetCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SetCompletionData_m5B7B3B5DA93099C9C06860AB023E460F7511F012 (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	{
		Future_StorageMetadata_ThrowIfDisposed_m936E3F3BF89CB09FA692EC9A7CB73E0FB5163403(__this, /*hidden argument*/NULL);
		intptr_t L_0 = __this->get_callbackData_6();
		Future_StorageMetadata_SWIG_FreeCompletionData_m3439C5D916D057735ECC4DBCB24D399B8C2EE20E(__this, (intptr_t)L_0, /*hidden argument*/NULL);
		intptr_t L_1 = ___data0;
		__this->set_callbackData_6((intptr_t)L_1);
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::SWIG_CompletionDispatcher(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SWIG_CompletionDispatcher_mBD53FFA5A73C38A7CD49CC9FFB189224CA7ED21D (int32_t ___key0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_SWIG_CompletionDispatcher_mBD53FFA5A73C38A7CD49CC9FFB189224CA7ED21D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 *)NULL;
		IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->get_CallbackLock_5();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000e:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
			Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * L_2 = ((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->get_Callbacks_3();
			if (!L_2)
			{
				goto IL_0036;
			}
		}

IL_0018:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
			Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * L_3 = ((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_4 = ___key0;
			NullCheck(L_3);
			bool L_5 = Dictionary_2_TryGetValue_mC7C2819D0F27E73CB10A73163ACE0D5F504EAC09(L_3, L_4, (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mC7C2819D0F27E73CB10A73163ACE0D5F504EAC09_RuntimeMethod_var);
			if (!L_5)
			{
				goto IL_0036;
			}
		}

IL_002a:
		{
			IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
			Dictionary_2_t6D8C45AC7FBC32B9999CDFD449801DAC2D39CBB4 * L_6 = ((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->get_Callbacks_3();
			int32_t L_7 = ___key0;
			NullCheck(L_6);
			Dictionary_2_Remove_m313F3480769BF130D3890DCD1F9917B4836D3ECF(L_6, L_7, /*hidden argument*/Dictionary_2_Remove_m313F3480769BF130D3890DCD1F9917B4836D3ECF_RuntimeMethod_var);
		}

IL_0036:
		{
			IL2CPP_LEAVE(0x42, FINALLY_003b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003b;
	}

FINALLY_003b:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(59)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(59)
	{
		IL2CPP_JUMP_TBL(0x42, IL_0042)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0042:
	{
		Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * L_9 = V_0;
		if (!L_9)
		{
			goto IL_004e;
		}
	}
	{
		Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * L_10 = V_0;
		NullCheck(L_10);
		Action_Invoke_m56C0A774070FF999888E48EAF92EF6B35A7018AB(L_10, /*hidden argument*/NULL);
	}

IL_004e:
	{
		return;
	}
}
// System.IntPtr Firebase.Storage.Future_StorageMetadata::SWIG_OnCompletion(Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Future_StorageMetadata_SWIG_OnCompletion_mDD87DE88A0C881E1E8AF79A9A7CFC23F3CB51557 (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * ___cs_callback0, int32_t ___cs_key1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_SWIG_OnCompletion_mDD87DE88A0C881E1E8AF79A9A7CFC23F3CB51557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * L_1 = ___cs_callback0;
		int32_t L_2 = ___cs_key1;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_3 = StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion_m098C1658357527B5AE4244F1EAAB490E6BA571A3(L_0, L_1, L_2, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_3;
		bool L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, Future_StorageMetadata_SWIG_OnCompletion_mDD87DE88A0C881E1E8AF79A9A7CFC23F3CB51557_RuntimeMethod_var);
	}

IL_001e:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::SWIG_FreeCompletionData(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata_SWIG_FreeCompletionData_m3439C5D916D057735ECC4DBCB24D399B8C2EE20E (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, intptr_t ___data0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_SWIG_FreeCompletionData_m3439C5D916D057735ECC4DBCB24D399B8C2EE20E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		intptr_t L_1 = ___data0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData_m6146F054C4FD5B39CD611246AE07CFA979DAED7A(L_0, (intptr_t)L_1, /*hidden argument*/NULL);
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, Future_StorageMetadata_SWIG_FreeCompletionData_m3439C5D916D057735ECC4DBCB24D399B8C2EE20E_RuntimeMethod_var);
	}

IL_001c:
	{
		return;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.Future_StorageMetadata::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * Future_StorageMetadata_GetResult_m00904CA09846B2728A440B3FBBC84B91975BA3AB (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata_GetResult_m00904CA09846B2728A440B3FBBC84B91975BA3AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_2();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_GetResult_mD33208FB3398219C70F9EC01FDD26BA77B1FEAB2(L_0, /*hidden argument*/NULL);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_2 = (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 *)il2cpp_codegen_object_new(MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_il2cpp_TypeInfo_var);
		MetadataInternal__ctor_mA2208F1B26842FA7EF968DB3509ABC14CDBB9BF8(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, Future_StorageMetadata_GetResult_m00904CA09846B2728A440B3FBBC84B91975BA3AB_RuntimeMethod_var);
	}

IL_0022:
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_5 = V_0;
		return L_5;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Future_StorageMetadata__cctor_mFE7A3443594ADF229FE921CA99D180885EB24DEB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Future_StorageMetadata__cctor_mFE7A3443594ADF229FE921CA99D180885EB24DEB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->set_CallbackIndex_4(0);
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_StaticFields*)il2cpp_codegen_static_fields_for(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var))->set_CallbackLock_5(L_0);
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
// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * MetadataChange_Build_mA2883C2BF178C881FF38FF5FD10DC96FB3DD57A1 (MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataChange_Build_mA2883C2BF178C881FF38FF5FD10DC96FB3DD57A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_0 = __this->get_metadata_0();
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_1 = (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 *)il2cpp_codegen_object_new(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_il2cpp_TypeInfo_var);
		StorageMetadata__ctor_mC16F1F6078E4DEB307CEC2E439946EA65F56B88C(L_1, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Storage.StorageMetadata Firebase.Storage.MetadataChange::Build(Firebase.Storage.MetadataChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * MetadataChange_Build_m5FD5867B6CB7C2FF6FE9EF86EC7F582FE4A12F2F (MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * ___metadataChange0, const RuntimeMethod* method)
{
	StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * G_B3_0 = NULL;
	{
		MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * L_0 = ___metadataChange0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * L_1 = ___metadataChange0;
		NullCheck(L_1);
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_2 = MetadataChange_Build_mA2883C2BF178C881FF38FF5FD10DC96FB3DD57A1(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = ((StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 *)(NULL));
	}

IL_0012:
	{
		return G_B3_0;
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
// System.Void Firebase.Storage.MetadataInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal__ctor_mA2208F1B26842FA7EF968DB3509ABC14CDBB9BF8 (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Storage.MetadataInternal::getCPtr(Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  MetadataInternal_getCPtr_m90DB4CA8CE4A6E66F7423F9AF1C5DC823C2885C6 (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataInternal_getCPtr_m90DB4CA8CE4A6E66F7423F9AF1C5DC823C2885C6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Storage.MetadataInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal_Finalize_m84058FFAD52EBD40F00F75A875936865552D76A4 (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * __this, const RuntimeMethod* method)
{
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.MetadataInternal::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Storage.MetadataInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MetadataInternal_Dispose_m6F2A0B6664306257FD59FC2BEF76DBB6D48F92E4 (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataInternal_Dispose_m6F2A0B6664306257FD59FC2BEF76DBB6D48F92E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_MetadataInternal_m722E78E62E12770B09320315CBC69C42A241FD24(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.MetadataInternal::Copy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * MetadataInternal_Copy_mDF42819C422E2D122738158D606A8BD973010E0C (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * __this, const RuntimeMethod* method)
{
	MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * V_0 = NULL;
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_0 = MetadataInternal_CopyCppObject_mAAD5E2F0807126BFFA92ED2235E65BE4188B13B4(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_1 = V_0;
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_2 = __this->get_storage_2();
		NullCheck(L_1);
		L_1->set_storage_2(L_2);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_3 = V_0;
		return L_3;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.MetadataInternal::CopyCppObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * MetadataInternal_CopyCppObject_mAAD5E2F0807126BFFA92ED2235E65BE4188B13B4 (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MetadataInternal_CopyCppObject_mAAD5E2F0807126BFFA92ED2235E65BE4188B13B4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_MetadataInternal_CopyCppObject_m519317BB7883D3EDEC4892B39662FDCDFF22CD50(L_0, /*hidden argument*/NULL);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_2 = (MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 *)il2cpp_codegen_object_new(MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_il2cpp_TypeInfo_var);
		MetadataInternal__ctor_mA2208F1B26842FA7EF968DB3509ABC14CDBB9BF8(L_2, (intptr_t)L_1, (bool)1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, MetadataInternal_CopyCppObject_mAAD5E2F0807126BFFA92ED2235E65BE4188B13B4_RuntimeMethod_var);
	}

IL_0022:
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_5 = V_0;
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
// System.Void Firebase.Storage.Internal.ModuleLogger::.ctor(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger__ctor_mE8D814C24F604C09F5D9A651BDB56DEF9ABB556E (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___parentLogger0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger__ctor_mE8D814C24F604C09F5D9A651BDB56DEF9ABB556E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A * L_0 = (List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A *)il2cpp_codegen_object_new(List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A_il2cpp_TypeInfo_var);
		List_1__ctor_mA92AA708E519485775F1D0E326DFC3425CC99D3D(L_0, /*hidden argument*/List_1__ctor_mA92AA708E519485775F1D0E326DFC3425CC99D3D_RuntimeMethod_var);
		__this->set_children_3(L_0);
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		int32_t L_1 = FirebaseApp_get_LogLevel_mF5210CA8F87660D4B3747792C00C98579142CAAF(/*hidden argument*/NULL);
		__this->set_logLevel_5(L_1);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var))->get_lockObject_0();
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_0028:
	try
	{ // begin try (depth: 1)
		{
			ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_4 = ___parentLogger0;
			if (L_4)
			{
				goto IL_0044;
			}
		}

IL_002e:
		{
			IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
			List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * L_5 = ((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var))->get_roots_1();
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
			WeakReference__ctor_m7795108201F1C4E5FB7BAA894AE8DA7D6CBCD6F0(L_6, __this, (bool)0, /*hidden argument*/NULL);
			NullCheck(L_5);
			List_1_Add_mB6897D4B3D836B0107EF00A49336597535967178(L_5, L_6, /*hidden argument*/List_1_Add_mB6897D4B3D836B0107EF00A49336597535967178_RuntimeMethod_var);
			goto IL_005c;
		}

IL_0044:
		{
			ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_7 = ___parentLogger0;
			__this->set_parent_2(L_7);
			ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_8 = __this->get_parent_2();
			NullCheck(L_8);
			List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A * L_9 = L_8->get_children_3();
			NullCheck(L_9);
			List_1_Add_m2710CA2DB82113D284343181B9F462898A2B0C83(L_9, __this, /*hidden argument*/List_1_Add_m2710CA2DB82113D284343181B9F462898A2B0C83_RuntimeMethod_var);
		}

IL_005c:
		{
			IL2CPP_LEAVE(0x68, FINALLY_0061);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0061;
	}

FINALLY_0061:
	{ // begin finally (depth: 1)
		RuntimeObject * L_10 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(97)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(97)
	{
		IL2CPP_JUMP_TBL(0x68, IL_0068)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0068:
	{
		return;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_Finalize_m88B1DDE29D4D6F4CF33FD166F51D5C504B9B71B5 (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger_Finalize_m88B1DDE29D4D6F4CF33FD166F51D5C504B9B71B5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_1 = NULL;
	Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7  V_2;
	memset((&V_2), 0, sizeof(V_2));
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 4);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
			RuntimeObject * L_0 = ((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var))->get_lockObject_0();
			V_0 = L_0;
			RuntimeObject * L_1 = V_0;
			Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
		}

IL_000c:
		try
		{ // begin try (depth: 2)
			{
				ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_2 = __this->get_parent_2();
				if (L_2)
				{
					goto IL_0077;
				}
			}

IL_0017:
			{
				IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
				List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * L_3 = ((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var))->get_roots_1();
				NullCheck(L_3);
				Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7  L_4 = List_1_GetEnumerator_m37E8EAFDF7065CE6B47C8D97497A1A1E9B0EBFE6(L_3, /*hidden argument*/List_1_GetEnumerator_m37E8EAFDF7065CE6B47C8D97497A1A1E9B0EBFE6_RuntimeMethod_var);
				V_2 = L_4;
			}

IL_0022:
			try
			{ // begin try (depth: 3)
				{
					goto IL_0053;
				}

IL_0027:
				{
					WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5 = Enumerator_get_Current_mF65B301C5D049845A6ECD5B80754E25F76B227EB_inline((Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 *)(&V_2), /*hidden argument*/Enumerator_get_Current_mF65B301C5D049845A6ECD5B80754E25F76B227EB_RuntimeMethod_var);
					V_1 = L_5;
					WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_6 = V_1;
					IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
					RuntimeObject * L_7 = FirebaseApp_WeakReferenceGetTarget_m4F195CE3072FD67139BDC76BAB407034828B2C3C(L_6, /*hidden argument*/NULL);
					V_3 = ((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *)IsInstClass((RuntimeObject*)L_7, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var));
					ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_8 = V_3;
					if ((!(((RuntimeObject*)(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *)L_8) == ((RuntimeObject*)(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *)__this))))
					{
						goto IL_0053;
					}
				}

IL_0042:
				{
					IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
					List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * L_9 = ((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var))->get_roots_1();
					WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_10 = V_1;
					NullCheck(L_9);
					List_1_Remove_m4D075AF8D24EA6C142A7431D2D4784F882D75B31(L_9, L_10, /*hidden argument*/List_1_Remove_m4D075AF8D24EA6C142A7431D2D4784F882D75B31_RuntimeMethod_var);
					goto IL_005f;
				}

IL_0053:
				{
					bool L_11 = Enumerator_MoveNext_mF3E688796FD192420538BA3193746ABE46E11C18((Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mF3E688796FD192420538BA3193746ABE46E11C18_RuntimeMethod_var);
					if (L_11)
					{
						goto IL_0027;
					}
				}

IL_005f:
				{
					IL2CPP_LEAVE(0x72, FINALLY_0064);
				}
			} // end try (depth: 3)
			catch(Il2CppExceptionWrapper& e)
			{
				__last_unhandled_exception = (Exception_t *)e.ex;
				goto FINALLY_0064;
			}

FINALLY_0064:
			{ // begin finally (depth: 3)
				Enumerator_Dispose_m6C512C3F9B96B0A6F943F8F79F065B2539D72F61((Enumerator_t32D35714E02A6D4361FAD5819F5FEDCD576CFDD7 *)(&V_2), /*hidden argument*/Enumerator_Dispose_m6C512C3F9B96B0A6F943F8F79F065B2539D72F61_RuntimeMethod_var);
				IL2CPP_END_FINALLY(100)
			} // end finally (depth: 3)
			IL2CPP_CLEANUP(100)
			{
				IL2CPP_JUMP_TBL(0x72, IL_0072)
				IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
			}

IL_0072:
			{
				goto IL_0090;
			}

IL_0077:
			{
				ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_12 = __this->get_parent_2();
				NullCheck(L_12);
				List_1_t61AB98610B2205D8B5E07EFC88D63678ABB1569A * L_13 = L_12->get_children_3();
				NullCheck(L_13);
				List_1_Remove_m11C54F533B343E973F475CFF0E9F862162A04BD3(L_13, __this, /*hidden argument*/List_1_Remove_m11C54F533B343E973F475CFF0E9F862162A04BD3_RuntimeMethod_var);
				__this->set_parent_2((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *)NULL);
			}

IL_0090:
			{
				IL2CPP_LEAVE(0x9C, FINALLY_0095);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_0095;
		}

FINALLY_0095:
		{ // begin finally (depth: 2)
			RuntimeObject * L_14 = V_0;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(149)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(149)
		{
			IL2CPP_JUMP_TBL(0x9C, IL_009c)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_009c:
		{
			IL2CPP_LEAVE(0xA8, FINALLY_00a1);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00a1;
	}

FINALLY_00a1:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(161)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(161)
	{
		IL2CPP_JUMP_TBL(0xA8, IL_00a8)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_00a8:
	{
		return;
	}
}
// Firebase.LogLevel Firebase.Storage.Internal.ModuleLogger::get_Level()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ModuleLogger_get_Level_m72D5C473200CBD2E5A9A3E7E5E762CCFC61527FF (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger_get_Level_m72D5C473200CBD2E5A9A3E7E5E762CCFC61527FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RuntimeObject * V_1 = NULL;
	int32_t V_2 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		int32_t L_0 = __this->get_logLevel_5();
		V_0 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
		RuntimeObject * L_1 = ((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var))->get_lockObject_0();
		V_1 = L_1;
		RuntimeObject * L_2 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_2, /*hidden argument*/NULL);
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_3 = __this->get_parent_2();
			if (!L_3)
			{
				goto IL_0033;
			}
		}

IL_001e:
		{
			ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_4 = __this->get_parent_2();
			NullCheck(L_4);
			int32_t L_5 = ModuleLogger_get_Level_m72D5C473200CBD2E5A9A3E7E5E762CCFC61527FF(L_4, /*hidden argument*/NULL);
			V_2 = L_5;
			int32_t L_6 = V_2;
			int32_t L_7 = V_0;
			if ((((int32_t)L_6) >= ((int32_t)L_7)))
			{
				goto IL_0033;
			}
		}

IL_0031:
		{
			int32_t L_8 = V_2;
			V_0 = L_8;
		}

IL_0033:
		{
			IL2CPP_LEAVE(0x3F, FINALLY_0038);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0038;
	}

FINALLY_0038:
	{ // begin finally (depth: 1)
		RuntimeObject * L_9 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_9, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(56)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(56)
	{
		IL2CPP_JUMP_TBL(0x3F, IL_003f)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003f:
	{
		int32_t L_10 = V_0;
		return L_10;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::set_Level(Firebase.LogLevel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_set_Level_m5BA3815BE5A9457A780F508962931E2DAC4AEBC6 (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_logLevel_5(L_0);
		return;
	}
}
// System.String Firebase.Storage.Internal.ModuleLogger::get_Tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ModuleLogger_get_Tag_m21D179CE4DF7AF1143E8ED00D4A370059D7C162A (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger_get_Tag_m21D179CE4DF7AF1143E8ED00D4A370059D7C162A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		String_t* L_0 = __this->get_tag_4();
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		String_t* L_1 = __this->get_tag_4();
		return L_1;
	}

IL_0012:
	{
		IL2CPP_RUNTIME_CLASS_INIT(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
		RuntimeObject * L_2 = ((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var))->get_lockObject_0();
		V_0 = L_2;
		RuntimeObject * L_3 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_3, /*hidden argument*/NULL);
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_4 = __this->get_parent_2();
			if (!L_4)
			{
				goto IL_003a;
			}
		}

IL_0029:
		{
			ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_5 = __this->get_parent_2();
			NullCheck(L_5);
			String_t* L_6 = ModuleLogger_get_Tag_m21D179CE4DF7AF1143E8ED00D4A370059D7C162A(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			IL2CPP_LEAVE(0x48, FINALLY_003f);
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x46, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(63)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x48, IL_0048)
		IL2CPP_JUMP_TBL(0x46, IL_0046)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0046:
	{
		return (String_t*)NULL;
	}

IL_0048:
	{
		String_t* L_8 = V_1;
		return L_8;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::set_Tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_set_Tag_m7ECACA8B7C965C422E171F9AD64A3CF377641A13 (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_tag_4(L_0);
		return;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::LogMessage(Firebase.LogLevel,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0 (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, int32_t ___level0, String_t* ___message1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B3_0 = NULL;
	int32_t G_B3_1 = 0;
	String_t* G_B2_0 = NULL;
	int32_t G_B2_1 = 0;
	String_t* G_B4_0 = NULL;
	String_t* G_B4_1 = NULL;
	int32_t G_B4_2 = 0;
	{
		int32_t L_0 = ___level0;
		int32_t L_1 = ModuleLogger_get_Level_m72D5C473200CBD2E5A9A3E7E5E762CCFC61527FF(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_2 = ___level0;
		String_t* L_3 = ModuleLogger_get_Tag_m21D179CE4DF7AF1143E8ED00D4A370059D7C162A(__this, /*hidden argument*/NULL);
		G_B2_0 = _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
		G_B2_1 = L_2;
		if (!L_3)
		{
			G_B3_0 = _stringLiteral1FB9018D8BFC0FACF068B1067EF9E96C35FED1FE;
			G_B3_1 = L_2;
			goto IL_0032;
		}
	}
	{
		String_t* L_4 = ModuleLogger_get_Tag_m21D179CE4DF7AF1143E8ED00D4A370059D7C162A(__this, /*hidden argument*/NULL);
		String_t* L_5 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_4, _stringLiteral2386E77CF610F786B06A91AF2C1B3FD2282D2745, /*hidden argument*/NULL);
		G_B4_0 = L_5;
		G_B4_1 = G_B2_0;
		G_B4_2 = G_B2_1;
		goto IL_0037;
	}

IL_0032:
	{
		String_t* L_6 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		G_B4_0 = L_6;
		G_B4_1 = G_B3_0;
		G_B4_2 = G_B3_1;
	}

IL_0037:
	{
		String_t* L_7 = ___message1;
		String_t* L_8 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(G_B4_1, G_B4_0, L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(G_B4_2, L_8, /*hidden argument*/NULL);
	}

IL_0042:
	{
		return;
	}
}
// System.Void Firebase.Storage.Internal.ModuleLogger::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ModuleLogger__cctor_m7672488A611F1EEBD494C675ABF9CD052011F346 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ModuleLogger__cctor_m7672488A611F1EEBD494C675ABF9CD052011F346_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject * L_0 = (RuntimeObject *)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(L_0, /*hidden argument*/NULL);
		((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var))->set_lockObject_0(L_0);
		List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 * L_1 = (List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4 *)il2cpp_codegen_object_new(List_1_t5D5EB1A9048F1180561855E6150AA537292D77C4_il2cpp_TypeInfo_var);
		List_1__ctor_mABCAEBACF4789B353E5F58E05ABB03419BFA12F2(L_1, /*hidden argument*/List_1__ctor_mABCAEBACF4789B353E5F58E05ABB03419BFA12F2_RuntimeMethod_var);
		((ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_StaticFields*)il2cpp_codegen_static_fields_for(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var))->set_roots_1(L_1);
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MonitorControllerInternal_OnPaused_m6E500BCB6FF2708CD36D916E22CE29966A6B077D(intptr_t ___controllerPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MonitorControllerInternal_OnPaused_m6E500BCB6FF2708CD36D916E22CE29966A6B077D(___controllerPtr0, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_MonitorControllerInternal_OnProgress_mDB71A8D606636D726A8462DD3C0FE7B66476C288(intptr_t ___controllerPtr0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Managed method invocation
	MonitorControllerInternal_OnProgress_mDB71A8D606636D726A8462DD3C0FE7B66476C288(___controllerPtr0, NULL);

}
// System.Void Firebase.Storage.MonitorControllerInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__ctor_m4F9D98104BA0962D294B377AF03495B4A16C9E55 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::.ctor(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__ctor_m2015E8382F85E76DB9FA75786D69E3E803072CB9 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___storage_reference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal__ctor_m2015E8382F85E76DB9FA75786D69E3E803072CB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_0 = ___storage_reference0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1 = StorageReferenceInternal_getCPtr_m19196AA4E38CCA3D0135FA7810763A335B19BCEC(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_2 = StorageInternalPINVOKE_Firebase_Storage_new_MonitorControllerInternal_mBE183D623E231AE1DE6D693376B600C0C561B160(L_1, /*hidden argument*/NULL);
		MonitorControllerInternal__ctor_m4F9D98104BA0962D294B377AF03495B4A16C9E55(__this, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, MonitorControllerInternal__ctor_m2015E8382F85E76DB9FA75786D69E3E803072CB9_RuntimeMethod_var);
	}

IL_0022:
	{
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Storage.MonitorControllerInternal::getCPtr(Firebase.Storage.MonitorControllerInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  MonitorControllerInternal_getCPtr_m8CFBA5FC9CE3DCACBED297C78AB0D31E69BA8423 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_getCPtr_m8CFBA5FC9CE3DCACBED297C78AB0D31E69BA8423_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_Finalize_mEA6758FA5DC50714B959D9723D16ADC2A680B668 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, const RuntimeMethod* method)
{
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.MonitorControllerInternal::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_Dispose_mD43C0C92185EFD1CE922A7AC64037DFA299CFE18 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_Dispose_mD43C0C92185EFD1CE922A7AC64037DFA299CFE18_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0082;
			}
		}

IL_0026:
		{
			IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
			Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * L_5 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
			V_1 = L_5;
			RuntimeObject * L_6 = V_1;
			Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_6, /*hidden argument*/NULL);
		}

IL_0032:
		try
		{ // begin try (depth: 2)
			IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
			Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * L_7 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_8 = __this->get_address_of_swigCPtr_0();
			intptr_t L_9 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_8, /*hidden argument*/NULL);
			NullCheck(L_7);
			Dictionary_2_Remove_mB1A6EC5F52415194B87D88ABD8D605FF62BD9548(L_7, (intptr_t)L_9, /*hidden argument*/Dictionary_2_Remove_mB1A6EC5F52415194B87D88ABD8D605FF62BD9548_RuntimeMethod_var);
			IL2CPP_LEAVE(0x54, FINALLY_004d);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t *)e.ex;
			goto FINALLY_004d;
		}

FINALLY_004d:
		{ // begin finally (depth: 2)
			RuntimeObject * L_10 = V_1;
			Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_10, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(77)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(77)
		{
			IL2CPP_JUMP_TBL(0x54, IL_0054)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		}

IL_0054:
		{
			bool L_11 = __this->get_swigCMemOwn_1();
			if (!L_11)
			{
				goto IL_0071;
			}
		}

IL_005f:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_12 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_MonitorControllerInternal_m782082791AF219A56AA57E27D91579E0ABFA4033(L_12, /*hidden argument*/NULL);
		}

IL_0071:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_13;
			memset((&L_13), 0, sizeof(L_13));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_13), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_13);
		}

IL_0082:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x94, FINALLY_008d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_008d;
	}

FINALLY_008d:
	{ // begin finally (depth: 1)
		RuntimeObject * L_14 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_14, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(141)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(141)
	{
		IL2CPP_JUMP_TBL(0x94, IL_0094)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0094:
	{
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::add_Progress(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_add_Progress_m5D0A16DCB4FC81EBA714D7D8EE99B9F6CB06E46A (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_add_Progress_m5D0A16DCB4FC81EBA714D7D8EE99B9F6CB06E46A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_Progress_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_Progress_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_m631D10D6CFF81AB4F237B9D549B235A54F45FA55(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::remove_Progress(System.EventHandler`1<System.EventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_remove_Progress_m2234B667AA8E1454FDEB17EF6B939CF55AB134DB (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_remove_Progress_m2234B667AA8E1454FDEB17EF6B939CF55AB134DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_0 = NULL;
	EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * V_1 = NULL;
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_0 = __this->get_Progress_3();
		V_0 = L_0;
	}

IL_0007:
	{
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = V_0;
		V_1 = L_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 ** L_2 = __this->get_address_of_Progress_3();
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = V_1;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m8B4AD17254118B2904720D55C9B34FB3DCCBD7D4(L_3, L_4, /*hidden argument*/NULL);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_6 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_7 = InterlockedCompareExchangeImpl<EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *>((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 **)L_2, ((EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)CastclassSealed((RuntimeObject*)L_5, EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_8 = V_0;
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_9 = V_1;
		if ((!(((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_8) == ((RuntimeObject*)(EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.MonitorControllerInternal::Create(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * MonitorControllerInternal_Create_m1140BF6BC694E4C12D2B84E01E989653FC47D64B (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___storageReference0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_Create_m1140BF6BC694E4C12D2B84E01E989653FC47D64B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * V_0 = NULL;
	intptr_t V_1;
	memset((&V_1), 0, sizeof(V_1));
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  V_2;
	memset((&V_2), 0, sizeof(V_2));
	RuntimeObject * V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * G_B5_0 = NULL;
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * G_B4_0 = NULL;
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * G_B7_0 = NULL;
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * G_B6_0 = NULL;
	{
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_0 = (U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 *)il2cpp_codegen_object_new(U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91_il2cpp_TypeInfo_var);
		U3CCreateU3Ec__AnonStorey0__ctor_m7D8618D1408D36D7693BC26234BB53FBE8373164(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_1 = V_0;
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_2 = ___storageReference0;
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_3 = (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 *)il2cpp_codegen_object_new(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		MonitorControllerInternal__ctor_m2015E8382F85E76DB9FA75786D69E3E803072CB9(L_3, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		L_1->set_proxy_0(L_3);
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_4 = V_0;
		NullCheck(L_4);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_5 = L_4->get_proxy_0();
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_6 = ___storageReference0;
		NullCheck(L_5);
		L_5->set_storageReference_6(L_6);
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_7 = V_0;
		NullCheck(L_7);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_8 = L_7->get_proxy_0();
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_9 = MonitorControllerInternal_getCPtr_m8CFBA5FC9CE3DCACBED297C78AB0D31E69BA8423(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		intptr_t L_10 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)(&V_2), /*hidden argument*/NULL);
		V_1 = (intptr_t)L_10;
		Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * L_11 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
		V_3 = L_11;
		RuntimeObject * L_12 = V_3;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_12, /*hidden argument*/NULL);
	}

IL_003e:
	try
	{ // begin try (depth: 1)
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * L_13 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
		intptr_t L_14 = V_1;
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_15 = V_0;
		NullCheck(L_15);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_16 = L_15->get_proxy_0();
		WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_17 = (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 *)il2cpp_codegen_object_new(WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76_il2cpp_TypeInfo_var);
		WeakReference__ctor_m7795108201F1C4E5FB7BAA894AE8DA7D6CBCD6F0(L_17, L_16, (bool)0, /*hidden argument*/NULL);
		NullCheck(L_13);
		Dictionary_2_set_Item_mF007077FE1D3B13F3DA69B4205011879E6AC84AE(L_13, (intptr_t)L_14, L_17, /*hidden argument*/Dictionary_2_set_Item_mF007077FE1D3B13F3DA69B4205011879E6AC84AE_RuntimeMethod_var);
		IL2CPP_LEAVE(0x61, FINALLY_005a);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005a;
	}

FINALLY_005a:
	{ // begin finally (depth: 1)
		RuntimeObject * L_18 = V_3;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_18, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(90)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(90)
	{
		IL2CPP_JUMP_TBL(0x61, IL_0061)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0061:
	{
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_19 = V_0;
		NullCheck(L_19);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_20 = L_19->get_proxy_0();
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_21 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_22 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_22, L_21, (intptr_t)((intptr_t)U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m42BB613D76FD25D6E6218B9718536EA82506A46A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_20);
		L_20->set_forwardToPausedEvent_4(L_22);
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_23 = V_0;
		NullCheck(L_23);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_24 = L_23->get_proxy_0();
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * L_25 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		G_B4_0 = L_24;
		if (L_25)
		{
			G_B5_0 = L_24;
			goto IL_0096;
		}
	}
	{
		MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * L_26 = (MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 *)il2cpp_codegen_object_new(MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate__ctor_mF9E87B8DAD63604453874B596847AB650E7335A3(L_26, NULL, (intptr_t)((intptr_t)MonitorControllerInternal_OnPaused_m6E500BCB6FF2708CD36D916E22CE29966A6B077D_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache0_8(L_26);
		G_B5_0 = G_B4_0;
	}

IL_0096:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * L_27 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache0_8();
		intptr_t L_28 = V_1;
		NullCheck(G_B5_0);
		MonitorControllerInternal_SetPausedEvent_mDF53613DCBE762F739808F13F09B46EB0BF33D14(G_B5_0, L_27, (intptr_t)L_28, /*hidden argument*/NULL);
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_29 = V_0;
		NullCheck(L_29);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_30 = L_29->get_proxy_0();
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_31 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_32 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_32, L_31, (intptr_t)((intptr_t)U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m7872BFB32CE8E08BDD427E4B68E8A93FB97C1BAC_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_30);
		L_30->set_forwardToProgressEvent_5(L_32);
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_33 = V_0;
		NullCheck(L_33);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_34 = L_33->get_proxy_0();
		MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * L_35 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		G_B6_0 = L_34;
		if (L_35)
		{
			G_B7_0 = L_34;
			goto IL_00d6;
		}
	}
	{
		MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * L_36 = (MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 *)il2cpp_codegen_object_new(MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate__ctor_mF9E87B8DAD63604453874B596847AB650E7335A3(L_36, NULL, (intptr_t)((intptr_t)MonitorControllerInternal_OnProgress_mDB71A8D606636D726A8462DD3C0FE7B66476C288_RuntimeMethod_var), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->set_U3CU3Ef__mgU24cache1_9(L_36);
		G_B7_0 = G_B6_0;
	}

IL_00d6:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * L_37 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_U3CU3Ef__mgU24cache1_9();
		intptr_t L_38 = V_1;
		NullCheck(G_B7_0);
		MonitorControllerInternal_SetProgressEvent_m6555A4476F3B9BB68820EE8A049699123BC4DFAB(G_B7_0, L_37, (intptr_t)L_38, /*hidden argument*/NULL);
		U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * L_39 = V_0;
		NullCheck(L_39);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_40 = L_39->get_proxy_0();
		return L_40;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::OnPaused(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_OnPaused_m6E500BCB6FF2708CD36D916E22CE29966A6B077D (intptr_t ___controllerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_OnPaused_m6E500BCB6FF2708CD36D916E22CE29966A6B077D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C * V_0 = NULL;
	{
		U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C * L_0 = (U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C *)il2cpp_codegen_object_new(U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C_il2cpp_TypeInfo_var);
		U3COnPausedU3Ec__AnonStorey1__ctor_m1EB3277C430263727B8E641ACD952FADCEA1A7CD(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C * L_1 = V_0;
		intptr_t L_2 = ___controllerPtr0;
		NullCheck(L_1);
		L_1->set_controllerPtr_0((intptr_t)L_2);
		U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C * L_3 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, L_3, (intptr_t)((intptr_t)U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_mFF44F0F1536A8782007269A2CF52DDDB723C8D8E_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::OnProgress(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_OnProgress_mDB71A8D606636D726A8462DD3C0FE7B66476C288 (intptr_t ___controllerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_OnProgress_mDB71A8D606636D726A8462DD3C0FE7B66476C288_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1 * V_0 = NULL;
	{
		U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1 * L_0 = (U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1 *)il2cpp_codegen_object_new(U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1_il2cpp_TypeInfo_var);
		U3COnProgressU3Ec__AnonStorey2__ctor_mA2BC6F1809F36186D131D8539C1AE524DE79C04D(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1 * L_1 = V_0;
		intptr_t L_2 = ___controllerPtr0;
		NullCheck(L_1);
		L_1->set_controllerPtr_0((intptr_t)L_2);
		U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1 * L_3 = V_0;
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_4, L_3, (intptr_t)((intptr_t)U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_m4CC08DAA01CFC4AB1E7D03B3F52B93FD0D87F4B0_RuntimeMethod_var), /*hidden argument*/NULL);
		ExceptionAggregator_Wrap_m24EBDCC97F8D88B56ADBD17EEF69F25CB3839415(L_4, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.MonitorControllerInternal Firebase.Storage.MonitorControllerInternal::ProxyFromCPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * MonitorControllerInternal_ProxyFromCPtr_m2A8A8FC568FC32B99E2C4EA34B36BA9746DD7BFF (intptr_t ___controllerPtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_ProxyFromCPtr_m2A8A8FC568FC32B99E2C4EA34B36BA9746DD7BFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * L_0 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
		V_1 = L_0;
		RuntimeObject * L_1 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
			Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * L_2 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->get_cPtrsToProxies_7();
			intptr_t L_3 = ___controllerPtr0;
			NullCheck(L_2);
			bool L_4 = Dictionary_2_TryGetValue_mAD449DBAABB82E3F179221AC5C3F4C4D059331D4(L_2, (intptr_t)L_3, (WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mAD449DBAABB82E3F179221AC5C3F4C4D059331D4_RuntimeMethod_var);
			if (!L_4)
			{
				goto IL_002f;
			}
		}

IL_001e:
		{
			WeakReference_tB8558D16C98417FD98C920C42C0CC5C9FF825C76 * L_5 = V_0;
			IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
			RuntimeObject * L_6 = FirebaseApp_WeakReferenceGetTarget_m4F195CE3072FD67139BDC76BAB407034828B2C3C(L_5, /*hidden argument*/NULL);
			V_2 = ((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 *)IsInstClass((RuntimeObject*)L_6, MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var));
			IL2CPP_LEAVE(0x3D, FINALLY_0034);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 *)NULL;
	}

IL_003d:
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_8 = V_2;
		return L_8;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::RegisterCancellationToken(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_RegisterCancellationToken_mC93001C569376B80E9283B834218877AFBD3424D (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_RegisterCancellationToken_mC93001C569376B80E9283B834218877AFBD3424D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_0 = (Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 *)il2cpp_codegen_object_new(Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6_il2cpp_TypeInfo_var);
		Action__ctor_m07BE5EE8A629FBBA52AE6356D57A0D371BE2574B(L_0, __this, (intptr_t)((intptr_t)MonitorControllerInternal_U3CRegisterCancellationTokenU3Em__0_mE96C8370C568DB8323A65170E72E063DEE46F91B_RuntimeMethod_var), /*hidden argument*/NULL);
		CancellationToken_Register_m6C186260806A5918D17E0B3A5AF2520D8AFF0787((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::SetPausedEvent(Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_SetPausedEvent_mDF53613DCBE762F739808F13F09B46EB0BF33D14 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___arg00, intptr_t ___event_data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_SetPausedEvent_mDF53613DCBE762F739808F13F09B46EB0BF33D14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * L_1 = ___arg00;
		intptr_t L_2 = ___event_data1;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetPausedEvent_m334C1361E3730C9038EA21049FFC99A3B8BC5BAA(L_0, L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, MonitorControllerInternal_SetPausedEvent_mDF53613DCBE762F739808F13F09B46EB0BF33D14_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::SetProgressEvent(Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_SetProgressEvent_m6555A4476F3B9BB68820EE8A049699123BC4DFAB (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___arg00, intptr_t ___event_data1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_SetProgressEvent_m6555A4476F3B9BB68820EE8A049699123BC4DFAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * L_1 = ___arg00;
		intptr_t L_2 = ___event_data1;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetProgressEvent_m0548BCFB6FC5D00530BB621F5BE9D60C8E11F36F(L_0, L_1, (intptr_t)L_2, /*hidden argument*/NULL);
		bool L_3 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001d;
		}
	}
	{
		Exception_t * L_4 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, MonitorControllerInternal_SetProgressEvent_m6555A4476F3B9BB68820EE8A049699123BC4DFAB_RuntimeMethod_var);
	}

IL_001d:
	{
		return;
	}
}
// Firebase.Storage.ControllerInternal Firebase.Storage.MonitorControllerInternal::get_Controller()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * MonitorControllerInternal_get_Controller_m789601B36E247CC221E26783BD82DE9425294C29 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_get_Controller_m789601B36E247CC221E26783BD82DE9425294C29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * V_1 = NULL;
	ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * G_B3_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_Controller_get_m962C17247887896E4807E28F1CF86149D2B125AF(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		intptr_t L_2 = V_0;
		bool L_3 = IntPtr_op_Equality_mD94F3FE43A65684EFF984A7B95E70D2520C0AC73((intptr_t)L_2, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		G_B3_0 = ((ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 *)(NULL));
		goto IL_0029;
	}

IL_0022:
	{
		intptr_t L_4 = V_0;
		ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * L_5 = (ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 *)il2cpp_codegen_object_new(ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8_il2cpp_TypeInfo_var);
		ControllerInternal__ctor_mE950689CB83D0659B476F653CC604FBA5F648D68(L_5, (intptr_t)L_4, (bool)0, /*hidden argument*/NULL);
		G_B3_0 = L_5;
	}

IL_0029:
	{
		V_1 = G_B3_0;
		bool L_6 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_003a;
		}
	}
	{
		Exception_t * L_7 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, MonitorControllerInternal_get_Controller_m789601B36E247CC221E26783BD82DE9425294C29_RuntimeMethod_var);
	}

IL_003a:
	{
		ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * L_8 = V_1;
		return L_8;
	}
}
// System.Int64 Firebase.Storage.MonitorControllerInternal::get_BytesTransferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonitorControllerInternal_get_BytesTransferred_m0A2F0CC3FD7967B5D3F9011B21153C34D3A416D7 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_get_BytesTransferred_m0A2F0CC3FD7967B5D3F9011B21153C34D3A416D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		int64_t L_1 = StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_BytesTransferred_get_mEBB71DDF98EE231462A9E5D90CF8AD999DC99EB4(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, MonitorControllerInternal_get_BytesTransferred_m0A2F0CC3FD7967B5D3F9011B21153C34D3A416D7_RuntimeMethod_var);
	}

IL_001c:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Int64 Firebase.Storage.MonitorControllerInternal::get_TotalByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t MonitorControllerInternal_get_TotalByteCount_m0F02F962C5E95B89DE97AE1D30DEC38251AB4B80 (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal_get_TotalByteCount_m0F02F962C5E95B89DE97AE1D30DEC38251AB4B80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int64_t V_0 = 0;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		int64_t L_1 = StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_TotalByteCount_get_m204054FC629671DDF1649BD41E49CE679F9A46EB(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, MonitorControllerInternal_get_TotalByteCount_m0F02F962C5E95B89DE97AE1D30DEC38251AB4B80_RuntimeMethod_var);
	}

IL_001c:
	{
		int64_t L_4 = V_0;
		return L_4;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal__cctor_mF4AD36E1359DE11396985E646205F9518BC95B80 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerInternal__cctor_mF4AD36E1359DE11396985E646205F9518BC95B80_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 * L_0 = (Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715 *)il2cpp_codegen_object_new(Dictionary_2_tCC742538844FC8A6EBFCB0FE2E02CB2D88A8F715_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m65F6790350CA62B5AB371DD62E55278707281A2B(L_0, /*hidden argument*/Dictionary_2__ctor_m65F6790350CA62B5AB371DD62E55278707281A2B_RuntimeMethod_var);
		((MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_StaticFields*)il2cpp_codegen_static_fields_for(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var))->set_cPtrsToProxies_7(L_0);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal::<RegisterCancellationToken>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerInternal_U3CRegisterCancellationTokenU3Em__0_mE96C8370C568DB8323A65170E72E063DEE46F91B (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * __this, const RuntimeMethod* method)
{
	{
		ControllerInternal_t7B8A15CC3DDFEF26D283E6839D0E06FBFAEEBBE8 * L_0 = MonitorControllerInternal_get_Controller_m789601B36E247CC221E26783BD82DE9425294C29(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ControllerInternal_Cancel_m09455A3E886138D02F2AB5CBCDB0F59D06837600(L_0, /*hidden argument*/NULL);
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
// System.Void Firebase.Storage.StorageException::.ctor(System.Int32,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException__ctor_m7A56D2F34A8578B2D30D5B5D56AB3DAD7AAF1310 (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, int32_t ___errorCode0, int32_t ___httpResultCode1, String_t* ___errorMessage2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageException__ctor_m7A56D2F34A8578B2D30D5B5D56AB3DAD7AAF1310_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * G_B2_0 = NULL;
	StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * G_B1_0 = NULL;
	String_t* G_B3_0 = NULL;
	StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * G_B3_1 = NULL;
	{
		String_t* L_0 = ___errorMessage2;
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		G_B1_0 = __this;
		if (!L_1)
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		int32_t L_2 = ___errorCode0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var);
		String_t* L_3 = StorageException_GetErrorMessageForCode_m235C1EB75E22ED990C2C3469BFB3866F3ECC6F9A(L_2, /*hidden argument*/NULL);
		G_B3_0 = L_3;
		G_B3_1 = G_B1_0;
		goto IL_0018;
	}

IL_0017:
	{
		String_t* L_4 = ___errorMessage2;
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0018:
	{
		NullCheck(G_B3_1);
		IL2CPP_RUNTIME_CLASS_INIT(Exception_t_il2cpp_TypeInfo_var);
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(G_B3_1, G_B3_0, /*hidden argument*/NULL);
		int32_t L_5 = ___errorCode0;
		StorageException_set_ErrorCode_m7F1E6499E95BC4CE92F61396018B18069FD9FD10_inline(__this, L_5, /*hidden argument*/NULL);
		int32_t L_6 = ___httpResultCode1;
		StorageException_set_HttpResultCode_m9E9AEFF8E15CE1DE5F195354BFE11B973D41816B_inline(__this, L_6, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.StorageException Firebase.Storage.StorageException::CreateFromException(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * StorageException_CreateFromException_m324DF221BCB586CFA8E1229F6F36D7DBFD373D95 (Exception_t * ___exception0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageException_CreateFromException_m324DF221BCB586CFA8E1229F6F36D7DBFD373D95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * V_0 = NULL;
	AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * V_1 = NULL;
	FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * V_2 = NULL;
	String_t* V_3 = NULL;
	Exception_t * V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * V_6 = NULL;
	StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * V_7 = NULL;
	int32_t V_8 = 0;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 3);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Exception_t * L_0 = ___exception0;
		V_1 = ((AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 *)CastclassClass((RuntimeObject*)L_0, AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1_il2cpp_TypeInfo_var));
		V_2 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)NULL;
		V_3 = (String_t*)NULL;
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_1 = V_1;
		NullCheck(L_1);
		ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * L_2 = AggregateException_get_InnerExceptions_m2020FC3A2334DDB72FEBFB2BF4CFE088FF83FEFE_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		RuntimeObject* L_3 = ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983(L_2, /*hidden argument*/ReadOnlyCollection_1_GetEnumerator_mE42E479B8A2A33528AD4D666E2BF9740CE5F1983_RuntimeMethod_var);
		V_5 = L_3;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0052;
		}

IL_001d:
		{
			RuntimeObject* L_4 = V_5;
			NullCheck(L_4);
			Exception_t * L_5 = InterfaceFuncInvoker0< Exception_t * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<System.Exception>::get_Current() */, IEnumerator_1_t6539F48B1663C43B3427FA51934B89F85F6D3898_il2cpp_TypeInfo_var, L_4);
			V_4 = L_5;
			Exception_t * L_6 = V_4;
			V_6 = ((StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A *)IsInstSealed((RuntimeObject*)L_6, StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var));
			Exception_t * L_7 = V_4;
			V_2 = ((FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)IsInstSealed((RuntimeObject*)L_7, FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var));
			StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * L_8 = V_6;
			if (!L_8)
			{
				goto IL_0047;
			}
		}

IL_003e:
		{
			StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * L_9 = V_6;
			V_7 = L_9;
			IL2CPP_LEAVE(0xC5, FINALLY_0063);
		}

IL_0047:
		{
			FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = V_2;
			if (!L_10)
			{
				goto IL_0052;
			}
		}

IL_004d:
		{
			goto IL_005e;
		}

IL_0052:
		{
			RuntimeObject* L_11 = V_5;
			NullCheck(L_11);
			bool L_12 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_11);
			if (L_12)
			{
				goto IL_001d;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x72, FINALLY_0063);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0063;
	}

FINALLY_0063:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_13 = V_5;
			if (!L_13)
			{
				goto IL_0071;
			}
		}

IL_006a:
		{
			RuntimeObject* L_14 = V_5;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_14);
		}

IL_0071:
		{
			IL2CPP_END_FINALLY(99)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(99)
	{
		IL2CPP_JUMP_TBL(0xC5, IL_00c5)
		IL2CPP_JUMP_TBL(0x72, IL_0072)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0072:
	{
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_15 = V_2;
		if (L_15)
		{
			goto IL_008a;
		}
	}
	{
		Exception_t * L_16 = ___exception0;
		NullCheck(L_16);
		String_t* L_17 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_16);
		V_3 = L_17;
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var);
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_18 = ((StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var))->get_unknownError_18();
		V_0 = L_18;
		goto IL_00ae;
	}

IL_008a:
	{
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_19 = V_2;
		NullCheck(L_19);
		String_t* L_20 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_19);
		V_3 = L_20;
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_21 = ((StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var))->get_errorToStorageErrorAndHttpStatusCode_17();
		FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = FirebaseException_get_ErrorCode_mA7E9CF1AB755AEEE49032E4AC4A7A253C3735F60_inline(L_22, /*hidden argument*/NULL);
		NullCheck(L_21);
		bool L_24 = Dictionary_2_TryGetValue_m949CD363E60929CBCA66B51BCCA4EDF8F0EA4B12(L_21, L_23, (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_m949CD363E60929CBCA66B51BCCA4EDF8F0EA4B12_RuntimeMethod_var);
		if (L_24)
		{
			goto IL_00ae;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var);
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_25 = ((StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var))->get_unknownError_18();
		V_0 = L_25;
	}

IL_00ae:
	{
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_26 = V_0;
		NullCheck(L_26);
		int32_t L_27 = Tuple_2_get_Item2_mAE33F3B65B2728E482F543B8BB3F76506B91B9D2_inline(L_26, /*hidden argument*/Tuple_2_get_Item2_mAE33F3B65B2728E482F543B8BB3F76506B91B9D2_RuntimeMethod_var);
		V_8 = L_27;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = Tuple_2_get_Item1_m98F4AF0ED6DFBCD88D8F3531AD46A8FDD67E19E8_inline(L_28, /*hidden argument*/Tuple_2_get_Item1_m98F4AF0ED6DFBCD88D8F3531AD46A8FDD67E19E8_RuntimeMethod_var);
		int32_t L_30 = V_8;
		String_t* L_31 = V_3;
		StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * L_32 = (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A *)il2cpp_codegen_object_new(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var);
		StorageException__ctor_m7A56D2F34A8578B2D30D5B5D56AB3DAD7AAF1310(L_32, L_29, L_30, L_31, /*hidden argument*/NULL);
		return L_32;
	}

IL_00c5:
	{
		StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * L_33 = V_7;
		return L_33;
	}
}
// System.Int32 Firebase.Storage.StorageException::get_ErrorCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StorageException_get_ErrorCode_m559860A50ACD01BEFAE8B80950624689DE744368 (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_19();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageException::set_ErrorCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException_set_ErrorCode_m7F1E6499E95BC4CE92F61396018B18069FD9FD10 (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_19(L_0);
		return;
	}
}
// System.Void Firebase.Storage.StorageException::set_HttpResultCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException_set_HttpResultCode_m9E9AEFF8E15CE1DE5F195354BFE11B973D41816B (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHttpResultCodeU3Ek__BackingField_20(L_0);
		return;
	}
}
// System.String Firebase.Storage.StorageException::GetErrorMessageForCode(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageException_GetErrorMessageForCode_m235C1EB75E22ED990C2C3469BFB3866F3ECC6F9A (int32_t ___errorCode0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageException_GetErrorMessageForCode_m235C1EB75E22ED990C2C3469BFB3866F3ECC6F9A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___errorCode0;
		switch (((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)13013))))
		{
			case 0:
			{
				goto IL_007b;
			}
			case 1:
			{
				goto IL_0075;
			}
			case 2:
			{
				goto IL_006f;
			}
			case 3:
			{
				goto IL_0069;
			}
		}
	}
	{
		int32_t L_1 = ___errorCode0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)-13031))))
		{
			goto IL_0093;
		}
	}
	{
		int32_t L_2 = ___errorCode0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-13030))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t L_3 = ___errorCode0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)-13021))))
		{
			goto IL_0087;
		}
	}
	{
		int32_t L_4 = ___errorCode0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)-13020))))
		{
			goto IL_0081;
		}
	}
	{
		int32_t L_5 = ___errorCode0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)-13040))))
		{
			goto IL_0099;
		}
	}
	{
		int32_t L_6 = ___errorCode0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)-13000))))
		{
			goto IL_0063;
		}
	}
	{
		goto IL_009f;
	}

IL_0063:
	{
		return _stringLiteral48D4D8ED8E68AFC8225395CC9DDC336D97D83573;
	}

IL_0069:
	{
		return _stringLiteral21ACA7A9F2007E52DEC2066F7037F9F7456B3B91;
	}

IL_006f:
	{
		return _stringLiteral3D736BA169A8DC89DC353AD0EAA96FE683CA1B2D;
	}

IL_0075:
	{
		return _stringLiteralE452FBB4FDE6913F8CF541DF8BB1626D735FD33E;
	}

IL_007b:
	{
		return _stringLiteral51269C898D1575314B2DB88966C1E86552B6863A;
	}

IL_0081:
	{
		return _stringLiteral407476E0245E9411EC476740A1368498AC28A67F;
	}

IL_0087:
	{
		return _stringLiteralB121E7338C61F36A1C41A66ACE3BC040CD083E7D;
	}

IL_008d:
	{
		return _stringLiteral14EACC5384CECC75A8982A1F46DE55705CB54DFD;
	}

IL_0093:
	{
		return _stringLiteral9BBCAE8C0C6F0957BF6DE7D5A947F5C084B3F4A7;
	}

IL_0099:
	{
		return _stringLiteral9FE7C8888EB04B126D755228521F465454FD6B21;
	}

IL_009f:
	{
		return _stringLiteral48D4D8ED8E68AFC8225395CC9DDC336D97D83573;
	}
}
// System.Void Firebase.Storage.StorageException::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageException__cctor_mD116A0538265E2D3AA1A30B3B42C35846F27FB12 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageException__cctor_mD116A0538265E2D3AA1A30B3B42C35846F27FB12_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * V_0 = NULL;
	{
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_0 = (Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF *)il2cpp_codegen_object_new(Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m0BC474EDF4502EC7B33C88B37D646A9FBBD67B5F(L_0, /*hidden argument*/Dictionary_2__ctor_m0BC474EDF4502EC7B33C88B37D646A9FBBD67B5F_RuntimeMethod_var);
		V_0 = L_0;
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_1 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_2 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_2, ((int32_t)-13010), ((int32_t)404), /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_1);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_1, 2, L_2, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_3 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_4 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_4, ((int32_t)-13011), ((int32_t)404), /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_3);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_3, 3, L_4, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_5 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_6 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_6, ((int32_t)-13012), ((int32_t)404), /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_5);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_5, 4, L_6, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_7 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_8 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_8, ((int32_t)-13012), ((int32_t)503), /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_7);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_7, 5, L_8, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_9 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_10 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_10, ((int32_t)-13020), ((int32_t)401), /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_9);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_9, 6, L_10, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_11 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_12 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_12, ((int32_t)-13021), ((int32_t)401), /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_11);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_11, 7, L_12, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_13 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_14 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_14, ((int32_t)-13030), ((int32_t)409), /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_13);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_13, 8, L_14, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_15 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_16 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_16, ((int32_t)-13031), ((int32_t)409), /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_15);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_15, ((int32_t)9), L_16, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_17 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_18 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_18, ((int32_t)-13000), 0, /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_17);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_17, ((int32_t)10), L_18, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_19 = V_0;
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_20 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_20, ((int32_t)-13040), 0, /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		NullCheck(L_19);
		Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25(L_19, ((int32_t)11), L_20, /*hidden argument*/Dictionary_2_Add_m88CA65B1B64D360BAEEF26912F6A146352FA8A25_RuntimeMethod_var);
		Dictionary_2_t30AA331ED6DC2526EC65A07EBB7072D14E0C79AF * L_21 = V_0;
		((StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var))->set_errorToStorageErrorAndHttpStatusCode_17(L_21);
		Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 * L_22 = (Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5 *)il2cpp_codegen_object_new(Tuple_2_t30A88842E40206A7D11C0C21B2FD939BF4C053A5_il2cpp_TypeInfo_var);
		Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595(L_22, ((int32_t)-13000), ((int32_t)300), /*hidden argument*/Tuple_2__ctor_mE1A23285116AE557C78B09CDA5DD3EF69D137595_RuntimeMethod_var);
		((StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_StaticFields*)il2cpp_codegen_static_fields_for(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var))->set_unknownError_18(L_22);
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
// System.Void Firebase.Storage.StorageInternalPINVOKE::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE__cctor_mEDBDA5F454C4DEF54ECE7BD2D61FB4DA9F2D6CF9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageInternalPINVOKE__cctor_mEDBDA5F454C4DEF54ECE7BD2D61FB4DA9F2D6CF9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB * L_0 = (SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB *)il2cpp_codegen_object_new(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var);
		SWIGExceptionHelper__ctor_m36C57AF2D059EA55E5FFBA6831E7D313BD218C5E(L_0, /*hidden argument*/NULL);
		((StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_StaticFields*)il2cpp_codegen_static_fields_for(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var))->set_swigExceptionHelper_0(L_0);
		SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2 * L_1 = (SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2 *)il2cpp_codegen_object_new(SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2_il2cpp_TypeInfo_var);
		SWIGStringHelper__ctor_mD587E21387B1095963CEDEBCC76E95AF6286A2B7(L_1, /*hidden argument*/NULL);
		((StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_StaticFields*)il2cpp_codegen_static_fields_for(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var))->set_swigStringHelper_1(L_1);
		return;
	}
}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion(System.Runtime.InteropServices.HandleRef,Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion_m098C1658357527B5AE4244F1EAAB490E6BA571A3 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * ___jarg21, int32_t ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, int32_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_Future_StorageMetadata_SWIG_OnCompletion)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	return returnValue;
}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData(System.Runtime.InteropServices.HandleRef,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData_m6146F054C4FD5B39CD611246AE07CFA979DAED7A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_Future_StorageMetadata_SWIG_FreeCompletionData)(____jarg10_marshaled, ___jarg21);

}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_GetResult(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_GetResult_mD33208FB3398219C70F9EC01FDD26BA77B1FEAB2 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_Future_StorageMetadata_GetResult)(____jarg10_marshaled);

	return returnValue;
}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_Future_StorageMetadata(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_Future_StorageMetadata_mD71C908C2FB28CAD92C8342F8AAD8F6DE68B5E31 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_Future_StorageMetadata)(____jarg10_marshaled);

}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_ControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_ControllerInternal_mD1FC9B42FB2BC6F0B8E9C3D4B7224C1B599F1337 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_ControllerInternal)(____jarg10_marshaled);

}
// System.Boolean Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_ControllerInternal_Cancel(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageInternalPINVOKE_Firebase_Storage_ControllerInternal_Cancel_m66B2A2427E1607BC89EA7561B71E290FC6AEA2EE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_ControllerInternal_Cancel)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_MetadataInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_MetadataInternal_m722E78E62E12770B09320315CBC69C42A241FD24 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_MetadataInternal)(____jarg10_marshaled);

}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MetadataInternal_CopyCppObject(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_MetadataInternal_CopyCppObject_m519317BB7883D3EDEC4892B39662FDCDFF22CD50 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_MetadataInternal_CopyCppObject)(____jarg10_marshaled);

	return returnValue;
}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_StorageReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_StorageReferenceInternal_m34B41A840BEC4DE56D82A806D284D87663F62580 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_StorageReferenceInternal)(____jarg10_marshaled);

}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_Child__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Child__SWIG_0_m5AEFA0464B9CF2F0C32090C645E051784E46453C (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_Child__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_GetDownloadUrl(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_GetDownloadUrl_m5227B054D5C42B4F1CFFF34E88D9C270F9D8D74F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_GetDownloadUrl)(____jarg10_marshaled);

	return returnValue;
}
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_Bucket_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Bucket_get_m03EE518779776CF4B92903C053D5018BEFC8068A (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_Bucket_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_FullPath_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_FullPath_get_m872CD8FC5D597DD7F0A81C7F6D8EDA81192A46C5 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_FullPath_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.Boolean Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_IsValid_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_IsValid_get_m1F8009623152EE6DC06C3A00BAA53B9E82CBF3FE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int32_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int32_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_IsValid_get)(____jarg10_marshaled);

	return static_cast<bool>(returnValue);
}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController(System.Runtime.InteropServices.HandleRef,System.IntPtr,System.UInt32,System.Runtime.InteropServices.HandleRef,System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController_m1E932A7026086F9250DCA94DB425BF42477C2F88 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, intptr_t ___jarg21, uint32_t ___jarg32, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg43, HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg54, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, intptr_t, uint32_t, void*, void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg43' to native representation
	void* ____jarg43_marshaled = NULL;
	____jarg43_marshaled = (void*)___jarg43.get_m_handle_1();

	// Marshaling of parameter '___jarg54' to native representation
	void* ____jarg54_marshaled = NULL;
	____jarg54_marshaled = (void*)___jarg54.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController)(____jarg10_marshaled, ___jarg21, ___jarg32, ____jarg43_marshaled, ____jarg54_marshaled);

	return returnValue;
}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_new_MonitorControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_new_MonitorControllerInternal_mBE183D623E231AE1DE6D693376B600C0C561B160 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_new_MonitorControllerInternal)(____jarg10_marshaled);

	return returnValue;
}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_delete_MonitorControllerInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_delete_MonitorControllerInternal_m782082791AF219A56AA57E27D91579E0ABFA4033 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_delete_MonitorControllerInternal)(____jarg10_marshaled);

}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_SetPausedEvent(System.Runtime.InteropServices.HandleRef,Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetPausedEvent_m334C1361E3730C9038EA21049FFC99A3B8BC5BAA (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___jarg21, intptr_t ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_SetPausedEvent)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_SetProgressEvent(System.Runtime.InteropServices.HandleRef,Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_SetProgressEvent_m0548BCFB6FC5D00530BB621F5BE9D60C8E11F36F (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * ___jarg21, intptr_t ___jarg32, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*, Il2CppMethodPointer, intptr_t);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	Il2CppMethodPointer ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___jarg21));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_SetProgressEvent)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_Controller_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_Controller_get_m962C17247887896E4807E28F1CF86149D2B125AF (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_Controller_get)(____jarg10_marshaled);

	return returnValue;
}
// System.Int64 Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_BytesTransferred_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_BytesTransferred_get_mEBB71DDF98EE231462A9E5D90CF8AD999DC99EB4 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_BytesTransferred_get)(____jarg10_marshaled);

	return returnValue;
}
// System.Int64 Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_MonitorControllerInternal_TotalByteCount_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t StorageInternalPINVOKE_Firebase_Storage_MonitorControllerInternal_TotalByteCount_get_m204054FC629671DDF1649BD41E49CE679F9A46EB (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef int64_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	int64_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_MonitorControllerInternal_TotalByteCount_get)(____jarg10_marshaled);

	return returnValue;
}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0(System.Runtime.InteropServices.HandleRef,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0_m4D7F73FBC07183FE3511D70158508EA2FDC35696 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_GetReferenceFromUrl__SWIG_0)(____jarg10_marshaled, ____jarg21_marshaled);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal(System.Runtime.InteropServices.HandleRef,System.String,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal_m0A66DD0BEDE5C0C3AB7CA56456F706CF994D8F35 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, String_t* ___jarg21, int32_t* ___jarg32, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*, char*, int32_t*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Marshaling of parameter '___jarg21' to native representation
	char* ____jarg21_marshaled = NULL;
	____jarg21_marshaled = il2cpp_codegen_marshal_string(___jarg21);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_GetInstanceInternal)(____jarg10_marshaled, ____jarg21_marshaled, ___jarg32);

	// Marshaling cleanup of parameter '___jarg21' native representation
	il2cpp_codegen_marshal_free(____jarg21_marshaled);
	____jarg21_marshaled = NULL;

	return returnValue;
}
// System.Void Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal_m6A406313FF6F90F6B4B360A883ECA262B71B4DA5 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_ReleaseReferenceInternal)(____jarg10_marshaled);

}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_App_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_App_get_mE1F82516CF5CB0DD9995BA0FDD2C538B99E59BBE (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_App_get)(____jarg10_marshaled);

	return returnValue;
}
// System.String Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_FirebaseStorageInternal_Url_get(System.Runtime.InteropServices.HandleRef)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageInternalPINVOKE_Firebase_Storage_FirebaseStorageInternal_Url_get_mB19EBC03B4F911B9ABC4A1598D9131A6DF156BB5 (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  ___jarg10, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc) (void*);

	// Marshaling of parameter '___jarg10' to native representation
	void* ____jarg10_marshaled = NULL;
	____jarg10_marshaled = (void*)___jarg10.get_m_handle_1();

	// Native function invocation
	char* returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_FirebaseStorageInternal_Url_get)(____jarg10_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.IntPtr Firebase.Storage.StorageInternalPINVOKE::Firebase_Storage_Future_StorageMetadata_SWIGUpcast(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t StorageInternalPINVOKE_Firebase_Storage_Future_StorageMetadata_SWIGUpcast_mBE021ECAAE278E80A044F6E2A980FB569D6C812E (intptr_t ___jarg10, const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) (intptr_t);

	// Native function invocation
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(Firebase_Storage_Future_StorageMetadata_SWIGUpcast)(___jarg10);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Storage.StorageMetadata::.ctor(Firebase.Storage.StorageReference,Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_mFBED4D3E575AE070D6494EF81F878F53D938C824 (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___reference0, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___metadata1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_0 = ___reference0;
		__this->set_storageReference_1(L_0);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_1 = ___metadata1;
		StorageMetadata_set_Internal_m04FC4FD97C2FA2B7AE16654FB78793628DDE9FD6_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageMetadata::.ctor(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__ctor_mC16F1F6078E4DEB307CEC2E439946EA65F56B88C (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___metadataToCopy0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_0 = ___metadataToCopy0;
		NullCheck(L_0);
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_1 = L_0->get_storageReference_1();
		__this->set_storageReference_1(L_1);
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_2 = ___metadataToCopy0;
		NullCheck(L_2);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_3 = StorageMetadata_get_Internal_m2EE37A1FF1ED7F5295F124069C553F98B03A1497_inline(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_4 = MetadataInternal_Copy_mDF42819C422E2D122738158D606A8BD973010E0C(L_3, /*hidden argument*/NULL);
		StorageMetadata_set_Internal_m04FC4FD97C2FA2B7AE16654FB78793628DDE9FD6_inline(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::get_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * StorageMetadata_get_Internal_m2EE37A1FF1ED7F5295F124069C553F98B03A1497 (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, const RuntimeMethod* method)
{
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_0 = __this->get_U3CInternalU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageMetadata::set_Internal(Firebase.Storage.MetadataInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata_set_Internal_m04FC4FD97C2FA2B7AE16654FB78793628DDE9FD6 (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___value0, const RuntimeMethod* method)
{
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_2(L_0);
		return;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::GetMetadataInternal(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * StorageMetadata_GetMetadataInternal_mDD8ADEE71DC422F54A290A4DCB39640F48DB2DB2 (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___metadata0, const RuntimeMethod* method)
{
	MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * G_B3_0 = NULL;
	{
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_0 = ___metadata0;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_1 = ___metadata0;
		NullCheck(L_1);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_2 = StorageMetadata_get_Internal_m2EE37A1FF1ED7F5295F124069C553F98B03A1497_inline(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_0012;
	}

IL_0011:
	{
		G_B3_0 = ((MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 *)(NULL));
	}

IL_0012:
	{
		return G_B3_0;
	}
}
// Firebase.Storage.MetadataInternal Firebase.Storage.StorageMetadata::BuildMetadataInternal(Firebase.Storage.MetadataChange)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * StorageMetadata_BuildMetadataInternal_m8A228D5950AC9395B506DE2E690433068F1C2D85 (MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * ___metadataChange0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageMetadata_BuildMetadataInternal_m8A228D5950AC9395B506DE2E690433068F1C2D85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * L_0 = ___metadataChange0;
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_1 = MetadataChange_Build_m5FD5867B6CB7C2FF6FE9EF86EC7F582FE4A12F2F(L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_il2cpp_TypeInfo_var);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_2 = StorageMetadata_GetMetadataInternal_mDD8ADEE71DC422F54A290A4DCB39640F48DB2DB2(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Firebase.Storage.StorageMetadata::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageMetadata__cctor_mEFBED20C02A8D24ED59ED6887116ACC230DD94A5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageMetadata__cctor_mEFBED20C02A8D24ED59ED6887116ACC230DD94A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  L_0;
		memset((&L_0), 0, sizeof(L_0));
		DateTime__ctor_mE84FCDCEAD332A62B587191C5874DAD7C238CFEA((&L_0), ((int32_t)1970), 1, 1, 0, 0, 0, 1, /*hidden argument*/NULL);
		((StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_StaticFields*)il2cpp_codegen_static_fields_for(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_il2cpp_TypeInfo_var))->set_UnixEpoch_0(L_0);
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
// System.Void Firebase.Storage.StorageReference::.ctor(Firebase.Storage.FirebaseStorage,Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReference__ctor_mC09ABE63B921CA4FF2EEA622C567FB1A3FB4B6C5 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * ___storage0, StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___storageReferenceInternal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference__ctor_mC09ABE63B921CA4FF2EEA622C567FB1A3FB4B6C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_0 = ___storage0;
		__this->set_firebaseStorage_0(L_0);
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_1 = ___storageReferenceInternal1;
		StorageReference_set_Internal_mCE9F92CBF066C6CFB870B0C4BB5B523BF5014CE6_inline(__this, L_1, /*hidden argument*/NULL);
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_2 = __this->get_firebaseStorage_0();
		NullCheck(L_2);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_3 = FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline(L_2, /*hidden argument*/NULL);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_4 = (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 *)il2cpp_codegen_object_new(ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608_il2cpp_TypeInfo_var);
		ModuleLogger__ctor_mE8D814C24F604C09F5D9A651BDB56DEF9ABB556E(L_4, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_5 = V_0;
		String_t* L_6 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		String_t* L_7 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral1CB4C6D8E752BD4A976FB4BF3FD6276F3FF8A77A, L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		ModuleLogger_set_Tag_m7ECACA8B7C965C422E171F9AD64A3CF377641A13_inline(L_5, L_7, /*hidden argument*/NULL);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_8 = V_0;
		StorageReference_set_Logger_mA4934385891F36A75E7CF86DF5CC78568A42BCA1_inline(__this, L_8, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.Internal.ModuleLogger Firebase.Storage.StorageReference::get_Logger()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * StorageReference_get_Logger_m00569B19AC096C92E3445C619D63053134203693 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method)
{
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_0 = __this->get_U3CLoggerU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference::set_Logger(Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReference_set_Logger_mA4934385891F36A75E7CF86DF5CC78568A42BCA1 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___value0, const RuntimeMethod* method)
{
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_0 = ___value0;
		__this->set_U3CLoggerU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.String Firebase.Storage.StorageReference::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_get_Path_m1FF88166D520470BF00DAF4F7450F3CDF617684F (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_0 = StorageReference_get_Internal_m337277BB1424AB2DB192EDC3B69EE9A80B2F36F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = StorageReferenceInternal_get_FullPath_m4AF95AC247E1CF014CB80235594DC0862C9EFB47(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.String Firebase.Storage.StorageReference::get_Bucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_get_Bucket_mCF992377719B4F8DB104F27F962E3803E109B22E (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_0 = StorageReference_get_Internal_m337277BB1424AB2DB192EDC3B69EE9A80B2F36F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		String_t* L_1 = StorageReferenceInternal_get_Bucket_mBD757EA3852F9E8D7B829C208015CA5A5C747693(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// Firebase.Storage.StorageReference Firebase.Storage.StorageReference::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * StorageReference_Child_m222183D6618915FF258B6B1E020FF7F4AA694D28 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, String_t* ___pathString0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_Child_m222183D6618915FF258B6B1E020FF7F4AA694D28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * L_0 = __this->get_firebaseStorage_0();
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_1 = StorageReference_get_Internal_m337277BB1424AB2DB192EDC3B69EE9A80B2F36F1_inline(__this, /*hidden argument*/NULL);
		String_t* L_2 = ___pathString0;
		NullCheck(L_1);
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_3 = StorageReferenceInternal_Child_mB213D92C1A792396860518C9BE34B3543AD2DC10(L_1, L_2, /*hidden argument*/NULL);
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_4 = (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F *)il2cpp_codegen_object_new(StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F_il2cpp_TypeInfo_var);
		StorageReference__ctor_mC09ABE63B921CA4FF2EEA622C567FB1A3FB4B6C5(L_4, L_0, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference::PutBytesAsync(System.Byte[],Firebase.Storage.MetadataChange,System.IProgress`1<Firebase.Storage.UploadState>,System.Threading.CancellationToken,System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * StorageReference_PutBytesAsync_m84984D37088DCCB88A8E84A70248C4592B2C2104 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * ___customMetadata1, RuntimeObject* ___progressHandler2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken3, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___previousSessionUri4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_PutBytesAsync_m84984D37088DCCB88A8E84A70248C4592B2C2104_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_0 = ___bytes0;
		MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * L_1 = ___customMetadata1;
		RuntimeObject* L_2 = ___progressHandler2;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancelToken3;
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_4 = ___previousSessionUri4;
		TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * L_5 = (TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 *)il2cpp_codegen_object_new(TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_mF4FC8FACCC46FBC588CA6931AABC72ED28EF2213(L_5, /*hidden argument*/TaskCompletionSource_1__ctor_mF4FC8FACCC46FBC588CA6931AABC72ED28EF2213_RuntimeMethod_var);
		Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * L_6 = StorageReference_PutBytesUsingCompletionSourceAsync_m4B4AB4E9D2CE12533FE97D9B423E348C3E47A2A0(__this, L_0, L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReference::PutBytesUsingMonitorControllerAsync(System.IntPtr,System.UInt32,Firebase.Storage.MetadataInternal,Firebase.Storage.MonitorControllerInternal,System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9744B6AD55320186C36CC7626916272750E46384 * StorageReference_PutBytesUsingMonitorControllerAsync_mA0AE399A738E0B9AB5446A3129647C169C495A63 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, intptr_t ___buffer0, uint32_t ___bufferSize1, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___metadata2, MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___monitorController3, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_PutBytesUsingMonitorControllerAsync_mA0AE399A738E0B9AB5446A3129647C169C495A63_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * V_0 = NULL;
	Task_1_t9744B6AD55320186C36CC7626916272750E46384 * V_1 = NULL;
	{
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * L_0 = (U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 *)il2cpp_codegen_object_new(U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826_il2cpp_TypeInfo_var);
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0__ctor_mF244687FE14CAF5EDA5634EFE238AB0696E18EB5(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * L_1 = V_0;
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_2 = ___monitorController3;
		NullCheck(L_1);
		L_1->set_monitorController_0(L_2);
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * L_3 = V_0;
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_4 = ___metadata2;
		NullCheck(L_3);
		L_3->set_metadata_1(L_4);
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_5 = StorageReference_get_Internal_m337277BB1424AB2DB192EDC3B69EE9A80B2F36F1_inline(__this, /*hidden argument*/NULL);
		intptr_t L_6 = ___buffer0;
		uint32_t L_7 = ___bufferSize1;
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * L_8 = V_0;
		NullCheck(L_8);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_9 = L_8->get_metadata_1();
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * L_10 = V_0;
		NullCheck(L_10);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_11 = L_10->get_monitorController_0();
		NullCheck(L_5);
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_12 = StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m34427017752A4B418BDC7C61F20DEA8A413056AB(L_5, (intptr_t)L_6, L_7, L_9, L_11, /*hidden argument*/NULL);
		V_1 = L_12;
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * L_13 = V_0;
		NullCheck(L_13);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_14 = L_13->get_monitorController_0();
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_15 = ___cancellationToken4;
		NullCheck(L_14);
		MonitorControllerInternal_RegisterCancellationToken_mC93001C569376B80E9283B834218877AFBD3424D(L_14, L_15, /*hidden argument*/NULL);
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_16 = V_1;
		U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * L_17 = V_0;
		Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C * L_18 = (Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C *)il2cpp_codegen_object_new(Func_2_tCC9D5A71DAB8D3BE1BFBB04B433923E5102EDB9C_il2cpp_TypeInfo_var);
		Func_2__ctor_m79834B32DC11FA6ACB5E96ECF86ED900DDCF0CC6(L_18, L_17, (intptr_t)((intptr_t)U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_U3CU3Em__0_m56A55C478315456AD2F8C3C7D6EBC7C8D69BEB9B_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m79834B32DC11FA6ACB5E96ECF86ED900DDCF0CC6_RuntimeMethod_var);
		NullCheck(L_16);
		Task_1_t25BD7331494EE1D3795B89B7038987A39373E015 * L_19 = Task_1_ContinueWith_TisTask_1_t9744B6AD55320186C36CC7626916272750E46384_mD7A2AA7BA6EE2952C6358BC73D2DE94EE2C081FE(L_16, L_18, /*hidden argument*/Task_1_ContinueWith_TisTask_1_t9744B6AD55320186C36CC7626916272750E46384_mD7A2AA7BA6EE2952C6358BC73D2DE94EE2C081FE_RuntimeMethod_var);
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_20 = TaskExtensions_Unwrap_TisMetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_m6928684B9644695798212D113BE399471A512B74(L_19, /*hidden argument*/TaskExtensions_Unwrap_TisMetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_m6928684B9644695798212D113BE399471A512B74_RuntimeMethod_var);
		return L_20;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.StorageMetadata> Firebase.Storage.StorageReference::PutBytesUsingCompletionSourceAsync(System.Byte[],Firebase.Storage.MetadataChange,System.IProgress`1<Firebase.Storage.UploadState>,System.Threading.CancellationToken,System.Uri,System.Threading.Tasks.TaskCompletionSource`1<Firebase.Storage.StorageMetadata>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * StorageReference_PutBytesUsingCompletionSourceAsync_m4B4AB4E9D2CE12533FE97D9B423E348C3E47A2A0 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___bytes0, MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * ___customMetadata1, RuntimeObject* ___progressHandler2, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancelToken3, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___previousSessionUri4, TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * ___completionSource5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_PutBytesUsingCompletionSourceAsync_m4B4AB4E9D2CE12533FE97D9B423E348C3E47A2A0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * V_0 = NULL;
	UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * V_1 = NULL;
	{
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_0 = (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA *)il2cpp_codegen_object_new(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA_il2cpp_TypeInfo_var);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1__ctor_mC9531CEEA3138F85A30D9BB5916BC9A7A202B22B(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_1 = V_0;
		TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * L_2 = ___completionSource5;
		NullCheck(L_1);
		L_1->set_completionSource_1(L_2);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_3 = V_0;
		NullCheck(L_3);
		L_3->set_U24this_3(__this);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_4 = ___bytes0;
		NullCheck(L_4);
		UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * L_5 = (UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C *)il2cpp_codegen_object_new(UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C_il2cpp_TypeInfo_var);
		UploadState__ctor_m4C2E77580D8E2AA6660D91FF3739D93BB999B8E0(L_5, __this, (((int64_t)((int64_t)(((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))), /*hidden argument*/NULL);
		V_1 = L_5;
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_6 = V_0;
		RuntimeObject* L_7 = ___progressHandler2;
		UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * L_8 = V_1;
		UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * L_9 = V_1;
		NullCheck(L_9);
		TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * L_10 = UploadState_get_State_m41DBB6A43534377466296E74CFC403EE6F269DAF_inline(L_9, /*hidden argument*/NULL);
		TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 * L_11 = (TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 *)il2cpp_codegen_object_new(TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809_il2cpp_TypeInfo_var);
		TransferStateUpdater_1__ctor_m3F575E78F6B369C6E80E27FA4A27F7BC7457681E(L_11, __this, L_7, L_8, L_10, /*hidden argument*/TransferStateUpdater_1__ctor_m3F575E78F6B369C6E80E27FA4A27F7BC7457681E_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->set_transferStateUpdater_2(L_11);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_12 = V_0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13 = ___bytes0;
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603  L_14 = GCHandle_Alloc_mBF5C4C0E8605F97427BFDF96D68AACD4A4D6DDEC((RuntimeObject *)(RuntimeObject *)L_13, 3, /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_bytesHandle_0(L_14);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_15 = V_0;
		NullCheck(L_15);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_16 = L_15->get_address_of_bytesHandle_0();
		intptr_t L_17 = GCHandle_AddrOfPinnedObject_m0604506F2BDCD2DC8C167FBC3BF3E965888F7589((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_16, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_18 = ___bytes0;
		NullCheck(L_18);
		MetadataChange_tF8A5E3B32B696EBEF0AB1F97D6202945794A0EE1 * L_19 = ___customMetadata1;
		IL2CPP_RUNTIME_CLASS_INIT(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_il2cpp_TypeInfo_var);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_20 = StorageMetadata_BuildMetadataInternal_m8A228D5950AC9395B506DE2E690433068F1C2D85(L_19, /*hidden argument*/NULL);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_21 = V_0;
		NullCheck(L_21);
		TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 * L_22 = L_21->get_transferStateUpdater_2();
		NullCheck(L_22);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_23 = TransferStateUpdater_1_get_MonitorController_m350102272D1EA06E92156E09D9B3DE94803528CE_inline(L_22, /*hidden argument*/TransferStateUpdater_1_get_MonitorController_m350102272D1EA06E92156E09D9B3DE94803528CE_RuntimeMethod_var);
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_24 = ___cancelToken3;
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_25 = StorageReference_PutBytesUsingMonitorControllerAsync_mA0AE399A738E0B9AB5446A3129647C169C495A63(__this, (intptr_t)L_17, (((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))), L_20, L_23, L_24, /*hidden argument*/NULL);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_26 = V_0;
		Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A * L_27 = (Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A *)il2cpp_codegen_object_new(Action_1_tD13AE2213DBE655E21593F560DE5E15E1042058A_il2cpp_TypeInfo_var);
		Action_1__ctor_m5537F6CA859251E8D7793A74B4D15A6FA29FD319(L_27, L_26, (intptr_t)((intptr_t)U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_mF4898EA52AAD56F0D7769A267C638C12B65E3400_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m5537F6CA859251E8D7793A74B4D15A6FA29FD319_RuntimeMethod_var);
		NullCheck(L_25);
		Task_1_ContinueWith_m75E3A577C38E74D9536362ED875D503E536E3204(L_25, L_27, /*hidden argument*/Task_1_ContinueWith_m75E3A577C38E74D9536362ED875D503E536E3204_RuntimeMethod_var);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_28 = V_0;
		NullCheck(L_28);
		TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * L_29 = L_28->get_completionSource_1();
		NullCheck(L_29);
		Task_1_t83F7AD7A2006FC3B896B549407C81C89B915EADE * L_30 = TaskCompletionSource_1_get_Task_m4DA775DA9894E49F999A410C2F253966D03A937F_inline(L_29, /*hidden argument*/TaskCompletionSource_1_get_Task_m4DA775DA9894E49F999A410C2F253966D03A937F_RuntimeMethod_var);
		return L_30;
	}
}
// System.Threading.Tasks.Task`1<System.Uri> Firebase.Storage.StorageReference::GetDownloadUrlAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD * StorageReference_GetDownloadUrlAsync_m41C1F4A825516C97CAA616D24691924F50BE7DD3 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_GetDownloadUrlAsync_m41C1F4A825516C97CAA616D24691924F50BE7DD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * V_0 = NULL;
	{
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * L_0 = (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 *)il2cpp_codegen_object_new(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555_il2cpp_TypeInfo_var);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA__ctor_m39FA371756130BF1878B185EA04A7533BDCFBCC0(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U24this_1(__this);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * L_2 = V_0;
		TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B * L_3 = (TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B *)il2cpp_codegen_object_new(TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B_il2cpp_TypeInfo_var);
		TaskCompletionSource_1__ctor_m9E13EEB0EA2C4702B86E160FB8B4725A689E39BD(L_3, /*hidden argument*/TaskCompletionSource_1__ctor_m9E13EEB0EA2C4702B86E160FB8B4725A689E39BD_RuntimeMethod_var);
		NullCheck(L_2);
		L_2->set_result_0(L_3);
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_4 = StorageReference_get_Internal_m337277BB1424AB2DB192EDC3B69EE9A80B2F36F1_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_5 = StorageReferenceInternal_GetDownloadUrlAsync_mE2E99BFDEAB4FCE8A4514051E455C71468BB167C(L_4, /*hidden argument*/NULL);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * L_6 = V_0;
		Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882 * L_7 = (Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882 *)il2cpp_codegen_object_new(Action_1_t90FE53A6F167DF8AE8F6569BAE9BB3C191FCF882_il2cpp_TypeInfo_var);
		Action_1__ctor_mBB7F7BEA488977932D354CC486E7EECC39F6F65E(L_7, L_6, (intptr_t)((intptr_t)U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_m6520E2D9BCD0AADC0DA27D6FCBFEA51C9BAE8A17_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_mBB7F7BEA488977932D354CC486E7EECC39F6F65E_RuntimeMethod_var);
		NullCheck(L_5);
		Task_1_ContinueWith_m3305B87C01A4BC1D29F7C00B61EF0A22AEC7FB22(L_5, L_7, /*hidden argument*/Task_1_ContinueWith_m3305B87C01A4BC1D29F7C00B61EF0A22AEC7FB22_RuntimeMethod_var);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * L_8 = V_0;
		NullCheck(L_8);
		TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B * L_9 = L_8->get_result_0();
		NullCheck(L_9);
		Task_1_tFBC02E8F92E7243FCF897E78A7AA74A64888FDFD * L_10 = TaskCompletionSource_1_get_Task_mC4F854995F4E34D06EFF8645A2C7FE63A7E36E17_inline(L_9, /*hidden argument*/TaskCompletionSource_1_get_Task_mC4F854995F4E34D06EFF8645A2C7FE63A7E36E17_RuntimeMethod_var);
		return L_10;
	}
}
// System.String Firebase.Storage.StorageReference::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReference_ToString_m260F7C63A3FD0E17F50A3706A8C7652831D4CFD3 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_ToString_m260F7C63A3FD0E17F50A3706A8C7652831D4CFD3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = StorageReference_get_Bucket_mCF992377719B4F8DB104F27F962E3803E109B22E(__this, /*hidden argument*/NULL);
		String_t* L_1 = StorageReference_get_Path_m1FF88166D520470BF00DAF4F7450F3CDF617684F(__this, /*hidden argument*/NULL);
		String_t* L_2 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral465D8053A968C034065EEA4680E5BA0DA4E093BA, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Firebase.Storage.StorageReference::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageReference_Equals_m894E1FD80AA9209C02E2840EAE243C56DDBD9FFB (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, RuntimeObject * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReference_Equals_m894E1FD80AA9209C02E2840EAE243C56DDBD9FFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___other0;
		if (((StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F *)IsInstSealed((RuntimeObject*)L_0, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F_il2cpp_TypeInfo_var)))
		{
			goto IL_000d;
		}
	}
	{
		return (bool)0;
	}

IL_000d:
	{
		RuntimeObject * L_1 = ___other0;
		V_0 = ((StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F *)CastclassSealed((RuntimeObject*)L_1, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F_il2cpp_TypeInfo_var));
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_2);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_3);
		bool L_5 = String_Equals_m8A062B96B61A7D652E7D73C9B3E904F6B0E5F41D(L_3, L_4, /*hidden argument*/NULL);
		return L_5;
	}
}
// System.Int32 Firebase.Storage.StorageReference::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t StorageReference_GetHashCode_mDCE89A1125A5376D3CB04C9CD729505F9C5D3E6B (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, __this);
		NullCheck(L_0);
		int32_t L_1 = VirtFuncInvoker0< int32_t >::Invoke(2 /* System.Int32 System.Object::GetHashCode() */, L_0);
		return L_1;
	}
}
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReference::get_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * StorageReference_get_Internal_m337277BB1424AB2DB192EDC3B69EE9A80B2F36F1 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_0 = __this->get_U3CInternalU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference::set_Internal(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReference_set_Internal_mCE9F92CBF066C6CFB870B0C4BB5B523BF5014CE6 (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___value0, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_2(L_0);
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
// System.Void Firebase.Storage.StorageReferenceInternal::.ctor(System.IntPtr,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReferenceInternal__ctor_mAC63CF4DCBAAD690883596AC1961550209864AD2 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, intptr_t ___cPtr0, bool ___cMemoryOwn1, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		bool L_0 = ___cMemoryOwn1;
		__this->set_swigCMemOwn_1(L_0);
		intptr_t L_1 = ___cPtr0;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_2;
		memset((&L_2), 0, sizeof(L_2));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_2), __this, (intptr_t)L_1, /*hidden argument*/NULL);
		__this->set_swigCPtr_0(L_2);
		return;
	}
}
// System.Runtime.InteropServices.HandleRef Firebase.Storage.StorageReferenceInternal::getCPtr(Firebase.Storage.StorageReferenceInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  StorageReferenceInternal_getCPtr_m19196AA4E38CCA3D0135FA7810763A335B19BCEC (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_getCPtr_m19196AA4E38CCA3D0135FA7810763A335B19BCEC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_0 = ___obj0;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_1;
		memset((&L_1), 0, sizeof(L_1));
		HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_1), NULL, (intptr_t)(0), /*hidden argument*/NULL);
		G_B3_0 = L_1;
		goto IL_001c;
	}

IL_0016:
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_2 = ___obj0;
		NullCheck(L_2);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_3 = L_2->get_swigCPtr_0();
		G_B3_0 = L_3;
	}

IL_001c:
	{
		return G_B3_0;
	}
}
// System.Void Firebase.Storage.StorageReferenceInternal::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReferenceInternal_Finalize_m5F03CEE4F6D356E9C25CED2E0DFA35C4073DF132 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method)
{
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
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.StorageReferenceInternal::Dispose() */, __this);
		IL2CPP_LEAVE(0x12, FINALLY_000b);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_000b;
	}

FINALLY_000b:
	{ // begin finally (depth: 1)
		Object_Finalize_mC59C83CF4F7707E425FFA6362931C25D4C36676A(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(11)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(11)
	{
		IL2CPP_JUMP_TBL(0x12, IL_0012)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0012:
	{
		return;
	}
}
// System.Void Firebase.Storage.StorageReferenceInternal::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StorageReferenceInternal_Dispose_m6DF406C59205ED0D37CEBBC6EC404F46A2A6AAF6 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_Dispose_m6DF406C59205ED0D37CEBBC6EC404F46A2A6AAF6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var);
		RuntimeObject * L_0 = ((FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_StaticFields*)il2cpp_codegen_static_fields_for(FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D_il2cpp_TypeInfo_var))->get_disposeLock_2();
		V_0 = L_0;
		RuntimeObject * L_1 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_1, /*hidden argument*/NULL);
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * L_2 = __this->get_address_of_swigCPtr_0();
			intptr_t L_3 = HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline((HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF *)L_2, /*hidden argument*/NULL);
			bool L_4 = IntPtr_op_Inequality_m212AF0E66AA81FEDC982B1C8A44ADDA24B995EB8((intptr_t)L_3, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_4)
			{
				goto IL_0054;
			}
		}

IL_0026:
		{
			bool L_5 = __this->get_swigCMemOwn_1();
			if (!L_5)
			{
				goto IL_0043;
			}
		}

IL_0031:
		{
			__this->set_swigCMemOwn_1((bool)0);
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = __this->get_swigCPtr_0();
			IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
			StorageInternalPINVOKE_Firebase_Storage_delete_StorageReferenceInternal_m34B41A840BEC4DE56D82A806D284D87663F62580(L_6, /*hidden argument*/NULL);
		}

IL_0043:
		{
			HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_7;
			memset((&L_7), 0, sizeof(L_7));
			HandleRef__ctor_m32F577826A69BCA9CE2C57DA4E6A829B18A4C1A3((&L_7), NULL, (intptr_t)(0), /*hidden argument*/NULL);
			__this->set_swigCPtr_0(L_7);
		}

IL_0054:
		{
			IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_mEE880E988C6AF32AA2F67F2D62715281EAA41555(__this, /*hidden argument*/NULL);
			IL2CPP_LEAVE(0x66, FINALLY_005f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_005f;
	}

FINALLY_005f:
	{ // begin finally (depth: 1)
		RuntimeObject * L_8 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_8, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(95)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(95)
	{
		IL2CPP_JUMP_TBL(0x66, IL_0066)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0066:
	{
		return;
	}
}
// Firebase.Storage.StorageReferenceInternal Firebase.Storage.StorageReferenceInternal::Child(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * StorageReferenceInternal_Child_mB213D92C1A792396860518C9BE34B3543AD2DC10 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_Child_mB213D92C1A792396860518C9BE34B3543AD2DC10_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		String_t* L_1 = ___path0;
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_2 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Child__SWIG_0_m5AEFA0464B9CF2F0C32090C645E051784E46453C(L_0, L_1, /*hidden argument*/NULL);
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_3 = (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F *)il2cpp_codegen_object_new(StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F_il2cpp_TypeInfo_var);
		StorageReferenceInternal__ctor_mAC63CF4DCBAAD690883596AC1961550209864AD2(L_3, (intptr_t)L_2, (bool)1, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		Exception_t * L_5 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, StorageReferenceInternal_Child_mB213D92C1A792396860518C9BE34B3543AD2DC10_RuntimeMethod_var);
	}

IL_0023:
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_6 = V_0;
		return L_6;
	}
}
// System.Threading.Tasks.Task`1<System.String> Firebase.Storage.StorageReferenceInternal::GetDownloadUrlAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * StorageReferenceInternal_GetDownloadUrlAsync_mE2E99BFDEAB4FCE8A4514051E455C71468BB167C (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_GetDownloadUrlAsync_mE2E99BFDEAB4FCE8A4514051E455C71468BB167C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_1 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_GetDownloadUrl_m5227B054D5C42B4F1CFFF34E88D9C270F9D8D74F(L_0, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StorageReferenceInternal_GetDownloadUrlAsync_mE2E99BFDEAB4FCE8A4514051E455C71468BB167C_RuntimeMethod_var);
	}

IL_001c:
	{
		intptr_t L_4 = V_0;
		FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 * L_5 = (FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719 *)il2cpp_codegen_object_new(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		FutureString__ctor_mEE94FE29EDA6856652FFBFE07AF06BD33B5BBC82(L_5, (intptr_t)L_4, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(FutureString_t9D6739D63A5A92DD73C540D6F52A94DF0EF39719_il2cpp_TypeInfo_var);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_6 = FutureString_GetTask_m7CF681D446F480F4930D6B4A406CF9CE12B4A761(L_5, /*hidden argument*/NULL);
		return L_6;
	}
}
// System.String Firebase.Storage.StorageReferenceInternal::get_Bucket()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReferenceInternal_get_Bucket_mBD757EA3852F9E8D7B829C208015CA5A5C747693 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_get_Bucket_mBD757EA3852F9E8D7B829C208015CA5A5C747693_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		String_t* L_1 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_Bucket_get_m03EE518779776CF4B92903C053D5018BEFC8068A(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StorageReferenceInternal_get_Bucket_mBD757EA3852F9E8D7B829C208015CA5A5C747693_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.String Firebase.Storage.StorageReferenceInternal::get_FullPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StorageReferenceInternal_get_FullPath_m4AF95AC247E1CF014CB80235594DC0862C9EFB47 (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_get_FullPath_m4AF95AC247E1CF014CB80235594DC0862C9EFB47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		String_t* L_1 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_FullPath_get_m872CD8FC5D597DD7F0A81C7F6D8EDA81192A46C5(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StorageReferenceInternal_get_FullPath_m4AF95AC247E1CF014CB80235594DC0862C9EFB47_RuntimeMethod_var);
	}

IL_001c:
	{
		String_t* L_4 = V_0;
		return L_4;
	}
}
// System.Boolean Firebase.Storage.StorageReferenceInternal::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool StorageReferenceInternal_get_IsValid_mE6974AE9F4500567F662E861A6FCD0E35DAB028B (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_get_IsValid_mE6974AE9F4500567F662E861A6FCD0E35DAB028B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		bool L_1 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_IsValid_get_m1F8009623152EE6DC06C3A00BAA53B9E82CBF3FE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		Exception_t * L_3 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, StorageReferenceInternal_get_IsValid_mE6974AE9F4500567F662E861A6FCD0E35DAB028B_RuntimeMethod_var);
	}

IL_001c:
	{
		bool L_4 = V_0;
		return L_4;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReferenceInternal::PutBytesUsingMonitorControllerAsync(System.IntPtr,System.UInt32,Firebase.Storage.MetadataInternal,Firebase.Storage.MonitorControllerInternal)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9744B6AD55320186C36CC7626916272750E46384 * StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m34427017752A4B418BDC7C61F20DEA8A413056AB (StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * __this, intptr_t ___buffer0, uint32_t ___buffer_size1, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___metadata2, MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * ___monitor_controller3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m34427017752A4B418BDC7C61F20DEA8A413056AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_0 = __this->get_swigCPtr_0();
		intptr_t L_1 = ___buffer0;
		uint32_t L_2 = ___buffer_size1;
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_3 = ___metadata2;
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_4 = MetadataInternal_getCPtr_m90DB4CA8CE4A6E66F7423F9AF1C5DC823C2885C6(L_3, /*hidden argument*/NULL);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_5 = ___monitor_controller3;
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF  L_6 = MonitorControllerInternal_getCPtr_m8CFBA5FC9CE3DCACBED297C78AB0D31E69BA8423(L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_il2cpp_TypeInfo_var);
		intptr_t L_7 = StorageInternalPINVOKE_Firebase_Storage_StorageReferenceInternal_PutBytesUsingMonitorController_m1E932A7026086F9250DCA94DB425BF42477C2F88(L_0, (intptr_t)L_1, L_2, L_4, L_6, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_7;
		bool L_8 = SWIGPendingException_get_Pending_m57F7C179B5EFB37003896A5F25F4FBED7DA3D2AD(/*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_002b;
		}
	}
	{
		Exception_t * L_9 = SWIGPendingException_Retrieve_m62D9AC53AD2901040C0DF7F7800858C07617B6CD(/*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_9, StorageReferenceInternal_PutBytesUsingMonitorControllerAsync_m34427017752A4B418BDC7C61F20DEA8A413056AB_RuntimeMethod_var);
	}

IL_002b:
	{
		intptr_t L_10 = V_0;
		Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * L_11 = (Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE *)il2cpp_codegen_object_new(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
		Future_StorageMetadata__ctor_m7BAA8F7AF59C436996C2C282C9D8307D8104F1FA(L_11, (intptr_t)L_10, (bool)1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE_il2cpp_TypeInfo_var);
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_12 = Future_StorageMetadata_GetTask_mEC24F7196CE27D81111FEB9BEC03C9EE7C41C32F(L_11, /*hidden argument*/NULL);
		return L_12;
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
// System.Void Firebase.Storage.Internal.TransferState::.ctor(Firebase.Storage.StorageReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState__ctor_mDF9590F2DB008B90AD8548B6D30667A647A2370C (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___reference0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_0 = ___reference0;
		TransferState_set_Reference_m5CE8FB86AA8B620852C444B7E6DFB76739DEF0D1_inline(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Int64 Firebase.Storage.Internal.TransferState::get_BytesTransferred()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TransferState_get_BytesTransferred_m43A928E25AEF7FF053E349AB8990D9750C7020F6 (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CBytesTransferredU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_BytesTransferred(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_BytesTransferred_mE6C845D42B4F22C8E699CC171C05A7530ED0F3F2 (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CBytesTransferredU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Int64 Firebase.Storage.Internal.TransferState::get_TotalByteCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t TransferState_get_TotalByteCount_m3CE7ED39296C36E51AD911D1D36FB3B125059786 (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, const RuntimeMethod* method)
{
	{
		int64_t L_0 = __this->get_U3CTotalByteCountU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_TotalByteCount(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_TotalByteCount_m3D270DEDE3CE7421D13A0092F48D52163B9B4441 (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CTotalByteCountU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_UploadSessionUri(System.Uri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_UploadSessionUri_mBCFE9F734F8C7F197323B646B6192312933D5CFC (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * ___value0, const RuntimeMethod* method)
{
	{
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_0 = ___value0;
		__this->set_U3CUploadSessionUriU3Ek__BackingField_2(L_0);
		return;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_Metadata(Firebase.Storage.StorageMetadata)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_Metadata_mB14F50D80E1C01EC00906548099C59A68B5A1CE6 (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * ___value0, const RuntimeMethod* method)
{
	{
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_0 = ___value0;
		__this->set_U3CMetadataU3Ek__BackingField_3(L_0);
		return;
	}
}
// System.Void Firebase.Storage.Internal.TransferState::set_Reference(Firebase.Storage.StorageReference)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransferState_set_Reference_m5CE8FB86AA8B620852C444B7E6DFB76739DEF0D1 (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___value0, const RuntimeMethod* method)
{
	{
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_0 = ___value0;
		__this->set_U3CReferenceU3Ek__BackingField_4(L_0);
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
// System.Void Firebase.Storage.UploadState::.ctor(Firebase.Storage.StorageReference,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadState__ctor_m4C2E77580D8E2AA6660D91FF3739D93BB999B8E0 (UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___reference0, int64_t ___totalByteCount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UploadState__ctor_m4C2E77580D8E2AA6660D91FF3739D93BB999B8E0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * V_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_0 = ___reference0;
		TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * L_1 = (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 *)il2cpp_codegen_object_new(TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935_il2cpp_TypeInfo_var);
		TransferState__ctor_mDF9590F2DB008B90AD8548B6D30667A647A2370C(L_1, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * L_2 = V_0;
		int64_t L_3 = ___totalByteCount1;
		NullCheck(L_2);
		TransferState_set_TotalByteCount_m3D270DEDE3CE7421D13A0092F48D52163B9B4441_inline(L_2, L_3, /*hidden argument*/NULL);
		TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * L_4 = V_0;
		UploadState_set_State_m0BEC312E906D39DB1588D02B13C3250FDE3F7544_inline(__this, L_4, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.Internal.TransferState Firebase.Storage.UploadState::get_State()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * UploadState_get_State_m41DBB6A43534377466296E74CFC403EE6F269DAF (UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * __this, const RuntimeMethod* method)
{
	{
		TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * L_0 = __this->get_U3CStateU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.Storage.UploadState::set_State(Firebase.Storage.Internal.TransferState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UploadState_set_State_m0BEC312E906D39DB1588D02B13C3250FDE3F7544 (UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * __this, TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * ___value0, const RuntimeMethod* method)
{
	{
		TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_0(L_0);
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
// System.Void Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0__ctor_m455B9396E995372C47CC09F16F56363889AEFAF1 (U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.Future_StorageMetadata_<GetTask>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mDDB68359371D43F88C0B1D91A90B5ED88CCA8219 (U3CGetTaskU3Ec__AnonStorey0_t8083AC914F201C2ED60CBF681C417A1A97C39FF7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetTaskU3Ec__AnonStorey0_U3CU3Em__0_mDDB68359371D43F88C0B1D91A90B5ED88CCA8219_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Exception_t * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * L_0 = __this->get_fu_0();
			NullCheck(L_0);
			int32_t L_1 = FutureBase_status_m478C1E6AF62FB15C218A7C422CF5DC8CA1486CAA(L_0, /*hidden argument*/NULL);
			if ((!(((uint32_t)L_1) == ((uint32_t)2))))
			{
				goto IL_0021;
			}
		}

IL_0011:
		{
			TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * L_2 = __this->get_tcs_1();
			NullCheck(L_2);
			TaskCompletionSource_1_SetCanceled_mDEF5F6D8623C5992819FBBAC0377F9974DAA052B(L_2, /*hidden argument*/TaskCompletionSource_1_SetCanceled_mDEF5F6D8623C5992819FBBAC0377F9974DAA052B_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0021:
		{
			Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * L_3 = __this->get_fu_0();
			NullCheck(L_3);
			int32_t L_4 = FutureBase_error_mBA8200B272D3DB91D1EE78ECE0A10AAB84771C03(L_3, /*hidden argument*/NULL);
			V_0 = L_4;
			int32_t L_5 = V_0;
			if (!L_5)
			{
				goto IL_0054;
			}
		}

IL_0033:
		{
			TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * L_6 = __this->get_tcs_1();
			int32_t L_7 = V_0;
			Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * L_8 = __this->get_fu_0();
			NullCheck(L_8);
			String_t* L_9 = FutureBase_error_message_m6E9B30EF5EC5EE999B91077E60E3B96978DE4774(L_8, /*hidden argument*/NULL);
			FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * L_10 = (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 *)il2cpp_codegen_object_new(FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47_il2cpp_TypeInfo_var);
			FirebaseException__ctor_mCB919E722DF4F366C4E0D9278716CBED5DD8907C(L_10, L_7, L_9, /*hidden argument*/NULL);
			NullCheck(L_6);
			TaskCompletionSource_1_SetException_mB6C19B4DD3C5A9FEBE258E2EC15FF348EF5A9452(L_6, L_10, /*hidden argument*/TaskCompletionSource_1_SetException_mB6C19B4DD3C5A9FEBE258E2EC15FF348EF5A9452_RuntimeMethod_var);
			goto IL_006a;
		}

IL_0054:
		{
			TaskCompletionSource_1_t3A206F38A553A57E19A0964A37A024FCC304D738 * L_11 = __this->get_tcs_1();
			Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * L_12 = __this->get_fu_0();
			NullCheck(L_12);
			MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_13 = Future_StorageMetadata_GetResult_m00904CA09846B2728A440B3FBBC84B91975BA3AB(L_12, /*hidden argument*/NULL);
			NullCheck(L_11);
			TaskCompletionSource_1_SetResult_mF150EA4C2F543C3458DC99C93D2270543736347F(L_11, L_13, /*hidden argument*/TaskCompletionSource_1_SetResult_mF150EA4C2F543C3458DC99C93D2270543736347F_RuntimeMethod_var);
		}

IL_006a:
		{
			goto IL_0086;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t_il2cpp_TypeInfo_var, il2cpp_codegen_object_class(e.ex)))
			goto CATCH_006f;
		throw e;
	}

CATCH_006f:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t *)__exception_local);
		Exception_t * L_14 = V_1;
		String_t* L_15 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral32E8916355B734142247F16D33AC51F0ABA2C28F, L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(LogUtil_tFBAA493D07B1F33B56A3C4A8A0A3CF240AE40E90_il2cpp_TypeInfo_var);
		LogUtil_LogMessage_mC36C5CCA27AFA6A1773D0A993DAC4A0C609F6C8B(4, L_15, /*hidden argument*/NULL);
		goto IL_0086;
	} // end catch (depth: 1)

IL_0086:
	{
		Future_StorageMetadata_tD69EFEB0FDF429D4FAC432748FE78382860241CE * L_16 = __this->get_fu_0();
		NullCheck(L_16);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.FutureBase::Dispose() */, L_16);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Firebase.Storage.Future_StorageMetadata_Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mDD610D6E883AC75D9B7E02A7E4A34301F3053C3D (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.Future_StorageMetadata_Action::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_Invoke_m56C0A774070FF999888E48EAF92EF6B35A7018AB (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * __this, const RuntimeMethod* method)
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
			if (___parameterCount == 0)
			{
				// open
				typedef void (*FunctionPointerType) (const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, targetThis);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, targetThis);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, targetMethod);
			}
		}
	}
}
// System.IAsyncResult Firebase.Storage.Future_StorageMetadata_Action::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Action_BeginInvoke_m2DBAC2A72ECAC70F5AEA26CDD00CF440B5297078 (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * __this, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void Firebase.Storage.Future_StorageMetadata_Action::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_EndInvoke_mF7AEB3519E9C945CE228A6DA1D73D41521A4D677 (Action_t1A01C351F74C95684C76A3BE30208EADA4B35480 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 (SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___index0);

}
// System.Void Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate__ctor_m3FE20902A15BFB7B5032AADF8A7AD940697145C2 (SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate::Invoke(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_Invoke_mDD13F4DC19E79CF5F528E380B87489166A7789DC (SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * __this, int32_t ___index0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___index0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___index0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___index0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___index0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___index0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___index0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate::BeginInvoke(System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIG_CompletionDelegate_BeginInvoke_mB4E55CE8039752C0EB2523EDC5B589CE6E04873B (SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * __this, int32_t ___index0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIG_CompletionDelegate_BeginInvoke_mB4E55CE8039752C0EB2523EDC5B589CE6E04873B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &___index0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Storage.Future_StorageMetadata_SWIG_CompletionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIG_CompletionDelegate_EndInvoke_m35BBC0E9E9A62DEDC18B22E1CF0E614FDFB43CF0 (SWIG_CompletionDelegate_tF85B6F2E870504ED32AEB823D58E973700D31699 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Void Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ec__AnonStorey0__ctor_m7D8618D1408D36D7693BC26234BB53FBE8373164 (U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m42BB613D76FD25D6E6218B9718536EA82506A46A (U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateU3Ec__AnonStorey0_U3CU3Em__0_m42BB613D76FD25D6E6218B9718536EA82506A46A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_0 = __this->get_proxy_0();
		NullCheck(L_0);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = L_0->get_Paused_2();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_2 = __this->get_proxy_0();
		NullCheck(L_2);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = L_2->get_Paused_2();
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_4 = __this->get_proxy_0();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_5 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_3);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_3, L_4, L_5, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_002b:
	{
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal_<Create>c__AnonStorey0::<>m__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m7872BFB32CE8E08BDD427E4B68E8A93FB97C1BAC (U3CCreateU3Ec__AnonStorey0_t4543F83A13D5B2E1DF265C312AAFE0631EF32D91 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCreateU3Ec__AnonStorey0_U3CU3Em__1_m7872BFB32CE8E08BDD427E4B68E8A93FB97C1BAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_0 = __this->get_proxy_0();
		NullCheck(L_0);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_1 = L_0->get_Progress_3();
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_2 = __this->get_proxy_0();
		NullCheck(L_2);
		EventHandler_1_tA707D618BF8F29DB61DFD553B055AE4E516C1722 * L_3 = L_2->get_Progress_3();
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_4 = __this->get_proxy_0();
		IL2CPP_RUNTIME_CLASS_INIT(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var);
		EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA * L_5 = ((EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_StaticFields*)il2cpp_codegen_static_fields_for(EventArgs_tBCAACA538A5195B6D6C8DFCC3524A2A4A67FD8BA_il2cpp_TypeInfo_var))->get_Empty_0();
		NullCheck(L_3);
		EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF(L_3, L_4, L_5, /*hidden argument*/EventHandler_1_Invoke_mF69BA60CAF322C4A19F99D91FA94DC3E842035DF_RuntimeMethod_var);
	}

IL_002b:
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
// System.Void Firebase.Storage.MonitorControllerInternal_<OnPaused>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPausedU3Ec__AnonStorey1__ctor_m1EB3277C430263727B8E641ACD952FADCEA1A7CD (U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal_<OnPaused>c__AnonStorey1::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_mFF44F0F1536A8782007269A2CF52DDDB723C8D8E (U3COnPausedU3Ec__AnonStorey1_tE405CCEDE81ED907136DDC837B8D3E385BA6A52C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnPausedU3Ec__AnonStorey1_U3CU3Em__0_mFF44F0F1536A8782007269A2CF52DDDB723C8D8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * V_0 = NULL;
	{
		intptr_t L_0 = __this->get_controllerPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_1 = MonitorControllerInternal_ProxyFromCPtr_m2A8A8FC568FC32B99E2C4EA34B36BA9746DD7BFF((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_3 = V_0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3->get_forwardToPausedEvent_4();
		NullCheck(L_4);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_4, /*hidden argument*/NULL);
	}

IL_001d:
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
// System.Void Firebase.Storage.MonitorControllerInternal_<OnProgress>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnProgressU3Ec__AnonStorey2__ctor_mA2BC6F1809F36186D131D8539C1AE524DE79C04D (U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.MonitorControllerInternal_<OnProgress>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_m4CC08DAA01CFC4AB1E7D03B3F52B93FD0D87F4B0 (U3COnProgressU3Ec__AnonStorey2_t29387ED16C2D30F20A1D29E6F6F30C7E730959B1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3COnProgressU3Ec__AnonStorey2_U3CU3Em__0_m4CC08DAA01CFC4AB1E7D03B3F52B93FD0D87F4B0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * V_0 = NULL;
	{
		intptr_t L_0 = __this->get_controllerPtr_0();
		IL2CPP_RUNTIME_CLASS_INIT(MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46_il2cpp_TypeInfo_var);
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_1 = MonitorControllerInternal_ProxyFromCPtr_m2A8A8FC568FC32B99E2C4EA34B36BA9746DD7BFF((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_3 = V_0;
		NullCheck(L_3);
		Action_tAF41423D285AE0862865348CF6CE51CD085ABBA6 * L_4 = L_3->get_forwardToProgressEvent_5();
		NullCheck(L_4);
		Action_Invoke_m3FFA5BE3D64F0FF8E1E1CB6F953913FADB5EB89E(L_4, /*hidden argument*/NULL);
	}

IL_001d:
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 (MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * __this, intptr_t ___controllerPtr0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(intptr_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___controllerPtr0);

}
// System.Void Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerEventDelegate__ctor_mF9E87B8DAD63604453874B596847AB650E7335A3 (MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate::Invoke(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerEventDelegate_Invoke_m318366B3C224DF59B940320E4D99592E7332C10E (MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * __this, intptr_t ___controllerPtr0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___controllerPtr0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___controllerPtr0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___controllerPtr0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___controllerPtr0);
					else
						GenericVirtActionInvoker1< intptr_t >::Invoke(targetMethod, targetThis, ___controllerPtr0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___controllerPtr0);
					else
						VirtActionInvoker1< intptr_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___controllerPtr0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___controllerPtr0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, intptr_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___controllerPtr0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate::BeginInvoke(System.IntPtr,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* MonitorControllerEventDelegate_BeginInvoke_m84A99C9F10160902634BE3548348360AD6F2B202 (MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * __this, intptr_t ___controllerPtr0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MonitorControllerEventDelegate_BeginInvoke_m84A99C9F10160902634BE3548348360AD6F2B202_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(IntPtr_t_il2cpp_TypeInfo_var, &___controllerPtr0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Storage.MonitorControllerInternal_MonitorControllerEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonitorControllerEventDelegate_EndInvoke_m09AA622D0416CF88D9435C05F2DCDB6D83EEB0A1 (MonitorControllerEventDelegate_tD61E11AD1C27916772F50CAD5EA21FFE48273E93 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingApplicationException_mE4A57C08BA674F90CB20212239445EE5861BCC2F(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingApplicationException_mE4A57C08BA674F90CB20212239445EE5861BCC2F(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArithmeticException_mB82507CD2AB9F2F81984DC2EA437525F0E08A18E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArithmeticException_mB82507CD2AB9F2F81984DC2EA437525F0E08A18E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingDivideByZeroException_m1F075F08BEEDD2FEE94538574AED1E286BA3BA85(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingDivideByZeroException_m1F075F08BEEDD2FEE94538574AED1E286BA3BA85(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD7C5AB6A5F32F652353A15035EC9D6D2795FF8D7(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD7C5AB6A5F32F652353A15035EC9D6D2795FF8D7(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidCastException_m01055CF5321D305418D2965A985D6673C0840C3E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidCastException_m01055CF5321D305418D2965A985D6673C0840C3E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingInvalidOperationException_m4251D47C148E02697222FBCB3227E13905556FBD(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingInvalidOperationException_m4251D47C148E02697222FBCB3227E13905556FBD(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingIOException_mA195C481473D8F7DD7A70B92FE875D6E6377C94E(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingIOException_mA195C481473D8F7DD7A70B92FE875D6E6377C94E(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingNullReferenceException_mBBFFC1B9A5704370E37374A37C255A185D9AD412(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingNullReferenceException_mBBFFC1B9A5704370E37374A37C255A185D9AD412(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOutOfMemoryException_mD3BC4134504E186EFFC773B90C96F01DE0062174(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOutOfMemoryException_mD3BC4134504E186EFFC773B90C96F01DE0062174(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingOverflowException_m44402DD9964628721176A7177635DFF76A551917(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingOverflowException_m44402DD9964628721176A7177635DFF76A551917(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingSystemException_m86EDF8DDD6B0B2A082E98B0B4A558EF79A98ECC8(char* ___message0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingSystemException_m86EDF8DDD6B0B2A082E98B0B4A558EF79A98ECC8(____message0_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentException_m9E866960F2D8359572D1C86250FAD061750E9B47(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentException_m9E866960F2D8359572D1C86250FAD061750E9B47(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentNullException_m66ADF14C992180DD55E0C4B7798D12610E887403(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentNullException_m66ADF14C992180DD55E0C4B7798D12610E887403(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
extern "C" void DEFAULT_CALL ReversePInvokeWrapper_SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m18DDFA77768CBA9275826A89B5DE593DDC446CF8(char* ___message0, char* ___paramName1)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___message0' to managed representation
	String_t* ____message0_unmarshaled = NULL;
	____message0_unmarshaled = il2cpp_codegen_marshal_string_result(___message0);

	// Marshaling of parameter '___paramName1' to managed representation
	String_t* ____paramName1_unmarshaled = NULL;
	____paramName1_unmarshaled = il2cpp_codegen_marshal_string_result(___paramName1);

	// Managed method invocation
	SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m18DDFA77768CBA9275826A89B5DE593DDC446CF8(____message0_unmarshaled, ____paramName1_unmarshaled, NULL);

}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__cctor_m524D10168851F1FDA7EDA69F08F7EB0989A0BDA8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper__cctor_m524D10168851F1FDA7EDA69F08F7EB0989A0BDA8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_0 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_0, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingApplicationException_mE4A57C08BA674F90CB20212239445EE5861BCC2F_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_applicationDelegate_0(L_0);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_1 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_1, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArithmeticException_mB82507CD2AB9F2F81984DC2EA437525F0E08A18E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_arithmeticDelegate_1(L_1);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_2 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_2, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingDivideByZeroException_m1F075F08BEEDD2FEE94538574AED1E286BA3BA85_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_divideByZeroDelegate_2(L_2);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_3 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_3, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD7C5AB6A5F32F652353A15035EC9D6D2795FF8D7_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_indexOutOfRangeDelegate_3(L_3);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_4 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_4, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidCastException_m01055CF5321D305418D2965A985D6673C0840C3E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_invalidCastDelegate_4(L_4);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_5 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_5, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingInvalidOperationException_m4251D47C148E02697222FBCB3227E13905556FBD_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_invalidOperationDelegate_5(L_5);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_6 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_6, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingIOException_mA195C481473D8F7DD7A70B92FE875D6E6377C94E_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_ioDelegate_6(L_6);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_7 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_7, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingNullReferenceException_mBBFFC1B9A5704370E37374A37C255A185D9AD412_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_nullReferenceDelegate_7(L_7);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_8 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_8, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOutOfMemoryException_mD3BC4134504E186EFFC773B90C96F01DE0062174_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_outOfMemoryDelegate_8(L_8);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_9 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_9, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingOverflowException_m44402DD9964628721176A7177635DFF76A551917_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_overflowDelegate_9(L_9);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_10 = (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB *)il2cpp_codegen_object_new(ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB_il2cpp_TypeInfo_var);
		ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E(L_10, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingSystemException_m86EDF8DDD6B0B2A082E98B0B4A558EF79A98ECC8_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_systemDelegate_10(L_10);
		ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * L_11 = (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m5BC4EB29D086A1677C72AA75D0A5F56552FF0BB5(L_11, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentException_m9E866960F2D8359572D1C86250FAD061750E9B47_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_argumentDelegate_11(L_11);
		ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * L_12 = (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m5BC4EB29D086A1677C72AA75D0A5F56552FF0BB5(L_12, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentNullException_m66ADF14C992180DD55E0C4B7798D12610E887403_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_argumentNullDelegate_12(L_12);
		ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * L_13 = (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 *)il2cpp_codegen_object_new(ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328_il2cpp_TypeInfo_var);
		ExceptionArgumentDelegate__ctor_m5BC4EB29D086A1677C72AA75D0A5F56552FF0BB5(L_13, NULL, (intptr_t)((intptr_t)SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m18DDFA77768CBA9275826A89B5DE593DDC446CF8_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->set_argumentOutOfRangeDelegate_13(L_13);
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_14 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_applicationDelegate_0();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_15 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_arithmeticDelegate_1();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_16 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_divideByZeroDelegate_2();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_17 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_indexOutOfRangeDelegate_3();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_18 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_invalidCastDelegate_4();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_19 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_invalidOperationDelegate_5();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_20 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_ioDelegate_6();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_21 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_nullReferenceDelegate_7();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_22 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_outOfMemoryDelegate_8();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_23 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_overflowDelegate_9();
		ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * L_24 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_systemDelegate_10();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_StorageInternal_m54110DC64E033F8561BFE87596C6697C45FEDC61(L_14, L_15, L_16, L_17, L_18, L_19, L_20, L_21, L_22, L_23, L_24, /*hidden argument*/NULL);
		ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * L_25 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_argumentDelegate_11();
		ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * L_26 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_argumentNullDelegate_12();
		ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * L_27 = ((SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_StaticFields*)il2cpp_codegen_static_fields_for(SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB_il2cpp_TypeInfo_var))->get_argumentOutOfRangeDelegate_13();
		SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_StorageInternal_m38988C29FCB80D85021040F29CBF696828D19E67(L_25, L_26, L_27, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper__ctor_m36C57AF2D059EA55E5FFBA6831E7D313BD218C5E (SWIGExceptionHelper_t15E09F68425FF76B9D1797D4B27B28FF7DF576CB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacks_StorageInternal(Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacks_StorageInternal_m54110DC64E033F8561BFE87596C6697C45FEDC61 (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___applicationDelegate0, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___arithmeticDelegate1, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___divideByZeroDelegate2, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___indexOutOfRangeDelegate3, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___invalidCastDelegate4, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___invalidOperationDelegate5, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___ioDelegate6, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___nullReferenceDelegate7, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___outOfMemoryDelegate8, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___overflowDelegate9, ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * ___systemExceptionDelegate10, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___applicationDelegate0' to native representation
	Il2CppMethodPointer ____applicationDelegate0_marshaled = NULL;
	____applicationDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___applicationDelegate0));

	// Marshaling of parameter '___arithmeticDelegate1' to native representation
	Il2CppMethodPointer ____arithmeticDelegate1_marshaled = NULL;
	____arithmeticDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___arithmeticDelegate1));

	// Marshaling of parameter '___divideByZeroDelegate2' to native representation
	Il2CppMethodPointer ____divideByZeroDelegate2_marshaled = NULL;
	____divideByZeroDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___divideByZeroDelegate2));

	// Marshaling of parameter '___indexOutOfRangeDelegate3' to native representation
	Il2CppMethodPointer ____indexOutOfRangeDelegate3_marshaled = NULL;
	____indexOutOfRangeDelegate3_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___indexOutOfRangeDelegate3));

	// Marshaling of parameter '___invalidCastDelegate4' to native representation
	Il2CppMethodPointer ____invalidCastDelegate4_marshaled = NULL;
	____invalidCastDelegate4_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidCastDelegate4));

	// Marshaling of parameter '___invalidOperationDelegate5' to native representation
	Il2CppMethodPointer ____invalidOperationDelegate5_marshaled = NULL;
	____invalidOperationDelegate5_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___invalidOperationDelegate5));

	// Marshaling of parameter '___ioDelegate6' to native representation
	Il2CppMethodPointer ____ioDelegate6_marshaled = NULL;
	____ioDelegate6_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___ioDelegate6));

	// Marshaling of parameter '___nullReferenceDelegate7' to native representation
	Il2CppMethodPointer ____nullReferenceDelegate7_marshaled = NULL;
	____nullReferenceDelegate7_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___nullReferenceDelegate7));

	// Marshaling of parameter '___outOfMemoryDelegate8' to native representation
	Il2CppMethodPointer ____outOfMemoryDelegate8_marshaled = NULL;
	____outOfMemoryDelegate8_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___outOfMemoryDelegate8));

	// Marshaling of parameter '___overflowDelegate9' to native representation
	Il2CppMethodPointer ____overflowDelegate9_marshaled = NULL;
	____overflowDelegate9_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___overflowDelegate9));

	// Marshaling of parameter '___systemExceptionDelegate10' to native representation
	Il2CppMethodPointer ____systemExceptionDelegate10_marshaled = NULL;
	____systemExceptionDelegate10_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___systemExceptionDelegate10));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacks_StorageInternal)(____applicationDelegate0_marshaled, ____arithmeticDelegate1_marshaled, ____divideByZeroDelegate2_marshaled, ____indexOutOfRangeDelegate3_marshaled, ____invalidCastDelegate4_marshaled, ____invalidOperationDelegate5_marshaled, ____ioDelegate6_marshaled, ____nullReferenceDelegate7_marshaled, ____outOfMemoryDelegate8_marshaled, ____overflowDelegate9_marshaled, ____systemExceptionDelegate10_marshaled);

}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SWIGRegisterExceptionCallbacksArgument_StorageInternal(Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate,Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SWIGRegisterExceptionCallbacksArgument_StorageInternal_m38988C29FCB80D85021040F29CBF696828D19E67 (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * ___argumentDelegate0, ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * ___argumentNullDelegate1, ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * ___argumentOutOfRangeDelegate2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer, Il2CppMethodPointer, Il2CppMethodPointer);

	// Marshaling of parameter '___argumentDelegate0' to native representation
	Il2CppMethodPointer ____argumentDelegate0_marshaled = NULL;
	____argumentDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentDelegate0));

	// Marshaling of parameter '___argumentNullDelegate1' to native representation
	Il2CppMethodPointer ____argumentNullDelegate1_marshaled = NULL;
	____argumentNullDelegate1_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentNullDelegate1));

	// Marshaling of parameter '___argumentOutOfRangeDelegate2' to native representation
	Il2CppMethodPointer ____argumentOutOfRangeDelegate2_marshaled = NULL;
	____argumentOutOfRangeDelegate2_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___argumentOutOfRangeDelegate2));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterExceptionCallbacksArgument_StorageInternal)(____argumentDelegate0_marshaled, ____argumentNullDelegate1_marshaled, ____argumentOutOfRangeDelegate2_marshaled);

}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingApplicationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingApplicationException_mE4A57C08BA674F90CB20212239445EE5861BCC2F (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingApplicationException_mE4A57C08BA674F90CB20212239445EE5861BCC2F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_2 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingArithmeticException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArithmeticException_mB82507CD2AB9F2F81984DC2EA437525F0E08A18E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArithmeticException_mB82507CD2AB9F2F81984DC2EA437525F0E08A18E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 * L_2 = (ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47 *)il2cpp_codegen_object_new(ArithmeticException_t8E5F44FABC7FAE0966CBA6DE9BFD545F2660ED47_il2cpp_TypeInfo_var);
		ArithmeticException__ctor_mE57E2493E3AC17E8864480865B454FC8E649FC17(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingDivideByZeroException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingDivideByZeroException_m1F075F08BEEDD2FEE94538574AED1E286BA3BA85 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingDivideByZeroException_m1F075F08BEEDD2FEE94538574AED1E286BA3BA85_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 * L_2 = (DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3 *)il2cpp_codegen_object_new(DivideByZeroException_tEAEB89F460AFC9F565DBB5CEDDF8BDF1888879E3_il2cpp_TypeInfo_var);
		DivideByZeroException__ctor_m57D80957DCD74FB918E80AE50B1BDEF3D8EA1918(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingIndexOutOfRangeException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD7C5AB6A5F32F652353A15035EC9D6D2795FF8D7 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIndexOutOfRangeException_mD7C5AB6A5F32F652353A15035EC9D6D2795FF8D7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_2 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var);
		IndexOutOfRangeException__ctor_mBC06C6A0D3256301E188636E088D3291C2A9FEAD(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingInvalidCastException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidCastException_m01055CF5321D305418D2965A985D6673C0840C3E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidCastException_m01055CF5321D305418D2965A985D6673C0840C3E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 * L_2 = (InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463 *)il2cpp_codegen_object_new(InvalidCastException_tD99F9FF94C3859C78E90F68C2F77A1558BCAF463_il2cpp_TypeInfo_var);
		InvalidCastException__ctor_m0C11BE99DD92ABF0B0D58EB857CCA07566B76BFC(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingInvalidOperationException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingInvalidOperationException_m4251D47C148E02697222FBCB3227E13905556FBD (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingInvalidOperationException_m4251D47C148E02697222FBCB3227E13905556FBD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_2 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m4A65916B1316FBF45ECDF1FF7FAC9E3CA30C112C(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingIOException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingIOException_mA195C481473D8F7DD7A70B92FE875D6E6377C94E (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingIOException_mA195C481473D8F7DD7A70B92FE875D6E6377C94E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA * L_2 = (IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA *)il2cpp_codegen_object_new(IOException_t09E5C01DA4748C36D703728C4668C5CDF3882EBA_il2cpp_TypeInfo_var);
		IOException__ctor_m6FEE731FB9201F8322FB67EFEE6F43D424DFE1E7(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingNullReferenceException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingNullReferenceException_mBBFFC1B9A5704370E37374A37C255A185D9AD412 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingNullReferenceException_mBBFFC1B9A5704370E37374A37C255A185D9AD412_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 * L_2 = (NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724 *)il2cpp_codegen_object_new(NullReferenceException_t44B4F3CDE3111E74591952B8BE8707B28866D724_il2cpp_TypeInfo_var);
		NullReferenceException__ctor_mBF192916DC8DFFB60E87A643A7B6455F3B244FB9(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingOutOfMemoryException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOutOfMemoryException_mD3BC4134504E186EFFC773B90C96F01DE0062174 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOutOfMemoryException_mD3BC4134504E186EFFC773B90C96F01DE0062174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC * L_2 = (OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC *)il2cpp_codegen_object_new(OutOfMemoryException_t2671AB315BD130A49A1592BAD0AEE9F2D37667AC_il2cpp_TypeInfo_var);
		OutOfMemoryException__ctor_m3258DAC6F368D969DE3D7190760E0A739FBF41A0(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingOverflowException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingOverflowException_m44402DD9964628721176A7177635DFF76A551917 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingOverflowException_m44402DD9964628721176A7177635DFF76A551917_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 * L_2 = (OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9 *)il2cpp_codegen_object_new(OverflowException_tD1FBF4E54D81EC98EEF386B69344D336D1EC1AB9_il2cpp_TypeInfo_var);
		OverflowException__ctor_m62DFEF0935D57F14700A3C14A56C84D1D1D53A14(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingSystemException(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingSystemException_m86EDF8DDD6B0B2A082E98B0B4A558EF79A98ECC8 (String_t* ___message0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingSystemException_m86EDF8DDD6B0B2A082E98B0B4A558EF79A98ECC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		Exception_t * L_1 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 * L_2 = (SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62 *)il2cpp_codegen_object_new(SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62_il2cpp_TypeInfo_var);
		SystemException__ctor_m14A39C396B94BEE4EFEA201FB748572011855A94(L_2, L_0, L_1, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingArgumentException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentException_m9E866960F2D8359572D1C86250FAD061750E9B47 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentException_m9E866960F2D8359572D1C86250FAD061750E9B47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___message0;
		String_t* L_1 = ___paramName1;
		Exception_t * L_2 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_3 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m4A8FC5B8C861B832E1515F870BEC4B7305E69E80(L_3, L_0, L_1, L_2, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingArgumentNullException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentNullException_m66ADF14C992180DD55E0C4B7798D12610E887403 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentNullException_m66ADF14C992180DD55E0C4B7798D12610E887403_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_8 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mAD2F05A24C92A657CBCA8C43A9A373C53739A283(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_8, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper::SetPendingArgumentOutOfRangeException(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m18DDFA77768CBA9275826A89B5DE593DDC446CF8 (String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGExceptionHelper_SetPendingArgumentOutOfRangeException_m18DDFA77768CBA9275826A89B5DE593DDC446CF8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	{
		Exception_t * L_0 = SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1(/*hidden argument*/NULL);
		V_0 = L_0;
		Exception_t * L_1 = V_0;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		String_t* L_2 = ___message0;
		Exception_t * L_3 = V_0;
		NullCheck(L_3);
		String_t* L_4 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_3);
		String_t* L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_2, _stringLiteral0B47BC9031A69F662702621810EC706E2C081467, L_4, /*hidden argument*/NULL);
		___message0 = L_5;
	}

IL_001f:
	{
		String_t* L_6 = ___paramName1;
		String_t* L_7 = ___message0;
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_8 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_mE43AFC74F5F3932913C023A04B24905E093C5005(L_8, L_6, L_7, /*hidden argument*/NULL);
		SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4(L_8, /*hidden argument*/NULL);
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
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException::Set(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4 (Exception_t * ___e0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		Exception_t * L_0 = ((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_0)
		{
			goto IL_002a;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->get_pendingException_0();
		NullCheck(L_1);
		String_t* L_2 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, L_1);
		String_t* L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralCB9902E2A4DFEBC0D9FA90B929984CE8637D6BAE, L_2, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D, /*hidden argument*/NULL);
		Exception_t * L_4 = ___e0;
		ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 * L_5 = (ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407 *)il2cpp_codegen_object_new(ApplicationException_t8D709C0445A040467C6A632AD7F742B25AB2A407_il2cpp_TypeInfo_var);
		ApplicationException__ctor_m81FC14233935AF3572D8136E4CA9DD7BBA6FC861(L_5, L_3, L_4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, SWIGPendingException_Set_m23BD993945EEA01B423E4576676E72CACCF135A4_RuntimeMethod_var);
	}

IL_002a:
	{
		Exception_t * L_6 = ___e0;
		((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->set_pendingException_0(L_6);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		RuntimeObject * L_9 = V_0;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_9, /*hidden argument*/NULL);
	}

IL_0041:
	try
	{ // begin try (depth: 1)
		int32_t L_10 = ((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)));
		IL2CPP_LEAVE(0x59, FINALLY_0052);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		RuntimeObject * L_11 = V_0;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_11, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(82)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x59, IL_0059)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0059:
	{
		return;
	}
}
// System.Exception Firebase.Storage.StorageInternalPINVOKE_SWIGPendingException::Retrieve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGPendingException_Retrieve_mA5CE08561F833D5562176020299F4A7A5AE561A1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = (Exception_t *)NULL;
		int32_t L_0 = ((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_1 = ((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->get_pendingException_0();
		if (!L_1)
		{
			goto IL_004c;
		}
	}
	{
		Exception_t * L_2 = ((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->get_pendingException_0();
		V_0 = L_2;
		((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_ThreadStaticFields*)il2cpp_codegen_get_thread_static_data(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->set_pendingException_0((Exception_t *)NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (StorageInternalPINVOKE_tD3508A6BDB2F3D16940A0D57FAACB9A0628C0C1D_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		RuntimeObject * L_5 = V_1;
		Monitor_Enter_m3AEE1F76020B92B6C2742BCD05706DC5FD6F9CB2(L_5, /*hidden argument*/NULL);
	}

IL_0034:
	try
	{ // begin try (depth: 1)
		int32_t L_6 = ((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->get_numExceptionsPending_1();
		((SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_StaticFields*)il2cpp_codegen_static_fields_for(SWIGPendingException_t9228E2A60A69593A147D9B2E700463B0D65DBADC_il2cpp_TypeInfo_var))->set_numExceptionsPending_1(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)1)));
		IL2CPP_LEAVE(0x4C, FINALLY_0045);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0045;
	}

FINALLY_0045:
	{ // begin finally (depth: 1)
		RuntimeObject * L_7 = V_1;
		Monitor_Exit_mA776B403DA88AC77CDEEF67AB9F0D0E77ABD254A(L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(69)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(69)
	{
		IL2CPP_JUMP_TBL(0x4C, IL_004c)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_004c:
	{
		Exception_t * L_8 = V_0;
		return L_8;
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
extern "C" char* DEFAULT_CALL ReversePInvokeWrapper_SWIGStringHelper_CreateString_mA4BAF503E92C6B62A953BB553C435E9F64506F20(char* ___cString0)
{
	il2cpp::vm::ScopedThreadAttacher _vmThreadHelper;

	// Marshaling of parameter '___cString0' to managed representation
	String_t* ____cString0_unmarshaled = NULL;
	____cString0_unmarshaled = il2cpp_codegen_marshal_string_result(___cString0);

	// Managed method invocation
	String_t* returnValue;
	returnValue = SWIGStringHelper_CreateString_mA4BAF503E92C6B62A953BB553C435E9F64506F20(____cString0_unmarshaled, NULL);

	// Marshaling of return value back from managed representation
	char* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_marshal_string(returnValue);

	return _returnValue_marshaled;
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__cctor_mFAD3941CB7652129CD92615C06E1A97DCAB471B7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SWIGStringHelper__cctor_mFAD3941CB7652129CD92615C06E1A97DCAB471B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * L_0 = (SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB *)il2cpp_codegen_object_new(SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB_il2cpp_TypeInfo_var);
		SWIGStringDelegate__ctor_m2FA36D3BA28ED9A7C0067A0511549BAE45A4AC26(L_0, NULL, (intptr_t)((intptr_t)SWIGStringHelper_CreateString_mA4BAF503E92C6B62A953BB553C435E9F64506F20_RuntimeMethod_var), /*hidden argument*/NULL);
		((SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2_il2cpp_TypeInfo_var))->set_stringDelegate_0(L_0);
		SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * L_1 = ((SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2_StaticFields*)il2cpp_codegen_static_fields_for(SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2_il2cpp_TypeInfo_var))->get_stringDelegate_0();
		SWIGStringHelper_SWIGRegisterStringCallback_StorageInternal_mA592756B33DF2251948D18CA96B59A4BBD4048E5(L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper__ctor_mD587E21387B1095963CEDEBCC76E95AF6286A2B7 (SWIGStringHelper_t335E7E7573ABE1366ACD1C818210B9F436951FF2 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::SWIGRegisterStringCallback_StorageInternal(Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringHelper_SWIGRegisterStringCallback_StorageInternal_mA592756B33DF2251948D18CA96B59A4BBD4048E5 (SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * ___stringDelegate0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (Il2CppMethodPointer);

	// Marshaling of parameter '___stringDelegate0' to native representation
	Il2CppMethodPointer ____stringDelegate0_marshaled = NULL;
	____stringDelegate0_marshaled = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(___stringDelegate0));

	// Native function invocation
	reinterpret_cast<PInvokeFunc>(SWIGRegisterStringCallback_StorageInternal)(____stringDelegate0_marshaled);

}
// System.String Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper::CreateString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringHelper_CreateString_mA4BAF503E92C6B62A953BB553C435E9F64506F20 (String_t* ___cString0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___cString0;
		return L_0;
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
// System.Void Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA__ctor_m39FA371756130BF1878B185EA04A7533BDCFBCC0 (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA::<>m__0(System.Threading.Tasks.Task`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_m6520E2D9BCD0AADC0DA27D6FCBFEA51C9BAE8A17 (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_t2FA85AB38B8B2E4BE327B0EB65FBF6AF4A983555 * __this, Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyA_U3CU3Em__0_m6520E2D9BCD0AADC0DA27D6FCBFEA51C9BAE8A17_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 * V_0 = NULL;
	{
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 * L_0 = (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 *)il2cpp_codegen_object_new(U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9_il2cpp_TypeInfo_var);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB__ctor_m25C1C46062F0AE18971A78F9DF29DEA4B3B96069(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__refU2410_1(__this);
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 * L_2 = V_0;
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_3 = ___task0;
		NullCheck(L_2);
		L_2->set_task_0(L_3);
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_4 = __this->get_U24this_1();
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 * L_5 = V_0;
		NullCheck(L_5);
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_6 = L_5->get_task_0();
		TaskCompletionSource_1_t13FE6F458E37DC82617657A06BDE45C13C4F802B * L_7 = __this->get_result_0();
		U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 * L_8 = V_0;
		Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D * L_9 = (Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D *)il2cpp_codegen_object_new(Func_1_t8FFD9075A550A7F4745DC4BE3B364BE048B7FA4D_il2cpp_TypeInfo_var);
		Func_1__ctor_m31A959776B78F9A8F3D8A429A797A09895E6071B(L_9, L_8, (intptr_t)((intptr_t)U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m6CE73665E5201212CE900DD8CAF94D0B9FA34CBC_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m31A959776B78F9A8F3D8A429A797A09895E6071B_RuntimeMethod_var);
		NullCheck(L_4);
		StorageReference_CompleteTask_TisString_t_TisUri_t4A915E1CC15B2C650F478099AD448E9466CBF612_mF243928C92BBEEFC2E723270865A46576D71A33F(L_4, L_6, L_7, L_9, _stringLiteral5258266D8258C1C3EBCEA3316BAE21542E7FFC60, (bool)1, /*hidden argument*/StorageReference_CompleteTask_TisString_t_TisUri_t4A915E1CC15B2C650F478099AD448E9466CBF612_mF243928C92BBEEFC2E723270865A46576D71A33F_RuntimeMethod_var);
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
// System.Void Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1__ctor_mC9531CEEA3138F85A30D9BB5916BC9A7A202B22B (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1::<>m__0(System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_mF4898EA52AAD56F0D7769A267C638C12B65E3400 (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * __this, Task_1_t9744B6AD55320186C36CC7626916272750E46384 * ___task0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_U3CU3Em__0_mF4898EA52AAD56F0D7769A267C638C12B65E3400_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E * V_0 = NULL;
	{
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E * L_0 = (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E *)il2cpp_codegen_object_new(U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E_il2cpp_TypeInfo_var);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2__ctor_m01DDF1171FF626C47FA2FAA661402B693E782665(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E * L_1 = V_0;
		NullCheck(L_1);
		L_1->set_U3CU3Ef__refU241_1(__this);
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E * L_2 = V_0;
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_3 = ___task0;
		NullCheck(L_2);
		L_2->set_task_0(L_3);
		GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 * L_4 = __this->get_address_of_bytesHandle_0();
		GCHandle_Free_mB4E9415544FC9F0075C02AB17E270E49AF006025((GCHandle_t757890BC4BBBEDE5A623A3C110013EDD24613603 *)L_4, /*hidden argument*/NULL);
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_5 = __this->get_U24this_3();
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E * L_6 = V_0;
		NullCheck(L_6);
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_7 = L_6->get_task_0();
		TaskCompletionSource_1_t00BB870FF8F0CD6EDA31476D1503182C31DD1124 * L_8 = __this->get_completionSource_1();
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E * L_9 = V_0;
		Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294 * L_10 = (Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294 *)il2cpp_codegen_object_new(Func_1_tF7245D3958554A6AAF4D619F59447D5846FAD294_il2cpp_TypeInfo_var);
		Func_1__ctor_m5C72D9FA73D9638CD3B9AB6A6E073D15BACF9416(L_10, L_9, (intptr_t)((intptr_t)U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m78676667BD22EB946B6A117D09E1C5CBF3122F88_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m5C72D9FA73D9638CD3B9AB6A6E073D15BACF9416_RuntimeMethod_var);
		NullCheck(L_5);
		StorageReference_CompleteTask_TisMetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_TisStorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_m3F52D66436B38764F6958A1A4B46B436895598B6(L_5, L_7, L_8, L_10, _stringLiteral23D374B805E7C318DEBA3F3DF4C1304D85FADD6C, (bool)1, /*hidden argument*/StorageReference_CompleteTask_TisMetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2_TisStorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_m3F52D66436B38764F6958A1A4B46B436895598B6_RuntimeMethod_var);
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
// System.Void Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0__ctor_mF244687FE14CAF5EDA5634EFE238AB0696E18EB5 (U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal> Firebase.Storage.StorageReference_<PutBytesUsingMonitorControllerAsync>c__AnonStorey0::<>m__0(System.Threading.Tasks.Task`1<Firebase.Storage.MetadataInternal>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9744B6AD55320186C36CC7626916272750E46384 * U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_U3CU3Em__0_m56A55C478315456AD2F8C3C7D6EBC7C8D69BEB9B (U3CPutBytesUsingMonitorControllerAsyncU3Ec__AnonStorey0_tFA712BF7DFA0600AC9F2EB4D343E81CB8DD5B826 * __this, Task_1_t9744B6AD55320186C36CC7626916272750E46384 * ___completedTask0, const RuntimeMethod* method)
{
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_0 = __this->get_monitorController_0();
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.MonitorControllerInternal::Dispose() */, L_0);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_1 = __this->get_metadata_1();
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_2 = __this->get_metadata_1();
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(5 /* System.Void Firebase.Storage.MetadataInternal::Dispose() */, L_2);
	}

IL_0021:
	{
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_3 = ___completedTask0;
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
// System.Void Firebase.Storage.StorageReference_TaskCompletionStatus::.ctor(System.Threading.Tasks.Task,System.String,Firebase.Storage.Internal.ModuleLogger)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionStatus__ctor_m2EFB845454673F24F49514B8D578AC3E792432AB (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___task0, String_t* ___operationDescription1, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___logger2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TaskCompletionStatus__ctor_m2EFB845454673F24F49514B8D578AC3E792432AB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * V_0 = NULL;
	StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * G_B7_0 = NULL;
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_0 = ___task0;
		NullCheck(L_0);
		bool L_1 = Task_get_IsCompleted_m7EF73EE6C4F400997345371FFB10137D8E9B4E1E(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0041;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_2 = ___task0;
		NullCheck(L_2);
		bool L_3 = Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855(L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0041;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_4 = ___task0;
		NullCheck(L_4);
		bool L_5 = Task_get_IsCanceled_m4D3446507B67CD13F0A7A50D0299105E2817FC66(L_4, /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		TaskCompletionStatus_set_IsSuccessful_mAB0F0455B5AF7AE5003981889CCF77387A42D194_inline(__this, (bool)1, /*hidden argument*/NULL);
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_6 = ___logger2;
		String_t* L_7 = ___operationDescription1;
		String_t* L_8 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral9F801AE6E6E2D908D38CEB0291DD9138A0955C1F, L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_6, 1, L_8, /*hidden argument*/NULL);
		return;
	}

IL_0041:
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_9 = ___task0;
		NullCheck(L_9);
		bool L_10 = Task_get_IsFaulted_mDA5DABB816C7B86B0B8AA733FBDD07802483B855(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005c;
		}
	}
	{
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_11 = ___task0;
		NullCheck(L_11);
		AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * L_12 = Task_get_Exception_m53945993385D4031240B0DB2C0585ABBFB8CFA81(L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A_il2cpp_TypeInfo_var);
		StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * L_13 = StorageException_CreateFromException_m324DF221BCB586CFA8E1229F6F36D7DBFD373D95(L_12, /*hidden argument*/NULL);
		G_B7_0 = L_13;
		goto IL_005d;
	}

IL_005c:
	{
		G_B7_0 = ((StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A *)(NULL));
	}

IL_005d:
	{
		V_0 = G_B7_0;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_14 = ___task0;
		NullCheck(L_14);
		bool L_15 = Task_get_IsCanceled_m4D3446507B67CD13F0A7A50D0299105E2817FC66(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_007f;
		}
	}
	{
		StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * L_16 = V_0;
		if (!L_16)
		{
			goto IL_0099;
		}
	}
	{
		StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * L_17 = V_0;
		NullCheck(L_17);
		int32_t L_18 = StorageException_get_ErrorCode_m559860A50ACD01BEFAE8B80950624689DE744368_inline(L_17, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_18) == ((uint32_t)((int32_t)-13040)))))
		{
			goto IL_0099;
		}
	}

IL_007f:
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_19 = ___logger2;
		String_t* L_20 = ___operationDescription1;
		String_t* L_21 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral3EEAB15902D7B9E5B95F0F17AA9E004D9C742836, L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_19, 1, L_21, /*hidden argument*/NULL);
		TaskCompletionStatus_set_IsCanceled_mC5394D71988284F08D583677AA39466AE2004501_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_0099:
	{
		StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * L_22 = V_0;
		TaskCompletionStatus_set_Exception_m657523E1C7197F19AAF71F1F80A0C3D834A82D66_inline(__this, L_22, /*hidden argument*/NULL);
		Exception_t * L_23 = TaskCompletionStatus_get_Exception_m71957E945B0D7BC6CCDDF9915D724EA1F6CF5086_inline(__this, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_00c9;
		}
	}
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_24 = ___logger2;
		String_t* L_25 = ___operationDescription1;
		Exception_t * L_26 = TaskCompletionStatus_get_Exception_m71957E945B0D7BC6CCDDF9915D724EA1F6CF5086_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		String_t* L_27 = VirtFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_26);
		String_t* L_28 = String_Format_m8D1CB0410C35E052A53AE957C914C841E54BAB66(_stringLiteral86149811E84E20CCC982587E52B8CF7A38EF9589, L_25, L_27, /*hidden argument*/NULL);
		NullCheck(L_24);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_24, 1, L_28, /*hidden argument*/NULL);
		return;
	}

IL_00c9:
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_29 = ___logger2;
		String_t* L_30 = ___operationDescription1;
		String_t* L_31 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralA709CBC3188708C18877C22E6AF1D6538EB08EAD, L_30, /*hidden argument*/NULL);
		NullCheck(L_29);
		ModuleLogger_LogMessage_m21EA354B3D536C869098C6F767132F7FB91B23E0(L_29, 1, L_31, /*hidden argument*/NULL);
		String_t* L_32 = ___operationDescription1;
		String_t* L_33 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralFE45832FA8619B51BADFA5FA6E889D63BD0649CB, L_32, /*hidden argument*/NULL);
		InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB * L_34 = (InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB *)il2cpp_codegen_object_new(InvalidOperationException_t10D3EE59AD28EC641ACEE05BCA4271A527E5ECAB_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_mC012CE552988309733C896F3FEA8249171E4402E(L_34, L_33, /*hidden argument*/NULL);
		TaskCompletionStatus_set_Exception_m657523E1C7197F19AAF71F1F80A0C3D834A82D66_inline(__this, L_34, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Firebase.Storage.StorageReference_TaskCompletionStatus::get_IsSuccessful()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionStatus_get_IsSuccessful_m78B514782AD0360A600C08D23C89A732222A4423 (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsSuccessfulU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference_TaskCompletionStatus::set_IsSuccessful(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsSuccessful_mAB0F0455B5AF7AE5003981889CCF77387A42D194 (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsSuccessfulU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.Boolean Firebase.Storage.StorageReference_TaskCompletionStatus::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TaskCompletionStatus_get_IsCanceled_m4C37CB95425A9A14A906ED9673EA29FA891EA0D2 (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CIsCanceledU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference_TaskCompletionStatus::set_IsCanceled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsCanceled_mC5394D71988284F08D583677AA39466AE2004501 (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsCanceledU3Ek__BackingField_1(L_0);
		return;
	}
}
// System.Exception Firebase.Storage.StorageReference_TaskCompletionStatus::get_Exception()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Exception_t * TaskCompletionStatus_get_Exception_m71957E945B0D7BC6CCDDF9915D724EA1F6CF5086 (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_U3CExceptionU3Ek__BackingField_2();
		return L_0;
	}
}
// System.Void Firebase.Storage.StorageReference_TaskCompletionStatus::set_Exception(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_Exception_m657523E1C7197F19AAF71F1F80A0C3D834A82D66 (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___value0;
		__this->set_U3CExceptionU3Ek__BackingField_2(L_0);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Marshaling of parameter '___paramName1' to native representation
	char* ____paramName1_marshaled = NULL;
	____paramName1_marshaled = il2cpp_codegen_marshal_string(___paramName1);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled, ____paramName1_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	// Marshaling cleanup of parameter '___paramName1' native representation
	il2cpp_codegen_marshal_free(____paramName1_marshaled);
	____paramName1_marshaled = NULL;

}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate__ctor_m5BC4EB29D086A1677C72AA75D0A5F56552FF0BB5 (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::Invoke(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_Invoke_m90AAB437A4F30A105A3ECCC13BC9F281C045D167 (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method)
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
				typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
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
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0, ___paramName1);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___paramName1) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
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
					typedef void (*FunctionPointerType) (String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, ___paramName1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
					else
						GenericVirtActionInvoker2< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0, ___paramName1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0, ___paramName1);
					else
						VirtActionInvoker2< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0, ___paramName1);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), ___paramName1, targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, ___paramName1, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::BeginInvoke(System.String,System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionArgumentDelegate_BeginInvoke_m9B0261AD943922792E1BFAD5C3FC61C45DDFE760 (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * __this, String_t* ___message0, String_t* ___paramName1, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___message0;
	__d_args[1] = ___paramName1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionArgumentDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionArgumentDelegate_EndInvoke_m8EB552035CFD9284ABA5689A85C7DE0116B51C93 (ExceptionArgumentDelegate_t48427340C5314303B80E7D5415242472EF1BF328 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate__ctor_mDE9DB7D075B6BF22BE33C7ED585E688280C4783E (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_Invoke_m75CF8E0569A48C1C47A244B87B7B4FC56EFA6368 (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * __this, String_t* ___message0, const RuntimeMethod* method)
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
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___message0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						GenericVirtActionInvoker1< String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						VirtActionInvoker1< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ExceptionDelegate_BeginInvoke_mA695AAFAA3FE38F2852135AF025ECCF252A597AE (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGExceptionHelper_ExceptionDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDelegate_EndInvoke_m8DB6777347142D47411ECAA4359E7B5857B9D8AF (ExceptionDelegate_t469A1F69DE1406D6712D162C4905DB9C780AEEEB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  String_t* DelegatePInvokeWrapper_SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB (SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * __this, String_t* ___message0, const RuntimeMethod* method)
{
	typedef char* (DEFAULT_CALL *PInvokeFunc)(char*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___message0' to native representation
	char* ____message0_marshaled = NULL;
	____message0_marshaled = il2cpp_codegen_marshal_string(___message0);

	// Native function invocation
	char* returnValue = il2cppPInvokeFunc(____message0_marshaled);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_string_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free(returnValue);
	returnValue = NULL;

	// Marshaling cleanup of parameter '___message0' native representation
	il2cpp_codegen_marshal_free(____message0_marshaled);
	____message0_marshaled = NULL;

	return _returnValue_unmarshaled;
}
// System.Void Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SWIGStringDelegate__ctor_m2FA36D3BA28ED9A7C0067A0511549BAE45A4AC26 (SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.String Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::Invoke(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_Invoke_m98055BAFCFF3D9B306836015D614BF2963B035E0 (SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * __this, String_t* ___message0, const RuntimeMethod* method)
{
	String_t* result = NULL;
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
			if (___parameterCount == 1)
			{
				// open
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
			else
			{
				// closed
				typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
					else
						result = GenericVirtFuncInvoker0< String_t* >::Invoke(targetMethod, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___message0);
					else
						result = VirtFuncInvoker0< String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___message0);
				}
			}
			else
			{
				typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
				result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef String_t* (*FunctionPointerType) (String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(___message0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = GenericInterfaceFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
					else
						result = GenericVirtFuncInvoker1< String_t*, String_t* >::Invoke(targetMethod, targetThis, ___message0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						result = InterfaceFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___message0);
					else
						result = VirtFuncInvoker1< String_t*, String_t* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___message0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef String_t* (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(___message0) - 1), targetMethod);
				}
				else
				{
					typedef String_t* (*FunctionPointerType) (void*, String_t*, const RuntimeMethod*);
					result = ((FunctionPointerType)targetMethodPointer)(targetThis, ___message0, targetMethod);
				}
			}
		}
	}
	return result;
}
// System.IAsyncResult Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::BeginInvoke(System.String,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SWIGStringDelegate_BeginInvoke_m79F6A37A9BDBFCB83BD0D37F4BDFE429E95C361C (SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * __this, String_t* ___message0, AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___message0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.String Firebase.Storage.StorageInternalPINVOKE_SWIGStringHelper_SWIGStringDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SWIGStringDelegate_EndInvoke_m786923BA067DF3E518F2A8D9879B1D7F46E11CB4 (SWIGStringDelegate_t2F9A63F397C45C945CDEA5E7FC3EDBAE3A1B57BB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	RuntimeObject *__result = il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
	return (String_t*)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB__ctor_m25C1C46062F0AE18971A78F9DF29DEA4B3B96069 (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Uri Firebase.Storage.StorageReference_<GetDownloadUrlAsync>c__AnonStoreyA_<GetDownloadUrlAsync>c__AnonStoreyB::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m6CE73665E5201212CE900DD8CAF94D0B9FA34CBC (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_t89521B6D180A6016450E764A6A143922495978C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CGetDownloadUrlAsyncU3Ec__AnonStoreyB_U3CU3Em__0_m6CE73665E5201212CE900DD8CAF94D0B9FA34CBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		Task_1_t30D80D0F41B19BC27A8D1141D69741D0B986B2C3 * L_0 = __this->get_task_0();
		NullCheck(L_0);
		String_t* L_1 = Task_1_get_Result_m49B9A0DA69ECD33F7F946948364A63C1EE1EEBA0(L_0, /*hidden argument*/Task_1_get_Result_m49B9A0DA69ECD33F7F946948364A63C1EE1EEBA0_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2 = V_0;
		bool L_3 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0019;
		}
	}
	{
		return (Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 *)NULL;
	}

IL_0019:
	{
		String_t* L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91_il2cpp_TypeInfo_var);
		Uri_t4A915E1CC15B2C650F478099AD448E9466CBF612 * L_5 = FirebaseStorage_ConstructFormattedUri_m30866AD2A7AC8B9764B12728451E0EBD7017FF3C(L_4, /*hidden argument*/NULL);
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
// System.Void Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2__ctor_m01DDF1171FF626C47FA2FAA661402B693E782665 (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// Firebase.Storage.StorageMetadata Firebase.Storage.StorageReference_<PutBytesUsingCompletionSourceAsync>c__AnonStorey1_<PutBytesUsingCompletionSourceAsync>c__AnonStorey2::<>m__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m78676667BD22EB946B6A117D09E1C5CBF3122F88 (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_t34FB615FC0AA6577382F01691F17396CBB96730E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey2_U3CU3Em__0_m78676667BD22EB946B6A117D09E1C5CBF3122F88_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * V_0 = NULL;
	{
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_0 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_0);
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_1 = L_0->get_U24this_3();
		Task_1_t9744B6AD55320186C36CC7626916272750E46384 * L_2 = __this->get_task_0();
		NullCheck(L_2);
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_3 = Task_1_get_Result_m9A58CC099EC7938F5CE074298FF7480564DCB86E(L_2, /*hidden argument*/Task_1_get_Result_m9A58CC099EC7938F5CE074298FF7480564DCB86E_RuntimeMethod_var);
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_4 = (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 *)il2cpp_codegen_object_new(StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060_il2cpp_TypeInfo_var);
		StorageMetadata__ctor_mFBED4D3E575AE070D6494EF81F878F53D938C824(L_4, L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		U3CPutBytesUsingCompletionSourceAsyncU3Ec__AnonStorey1_t406BA2D4095852BDAA07E652981795A107E5D4DA * L_5 = __this->get_U3CU3Ef__refU241_1();
		NullCheck(L_5);
		TransferStateUpdater_1_t3E3E92D6758D43ADF7CA904D3E4456CF9CF23809 * L_6 = L_5->get_transferStateUpdater_2();
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_7 = V_0;
		NullCheck(L_6);
		TransferStateUpdater_1_SetMetadata_m1BFF84F93583D678D9BA14C9520336DCBA3FE8DA(L_6, L_7, /*hidden argument*/TransferStateUpdater_1_SetMetadata_m1BFF84F93583D678D9BA14C9520336DCBA3FE8DA_RuntimeMethod_var);
		StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * L_8 = V_0;
		return L_8;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR intptr_t HandleRef_get_Handle_m0768FA4E8D38B46978DB96DAEDCD4947E5256ED5_inline (HandleRef_t1DB3576C2CC9E4AD072DF40863E6F352BE12BACF * __this, const RuntimeMethod* method)
{
	{
		intptr_t L_0 = __this->get_m_handle_1();
		return (intptr_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModuleLogger_set_Tag_m7ECACA8B7C965C422E171F9AD64A3CF377641A13_inline (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_tag_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ModuleLogger_set_Level_m5BA3815BE5A9457A780F508962931E2DAC4AEBC6_inline (ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_logLevel_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseStorage_set_Logger_m1241ABB29DEFBB0EC0F19263C3EFEB7221EFDF72_inline (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___value0, const RuntimeMethod* method)
{
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_0 = ___value0;
		__this->set_U3CLoggerU3Ek__BackingField_5(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FirebaseStorageInternal_SetSwigCMemOwn_m92F09F2A153ED27C2745E3B85AB045B3D37A3102_inline (FirebaseStorageInternal_t53B24C0BCB4273325E551C68314B238F9B1B6B36 * __this, bool ___ownership0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___ownership0;
		__this->set_swigCMemOwn_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * FirebaseStorage_get_Logger_mDB3D4DD2E0032837EB8AF021D7411C9E4D1F6735_inline (FirebaseStorage_tB99A87180DEE402B6CD85A1776907F17DB0CDF91 * __this, const RuntimeMethod* method)
{
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_0 = __this->get_U3CLoggerU3Ek__BackingField_5();
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* AppOptions_get_StorageBucket_m63489CFD73EA950BCF40D828F23658740C8B35FB_inline (AppOptions_t4331FE903AEA53AF1E7D4252BC60D243B9D2158F * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CStorageBucketU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* FirebaseApp_get_Name_m5945BBCED21D565E2D871D4CC00D03BB6EDB60B8_inline (FirebaseApp_t3592A6306730FCDF285B555F3B4A83F56B9C093D * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_name_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageException_set_ErrorCode_m7F1E6499E95BC4CE92F61396018B18069FD9FD10_inline (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CErrorCodeU3Ek__BackingField_19(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageException_set_HttpResultCode_m9E9AEFF8E15CE1DE5F195354BFE11B973D41816B_inline (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CHttpResultCodeU3Ek__BackingField_20(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * AggregateException_get_InnerExceptions_m2020FC3A2334DDB72FEBFB2BF4CFE088FF83FEFE_inline (AggregateException_t45A871D3DBDA3E28FBCD8DF21F6772238FC55BD1 * __this, const RuntimeMethod* method)
{
	{
		ReadOnlyCollection_1_t06CAAF5787D8FDE0CB0F04082673EC9B212451BE * L_0 = __this->get_m_innerExceptions_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t FirebaseException_get_ErrorCode_mA7E9CF1AB755AEEE49032E4AC4A7A253C3735F60_inline (FirebaseException_t80812F0C7BA9277B701A891E7575AC4DAEE1DA47 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageMetadata_set_Internal_m04FC4FD97C2FA2B7AE16654FB78793628DDE9FD6_inline (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * ___value0, const RuntimeMethod* method)
{
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * StorageMetadata_get_Internal_m2EE37A1FF1ED7F5295F124069C553F98B03A1497_inline (StorageMetadata_t495DC84DCF957FA101CA5040667FB204E1B3D060 * __this, const RuntimeMethod* method)
{
	{
		MetadataInternal_tACEF0FCBDC80B2247920C9A988F9BF6B5E5F57C2 * L_0 = __this->get_U3CInternalU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageReference_set_Internal_mCE9F92CBF066C6CFB870B0C4BB5B523BF5014CE6_inline (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * ___value0, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_0 = ___value0;
		__this->set_U3CInternalU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void StorageReference_set_Logger_mA4934385891F36A75E7CF86DF5CC78568A42BCA1_inline (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * ___value0, const RuntimeMethod* method)
{
	{
		ModuleLogger_tE3645E3EB52E4858842A5CD8C02D5A35354F8608 * L_0 = ___value0;
		__this->set_U3CLoggerU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * StorageReference_get_Internal_m337277BB1424AB2DB192EDC3B69EE9A80B2F36F1_inline (StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * __this, const RuntimeMethod* method)
{
	{
		StorageReferenceInternal_tD2E3FA285E336D60440817C78412D9CFA55CC35F * L_0 = __this->get_U3CInternalU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * UploadState_get_State_m41DBB6A43534377466296E74CFC403EE6F269DAF_inline (UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * __this, const RuntimeMethod* method)
{
	{
		TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * L_0 = __this->get_U3CStateU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransferState_set_Reference_m5CE8FB86AA8B620852C444B7E6DFB76739DEF0D1_inline (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * ___value0, const RuntimeMethod* method)
{
	{
		StorageReference_tD5DA3FADF34ACC33ED8C3A97D2EF2179567C3A9F * L_0 = ___value0;
		__this->set_U3CReferenceU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TransferState_set_TotalByteCount_m3D270DEDE3CE7421D13A0092F48D52163B9B4441_inline (TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * __this, int64_t ___value0, const RuntimeMethod* method)
{
	{
		int64_t L_0 = ___value0;
		__this->set_U3CTotalByteCountU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void UploadState_set_State_m0BEC312E906D39DB1588D02B13C3250FDE3F7544_inline (UploadState_tBB14204E88E819D6E95DE7FDE7EA73433FBBD92C * __this, TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * ___value0, const RuntimeMethod* method)
{
	{
		TransferState_tBACF5C63A67F19BB13562F942DD276DB41D2B935 * L_0 = ___value0;
		__this->set_U3CStateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsSuccessful_mAB0F0455B5AF7AE5003981889CCF77387A42D194_inline (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsSuccessfulU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t StorageException_get_ErrorCode_m559860A50ACD01BEFAE8B80950624689DE744368_inline (StorageException_t4D23A60FF26CB45D7B673CD1C6808BC78A5FF04A * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_U3CErrorCodeU3Ek__BackingField_19();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_IsCanceled_mC5394D71988284F08D583677AA39466AE2004501_inline (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CIsCanceledU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TaskCompletionStatus_set_Exception_m657523E1C7197F19AAF71F1F80A0C3D834A82D66_inline (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, Exception_t * ___value0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___value0;
		__this->set_U3CExceptionU3Ek__BackingField_2(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Exception_t * TaskCompletionStatus_get_Exception_m71957E945B0D7BC6CCDDF9915D724EA1F6CF5086_inline (TaskCompletionStatus_tAB55DBA8B1EF07B3D0361BA05D5F64ABBC71ADBD * __this, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = __this->get_U3CExceptionU3Ek__BackingField_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskCompletionSource_1_get_Task_m7F788C2231343328FBBCFE9EDA916E748F699618_gshared_inline (TaskCompletionSource_1_t5B48A13B0469AA5A5797B645926E284436099903 * __this, const RuntimeMethod* method)
{
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)__this->get_m_task_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item2_mEA706559A417C166E2F77D7B23738BB33C21BBA2_gshared_inline (Tuple_2_tA8C0380315DDBC685CC273129020D3C7192B905D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item2_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Tuple_2_get_Item1_m796304B7E4938AA120C7F40CCB7E51ED0360E09F_gshared_inline (Tuple_2_tA8C0380315DDBC685CC273129020D3C7192B905D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get_m_Item1_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * TransferStateUpdater_1_get_MonitorController_m6F7F53BB71905E8F49A9B2E85AD0F21A8B241C80_gshared_inline (TransferStateUpdater_1_t21814190B06B56A959984F8756FAC3A1DA070A16 * __this, const RuntimeMethod* method)
{
	{
		MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 * L_0 = (MonitorControllerInternal_t0022B337F6E6FCBB983515F04E0C9C9D8E02AD46 *)__this->get_U3CMonitorControllerU3Ek__BackingField_3();
		return L_0;
	}
}