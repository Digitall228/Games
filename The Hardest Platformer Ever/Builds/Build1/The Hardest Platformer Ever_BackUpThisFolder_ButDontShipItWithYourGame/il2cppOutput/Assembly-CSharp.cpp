#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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

// AI
struct AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6;
// AI/<Animation>d__21
struct U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389;
// AI/<Logic>d__23
struct U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44;
// AI/Attack
struct Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0;
// AI/ComeUp
struct ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE;
// AI/Compute
struct Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B;
// Bullet
struct Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059;
// Bullet/<Disable>d__11
struct U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676;
// BulletPool
struct BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7;
// BulletPool[]
struct BulletPoolU5BU5D_t69E4BA9FCA1D171081C7CCEDFC4C97071716EF72;
// Bullet[]
struct BulletU5BU5D_tBD840364B2617C0B508AD221F718F3A9157F5F9E;
// CameraTransform
struct CameraTransform_tFAC65BA02FB8CDEC85F0C46232EAC5154316A0C9;
// Enemy
struct Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6;
// Gun
struct Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB;
// Gun/<>c
struct U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482;
// Gun/<ReCharge>d__11
struct U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1;
// Gun/<ResetDelay>d__10
struct U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1;
// GunData
struct GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25;
// Player
struct Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873;
// PlayerCollision
struct PlayerCollision_t71D1DFEA769AA3755DD3E9B39ECEC8A13E9C495F;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<Bullet>
struct List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2;
// System.Collections.Generic.List`1<BulletPool>
struct List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Collections.IEnumerator
struct IEnumerator_t8789118187258CC88B77AFAC6315B5AF87D3E18A;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Predicate`1<Bullet>
struct Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB;
// System.Predicate`1<BulletPool>
struct Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8;
// System.Predicate`1<System.Object>
struct Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.Collider2D
struct Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;
// UnityEngine.WaitForEndOfFrame
struct WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;

IL2CPP_EXTERN_C RuntimeClass* Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral143E94AF41CE0F05B57800590E4BC48D23FAA6C2;
IL2CPP_EXTERN_C String_t* _stringLiteral54D967C56163A7E14F4480A51E18F12D4AE4E98C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_TryGetComponent_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_m7F72BAABA2F1D4D41F673EFFE42A58C6B056B081_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enemy_WalkUp_m573D378452064576A38CB933D0E19DED5991A65D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mC44AB386177196D8110F3E6D8F0E814D44438271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Gun_U3CStartU3Eb__8_0_m8DCDEA4DE8AA1218FCEB72C3D2D9ECD1474F0A5E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m09B2470FCEF2873876D243BA512D88AF3CF94F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m85B2C900F890A48CC90DBC9AD9A457776EFDB399_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m080A63F084BCFE3CAD3146EB5DD422D226F20A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mB72A91F399B043022B5C053A9FDE01790490438A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m2C1E19BCB032B5FC75189F77E66E0C28CDF8EB4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m491255BD6D453EF3074DF81DA752A77E70876C6D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_mAFF522F8A426CEBAF27117F98DE0814BE35F762D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m1C51FDE5662C3D1817F83D0520807E051E62429B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m67DD13F2FC5D4E64B65524C143E23711A0335636_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CAnimationU3Ed__21_System_Collections_IEnumerator_Reset_m0F1B47C531E8C9D2F9839C2B20B9778C9AE4C221_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CDisableU3Ed__11_System_Collections_IEnumerator_Reset_m2D53D0A260441FCB4E97FE630AFD012E45A1CA72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLogicU3Ed__23_System_Collections_IEnumerator_Reset_m4A21B72A47F42F0595FA07A1B3A87CA3AA147B91_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CReChargeU3Ed__11_System_Collections_IEnumerator_Reset_m354E0E57682FB7C0CD32059EF56CC56629AA9F0C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CResetDelayU3Ed__10_System_Collections_IEnumerator_Reset_m1F6E5522CB2CC9F93C6A35F54B4BACF69AF9348C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CFindFreeBulletU3Eb__12_0_mE07BFC6BC8BBA3556AE06F867F1FFC7DB85DA016_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AI_Animation_mAD21BE4E47BB6FE84F2784AB1857469E877B2AD0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AI_Logic_m1E821B99D10FAA75142033A8F0655F7B846ABECB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AI_Sense_m2C84E258407D22FE8212FC8F34966535180B7EE5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AI_Start_m632AF1ED3E093FF0D73D2F04F959F1320AA0C0B8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AI_Think_mE47BC5C1C1C0BC7AE2AE29304AE49016D7259410_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BulletPool__ctor_mF0DE487BB45618178558BD0040766B3B802E86A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Bullet_Disable_mEA219B9EE14FFB15B7FA69083D68B216BC965C9D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Bullet_Update_m1C6B5808E27E786F3EC4DD275829C9DE981F117E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Compute_BeginInvoke_m32F351C78E0FB76B2EA2E71BF732CD71BD2BDE03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Anim_m42C314C21ED5588A920D818839F485966A21AFF5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Start_mEA16629472D3B5EF50899E1A091ADF28463DD033_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_WalkUp_m573D378452064576A38CB933D0E19DED5991A65D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Gun_CreateNewBullet_m57357ED34EEE2A59F759C61C4AA8A2EE108CBDB8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Gun_FindFreeBullet_m80D20CB85083F752C6F7E85A0E217A23C854F378_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Gun_ReCharge_mDCDB24D9BDA19B8C8CD78B78A911A6CDA4472977_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Gun_ResetDelay_m64904CFDA3AB451960529DE2F76C58805632E305_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Gun_Shoot_mCBB8ED42E31E62F72B7843FD9186F6AA9BAFE129_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Gun_Start_mFF66BFE3A8EB1184BAC60BDB87CD29DBC4561522_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PlayerCollision_OnTriggerEnter2D_m576D92921265D488F327CDC362EF3EA13C043F36_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_FixedUpdate_mE20A1C81FD65599E65968B3747E282F3017B0786_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Jump_mE66EF456E76ADA55CCFD83638CCCAE9BC04E7B4F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Move_mC0113B4902DF04D386E1A99421A34E359986690E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_Start_mD6E1D31879EB485356D1C22C8AE12C5DF6392E79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Pools__cctor_mCE16F1DF1835D64EE6D3B20D5B4696544420244A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimationU3Ed__21_MoveNext_mABD2BB710753804F495D33BA145BB7B1DF569ED9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CAnimationU3Ed__21_System_Collections_IEnumerator_Reset_m0F1B47C531E8C9D2F9839C2B20B9778C9AE4C221_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDisableU3Ed__11_MoveNext_mC5E9DC7DFE3AE0465E8C0212A0AD5C9859285883_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CDisableU3Ed__11_System_Collections_IEnumerator_Reset_m2D53D0A260441FCB4E97FE630AFD012E45A1CA72_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLogicU3Ed__23_MoveNext_m08DD3E17910B6389B0C178FE077B1A58AF2864BD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CLogicU3Ed__23_System_Collections_IEnumerator_Reset_m4A21B72A47F42F0595FA07A1B3A87CA3AA147B91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CReChargeU3Ed__11_MoveNext_mC869237D4B0E1CB69CCF941E1213257A605A7A32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CReChargeU3Ed__11_System_Collections_IEnumerator_Reset_m354E0E57682FB7C0CD32059EF56CC56629AA9F0C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CResetDelayU3Ed__10_MoveNext_mB8CA2EA46148BD25727ECF34E70D55BB81710306_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CResetDelayU3Ed__10_System_Collections_IEnumerator_Reset_m1F6E5522CB2CC9F93C6A35F54B4BACF69AF9348C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_mD5A8D0F77A68E106F1B798E8F13B955A717CF808_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165;
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t6CDDDF959E7E18A6744E43B613F41CDAC780256A 
{
public:

public:
};


// System.Object


// AI_<Animation>d__21
struct  U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389  : public RuntimeObject
{
public:
	// System.Int32 AI_<Animation>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AI_<Animation>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AI AI_<Animation>d__21::<>4__this
	AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389, ___U3CU3E4__this_2)); }
	inline AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// AI_<Logic>d__23
struct  U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44  : public RuntimeObject
{
public:
	// System.Int32 AI_<Logic>d__23::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AI_<Logic>d__23::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AI AI_<Logic>d__23::<>4__this
	AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44, ___U3CU3E4__this_2)); }
	inline AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Bullet_<Disable>d__11
struct  U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676  : public RuntimeObject
{
public:
	// System.Int32 Bullet_<Disable>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Bullet_<Disable>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Bullet Bullet_<Disable>d__11::<>4__this
	Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676, ___U3CU3E4__this_2)); }
	inline Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Gun_<>c
struct  U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_StaticFields
{
public:
	// Gun_<>c Gun_<>c::<>9
	U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 * ___U3CU3E9_0;
	// System.Predicate`1<Bullet> Gun_<>c::<>9__12_0
	Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};


// Gun_<ReCharge>d__11
struct  U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1  : public RuntimeObject
{
public:
	// System.Int32 Gun_<ReCharge>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Gun_<ReCharge>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Gun Gun_<ReCharge>d__11::<>4__this
	Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * ___U3CU3E4__this_2;
	// System.Int32 Gun_<ReCharge>d__11::bullets
	int32_t ___bullets_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1, ___U3CU3E4__this_2)); }
	inline Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_bullets_3() { return static_cast<int32_t>(offsetof(U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1, ___bullets_3)); }
	inline int32_t get_bullets_3() const { return ___bullets_3; }
	inline int32_t* get_address_of_bullets_3() { return &___bullets_3; }
	inline void set_bullets_3(int32_t value)
	{
		___bullets_3 = value;
	}
};


// Gun_<ResetDelay>d__10
struct  U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1  : public RuntimeObject
{
public:
	// System.Int32 Gun_<ResetDelay>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Gun_<ResetDelay>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Gun Gun_<ResetDelay>d__10::<>4__this
	Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1, ___U3CU3E4__this_2)); }
	inline Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Pools
struct  Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4  : public RuntimeObject
{
public:

public:
};

struct Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_StaticFields
{
public:
	// System.Collections.Generic.List`1<BulletPool> Pools::bulletPools
	List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 * ___bulletPools_0;

public:
	inline static int32_t get_offset_of_bulletPools_0() { return static_cast<int32_t>(offsetof(Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_StaticFields, ___bulletPools_0)); }
	inline List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 * get_bulletPools_0() const { return ___bulletPools_0; }
	inline List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 ** get_address_of_bulletPools_0() { return &___bulletPools_0; }
	inline void set_bulletPools_0(List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 * value)
	{
		___bulletPools_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPools_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Bullet>
struct  List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BulletU5BU5D_tBD840364B2617C0B508AD221F718F3A9157F5F9E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2, ____items_1)); }
	inline BulletU5BU5D_tBD840364B2617C0B508AD221F718F3A9157F5F9E* get__items_1() const { return ____items_1; }
	inline BulletU5BU5D_tBD840364B2617C0B508AD221F718F3A9157F5F9E** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BulletU5BU5D_tBD840364B2617C0B508AD221F718F3A9157F5F9E* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BulletU5BU5D_tBD840364B2617C0B508AD221F718F3A9157F5F9E* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2_StaticFields, ____emptyArray_5)); }
	inline BulletU5BU5D_tBD840364B2617C0B508AD221F718F3A9157F5F9E* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BulletU5BU5D_tBD840364B2617C0B508AD221F718F3A9157F5F9E** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BulletU5BU5D_tBD840364B2617C0B508AD221F718F3A9157F5F9E* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<BulletPool>
struct  List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	BulletPoolU5BU5D_t69E4BA9FCA1D171081C7CCEDFC4C97071716EF72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31, ____items_1)); }
	inline BulletPoolU5BU5D_t69E4BA9FCA1D171081C7CCEDFC4C97071716EF72* get__items_1() const { return ____items_1; }
	inline BulletPoolU5BU5D_t69E4BA9FCA1D171081C7CCEDFC4C97071716EF72** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(BulletPoolU5BU5D_t69E4BA9FCA1D171081C7CCEDFC4C97071716EF72* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	BulletPoolU5BU5D_t69E4BA9FCA1D171081C7CCEDFC4C97071716EF72* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31_StaticFields, ____emptyArray_5)); }
	inline BulletPoolU5BU5D_t69E4BA9FCA1D171081C7CCEDFC4C97071716EF72* get__emptyArray_5() const { return ____emptyArray_5; }
	inline BulletPoolU5BU5D_t69E4BA9FCA1D171081C7CCEDFC4C97071716EF72** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(BulletPoolU5BU5D_t69E4BA9FCA1D171081C7CCEDFC4C97071716EF72* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
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


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
};

// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.LayerMask
struct  LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.WaitForEndOfFrame
struct  WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	float ___m_Seconds_0;
};

// BulletType
struct  BulletType_t0B5C8FE8723325F5B7C18626F28ED42893D4F0BC 
{
public:
	// System.Int32 BulletType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BulletType_t0B5C8FE8723325F5B7C18626F28ED42893D4F0BC, ___value___2)); }
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

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
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.ContactFilter2D
struct  ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 
{
public:
	// System.Boolean UnityEngine.ContactFilter2D::useTriggers
	bool ___useTriggers_0;
	// System.Boolean UnityEngine.ContactFilter2D::useLayerMask
	bool ___useLayerMask_1;
	// System.Boolean UnityEngine.ContactFilter2D::useDepth
	bool ___useDepth_2;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideDepth
	bool ___useOutsideDepth_3;
	// System.Boolean UnityEngine.ContactFilter2D::useNormalAngle
	bool ___useNormalAngle_4;
	// System.Boolean UnityEngine.ContactFilter2D::useOutsideNormalAngle
	bool ___useOutsideNormalAngle_5;
	// UnityEngine.LayerMask UnityEngine.ContactFilter2D::layerMask
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___layerMask_6;
	// System.Single UnityEngine.ContactFilter2D::minDepth
	float ___minDepth_7;
	// System.Single UnityEngine.ContactFilter2D::maxDepth
	float ___maxDepth_8;
	// System.Single UnityEngine.ContactFilter2D::minNormalAngle
	float ___minNormalAngle_9;
	// System.Single UnityEngine.ContactFilter2D::maxNormalAngle
	float ___maxNormalAngle_10;

public:
	inline static int32_t get_offset_of_useTriggers_0() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useTriggers_0)); }
	inline bool get_useTriggers_0() const { return ___useTriggers_0; }
	inline bool* get_address_of_useTriggers_0() { return &___useTriggers_0; }
	inline void set_useTriggers_0(bool value)
	{
		___useTriggers_0 = value;
	}

	inline static int32_t get_offset_of_useLayerMask_1() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useLayerMask_1)); }
	inline bool get_useLayerMask_1() const { return ___useLayerMask_1; }
	inline bool* get_address_of_useLayerMask_1() { return &___useLayerMask_1; }
	inline void set_useLayerMask_1(bool value)
	{
		___useLayerMask_1 = value;
	}

	inline static int32_t get_offset_of_useDepth_2() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useDepth_2)); }
	inline bool get_useDepth_2() const { return ___useDepth_2; }
	inline bool* get_address_of_useDepth_2() { return &___useDepth_2; }
	inline void set_useDepth_2(bool value)
	{
		___useDepth_2 = value;
	}

	inline static int32_t get_offset_of_useOutsideDepth_3() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useOutsideDepth_3)); }
	inline bool get_useOutsideDepth_3() const { return ___useOutsideDepth_3; }
	inline bool* get_address_of_useOutsideDepth_3() { return &___useOutsideDepth_3; }
	inline void set_useOutsideDepth_3(bool value)
	{
		___useOutsideDepth_3 = value;
	}

	inline static int32_t get_offset_of_useNormalAngle_4() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useNormalAngle_4)); }
	inline bool get_useNormalAngle_4() const { return ___useNormalAngle_4; }
	inline bool* get_address_of_useNormalAngle_4() { return &___useNormalAngle_4; }
	inline void set_useNormalAngle_4(bool value)
	{
		___useNormalAngle_4 = value;
	}

	inline static int32_t get_offset_of_useOutsideNormalAngle_5() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___useOutsideNormalAngle_5)); }
	inline bool get_useOutsideNormalAngle_5() const { return ___useOutsideNormalAngle_5; }
	inline bool* get_address_of_useOutsideNormalAngle_5() { return &___useOutsideNormalAngle_5; }
	inline void set_useOutsideNormalAngle_5(bool value)
	{
		___useOutsideNormalAngle_5 = value;
	}

	inline static int32_t get_offset_of_layerMask_6() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___layerMask_6)); }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  get_layerMask_6() const { return ___layerMask_6; }
	inline LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0 * get_address_of_layerMask_6() { return &___layerMask_6; }
	inline void set_layerMask_6(LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  value)
	{
		___layerMask_6 = value;
	}

	inline static int32_t get_offset_of_minDepth_7() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___minDepth_7)); }
	inline float get_minDepth_7() const { return ___minDepth_7; }
	inline float* get_address_of_minDepth_7() { return &___minDepth_7; }
	inline void set_minDepth_7(float value)
	{
		___minDepth_7 = value;
	}

	inline static int32_t get_offset_of_maxDepth_8() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___maxDepth_8)); }
	inline float get_maxDepth_8() const { return ___maxDepth_8; }
	inline float* get_address_of_maxDepth_8() { return &___maxDepth_8; }
	inline void set_maxDepth_8(float value)
	{
		___maxDepth_8 = value;
	}

	inline static int32_t get_offset_of_minNormalAngle_9() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___minNormalAngle_9)); }
	inline float get_minNormalAngle_9() const { return ___minNormalAngle_9; }
	inline float* get_address_of_minNormalAngle_9() { return &___minNormalAngle_9; }
	inline void set_minNormalAngle_9(float value)
	{
		___minNormalAngle_9 = value;
	}

	inline static int32_t get_offset_of_maxNormalAngle_10() { return static_cast<int32_t>(offsetof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4, ___maxNormalAngle_10)); }
	inline float get_maxNormalAngle_10() const { return ___maxNormalAngle_10; }
	inline float* get_address_of_maxNormalAngle_10() { return &___maxNormalAngle_10; }
	inline void set_maxNormalAngle_10(float value)
	{
		___maxNormalAngle_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshaled_pinvoke
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};
// Native definition for COM marshalling of UnityEngine.ContactFilter2D
struct ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4_marshaled_com
{
	int32_t ___useTriggers_0;
	int32_t ___useLayerMask_1;
	int32_t ___useDepth_2;
	int32_t ___useOutsideDepth_3;
	int32_t ___useNormalAngle_4;
	int32_t ___useOutsideNormalAngle_5;
	LayerMask_tBB9173D8B6939D476E67E849280AC9F4EC4D93B0  ___layerMask_6;
	float ___minDepth_7;
	float ___maxDepth_8;
	float ___minNormalAngle_9;
	float ___maxNormalAngle_10;
};

// UnityEngine.Coroutine
struct  Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC  : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_pinvoke : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC_marshaled_com : public YieldInstruction_t836035AC7BD07A3C7909F7AD2A5B42DE99D91C44_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.ForceMode2D
struct  ForceMode2D_t80F82E2BBC1733F0B88593968BA9CE9BC96A7E36 
{
public:
	// System.Int32 UnityEngine.ForceMode2D::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ForceMode2D_t80F82E2BBC1733F0B88593968BA9CE9BC96A7E36, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_tC93EA87C5A6901160B583ADFCD3EF6726570DC3C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit2D
struct  RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Centroid_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Point_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Normal_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// BulletPool
struct  BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7  : public RuntimeObject
{
public:
	// BulletType BulletPool::type
	int32_t ___type_0;
	// System.Collections.Generic.List`1<Bullet> BulletPool::pool
	List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * ___pool_1;
	// System.Int32 BulletPool::bulletCount
	int32_t ___bulletCount_2;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_pool_1() { return static_cast<int32_t>(offsetof(BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7, ___pool_1)); }
	inline List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * get_pool_1() const { return ___pool_1; }
	inline List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 ** get_address_of_pool_1() { return &___pool_1; }
	inline void set_pool_1(List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * value)
	{
		___pool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_1), (void*)value);
	}

	inline static int32_t get_offset_of_bulletCount_2() { return static_cast<int32_t>(offsetof(BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7, ___bulletCount_2)); }
	inline int32_t get_bulletCount_2() const { return ___bulletCount_2; }
	inline int32_t* get_address_of_bulletCount_2() { return &___bulletCount_2; }
	inline void set_bulletCount_2(int32_t value)
	{
		___bulletCount_2 = value;
	}
};


// GunData
struct  GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25  : public RuntimeObject
{
public:
	// System.Int32 GunData::damage
	int32_t ___damage_0;
	// System.Single GunData::delay
	float ___delay_1;
	// System.Single GunData::bulletSpeed
	float ___bulletSpeed_2;
	// System.Single GunData::reCharge
	float ___reCharge_3;
	// System.Int32 GunData::range
	int32_t ___range_4;
	// BulletType GunData::bulletType
	int32_t ___bulletType_5;

public:
	inline static int32_t get_offset_of_damage_0() { return static_cast<int32_t>(offsetof(GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25, ___damage_0)); }
	inline int32_t get_damage_0() const { return ___damage_0; }
	inline int32_t* get_address_of_damage_0() { return &___damage_0; }
	inline void set_damage_0(int32_t value)
	{
		___damage_0 = value;
	}

	inline static int32_t get_offset_of_delay_1() { return static_cast<int32_t>(offsetof(GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25, ___delay_1)); }
	inline float get_delay_1() const { return ___delay_1; }
	inline float* get_address_of_delay_1() { return &___delay_1; }
	inline void set_delay_1(float value)
	{
		___delay_1 = value;
	}

	inline static int32_t get_offset_of_bulletSpeed_2() { return static_cast<int32_t>(offsetof(GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25, ___bulletSpeed_2)); }
	inline float get_bulletSpeed_2() const { return ___bulletSpeed_2; }
	inline float* get_address_of_bulletSpeed_2() { return &___bulletSpeed_2; }
	inline void set_bulletSpeed_2(float value)
	{
		___bulletSpeed_2 = value;
	}

	inline static int32_t get_offset_of_reCharge_3() { return static_cast<int32_t>(offsetof(GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25, ___reCharge_3)); }
	inline float get_reCharge_3() const { return ___reCharge_3; }
	inline float* get_address_of_reCharge_3() { return &___reCharge_3; }
	inline void set_reCharge_3(float value)
	{
		___reCharge_3 = value;
	}

	inline static int32_t get_offset_of_range_4() { return static_cast<int32_t>(offsetof(GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25, ___range_4)); }
	inline int32_t get_range_4() const { return ___range_4; }
	inline int32_t* get_address_of_range_4() { return &___range_4; }
	inline void set_range_4(int32_t value)
	{
		___range_4 = value;
	}

	inline static int32_t get_offset_of_bulletType_5() { return static_cast<int32_t>(offsetof(GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25, ___bulletType_5)); }
	inline int32_t get_bulletType_5() const { return ___bulletType_5; }
	inline int32_t* get_address_of_bulletType_5() { return &___bulletType_5; }
	inline void set_bulletType_5(int32_t value)
	{
		___bulletType_5 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
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
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// AI_Attack
struct  Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0  : public MulticastDelegate_t
{
public:

public:
};


// AI_ComeUp
struct  ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE  : public MulticastDelegate_t
{
public:

public:
};


// AI_Compute
struct  Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B  : public MulticastDelegate_t
{
public:

public:
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:

public:
};


// System.Predicate`1<Bullet>
struct  Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<BulletPool>
struct  Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.Collider2D
struct  Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// AI
struct  AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 AI::maxHealth
	int32_t ___maxHealth_4;
	// System.Int32 AI::health
	int32_t ___health_5;
	// System.Single AI::speed
	float ___speed_6;
	// System.Single AI::jumpForce
	float ___jumpForce_7;
	// System.Single AI::waitTime
	float ___waitTime_8;
	// UnityEngine.Transform AI::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_9;
	// System.Single AI::visibleDistance
	float ___visibleDistance_10;
	// System.Single AI::recommendDistance
	float ___recommendDistance_11;
	// Gun AI::gun
	Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * ___gun_12;
	// UnityEngine.Rigidbody2D AI::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_13;
	// AI_ComeUp AI::comeUp
	ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * ___comeUp_14;
	// AI_Compute AI::think
	Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * ___think_15;
	// AI_Attack AI::attack
	Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * ___attack_16;
	// UnityEngine.Coroutine AI::routine
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___routine_17;

public:
	inline static int32_t get_offset_of_maxHealth_4() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___maxHealth_4)); }
	inline int32_t get_maxHealth_4() const { return ___maxHealth_4; }
	inline int32_t* get_address_of_maxHealth_4() { return &___maxHealth_4; }
	inline void set_maxHealth_4(int32_t value)
	{
		___maxHealth_4 = value;
	}

	inline static int32_t get_offset_of_health_5() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___health_5)); }
	inline int32_t get_health_5() const { return ___health_5; }
	inline int32_t* get_address_of_health_5() { return &___health_5; }
	inline void set_health_5(int32_t value)
	{
		___health_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_jumpForce_7() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___jumpForce_7)); }
	inline float get_jumpForce_7() const { return ___jumpForce_7; }
	inline float* get_address_of_jumpForce_7() { return &___jumpForce_7; }
	inline void set_jumpForce_7(float value)
	{
		___jumpForce_7 = value;
	}

	inline static int32_t get_offset_of_waitTime_8() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___waitTime_8)); }
	inline float get_waitTime_8() const { return ___waitTime_8; }
	inline float* get_address_of_waitTime_8() { return &___waitTime_8; }
	inline void set_waitTime_8(float value)
	{
		___waitTime_8 = value;
	}

	inline static int32_t get_offset_of_target_9() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___target_9)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_9() const { return ___target_9; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_9() { return &___target_9; }
	inline void set_target_9(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_9), (void*)value);
	}

	inline static int32_t get_offset_of_visibleDistance_10() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___visibleDistance_10)); }
	inline float get_visibleDistance_10() const { return ___visibleDistance_10; }
	inline float* get_address_of_visibleDistance_10() { return &___visibleDistance_10; }
	inline void set_visibleDistance_10(float value)
	{
		___visibleDistance_10 = value;
	}

	inline static int32_t get_offset_of_recommendDistance_11() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___recommendDistance_11)); }
	inline float get_recommendDistance_11() const { return ___recommendDistance_11; }
	inline float* get_address_of_recommendDistance_11() { return &___recommendDistance_11; }
	inline void set_recommendDistance_11(float value)
	{
		___recommendDistance_11 = value;
	}

	inline static int32_t get_offset_of_gun_12() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___gun_12)); }
	inline Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * get_gun_12() const { return ___gun_12; }
	inline Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB ** get_address_of_gun_12() { return &___gun_12; }
	inline void set_gun_12(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * value)
	{
		___gun_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gun_12), (void*)value);
	}

	inline static int32_t get_offset_of_rb_13() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___rb_13)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_13() const { return ___rb_13; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_13() { return &___rb_13; }
	inline void set_rb_13(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_13), (void*)value);
	}

	inline static int32_t get_offset_of_comeUp_14() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___comeUp_14)); }
	inline ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * get_comeUp_14() const { return ___comeUp_14; }
	inline ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE ** get_address_of_comeUp_14() { return &___comeUp_14; }
	inline void set_comeUp_14(ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * value)
	{
		___comeUp_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comeUp_14), (void*)value);
	}

	inline static int32_t get_offset_of_think_15() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___think_15)); }
	inline Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * get_think_15() const { return ___think_15; }
	inline Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B ** get_address_of_think_15() { return &___think_15; }
	inline void set_think_15(Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * value)
	{
		___think_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___think_15), (void*)value);
	}

	inline static int32_t get_offset_of_attack_16() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___attack_16)); }
	inline Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * get_attack_16() const { return ___attack_16; }
	inline Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 ** get_address_of_attack_16() { return &___attack_16; }
	inline void set_attack_16(Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * value)
	{
		___attack_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___attack_16), (void*)value);
	}

	inline static int32_t get_offset_of_routine_17() { return static_cast<int32_t>(offsetof(AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6, ___routine_17)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_routine_17() const { return ___routine_17; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_routine_17() { return &___routine_17; }
	inline void set_routine_17(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___routine_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___routine_17), (void*)value);
	}
};


// Bullet
struct  Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// GunData Bullet::gunData
	GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * ___gunData_4;
	// System.Single Bullet::journeyTime
	float ___journeyTime_5;
	// System.Single Bullet::startTime
	float ___startTime_6;
	// System.Boolean Bullet::IsActive
	bool ___IsActive_7;
	// UnityEngine.Coroutine Bullet::disabling
	Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___disabling_8;

public:
	inline static int32_t get_offset_of_gunData_4() { return static_cast<int32_t>(offsetof(Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059, ___gunData_4)); }
	inline GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * get_gunData_4() const { return ___gunData_4; }
	inline GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 ** get_address_of_gunData_4() { return &___gunData_4; }
	inline void set_gunData_4(GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * value)
	{
		___gunData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gunData_4), (void*)value);
	}

	inline static int32_t get_offset_of_journeyTime_5() { return static_cast<int32_t>(offsetof(Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059, ___journeyTime_5)); }
	inline float get_journeyTime_5() const { return ___journeyTime_5; }
	inline float* get_address_of_journeyTime_5() { return &___journeyTime_5; }
	inline void set_journeyTime_5(float value)
	{
		___journeyTime_5 = value;
	}

	inline static int32_t get_offset_of_startTime_6() { return static_cast<int32_t>(offsetof(Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059, ___startTime_6)); }
	inline float get_startTime_6() const { return ___startTime_6; }
	inline float* get_address_of_startTime_6() { return &___startTime_6; }
	inline void set_startTime_6(float value)
	{
		___startTime_6 = value;
	}

	inline static int32_t get_offset_of_IsActive_7() { return static_cast<int32_t>(offsetof(Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059, ___IsActive_7)); }
	inline bool get_IsActive_7() const { return ___IsActive_7; }
	inline bool* get_address_of_IsActive_7() { return &___IsActive_7; }
	inline void set_IsActive_7(bool value)
	{
		___IsActive_7 = value;
	}

	inline static int32_t get_offset_of_disabling_8() { return static_cast<int32_t>(offsetof(Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059, ___disabling_8)); }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * get_disabling_8() const { return ___disabling_8; }
	inline Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC ** get_address_of_disabling_8() { return &___disabling_8; }
	inline void set_disabling_8(Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * value)
	{
		___disabling_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___disabling_8), (void*)value);
	}
};


// CameraTransform
struct  CameraTransform_tFAC65BA02FB8CDEC85F0C46232EAC5154316A0C9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Transform CameraTransform::target
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target_4;

public:
	inline static int32_t get_offset_of_target_4() { return static_cast<int32_t>(offsetof(CameraTransform_tFAC65BA02FB8CDEC85F0C46232EAC5154316A0C9, ___target_4)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_target_4() const { return ___target_4; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_target_4() { return &___target_4; }
	inline void set_target_4(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___target_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_4), (void*)value);
	}
};


// Gun
struct  Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// GunData Gun::data
	GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * ___data_4;
	// UnityEngine.GameObject Gun::coreBullet
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___coreBullet_5;
	// BulletPool Gun::pool
	BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * ___pool_6;
	// UnityEngine.Transform Gun::bulletPool
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___bulletPool_7;
	// System.Boolean Gun::canShoot
	bool ___canShoot_8;
	// System.Int32 Gun::bulletCount
	int32_t ___bulletCount_9;
	// System.Int32 Gun::bulletInHolder
	int32_t ___bulletInHolder_10;
	// System.Boolean Gun::isCharging
	bool ___isCharging_11;

public:
	inline static int32_t get_offset_of_data_4() { return static_cast<int32_t>(offsetof(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB, ___data_4)); }
	inline GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * get_data_4() const { return ___data_4; }
	inline GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 ** get_address_of_data_4() { return &___data_4; }
	inline void set_data_4(GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * value)
	{
		___data_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_4), (void*)value);
	}

	inline static int32_t get_offset_of_coreBullet_5() { return static_cast<int32_t>(offsetof(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB, ___coreBullet_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_coreBullet_5() const { return ___coreBullet_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_coreBullet_5() { return &___coreBullet_5; }
	inline void set_coreBullet_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___coreBullet_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coreBullet_5), (void*)value);
	}

	inline static int32_t get_offset_of_pool_6() { return static_cast<int32_t>(offsetof(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB, ___pool_6)); }
	inline BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * get_pool_6() const { return ___pool_6; }
	inline BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 ** get_address_of_pool_6() { return &___pool_6; }
	inline void set_pool_6(BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * value)
	{
		___pool_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_6), (void*)value);
	}

	inline static int32_t get_offset_of_bulletPool_7() { return static_cast<int32_t>(offsetof(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB, ___bulletPool_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_bulletPool_7() const { return ___bulletPool_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_bulletPool_7() { return &___bulletPool_7; }
	inline void set_bulletPool_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___bulletPool_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulletPool_7), (void*)value);
	}

	inline static int32_t get_offset_of_canShoot_8() { return static_cast<int32_t>(offsetof(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB, ___canShoot_8)); }
	inline bool get_canShoot_8() const { return ___canShoot_8; }
	inline bool* get_address_of_canShoot_8() { return &___canShoot_8; }
	inline void set_canShoot_8(bool value)
	{
		___canShoot_8 = value;
	}

	inline static int32_t get_offset_of_bulletCount_9() { return static_cast<int32_t>(offsetof(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB, ___bulletCount_9)); }
	inline int32_t get_bulletCount_9() const { return ___bulletCount_9; }
	inline int32_t* get_address_of_bulletCount_9() { return &___bulletCount_9; }
	inline void set_bulletCount_9(int32_t value)
	{
		___bulletCount_9 = value;
	}

	inline static int32_t get_offset_of_bulletInHolder_10() { return static_cast<int32_t>(offsetof(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB, ___bulletInHolder_10)); }
	inline int32_t get_bulletInHolder_10() const { return ___bulletInHolder_10; }
	inline int32_t* get_address_of_bulletInHolder_10() { return &___bulletInHolder_10; }
	inline void set_bulletInHolder_10(int32_t value)
	{
		___bulletInHolder_10 = value;
	}

	inline static int32_t get_offset_of_isCharging_11() { return static_cast<int32_t>(offsetof(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB, ___isCharging_11)); }
	inline bool get_isCharging_11() const { return ___isCharging_11; }
	inline bool* get_address_of_isCharging_11() { return &___isCharging_11; }
	inline void set_isCharging_11(bool value)
	{
		___isCharging_11 = value;
	}
};


// Player
struct  Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Player::maxHealth
	int32_t ___maxHealth_4;
	// System.Int32 Player::health
	int32_t ___health_5;
	// System.Single Player::speed
	float ___speed_6;
	// System.Single Player::jumpForce
	float ___jumpForce_7;
	// System.Boolean Player::isGrounded
	bool ___isGrounded_8;
	// Gun Player::gun
	Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * ___gun_9;
	// UnityEngine.Rigidbody2D Player::rb
	Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * ___rb_10;

public:
	inline static int32_t get_offset_of_maxHealth_4() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___maxHealth_4)); }
	inline int32_t get_maxHealth_4() const { return ___maxHealth_4; }
	inline int32_t* get_address_of_maxHealth_4() { return &___maxHealth_4; }
	inline void set_maxHealth_4(int32_t value)
	{
		___maxHealth_4 = value;
	}

	inline static int32_t get_offset_of_health_5() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___health_5)); }
	inline int32_t get_health_5() const { return ___health_5; }
	inline int32_t* get_address_of_health_5() { return &___health_5; }
	inline void set_health_5(int32_t value)
	{
		___health_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_jumpForce_7() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___jumpForce_7)); }
	inline float get_jumpForce_7() const { return ___jumpForce_7; }
	inline float* get_address_of_jumpForce_7() { return &___jumpForce_7; }
	inline void set_jumpForce_7(float value)
	{
		___jumpForce_7 = value;
	}

	inline static int32_t get_offset_of_isGrounded_8() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___isGrounded_8)); }
	inline bool get_isGrounded_8() const { return ___isGrounded_8; }
	inline bool* get_address_of_isGrounded_8() { return &___isGrounded_8; }
	inline void set_isGrounded_8(bool value)
	{
		___isGrounded_8 = value;
	}

	inline static int32_t get_offset_of_gun_9() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___gun_9)); }
	inline Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * get_gun_9() const { return ___gun_9; }
	inline Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB ** get_address_of_gun_9() { return &___gun_9; }
	inline void set_gun_9(Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * value)
	{
		___gun_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gun_9), (void*)value);
	}

	inline static int32_t get_offset_of_rb_10() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___rb_10)); }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * get_rb_10() const { return ___rb_10; }
	inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE ** get_address_of_rb_10() { return &___rb_10; }
	inline void set_rb_10(Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * value)
	{
		___rb_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_10), (void*)value);
	}
};


// PlayerCollision
struct  PlayerCollision_t71D1DFEA769AA3755DD3E9B39ECEC8A13E9C495F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Player PlayerCollision::player
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * ___player_4;

public:
	inline static int32_t get_offset_of_player_4() { return static_cast<int32_t>(offsetof(PlayerCollision_t71D1DFEA769AA3755DD3E9B39ECEC8A13E9C495F, ___player_4)); }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * get_player_4() const { return ___player_4; }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** get_address_of_player_4() { return &___player_4; }
	inline void set_player_4(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * value)
	{
		___player_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_4), (void*)value);
	}
};


// Enemy
struct  Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6  : public AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6
{
public:
	// System.Single Enemy::distance
	float ___distance_18;
	// UnityEngine.Vector2 Enemy::startPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___startPosition_19;
	// UnityEngine.Transform[] Enemy::waypoints
	TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* ___waypoints_20;
	// System.Int32 Enemy::nextWaypoint
	int32_t ___nextWaypoint_21;
	// System.Int32 Enemy::iterator
	int32_t ___iterator_22;

public:
	inline static int32_t get_offset_of_distance_18() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___distance_18)); }
	inline float get_distance_18() const { return ___distance_18; }
	inline float* get_address_of_distance_18() { return &___distance_18; }
	inline void set_distance_18(float value)
	{
		___distance_18 = value;
	}

	inline static int32_t get_offset_of_startPosition_19() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___startPosition_19)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_startPosition_19() const { return ___startPosition_19; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_startPosition_19() { return &___startPosition_19; }
	inline void set_startPosition_19(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___startPosition_19 = value;
	}

	inline static int32_t get_offset_of_waypoints_20() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___waypoints_20)); }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* get_waypoints_20() const { return ___waypoints_20; }
	inline TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804** get_address_of_waypoints_20() { return &___waypoints_20; }
	inline void set_waypoints_20(TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* value)
	{
		___waypoints_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waypoints_20), (void*)value);
	}

	inline static int32_t get_offset_of_nextWaypoint_21() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___nextWaypoint_21)); }
	inline int32_t get_nextWaypoint_21() const { return ___nextWaypoint_21; }
	inline int32_t* get_address_of_nextWaypoint_21() { return &___nextWaypoint_21; }
	inline void set_nextWaypoint_21(int32_t value)
	{
		___nextWaypoint_21 = value;
	}

	inline static int32_t get_offset_of_iterator_22() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___iterator_22)); }
	inline int32_t get_iterator_22() const { return ___iterator_22; }
	inline int32_t* get_address_of_iterator_22() { return &___iterator_22; }
	inline void set_iterator_22(int32_t value)
	{
		___iterator_22 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.RaycastHit2D[]
struct RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  m_Items[1];

public:
	inline RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE  value)
	{
		m_Items[index] = value;
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
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
// UnityEngine.Transform[]
struct TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * m_Items[1];

public:
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<System.Object>(!!0&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_TryGetComponent_TisRuntimeObject_m52AE59A1695186BE8CFD9E6C6EC4C7AD725B3724_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, RuntimeObject ** ___component0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_mBC07C59B061E1B719FFE2B6E5541E9011D906C3C_gshared (Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * List_1_Find_mD3D8180CF4967CBDC17E86195A15B12975BA9FF7_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, Predicate_1_t4AA10EFD4C5497CA1CD0FE35A6AF5990FF5D0979 * ___match0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// !!0 UnityEngine.Object::FindObjectOfType<Player>()
inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * Object_FindObjectOfType_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_mAFF522F8A426CEBAF27117F98DE0814BE35F762D (const RuntimeMethod* method)
{
	return ((  Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m251F203B12669585A5E663F529F6DF09F931B5DA_gshared)(method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Collections.IEnumerator AI::Logic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AI_Logic_m1E821B99D10FAA75142033A8F0655F7B846ABECB (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method);
// System.Void AI/Compute::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compute__ctor_mED644A2FBF1FE73BE770AF77F6F26954175B32E6 (Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void AI/Attack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack__ctor_m4E5A1C0DB4D70B89872FDE71FF20A21893BA89B8 (Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___v0, const RuntimeMethod* method);
// System.Single UnityEngine.Vector2::Distance(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(UnityEngine.Coroutine)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_mC465FFA3C386BA22384F7AFA5495FF2286510562 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * ___routine0, const RuntimeMethod* method);
// System.Void AI/Compute::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compute_Invoke_mE6AD2820A1C16918186BE96E0DC3C239AFE0D633 (Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * __this, float ___distance0, const RuntimeMethod* method);
// System.Void AI/ComeUp::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComeUp_Invoke_mB72714968ABB48D857A3D39C032F1E74B4E50543 (ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957 (const RuntimeMethod* method);
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___start0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___dir1, Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___color2, const RuntimeMethod* method);
// System.Int32 UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,UnityEngine.ContactFilter2D,UnityEngine.RaycastHit2D[],System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Physics2D_Raycast_m8678AB161A71C09D7606299D194A90BA814BA543 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___origin0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction1, ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  ___contactFilter2, RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165* ___results3, float ___distance4, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * RaycastHit2D_get_transform_m9AD59D59FC4F85128F139C0DE9B0A2AE27D75DAC (RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::TryGetComponent<Player>(!!0&)
inline bool Component_TryGetComponent_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_m7F72BAABA2F1D4D41F673EFFE42A58C6B056B081 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** ___component0, const RuntimeMethod* method)
{
	return ((  bool (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 **, const RuntimeMethod*))Component_TryGetComponent_TisRuntimeObject_m52AE59A1695186BE8CFD9E6C6EC4C7AD725B3724_gshared)(__this, ___component0, method);
}
// System.Void AI/Attack::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_Invoke_mA13F3E910B08F18623ACC4314040CC550B8DAB70 (Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * __this, const RuntimeMethod* method);
// System.Boolean Gun::Shoot(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gun_Shoot_mCBB8ED42E31E62F72B7843FD9186F6AA9BAFE129 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___character1, const RuntimeMethod* method);
// System.Collections.IEnumerator Gun::ReCharge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gun_ReCharge_mDCDB24D9BDA19B8C8CD78B78A911A6CDA4472977 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, int32_t ___bullets0, const RuntimeMethod* method);
// System.Void AI/<Animation>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimationU3Ed__21__ctor_mAFF13E43DCAE150FA9B4EC1A20774F7EE658EA00 (U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void AI/<Logic>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLogicU3Ed__23__ctor_m18FBBD0FAA2CEE492ACAB9A8DE87A12B29819AF7 (U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForEndOfFrame::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void Bullet::set_isActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_set_isActive_mE5D86830A97DD57521A132C3C8C145833F2FB39B (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, bool ___value0, const RuntimeMethod* method);
// System.Collections.IEnumerator Bullet::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Bullet_Disable_mEA219B9EE14FFB15B7FA69083D68B216BC965C9D (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56 (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___a0, float ___d1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, const RuntimeMethod* method);
// System.Void Bullet/<Disable>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__11__ctor_mA51B7534E33B41A557CDEBEB6382CF2A34A594DF (U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Bullet>::.ctor()
inline void List_1__ctor_m491255BD6D453EF3074DF81DA752A77E70876C6D (List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void AI/ComeUp::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComeUp__ctor_m26778E0631CE8C7BA05D77E26F6AD700EE1709B9 (ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void AI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Start_m632AF1ED3E093FF0D73D2F04F959F1320AA0C0B8 (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method);
// System.Void AI::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Jump_m78BCFA29AD319C60AC1CEDF7D752CB85A348435A (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::MoveTowards(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___current0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::MoveTowards(UnityEngine.Vector2,UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_MoveTowards_m5CE85293E9619514164A685D1D4673E2A6E43DFA (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___current0, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___target1, float ___maxDistanceDelta2, const RuntimeMethod* method);
// System.Void AI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI__ctor_mC2B737201B6BEBA44E26ADC77280A52BCEA7E7E0 (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<BulletPool>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m1C51FDE5662C3D1817F83D0520807E051E62429B (Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mBC07C59B061E1B719FFE2B6E5541E9011D906C3C_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<BulletPool>::Find(System.Predicate`1<!0>)
inline BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * List_1_Find_mB72A91F399B043022B5C053A9FDE01790490438A (List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 * __this, Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8 * ___match0, const RuntimeMethod* method)
{
	return ((  BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * (*) (List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 *, Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8 *, const RuntimeMethod*))List_1_Find_mD3D8180CF4967CBDC17E86195A15B12975BA9FF7_gshared)(__this, ___match0, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D (String_t* ___tag0, const RuntimeMethod* method);
// Bullet Gun::FindFreeBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * Gun_FindFreeBullet_m80D20CB85083F752C6F7E85A0E217A23C854F378 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// Bullet Gun::CreateNewBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * Gun_CreateNewBullet_m57357ED34EEE2A59F759C61C4AA8A2EE108CBDB8 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::ClampMagnitude(UnityEngine.Vector2,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_ClampMagnitude_m295C57C516C0F2B528CD9A80CE5B071927D3627F (Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___vector0, float ___maxLength1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void Bullet::Shoot(GunData,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Shoot_mDAB8A4A0DE554D2D0252A9D729C73BF8D3C98620 (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * ____gunData0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___newTransform1, const RuntimeMethod* method);
// System.Collections.IEnumerator Gun::ResetDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gun_ResetDelay_m64904CFDA3AB451960529DE2F76C58805632E305 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, const RuntimeMethod* method);
// System.Void Gun/<ResetDelay>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetDelayU3Ed__10__ctor_mA43E6F3FD084B9C5FF9E95A6783BC41FFB68334C (U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Gun/<ReCharge>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReChargeU3Ed__11__ctor_m0FD630A53828A6901DD8A38733F1AFD7122FAFE9 (U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Predicate`1<Bullet>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m67DD13F2FC5D4E64B65524C143E23711A0335636 (Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_mBC07C59B061E1B719FFE2B6E5541E9011D906C3C_gshared)(__this, ___object0, ___method1, method);
}
// !0 System.Collections.Generic.List`1<Bullet>::Find(System.Predicate`1<!0>)
inline Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * List_1_Find_m080A63F084BCFE3CAD3146EB5DD422D226F20A58 (List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * __this, Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * ___match0, const RuntimeMethod* method)
{
	return ((  Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * (*) (List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 *, Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB *, const RuntimeMethod*))List_1_Find_mD3D8180CF4967CBDC17E86195A15B12975BA9FF7_gshared)(__this, ___match0, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(___original0, ___parent1, method);
}
// !!0 UnityEngine.GameObject::GetComponent<Bullet>()
inline Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * GameObject_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mC44AB386177196D8110F3E6D8F0E814D44438271 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Bullet>::Add(!0)
inline void List_1_Add_m09B2470FCEF2873876D243BA512D88AF3CF94F3C (List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * __this, Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 *, Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Void Gun/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB14F534317A9C0E1CA2EC1C7935B02EF928C8AA8 (U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 * __this, const RuntimeMethod* method);
// System.Boolean Bullet::get_isActive()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Bullet_get_isActive_m495A5DE306047BD0600E0D8345E03DC3ABD1A1B2_inline (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// System.Void Player::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Jump_mE66EF456E76ADA55CCFD83638CCCAE9BC04E7B4F (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_left_mDD2A2AFDC4B0C1C876093F3E9C405579287FF4F8 (const RuntimeMethod* method);
// System.Void Player::Move(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mC0113B4902DF04D386E1A99421A34E359986690E (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mFE4658C0AE6643026A7CE7452857CA37DB687436 (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___force0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441 (const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2,UnityEngine.ForceMode2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_m09E1A2E24DABA5BBC613E35772AE2C1C35C6E40C (Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___force0, int32_t ___mode1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Component::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BulletPool>::.ctor()
inline void List_1__ctor_m2C1E19BCB032B5FC75189F77E66E0C28CDF8EB4C (List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void BulletPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletPool__ctor_mF0DE487BB45618178558BD0040766B3B802E86A2 (BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<BulletPool>::Add(!0)
inline void List_1_Add_m85B2C900F890A48CC90DBC9AD9A457776EFDB399 (List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 * __this, BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 *, BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
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
// System.Void AI::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Start_m632AF1ED3E093FF0D73D2F04F959F1320AA0C0B8 (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AI_Start_m632AF1ED3E093FF0D73D2F04F959F1320AA0C0B8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// target = FindObjectOfType<Player>().transform;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_0 = Object_FindObjectOfType_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_mAFF522F8A426CEBAF27117F98DE0814BE35F762D(/*hidden argument*/Object_FindObjectOfType_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_mAFF522F8A426CEBAF27117F98DE0814BE35F762D_RuntimeMethod_var);
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		__this->set_target_9(L_1);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_2 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_13(L_2);
		// routine = StartCoroutine(Animation());
		RuntimeObject* L_3 = VirtFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator AI::Animation() */, __this);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_4 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_3, /*hidden argument*/NULL);
		__this->set_routine_17(L_4);
		// StartCoroutine(Logic());
		RuntimeObject* L_5 = AI_Logic_m1E821B99D10FAA75142033A8F0655F7B846ABECB(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_5, /*hidden argument*/NULL);
		// think = Think;
		Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * L_6 = (Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B *)il2cpp_codegen_object_new(Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B_il2cpp_TypeInfo_var);
		Compute__ctor_mED644A2FBF1FE73BE770AF77F6F26954175B32E6(L_6, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 6)), /*hidden argument*/NULL);
		__this->set_think_15(L_6);
		// attack = Act;
		Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * L_7 = (Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 *)il2cpp_codegen_object_new(Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0_il2cpp_TypeInfo_var);
		Attack__ctor_m4E5A1C0DB4D70B89872FDE71FF20A21893BA89B8(L_7, __this, (intptr_t)((intptr_t)GetVirtualMethodInfo(__this, 7)), /*hidden argument*/NULL);
		__this->set_attack_16(L_7);
		// }
		return;
	}
}
// System.Void AI::Sense()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Sense_m2C84E258407D22FE8212FC8F34966535180B7EE5 (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AI_Sense_m2C84E258407D22FE8212FC8F34966535180B7EE5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * G_B5_0 = NULL;
	Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * G_B4_0 = NULL;
	{
		// float distance = Vector2.Distance(target.transform.position, transform.position);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = __this->get_target_9();
		NullCheck(L_0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_5, /*hidden argument*/NULL);
		float L_7 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_3, L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// if(distance < visibleDistance)
		float L_8 = V_0;
		float L_9 = __this->get_visibleDistance_10();
		if ((!(((float)L_8) < ((float)L_9))))
		{
			goto IL_0061;
		}
	}
	{
		// if (routine != null)
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_10 = __this->get_routine_17();
		if (!L_10)
		{
			goto IL_004f;
		}
	}
	{
		// StopCoroutine(routine);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_11 = __this->get_routine_17();
		MonoBehaviour_StopCoroutine_mC465FFA3C386BA22384F7AFA5495FF2286510562(__this, L_11, /*hidden argument*/NULL);
		// routine = null;
		__this->set_routine_17((Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC *)NULL);
	}

IL_004f:
	{
		// think?.Invoke(distance);
		Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * L_12 = __this->get_think_15();
		Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * L_13 = L_12;
		G_B4_0 = L_13;
		if (L_13)
		{
			G_B5_0 = L_13;
			goto IL_005a;
		}
	}
	{
		return;
	}

IL_005a:
	{
		float L_14 = V_0;
		NullCheck(G_B5_0);
		Compute_Invoke_mE6AD2820A1C16918186BE96E0DC3C239AFE0D633(G_B5_0, L_14, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0061:
	{
		// if(routine == null)
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_15 = __this->get_routine_17();
		if (L_15)
		{
			goto IL_007b;
		}
	}
	{
		// routine = StartCoroutine(Animation());
		RuntimeObject* L_16 = VirtFuncInvoker0< RuntimeObject* >::Invoke(8 /* System.Collections.IEnumerator AI::Animation() */, __this);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_17 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_16, /*hidden argument*/NULL);
		__this->set_routine_17(L_17);
	}

IL_007b:
	{
		// }
		return;
	}
}
// System.Void AI::Think(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Think_mE47BC5C1C1C0BC7AE2AE29304AE49016D7259410 (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, float ___distance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AI_Think_mE47BC5C1C1C0BC7AE2AE29304AE49016D7259410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165* V_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * V_3 = NULL;
	ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * G_B3_0 = NULL;
	ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * G_B2_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B6_0 = NULL;
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B5_0 = NULL;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B7_0;
	memset((&G_B7_0), 0, sizeof(G_B7_0));
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * G_B7_1 = NULL;
	Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * G_B12_0 = NULL;
	Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * G_B11_0 = NULL;
	{
		// if(distance > recommendDistance)
		float L_0 = ___distance0;
		float L_1 = __this->get_recommendDistance_11();
		if ((!(((float)L_0) > ((float)L_1))))
		{
			goto IL_001a;
		}
	}
	{
		// comeUp?.Invoke();
		ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * L_2 = __this->get_comeUp_14();
		ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * L_3 = L_2;
		G_B2_0 = L_3;
		if (L_3)
		{
			G_B3_0 = L_3;
			goto IL_0015;
		}
	}
	{
		goto IL_001a;
	}

IL_0015:
	{
		NullCheck(G_B3_0);
		ComeUp_Invoke_mB72714968ABB48D857A3D39C032F1E74B4E50543(G_B3_0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// transform.eulerAngles = target.transform.position.x > transform.position.x ? new Vector3() : new Vector3(0, 0, 180);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = __this->get_target_9();
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_6, /*hidden argument*/NULL);
		float L_8 = L_7.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		float L_11 = L_10.get_x_2();
		G_B5_0 = L_4;
		if ((((float)L_8) > ((float)L_11)))
		{
			G_B6_0 = L_4;
			goto IL_005d;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_12), (0.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		G_B7_0 = L_12;
		G_B7_1 = G_B5_0;
		goto IL_0066;
	}

IL_005d:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_1;
		G_B7_0 = L_13;
		G_B7_1 = G_B6_0;
	}

IL_0066:
	{
		NullCheck(G_B7_1);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(G_B7_1, G_B7_0, /*hidden argument*/NULL);
		// RaycastHit2D[] hits = new RaycastHit2D[2];
		RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165* L_14 = (RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165*)(RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165*)SZArrayNew(RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165_il2cpp_TypeInfo_var, (uint32_t)2);
		V_0 = L_14;
		// Debug.DrawRay(transform.position, (target.position - transform.position), Color.red);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = __this->get_target_9();
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_18, L_20, /*hidden argument*/NULL);
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_22 = Color_get_red_m5562DD438931CF0D1FBBBB29BF7F8B752AF38957(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_DrawRay_m0D11229E8004FAAE411E457CD7DB316DEF6F9DE3(L_16, L_21, L_22, /*hidden argument*/NULL);
		// Physics2D.Raycast(transform.position, (target.position - transform.position), new ContactFilter2D(), hits, gun.data.range);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_23, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_24, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = __this->get_target_9();
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_28, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_30 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_27, L_29, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_31 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_30, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_2), sizeof(ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4 ));
		ContactFilter2D_t1BEAE75CCD5614B40E8AD9031BBD72543E2C37B4  L_32 = V_2;
		RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165* L_33 = V_0;
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_34 = __this->get_gun_12();
		NullCheck(L_34);
		GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * L_35 = L_34->get_data_4();
		NullCheck(L_35);
		int32_t L_36 = L_35->get_range_4();
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_tB21970F986016656D66D2922594F336E1EE7D5C7_il2cpp_TypeInfo_var);
		Physics2D_Raycast_m8678AB161A71C09D7606299D194A90BA814BA543(L_25, L_31, L_32, L_33, (((float)((float)L_36))), /*hidden argument*/NULL);
		// if (hits.Length > 1)
		RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165* L_37 = V_0;
		NullCheck(L_37);
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_37)->max_length))))) <= ((int32_t)1)))
		{
			goto IL_0132;
		}
	}
	{
		// if (hits[1].transform != null && hits[1].transform.TryGetComponent(out Player player))
		RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165* L_38 = V_0;
		NullCheck(L_38);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = RaycastHit2D_get_transform_m9AD59D59FC4F85128F139C0DE9B0A2AE27D75DAC((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_40 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_39, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_40)
		{
			goto IL_0132;
		}
	}
	{
		RaycastHit2DU5BU5D_t5F37B944987342C401FA9A231A75AD2991A66165* L_41 = V_0;
		NullCheck(L_41);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_42 = RaycastHit2D_get_transform_m9AD59D59FC4F85128F139C0DE9B0A2AE27D75DAC((RaycastHit2D_t5E8A7F96317BAF2033362FC780F4D72DC72764BE *)((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		NullCheck(L_42);
		bool L_43 = Component_TryGetComponent_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_m7F72BAABA2F1D4D41F673EFFE42A58C6B056B081(L_42, (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 **)(&V_3), /*hidden argument*/Component_TryGetComponent_TisPlayer_t8321F4671F549F5A7793BB8BA33D32CCCD538873_m7F72BAABA2F1D4D41F673EFFE42A58C6B056B081_RuntimeMethod_var);
		if (!L_43)
		{
			goto IL_0132;
		}
	}
	{
		// attack?.Invoke();
		Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * L_44 = __this->get_attack_16();
		Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * L_45 = L_44;
		G_B11_0 = L_45;
		if (L_45)
		{
			G_B12_0 = L_45;
			goto IL_012d;
		}
	}
	{
		return;
	}

IL_012d:
	{
		NullCheck(G_B12_0);
		Attack_Invoke_mA13F3E910B08F18623ACC4314040CC550B8DAB70(G_B12_0, /*hidden argument*/NULL);
	}

IL_0132:
	{
		// }
		return;
	}
}
// System.Void AI::Act()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Act_mFAB759834E2004D61ACC6121A6DED9D2461092E4 (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method)
{
	{
		// if(!gun.Shoot(target.transform, transform))
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_0 = __this->get_gun_12();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_target_9();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_4 = Gun_Shoot_mCBB8ED42E31E62F72B7843FD9186F6AA9BAFE129(L_0, L_2, L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_003b;
		}
	}
	{
		// StartCoroutine(gun.ReCharge(gun.bulletInHolder));
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_5 = __this->get_gun_12();
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_6 = __this->get_gun_12();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_bulletInHolder_10();
		NullCheck(L_5);
		RuntimeObject* L_8 = Gun_ReCharge_mDCDB24D9BDA19B8C8CD78B78A911A6CDA4472977(L_5, L_7, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_8, /*hidden argument*/NULL);
	}

IL_003b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator AI::Animation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AI_Animation_mAD21BE4E47BB6FE84F2784AB1857469E877B2AD0 (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AI_Animation_mAD21BE4E47BB6FE84F2784AB1857469E877B2AD0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 * L_0 = (U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 *)il2cpp_codegen_object_new(U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389_il2cpp_TypeInfo_var);
		U3CAnimationU3Ed__21__ctor_mAFF13E43DCAE150FA9B4EC1A20774F7EE658EA00(L_0, 0, /*hidden argument*/NULL);
		U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator AI::Logic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AI_Logic_m1E821B99D10FAA75142033A8F0655F7B846ABECB (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AI_Logic_m1E821B99D10FAA75142033A8F0655F7B846ABECB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 * L_0 = (U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 *)il2cpp_codegen_object_new(U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44_il2cpp_TypeInfo_var);
		U3CLogicU3Ed__23__ctor_m18FBBD0FAA2CEE492ACAB9A8DE87A12B29819AF7(L_0, 0, /*hidden argument*/NULL);
		U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void AI::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI_Jump_m78BCFA29AD319C60AC1CEDF7D752CB85A348435A (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method)
{
	{
		// rb.velocity = new Vector2(rb.velocity.x, jumpForce);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = __this->get_rb_13();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = __this->get_rb_13();
		NullCheck(L_1);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_0();
		float L_4 = __this->get_jumpForce_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_5), L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_set_velocity_mE0DBCE5B683024B106C2AB6943BBA550B5BD0B83(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AI::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AI__ctor_mC2B737201B6BEBA44E26ADC77280A52BCEA7E7E0 (AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void AI_<Animation>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimationU3Ed__21__ctor_mAFF13E43DCAE150FA9B4EC1A20774F7EE658EA00 (U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AI_<Animation>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimationU3Ed__21_System_IDisposable_Dispose_mE4D333BDD73A2D7587C8A4B157DBD5CB010D1523 (U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AI_<Animation>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CAnimationU3Ed__21_MoveNext_mABD2BB710753804F495D33BA145BB7B1DF569ED9 (U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimationU3Ed__21_MoveNext_mABD2BB710753804F495D33BA145BB7B1DF569ED9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_004b;
			}
			case 2:
			{
				goto IL_0066;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0029:
	{
		// if(Anim())
		AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * L_3 = V_1;
		NullCheck(L_3);
		bool L_4 = VirtFuncInvoker0< bool >::Invoke(9 /* System.Boolean AI::Anim() */, L_3);
		if (!L_4)
		{
			goto IL_0052;
		}
	}
	{
		// yield return new WaitForSeconds(waitTime);
		AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * L_5 = V_1;
		NullCheck(L_5);
		float L_6 = L_5->get_waitTime_8();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_7 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004b:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0052:
	{
		// yield return new WaitForEndOfFrame();
		WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA * L_8 = (WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA *)il2cpp_codegen_object_new(WaitForEndOfFrame_t75980FB3F246D6AD36A85CA2BFDF8474E5EEBCCA_il2cpp_TypeInfo_var);
		WaitForEndOfFrame__ctor_m6CDB79476A4A84CEC62947D36ADED96E907BA20B(L_8, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_0066:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_0029;
	}
}
// System.Object AI_<Animation>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimationU3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m54B0FAF0FEDE61F6D8C2DADC833BBA96F9E3FA13 (U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AI_<Animation>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CAnimationU3Ed__21_System_Collections_IEnumerator_Reset_m0F1B47C531E8C9D2F9839C2B20B9778C9AE4C221 (U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CAnimationU3Ed__21_System_Collections_IEnumerator_Reset_m0F1B47C531E8C9D2F9839C2B20B9778C9AE4C221_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CAnimationU3Ed__21_System_Collections_IEnumerator_Reset_m0F1B47C531E8C9D2F9839C2B20B9778C9AE4C221_RuntimeMethod_var);
	}
}
// System.Object AI_<Animation>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CAnimationU3Ed__21_System_Collections_IEnumerator_get_Current_m4C007F653ABABD402A6AA3C282DFC82AC8A56AE0 (U3CAnimationU3Ed__21_tDB882AD10615BB21A29B8689D6F5049495EBC389 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void AI_<Logic>d__23::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLogicU3Ed__23__ctor_m18FBBD0FAA2CEE492ACAB9A8DE87A12B29819AF7 (U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AI_<Logic>d__23::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLogicU3Ed__23_System_IDisposable_Dispose_m5DC964F8EACEC610B276F996B452A928AEFC1AE8 (U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AI_<Logic>d__23::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLogicU3Ed__23_MoveNext_m08DD3E17910B6389B0C178FE077B1A58AF2864BD (U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLogicU3Ed__23_MoveNext_m08DD3E17910B6389B0C178FE077B1A58AF2864BD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_001e:
	{
		// Sense();
		AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 * L_4 = V_1;
		NullCheck(L_4);
		VirtActionInvoker0::Invoke(5 /* System.Void AI::Sense() */, L_4);
		// yield return new WaitForSeconds(0.04f);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_5 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_5, (0.04f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// while (true)
		goto IL_001e;
	}
}
// System.Object AI_<Logic>d__23::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLogicU3Ed__23_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mE3D787811CBAE9E8607C82EA8F05AC51D73129D7 (U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AI_<Logic>d__23::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLogicU3Ed__23_System_Collections_IEnumerator_Reset_m4A21B72A47F42F0595FA07A1B3A87CA3AA147B91 (U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CLogicU3Ed__23_System_Collections_IEnumerator_Reset_m4A21B72A47F42F0595FA07A1B3A87CA3AA147B91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CLogicU3Ed__23_System_Collections_IEnumerator_Reset_m4A21B72A47F42F0595FA07A1B3A87CA3AA147B91_RuntimeMethod_var);
	}
}
// System.Object AI_<Logic>d__23::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLogicU3Ed__23_System_Collections_IEnumerator_get_Current_m3817096975652CA7296A61EADE0937DF66BDAD62 (U3CLogicU3Ed__23_tC52DD027600BD1D4B6E8C11ECF623349CE1B9E44 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 (Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void AI_Attack::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack__ctor_m4E5A1C0DB4D70B89872FDE71FF20A21893BA89B8 (Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AI_Attack::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_Invoke_mA13F3E910B08F18623ACC4314040CC550B8DAB70 (Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
// System.IAsyncResult AI_Attack::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Attack_BeginInvoke_m802646F76CD034BED033E01398D9E973199FFA2B (Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void AI_Attack::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attack_EndInvoke_m36EFBC1ECA6D64CBFDA6512B76FC7A8EAF270D20 (Attack_t01D4F9682F7349951B88809601A7F3FB21E93BB0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE (ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void AI_ComeUp::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComeUp__ctor_m26778E0631CE8C7BA05D77E26F6AD700EE1709B9 (ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AI_ComeUp::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComeUp_Invoke_mB72714968ABB48D857A3D39C032F1E74B4E50543 (ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * __this, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
// System.IAsyncResult AI_ComeUp::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ComeUp_BeginInvoke_mAC992E7DD7010E14DE94BFA438D83AB550560A9F (ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void AI_ComeUp::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ComeUp_EndInvoke_m120CEEB8C259B6757E9F7AD540D40882A896A770 (ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B (Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * __this, float ___distance0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(float);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___distance0);

}
// System.Void AI_Compute::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compute__ctor_mED644A2FBF1FE73BE770AF77F6F26954175B32E6 (Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void AI_Compute::Invoke(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compute_Invoke_mE6AD2820A1C16918186BE96E0DC3C239AFE0D633 (Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * __this, float ___distance0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
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
				typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___distance0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___distance0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___distance0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< float >::Invoke(targetMethod, targetThis, ___distance0);
					else
						GenericVirtActionInvoker1< float >::Invoke(targetMethod, targetThis, ___distance0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___distance0);
					else
						VirtActionInvoker1< float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___distance0);
				}
			}
			else
			{
				if (targetThis == NULL && il2cpp_codegen_class_is_value_type(il2cpp_codegen_method_get_declaring_type(targetMethod)))
				{
					typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)((reinterpret_cast<RuntimeObject*>(&___distance0) - 1), targetMethod);
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___distance0, targetMethod);
				}
			}
		}
	}
}
// System.IAsyncResult AI_Compute::BeginInvoke(System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Compute_BeginInvoke_m32F351C78E0FB76B2EA2E71BF732CD71BD2BDE03 (Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * __this, float ___distance0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Compute_BeginInvoke_m32F351C78E0FB76B2EA2E71BF732CD71BD2BDE03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___distance0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void AI_Compute::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Compute_EndInvoke_m01F8724C333AF8772EDC343EB53A8EA633C24181 (Compute_tADF973B611761D9F3DCB621B3FB94C9925291C7B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
// System.Boolean Bullet::get_isActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Bullet_get_isActive_m495A5DE306047BD0600E0D8345E03DC3ABD1A1B2 (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, const RuntimeMethod* method)
{
	{
		// get { return IsActive; }
		bool L_0 = __this->get_IsActive_7();
		return L_0;
	}
}
// System.Void Bullet::set_isActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_set_isActive_mE5D86830A97DD57521A132C3C8C145833F2FB39B (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		// set { IsActive = value; gameObject.SetActive(value); }
		bool L_0 = ___value0;
		__this->set_IsActive_7(L_0);
		// set { IsActive = value; gameObject.SetActive(value); }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		bool L_2 = ___value0;
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, L_2, /*hidden argument*/NULL);
		// set { IsActive = value; gameObject.SetActive(value); }
		return;
	}
}
// System.Void Bullet::Shoot(GunData,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Shoot_mDAB8A4A0DE554D2D0252A9D729C73BF8D3C98620 (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * ____gunData0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___newTransform1, const RuntimeMethod* method)
{
	{
		// gunData = _gunData;
		GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * L_0 = ____gunData0;
		__this->set_gunData_4(L_0);
		// gameObject.transform.rotation = newTransform.rotation;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_1, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ___newTransform1;
		NullCheck(L_3);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_2, L_4, /*hidden argument*/NULL);
		// gameObject.transform.position = newTransform.position;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_5, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___newTransform1;
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_6, L_8, /*hidden argument*/NULL);
		// isActive = true;
		Bullet_set_isActive_mE5D86830A97DD57521A132C3C8C145833F2FB39B(__this, (bool)1, /*hidden argument*/NULL);
		// journeyTime = gunData.range / gunData.bulletSpeed;
		GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * L_9 = __this->get_gunData_4();
		NullCheck(L_9);
		int32_t L_10 = L_9->get_range_4();
		GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * L_11 = __this->get_gunData_4();
		NullCheck(L_11);
		float L_12 = L_11->get_bulletSpeed_2();
		__this->set_journeyTime_5(((float)((float)(((float)((float)L_10)))/(float)L_12)));
		// disabling = StartCoroutine(Disable());
		RuntimeObject* L_13 = Bullet_Disable_mEA219B9EE14FFB15B7FA69083D68B216BC965C9D(__this, /*hidden argument*/NULL);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_14 = MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_13, /*hidden argument*/NULL);
		__this->set_disabling_8(L_14);
		// }
		return;
	}
}
// System.Void Bullet::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_Update_m1C6B5808E27E786F3EC4DD275829C9DE981F117E (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_Update_m1C6B5808E27E786F3EC4DD275829C9DE981F117E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.Translate(Vector2.right * gunData.bulletSpeed * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E(/*hidden argument*/NULL);
		GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * L_2 = __this->get_gunData_4();
		NullCheck(L_2);
		float L_3 = L_2->get_bulletSpeed_2();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_1, L_3, /*hidden argument*/NULL);
		float L_5 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_6 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_4, L_5, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_6, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_Translate_m0F354939D5084DDFF6B9902E62D3DCA7A3B53EA3(L_0, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Bullet::DisableImmediatly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet_DisableImmediatly_m6AF17C4DA42E5A2B3134834DDD685A2512B032DC (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, const RuntimeMethod* method)
{
	{
		// StopCoroutine(disabling);
		Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * L_0 = __this->get_disabling_8();
		MonoBehaviour_StopCoroutine_mC465FFA3C386BA22384F7AFA5495FF2286510562(__this, L_0, /*hidden argument*/NULL);
		// isActive = false;
		Bullet_set_isActive_mE5D86830A97DD57521A132C3C8C145833F2FB39B(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Bullet::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Bullet_Disable_mEA219B9EE14FFB15B7FA69083D68B216BC965C9D (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Bullet_Disable_mEA219B9EE14FFB15B7FA69083D68B216BC965C9D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 * L_0 = (U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 *)il2cpp_codegen_object_new(U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676_il2cpp_TypeInfo_var);
		U3CDisableU3Ed__11__ctor_mA51B7534E33B41A557CDEBEB6382CF2A34A594DF(L_0, 0, /*hidden argument*/NULL);
		U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void Bullet::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Bullet__ctor_mF7EB0C5877B746664770C7386FD9DC0D3904D8D5 (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Bullet_<Disable>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__11__ctor_mA51B7534E33B41A557CDEBEB6382CF2A34A594DF (U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Bullet_<Disable>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__11_System_IDisposable_Dispose_m23620C9F574F7AA4E872D843C97E0C575736C5EE (U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Bullet_<Disable>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CDisableU3Ed__11_MoveNext_mC5E9DC7DFE3AE0465E8C0212A0AD5C9859285883 (U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDisableU3Ed__11_MoveNext_mC5E9DC7DFE3AE0465E8C0212A0AD5C9859285883_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(journeyTime);
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = L_4->get_journeyTime_5();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_6 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_6, L_5, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// isActive = false;
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_7 = V_1;
		NullCheck(L_7);
		Bullet_set_isActive_mE5D86830A97DD57521A132C3C8C145833F2FB39B(L_7, (bool)0, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object Bullet_<Disable>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisableU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1C00281209031C2C60423C7952E529D8E0155ECF (U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Bullet_<Disable>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CDisableU3Ed__11_System_Collections_IEnumerator_Reset_m2D53D0A260441FCB4E97FE630AFD012E45A1CA72 (U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CDisableU3Ed__11_System_Collections_IEnumerator_Reset_m2D53D0A260441FCB4E97FE630AFD012E45A1CA72_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CDisableU3Ed__11_System_Collections_IEnumerator_Reset_m2D53D0A260441FCB4E97FE630AFD012E45A1CA72_RuntimeMethod_var);
	}
}
// System.Object Bullet_<Disable>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CDisableU3Ed__11_System_Collections_IEnumerator_get_Current_mBCD97EC6E01DC82F9990CE5427F71E9A4A4C517F (U3CDisableU3Ed__11_t2BC16E7F0E892E5CD3AD39B79C32A96C9E890676 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void BulletPool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BulletPool__ctor_mF0DE487BB45618178558BD0040766B3B802E86A2 (BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BulletPool__ctor_mF0DE487BB45618178558BD0040766B3B802E86A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<Bullet> pool = new List<Bullet>();
		List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * L_0 = (List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 *)il2cpp_codegen_object_new(List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2_il2cpp_TypeInfo_var);
		List_1__ctor_m491255BD6D453EF3074DF81DA752A77E70876C6D(L_0, /*hidden argument*/List_1__ctor_m491255BD6D453EF3074DF81DA752A77E70876C6D_RuntimeMethod_var);
		__this->set_pool_1(L_0);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void CameraTransform::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTransform_Update_m18C86A025C9AB299F2D6A0420A936415C805CED5 (CameraTransform_tFAC65BA02FB8CDEC85F0C46232EAC5154316A0C9 * __this, const RuntimeMethod* method)
{
	{
		// transform.position = new Vector3(target.position.x, target.position.y, -10);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_target_4();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_target_4();
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_7), L_3, L_6, (-10.0f), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CameraTransform::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CameraTransform__ctor_m78C91405BC9E8A5D7B8BD31E05FB37667415DB48 (CameraTransform_tFAC65BA02FB8CDEC85F0C46232EAC5154316A0C9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Enemy::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Start_mEA16629472D3B5EF50899E1A091ADF28463DD033 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Start_mEA16629472D3B5EF50899E1A091ADF28463DD033_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// startPosition = waypoints[0].position;
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_0 = __this->get_waypoints_20();
		NullCheck(L_0);
		int32_t L_1 = 0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_3, /*hidden argument*/NULL);
		__this->set_startPosition_19(L_4);
		// comeUp = WalkUp;
		ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE * L_5 = (ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE *)il2cpp_codegen_object_new(ComeUp_tAA79E8CA3C8FF449EA41EB725A536077F4402FCE_il2cpp_TypeInfo_var);
		ComeUp__ctor_m26778E0631CE8C7BA05D77E26F6AD700EE1709B9(L_5, __this, (intptr_t)((intptr_t)Enemy_WalkUp_m573D378452064576A38CB933D0E19DED5991A65D_RuntimeMethod_var), /*hidden argument*/NULL);
		((AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 *)__this)->set_comeUp_14(L_5);
		// base.Start();
		AI_Start_m632AF1ED3E093FF0D73D2F04F959F1320AA0C0B8(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Boolean Enemy::Anim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enemy_Anim_m42C314C21ED5588A920D818839F485966A21AFF5 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Anim_m42C314C21ED5588A920D818839F485966A21AFF5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(startPosition.y < waypoints[nextWaypoint].position.y && ((rb.velocity.y <= 0.01f) && rb.velocity.y >= -0.01f))
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * L_0 = __this->get_address_of_startPosition_19();
		float L_1 = L_0->get_y_1();
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_2 = __this->get_waypoints_20();
		int32_t L_3 = __this->get_nextWaypoint_21();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		if ((!(((float)L_1) < ((float)L_7))))
		{
			goto IL_0058;
		}
	}
	{
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_8 = ((AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 *)__this)->get_rb_13();
		NullCheck(L_8);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_y_1();
		if ((!(((float)L_10) <= ((float)(0.01f)))))
		{
			goto IL_0058;
		}
	}
	{
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_11 = ((AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 *)__this)->get_rb_13();
		NullCheck(L_11);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Rigidbody2D_get_velocity_m5ABF36BDF90FD7308BE608667B9E8F3DA5A207F1(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_1();
		if ((!(((float)L_13) >= ((float)(-0.01f)))))
		{
			goto IL_0058;
		}
	}
	{
		// Jump();
		AI_Jump_m78BCFA29AD319C60AC1CEDF7D752CB85A348435A(__this, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// float step = speed * Time.deltaTime; // calculate distance to move
		float L_14 = ((AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 *)__this)->get_speed_6();
		float L_15 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_14, (float)L_15));
		// transform.position = Vector3.MoveTowards(transform.position, waypoints[nextWaypoint].position, step);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_19 = __this->get_waypoints_20();
		int32_t L_20 = __this->get_nextWaypoint_21();
		NullCheck(L_19);
		int32_t L_21 = L_20;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_22 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_22, /*hidden argument*/NULL);
		float L_24 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_25 = Vector3_MoveTowards_mA288BB5AA73DDA9CA76EDC11F339BAFDA1E4FF45(L_18, L_23, L_24, /*hidden argument*/NULL);
		NullCheck(L_16);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_16, L_25, /*hidden argument*/NULL);
		// if (Vector2.Distance(transform.position, waypoints[nextWaypoint].position) < 0.1f)
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_28 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_27, /*hidden argument*/NULL);
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_29 = __this->get_waypoints_20();
		int32_t L_30 = __this->get_nextWaypoint_21();
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_32, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_34 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_33, /*hidden argument*/NULL);
		float L_35 = Vector2_Distance_mB07492BC42EC582754AD11554BE5B7F8D0E93CF4(L_28, L_34, /*hidden argument*/NULL);
		if ((!(((float)L_35) < ((float)(0.1f)))))
		{
			goto IL_017f;
		}
	}
	{
		// startPosition = waypoints[nextWaypoint].position;
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_36 = __this->get_waypoints_20();
		int32_t L_37 = __this->get_nextWaypoint_21();
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_39, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_41 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_40, /*hidden argument*/NULL);
		__this->set_startPosition_19(L_41);
		// if (waypoints.Length <= nextWaypoint+1)
		TransformU5BU5D_t4F5A1132877D8BA66ABC0A9A7FADA4E0237A7804* L_42 = __this->get_waypoints_20();
		NullCheck(L_42);
		int32_t L_43 = __this->get_nextWaypoint_21();
		if ((((int32_t)(((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)1)))))
		{
			goto IL_0133;
		}
	}
	{
		// iterator = -1;
		__this->set_iterator_22((-1));
		// transform.eulerAngles = new Vector3(0, 0, 180);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_44 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_45), (0.0f), (0.0f), (180.0f), /*hidden argument*/NULL);
		NullCheck(L_44);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_44, L_45, /*hidden argument*/NULL);
		// nextWaypoint += iterator;
		int32_t L_46 = __this->get_nextWaypoint_21();
		int32_t L_47 = __this->get_iterator_22();
		__this->set_nextWaypoint_21(((int32_t)il2cpp_codegen_add((int32_t)L_46, (int32_t)L_47)));
		// return true;
		return (bool)1;
	}

IL_0133:
	{
		// else if (nextWaypoint <= 0)
		int32_t L_48 = __this->get_nextWaypoint_21();
		if ((((int32_t)L_48) > ((int32_t)0)))
		{
			goto IL_016c;
		}
	}
	{
		// iterator = 1;
		__this->set_iterator_22(1);
		// transform.eulerAngles = new Vector3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_49 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		il2cpp_codegen_initobj((&V_1), sizeof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 ));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_50 = V_1;
		NullCheck(L_49);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_49, L_50, /*hidden argument*/NULL);
		// nextWaypoint += iterator;
		int32_t L_51 = __this->get_nextWaypoint_21();
		int32_t L_52 = __this->get_iterator_22();
		__this->set_nextWaypoint_21(((int32_t)il2cpp_codegen_add((int32_t)L_51, (int32_t)L_52)));
		// return true;
		return (bool)1;
	}

IL_016c:
	{
		// nextWaypoint += iterator;
		int32_t L_53 = __this->get_nextWaypoint_21();
		int32_t L_54 = __this->get_iterator_22();
		__this->set_nextWaypoint_21(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)L_54)));
	}

IL_017f:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void Enemy::WalkUp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_WalkUp_m573D378452064576A38CB933D0E19DED5991A65D (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_WalkUp_m573D378452064576A38CB933D0E19DED5991A65D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		// int k = transform.position.x > target.position.x ? -1 : 1;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = ((AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 *)__this)->get_target_9();
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_x_2();
		if ((((float)L_2) > ((float)L_5)))
		{
			goto IL_0025;
		}
	}
	{
		G_B3_0 = 1;
		goto IL_0026;
	}

IL_0025:
	{
		G_B3_0 = (-1);
	}

IL_0026:
	{
		V_0 = G_B3_0;
		// transform.position = Vector2.MoveTowards(transform.position, new Vector2(target.position.x + visibleDistance * k, transform.position.y), speed * Time.deltaTime);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_6 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_9 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_8, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = ((AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 *)__this)->get_target_9();
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		float L_13 = ((AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 *)__this)->get_visibleDistance_10();
		int32_t L_14 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_15 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_15, /*hidden argument*/NULL);
		float L_17 = L_16.get_y_3();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector2__ctor_mEE8FB117AB1F8DB746FB8B3EB4C0DA3BF2A230D0((&L_18), ((float)il2cpp_codegen_add((float)L_12, (float)((float)il2cpp_codegen_multiply((float)L_13, (float)(((float)((float)L_14))))))), L_17, /*hidden argument*/NULL);
		float L_19 = ((AI_t54114CE88D9FB6E8701781E9AD588882D2CBD2C6 *)__this)->get_speed_6();
		float L_20 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_21 = Vector2_MoveTowards_m5CE85293E9619514164A685D1D4673E2A6E43DFA(L_9, L_18, ((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Vector2_op_Implicit_mD152B6A34B4DB7FFECC2844D74718568FE867D6F(L_21, /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_6, L_22, /*hidden argument*/NULL);
		// startPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_23 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_23, /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_25 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_24, /*hidden argument*/NULL);
		__this->set_startPosition_19(L_25);
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mA9911783A212E3706D7D51DC82C19D14CBDE5BE3 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	{
		// public int iterator = 1;
		__this->set_iterator_22(1);
		AI__ctor_mC2B737201B6BEBA44E26ADC77280A52BCEA7E7E0(__this, /*hidden argument*/NULL);
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
// System.Void Gun::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun_Start_mFF66BFE3A8EB1184BAC60BDB87CD29DBC4561522 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gun_Start_mFF66BFE3A8EB1184BAC60BDB87CD29DBC4561522_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// pool = Pools.bulletPools.Find(x => x.type == data.bulletType);
		IL2CPP_RUNTIME_CLASS_INIT(Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_il2cpp_TypeInfo_var);
		List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 * L_0 = ((Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_StaticFields*)il2cpp_codegen_static_fields_for(Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_il2cpp_TypeInfo_var))->get_bulletPools_0();
		Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8 * L_1 = (Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8 *)il2cpp_codegen_object_new(Predicate_1_t61CB9B91AF8863DEE5BAD02F26E86D885001D8E8_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m1C51FDE5662C3D1817F83D0520807E051E62429B(L_1, __this, (intptr_t)((intptr_t)Gun_U3CStartU3Eb__8_0_m8DCDEA4DE8AA1218FCEB72C3D2D9ECD1474F0A5E_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m1C51FDE5662C3D1817F83D0520807E051E62429B_RuntimeMethod_var);
		NullCheck(L_0);
		BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * L_2 = List_1_Find_mB72A91F399B043022B5C053A9FDE01790490438A(L_0, L_1, /*hidden argument*/List_1_Find_mB72A91F399B043022B5C053A9FDE01790490438A_RuntimeMethod_var);
		__this->set_pool_6(L_2);
		// bulletCount = bulletInHolder;
		int32_t L_3 = __this->get_bulletInHolder_10();
		__this->set_bulletCount_9(L_3);
		// bulletPool = GameObject.FindGameObjectWithTag("BulletPool").transform;
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = GameObject_FindGameObjectWithTag_m9F2877F52346B973DE3023209D73852E96ECC10D(_stringLiteral54D967C56163A7E14F4480A51E18F12D4AE4E98C, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_4, /*hidden argument*/NULL);
		__this->set_bulletPool_7(L_5);
		// }
		return;
	}
}
// System.Boolean Gun::Shoot(UnityEngine.Transform,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gun_Shoot_mCBB8ED42E31E62F72B7843FD9186F6AA9BAFE129 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___target0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___character1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gun_Shoot_mCBB8ED42E31E62F72B7843FD9186F6AA9BAFE129_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * V_0 = NULL;
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (bulletCount > 0)
		int32_t L_0 = __this->get_bulletCount_9();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_00cc;
		}
	}
	{
		// if (canShoot)
		bool L_1 = __this->get_canShoot_8();
		if (!L_1)
		{
			goto IL_00ca;
		}
	}
	{
		// canShoot = false;
		__this->set_canShoot_8((bool)0);
		// bulletCount--;
		int32_t L_2 = __this->get_bulletCount_9();
		__this->set_bulletCount_9(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)));
		// Bullet bullet = FindFreeBullet();
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_3 = Gun_FindFreeBullet_m80D20CB85083F752C6F7E85A0E217A23C854F378(__this, /*hidden argument*/NULL);
		V_0 = L_3;
		// if (bullet == null)
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_5 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_4, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0043;
		}
	}
	{
		// bullet = CreateNewBullet();
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_6 = Gun_CreateNewBullet_m57357ED34EEE2A59F759C61C4AA8A2EE108CBDB8(__this, /*hidden argument*/NULL);
		V_0 = L_6;
	}

IL_0043:
	{
		// Vector2 offset = target.position - character.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = ___target0;
		NullCheck(L_7);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_7, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = ___character1;
		NullCheck(L_9);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_9, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Vector3_op_Subtraction_mF9846B723A5034F8B9F5F5DCB78E3D67649143D3(L_8, L_10, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_12 = Vector2_op_Implicit_mEA1F75961E3D368418BA8CEB9C40E55C25BA3C28(L_11, /*hidden argument*/NULL);
		// Vector2 direction = Vector2.ClampMagnitude(offset, 1.0f);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_13 = Vector2_ClampMagnitude_m295C57C516C0F2B528CD9A80CE5B071927D3627F(L_12, (1.0f), /*hidden argument*/NULL);
		V_1 = L_13;
		// transform.eulerAngles = new Vector3(0, 0, 1) * (Mathf.Atan2(direction.y, direction.x) * 180 / Mathf.PI % 360);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15;
		memset((&L_15), 0, sizeof(L_15));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_15), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_16 = V_1;
		float L_17 = L_16.get_y_1();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_18 = V_1;
		float L_19 = L_18.get_x_0();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_20 = atan2f(L_17, L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_15, (fmodf(((float)((float)((float)il2cpp_codegen_multiply((float)L_20, (float)(180.0f)))/(float)(3.14159274f))), (360.0f))), /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_eulerAngles_m4B2B374C0B089A7ED0B522A3A4C56FA868992685(L_14, L_21, /*hidden argument*/NULL);
		// bullet.Shoot(data, transform);
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_22 = V_0;
		GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * L_23 = __this->get_data_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_24 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		Bullet_Shoot_mDAB8A4A0DE554D2D0252A9D729C73BF8D3C98620(L_22, L_23, L_24, /*hidden argument*/NULL);
		// StartCoroutine(ResetDelay());
		RuntimeObject* L_25 = Gun_ResetDelay_m64904CFDA3AB451960529DE2F76C58805632E305(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_25, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		// return true;
		return (bool)1;
	}

IL_00cc:
	{
		// return false;
		return (bool)0;
	}
}
// System.Collections.IEnumerator Gun::ResetDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gun_ResetDelay_m64904CFDA3AB451960529DE2F76C58805632E305 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gun_ResetDelay_m64904CFDA3AB451960529DE2F76C58805632E305_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 * L_0 = (U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 *)il2cpp_codegen_object_new(U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1_il2cpp_TypeInfo_var);
		U3CResetDelayU3Ed__10__ctor_mA43E6F3FD084B9C5FF9E95A6783BC41FFB68334C(L_0, 0, /*hidden argument*/NULL);
		U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator Gun::ReCharge(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Gun_ReCharge_mDCDB24D9BDA19B8C8CD78B78A911A6CDA4472977 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, int32_t ___bullets0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gun_ReCharge_mDCDB24D9BDA19B8C8CD78B78A911A6CDA4472977_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * L_0 = (U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 *)il2cpp_codegen_object_new(U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1_il2cpp_TypeInfo_var);
		U3CReChargeU3Ed__11__ctor_m0FD630A53828A6901DD8A38733F1AFD7122FAFE9(L_0, 0, /*hidden argument*/NULL);
		U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * L_2 = L_1;
		int32_t L_3 = ___bullets0;
		NullCheck(L_2);
		L_2->set_bullets_3(L_3);
		return L_2;
	}
}
// Bullet Gun::FindFreeBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * Gun_FindFreeBullet_m80D20CB85083F752C6F7E85A0E217A23C854F378 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gun_FindFreeBullet_m80D20CB85083F752C6F7E85A0E217A23C854F378_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * G_B2_0 = NULL;
	List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * G_B2_1 = NULL;
	Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * G_B1_0 = NULL;
	List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * G_B1_1 = NULL;
	{
		// Bullet obj = pool.pool.Find(x => !x.isActive);
		BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * L_0 = __this->get_pool_6();
		NullCheck(L_0);
		List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * L_1 = L_0->get_pool_1();
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_il2cpp_TypeInfo_var);
		Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * L_2 = ((U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_il2cpp_TypeInfo_var))->get_U3CU3E9__12_0_1();
		Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * L_3 = L_2;
		G_B1_0 = L_3;
		G_B1_1 = L_1;
		if (L_3)
		{
			G_B2_0 = L_3;
			G_B2_1 = L_1;
			goto IL_002a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_il2cpp_TypeInfo_var);
		U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 * L_4 = ((U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * L_5 = (Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB *)il2cpp_codegen_object_new(Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m67DD13F2FC5D4E64B65524C143E23711A0335636(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3CFindFreeBulletU3Eb__12_0_mE07BFC6BC8BBA3556AE06F867F1FFC7DB85DA016_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m67DD13F2FC5D4E64B65524C143E23711A0335636_RuntimeMethod_var);
		Predicate_1_t926BBD4766DF249F62CCDBD8E046F0228124D1FB * L_6 = L_5;
		((U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_il2cpp_TypeInfo_var))->set_U3CU3E9__12_0_1(L_6);
		G_B2_0 = L_6;
		G_B2_1 = G_B1_1;
	}

IL_002a:
	{
		NullCheck(G_B2_1);
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_7 = List_1_Find_m080A63F084BCFE3CAD3146EB5DD422D226F20A58(G_B2_1, G_B2_0, /*hidden argument*/List_1_Find_m080A63F084BCFE3CAD3146EB5DD422D226F20A58_RuntimeMethod_var);
		// return obj;
		return L_7;
	}
}
// Bullet Gun::CreateNewBullet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * Gun_CreateNewBullet_m57357ED34EEE2A59F759C61C4AA8A2EE108CBDB8 (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Gun_CreateNewBullet_m57357ED34EEE2A59F759C61C4AA8A2EE108CBDB8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * V_0 = NULL;
	{
		// GameObject obj = Instantiate(coreBullet, bulletPool);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_coreBullet_5();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_bulletPool_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		// Bullet newBullet = obj.GetComponent<Bullet>();
		NullCheck(L_2);
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_3 = GameObject_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mC44AB386177196D8110F3E6D8F0E814D44438271(L_2, /*hidden argument*/GameObject_GetComponent_TisBullet_t1B228DBA3982FDB21DE04329BDC49915421B9059_mC44AB386177196D8110F3E6D8F0E814D44438271_RuntimeMethod_var);
		V_0 = L_3;
		// pool.pool.Add(newBullet);
		BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * L_4 = __this->get_pool_6();
		NullCheck(L_4);
		List_1_t80D26E299EEFD7087FF2EBDDC643723800A13BF2 * L_5 = L_4->get_pool_1();
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_6 = V_0;
		NullCheck(L_5);
		List_1_Add_m09B2470FCEF2873876D243BA512D88AF3CF94F3C(L_5, L_6, /*hidden argument*/List_1_Add_m09B2470FCEF2873876D243BA512D88AF3CF94F3C_RuntimeMethod_var);
		// return newBullet;
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_7 = V_0;
		return L_7;
	}
}
// System.Void Gun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gun__ctor_m8EA3FA4E75A6B39D3A74AF33E4B764E1A00361DA (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, const RuntimeMethod* method)
{
	{
		// public bool canShoot = true;
		__this->set_canShoot_8((bool)1);
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Gun::<Start>b__8_0(BulletPool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Gun_U3CStartU3Eb__8_0_m8DCDEA4DE8AA1218FCEB72C3D2D9ECD1474F0A5E (Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * __this, BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * ___x0, const RuntimeMethod* method)
{
	{
		// pool = Pools.bulletPools.Find(x => x.type == data.bulletType);
		BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * L_0 = ___x0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_type_0();
		GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * L_2 = __this->get_data_4();
		NullCheck(L_2);
		int32_t L_3 = L_2->get_bulletType_5();
		return (bool)((((int32_t)L_1) == ((int32_t)L_3))? 1 : 0);
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
// System.Void Gun_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mD5A8D0F77A68E106F1B798E8F13B955A717CF808 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_mD5A8D0F77A68E106F1B798E8F13B955A717CF808_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 * L_0 = (U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 *)il2cpp_codegen_object_new(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mB14F534317A9C0E1CA2EC1C7935B02EF928C8AA8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Gun_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mB14F534317A9C0E1CA2EC1C7935B02EF928C8AA8 (U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Gun_<>c::<FindFreeBullet>b__12_0(Bullet)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CFindFreeBulletU3Eb__12_0_mE07BFC6BC8BBA3556AE06F867F1FFC7DB85DA016 (U3CU3Ec_t9A20D06DFA010ACD8A9F53141B0B0B2EECB67482 * __this, Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * ___x0, const RuntimeMethod* method)
{
	{
		// Bullet obj = pool.pool.Find(x => !x.isActive);
		Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * L_0 = ___x0;
		NullCheck(L_0);
		bool L_1 = Bullet_get_isActive_m495A5DE306047BD0600E0D8345E03DC3ABD1A1B2_inline(L_0, /*hidden argument*/NULL);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
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
// System.Void Gun_<ReCharge>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReChargeU3Ed__11__ctor_m0FD630A53828A6901DD8A38733F1AFD7122FAFE9 (U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Gun_<ReCharge>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReChargeU3Ed__11_System_IDisposable_Dispose_m80A73E1771BD048C76C0AD2804387BCE501A290F (U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Gun_<ReCharge>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CReChargeU3Ed__11_MoveNext_mC869237D4B0E1CB69CCF941E1213257A605A7A32 (U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReChargeU3Ed__11_MoveNext_mC869237D4B0E1CB69CCF941E1213257A605A7A32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if (!isCharging)
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_4 = V_1;
		NullCheck(L_4);
		bool L_5 = L_4->get_isCharging_11();
		if (L_5)
		{
			goto IL_006d;
		}
	}
	{
		// isCharging = true;
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_6 = V_1;
		NullCheck(L_6);
		L_6->set_isCharging_11((bool)1);
		// yield return new WaitForSeconds(data.reCharge);
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_7 = V_1;
		NullCheck(L_7);
		GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * L_8 = L_7->get_data_4();
		NullCheck(L_8);
		float L_9 = L_8->get_reCharge_3();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_10 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_10, L_9, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_10);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_004c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// bulletCount += bullets;
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_11 = V_1;
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_12 = V_1;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_bulletCount_9();
		int32_t L_14 = __this->get_bullets_3();
		NullCheck(L_11);
		L_11->set_bulletCount_9(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)));
		// isCharging = false;
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_15 = V_1;
		NullCheck(L_15);
		L_15->set_isCharging_11((bool)0);
	}

IL_006d:
	{
		// }
		return (bool)0;
	}
}
// System.Object Gun_<ReCharge>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReChargeU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m560D73A0566AADB5020D2438C164672048AA4E2F (U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Gun_<ReCharge>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CReChargeU3Ed__11_System_Collections_IEnumerator_Reset_m354E0E57682FB7C0CD32059EF56CC56629AA9F0C (U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CReChargeU3Ed__11_System_Collections_IEnumerator_Reset_m354E0E57682FB7C0CD32059EF56CC56629AA9F0C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CReChargeU3Ed__11_System_Collections_IEnumerator_Reset_m354E0E57682FB7C0CD32059EF56CC56629AA9F0C_RuntimeMethod_var);
	}
}
// System.Object Gun_<ReCharge>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CReChargeU3Ed__11_System_Collections_IEnumerator_get_Current_m706424B3F8A8395C2BF1F8559A199BAF3A67266C (U3CReChargeU3Ed__11_tD9E017D6D37296659E5253F27A62E550AB2F7FD1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Gun_<ResetDelay>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetDelayU3Ed__10__ctor_mA43E6F3FD084B9C5FF9E95A6783BC41FFB68334C (U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Gun_<ResetDelay>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetDelayU3Ed__10_System_IDisposable_Dispose_m9C5064DFD4323CDB300473E302C42FF245244EDC (U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Gun_<ResetDelay>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CResetDelayU3Ed__10_MoveNext_mB8CA2EA46148BD25727ECF34E70D55BB81710306 (U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CResetDelayU3Ed__10_MoveNext_mB8CA2EA46148BD25727ECF34E70D55BB81710306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_003d;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(data.delay);
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_4 = V_1;
		NullCheck(L_4);
		GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * L_5 = L_4->get_data_4();
		NullCheck(L_5);
		float L_6 = L_5->get_delay_1();
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_7 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_7, L_6, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_7);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003d:
	{
		__this->set_U3CU3E1__state_0((-1));
		// canShoot = true;
		Gun_t3C15F78CD5A40BC92F130917A1AA4679FA5874FB * L_8 = V_1;
		NullCheck(L_8);
		L_8->set_canShoot_8((bool)1);
		// }
		return (bool)0;
	}
}
// System.Object Gun_<ResetDelay>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetDelayU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA672641B7CDB2DDA3631E96BCFA8FA86767B84E5 (U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Gun_<ResetDelay>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CResetDelayU3Ed__10_System_Collections_IEnumerator_Reset_m1F6E5522CB2CC9F93C6A35F54B4BACF69AF9348C (U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CResetDelayU3Ed__10_System_Collections_IEnumerator_Reset_m1F6E5522CB2CC9F93C6A35F54B4BACF69AF9348C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CResetDelayU3Ed__10_System_Collections_IEnumerator_Reset_m1F6E5522CB2CC9F93C6A35F54B4BACF69AF9348C_RuntimeMethod_var);
	}
}
// System.Object Gun_<ResetDelay>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CResetDelayU3Ed__10_System_Collections_IEnumerator_get_Current_mF738F8C16131C25CC8D10315AE9AB93D5D33EECE (U3CResetDelayU3Ed__10_tBD7DDDC3FA221B493ADAF71A6C8EC2257632EAD1 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void GunData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunData__ctor_m4818747391E8DC661E8BAAFE32B44AFFCECADC95 (GunData_tD051288A27E9A076F165BF17367AF4D2AF35BF25 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mD6E1D31879EB485356D1C22C8AE12C5DF6392E79 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Start_mD6E1D31879EB485356D1C22C8AE12C5DF6392E79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE_mBF198078E908267FB6DA59F6242FC8F36FC06625_RuntimeMethod_var);
		__this->set_rb_10(L_0);
		// }
		return;
	}
}
// System.Void Player::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_FixedUpdate_mE20A1C81FD65599E65968B3747E282F3017B0786 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_FixedUpdate_mE20A1C81FD65599E65968B3747E282F3017B0786_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetKey(KeyCode.W) || Input.GetKey(KeyCode.Space))
		bool L_0 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)119), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		bool L_1 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)32), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}

IL_0012:
	{
		// Jump();
		Player_Jump_mE66EF456E76ADA55CCFD83638CCCAE9BC04E7B4F(__this, /*hidden argument*/NULL);
		// }
		goto IL_0022;
	}

IL_001a:
	{
		// else if (Input.GetKey(KeyCode.S))
		Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)115), /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if(Input.GetKey(KeyCode.A))
		bool L_2 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)97), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// Move(Vector2.left);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_get_left_mDD2A2AFDC4B0C1C876093F3E9C405579287FF4F8(/*hidden argument*/NULL);
		Player_Move_mC0113B4902DF04D386E1A99421A34E359986690E(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0037:
	{
		// else if (Input.GetKey(KeyCode.D))
		bool L_4 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)100), /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_004b;
		}
	}
	{
		// Move(Vector2.right);
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_5 = Vector2_get_right_mB4BD67462D579461853F297C0DE85D81E07E911E(/*hidden argument*/NULL);
		Player_Move_mC0113B4902DF04D386E1A99421A34E359986690E(__this, L_5, /*hidden argument*/NULL);
	}

IL_004b:
	{
		// }
		return;
	}
}
// System.Void Player::Move(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Move_mC0113B4902DF04D386E1A99421A34E359986690E (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Move_mC0113B4902DF04D386E1A99421A34E359986690E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb.AddForce(direction * speed);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_0 = __this->get_rb_10();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = ___direction0;
		float L_2 = __this->get_speed_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_3 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_1, L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_AddForce_mFE4658C0AE6643026A7CE7452857CA37DB687436(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::Jump()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Jump_mE66EF456E76ADA55CCFD83638CCCAE9BC04E7B4F (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_Jump_mE66EF456E76ADA55CCFD83638CCCAE9BC04E7B4F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isGrounded)//(rb.velocity.y <= 0.01f) && rb.velocity.y >= -0.01f
		bool L_0 = __this->get_isGrounded_8();
		if (!L_0)
		{
			goto IL_002b;
		}
	}
	{
		// rb.AddForce(Vector2.up * jumpForce, ForceMode2D.Impulse);
		Rigidbody2D_tBDC6900A76D3C47E291446FF008D02B817C81CDE * L_1 = __this->get_rb_10();
		IL2CPP_RUNTIME_CLASS_INIT(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_il2cpp_TypeInfo_var);
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_2 = Vector2_get_up_mC4548731D5E7C71164D18C390A1AC32501DAE441(/*hidden argument*/NULL);
		float L_3 = __this->get_jumpForce_7();
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_4 = Vector2_op_Multiply_m8A843A37F2F3199EBE99DC7BDABC1DC2EE01AF56(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Rigidbody2D_AddForce_m09E1A2E24DABA5BBC613E35772AE2C1C35C6E40C(L_1, L_4, 1, /*hidden argument*/NULL);
		// isGrounded = false;
		__this->set_isGrounded_8((bool)0);
	}

IL_002b:
	{
		// }
		return;
	}
}
// System.Void Player::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnTriggerEnter2D_mF25902E717B82E9E5BF607A7DD8EA81608DA13FA (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mAEC38956EFD0E61D848D4E5AFB83BABCE2DF1E23 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void PlayerCollision::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_FixedUpdate_mC58D743B4B8584245DB4F666DE21FF1CAE4B1642 (PlayerCollision_t71D1DFEA769AA3755DD3E9B39ECEC8A13E9C495F * __this, const RuntimeMethod* method)
{
	{
		// transform.position = player.transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = __this->get_player_4();
		NullCheck(L_1);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerCollision::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision_OnTriggerEnter2D_m576D92921265D488F327CDC362EF3EA13C043F36 (PlayerCollision_t71D1DFEA769AA3755DD3E9B39ECEC8A13E9C495F * __this, Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PlayerCollision_OnTriggerEnter2D_m576D92921265D488F327CDC362EF3EA13C043F36_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.CompareTag("Ground"))
		Collider2D_tD64BE58E48B95D89D349FEAB54D0FE2EEBF83379 * L_0 = ___collision0;
		NullCheck(L_0);
		bool L_1 = Component_CompareTag_mD074608D7FEC96A53C57A456BA613EE01C31D4B7(L_0, _stringLiteral143E94AF41CE0F05B57800590E4BC48D23FAA6C2, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		// player.isGrounded = true;
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_2 = __this->get_player_4();
		NullCheck(L_2);
		L_2->set_isGrounded_8((bool)1);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Void PlayerCollision::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerCollision__ctor_mCF1CEBEB78A98AB577E4FEBA43517D8D62735525 (PlayerCollision_t71D1DFEA769AA3755DD3E9B39ECEC8A13E9C495F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97(__this, /*hidden argument*/NULL);
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
// System.Void Pools::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pools__cctor_mCE16F1DF1835D64EE6D3B20D5B4696544420244A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Pools__cctor_mCE16F1DF1835D64EE6D3B20D5B4696544420244A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static List<BulletPool> bulletPools = new List<BulletPool>();
		List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 * L_0 = (List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 *)il2cpp_codegen_object_new(List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31_il2cpp_TypeInfo_var);
		List_1__ctor_m2C1E19BCB032B5FC75189F77E66E0C28CDF8EB4C(L_0, /*hidden argument*/List_1__ctor_m2C1E19BCB032B5FC75189F77E66E0C28CDF8EB4C_RuntimeMethod_var);
		((Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_StaticFields*)il2cpp_codegen_static_fields_for(Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_il2cpp_TypeInfo_var))->set_bulletPools_0(L_0);
		// bulletPools.Add(new BulletPool() { type = BulletType.Common});
		List_1_tFFBFBFD54FD58A2E43BC347FFF3D06B34A934D31 * L_1 = ((Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_StaticFields*)il2cpp_codegen_static_fields_for(Pools_tA05A679D370DF9A119BBD5ADFC97D0371EF349F4_il2cpp_TypeInfo_var))->get_bulletPools_0();
		BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * L_2 = (BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 *)il2cpp_codegen_object_new(BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7_il2cpp_TypeInfo_var);
		BulletPool__ctor_mF0DE487BB45618178558BD0040766B3B802E86A2(L_2, /*hidden argument*/NULL);
		BulletPool_tC8252392232333DE26D74B995090DEA64AADF8F7 * L_3 = L_2;
		NullCheck(L_3);
		L_3->set_type_0(0);
		NullCheck(L_1);
		List_1_Add_m85B2C900F890A48CC90DBC9AD9A457776EFDB399(L_1, L_3, /*hidden argument*/List_1_Add_m85B2C900F890A48CC90DBC9AD9A457776EFDB399_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool Bullet_get_isActive_m495A5DE306047BD0600E0D8345E03DC3ABD1A1B2_inline (Bullet_t1B228DBA3982FDB21DE04329BDC49915421B9059 * __this, const RuntimeMethod* method)
{
	{
		// get { return IsActive; }
		bool L_0 = __this->get_IsActive_7();
		return L_0;
	}
}
