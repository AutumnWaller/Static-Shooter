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
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
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

// AmmoButton
struct AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74;
// Aura2API.AuraFreeCamera
struct AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC;
// Aura2API.AutoMoveAndRotate
struct AutoMoveAndRotate_tCFBA53289008A1AC602A2DA108126401EB3C9131;
// Aura2API.AutoMoveAndRotate/Vector3andSpace
struct Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D;
// Aura2API.DebugFps
struct DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3;
// Aura2API.LightFlicker
struct LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571;
// Aura2API.MoveSinCos
struct MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51;
// Aura2API.SinRotationOffset
struct SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382;
// Damageable
struct Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474;
// DamageableBarricade
struct DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9;
// Enemy
struct Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6;
// EnemyNavigation
struct EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F;
// GameManager
struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89;
// GameManager/<StartNewWave>d__26
struct U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915;
// HealthButton
struct HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F;
// IDamageable
struct IDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD;
// IncreasedDamageButton
struct IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76;
// IncreasedKnockbackButton
struct IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713;
// MainMenu
struct MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105;
// Player
struct Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873;
// PoolManager
struct PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04;
// PurchaseableButton
struct PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959;
// RespawnBarricadesButton
struct RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B;
// Scoring
struct Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01;
// Spawner
struct Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D;
// Spawner[]
struct SpawnerU5BU5D_t5DF7886BE7EEE652C334704C2CE1ED6517706831;
// State
struct State_tC5BA2DC909C73846EB01A3E0806E5D6347274619;
// State/StateChanged
struct StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F;
// System.Collections.Generic.List`1<Spawner>
struct List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0;
// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5;
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
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.NotSupportedException
struct NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010;
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652;
// TMPro.TMP_Character
struct TMP_Character_t1875AACA978396521498D6A699052C187903553D;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E;
// TMPro.TMP_Text
struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505;
// TMPro.TMP_TextElement
struct TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181;
// TMPro.TextAlignmentOptions[]
struct TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438;
// UIAmmo
struct UIAmmo_tD6DC7E96EBB5CE609CAAA7812A03D2CC97C94399;
// UIBase
struct UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467;
// UIBuyMenu
struct UIBuyMenu_tDA1EA67055DEFF28D2381FD7AAC240A83AD00B1D;
// UIGameOver
struct UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195;
// UIHealth
struct UIHealth_t8358029AB4BE890792AC5ADED398B55ED33D9F68;
// UIHealthCounter
struct UIHealthCounter_t156C24DE6270503DB209DC28BDD9E1F60608220A;
// UIManager
struct UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C;
// UIMoney
struct UIMoney_tA821A929D622FDA2D686FAABADC21F1584A257F6;
// UIPause
struct UIPause_t3384ECEE2ADD964940A87F5FB15E696B35C60E72;
// UIPlayButton
struct UIPlayButton_t8F31132EEC3EB4DA226498809075014AF39528A8;
// UITime
struct UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B;
// UITime/<Countdown>d__6
struct U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96;
// UIWaveInfo
struct UIWaveInfo_t5CBBE22C27BBFAFE5FB22980EC39298E8C14EBF0;
// UnityEngine.AI.NavMeshAgent
struct NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB;
// UnityEngine.AudioClip
struct AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801;
// UnityEngine.AudioSource
struct AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C;
// UnityEngine.Behaviour
struct Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8;
// UnityEngine.Camera
struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0;
// UnityEngine.Canvas
struct Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72;
// UnityEngine.Collider
struct Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF;
// UnityEngine.Collision
struct Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C;
// UnityEngine.Color32[]
struct Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983;
// UnityEngine.Component
struct Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA;
// UnityEngine.Coroutine
struct Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC;
// UnityEngine.Events.UnityAction
struct UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520;
// UnityEngine.Light
struct Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C;
// UnityEngine.Material
struct Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598;
// UnityEngine.Material[]
struct MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398;
// UnityEngine.Mesh
struct Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ParticleSystem
struct ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D;
// UnityEngine.RectTransform
struct RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20;
// UnityEngine.Rigidbody
struct Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5;
// UnityEngine.Sprite
struct Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198;
// UnityEngine.Texture2D
struct Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C;
// UnityEngine.Transform
struct Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172;
// UnityEngine.UI.Graphic
struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8;
// UnityEngine.UI.Image
struct Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B;
// UnityEngine.UI.Selectable
struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02;
// UnityEngine.UI.Slider
struct Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C;
// UnityEngine.UI.VertexHelper
struct VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8;
// Weapon
struct Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9;
// WeaponRifle
struct WeaponRifle_t68B5D7472A8059680D858F6CDDBB3D36DA30D956;

IL2CPP_EXTERN_C RuntimeClass* GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral117DEFDCBAEB752F96F21605CE42D543CD8A1378;
IL2CPP_EXTERN_C String_t* _stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2;
IL2CPP_EXTERN_C String_t* _stringLiteral28254A4DA5C76FF30ED3BCD236A4573ECB144E0D;
IL2CPP_EXTERN_C String_t* _stringLiteral294D359ECE148A430F19981912277E5154CA19E0;
IL2CPP_EXTERN_C String_t* _stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C;
IL2CPP_EXTERN_C String_t* _stringLiteral64D3BC46076D60D72B5E3F73E778E959AB181915;
IL2CPP_EXTERN_C String_t* _stringLiteral7A67C28476450BFF38CE8226A30240E013217DD0;
IL2CPP_EXTERN_C String_t* _stringLiteralA031001BED8B7813F5084BDEF396E523AA274B46;
IL2CPP_EXTERN_C String_t* _stringLiteralA95E85AED56318093B024674E217CAE0BD30241D;
IL2CPP_EXTERN_C String_t* _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C;
IL2CPP_EXTERN_C String_t* _stringLiteralBBDC7757D030FE9E37EE5FC4AAF0A4A8B7EE63AF;
IL2CPP_EXTERN_C String_t* _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8;
IL2CPP_EXTERN_C String_t* _stringLiteralF58F1C9BBBCED2419818A0A2151E340ADCC0CC8B;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_mA9D82E44CC018CCA691758D999FF6E2B6BDA8068_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m1DCED5DB1934151FC68A8E7CAECF7986359D7107_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB_mFCC507CF7EDAE5FCD236FEC7ABD0A2668D7FCB96_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* EnemyNavigation_OnGameStateChanged_mE6F81E67B6ABF787390AC7DB2BB8F1CE8EECA66E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnGameStateChanged_mD216B65D183F04354CDE736E7DA9B6B0BDFD946A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameManager_OnWaveStateChanged_mB66178205B75B222DD9621AB48054BD2EA9A1943_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisEnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F_mF43971EB4E9F2BC2C0A9E64351D17D676CFBBAC8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_m178D924FAD9BC62D5A28723DF4B3682AE5D08023_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mC24601E344AD1C7AA8A1E7E75FFD1B3484B98095_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m56233872D5CA605BE5A1EE5E792FAD05CAE581C2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mAFDC3F18F0BE5A1F4EBC18346C8ECCFDB05769CA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mE8CAD285D84453EFF8B2D30D84DE431C4DD986B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mA5BDA0FDC59A60309E7B7651D7D68A650908FABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mF3FF543F43616B19548F1A7FBC8BB7C79AF58015_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_mC130F6AE7DA876F8E7286870B9C3B49BC001D218_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CStartNewWaveU3Ed__26_System_Collections_IEnumerator_Reset_m97DDB4ABD2688210F039B6DB24BBF0C292CCEEC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UIManager_ChangeUI_m401472FB79E159F95C7F053E93FF052A59209871_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AmmoButton_Buy_mAC12C50B0245588CB1A8733FAE60F3696153D489_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AuraFreeCamera_Update_mD7F53BF89E33BC30A4035BE53EE445970263DA3F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AutoMoveAndRotate_Update_m7CCD0E5BE36C93A81AB64CFA4AF11D27008FBE2E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DebugFps_OnGUI_mEE4F96F024233B0BEBBF87D3BF77B486F6479116_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemyNavigation_Awake_mA024E0A8D386630708FB4DC8995592D893B75ACA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemyNavigation_OnDisable_m43F2D283628ED34AF7BAA6A19D1695F803B55C91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t EnemyNavigation_OnEnable_m3BF458E00F748A6F048A71E8D9133ADE9702207D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Die_m2C2144E88C664B9DE839A94B6F282D5908BF1C29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_IDamageable_TakeKnockBack_m7AD5C24BCAD88B786ADD49158C0600A95B2A158A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_OnCollisionEnter_m0E5C6C0A258355EAF0700AC2905EAD3A5E7905FA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Start_mEA16629472D3B5EF50899E1A091ADF28463DD033_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Enemy_Update_m4B43E4ED31FD86486FE3A8B0F65B9D69A46217E6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Awake_m12E1357322F99B1544DAD9C099CBFA6E63529A49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_SpawnEnemies_m7C05C89B370EAB82ADF103E6A7966521FA5CDDBC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_StartEnemies_m2270859EFD02CAB5801B4DEDFC0E31CF2C844784_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_StartNewWave_m3EE69DE0615A8B9A0B9FACFA329F42635082EA91_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Start_m4B67F69CF18652603C29FC1C5B7C6482C77B69DB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GameManager_Update_mB18435F2FDDC6175F5A83AB40198635F26D6FBFB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HealthButton_Buy_m8DC22398CB7C00C3392953B0190FD8996159BB1A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncreasedDamageButton_Buy_m0A997E3A104D1E59AC6E4792AD9185407D9CFA57_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncreasedDamageButton_UpdateCost_m5E1FB40B4658359858ACD32BE8BFAC412EE4359A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncreasedKnockbackButton_Buy_mC877D3C7F99D47291FF2C45A96D5511D7876A852_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t IncreasedKnockbackButton_UpdateCost_m00CA0826E4A76C5C7B31772A9BF9E1D1063E77ED_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LightFlicker_Start_m5F8BA1CC13065C14DA9BF1E22630DB77F9A7AA2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t LightFlicker_Update_m79885F10349BE6BD00D28EE31143E981F69C0906_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveSinCos_Update_mD9FFFE8D54810856476C29543CF2AEDEE3B29B34_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MoveSinCos__ctor_m2859153E609DD22B909D09F5FC5E491ED3720F78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Player_RotateToMouse_m8F615ACC8EE905F5E309ED8DB5964C855320FA78_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoolManager_Awake_m821EBA923D0180B464158074FB002FF6981F78FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoolManager_CreateEnemyPool_m4A4213DFAAE9D833789949BD44CF2B1525B86B3C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoolManager_GetEnemyFromPool_mD2BE242337D1F987C891E650CEF40D65EBCD6C7C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoolManager_GetInstance_mE8BBF4EBB3F655D9EAAFF62EA621AD367D4233DCAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PoolManager_GetInstance_mE8BBF4EBB3F655D9EAAFF62EA621AD367D4233DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RespawnBarricadesButton_Buy_m5866AE02F5AA9A18EC4019F48474C65908009596_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scoring_Awake_m14F2B321277DD1101F0936CED3E1CEEB317F48AD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scoring_EnemyHit_m080CBA7F9189CA94A6CA9A6F228FC7F4B8893E81_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scoring_EnemyKill_mA67072CF9ADB5D118B7F7FAD32AAC7D6DFC9BC5C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scoring_GetMoney_mF17383D5FF69A97D3EEE5A573B16CA50FBDCB2A8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scoring_GetTotalMoney_m289384516363E56CFE7FC4F12D63C026B237DA95AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Scoring_GetTotalMoney_m289384516363E56CFE7FC4F12D63C026B237DA95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SinRotationOffset_Update_mD8BD0BBBA8616D1B48E1EAD1A734224DBD438FA1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SinRotationOffset__ctor_m01D64F6180743B290B4DA7938D3492F6B70259F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Spawner_Spawn_mC4A347D5B0A4DF08B424A734CD76E7AD3B2EEE29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t State_Awake_m9DE62C4A62B2519108B321A0664678A14A2AD2CB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4AssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t State_add_GameStateChanged_m2618E258FC9540D124C2F76659A386517D30B72F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t State_add_WaveStateChanged_m07846383CD17959BE8A8FD840F662E60C4CA0D13_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t State_remove_GameStateChanged_m840886B5A411DCAA538BD5D2FF26F4B8C3D4A5EE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t State_remove_WaveStateChanged_m2486E3945871D003A8E7752B5541E992970EDE29_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCountdownU3Ed__6_MoveNext_m34DAF6A25C40D90569EBFCDD6FA57B6B3F0675AA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_mC130F6AE7DA876F8E7286870B9C3B49BC001D218_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartNewWaveU3Ed__26_MoveNext_m62B063D081C64E86610097D4B32F543A7A53106D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CStartNewWaveU3Ed__26_System_Collections_IEnumerator_Reset_m97DDB4ABD2688210F039B6DB24BBF0C292CCEEC2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_Awake_mD9EFB03744D897F8A0784A58CB31CE9B0BC5D651_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_CloseWindow_m912797EE56B153F0C6FADFA02EFD8235FD8E0C1D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_GetInstance_m2CEB5E722EE87CB720B1D2C8C5596D2B537A5A6CAssemblyU2DCSharp_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_GetInstance_m2CEB5E722EE87CB720B1D2C8C5596D2B537A5A6C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIManager_Start_mA404E1D4B4AA55F22307F16D7D7842CE7580DD0B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIMoney_Update_m453B7A8363031920224464985A70DBAE2534F97F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UITime_Countdown_m6A96B225942F81DCDAE8F8FA8D36C063A81D525B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UITime_OnEnable_m6575C638F5D3BB960913B328C8CC8435373C3877_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UITime_SetText_m85CBF7FF62BACAE6C1563383F51484DBDC9B35F4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t UIWaveInfo_Update_mB46978C5E2853367265BC281D547A730FF9F76CD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Weapon_Awake_m0513FE0E521BFC4BBDC162CD85821E1EFD3B7BCD_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Weapon_Shoot_m9EDE314E294EE82D2A90D2EB541C30457F908650_MetadataUsageId;
struct ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;

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


// GameManager_<StartNewWave>d__26
struct  U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915  : public RuntimeObject
{
public:
	// System.Int32 GameManager_<StartNewWave>d__26::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager_<StartNewWave>d__26::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameManager GameManager_<StartNewWave>d__26::<>4__this
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915, ___U3CU3E4__this_2)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<Spawner>
struct  List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SpawnerU5BU5D_t5DF7886BE7EEE652C334704C2CE1ED6517706831* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A, ____items_1)); }
	inline SpawnerU5BU5D_t5DF7886BE7EEE652C334704C2CE1ED6517706831* get__items_1() const { return ____items_1; }
	inline SpawnerU5BU5D_t5DF7886BE7EEE652C334704C2CE1ED6517706831** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SpawnerU5BU5D_t5DF7886BE7EEE652C334704C2CE1ED6517706831* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SpawnerU5BU5D_t5DF7886BE7EEE652C334704C2CE1ED6517706831* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A_StaticFields, ____emptyArray_5)); }
	inline SpawnerU5BU5D_t5DF7886BE7EEE652C334704C2CE1ED6517706831* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SpawnerU5BU5D_t5DF7886BE7EEE652C334704C2CE1ED6517706831** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SpawnerU5BU5D_t5DF7886BE7EEE652C334704C2CE1ED6517706831* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____items_1)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct  List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B, ____items_1)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__items_1() const { return ____items_1; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B_StaticFields, ____emptyArray_5)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__emptyArray_5() const { return ____emptyArray_5; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<System.Object>
struct  Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____array_0)); }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};


// System.Collections.Generic.Queue`1<UnityEngine.GameObject>
struct  Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5, ____array_0)); }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* get__array_0() const { return ____array_0; }
	inline GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(GameObjectU5BU5D_tBF9D474747511CF34A040A1697E34C74C19BB520* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
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

// UITime_<Countdown>d__6
struct  U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96  : public RuntimeObject
{
public:
	// System.Int32 UITime_<Countdown>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UITime_<Countdown>d__6::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UITime UITime_<Countdown>d__6::<>4__this
	UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96, ___U3CU3E4__this_2)); }
	inline UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
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


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.GameObject>
struct  Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___list_0)); }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * get_list_0() const { return ___list_0; }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053, ___current_3)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_current_3() const { return ___current_3; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
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


// TMPro.MaterialReference
struct  MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F 
{
public:
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;

public:
	inline static int32_t get_offset_of_index_0() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___index_0)); }
	inline int32_t get_index_0() const { return ___index_0; }
	inline int32_t* get_address_of_index_0() { return &___index_0; }
	inline void set_index_0(int32_t value)
	{
		___index_0 = value;
	}

	inline static int32_t get_offset_of_fontAsset_1() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fontAsset_1)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_fontAsset_1() const { return ___fontAsset_1; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_fontAsset_1() { return &___fontAsset_1; }
	inline void set_fontAsset_1(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___fontAsset_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fontAsset_1), (void*)value);
	}

	inline static int32_t get_offset_of_spriteAsset_2() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___spriteAsset_2)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_spriteAsset_2() const { return ___spriteAsset_2; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_spriteAsset_2() { return &___spriteAsset_2; }
	inline void set_spriteAsset_2(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___spriteAsset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spriteAsset_2), (void*)value);
	}

	inline static int32_t get_offset_of_material_3() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___material_3)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_material_3() const { return ___material_3; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_material_3() { return &___material_3; }
	inline void set_material_3(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___material_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___material_3), (void*)value);
	}

	inline static int32_t get_offset_of_isDefaultMaterial_4() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isDefaultMaterial_4)); }
	inline bool get_isDefaultMaterial_4() const { return ___isDefaultMaterial_4; }
	inline bool* get_address_of_isDefaultMaterial_4() { return &___isDefaultMaterial_4; }
	inline void set_isDefaultMaterial_4(bool value)
	{
		___isDefaultMaterial_4 = value;
	}

	inline static int32_t get_offset_of_isFallbackMaterial_5() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___isFallbackMaterial_5)); }
	inline bool get_isFallbackMaterial_5() const { return ___isFallbackMaterial_5; }
	inline bool* get_address_of_isFallbackMaterial_5() { return &___isFallbackMaterial_5; }
	inline void set_isFallbackMaterial_5(bool value)
	{
		___isFallbackMaterial_5 = value;
	}

	inline static int32_t get_offset_of_fallbackMaterial_6() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___fallbackMaterial_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_fallbackMaterial_6() const { return ___fallbackMaterial_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_fallbackMaterial_6() { return &___fallbackMaterial_6; }
	inline void set_fallbackMaterial_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___fallbackMaterial_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fallbackMaterial_6), (void*)value);
	}

	inline static int32_t get_offset_of_padding_7() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___padding_7)); }
	inline float get_padding_7() const { return ___padding_7; }
	inline float* get_address_of_padding_7() { return &___padding_7; }
	inline void set_padding_7(float value)
	{
		___padding_7 = value;
	}

	inline static int32_t get_offset_of_referenceCount_8() { return static_cast<int32_t>(offsetof(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F, ___referenceCount_8)); }
	inline int32_t get_referenceCount_8() const { return ___referenceCount_8; }
	inline int32_t* get_address_of_referenceCount_8() { return &___referenceCount_8; }
	inline void set_referenceCount_8(int32_t value)
	{
		___referenceCount_8 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___fontAsset_1;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___spriteAsset_2;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// TMPro.TMP_FontStyleStack
struct  TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 
{
public:
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;

public:
	inline static int32_t get_offset_of_bold_0() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___bold_0)); }
	inline uint8_t get_bold_0() const { return ___bold_0; }
	inline uint8_t* get_address_of_bold_0() { return &___bold_0; }
	inline void set_bold_0(uint8_t value)
	{
		___bold_0 = value;
	}

	inline static int32_t get_offset_of_italic_1() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___italic_1)); }
	inline uint8_t get_italic_1() const { return ___italic_1; }
	inline uint8_t* get_address_of_italic_1() { return &___italic_1; }
	inline void set_italic_1(uint8_t value)
	{
		___italic_1 = value;
	}

	inline static int32_t get_offset_of_underline_2() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___underline_2)); }
	inline uint8_t get_underline_2() const { return ___underline_2; }
	inline uint8_t* get_address_of_underline_2() { return &___underline_2; }
	inline void set_underline_2(uint8_t value)
	{
		___underline_2 = value;
	}

	inline static int32_t get_offset_of_strikethrough_3() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___strikethrough_3)); }
	inline uint8_t get_strikethrough_3() const { return ___strikethrough_3; }
	inline uint8_t* get_address_of_strikethrough_3() { return &___strikethrough_3; }
	inline void set_strikethrough_3(uint8_t value)
	{
		___strikethrough_3 = value;
	}

	inline static int32_t get_offset_of_highlight_4() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___highlight_4)); }
	inline uint8_t get_highlight_4() const { return ___highlight_4; }
	inline uint8_t* get_address_of_highlight_4() { return &___highlight_4; }
	inline void set_highlight_4(uint8_t value)
	{
		___highlight_4 = value;
	}

	inline static int32_t get_offset_of_superscript_5() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___superscript_5)); }
	inline uint8_t get_superscript_5() const { return ___superscript_5; }
	inline uint8_t* get_address_of_superscript_5() { return &___superscript_5; }
	inline void set_superscript_5(uint8_t value)
	{
		___superscript_5 = value;
	}

	inline static int32_t get_offset_of_subscript_6() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___subscript_6)); }
	inline uint8_t get_subscript_6() const { return ___subscript_6; }
	inline uint8_t* get_address_of_subscript_6() { return &___subscript_6; }
	inline void set_subscript_6(uint8_t value)
	{
		___subscript_6 = value;
	}

	inline static int32_t get_offset_of_uppercase_7() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___uppercase_7)); }
	inline uint8_t get_uppercase_7() const { return ___uppercase_7; }
	inline uint8_t* get_address_of_uppercase_7() { return &___uppercase_7; }
	inline void set_uppercase_7(uint8_t value)
	{
		___uppercase_7 = value;
	}

	inline static int32_t get_offset_of_lowercase_8() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___lowercase_8)); }
	inline uint8_t get_lowercase_8() const { return ___lowercase_8; }
	inline uint8_t* get_address_of_lowercase_8() { return &___lowercase_8; }
	inline void set_lowercase_8(uint8_t value)
	{
		___lowercase_8 = value;
	}

	inline static int32_t get_offset_of_smallcaps_9() { return static_cast<int32_t>(offsetof(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84, ___smallcaps_9)); }
	inline uint8_t get_smallcaps_9() const { return ___smallcaps_9; }
	inline uint8_t* get_address_of_smallcaps_9() { return &___smallcaps_9; }
	inline void set_smallcaps_9(uint8_t value)
	{
		___smallcaps_9 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<System.Int32>
struct  TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_ItemStack_0)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<System.Single>
struct  TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	float ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_ItemStack_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3, ___m_DefaultItem_3)); }
	inline float get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline float* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(float value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient>
struct  TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_ItemStack_0)); }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TMP_ColorGradientU5BU5D_t0948D618AC4240E6F0CFE0125BB6A4E931DE847C* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D, ___m_DefaultItem_3)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DefaultItem_3), (void*)value);
	}
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


// UnityEngine.Color32
struct  Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03__padding[1];
	};

public:
};


// UnityEngine.Matrix4x4
struct  Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___identityMatrix_17 = value;
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


// UnityEngine.Rect
struct  Rect_t35B976DE901B5423C11705E156938EA27AB402CE 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t35B976DE901B5423C11705E156938EA27AB402CE, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_HighlightedSprite_0)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_PressedSprite_1)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_SelectedSprite_2)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A, ___m_DisabledSprite_3)); }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_pinvoke
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A_marshaled_com
{
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_HighlightedSprite_0;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_PressedSprite_1;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_SelectedSprite_2;
	Sprite_tCA09498D612D08DE668653AF1E9C12BF53434198 * ___m_DisabledSprite_3;
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


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
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

// State_GameState
struct  GameState_t574C9F02FB84118F96B7C0A8BA7A6FAD67F78A92 
{
public:
	// System.Int32 State_GameState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GameState_t574C9F02FB84118F96B7C0A8BA7A6FAD67F78A92, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// State_WaveState
struct  WaveState_tFB1788C06003967CB27512904AC0E64AB074FDDD 
{
public:
	// System.Int32 State_WaveState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(WaveState_tFB1788C06003967CB27512904AC0E64AB074FDDD, ___value___2)); }
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

// TMPro.ColorMode
struct  ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3 
{
public:
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorMode_tA3D65CECD3289ADB3A3C5A936DC23B41C364C4C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.Extents
struct  Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 
{
public:
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___min_0;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___max_1;

public:
	inline static int32_t get_offset_of_min_0() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___min_0)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_min_0() const { return ___min_0; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_min_0() { return &___min_0; }
	inline void set_min_0(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___min_0 = value;
	}

	inline static int32_t get_offset_of_max_1() { return static_cast<int32_t>(offsetof(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3, ___max_1)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_max_1() const { return ___max_1; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_max_1() { return &___max_1; }
	inline void set_max_1(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___max_1 = value;
	}
};


// TMPro.FontStyles
struct  FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893 
{
public:
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontStyles_t31B880C817B2DF0BF3B60AC4D187A3E7BE5D8893, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.FontWeight
struct  FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C 
{
public:
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FontWeight_tE551C56E6C7CCAFCC6519C65D03AAA340E9FF35C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference>
struct  TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_ItemStack_0)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9, ___m_DefaultItem_3)); }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(MaterialReference_tFDD866CC1D210125CDEC9DCB60B9AACB2FE3AF7F  value)
	{
		___m_DefaultItem_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}
};


// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32>
struct  TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_ItemStack_0)); }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(Color32U5BU5D_tABFBCB467E6D1B791303A0D3A3AA1A482F620983* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0, ___m_DefaultItem_3)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_Text_TextInputSources
struct  TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4 
{
public:
	// System.Int32 TMPro.TMP_Text_TextInputSources::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextInputSources_t08C2D3664AE99CBF6ED41C9DB8F4E9E8FC8E54B4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TMP_TextElementType
struct  TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509 
{
public:
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TMP_TextElementType_tBF2553FA730CC21CF99473E591C33DC52360D509, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextAlignmentOptions
struct  TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337 
{
public:
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignmentOptions_t4BEB3BA6EE897B5127FFBABD7E36B1A024EE5337, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextOverflowModes
struct  TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76 
{
public:
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextOverflowModes_tC4F820014333ECAF4D52B02F75171FD9E52B9D76, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextRenderFlags
struct  TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56 
{
public:
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextRenderFlags_t29165355D5674BAEF40359B740631503FA9C0B56, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.TextureMappingOptions
struct  TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10 
{
public:
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextureMappingOptions_tAC77A218D6DF5F386DA38AEAF3D9C943F084BD10, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TMPro.VertexGradient
struct  VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A 
{
public:
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___bottomRight_3;

public:
	inline static int32_t get_offset_of_topLeft_0() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topLeft_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topLeft_0() const { return ___topLeft_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topLeft_0() { return &___topLeft_0; }
	inline void set_topLeft_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topLeft_0 = value;
	}

	inline static int32_t get_offset_of_topRight_1() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___topRight_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_topRight_1() const { return ___topRight_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_topRight_1() { return &___topRight_1; }
	inline void set_topRight_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___topRight_1 = value;
	}

	inline static int32_t get_offset_of_bottomLeft_2() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomLeft_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomLeft_2() const { return ___bottomLeft_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomLeft_2() { return &___bottomLeft_2; }
	inline void set_bottomLeft_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomLeft_2 = value;
	}

	inline static int32_t get_offset_of_bottomRight_3() { return static_cast<int32_t>(offsetof(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A, ___bottomRight_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_bottomRight_3() const { return ___bottomRight_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_bottomRight_3() { return &___bottomRight_3; }
	inline void set_bottomRight_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___bottomRight_3 = value;
	}
};


// TMPro.VertexSortingOrder
struct  VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5 
{
public:
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexSortingOrder_t2571FF911BB69CC1CC229DF12DE68568E3F850E5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Collision
struct  Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_Impulse_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_RelativeVelocity_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_Rigidbody_2)); }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_Collider_3)); }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t10BB5D5BFFFA3C919FD97DFDEDB49D954AFB8EAA* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshaled_pinvoke
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Impulse_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RelativeVelocity_1;
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_2;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_ReusedContacts_5;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C_marshaled_com
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Impulse_0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_RelativeVelocity_1;
	Rigidbody_tE0A58EE5A1F7DC908EFFB4F0D795AC9552A750A5 * ___m_Rigidbody_2;
	Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_ReusedContacts_5;
	ContactPoint_tE0D3A30ED34A1FC8CA3F7391348429F3232CA515 * ___m_LegacyContacts_6;
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

// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.RaycastHit
struct  RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 
{
public:
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Point_0() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Point_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Point_0() const { return ___m_Point_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Point_0() { return &___m_Point_0; }
	inline void set_m_Point_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Point_0 = value;
	}

	inline static int32_t get_offset_of_m_Normal_1() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Normal_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Normal_1() const { return ___m_Normal_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Normal_1() { return &___m_Normal_1; }
	inline void set_m_Normal_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Normal_1 = value;
	}

	inline static int32_t get_offset_of_m_FaceID_2() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_FaceID_2)); }
	inline uint32_t get_m_FaceID_2() const { return ___m_FaceID_2; }
	inline uint32_t* get_address_of_m_FaceID_2() { return &___m_FaceID_2; }
	inline void set_m_FaceID_2(uint32_t value)
	{
		___m_FaceID_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_UV_4() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_UV_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_UV_4() const { return ___m_UV_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_UV_4() { return &___m_UV_4; }
	inline void set_m_UV_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_UV_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.SceneManagement.LoadSceneMode
struct  LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5 
{
public:
	// System.Int32 UnityEngine.SceneManagement.LoadSceneMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadSceneMode_t75F0B96794398942671B8315D2A9AC25C40A22D5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Space
struct  Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Space_t0F622BF939B7A47E0F9632CE968F7D72FC63AF58, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct  ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_NormalColor_0)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_HighlightedColor_1)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_PressedColor_2)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_SelectedColor_3)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_DisabledColor_4)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};


// UnityEngine.UI.Navigation_Mode
struct  Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26 
{
public:
	// System.Int32 UnityEngine.UI.Navigation_Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t93F92BD50B147AE38D82BA33FA77FD247A59FE26, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable_Transition
struct  Transition_tA9261C608B54C52324084A0B080E7A3E0548A181 
{
public:
	// System.Int32 UnityEngine.UI.Selectable_Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_tA9261C608B54C52324084A0B080E7A3E0548A181, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider_Direction
struct  Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E 
{
public:
	// System.Int32 UnityEngine.UI.Slider_Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tAAEBCB52D43F1B8F5DBB1A6F1025F9D02852B67E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Aura2API.AutoMoveAndRotate_Vector3andSpace
struct  Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 Aura2API.AutoMoveAndRotate_Vector3andSpace::value
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value_0;
	// UnityEngine.Space Aura2API.AutoMoveAndRotate_Vector3andSpace::space
	int32_t ___space_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D, ___value_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_value_0() const { return ___value_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_space_1() { return static_cast<int32_t>(offsetof(Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D, ___space_1)); }
	inline int32_t get_space_1() const { return ___space_1; }
	inline int32_t* get_address_of_space_1() { return &___space_1; }
	inline void set_space_1(int32_t value)
	{
		___space_1 = value;
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


// TMPro.TMP_LineInfo
struct  TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 
{
public:
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.TextAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___lineExtents_19;

public:
	inline static int32_t get_offset_of_controlCharacterCount_0() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___controlCharacterCount_0)); }
	inline int32_t get_controlCharacterCount_0() const { return ___controlCharacterCount_0; }
	inline int32_t* get_address_of_controlCharacterCount_0() { return &___controlCharacterCount_0; }
	inline void set_controlCharacterCount_0(int32_t value)
	{
		___controlCharacterCount_0 = value;
	}

	inline static int32_t get_offset_of_characterCount_1() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___characterCount_1)); }
	inline int32_t get_characterCount_1() const { return ___characterCount_1; }
	inline int32_t* get_address_of_characterCount_1() { return &___characterCount_1; }
	inline void set_characterCount_1(int32_t value)
	{
		___characterCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCharacterCount_2() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___visibleCharacterCount_2)); }
	inline int32_t get_visibleCharacterCount_2() const { return ___visibleCharacterCount_2; }
	inline int32_t* get_address_of_visibleCharacterCount_2() { return &___visibleCharacterCount_2; }
	inline void set_visibleCharacterCount_2(int32_t value)
	{
		___visibleCharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_spaceCount_3() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___spaceCount_3)); }
	inline int32_t get_spaceCount_3() const { return ___spaceCount_3; }
	inline int32_t* get_address_of_spaceCount_3() { return &___spaceCount_3; }
	inline void set_spaceCount_3(int32_t value)
	{
		___spaceCount_3 = value;
	}

	inline static int32_t get_offset_of_wordCount_4() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___wordCount_4)); }
	inline int32_t get_wordCount_4() const { return ___wordCount_4; }
	inline int32_t* get_address_of_wordCount_4() { return &___wordCount_4; }
	inline void set_wordCount_4(int32_t value)
	{
		___wordCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharacterIndex_8() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lastVisibleCharacterIndex_8)); }
	inline int32_t get_lastVisibleCharacterIndex_8() const { return ___lastVisibleCharacterIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharacterIndex_8() { return &___lastVisibleCharacterIndex_8; }
	inline void set_lastVisibleCharacterIndex_8(int32_t value)
	{
		___lastVisibleCharacterIndex_8 = value;
	}

	inline static int32_t get_offset_of_length_9() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___length_9)); }
	inline float get_length_9() const { return ___length_9; }
	inline float* get_address_of_length_9() { return &___length_9; }
	inline void set_length_9(float value)
	{
		___length_9 = value;
	}

	inline static int32_t get_offset_of_lineHeight_10() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineHeight_10)); }
	inline float get_lineHeight_10() const { return ___lineHeight_10; }
	inline float* get_address_of_lineHeight_10() { return &___lineHeight_10; }
	inline void set_lineHeight_10(float value)
	{
		___lineHeight_10 = value;
	}

	inline static int32_t get_offset_of_ascender_11() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___ascender_11)); }
	inline float get_ascender_11() const { return ___ascender_11; }
	inline float* get_address_of_ascender_11() { return &___ascender_11; }
	inline void set_ascender_11(float value)
	{
		___ascender_11 = value;
	}

	inline static int32_t get_offset_of_baseline_12() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___baseline_12)); }
	inline float get_baseline_12() const { return ___baseline_12; }
	inline float* get_address_of_baseline_12() { return &___baseline_12; }
	inline void set_baseline_12(float value)
	{
		___baseline_12 = value;
	}

	inline static int32_t get_offset_of_descender_13() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___descender_13)); }
	inline float get_descender_13() const { return ___descender_13; }
	inline float* get_address_of_descender_13() { return &___descender_13; }
	inline void set_descender_13(float value)
	{
		___descender_13 = value;
	}

	inline static int32_t get_offset_of_maxAdvance_14() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___maxAdvance_14)); }
	inline float get_maxAdvance_14() const { return ___maxAdvance_14; }
	inline float* get_address_of_maxAdvance_14() { return &___maxAdvance_14; }
	inline void set_maxAdvance_14(float value)
	{
		___maxAdvance_14 = value;
	}

	inline static int32_t get_offset_of_width_15() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___width_15)); }
	inline float get_width_15() const { return ___width_15; }
	inline float* get_address_of_width_15() { return &___width_15; }
	inline void set_width_15(float value)
	{
		___width_15 = value;
	}

	inline static int32_t get_offset_of_marginLeft_16() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginLeft_16)); }
	inline float get_marginLeft_16() const { return ___marginLeft_16; }
	inline float* get_address_of_marginLeft_16() { return &___marginLeft_16; }
	inline void set_marginLeft_16(float value)
	{
		___marginLeft_16 = value;
	}

	inline static int32_t get_offset_of_marginRight_17() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___marginRight_17)); }
	inline float get_marginRight_17() const { return ___marginRight_17; }
	inline float* get_address_of_marginRight_17() { return &___marginRight_17; }
	inline void set_marginRight_17(float value)
	{
		___marginRight_17 = value;
	}

	inline static int32_t get_offset_of_alignment_18() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___alignment_18)); }
	inline int32_t get_alignment_18() const { return ___alignment_18; }
	inline int32_t* get_address_of_alignment_18() { return &___alignment_18; }
	inline void set_alignment_18(int32_t value)
	{
		___alignment_18 = value;
	}

	inline static int32_t get_offset_of_lineExtents_19() { return static_cast<int32_t>(offsetof(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442, ___lineExtents_19)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_lineExtents_19() const { return ___lineExtents_19; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_lineExtents_19() { return &___lineExtents_19; }
	inline void set_lineExtents_19(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___lineExtents_19 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight>
struct  TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_ItemStack_0)); }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(FontWeightU5BU5D_t7A186E8DAEB072A355A6CCC80B3FFD219E538446* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions>
struct  TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 
{
public:
	// T[] TMPro.TMP_RichTextTagStack`1::m_ItemStack
	TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* ___m_ItemStack_0;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Index
	int32_t ___m_Index_1;
	// System.Int32 TMPro.TMP_RichTextTagStack`1::m_Capacity
	int32_t ___m_Capacity_2;
	// T TMPro.TMP_RichTextTagStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_3;

public:
	inline static int32_t get_offset_of_m_ItemStack_0() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_ItemStack_0)); }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* get_m_ItemStack_0() const { return ___m_ItemStack_0; }
	inline TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B** get_address_of_m_ItemStack_0() { return &___m_ItemStack_0; }
	inline void set_m_ItemStack_0(TextAlignmentOptionsU5BU5D_t4AE8FA5E3D695ED64EBBCFBAF8C780A0EB0BD33B* value)
	{
		___m_ItemStack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemStack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Index_1() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Index_1)); }
	inline int32_t get_m_Index_1() const { return ___m_Index_1; }
	inline int32_t* get_address_of_m_Index_1() { return &___m_Index_1; }
	inline void set_m_Index_1(int32_t value)
	{
		___m_Index_1 = value;
	}

	inline static int32_t get_offset_of_m_Capacity_2() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_Capacity_2)); }
	inline int32_t get_m_Capacity_2() const { return ___m_Capacity_2; }
	inline int32_t* get_address_of_m_Capacity_2() { return &___m_Capacity_2; }
	inline void set_m_Capacity_2(int32_t value)
	{
		___m_Capacity_2 = value;
	}

	inline static int32_t get_offset_of_m_DefaultItem_3() { return static_cast<int32_t>(offsetof(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115, ___m_DefaultItem_3)); }
	inline int32_t get_m_DefaultItem_3() const { return ___m_DefaultItem_3; }
	inline int32_t* get_address_of_m_DefaultItem_3() { return &___m_DefaultItem_3; }
	inline void set_m_DefaultItem_3(int32_t value)
	{
		___m_DefaultItem_3 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:
	// UnityEngine.AudioClip_PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip_PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9B87AB13DCD37957B045554BF28A57697E6B8EFB * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_t092ED33043C0279B5E4D343EBCBD516CEF260801 * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
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


// UnityEngine.UI.Navigation
struct  Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 
{
public:
	// UnityEngine.UI.Navigation_Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_1() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnUp_1)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnUp_1() const { return ___m_SelectOnUp_1; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnUp_1() { return &___m_SelectOnUp_1; }
	inline void set_m_SelectOnUp_1(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnUp_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_2() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnDown_2)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnDown_2() const { return ___m_SelectOnDown_2; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnDown_2() { return &___m_SelectOnDown_2; }
	inline void set_m_SelectOnDown_2(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnDown_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_3() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnLeft_3)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnLeft_3() const { return ___m_SelectOnLeft_3; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnLeft_3() { return &___m_SelectOnLeft_3; }
	inline void set_m_SelectOnLeft_3(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnLeft_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_4() { return static_cast<int32_t>(offsetof(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07, ___m_SelectOnRight_4)); }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * get_m_SelectOnRight_4() const { return ___m_SelectOnRight_4; }
	inline Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A ** get_address_of_m_SelectOnRight_4() { return &___m_SelectOnRight_4; }
	inline void set_m_SelectOnRight_4(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * value)
	{
		___m_SelectOnRight_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_4), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07_marshaled_com
{
	int32_t ___m_Mode_0;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnUp_1;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnDown_2;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnLeft_3;
	Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A * ___m_SelectOnRight_4;
};

// State_StateChanged
struct  StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6  : public MulticastDelegate_t
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


// TMPro.WordWrapState
struct  WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 
{
public:
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_14;
	// System.Single TMPro.WordWrapState::previousLineAscender
	float ___previousLineAscender_15;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_16;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_17;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_18;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_19;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_20;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_21;
	// System.Single TMPro.WordWrapState::fontScale
	float ___fontScale_22;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_23;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_24;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_25;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_26;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_47;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_51;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_53;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_54;

public:
	inline static int32_t get_offset_of_previous_WordBreak_0() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previous_WordBreak_0)); }
	inline int32_t get_previous_WordBreak_0() const { return ___previous_WordBreak_0; }
	inline int32_t* get_address_of_previous_WordBreak_0() { return &___previous_WordBreak_0; }
	inline void set_previous_WordBreak_0(int32_t value)
	{
		___previous_WordBreak_0 = value;
	}

	inline static int32_t get_offset_of_total_CharacterCount_1() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___total_CharacterCount_1)); }
	inline int32_t get_total_CharacterCount_1() const { return ___total_CharacterCount_1; }
	inline int32_t* get_address_of_total_CharacterCount_1() { return &___total_CharacterCount_1; }
	inline void set_total_CharacterCount_1(int32_t value)
	{
		___total_CharacterCount_1 = value;
	}

	inline static int32_t get_offset_of_visible_CharacterCount_2() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_CharacterCount_2)); }
	inline int32_t get_visible_CharacterCount_2() const { return ___visible_CharacterCount_2; }
	inline int32_t* get_address_of_visible_CharacterCount_2() { return &___visible_CharacterCount_2; }
	inline void set_visible_CharacterCount_2(int32_t value)
	{
		___visible_CharacterCount_2 = value;
	}

	inline static int32_t get_offset_of_visible_SpriteCount_3() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_SpriteCount_3)); }
	inline int32_t get_visible_SpriteCount_3() const { return ___visible_SpriteCount_3; }
	inline int32_t* get_address_of_visible_SpriteCount_3() { return &___visible_SpriteCount_3; }
	inline void set_visible_SpriteCount_3(int32_t value)
	{
		___visible_SpriteCount_3 = value;
	}

	inline static int32_t get_offset_of_visible_LinkCount_4() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___visible_LinkCount_4)); }
	inline int32_t get_visible_LinkCount_4() const { return ___visible_LinkCount_4; }
	inline int32_t* get_address_of_visible_LinkCount_4() { return &___visible_LinkCount_4; }
	inline void set_visible_LinkCount_4(int32_t value)
	{
		___visible_LinkCount_4 = value;
	}

	inline static int32_t get_offset_of_firstCharacterIndex_5() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstCharacterIndex_5)); }
	inline int32_t get_firstCharacterIndex_5() const { return ___firstCharacterIndex_5; }
	inline int32_t* get_address_of_firstCharacterIndex_5() { return &___firstCharacterIndex_5; }
	inline void set_firstCharacterIndex_5(int32_t value)
	{
		___firstCharacterIndex_5 = value;
	}

	inline static int32_t get_offset_of_firstVisibleCharacterIndex_6() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___firstVisibleCharacterIndex_6)); }
	inline int32_t get_firstVisibleCharacterIndex_6() const { return ___firstVisibleCharacterIndex_6; }
	inline int32_t* get_address_of_firstVisibleCharacterIndex_6() { return &___firstVisibleCharacterIndex_6; }
	inline void set_firstVisibleCharacterIndex_6(int32_t value)
	{
		___firstVisibleCharacterIndex_6 = value;
	}

	inline static int32_t get_offset_of_lastCharacterIndex_7() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastCharacterIndex_7)); }
	inline int32_t get_lastCharacterIndex_7() const { return ___lastCharacterIndex_7; }
	inline int32_t* get_address_of_lastCharacterIndex_7() { return &___lastCharacterIndex_7; }
	inline void set_lastCharacterIndex_7(int32_t value)
	{
		___lastCharacterIndex_7 = value;
	}

	inline static int32_t get_offset_of_lastVisibleCharIndex_8() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lastVisibleCharIndex_8)); }
	inline int32_t get_lastVisibleCharIndex_8() const { return ___lastVisibleCharIndex_8; }
	inline int32_t* get_address_of_lastVisibleCharIndex_8() { return &___lastVisibleCharIndex_8; }
	inline void set_lastVisibleCharIndex_8(int32_t value)
	{
		___lastVisibleCharIndex_8 = value;
	}

	inline static int32_t get_offset_of_lineNumber_9() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineNumber_9)); }
	inline int32_t get_lineNumber_9() const { return ___lineNumber_9; }
	inline int32_t* get_address_of_lineNumber_9() { return &___lineNumber_9; }
	inline void set_lineNumber_9(int32_t value)
	{
		___lineNumber_9 = value;
	}

	inline static int32_t get_offset_of_maxCapHeight_10() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxCapHeight_10)); }
	inline float get_maxCapHeight_10() const { return ___maxCapHeight_10; }
	inline float* get_address_of_maxCapHeight_10() { return &___maxCapHeight_10; }
	inline void set_maxCapHeight_10(float value)
	{
		___maxCapHeight_10 = value;
	}

	inline static int32_t get_offset_of_maxAscender_11() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxAscender_11)); }
	inline float get_maxAscender_11() const { return ___maxAscender_11; }
	inline float* get_address_of_maxAscender_11() { return &___maxAscender_11; }
	inline void set_maxAscender_11(float value)
	{
		___maxAscender_11 = value;
	}

	inline static int32_t get_offset_of_maxDescender_12() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxDescender_12)); }
	inline float get_maxDescender_12() const { return ___maxDescender_12; }
	inline float* get_address_of_maxDescender_12() { return &___maxDescender_12; }
	inline void set_maxDescender_12(float value)
	{
		___maxDescender_12 = value;
	}

	inline static int32_t get_offset_of_maxLineAscender_13() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineAscender_13)); }
	inline float get_maxLineAscender_13() const { return ___maxLineAscender_13; }
	inline float* get_address_of_maxLineAscender_13() { return &___maxLineAscender_13; }
	inline void set_maxLineAscender_13(float value)
	{
		___maxLineAscender_13 = value;
	}

	inline static int32_t get_offset_of_maxLineDescender_14() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___maxLineDescender_14)); }
	inline float get_maxLineDescender_14() const { return ___maxLineDescender_14; }
	inline float* get_address_of_maxLineDescender_14() { return &___maxLineDescender_14; }
	inline void set_maxLineDescender_14(float value)
	{
		___maxLineDescender_14 = value;
	}

	inline static int32_t get_offset_of_previousLineAscender_15() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineAscender_15)); }
	inline float get_previousLineAscender_15() const { return ___previousLineAscender_15; }
	inline float* get_address_of_previousLineAscender_15() { return &___previousLineAscender_15; }
	inline void set_previousLineAscender_15(float value)
	{
		___previousLineAscender_15 = value;
	}

	inline static int32_t get_offset_of_xAdvance_16() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___xAdvance_16)); }
	inline float get_xAdvance_16() const { return ___xAdvance_16; }
	inline float* get_address_of_xAdvance_16() { return &___xAdvance_16; }
	inline void set_xAdvance_16(float value)
	{
		___xAdvance_16 = value;
	}

	inline static int32_t get_offset_of_preferredWidth_17() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredWidth_17)); }
	inline float get_preferredWidth_17() const { return ___preferredWidth_17; }
	inline float* get_address_of_preferredWidth_17() { return &___preferredWidth_17; }
	inline void set_preferredWidth_17(float value)
	{
		___preferredWidth_17 = value;
	}

	inline static int32_t get_offset_of_preferredHeight_18() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___preferredHeight_18)); }
	inline float get_preferredHeight_18() const { return ___preferredHeight_18; }
	inline float* get_address_of_preferredHeight_18() { return &___preferredHeight_18; }
	inline void set_preferredHeight_18(float value)
	{
		___preferredHeight_18 = value;
	}

	inline static int32_t get_offset_of_previousLineScale_19() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___previousLineScale_19)); }
	inline float get_previousLineScale_19() const { return ___previousLineScale_19; }
	inline float* get_address_of_previousLineScale_19() { return &___previousLineScale_19; }
	inline void set_previousLineScale_19(float value)
	{
		___previousLineScale_19 = value;
	}

	inline static int32_t get_offset_of_wordCount_20() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___wordCount_20)); }
	inline int32_t get_wordCount_20() const { return ___wordCount_20; }
	inline int32_t* get_address_of_wordCount_20() { return &___wordCount_20; }
	inline void set_wordCount_20(int32_t value)
	{
		___wordCount_20 = value;
	}

	inline static int32_t get_offset_of_fontStyle_21() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontStyle_21)); }
	inline int32_t get_fontStyle_21() const { return ___fontStyle_21; }
	inline int32_t* get_address_of_fontStyle_21() { return &___fontStyle_21; }
	inline void set_fontStyle_21(int32_t value)
	{
		___fontStyle_21 = value;
	}

	inline static int32_t get_offset_of_fontScale_22() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScale_22)); }
	inline float get_fontScale_22() const { return ___fontScale_22; }
	inline float* get_address_of_fontScale_22() { return &___fontScale_22; }
	inline void set_fontScale_22(float value)
	{
		___fontScale_22 = value;
	}

	inline static int32_t get_offset_of_fontScaleMultiplier_23() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontScaleMultiplier_23)); }
	inline float get_fontScaleMultiplier_23() const { return ___fontScaleMultiplier_23; }
	inline float* get_address_of_fontScaleMultiplier_23() { return &___fontScaleMultiplier_23; }
	inline void set_fontScaleMultiplier_23(float value)
	{
		___fontScaleMultiplier_23 = value;
	}

	inline static int32_t get_offset_of_currentFontSize_24() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontSize_24)); }
	inline float get_currentFontSize_24() const { return ___currentFontSize_24; }
	inline float* get_address_of_currentFontSize_24() { return &___currentFontSize_24; }
	inline void set_currentFontSize_24(float value)
	{
		___currentFontSize_24 = value;
	}

	inline static int32_t get_offset_of_baselineOffset_25() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineOffset_25)); }
	inline float get_baselineOffset_25() const { return ___baselineOffset_25; }
	inline float* get_address_of_baselineOffset_25() { return &___baselineOffset_25; }
	inline void set_baselineOffset_25(float value)
	{
		___baselineOffset_25 = value;
	}

	inline static int32_t get_offset_of_lineOffset_26() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineOffset_26)); }
	inline float get_lineOffset_26() const { return ___lineOffset_26; }
	inline float* get_address_of_lineOffset_26() { return &___lineOffset_26; }
	inline void set_lineOffset_26(float value)
	{
		___lineOffset_26 = value;
	}

	inline static int32_t get_offset_of_textInfo_27() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___textInfo_27)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_textInfo_27() const { return ___textInfo_27; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_textInfo_27() { return &___textInfo_27; }
	inline void set_textInfo_27(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___textInfo_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___textInfo_27), (void*)value);
	}

	inline static int32_t get_offset_of_lineInfo_28() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineInfo_28)); }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  get_lineInfo_28() const { return ___lineInfo_28; }
	inline TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442 * get_address_of_lineInfo_28() { return &___lineInfo_28; }
	inline void set_lineInfo_28(TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  value)
	{
		___lineInfo_28 = value;
	}

	inline static int32_t get_offset_of_vertexColor_29() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___vertexColor_29)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_vertexColor_29() const { return ___vertexColor_29; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_vertexColor_29() { return &___vertexColor_29; }
	inline void set_vertexColor_29(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___vertexColor_29 = value;
	}

	inline static int32_t get_offset_of_underlineColor_30() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColor_30)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_underlineColor_30() const { return ___underlineColor_30; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_underlineColor_30() { return &___underlineColor_30; }
	inline void set_underlineColor_30(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___underlineColor_30 = value;
	}

	inline static int32_t get_offset_of_strikethroughColor_31() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColor_31)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_strikethroughColor_31() const { return ___strikethroughColor_31; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_strikethroughColor_31() { return &___strikethroughColor_31; }
	inline void set_strikethroughColor_31(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___strikethroughColor_31 = value;
	}

	inline static int32_t get_offset_of_highlightColor_32() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColor_32)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_highlightColor_32() const { return ___highlightColor_32; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_highlightColor_32() { return &___highlightColor_32; }
	inline void set_highlightColor_32(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___highlightColor_32 = value;
	}

	inline static int32_t get_offset_of_basicStyleStack_33() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___basicStyleStack_33)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_basicStyleStack_33() const { return ___basicStyleStack_33; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_basicStyleStack_33() { return &___basicStyleStack_33; }
	inline void set_basicStyleStack_33(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___basicStyleStack_33 = value;
	}

	inline static int32_t get_offset_of_colorStack_34() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorStack_34)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_colorStack_34() const { return ___colorStack_34; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_colorStack_34() { return &___colorStack_34; }
	inline void set_colorStack_34(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___colorStack_34 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorStack_34))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_underlineColorStack_35() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___underlineColorStack_35)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_underlineColorStack_35() const { return ___underlineColorStack_35; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_underlineColorStack_35() { return &___underlineColorStack_35; }
	inline void set_underlineColorStack_35(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___underlineColorStack_35 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_strikethroughColorStack_36() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___strikethroughColorStack_36)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_strikethroughColorStack_36() const { return ___strikethroughColorStack_36; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_strikethroughColorStack_36() { return &___strikethroughColorStack_36; }
	inline void set_strikethroughColorStack_36(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___strikethroughColorStack_36 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_highlightColorStack_37() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___highlightColorStack_37)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_highlightColorStack_37() const { return ___highlightColorStack_37; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_highlightColorStack_37() { return &___highlightColorStack_37; }
	inline void set_highlightColorStack_37(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___highlightColorStack_37 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_colorGradientStack_38() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___colorGradientStack_38)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_colorGradientStack_38() const { return ___colorGradientStack_38; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_colorGradientStack_38() { return &___colorGradientStack_38; }
	inline void set_colorGradientStack_38(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___colorGradientStack_38 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_sizeStack_39() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___sizeStack_39)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_sizeStack_39() const { return ___sizeStack_39; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_sizeStack_39() { return &___sizeStack_39; }
	inline void set_sizeStack_39(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___sizeStack_39 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indentStack_40() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___indentStack_40)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_indentStack_40() const { return ___indentStack_40; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_indentStack_40() { return &___indentStack_40; }
	inline void set_indentStack_40(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___indentStack_40 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indentStack_40))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_fontWeightStack_41() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___fontWeightStack_41)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_fontWeightStack_41() const { return ___fontWeightStack_41; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_fontWeightStack_41() { return &___fontWeightStack_41; }
	inline void set_fontWeightStack_41(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___fontWeightStack_41 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_styleStack_42() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___styleStack_42)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_styleStack_42() const { return ___styleStack_42; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_styleStack_42() { return &___styleStack_42; }
	inline void set_styleStack_42(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___styleStack_42 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___styleStack_42))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_baselineStack_43() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___baselineStack_43)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_baselineStack_43() const { return ___baselineStack_43; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_baselineStack_43() { return &___baselineStack_43; }
	inline void set_baselineStack_43(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___baselineStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_actionStack_44() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___actionStack_44)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_actionStack_44() const { return ___actionStack_44; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_actionStack_44() { return &___actionStack_44; }
	inline void set_actionStack_44(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___actionStack_44 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___actionStack_44))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_materialReferenceStack_45() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___materialReferenceStack_45)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_materialReferenceStack_45() const { return ___materialReferenceStack_45; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_materialReferenceStack_45() { return &___materialReferenceStack_45; }
	inline void set_materialReferenceStack_45(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___materialReferenceStack_45 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_lineJustificationStack_46() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___lineJustificationStack_46)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_lineJustificationStack_46() const { return ___lineJustificationStack_46; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_lineJustificationStack_46() { return &___lineJustificationStack_46; }
	inline void set_lineJustificationStack_46(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___lineJustificationStack_46 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_spriteAnimationID_47() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___spriteAnimationID_47)); }
	inline int32_t get_spriteAnimationID_47() const { return ___spriteAnimationID_47; }
	inline int32_t* get_address_of_spriteAnimationID_47() { return &___spriteAnimationID_47; }
	inline void set_spriteAnimationID_47(int32_t value)
	{
		___spriteAnimationID_47 = value;
	}

	inline static int32_t get_offset_of_currentFontAsset_48() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentFontAsset_48)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_currentFontAsset_48() const { return ___currentFontAsset_48; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_currentFontAsset_48() { return &___currentFontAsset_48; }
	inline void set_currentFontAsset_48(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___currentFontAsset_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentFontAsset_48), (void*)value);
	}

	inline static int32_t get_offset_of_currentSpriteAsset_49() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentSpriteAsset_49)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_currentSpriteAsset_49() const { return ___currentSpriteAsset_49; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_currentSpriteAsset_49() { return &___currentSpriteAsset_49; }
	inline void set_currentSpriteAsset_49(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___currentSpriteAsset_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentSpriteAsset_49), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterial_50() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterial_50)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_currentMaterial_50() const { return ___currentMaterial_50; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_currentMaterial_50() { return &___currentMaterial_50; }
	inline void set_currentMaterial_50(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___currentMaterial_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMaterial_50), (void*)value);
	}

	inline static int32_t get_offset_of_currentMaterialIndex_51() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___currentMaterialIndex_51)); }
	inline int32_t get_currentMaterialIndex_51() const { return ___currentMaterialIndex_51; }
	inline int32_t* get_address_of_currentMaterialIndex_51() { return &___currentMaterialIndex_51; }
	inline void set_currentMaterialIndex_51(int32_t value)
	{
		___currentMaterialIndex_51 = value;
	}

	inline static int32_t get_offset_of_meshExtents_52() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___meshExtents_52)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_meshExtents_52() const { return ___meshExtents_52; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_meshExtents_52() { return &___meshExtents_52; }
	inline void set_meshExtents_52(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___meshExtents_52 = value;
	}

	inline static int32_t get_offset_of_tagNoParsing_53() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___tagNoParsing_53)); }
	inline bool get_tagNoParsing_53() const { return ___tagNoParsing_53; }
	inline bool* get_address_of_tagNoParsing_53() { return &___tagNoParsing_53; }
	inline void set_tagNoParsing_53(bool value)
	{
		___tagNoParsing_53 = value;
	}

	inline static int32_t get_offset_of_isNonBreakingSpace_54() { return static_cast<int32_t>(offsetof(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557, ___isNonBreakingSpace_54)); }
	inline bool get_isNonBreakingSpace_54() const { return ___isNonBreakingSpace_54; }
	inline bool* get_address_of_isNonBreakingSpace_54() { return &___isNonBreakingSpace_54; }
	inline void set_isNonBreakingSpace_54(bool value)
	{
		___isNonBreakingSpace_54 = value;
	}
};

// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___maxLineAscender_13;
	float ___maxLineDescender_14;
	float ___previousLineAscender_15;
	float ___xAdvance_16;
	float ___preferredWidth_17;
	float ___preferredHeight_18;
	float ___previousLineScale_19;
	int32_t ___wordCount_20;
	int32_t ___fontStyle_21;
	float ___fontScale_22;
	float ___fontScaleMultiplier_23;
	float ___currentFontSize_24;
	float ___baselineOffset_25;
	float ___lineOffset_26;
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___textInfo_27;
	TMP_LineInfo_tE89A82D872E55C3DDF29C4C8D862358633D0B442  ___lineInfo_28;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___vertexColor_29;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___underlineColor_30;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___strikethroughColor_31;
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___highlightColor_32;
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___basicStyleStack_33;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___colorStack_34;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___underlineColorStack_35;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___strikethroughColorStack_36;
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___highlightColorStack_37;
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___colorGradientStack_38;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___sizeStack_39;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___indentStack_40;
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___fontWeightStack_41;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___styleStack_42;
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___baselineStack_43;
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___actionStack_44;
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___materialReferenceStack_45;
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___lineJustificationStack_46;
	int32_t ___spriteAnimationID_47;
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___currentFontAsset_48;
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___currentSpriteAsset_49;
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___currentMaterial_50;
	int32_t ___currentMaterialIndex_51;
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___meshExtents_52;
	int32_t ___tagNoParsing_53;
	int32_t ___isNonBreakingSpace_54;
};

// UnityEngine.Behaviour
struct  Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.ParticleSystem
struct  ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
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


// UnityEngine.AI.NavMeshAgent
struct  NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};

struct Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields
{
public:
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreCull_4;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPreRender_5;
	// UnityEngine.Camera_CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_t8BBB42AA08D7498DFC11F4128117055BC7F0B9D0 * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Light
struct  Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;

public:
	inline static int32_t get_offset_of_m_BakedIndex_4() { return static_cast<int32_t>(offsetof(Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C, ___m_BakedIndex_4)); }
	inline int32_t get_m_BakedIndex_4() const { return ___m_BakedIndex_4; }
	inline int32_t* get_address_of_m_BakedIndex_4() { return &___m_BakedIndex_4; }
	inline void set_m_BakedIndex_4(int32_t value)
	{
		___m_BakedIndex_4 = value;
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429  : public Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8
{
public:

public:
};


// Aura2API.AuraFreeCamera
struct  AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Boolean Aura2API.AuraFreeCamera::freeLookEnabled
	bool ___freeLookEnabled_4;
	// System.Boolean Aura2API.AuraFreeCamera::showCursor
	bool ___showCursor_5;
	// System.Single Aura2API.AuraFreeCamera::lookSpeed
	float ___lookSpeed_6;
	// System.Single Aura2API.AuraFreeCamera::moveSpeed
	float ___moveSpeed_7;
	// System.Single Aura2API.AuraFreeCamera::sprintSpeed
	float ___sprintSpeed_8;
	// System.Single Aura2API.AuraFreeCamera::m_yaw
	float ___m_yaw_9;
	// System.Single Aura2API.AuraFreeCamera::m_pitch
	float ___m_pitch_10;

public:
	inline static int32_t get_offset_of_freeLookEnabled_4() { return static_cast<int32_t>(offsetof(AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC, ___freeLookEnabled_4)); }
	inline bool get_freeLookEnabled_4() const { return ___freeLookEnabled_4; }
	inline bool* get_address_of_freeLookEnabled_4() { return &___freeLookEnabled_4; }
	inline void set_freeLookEnabled_4(bool value)
	{
		___freeLookEnabled_4 = value;
	}

	inline static int32_t get_offset_of_showCursor_5() { return static_cast<int32_t>(offsetof(AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC, ___showCursor_5)); }
	inline bool get_showCursor_5() const { return ___showCursor_5; }
	inline bool* get_address_of_showCursor_5() { return &___showCursor_5; }
	inline void set_showCursor_5(bool value)
	{
		___showCursor_5 = value;
	}

	inline static int32_t get_offset_of_lookSpeed_6() { return static_cast<int32_t>(offsetof(AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC, ___lookSpeed_6)); }
	inline float get_lookSpeed_6() const { return ___lookSpeed_6; }
	inline float* get_address_of_lookSpeed_6() { return &___lookSpeed_6; }
	inline void set_lookSpeed_6(float value)
	{
		___lookSpeed_6 = value;
	}

	inline static int32_t get_offset_of_moveSpeed_7() { return static_cast<int32_t>(offsetof(AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC, ___moveSpeed_7)); }
	inline float get_moveSpeed_7() const { return ___moveSpeed_7; }
	inline float* get_address_of_moveSpeed_7() { return &___moveSpeed_7; }
	inline void set_moveSpeed_7(float value)
	{
		___moveSpeed_7 = value;
	}

	inline static int32_t get_offset_of_sprintSpeed_8() { return static_cast<int32_t>(offsetof(AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC, ___sprintSpeed_8)); }
	inline float get_sprintSpeed_8() const { return ___sprintSpeed_8; }
	inline float* get_address_of_sprintSpeed_8() { return &___sprintSpeed_8; }
	inline void set_sprintSpeed_8(float value)
	{
		___sprintSpeed_8 = value;
	}

	inline static int32_t get_offset_of_m_yaw_9() { return static_cast<int32_t>(offsetof(AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC, ___m_yaw_9)); }
	inline float get_m_yaw_9() const { return ___m_yaw_9; }
	inline float* get_address_of_m_yaw_9() { return &___m_yaw_9; }
	inline void set_m_yaw_9(float value)
	{
		___m_yaw_9 = value;
	}

	inline static int32_t get_offset_of_m_pitch_10() { return static_cast<int32_t>(offsetof(AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC, ___m_pitch_10)); }
	inline float get_m_pitch_10() const { return ___m_pitch_10; }
	inline float* get_address_of_m_pitch_10() { return &___m_pitch_10; }
	inline void set_m_pitch_10(float value)
	{
		___m_pitch_10 = value;
	}
};


// Aura2API.AutoMoveAndRotate
struct  AutoMoveAndRotate_tCFBA53289008A1AC602A2DA108126401EB3C9131  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Aura2API.AutoMoveAndRotate_Vector3andSpace Aura2API.AutoMoveAndRotate::moveUnitsPerSecond
	Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * ___moveUnitsPerSecond_4;
	// Aura2API.AutoMoveAndRotate_Vector3andSpace Aura2API.AutoMoveAndRotate::rotateDegreesPerSecond
	Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * ___rotateDegreesPerSecond_5;
	// System.Boolean Aura2API.AutoMoveAndRotate::ignoreTimescale
	bool ___ignoreTimescale_6;
	// System.Single Aura2API.AutoMoveAndRotate::m_LastRealTime
	float ___m_LastRealTime_7;

public:
	inline static int32_t get_offset_of_moveUnitsPerSecond_4() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_tCFBA53289008A1AC602A2DA108126401EB3C9131, ___moveUnitsPerSecond_4)); }
	inline Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * get_moveUnitsPerSecond_4() const { return ___moveUnitsPerSecond_4; }
	inline Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D ** get_address_of_moveUnitsPerSecond_4() { return &___moveUnitsPerSecond_4; }
	inline void set_moveUnitsPerSecond_4(Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * value)
	{
		___moveUnitsPerSecond_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moveUnitsPerSecond_4), (void*)value);
	}

	inline static int32_t get_offset_of_rotateDegreesPerSecond_5() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_tCFBA53289008A1AC602A2DA108126401EB3C9131, ___rotateDegreesPerSecond_5)); }
	inline Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * get_rotateDegreesPerSecond_5() const { return ___rotateDegreesPerSecond_5; }
	inline Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D ** get_address_of_rotateDegreesPerSecond_5() { return &___rotateDegreesPerSecond_5; }
	inline void set_rotateDegreesPerSecond_5(Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * value)
	{
		___rotateDegreesPerSecond_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rotateDegreesPerSecond_5), (void*)value);
	}

	inline static int32_t get_offset_of_ignoreTimescale_6() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_tCFBA53289008A1AC602A2DA108126401EB3C9131, ___ignoreTimescale_6)); }
	inline bool get_ignoreTimescale_6() const { return ___ignoreTimescale_6; }
	inline bool* get_address_of_ignoreTimescale_6() { return &___ignoreTimescale_6; }
	inline void set_ignoreTimescale_6(bool value)
	{
		___ignoreTimescale_6 = value;
	}

	inline static int32_t get_offset_of_m_LastRealTime_7() { return static_cast<int32_t>(offsetof(AutoMoveAndRotate_tCFBA53289008A1AC602A2DA108126401EB3C9131, ___m_LastRealTime_7)); }
	inline float get_m_LastRealTime_7() const { return ___m_LastRealTime_7; }
	inline float* get_address_of_m_LastRealTime_7() { return &___m_LastRealTime_7; }
	inline void set_m_LastRealTime_7(float value)
	{
		___m_LastRealTime_7 = value;
	}
};


// Aura2API.DebugFps
struct  DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Aura2API.DebugFps::interval
	float ___interval_4;
	// System.Single Aura2API.DebugFps::_accumulationValue
	float ____accumulationValue_5;
	// System.Int32 Aura2API.DebugFps::_framesCount
	int32_t ____framesCount_6;
	// System.Single Aura2API.DebugFps::_timestamp
	float ____timestamp_7;
	// System.Single Aura2API.DebugFps::_rawFps
	float ____rawFps_8;
	// System.Single Aura2API.DebugFps::_meanFps
	float ____meanFps_9;

public:
	inline static int32_t get_offset_of_interval_4() { return static_cast<int32_t>(offsetof(DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3, ___interval_4)); }
	inline float get_interval_4() const { return ___interval_4; }
	inline float* get_address_of_interval_4() { return &___interval_4; }
	inline void set_interval_4(float value)
	{
		___interval_4 = value;
	}

	inline static int32_t get_offset_of__accumulationValue_5() { return static_cast<int32_t>(offsetof(DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3, ____accumulationValue_5)); }
	inline float get__accumulationValue_5() const { return ____accumulationValue_5; }
	inline float* get_address_of__accumulationValue_5() { return &____accumulationValue_5; }
	inline void set__accumulationValue_5(float value)
	{
		____accumulationValue_5 = value;
	}

	inline static int32_t get_offset_of__framesCount_6() { return static_cast<int32_t>(offsetof(DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3, ____framesCount_6)); }
	inline int32_t get__framesCount_6() const { return ____framesCount_6; }
	inline int32_t* get_address_of__framesCount_6() { return &____framesCount_6; }
	inline void set__framesCount_6(int32_t value)
	{
		____framesCount_6 = value;
	}

	inline static int32_t get_offset_of__timestamp_7() { return static_cast<int32_t>(offsetof(DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3, ____timestamp_7)); }
	inline float get__timestamp_7() const { return ____timestamp_7; }
	inline float* get_address_of__timestamp_7() { return &____timestamp_7; }
	inline void set__timestamp_7(float value)
	{
		____timestamp_7 = value;
	}

	inline static int32_t get_offset_of__rawFps_8() { return static_cast<int32_t>(offsetof(DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3, ____rawFps_8)); }
	inline float get__rawFps_8() const { return ____rawFps_8; }
	inline float* get_address_of__rawFps_8() { return &____rawFps_8; }
	inline void set__rawFps_8(float value)
	{
		____rawFps_8 = value;
	}

	inline static int32_t get_offset_of__meanFps_9() { return static_cast<int32_t>(offsetof(DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3, ____meanFps_9)); }
	inline float get__meanFps_9() const { return ____meanFps_9; }
	inline float* get_address_of__meanFps_9() { return &____meanFps_9; }
	inline void set__meanFps_9(float value)
	{
		____meanFps_9 = value;
	}
};


// Aura2API.LightFlicker
struct  LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Aura2API.LightFlicker::maxFactor
	float ___maxFactor_4;
	// System.Single Aura2API.LightFlicker::minFactor
	float ___minFactor_5;
	// System.Single Aura2API.LightFlicker::moveRange
	float ___moveRange_6;
	// System.Single Aura2API.LightFlicker::speed
	float ___speed_7;
	// System.Single Aura2API.LightFlicker::_currentFactor
	float ____currentFactor_8;
	// UnityEngine.Vector3 Aura2API.LightFlicker::_currentPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____currentPos_9;
	// System.Single Aura2API.LightFlicker::_deltaTime
	float ____deltaTime_10;
	// UnityEngine.Vector3 Aura2API.LightFlicker::_initPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____initPos_11;
	// System.Single Aura2API.LightFlicker::_targetFactor
	float ____targetFactor_12;
	// UnityEngine.Vector3 Aura2API.LightFlicker::_targetPos
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____targetPos_13;
	// System.Single Aura2API.LightFlicker::_initialFactor
	float ____initialFactor_14;
	// System.Single Aura2API.LightFlicker::_time
	float ____time_15;
	// System.Single Aura2API.LightFlicker::_timeLeft
	float ____timeLeft_16;

public:
	inline static int32_t get_offset_of_maxFactor_4() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ___maxFactor_4)); }
	inline float get_maxFactor_4() const { return ___maxFactor_4; }
	inline float* get_address_of_maxFactor_4() { return &___maxFactor_4; }
	inline void set_maxFactor_4(float value)
	{
		___maxFactor_4 = value;
	}

	inline static int32_t get_offset_of_minFactor_5() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ___minFactor_5)); }
	inline float get_minFactor_5() const { return ___minFactor_5; }
	inline float* get_address_of_minFactor_5() { return &___minFactor_5; }
	inline void set_minFactor_5(float value)
	{
		___minFactor_5 = value;
	}

	inline static int32_t get_offset_of_moveRange_6() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ___moveRange_6)); }
	inline float get_moveRange_6() const { return ___moveRange_6; }
	inline float* get_address_of_moveRange_6() { return &___moveRange_6; }
	inline void set_moveRange_6(float value)
	{
		___moveRange_6 = value;
	}

	inline static int32_t get_offset_of_speed_7() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ___speed_7)); }
	inline float get_speed_7() const { return ___speed_7; }
	inline float* get_address_of_speed_7() { return &___speed_7; }
	inline void set_speed_7(float value)
	{
		___speed_7 = value;
	}

	inline static int32_t get_offset_of__currentFactor_8() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ____currentFactor_8)); }
	inline float get__currentFactor_8() const { return ____currentFactor_8; }
	inline float* get_address_of__currentFactor_8() { return &____currentFactor_8; }
	inline void set__currentFactor_8(float value)
	{
		____currentFactor_8 = value;
	}

	inline static int32_t get_offset_of__currentPos_9() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ____currentPos_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__currentPos_9() const { return ____currentPos_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__currentPos_9() { return &____currentPos_9; }
	inline void set__currentPos_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____currentPos_9 = value;
	}

	inline static int32_t get_offset_of__deltaTime_10() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ____deltaTime_10)); }
	inline float get__deltaTime_10() const { return ____deltaTime_10; }
	inline float* get_address_of__deltaTime_10() { return &____deltaTime_10; }
	inline void set__deltaTime_10(float value)
	{
		____deltaTime_10 = value;
	}

	inline static int32_t get_offset_of__initPos_11() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ____initPos_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__initPos_11() const { return ____initPos_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__initPos_11() { return &____initPos_11; }
	inline void set__initPos_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____initPos_11 = value;
	}

	inline static int32_t get_offset_of__targetFactor_12() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ____targetFactor_12)); }
	inline float get__targetFactor_12() const { return ____targetFactor_12; }
	inline float* get_address_of__targetFactor_12() { return &____targetFactor_12; }
	inline void set__targetFactor_12(float value)
	{
		____targetFactor_12 = value;
	}

	inline static int32_t get_offset_of__targetPos_13() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ____targetPos_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__targetPos_13() const { return ____targetPos_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__targetPos_13() { return &____targetPos_13; }
	inline void set__targetPos_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____targetPos_13 = value;
	}

	inline static int32_t get_offset_of__initialFactor_14() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ____initialFactor_14)); }
	inline float get__initialFactor_14() const { return ____initialFactor_14; }
	inline float* get_address_of__initialFactor_14() { return &____initialFactor_14; }
	inline void set__initialFactor_14(float value)
	{
		____initialFactor_14 = value;
	}

	inline static int32_t get_offset_of__time_15() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ____time_15)); }
	inline float get__time_15() const { return ____time_15; }
	inline float* get_address_of__time_15() { return &____time_15; }
	inline void set__time_15(float value)
	{
		____time_15 = value;
	}

	inline static int32_t get_offset_of__timeLeft_16() { return static_cast<int32_t>(offsetof(LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571, ____timeLeft_16)); }
	inline float get__timeLeft_16() const { return ____timeLeft_16; }
	inline float* get_address_of__timeLeft_16() { return &____timeLeft_16; }
	inline void set__timeLeft_16(float value)
	{
		____timeLeft_16 = value;
	}
};


// Aura2API.MoveSinCos
struct  MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Vector3 Aura2API.MoveSinCos::_initialPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ____initialPosition_4;
	// System.Single Aura2API.MoveSinCos::cosAmplitude
	float ___cosAmplitude_5;
	// UnityEngine.Vector3 Aura2API.MoveSinCos::cosDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cosDirection_6;
	// System.Single Aura2API.MoveSinCos::cosOffset
	float ___cosOffset_7;
	// System.Single Aura2API.MoveSinCos::cosSpeed
	float ___cosSpeed_8;
	// System.Single Aura2API.MoveSinCos::sinAmplitude
	float ___sinAmplitude_9;
	// UnityEngine.Vector3 Aura2API.MoveSinCos::sinDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___sinDirection_10;
	// System.Single Aura2API.MoveSinCos::sinOffset
	float ___sinOffset_11;
	// System.Single Aura2API.MoveSinCos::sinSpeed
	float ___sinSpeed_12;
	// UnityEngine.Space Aura2API.MoveSinCos::space
	int32_t ___space_13;

public:
	inline static int32_t get_offset_of__initialPosition_4() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ____initialPosition_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get__initialPosition_4() const { return ____initialPosition_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of__initialPosition_4() { return &____initialPosition_4; }
	inline void set__initialPosition_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		____initialPosition_4 = value;
	}

	inline static int32_t get_offset_of_cosAmplitude_5() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ___cosAmplitude_5)); }
	inline float get_cosAmplitude_5() const { return ___cosAmplitude_5; }
	inline float* get_address_of_cosAmplitude_5() { return &___cosAmplitude_5; }
	inline void set_cosAmplitude_5(float value)
	{
		___cosAmplitude_5 = value;
	}

	inline static int32_t get_offset_of_cosDirection_6() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ___cosDirection_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_cosDirection_6() const { return ___cosDirection_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_cosDirection_6() { return &___cosDirection_6; }
	inline void set_cosDirection_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___cosDirection_6 = value;
	}

	inline static int32_t get_offset_of_cosOffset_7() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ___cosOffset_7)); }
	inline float get_cosOffset_7() const { return ___cosOffset_7; }
	inline float* get_address_of_cosOffset_7() { return &___cosOffset_7; }
	inline void set_cosOffset_7(float value)
	{
		___cosOffset_7 = value;
	}

	inline static int32_t get_offset_of_cosSpeed_8() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ___cosSpeed_8)); }
	inline float get_cosSpeed_8() const { return ___cosSpeed_8; }
	inline float* get_address_of_cosSpeed_8() { return &___cosSpeed_8; }
	inline void set_cosSpeed_8(float value)
	{
		___cosSpeed_8 = value;
	}

	inline static int32_t get_offset_of_sinAmplitude_9() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ___sinAmplitude_9)); }
	inline float get_sinAmplitude_9() const { return ___sinAmplitude_9; }
	inline float* get_address_of_sinAmplitude_9() { return &___sinAmplitude_9; }
	inline void set_sinAmplitude_9(float value)
	{
		___sinAmplitude_9 = value;
	}

	inline static int32_t get_offset_of_sinDirection_10() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ___sinDirection_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_sinDirection_10() const { return ___sinDirection_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_sinDirection_10() { return &___sinDirection_10; }
	inline void set_sinDirection_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___sinDirection_10 = value;
	}

	inline static int32_t get_offset_of_sinOffset_11() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ___sinOffset_11)); }
	inline float get_sinOffset_11() const { return ___sinOffset_11; }
	inline float* get_address_of_sinOffset_11() { return &___sinOffset_11; }
	inline void set_sinOffset_11(float value)
	{
		___sinOffset_11 = value;
	}

	inline static int32_t get_offset_of_sinSpeed_12() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ___sinSpeed_12)); }
	inline float get_sinSpeed_12() const { return ___sinSpeed_12; }
	inline float* get_address_of_sinSpeed_12() { return &___sinSpeed_12; }
	inline void set_sinSpeed_12(float value)
	{
		___sinSpeed_12 = value;
	}

	inline static int32_t get_offset_of_space_13() { return static_cast<int32_t>(offsetof(MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51, ___space_13)); }
	inline int32_t get_space_13() const { return ___space_13; }
	inline int32_t* get_address_of_space_13() { return &___space_13; }
	inline void set_space_13(int32_t value)
	{
		___space_13 = value;
	}
};


// Aura2API.SinRotationOffset
struct  SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.Quaternion Aura2API.SinRotationOffset::_initialRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ____initialRotation_4;
	// System.Single Aura2API.SinRotationOffset::sinAmplitude
	float ___sinAmplitude_5;
	// UnityEngine.Vector3 Aura2API.SinRotationOffset::sinDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___sinDirection_6;
	// System.Single Aura2API.SinRotationOffset::sinOffset
	float ___sinOffset_7;
	// System.Single Aura2API.SinRotationOffset::sinSpeed
	float ___sinSpeed_8;
	// UnityEngine.Space Aura2API.SinRotationOffset::space
	int32_t ___space_9;

public:
	inline static int32_t get_offset_of__initialRotation_4() { return static_cast<int32_t>(offsetof(SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382, ____initialRotation_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get__initialRotation_4() const { return ____initialRotation_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of__initialRotation_4() { return &____initialRotation_4; }
	inline void set__initialRotation_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		____initialRotation_4 = value;
	}

	inline static int32_t get_offset_of_sinAmplitude_5() { return static_cast<int32_t>(offsetof(SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382, ___sinAmplitude_5)); }
	inline float get_sinAmplitude_5() const { return ___sinAmplitude_5; }
	inline float* get_address_of_sinAmplitude_5() { return &___sinAmplitude_5; }
	inline void set_sinAmplitude_5(float value)
	{
		___sinAmplitude_5 = value;
	}

	inline static int32_t get_offset_of_sinDirection_6() { return static_cast<int32_t>(offsetof(SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382, ___sinDirection_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_sinDirection_6() const { return ___sinDirection_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_sinDirection_6() { return &___sinDirection_6; }
	inline void set_sinDirection_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___sinDirection_6 = value;
	}

	inline static int32_t get_offset_of_sinOffset_7() { return static_cast<int32_t>(offsetof(SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382, ___sinOffset_7)); }
	inline float get_sinOffset_7() const { return ___sinOffset_7; }
	inline float* get_address_of_sinOffset_7() { return &___sinOffset_7; }
	inline void set_sinOffset_7(float value)
	{
		___sinOffset_7 = value;
	}

	inline static int32_t get_offset_of_sinSpeed_8() { return static_cast<int32_t>(offsetof(SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382, ___sinSpeed_8)); }
	inline float get_sinSpeed_8() const { return ___sinSpeed_8; }
	inline float* get_address_of_sinSpeed_8() { return &___sinSpeed_8; }
	inline void set_sinSpeed_8(float value)
	{
		___sinSpeed_8 = value;
	}

	inline static int32_t get_offset_of_space_9() { return static_cast<int32_t>(offsetof(SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382, ___space_9)); }
	inline int32_t get_space_9() const { return ___space_9; }
	inline int32_t* get_address_of_space_9() { return &___space_9; }
	inline void set_space_9(int32_t value)
	{
		___space_9 = value;
	}
};


// Damageable
struct  Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Damageable::health
	int32_t ___health_4;

public:
	inline static int32_t get_offset_of_health_4() { return static_cast<int32_t>(offsetof(Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474, ___health_4)); }
	inline int32_t get_health_4() const { return ___health_4; }
	inline int32_t* get_address_of_health_4() { return &___health_4; }
	inline void set_health_4(int32_t value)
	{
		___health_4 = value;
	}
};


// EnemyNavigation
struct  EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.AI.NavMeshAgent EnemyNavigation::agent
	NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * ___agent_4;
	// UnityEngine.Transform EnemyNavigation::playerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerTransform_5;
	// State EnemyNavigation::stateReference
	State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * ___stateReference_6;

public:
	inline static int32_t get_offset_of_agent_4() { return static_cast<int32_t>(offsetof(EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F, ___agent_4)); }
	inline NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * get_agent_4() const { return ___agent_4; }
	inline NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB ** get_address_of_agent_4() { return &___agent_4; }
	inline void set_agent_4(NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * value)
	{
		___agent_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_4), (void*)value);
	}

	inline static int32_t get_offset_of_playerTransform_5() { return static_cast<int32_t>(offsetof(EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F, ___playerTransform_5)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerTransform_5() const { return ___playerTransform_5; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerTransform_5() { return &___playerTransform_5; }
	inline void set_playerTransform_5(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerTransform_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_5), (void*)value);
	}

	inline static int32_t get_offset_of_stateReference_6() { return static_cast<int32_t>(offsetof(EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F, ___stateReference_6)); }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * get_stateReference_6() const { return ___stateReference_6; }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 ** get_address_of_stateReference_6() { return &___stateReference_6; }
	inline void set_stateReference_6(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * value)
	{
		___stateReference_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateReference_6), (void*)value);
	}
};


// GameManager
struct  GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 GameManager::wave
	int32_t ___wave_4;
	// System.Int32 GameManager::enemiesLeftThisWave
	int32_t ___enemiesLeftThisWave_5;
	// System.Int32 GameManager::totalEnemiesThisWave
	int32_t ___totalEnemiesThisWave_6;
	// System.Boolean GameManager::winButton
	bool ___winButton_7;
	// System.Boolean GameManager::loseButton
	bool ___loseButton_8;
	// PoolManager GameManager::pm
	PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * ___pm_9;
	// System.Collections.Generic.List`1<Spawner> GameManager::spawners
	List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A * ___spawners_10;
	// UnityEngine.GameObject GameManager::enemyPrefab
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___enemyPrefab_11;
	// System.Int32 GameManager::enemiesAlive
	int32_t ___enemiesAlive_12;
	// System.Int32 GameManager::maxEnemiesAtOnce
	int32_t ___maxEnemiesAtOnce_13;
	// System.Single GameManager::timeBetweenSpawns
	float ___timeBetweenSpawns_14;
	// System.Single GameManager::timeUntilNewSpawn
	float ___timeUntilNewSpawn_15;
	// System.Single GameManager::timeUntilNewWave
	float ___timeUntilNewWave_16;
	// Player GameManager::player
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * ___player_17;
	// State GameManager::stateReference
	State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * ___stateReference_19;
	// UIManager GameManager::uiManagerInstance
	UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * ___uiManagerInstance_20;
	// State_GameState GameManager::lastGameState
	int32_t ___lastGameState_21;

public:
	inline static int32_t get_offset_of_wave_4() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___wave_4)); }
	inline int32_t get_wave_4() const { return ___wave_4; }
	inline int32_t* get_address_of_wave_4() { return &___wave_4; }
	inline void set_wave_4(int32_t value)
	{
		___wave_4 = value;
	}

	inline static int32_t get_offset_of_enemiesLeftThisWave_5() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___enemiesLeftThisWave_5)); }
	inline int32_t get_enemiesLeftThisWave_5() const { return ___enemiesLeftThisWave_5; }
	inline int32_t* get_address_of_enemiesLeftThisWave_5() { return &___enemiesLeftThisWave_5; }
	inline void set_enemiesLeftThisWave_5(int32_t value)
	{
		___enemiesLeftThisWave_5 = value;
	}

	inline static int32_t get_offset_of_totalEnemiesThisWave_6() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___totalEnemiesThisWave_6)); }
	inline int32_t get_totalEnemiesThisWave_6() const { return ___totalEnemiesThisWave_6; }
	inline int32_t* get_address_of_totalEnemiesThisWave_6() { return &___totalEnemiesThisWave_6; }
	inline void set_totalEnemiesThisWave_6(int32_t value)
	{
		___totalEnemiesThisWave_6 = value;
	}

	inline static int32_t get_offset_of_winButton_7() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___winButton_7)); }
	inline bool get_winButton_7() const { return ___winButton_7; }
	inline bool* get_address_of_winButton_7() { return &___winButton_7; }
	inline void set_winButton_7(bool value)
	{
		___winButton_7 = value;
	}

	inline static int32_t get_offset_of_loseButton_8() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___loseButton_8)); }
	inline bool get_loseButton_8() const { return ___loseButton_8; }
	inline bool* get_address_of_loseButton_8() { return &___loseButton_8; }
	inline void set_loseButton_8(bool value)
	{
		___loseButton_8 = value;
	}

	inline static int32_t get_offset_of_pm_9() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___pm_9)); }
	inline PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * get_pm_9() const { return ___pm_9; }
	inline PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 ** get_address_of_pm_9() { return &___pm_9; }
	inline void set_pm_9(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * value)
	{
		___pm_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pm_9), (void*)value);
	}

	inline static int32_t get_offset_of_spawners_10() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___spawners_10)); }
	inline List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A * get_spawners_10() const { return ___spawners_10; }
	inline List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A ** get_address_of_spawners_10() { return &___spawners_10; }
	inline void set_spawners_10(List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A * value)
	{
		___spawners_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___spawners_10), (void*)value);
	}

	inline static int32_t get_offset_of_enemyPrefab_11() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___enemyPrefab_11)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_enemyPrefab_11() const { return ___enemyPrefab_11; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_enemyPrefab_11() { return &___enemyPrefab_11; }
	inline void set_enemyPrefab_11(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___enemyPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_enemiesAlive_12() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___enemiesAlive_12)); }
	inline int32_t get_enemiesAlive_12() const { return ___enemiesAlive_12; }
	inline int32_t* get_address_of_enemiesAlive_12() { return &___enemiesAlive_12; }
	inline void set_enemiesAlive_12(int32_t value)
	{
		___enemiesAlive_12 = value;
	}

	inline static int32_t get_offset_of_maxEnemiesAtOnce_13() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___maxEnemiesAtOnce_13)); }
	inline int32_t get_maxEnemiesAtOnce_13() const { return ___maxEnemiesAtOnce_13; }
	inline int32_t* get_address_of_maxEnemiesAtOnce_13() { return &___maxEnemiesAtOnce_13; }
	inline void set_maxEnemiesAtOnce_13(int32_t value)
	{
		___maxEnemiesAtOnce_13 = value;
	}

	inline static int32_t get_offset_of_timeBetweenSpawns_14() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___timeBetweenSpawns_14)); }
	inline float get_timeBetweenSpawns_14() const { return ___timeBetweenSpawns_14; }
	inline float* get_address_of_timeBetweenSpawns_14() { return &___timeBetweenSpawns_14; }
	inline void set_timeBetweenSpawns_14(float value)
	{
		___timeBetweenSpawns_14 = value;
	}

	inline static int32_t get_offset_of_timeUntilNewSpawn_15() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___timeUntilNewSpawn_15)); }
	inline float get_timeUntilNewSpawn_15() const { return ___timeUntilNewSpawn_15; }
	inline float* get_address_of_timeUntilNewSpawn_15() { return &___timeUntilNewSpawn_15; }
	inline void set_timeUntilNewSpawn_15(float value)
	{
		___timeUntilNewSpawn_15 = value;
	}

	inline static int32_t get_offset_of_timeUntilNewWave_16() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___timeUntilNewWave_16)); }
	inline float get_timeUntilNewWave_16() const { return ___timeUntilNewWave_16; }
	inline float* get_address_of_timeUntilNewWave_16() { return &___timeUntilNewWave_16; }
	inline void set_timeUntilNewWave_16(float value)
	{
		___timeUntilNewWave_16 = value;
	}

	inline static int32_t get_offset_of_player_17() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___player_17)); }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * get_player_17() const { return ___player_17; }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** get_address_of_player_17() { return &___player_17; }
	inline void set_player_17(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * value)
	{
		___player_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_17), (void*)value);
	}

	inline static int32_t get_offset_of_stateReference_19() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___stateReference_19)); }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * get_stateReference_19() const { return ___stateReference_19; }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 ** get_address_of_stateReference_19() { return &___stateReference_19; }
	inline void set_stateReference_19(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * value)
	{
		___stateReference_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateReference_19), (void*)value);
	}

	inline static int32_t get_offset_of_uiManagerInstance_20() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___uiManagerInstance_20)); }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * get_uiManagerInstance_20() const { return ___uiManagerInstance_20; }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C ** get_address_of_uiManagerInstance_20() { return &___uiManagerInstance_20; }
	inline void set_uiManagerInstance_20(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * value)
	{
		___uiManagerInstance_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uiManagerInstance_20), (void*)value);
	}

	inline static int32_t get_offset_of_lastGameState_21() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89, ___lastGameState_21)); }
	inline int32_t get_lastGameState_21() const { return ___lastGameState_21; }
	inline int32_t* get_address_of_lastGameState_21() { return &___lastGameState_21; }
	inline void set_lastGameState_21(int32_t value)
	{
		___lastGameState_21 = value;
	}
};

struct GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields
{
public:
	// GameManager GameManager::instance
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___instance_18;

public:
	inline static int32_t get_offset_of_instance_18() { return static_cast<int32_t>(offsetof(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields, ___instance_18)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_instance_18() const { return ___instance_18; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_instance_18() { return &___instance_18; }
	inline void set_instance_18(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___instance_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_18), (void*)value);
	}
};


// MainMenu
struct  MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject MainMenu::infoScreen
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___infoScreen_4;
	// UnityEngine.GameObject MainMenu::mainMenuScreen
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___mainMenuScreen_5;

public:
	inline static int32_t get_offset_of_infoScreen_4() { return static_cast<int32_t>(offsetof(MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105, ___infoScreen_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_infoScreen_4() const { return ___infoScreen_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_infoScreen_4() { return &___infoScreen_4; }
	inline void set_infoScreen_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___infoScreen_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infoScreen_4), (void*)value);
	}

	inline static int32_t get_offset_of_mainMenuScreen_5() { return static_cast<int32_t>(offsetof(MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105, ___mainMenuScreen_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_mainMenuScreen_5() const { return ___mainMenuScreen_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_mainMenuScreen_5() { return &___mainMenuScreen_5; }
	inline void set_mainMenuScreen_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___mainMenuScreen_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mainMenuScreen_5), (void*)value);
	}
};


// PoolManager
struct  PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// GameManager PoolManager::gmInstance
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___gmInstance_5;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> PoolManager::enemies
	List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * ___enemies_6;
	// UnityEngine.Transform PoolManager::playerTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___playerTransform_7;

public:
	inline static int32_t get_offset_of_gmInstance_5() { return static_cast<int32_t>(offsetof(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04, ___gmInstance_5)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_gmInstance_5() const { return ___gmInstance_5; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_gmInstance_5() { return &___gmInstance_5; }
	inline void set_gmInstance_5(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___gmInstance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gmInstance_5), (void*)value);
	}

	inline static int32_t get_offset_of_enemies_6() { return static_cast<int32_t>(offsetof(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04, ___enemies_6)); }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * get_enemies_6() const { return ___enemies_6; }
	inline List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B ** get_address_of_enemies_6() { return &___enemies_6; }
	inline void set_enemies_6(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * value)
	{
		___enemies_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemies_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerTransform_7() { return static_cast<int32_t>(offsetof(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04, ___playerTransform_7)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_playerTransform_7() const { return ___playerTransform_7; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_playerTransform_7() { return &___playerTransform_7; }
	inline void set_playerTransform_7(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___playerTransform_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerTransform_7), (void*)value);
	}
};

struct PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_StaticFields
{
public:
	// PoolManager PoolManager::instance
	PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_StaticFields, ___instance_4)); }
	inline PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * get_instance_4() const { return ___instance_4; }
	inline PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// PurchaseableButton
struct  PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 PurchaseableButton::price
	int32_t ___price_4;
	// System.Int32 PurchaseableButton::maxPurchaseable
	int32_t ___maxPurchaseable_5;
	// System.Int32[] PurchaseableButton::prices
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___prices_6;
	// System.Int32 PurchaseableButton::timesPurchased
	int32_t ___timesPurchased_7;

public:
	inline static int32_t get_offset_of_price_4() { return static_cast<int32_t>(offsetof(PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959, ___price_4)); }
	inline int32_t get_price_4() const { return ___price_4; }
	inline int32_t* get_address_of_price_4() { return &___price_4; }
	inline void set_price_4(int32_t value)
	{
		___price_4 = value;
	}

	inline static int32_t get_offset_of_maxPurchaseable_5() { return static_cast<int32_t>(offsetof(PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959, ___maxPurchaseable_5)); }
	inline int32_t get_maxPurchaseable_5() const { return ___maxPurchaseable_5; }
	inline int32_t* get_address_of_maxPurchaseable_5() { return &___maxPurchaseable_5; }
	inline void set_maxPurchaseable_5(int32_t value)
	{
		___maxPurchaseable_5 = value;
	}

	inline static int32_t get_offset_of_prices_6() { return static_cast<int32_t>(offsetof(PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959, ___prices_6)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_prices_6() const { return ___prices_6; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_prices_6() { return &___prices_6; }
	inline void set_prices_6(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___prices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prices_6), (void*)value);
	}

	inline static int32_t get_offset_of_timesPurchased_7() { return static_cast<int32_t>(offsetof(PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959, ___timesPurchased_7)); }
	inline int32_t get_timesPurchased_7() const { return ___timesPurchased_7; }
	inline int32_t* get_address_of_timesPurchased_7() { return &___timesPurchased_7; }
	inline void set_timesPurchased_7(int32_t value)
	{
		___timesPurchased_7 = value;
	}
};


// Scoring
struct  Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Scoring::distFar
	float ___distFar_4;
	// System.Single Scoring::distMid
	float ___distMid_5;
	// System.Single Scoring::distClose
	float ___distClose_6;
	// System.Int32 Scoring::kills
	int32_t ___kills_10;
	// System.Int32 Scoring::wavesSurvived
	int32_t ___wavesSurvived_11;
	// GameManager Scoring::gmInstance
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___gmInstance_12;

public:
	inline static int32_t get_offset_of_distFar_4() { return static_cast<int32_t>(offsetof(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01, ___distFar_4)); }
	inline float get_distFar_4() const { return ___distFar_4; }
	inline float* get_address_of_distFar_4() { return &___distFar_4; }
	inline void set_distFar_4(float value)
	{
		___distFar_4 = value;
	}

	inline static int32_t get_offset_of_distMid_5() { return static_cast<int32_t>(offsetof(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01, ___distMid_5)); }
	inline float get_distMid_5() const { return ___distMid_5; }
	inline float* get_address_of_distMid_5() { return &___distMid_5; }
	inline void set_distMid_5(float value)
	{
		___distMid_5 = value;
	}

	inline static int32_t get_offset_of_distClose_6() { return static_cast<int32_t>(offsetof(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01, ___distClose_6)); }
	inline float get_distClose_6() const { return ___distClose_6; }
	inline float* get_address_of_distClose_6() { return &___distClose_6; }
	inline void set_distClose_6(float value)
	{
		___distClose_6 = value;
	}

	inline static int32_t get_offset_of_kills_10() { return static_cast<int32_t>(offsetof(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01, ___kills_10)); }
	inline int32_t get_kills_10() const { return ___kills_10; }
	inline int32_t* get_address_of_kills_10() { return &___kills_10; }
	inline void set_kills_10(int32_t value)
	{
		___kills_10 = value;
	}

	inline static int32_t get_offset_of_wavesSurvived_11() { return static_cast<int32_t>(offsetof(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01, ___wavesSurvived_11)); }
	inline int32_t get_wavesSurvived_11() const { return ___wavesSurvived_11; }
	inline int32_t* get_address_of_wavesSurvived_11() { return &___wavesSurvived_11; }
	inline void set_wavesSurvived_11(int32_t value)
	{
		___wavesSurvived_11 = value;
	}

	inline static int32_t get_offset_of_gmInstance_12() { return static_cast<int32_t>(offsetof(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01, ___gmInstance_12)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_gmInstance_12() const { return ___gmInstance_12; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_gmInstance_12() { return &___gmInstance_12; }
	inline void set_gmInstance_12(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___gmInstance_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gmInstance_12), (void*)value);
	}
};

struct Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields
{
public:
	// Scoring Scoring::instance
	Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * ___instance_7;
	// System.Int32 Scoring::money
	int32_t ___money_8;
	// System.Int32 Scoring::totalEarnedMoney
	int32_t ___totalEarnedMoney_9;

public:
	inline static int32_t get_offset_of_instance_7() { return static_cast<int32_t>(offsetof(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields, ___instance_7)); }
	inline Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * get_instance_7() const { return ___instance_7; }
	inline Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 ** get_address_of_instance_7() { return &___instance_7; }
	inline void set_instance_7(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * value)
	{
		___instance_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_7), (void*)value);
	}

	inline static int32_t get_offset_of_money_8() { return static_cast<int32_t>(offsetof(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields, ___money_8)); }
	inline int32_t get_money_8() const { return ___money_8; }
	inline int32_t* get_address_of_money_8() { return &___money_8; }
	inline void set_money_8(int32_t value)
	{
		___money_8 = value;
	}

	inline static int32_t get_offset_of_totalEarnedMoney_9() { return static_cast<int32_t>(offsetof(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields, ___totalEarnedMoney_9)); }
	inline int32_t get_totalEarnedMoney_9() const { return ___totalEarnedMoney_9; }
	inline int32_t* get_address_of_totalEarnedMoney_9() { return &___totalEarnedMoney_9; }
	inline void set_totalEarnedMoney_9(int32_t value)
	{
		___totalEarnedMoney_9 = value;
	}
};


// Spawner
struct  Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Single Spawner::spawnerRadius
	float ___spawnerRadius_4;
	// UnityEngine.GameObject Spawner::objToSpawn
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___objToSpawn_5;
	// PoolManager Spawner::pm
	PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * ___pm_6;

public:
	inline static int32_t get_offset_of_spawnerRadius_4() { return static_cast<int32_t>(offsetof(Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D, ___spawnerRadius_4)); }
	inline float get_spawnerRadius_4() const { return ___spawnerRadius_4; }
	inline float* get_address_of_spawnerRadius_4() { return &___spawnerRadius_4; }
	inline void set_spawnerRadius_4(float value)
	{
		___spawnerRadius_4 = value;
	}

	inline static int32_t get_offset_of_objToSpawn_5() { return static_cast<int32_t>(offsetof(Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D, ___objToSpawn_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_objToSpawn_5() const { return ___objToSpawn_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_objToSpawn_5() { return &___objToSpawn_5; }
	inline void set_objToSpawn_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___objToSpawn_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objToSpawn_5), (void*)value);
	}

	inline static int32_t get_offset_of_pm_6() { return static_cast<int32_t>(offsetof(Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D, ___pm_6)); }
	inline PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * get_pm_6() const { return ___pm_6; }
	inline PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 ** get_address_of_pm_6() { return &___pm_6; }
	inline void set_pm_6(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * value)
	{
		___pm_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pm_6), (void*)value);
	}
};


// State
struct  State_tC5BA2DC909C73846EB01A3E0806E5D6347274619  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// State_GameState State::gameState
	int32_t ___gameState_5;
	// State_WaveState State::waveState
	int32_t ___waveState_6;
	// State_StateChanged State::GameStateChanged
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * ___GameStateChanged_7;
	// State_StateChanged State::WaveStateChanged
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * ___WaveStateChanged_8;

public:
	inline static int32_t get_offset_of_gameState_5() { return static_cast<int32_t>(offsetof(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619, ___gameState_5)); }
	inline int32_t get_gameState_5() const { return ___gameState_5; }
	inline int32_t* get_address_of_gameState_5() { return &___gameState_5; }
	inline void set_gameState_5(int32_t value)
	{
		___gameState_5 = value;
	}

	inline static int32_t get_offset_of_waveState_6() { return static_cast<int32_t>(offsetof(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619, ___waveState_6)); }
	inline int32_t get_waveState_6() const { return ___waveState_6; }
	inline int32_t* get_address_of_waveState_6() { return &___waveState_6; }
	inline void set_waveState_6(int32_t value)
	{
		___waveState_6 = value;
	}

	inline static int32_t get_offset_of_GameStateChanged_7() { return static_cast<int32_t>(offsetof(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619, ___GameStateChanged_7)); }
	inline StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * get_GameStateChanged_7() const { return ___GameStateChanged_7; }
	inline StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 ** get_address_of_GameStateChanged_7() { return &___GameStateChanged_7; }
	inline void set_GameStateChanged_7(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * value)
	{
		___GameStateChanged_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GameStateChanged_7), (void*)value);
	}

	inline static int32_t get_offset_of_WaveStateChanged_8() { return static_cast<int32_t>(offsetof(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619, ___WaveStateChanged_8)); }
	inline StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * get_WaveStateChanged_8() const { return ___WaveStateChanged_8; }
	inline StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 ** get_address_of_WaveStateChanged_8() { return &___WaveStateChanged_8; }
	inline void set_WaveStateChanged_8(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * value)
	{
		___WaveStateChanged_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WaveStateChanged_8), (void*)value);
	}
};

struct State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_StaticFields
{
public:
	// State State::instance
	State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_StaticFields, ___instance_4)); }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * get_instance_4() const { return ___instance_4; }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UIBase
struct  UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// GameManager UIBase::gmInstance
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * ___gmInstance_4;
	// State UIBase::stateReference
	State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * ___stateReference_5;

public:
	inline static int32_t get_offset_of_gmInstance_4() { return static_cast<int32_t>(offsetof(UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467, ___gmInstance_4)); }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * get_gmInstance_4() const { return ___gmInstance_4; }
	inline GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 ** get_address_of_gmInstance_4() { return &___gmInstance_4; }
	inline void set_gmInstance_4(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * value)
	{
		___gmInstance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gmInstance_4), (void*)value);
	}

	inline static int32_t get_offset_of_stateReference_5() { return static_cast<int32_t>(offsetof(UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467, ___stateReference_5)); }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * get_stateReference_5() const { return ___stateReference_5; }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 ** get_address_of_stateReference_5() { return &___stateReference_5; }
	inline void set_stateReference_5(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * value)
	{
		___stateReference_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateReference_5), (void*)value);
	}
};


// UIHealthCounter
struct  UIHealthCounter_t156C24DE6270503DB209DC28BDD9E1F60608220A  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// Player UIHealthCounter::playerReference
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * ___playerReference_4;
	// TMPro.TextMeshProUGUI UIHealthCounter::costText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___costText_5;

public:
	inline static int32_t get_offset_of_playerReference_4() { return static_cast<int32_t>(offsetof(UIHealthCounter_t156C24DE6270503DB209DC28BDD9E1F60608220A, ___playerReference_4)); }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * get_playerReference_4() const { return ___playerReference_4; }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** get_address_of_playerReference_4() { return &___playerReference_4; }
	inline void set_playerReference_4(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * value)
	{
		___playerReference_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerReference_4), (void*)value);
	}

	inline static int32_t get_offset_of_costText_5() { return static_cast<int32_t>(offsetof(UIHealthCounter_t156C24DE6270503DB209DC28BDD9E1F60608220A, ___costText_5)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_costText_5() const { return ___costText_5; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_costText_5() { return &___costText_5; }
	inline void set_costText_5(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___costText_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___costText_5), (void*)value);
	}
};


// UIManager
struct  UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// UnityEngine.GameObject UIManager::inGameUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___inGameUI_4;
	// UnityEngine.GameObject UIManager::pauseUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___pauseUI_5;
	// UnityEngine.GameObject UIManager::gameOverUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___gameOverUI_6;
	// UnityEngine.GameObject UIManager::timerUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___timerUI_7;
	// UnityEngine.GameObject UIManager::buyUI
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___buyUI_8;
	// System.Collections.Generic.Queue`1<UnityEngine.GameObject> UIManager::activeUI
	Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * ___activeUI_9;
	// State UIManager::stateReference
	State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * ___stateReference_11;
	// System.Boolean UIManager::canPause
	bool ___canPause_12;

public:
	inline static int32_t get_offset_of_inGameUI_4() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___inGameUI_4)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_inGameUI_4() const { return ___inGameUI_4; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_inGameUI_4() { return &___inGameUI_4; }
	inline void set_inGameUI_4(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___inGameUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___inGameUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_pauseUI_5() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___pauseUI_5)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_pauseUI_5() const { return ___pauseUI_5; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_pauseUI_5() { return &___pauseUI_5; }
	inline void set_pauseUI_5(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___pauseUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseUI_5), (void*)value);
	}

	inline static int32_t get_offset_of_gameOverUI_6() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___gameOverUI_6)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_gameOverUI_6() const { return ___gameOverUI_6; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_gameOverUI_6() { return &___gameOverUI_6; }
	inline void set_gameOverUI_6(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___gameOverUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameOverUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_timerUI_7() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___timerUI_7)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_timerUI_7() const { return ___timerUI_7; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_timerUI_7() { return &___timerUI_7; }
	inline void set_timerUI_7(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___timerUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_buyUI_8() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___buyUI_8)); }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * get_buyUI_8() const { return ___buyUI_8; }
	inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F ** get_address_of_buyUI_8() { return &___buyUI_8; }
	inline void set_buyUI_8(GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * value)
	{
		___buyUI_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buyUI_8), (void*)value);
	}

	inline static int32_t get_offset_of_activeUI_9() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___activeUI_9)); }
	inline Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * get_activeUI_9() const { return ___activeUI_9; }
	inline Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 ** get_address_of_activeUI_9() { return &___activeUI_9; }
	inline void set_activeUI_9(Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * value)
	{
		___activeUI_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeUI_9), (void*)value);
	}

	inline static int32_t get_offset_of_stateReference_11() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___stateReference_11)); }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * get_stateReference_11() const { return ___stateReference_11; }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 ** get_address_of_stateReference_11() { return &___stateReference_11; }
	inline void set_stateReference_11(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * value)
	{
		___stateReference_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateReference_11), (void*)value);
	}

	inline static int32_t get_offset_of_canPause_12() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C, ___canPause_12)); }
	inline bool get_canPause_12() const { return ___canPause_12; }
	inline bool* get_address_of_canPause_12() { return &___canPause_12; }
	inline void set_canPause_12(bool value)
	{
		___canPause_12 = value;
	}
};

struct UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields
{
public:
	// UIManager UIManager::instance
	UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * ___instance_10;

public:
	inline static int32_t get_offset_of_instance_10() { return static_cast<int32_t>(offsetof(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields, ___instance_10)); }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * get_instance_10() const { return ___instance_10; }
	inline UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C ** get_address_of_instance_10() { return &___instance_10; }
	inline void set_instance_10(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * value)
	{
		___instance_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_10), (void*)value);
	}
};


// UIPlayButton
struct  UIPlayButton_t8F31132EEC3EB4DA226498809075014AF39528A8  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// UnityEngine.AudioSource
struct  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C  : public AudioBehaviour_tC612EC4E17A648A5C568621F3FBF1DBD773C71C7
{
public:

public:
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:

public:
};


// Weapon
struct  Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9  : public MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429
{
public:
	// System.Int32 Weapon::damagePerShot
	int32_t ___damagePerShot_4;
	// System.Int32 Weapon::ammo
	int32_t ___ammo_5;
	// System.Single Weapon::knockbackModifier
	float ___knockbackModifier_6;
	// UnityEngine.Ray Weapon::ray
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray_7;
	// UnityEngine.ParticleSystem Weapon::muzzleFlashParticle
	ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * ___muzzleFlashParticle_8;
	// UnityEngine.AudioSource Weapon::gunshotSource
	AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * ___gunshotSource_9;
	// UnityEngine.RaycastHit Weapon::hit
	RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  ___hit_10;

public:
	inline static int32_t get_offset_of_damagePerShot_4() { return static_cast<int32_t>(offsetof(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9, ___damagePerShot_4)); }
	inline int32_t get_damagePerShot_4() const { return ___damagePerShot_4; }
	inline int32_t* get_address_of_damagePerShot_4() { return &___damagePerShot_4; }
	inline void set_damagePerShot_4(int32_t value)
	{
		___damagePerShot_4 = value;
	}

	inline static int32_t get_offset_of_ammo_5() { return static_cast<int32_t>(offsetof(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9, ___ammo_5)); }
	inline int32_t get_ammo_5() const { return ___ammo_5; }
	inline int32_t* get_address_of_ammo_5() { return &___ammo_5; }
	inline void set_ammo_5(int32_t value)
	{
		___ammo_5 = value;
	}

	inline static int32_t get_offset_of_knockbackModifier_6() { return static_cast<int32_t>(offsetof(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9, ___knockbackModifier_6)); }
	inline float get_knockbackModifier_6() const { return ___knockbackModifier_6; }
	inline float* get_address_of_knockbackModifier_6() { return &___knockbackModifier_6; }
	inline void set_knockbackModifier_6(float value)
	{
		___knockbackModifier_6 = value;
	}

	inline static int32_t get_offset_of_ray_7() { return static_cast<int32_t>(offsetof(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9, ___ray_7)); }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  get_ray_7() const { return ___ray_7; }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * get_address_of_ray_7() { return &___ray_7; }
	inline void set_ray_7(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  value)
	{
		___ray_7 = value;
	}

	inline static int32_t get_offset_of_muzzleFlashParticle_8() { return static_cast<int32_t>(offsetof(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9, ___muzzleFlashParticle_8)); }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * get_muzzleFlashParticle_8() const { return ___muzzleFlashParticle_8; }
	inline ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D ** get_address_of_muzzleFlashParticle_8() { return &___muzzleFlashParticle_8; }
	inline void set_muzzleFlashParticle_8(ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * value)
	{
		___muzzleFlashParticle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___muzzleFlashParticle_8), (void*)value);
	}

	inline static int32_t get_offset_of_gunshotSource_9() { return static_cast<int32_t>(offsetof(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9, ___gunshotSource_9)); }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * get_gunshotSource_9() const { return ___gunshotSource_9; }
	inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C ** get_address_of_gunshotSource_9() { return &___gunshotSource_9; }
	inline void set_gunshotSource_9(AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * value)
	{
		___gunshotSource_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gunshotSource_9), (void*)value);
	}

	inline static int32_t get_offset_of_hit_10() { return static_cast<int32_t>(offsetof(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9, ___hit_10)); }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  get_hit_10() const { return ___hit_10; }
	inline RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * get_address_of_hit_10() { return &___hit_10; }
	inline void set_hit_10(RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3  value)
	{
		___hit_10 = value;
	}
};


// AmmoButton
struct  AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74  : public PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959
{
public:
	// Weapon AmmoButton::playerWeapon
	Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * ___playerWeapon_8;
	// TMPro.TextMeshProUGUI AmmoButton::costText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___costText_9;

public:
	inline static int32_t get_offset_of_playerWeapon_8() { return static_cast<int32_t>(offsetof(AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74, ___playerWeapon_8)); }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * get_playerWeapon_8() const { return ___playerWeapon_8; }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 ** get_address_of_playerWeapon_8() { return &___playerWeapon_8; }
	inline void set_playerWeapon_8(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * value)
	{
		___playerWeapon_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerWeapon_8), (void*)value);
	}

	inline static int32_t get_offset_of_costText_9() { return static_cast<int32_t>(offsetof(AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74, ___costText_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_costText_9() const { return ___costText_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_costText_9() { return &___costText_9; }
	inline void set_costText_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___costText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___costText_9), (void*)value);
	}
};


// DamageableBarricade
struct  DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9  : public Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474
{
public:

public:
};


// Enemy
struct  Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6  : public Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474
{
public:
	// UnityEngine.AI.NavMeshAgent Enemy::agent
	NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * ___agent_5;
	// System.Single Enemy::knockbackDelay
	float ___knockbackDelay_6;

public:
	inline static int32_t get_offset_of_agent_5() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___agent_5)); }
	inline NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * get_agent_5() const { return ___agent_5; }
	inline NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB ** get_address_of_agent_5() { return &___agent_5; }
	inline void set_agent_5(NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * value)
	{
		___agent_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___agent_5), (void*)value);
	}

	inline static int32_t get_offset_of_knockbackDelay_6() { return static_cast<int32_t>(offsetof(Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6, ___knockbackDelay_6)); }
	inline float get_knockbackDelay_6() const { return ___knockbackDelay_6; }
	inline float* get_address_of_knockbackDelay_6() { return &___knockbackDelay_6; }
	inline void set_knockbackDelay_6(float value)
	{
		___knockbackDelay_6 = value;
	}
};


// HealthButton
struct  HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F  : public PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959
{
public:
	// Player HealthButton::player
	Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * ___player_8;
	// TMPro.TextMeshProUGUI HealthButton::costText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___costText_9;

public:
	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F, ___player_8)); }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * get_player_8() const { return ___player_8; }
	inline Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}

	inline static int32_t get_offset_of_costText_9() { return static_cast<int32_t>(offsetof(HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F, ___costText_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_costText_9() const { return ___costText_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_costText_9() { return &___costText_9; }
	inline void set_costText_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___costText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___costText_9), (void*)value);
	}
};


// IncreasedDamageButton
struct  IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76  : public PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959
{
public:
	// Weapon IncreasedDamageButton::playerWeapon
	Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * ___playerWeapon_8;
	// System.Int32[] IncreasedDamageButton::newDamage
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___newDamage_9;
	// TMPro.TextMeshProUGUI IncreasedDamageButton::costText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___costText_10;

public:
	inline static int32_t get_offset_of_playerWeapon_8() { return static_cast<int32_t>(offsetof(IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76, ___playerWeapon_8)); }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * get_playerWeapon_8() const { return ___playerWeapon_8; }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 ** get_address_of_playerWeapon_8() { return &___playerWeapon_8; }
	inline void set_playerWeapon_8(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * value)
	{
		___playerWeapon_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerWeapon_8), (void*)value);
	}

	inline static int32_t get_offset_of_newDamage_9() { return static_cast<int32_t>(offsetof(IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76, ___newDamage_9)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_newDamage_9() const { return ___newDamage_9; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_newDamage_9() { return &___newDamage_9; }
	inline void set_newDamage_9(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___newDamage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newDamage_9), (void*)value);
	}

	inline static int32_t get_offset_of_costText_10() { return static_cast<int32_t>(offsetof(IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76, ___costText_10)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_costText_10() const { return ___costText_10; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_costText_10() { return &___costText_10; }
	inline void set_costText_10(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___costText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___costText_10), (void*)value);
	}
};


// IncreasedKnockbackButton
struct  IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713  : public PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959
{
public:
	// Weapon IncreasedKnockbackButton::playerWeapon
	Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * ___playerWeapon_8;
	// System.Single[] IncreasedKnockbackButton::newKnockbackModifier
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___newKnockbackModifier_9;
	// TMPro.TextMeshProUGUI IncreasedKnockbackButton::costText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___costText_10;

public:
	inline static int32_t get_offset_of_playerWeapon_8() { return static_cast<int32_t>(offsetof(IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713, ___playerWeapon_8)); }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * get_playerWeapon_8() const { return ___playerWeapon_8; }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 ** get_address_of_playerWeapon_8() { return &___playerWeapon_8; }
	inline void set_playerWeapon_8(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * value)
	{
		___playerWeapon_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerWeapon_8), (void*)value);
	}

	inline static int32_t get_offset_of_newKnockbackModifier_9() { return static_cast<int32_t>(offsetof(IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713, ___newKnockbackModifier_9)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_newKnockbackModifier_9() const { return ___newKnockbackModifier_9; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_newKnockbackModifier_9() { return &___newKnockbackModifier_9; }
	inline void set_newKnockbackModifier_9(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___newKnockbackModifier_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newKnockbackModifier_9), (void*)value);
	}

	inline static int32_t get_offset_of_costText_10() { return static_cast<int32_t>(offsetof(IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713, ___costText_10)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_costText_10() const { return ___costText_10; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_costText_10() { return &___costText_10; }
	inline void set_costText_10(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___costText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___costText_10), (void*)value);
	}
};


// Player
struct  Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873  : public Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474
{
public:
	// UnityEngine.Ray Player::ray
	Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray_5;
	// State Player::stateReference
	State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * ___stateReference_6;
	// Weapon Player::weapon
	Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * ___weapon_7;

public:
	inline static int32_t get_offset_of_ray_5() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___ray_5)); }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  get_ray_5() const { return ___ray_5; }
	inline Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * get_address_of_ray_5() { return &___ray_5; }
	inline void set_ray_5(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  value)
	{
		___ray_5 = value;
	}

	inline static int32_t get_offset_of_stateReference_6() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___stateReference_6)); }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * get_stateReference_6() const { return ___stateReference_6; }
	inline State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 ** get_address_of_stateReference_6() { return &___stateReference_6; }
	inline void set_stateReference_6(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * value)
	{
		___stateReference_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stateReference_6), (void*)value);
	}

	inline static int32_t get_offset_of_weapon_7() { return static_cast<int32_t>(offsetof(Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873, ___weapon_7)); }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * get_weapon_7() const { return ___weapon_7; }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 ** get_address_of_weapon_7() { return &___weapon_7; }
	inline void set_weapon_7(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * value)
	{
		___weapon_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___weapon_7), (void*)value);
	}
};


// RespawnBarricadesButton
struct  RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B  : public PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959
{
public:
	// DamageableBarricade RespawnBarricadesButton::barricade1
	DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * ___barricade1_8;
	// DamageableBarricade RespawnBarricadesButton::barricade2
	DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * ___barricade2_9;
	// DamageableBarricade RespawnBarricadesButton::barricade3
	DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * ___barricade3_10;
	// TMPro.TextMeshProUGUI RespawnBarricadesButton::costText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___costText_11;

public:
	inline static int32_t get_offset_of_barricade1_8() { return static_cast<int32_t>(offsetof(RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B, ___barricade1_8)); }
	inline DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * get_barricade1_8() const { return ___barricade1_8; }
	inline DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 ** get_address_of_barricade1_8() { return &___barricade1_8; }
	inline void set_barricade1_8(DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * value)
	{
		___barricade1_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___barricade1_8), (void*)value);
	}

	inline static int32_t get_offset_of_barricade2_9() { return static_cast<int32_t>(offsetof(RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B, ___barricade2_9)); }
	inline DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * get_barricade2_9() const { return ___barricade2_9; }
	inline DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 ** get_address_of_barricade2_9() { return &___barricade2_9; }
	inline void set_barricade2_9(DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * value)
	{
		___barricade2_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___barricade2_9), (void*)value);
	}

	inline static int32_t get_offset_of_barricade3_10() { return static_cast<int32_t>(offsetof(RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B, ___barricade3_10)); }
	inline DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * get_barricade3_10() const { return ___barricade3_10; }
	inline DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 ** get_address_of_barricade3_10() { return &___barricade3_10; }
	inline void set_barricade3_10(DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * value)
	{
		___barricade3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___barricade3_10), (void*)value);
	}

	inline static int32_t get_offset_of_costText_11() { return static_cast<int32_t>(offsetof(RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B, ___costText_11)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_costText_11() const { return ___costText_11; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_costText_11() { return &___costText_11; }
	inline void set_costText_11(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___costText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___costText_11), (void*)value);
	}
};


// UIAmmo
struct  UIAmmo_tD6DC7E96EBB5CE609CAAA7812A03D2CC97C94399  : public UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467
{
public:
	// TMPro.TextMeshProUGUI UIAmmo::ammoText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___ammoText_6;
	// Weapon UIAmmo::playerWeapon
	Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * ___playerWeapon_7;

public:
	inline static int32_t get_offset_of_ammoText_6() { return static_cast<int32_t>(offsetof(UIAmmo_tD6DC7E96EBB5CE609CAAA7812A03D2CC97C94399, ___ammoText_6)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_ammoText_6() const { return ___ammoText_6; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_ammoText_6() { return &___ammoText_6; }
	inline void set_ammoText_6(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___ammoText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ammoText_6), (void*)value);
	}

	inline static int32_t get_offset_of_playerWeapon_7() { return static_cast<int32_t>(offsetof(UIAmmo_tD6DC7E96EBB5CE609CAAA7812A03D2CC97C94399, ___playerWeapon_7)); }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * get_playerWeapon_7() const { return ___playerWeapon_7; }
	inline Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 ** get_address_of_playerWeapon_7() { return &___playerWeapon_7; }
	inline void set_playerWeapon_7(Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * value)
	{
		___playerWeapon_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerWeapon_7), (void*)value);
	}
};


// UIBuyMenu
struct  UIBuyMenu_tDA1EA67055DEFF28D2381FD7AAC240A83AD00B1D  : public UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467
{
public:

public:
};


// UIGameOver
struct  UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195  : public UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467
{
public:
	// TMPro.TextMeshProUGUI UIGameOver::wavesSurvivedScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___wavesSurvivedScoreText_6;
	// TMPro.TextMeshProUGUI UIGameOver::enemiesKilledScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___enemiesKilledScoreText_7;
	// TMPro.TextMeshProUGUI UIGameOver::coinsEarnedScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___coinsEarnedScoreText_8;
	// TMPro.TextMeshProUGUI UIGameOver::totalScoreText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___totalScoreText_9;
	// TMPro.TextMeshProUGUI UIGameOver::wavesSurvivedAmountText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___wavesSurvivedAmountText_10;
	// TMPro.TextMeshProUGUI UIGameOver::enemiesKilledAmountText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___enemiesKilledAmountText_11;
	// TMPro.TextMeshProUGUI UIGameOver::coinsEarnedAmountText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___coinsEarnedAmountText_12;

public:
	inline static int32_t get_offset_of_wavesSurvivedScoreText_6() { return static_cast<int32_t>(offsetof(UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195, ___wavesSurvivedScoreText_6)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_wavesSurvivedScoreText_6() const { return ___wavesSurvivedScoreText_6; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_wavesSurvivedScoreText_6() { return &___wavesSurvivedScoreText_6; }
	inline void set_wavesSurvivedScoreText_6(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___wavesSurvivedScoreText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wavesSurvivedScoreText_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemiesKilledScoreText_7() { return static_cast<int32_t>(offsetof(UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195, ___enemiesKilledScoreText_7)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_enemiesKilledScoreText_7() const { return ___enemiesKilledScoreText_7; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_enemiesKilledScoreText_7() { return &___enemiesKilledScoreText_7; }
	inline void set_enemiesKilledScoreText_7(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___enemiesKilledScoreText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemiesKilledScoreText_7), (void*)value);
	}

	inline static int32_t get_offset_of_coinsEarnedScoreText_8() { return static_cast<int32_t>(offsetof(UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195, ___coinsEarnedScoreText_8)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_coinsEarnedScoreText_8() const { return ___coinsEarnedScoreText_8; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_coinsEarnedScoreText_8() { return &___coinsEarnedScoreText_8; }
	inline void set_coinsEarnedScoreText_8(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___coinsEarnedScoreText_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinsEarnedScoreText_8), (void*)value);
	}

	inline static int32_t get_offset_of_totalScoreText_9() { return static_cast<int32_t>(offsetof(UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195, ___totalScoreText_9)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_totalScoreText_9() const { return ___totalScoreText_9; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_totalScoreText_9() { return &___totalScoreText_9; }
	inline void set_totalScoreText_9(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___totalScoreText_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___totalScoreText_9), (void*)value);
	}

	inline static int32_t get_offset_of_wavesSurvivedAmountText_10() { return static_cast<int32_t>(offsetof(UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195, ___wavesSurvivedAmountText_10)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_wavesSurvivedAmountText_10() const { return ___wavesSurvivedAmountText_10; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_wavesSurvivedAmountText_10() { return &___wavesSurvivedAmountText_10; }
	inline void set_wavesSurvivedAmountText_10(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___wavesSurvivedAmountText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wavesSurvivedAmountText_10), (void*)value);
	}

	inline static int32_t get_offset_of_enemiesKilledAmountText_11() { return static_cast<int32_t>(offsetof(UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195, ___enemiesKilledAmountText_11)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_enemiesKilledAmountText_11() const { return ___enemiesKilledAmountText_11; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_enemiesKilledAmountText_11() { return &___enemiesKilledAmountText_11; }
	inline void set_enemiesKilledAmountText_11(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___enemiesKilledAmountText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemiesKilledAmountText_11), (void*)value);
	}

	inline static int32_t get_offset_of_coinsEarnedAmountText_12() { return static_cast<int32_t>(offsetof(UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195, ___coinsEarnedAmountText_12)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_coinsEarnedAmountText_12() const { return ___coinsEarnedAmountText_12; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_coinsEarnedAmountText_12() { return &___coinsEarnedAmountText_12; }
	inline void set_coinsEarnedAmountText_12(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___coinsEarnedAmountText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coinsEarnedAmountText_12), (void*)value);
	}
};


// UIHealth
struct  UIHealth_t8358029AB4BE890792AC5ADED398B55ED33D9F68  : public UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467
{
public:
	// Damageable UIHealth::character
	Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 * ___character_6;
	// UnityEngine.UI.Slider UIHealth::slider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___slider_7;

public:
	inline static int32_t get_offset_of_character_6() { return static_cast<int32_t>(offsetof(UIHealth_t8358029AB4BE890792AC5ADED398B55ED33D9F68, ___character_6)); }
	inline Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 * get_character_6() const { return ___character_6; }
	inline Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 ** get_address_of_character_6() { return &___character_6; }
	inline void set_character_6(Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 * value)
	{
		___character_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_6), (void*)value);
	}

	inline static int32_t get_offset_of_slider_7() { return static_cast<int32_t>(offsetof(UIHealth_t8358029AB4BE890792AC5ADED398B55ED33D9F68, ___slider_7)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_slider_7() const { return ___slider_7; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_slider_7() { return &___slider_7; }
	inline void set_slider_7(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___slider_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_7), (void*)value);
	}
};


// UIMoney
struct  UIMoney_tA821A929D622FDA2D686FAABADC21F1584A257F6  : public UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467
{
public:
	// TMPro.TextMeshProUGUI UIMoney::moneyText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___moneyText_6;

public:
	inline static int32_t get_offset_of_moneyText_6() { return static_cast<int32_t>(offsetof(UIMoney_tA821A929D622FDA2D686FAABADC21F1584A257F6, ___moneyText_6)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_moneyText_6() const { return ___moneyText_6; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_moneyText_6() { return &___moneyText_6; }
	inline void set_moneyText_6(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___moneyText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___moneyText_6), (void*)value);
	}
};


// UIPause
struct  UIPause_t3384ECEE2ADD964940A87F5FB15E696B35C60E72  : public UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467
{
public:

public:
};


// UITime
struct  UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B  : public UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467
{
public:
	// TMPro.TextMeshProUGUI UITime::timerText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___timerText_6;
	// System.Single UITime::timer
	float ___timer_7;

public:
	inline static int32_t get_offset_of_timerText_6() { return static_cast<int32_t>(offsetof(UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B, ___timerText_6)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_timerText_6() const { return ___timerText_6; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_timerText_6() { return &___timerText_6; }
	inline void set_timerText_6(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___timerText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timerText_6), (void*)value);
	}

	inline static int32_t get_offset_of_timer_7() { return static_cast<int32_t>(offsetof(UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B, ___timer_7)); }
	inline float get_timer_7() const { return ___timer_7; }
	inline float* get_address_of_timer_7() { return &___timer_7; }
	inline void set_timer_7(float value)
	{
		___timer_7 = value;
	}
};


// UIWaveInfo
struct  UIWaveInfo_t5CBBE22C27BBFAFE5FB22980EC39298E8C14EBF0  : public UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467
{
public:
	// TMPro.TextMeshProUGUI UIWaveInfo::waveNumberText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___waveNumberText_6;
	// TMPro.TextMeshProUGUI UIWaveInfo::enemyAmountText
	TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * ___enemyAmountText_7;
	// UnityEngine.UI.Slider UIWaveInfo::enemySlider
	Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * ___enemySlider_8;

public:
	inline static int32_t get_offset_of_waveNumberText_6() { return static_cast<int32_t>(offsetof(UIWaveInfo_t5CBBE22C27BBFAFE5FB22980EC39298E8C14EBF0, ___waveNumberText_6)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_waveNumberText_6() const { return ___waveNumberText_6; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_waveNumberText_6() { return &___waveNumberText_6; }
	inline void set_waveNumberText_6(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___waveNumberText_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waveNumberText_6), (void*)value);
	}

	inline static int32_t get_offset_of_enemyAmountText_7() { return static_cast<int32_t>(offsetof(UIWaveInfo_t5CBBE22C27BBFAFE5FB22980EC39298E8C14EBF0, ___enemyAmountText_7)); }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * get_enemyAmountText_7() const { return ___enemyAmountText_7; }
	inline TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 ** get_address_of_enemyAmountText_7() { return &___enemyAmountText_7; }
	inline void set_enemyAmountText_7(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * value)
	{
		___enemyAmountText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemyAmountText_7), (void*)value);
	}

	inline static int32_t get_offset_of_enemySlider_8() { return static_cast<int32_t>(offsetof(UIWaveInfo_t5CBBE22C27BBFAFE5FB22980EC39298E8C14EBF0, ___enemySlider_8)); }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * get_enemySlider_8() const { return ___enemySlider_8; }
	inline Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 ** get_address_of_enemySlider_8() { return &___enemySlider_8; }
	inline void set_enemySlider_8(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * value)
	{
		___enemySlider_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enemySlider_8), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_RectTransform_11;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_CanvasRenderer_12;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_Canvas_13;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_14;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_15;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyLayoutCallback_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyVertsCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * ___m_OnDirtyMaterialCallback_18;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_CachedMesh_21;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* ___m_CachedUvs_22;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * ___m_ColorTweenRunner_23;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Material_6)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Color_7)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_11() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_RectTransform_11)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_RectTransform_11() const { return ___m_RectTransform_11; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_RectTransform_11() { return &___m_RectTransform_11; }
	inline void set_m_RectTransform_11(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_RectTransform_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_12() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CanvasRenderer_12)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_CanvasRenderer_12() const { return ___m_CanvasRenderer_12; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_CanvasRenderer_12() { return &___m_CanvasRenderer_12; }
	inline void set_m_CanvasRenderer_12(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_CanvasRenderer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_13() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_Canvas_13)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_Canvas_13() const { return ___m_Canvas_13; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_Canvas_13() { return &___m_Canvas_13; }
	inline void set_m_Canvas_13(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_Canvas_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_14() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_VertsDirty_14)); }
	inline bool get_m_VertsDirty_14() const { return ___m_VertsDirty_14; }
	inline bool* get_address_of_m_VertsDirty_14() { return &___m_VertsDirty_14; }
	inline void set_m_VertsDirty_14(bool value)
	{
		___m_VertsDirty_14 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_MaterialDirty_15)); }
	inline bool get_m_MaterialDirty_15() const { return ___m_MaterialDirty_15; }
	inline bool* get_address_of_m_MaterialDirty_15() { return &___m_MaterialDirty_15; }
	inline void set_m_MaterialDirty_15(bool value)
	{
		___m_MaterialDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_16() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyLayoutCallback_16)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyLayoutCallback_16() const { return ___m_OnDirtyLayoutCallback_16; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyLayoutCallback_16() { return &___m_OnDirtyLayoutCallback_16; }
	inline void set_m_OnDirtyLayoutCallback_16(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyLayoutCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyVertsCallback_17)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyVertsCallback_17() const { return ___m_OnDirtyVertsCallback_17; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyVertsCallback_17() { return &___m_OnDirtyVertsCallback_17; }
	inline void set_m_OnDirtyVertsCallback_17(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyVertsCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_OnDirtyMaterialCallback_18)); }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * get_m_OnDirtyMaterialCallback_18() const { return ___m_OnDirtyMaterialCallback_18; }
	inline UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 ** get_address_of_m_OnDirtyMaterialCallback_18() { return &___m_OnDirtyMaterialCallback_18; }
	inline void set_m_OnDirtyMaterialCallback_18(UnityAction_tD19B26F1B2C048E38FD5801A33573BE01064CAF4 * value)
	{
		___m_OnDirtyMaterialCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_21() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedMesh_21)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_CachedMesh_21() const { return ___m_CachedMesh_21; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_CachedMesh_21() { return &___m_CachedMesh_21; }
	inline void set_m_CachedMesh_21(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_CachedMesh_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_22() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_CachedUvs_22)); }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* get_m_CachedUvs_22() const { return ___m_CachedUvs_22; }
	inline Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6** get_address_of_m_CachedUvs_22() { return &___m_CachedUvs_22; }
	inline void set_m_CachedUvs_22(Vector2U5BU5D_tA065A07DFC060C1B8786BBAA5F3A6577CCEB27D6* value)
	{
		___m_CachedUvs_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_23() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___m_ColorTweenRunner_23)); }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * get_m_ColorTweenRunner_23() const { return ___m_ColorTweenRunner_23; }
	inline TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 ** get_address_of_m_ColorTweenRunner_23() { return &___m_ColorTweenRunner_23; }
	inline void set_m_ColorTweenRunner_23(TweenRunner_1_t56CEB168ADE3739A1BDDBF258FDC759DF8927172 * value)
	{
		___m_ColorTweenRunner_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_23), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_24() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_24; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_24(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_24 = value;
	}
};

struct Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___s_Mesh_19;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * ___s_VertexHelper_20;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_DefaultUI_4)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_tBBF96AC337723E2EF156DF17E09D4379FD05DE1C * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_19() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_Mesh_19)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_s_Mesh_19() const { return ___s_Mesh_19; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_s_Mesh_19() { return &___s_Mesh_19; }
	inline void set_s_Mesh_19(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___s_Mesh_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_20() { return static_cast<int32_t>(offsetof(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8_StaticFields, ___s_VertexHelper_20)); }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * get_s_VertexHelper_20() const { return ___s_VertexHelper_20; }
	inline VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F ** get_address_of_s_VertexHelper_20() { return &___s_VertexHelper_20; }
	inline void set_s_VertexHelper_20(VertexHelper_t27373EA2CF0F5810EC8CF873D0A6D6C0B23DAC3F * value)
	{
		___s_VertexHelper_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_20), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A  : public UIBehaviour_t3C3C339CD5677BA7FC27C352FED8B78052A3FE70
{
public:
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  ___m_Navigation_6;
	// UnityEngine.UI.Selectable_Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_7;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  ___m_Colors_8;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  ___m_SpriteState_9;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * ___m_AnimationTriggers_10;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_11;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * ___m_TargetGraphic_12;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_13;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_14;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_17;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * ___m_CanvasGroupCache_18;

public:
	inline static int32_t get_offset_of_m_Navigation_6() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Navigation_6)); }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  get_m_Navigation_6() const { return ___m_Navigation_6; }
	inline Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07 * get_address_of_m_Navigation_6() { return &___m_Navigation_6; }
	inline void set_m_Navigation_6(Navigation_t761250C05C09773B75F5E0D52DDCBBFE60288A07  value)
	{
		___m_Navigation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnUp_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnDown_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnLeft_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_6))->___m_SelectOnRight_4), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_7() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Transition_7)); }
	inline int32_t get_m_Transition_7() const { return ___m_Transition_7; }
	inline int32_t* get_address_of_m_Transition_7() { return &___m_Transition_7; }
	inline void set_m_Transition_7(int32_t value)
	{
		___m_Transition_7 = value;
	}

	inline static int32_t get_offset_of_m_Colors_8() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Colors_8)); }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  get_m_Colors_8() const { return ___m_Colors_8; }
	inline ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA * get_address_of_m_Colors_8() { return &___m_Colors_8; }
	inline void set_m_Colors_8(ColorBlock_t93B54DF6E8D65D24CEA9726CA745E48C53E3B1EA  value)
	{
		___m_Colors_8 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_9() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_SpriteState_9)); }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  get_m_SpriteState_9() const { return ___m_SpriteState_9; }
	inline SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A * get_address_of_m_SpriteState_9() { return &___m_SpriteState_9; }
	inline void set_m_SpriteState_9(SpriteState_t58B9DD66A79CD69AB4CFC3AD0C41E45DC2192C0A  value)
	{
		___m_SpriteState_9 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_9))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_10() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_AnimationTriggers_10)); }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * get_m_AnimationTriggers_10() const { return ___m_AnimationTriggers_10; }
	inline AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 ** get_address_of_m_AnimationTriggers_10() { return &___m_AnimationTriggers_10; }
	inline void set_m_AnimationTriggers_10(AnimationTriggers_t164EF8B310E294B7D0F6BF1A87376731EBD06DC5 * value)
	{
		___m_AnimationTriggers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_11() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_Interactable_11)); }
	inline bool get_m_Interactable_11() const { return ___m_Interactable_11; }
	inline bool* get_address_of_m_Interactable_11() { return &___m_Interactable_11; }
	inline void set_m_Interactable_11(bool value)
	{
		___m_Interactable_11 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_12() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_TargetGraphic_12)); }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * get_m_TargetGraphic_12() const { return ___m_TargetGraphic_12; }
	inline Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 ** get_address_of_m_TargetGraphic_12() { return &___m_TargetGraphic_12; }
	inline void set_m_TargetGraphic_12(Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8 * value)
	{
		___m_TargetGraphic_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_13() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_GroupsAllowInteraction_13)); }
	inline bool get_m_GroupsAllowInteraction_13() const { return ___m_GroupsAllowInteraction_13; }
	inline bool* get_address_of_m_GroupsAllowInteraction_13() { return &___m_GroupsAllowInteraction_13; }
	inline void set_m_GroupsAllowInteraction_13(bool value)
	{
		___m_GroupsAllowInteraction_13 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_14() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CurrentIndex_14)); }
	inline int32_t get_m_CurrentIndex_14() const { return ___m_CurrentIndex_14; }
	inline int32_t* get_address_of_m_CurrentIndex_14() { return &___m_CurrentIndex_14; }
	inline void set_m_CurrentIndex_14(int32_t value)
	{
		___m_CurrentIndex_14 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerInsideU3Ek__BackingField_15)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_15() const { return ___U3CisPointerInsideU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_15() { return &___U3CisPointerInsideU3Ek__BackingField_15; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_15(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3CisPointerDownU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_16() const { return ___U3CisPointerDownU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_16() { return &___U3CisPointerDownU3Ek__BackingField_16; }
	inline void set_U3CisPointerDownU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___U3ChasSelectionU3Ek__BackingField_17)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_17() const { return ___U3ChasSelectionU3Ek__BackingField_17; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_17() { return &___U3ChasSelectionU3Ek__BackingField_17; }
	inline void set_U3ChasSelectionU3Ek__BackingField_17(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_18() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A, ___m_CanvasGroupCache_18)); }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * get_m_CanvasGroupCache_18() const { return ___m_CanvasGroupCache_18; }
	inline List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A ** get_address_of_m_CanvasGroupCache_18() { return &___m_CanvasGroupCache_18; }
	inline void set_m_CanvasGroupCache_18(List_1_tE7746C234F913BA0579DAC892E7288A1C7664A0A * value)
	{
		___m_CanvasGroupCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_18), (void*)value);
	}
};

struct Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_t98F7C5A863B20CD5DBE49CE288038BA954C83F02* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// WeaponRifle
struct  WeaponRifle_t68B5D7472A8059680D858F6CDDBB3D36DA30D956  : public Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9
{
public:

public:
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F  : public Graphic_tBA2C3EF11D3DAEBB57F6879AB0BB4F8BD40D00D8
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_25;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_MaskMaterial_26;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * ___m_ParentMask_27;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_29;
	// UnityEngine.UI.MaskableGraphic_CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * ___m_OnCullStateChanged_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_31;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_32;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_Corners_33;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_25() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculateStencil_25)); }
	inline bool get_m_ShouldRecalculateStencil_25() const { return ___m_ShouldRecalculateStencil_25; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_25() { return &___m_ShouldRecalculateStencil_25; }
	inline void set_m_ShouldRecalculateStencil_25(bool value)
	{
		___m_ShouldRecalculateStencil_25 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_MaskMaterial_26)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_MaskMaterial_26() const { return ___m_MaskMaterial_26; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_MaskMaterial_26() { return &___m_MaskMaterial_26; }
	inline void set_m_MaskMaterial_26(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_MaskMaterial_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ParentMask_27)); }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * get_m_ParentMask_27() const { return ___m_ParentMask_27; }
	inline RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B ** get_address_of_m_ParentMask_27() { return &___m_ParentMask_27; }
	inline void set_m_ParentMask_27(RectMask2D_tF2CF19F2A4FE2D2FFC7E6F7809374757CA2F377B * value)
	{
		___m_ParentMask_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Maskable_28)); }
	inline bool get_m_Maskable_28() const { return ___m_Maskable_28; }
	inline bool* get_address_of_m_Maskable_28() { return &___m_Maskable_28; }
	inline void set_m_Maskable_28(bool value)
	{
		___m_Maskable_28 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_IncludeForMasking_29)); }
	inline bool get_m_IncludeForMasking_29() const { return ___m_IncludeForMasking_29; }
	inline bool* get_address_of_m_IncludeForMasking_29() { return &___m_IncludeForMasking_29; }
	inline void set_m_IncludeForMasking_29(bool value)
	{
		___m_IncludeForMasking_29 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_OnCullStateChanged_30)); }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * get_m_OnCullStateChanged_30() const { return ___m_OnCullStateChanged_30; }
	inline CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 ** get_address_of_m_OnCullStateChanged_30() { return &___m_OnCullStateChanged_30; }
	inline void set_m_OnCullStateChanged_30(CullStateChangedEvent_t6BC3E87DBC04B585798460D55F56B86C23B62FE4 * value)
	{
		___m_OnCullStateChanged_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_ShouldRecalculate_31)); }
	inline bool get_m_ShouldRecalculate_31() const { return ___m_ShouldRecalculate_31; }
	inline bool* get_address_of_m_ShouldRecalculate_31() { return &___m_ShouldRecalculate_31; }
	inline void set_m_ShouldRecalculate_31(bool value)
	{
		___m_ShouldRecalculate_31 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_StencilValue_32)); }
	inline int32_t get_m_StencilValue_32() const { return ___m_StencilValue_32; }
	inline int32_t* get_address_of_m_StencilValue_32() { return &___m_StencilValue_32; }
	inline void set_m_StencilValue_32(int32_t value)
	{
		___m_StencilValue_32 = value;
	}

	inline static int32_t get_offset_of_m_Corners_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F, ___m_Corners_33)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_Corners_33() const { return ___m_Corners_33; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_Corners_33() { return &___m_Corners_33; }
	inline void set_m_Corners_33(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_Corners_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_33), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09  : public Selectable_tAA9065030FE0468018DEC880302F95FEA9C0133A
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillRect_19;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleRect_20;
	// UnityEngine.UI.Slider_Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_22;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_23;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_24;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_25;
	// UnityEngine.UI.Slider_SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * ___m_OnValueChanged_26;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * ___m_FillImage_27;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_FillTransform_28;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_FillContainerRect_29;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_HandleTransform_30;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_HandleContainerRect_31;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_Offset_32;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  ___m_Tracker_33;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_34;

public:
	inline static int32_t get_offset_of_m_FillRect_19() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillRect_19)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillRect_19() const { return ___m_FillRect_19; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillRect_19() { return &___m_FillRect_19; }
	inline void set_m_FillRect_19(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillRect_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_20() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleRect_20)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleRect_20() const { return ___m_HandleRect_20; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleRect_20() { return &___m_HandleRect_20; }
	inline void set_m_HandleRect_20(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_21() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Direction_21)); }
	inline int32_t get_m_Direction_21() const { return ___m_Direction_21; }
	inline int32_t* get_address_of_m_Direction_21() { return &___m_Direction_21; }
	inline void set_m_Direction_21(int32_t value)
	{
		___m_Direction_21 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_22() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MinValue_22)); }
	inline float get_m_MinValue_22() const { return ___m_MinValue_22; }
	inline float* get_address_of_m_MinValue_22() { return &___m_MinValue_22; }
	inline void set_m_MinValue_22(float value)
	{
		___m_MinValue_22 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_23() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_MaxValue_23)); }
	inline float get_m_MaxValue_23() const { return ___m_MaxValue_23; }
	inline float* get_address_of_m_MaxValue_23() { return &___m_MaxValue_23; }
	inline void set_m_MaxValue_23(float value)
	{
		___m_MaxValue_23 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_24() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_WholeNumbers_24)); }
	inline bool get_m_WholeNumbers_24() const { return ___m_WholeNumbers_24; }
	inline bool* get_address_of_m_WholeNumbers_24() { return &___m_WholeNumbers_24; }
	inline void set_m_WholeNumbers_24(bool value)
	{
		___m_WholeNumbers_24 = value;
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Value_25)); }
	inline float get_m_Value_25() const { return ___m_Value_25; }
	inline float* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(float value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_26() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_OnValueChanged_26)); }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * get_m_OnValueChanged_26() const { return ___m_OnValueChanged_26; }
	inline SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C ** get_address_of_m_OnValueChanged_26() { return &___m_OnValueChanged_26; }
	inline void set_m_OnValueChanged_26(SliderEvent_t64A824F56F80FC8E2F233F0A0FB0821702DF416C * value)
	{
		___m_OnValueChanged_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_27() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillImage_27)); }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * get_m_FillImage_27() const { return ___m_FillImage_27; }
	inline Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E ** get_address_of_m_FillImage_27() { return &___m_FillImage_27; }
	inline void set_m_FillImage_27(Image_t18FED07D8646917E1C563745518CF3DD57FF0B3E * value)
	{
		___m_FillImage_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_28() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillTransform_28)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_FillTransform_28() const { return ___m_FillTransform_28; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_FillTransform_28() { return &___m_FillTransform_28; }
	inline void set_m_FillTransform_28(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_FillTransform_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_29() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_FillContainerRect_29)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_FillContainerRect_29() const { return ___m_FillContainerRect_29; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_FillContainerRect_29() { return &___m_FillContainerRect_29; }
	inline void set_m_FillContainerRect_29(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_FillContainerRect_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_30() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleTransform_30)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_HandleTransform_30() const { return ___m_HandleTransform_30; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_HandleTransform_30() { return &___m_HandleTransform_30; }
	inline void set_m_HandleTransform_30(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_HandleTransform_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_31() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_HandleContainerRect_31)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_HandleContainerRect_31() const { return ___m_HandleContainerRect_31; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_HandleContainerRect_31() { return &___m_HandleContainerRect_31; }
	inline void set_m_HandleContainerRect_31(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_HandleContainerRect_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_32() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Offset_32)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_Offset_32() const { return ___m_Offset_32; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_Offset_32() { return &___m_Offset_32; }
	inline void set_m_Offset_32(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_Offset_32 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_33() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_Tracker_33)); }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  get_m_Tracker_33() const { return ___m_Tracker_33; }
	inline DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03 * get_address_of_m_Tracker_33() { return &___m_Tracker_33; }
	inline void set_m_Tracker_33(DrivenRectTransformTracker_tB8FBBE24EEE9618CA32E4B3CF52F4AD7FDDEBE03  value)
	{
		___m_Tracker_33 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_34() { return static_cast<int32_t>(offsetof(Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09, ___m_DelayedUpdateVisuals_34)); }
	inline bool get_m_DelayedUpdateVisuals_34() const { return ___m_DelayedUpdateVisuals_34; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_34() { return &___m_DelayedUpdateVisuals_34; }
	inline void set_m_DelayedUpdateVisuals_34(bool value)
	{
		___m_DelayedUpdateVisuals_34 = value;
	}
};


// TMPro.TMP_Text
struct  TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7  : public MaskableGraphic_tDA46A5925C6A2101217C9F52C855B5C1A36A7A0F
{
public:
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_34;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_35;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_fontAsset_36;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * ___m_currentFontAsset_37;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_38;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_sharedMaterial_39;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_currentMaterial_40;
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* ___m_materialReferences_41;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * ___m_materialReferenceIndexLookup_42;
	// TMPro.TMP_RichTextTagStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  ___m_materialReferenceStack_43;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_44;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontSharedMaterials_45;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_fontMaterial_46;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* ___m_fontMaterials_47;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_48;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_fontColor32_49;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___m_fontColor_50;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_underlineColor_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_strikethroughColor_53;
	// UnityEngine.Color32 TMPro.TMP_Text::m_highlightColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_highlightColor_54;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_highlightPadding
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_highlightPadding_55;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_56;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_57;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  ___m_fontColorGradient_58;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_fontColorGradientPreset_59;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_spriteAsset_60;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_61;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_62;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_spriteColor_63;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_faceColor_65;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_outlineColor_66;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_67;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_68;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_69;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_70;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_sizeStack_71;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_72;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_73;
	// TMPro.TMP_RichTextTagStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  ___m_FontWeightStack_74;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_75;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_76;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_77;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_78;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_79;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_80;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_81;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  ___m_fontStyleStack_82;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_83;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_84;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_85;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TextAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  ___m_lineJustificationStack_86;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_textContainerLocalCorners_87;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_88;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_89;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_90;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_91;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_92;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_93;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_94;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_95;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_96;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_97;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_98;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_99;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_100;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_101;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_102;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_103;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_104;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_105;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * ___m_linkedTextComponent_106;
	// System.Boolean TMPro.TMP_Text::m_isLinkedTextComponent
	bool ___m_isLinkedTextComponent_107;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_108;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_109;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_110;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_111;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_112;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_113;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_114;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_115;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_116;
	// System.Boolean TMPro.TMP_Text::m_ignoreRectMaskCulling
	bool ___m_ignoreRectMaskCulling_117;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_118;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_119;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_120;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_121;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_122;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_123;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_124;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_125;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_126;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_127;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_128;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_129;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_130;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_131;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_margin_132;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_133;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_134;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_135;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_136;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_137;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * ___m_textInfo_138;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_139;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_140;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___m_transform_141;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * ___m_rectTransform_142;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_143;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_144;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * ___m_mesh_145;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_146;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * ___m_spriteAnimator_147;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_148;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_149;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_150;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_151;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_152;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_153;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * ___m_LayoutElement_154;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_155;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_156;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_157;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_158;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_159;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_160;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_161;
	// System.Int32 TMPro.TMP_Text::m_recursiveCount
	int32_t ___m_recursiveCount_162;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_163;
	// System.Boolean TMPro.TMP_Text::m_isCalculateSizeRequired
	bool ___m_isCalculateSizeRequired_164;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_165;
	// System.Boolean TMPro.TMP_Text::m_verticesAlreadyDirty
	bool ___m_verticesAlreadyDirty_166;
	// System.Boolean TMPro.TMP_Text::m_layoutAlreadyDirty
	bool ___m_layoutAlreadyDirty_167;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_168;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_169;
	// System.Boolean TMPro.TMP_Text::m_isInputParsingRequired
	bool ___m_isInputParsingRequired_170;
	// TMPro.TMP_Text_TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_171;
	// System.String TMPro.TMP_Text::old_text
	String_t* ___old_text_172;
	// System.Single TMPro.TMP_Text::m_fontScale
	float ___m_fontScale_173;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_174;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_htmlTag_175;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* ___m_xmlAttribute_176;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___m_attributeParameterValues_177;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_178;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_179;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_indentStack_180;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_181;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_182;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_FXMatrix_183;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_184;
	// TMPro.TMP_Text_UnicodeChar[] TMPro.TMP_Text::m_TextParsingBuffer
	UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* ___m_TextParsingBuffer_185;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* ___m_internalCharacterInfo_186;
	// System.Char[] TMPro.TMP_Text::m_input_CharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___m_input_CharArray_187;
	// System.Int32 TMPro.TMP_Text::m_charArray_Length
	int32_t ___m_charArray_Length_188;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedWordWrapState_190;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  ___m_SavedLineState_191;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_192;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_193;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_194;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_195;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_196;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_197;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_198;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_199;
	// System.Single TMPro.TMP_Text::m_maxAscender
	float ___m_maxAscender_200;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_201;
	// System.Single TMPro.TMP_Text::m_maxDescender
	float ___m_maxDescender_202;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_203;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_204;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_205;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_206;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  ___m_meshExtents_207;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___m_htmlColor_208;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_colorStack_209;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_underlineColorStack_210;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_strikethroughColorStack_211;
	// TMPro.TMP_RichTextTagStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_highlightColorStack
	TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  ___m_highlightColorStack_212;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * ___m_colorGradientPreset_213;
	// TMPro.TMP_RichTextTagStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  ___m_colorGradientStack_214;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_215;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_216;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_styleStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___m_styleStack_217;
	// TMPro.TMP_RichTextTagStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  ___m_actionStack_218;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_219;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_220;
	// TMPro.TMP_RichTextTagStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  ___m_baselineOffsetStack_221;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_222;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_223;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * ___m_cached_TextElement_224;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Underline_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Underline_Character_225;
	// TMPro.TMP_Character TMPro.TMP_Text::m_cached_Ellipsis_Character
	TMP_Character_t1875AACA978396521498D6A699052C187903553D * ___m_cached_Ellipsis_Character_226;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_defaultSpriteAsset_227;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * ___m_currentSpriteAsset_228;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_229;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_230;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_231;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_232;
	// System.Single[] TMPro.TMP_Text::k_Power
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___k_Power_233;

public:
	inline static int32_t get_offset_of_m_text_34() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_text_34)); }
	inline String_t* get_m_text_34() const { return ___m_text_34; }
	inline String_t** get_address_of_m_text_34() { return &___m_text_34; }
	inline void set_m_text_34(String_t* value)
	{
		___m_text_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_text_34), (void*)value);
	}

	inline static int32_t get_offset_of_m_isRightToLeft_35() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRightToLeft_35)); }
	inline bool get_m_isRightToLeft_35() const { return ___m_isRightToLeft_35; }
	inline bool* get_address_of_m_isRightToLeft_35() { return &___m_isRightToLeft_35; }
	inline void set_m_isRightToLeft_35(bool value)
	{
		___m_isRightToLeft_35 = value;
	}

	inline static int32_t get_offset_of_m_fontAsset_36() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontAsset_36)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_fontAsset_36() const { return ___m_fontAsset_36; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_fontAsset_36() { return &___m_fontAsset_36; }
	inline void set_m_fontAsset_36(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_fontAsset_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontAsset_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentFontAsset_37() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontAsset_37)); }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * get_m_currentFontAsset_37() const { return ___m_currentFontAsset_37; }
	inline TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C ** get_address_of_m_currentFontAsset_37() { return &___m_currentFontAsset_37; }
	inline void set_m_currentFontAsset_37(TMP_FontAsset_t44D2006105B39FB33AE5A0ADF07A7EF36C72385C * value)
	{
		___m_currentFontAsset_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentFontAsset_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_isSDFShader_38() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isSDFShader_38)); }
	inline bool get_m_isSDFShader_38() const { return ___m_isSDFShader_38; }
	inline bool* get_address_of_m_isSDFShader_38() { return &___m_isSDFShader_38; }
	inline void set_m_isSDFShader_38(bool value)
	{
		___m_isSDFShader_38 = value;
	}

	inline static int32_t get_offset_of_m_sharedMaterial_39() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sharedMaterial_39)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_sharedMaterial_39() const { return ___m_sharedMaterial_39; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_sharedMaterial_39() { return &___m_sharedMaterial_39; }
	inline void set_m_sharedMaterial_39(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_sharedMaterial_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_sharedMaterial_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentMaterial_40() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterial_40)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_currentMaterial_40() const { return ___m_currentMaterial_40; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_currentMaterial_40() { return &___m_currentMaterial_40; }
	inline void set_m_currentMaterial_40(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_currentMaterial_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentMaterial_40), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferences_41() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferences_41)); }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* get_m_materialReferences_41() const { return ___m_materialReferences_41; }
	inline MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B** get_address_of_m_materialReferences_41() { return &___m_materialReferences_41; }
	inline void set_m_materialReferences_41(MaterialReferenceU5BU5D_t01EC9C1C00A504C2EF9FBAF95DE26BB88E9B743B* value)
	{
		___m_materialReferences_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferences_41), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceIndexLookup_42() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceIndexLookup_42)); }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * get_m_materialReferenceIndexLookup_42() const { return ___m_materialReferenceIndexLookup_42; }
	inline Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F ** get_address_of_m_materialReferenceIndexLookup_42() { return &___m_materialReferenceIndexLookup_42; }
	inline void set_m_materialReferenceIndexLookup_42(Dictionary_2_t6567430A4033E968FED88FBBD298DC9D0DFA398F * value)
	{
		___m_materialReferenceIndexLookup_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_materialReferenceIndexLookup_42), (void*)value);
	}

	inline static int32_t get_offset_of_m_materialReferenceStack_43() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_materialReferenceStack_43)); }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  get_m_materialReferenceStack_43() const { return ___m_materialReferenceStack_43; }
	inline TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9 * get_address_of_m_materialReferenceStack_43() { return &___m_materialReferenceStack_43; }
	inline void set_m_materialReferenceStack_43(TMP_RichTextTagStack_1_t9742B1BC2B58D513502935F599F4AF09FFC379A9  value)
	{
		___m_materialReferenceStack_43 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_materialReferenceStack_43))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_materialReferenceStack_43))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_currentMaterialIndex_44() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentMaterialIndex_44)); }
	inline int32_t get_m_currentMaterialIndex_44() const { return ___m_currentMaterialIndex_44; }
	inline int32_t* get_address_of_m_currentMaterialIndex_44() { return &___m_currentMaterialIndex_44; }
	inline void set_m_currentMaterialIndex_44(int32_t value)
	{
		___m_currentMaterialIndex_44 = value;
	}

	inline static int32_t get_offset_of_m_fontSharedMaterials_45() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSharedMaterials_45)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontSharedMaterials_45() const { return ___m_fontSharedMaterials_45; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontSharedMaterials_45() { return &___m_fontSharedMaterials_45; }
	inline void set_m_fontSharedMaterials_45(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontSharedMaterials_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontSharedMaterials_45), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterial_46() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterial_46)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_fontMaterial_46() const { return ___m_fontMaterial_46; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_fontMaterial_46() { return &___m_fontMaterial_46; }
	inline void set_m_fontMaterial_46(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_fontMaterial_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterial_46), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontMaterials_47() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontMaterials_47)); }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* get_m_fontMaterials_47() const { return ___m_fontMaterials_47; }
	inline MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398** get_address_of_m_fontMaterials_47() { return &___m_fontMaterials_47; }
	inline void set_m_fontMaterials_47(MaterialU5BU5D_tD2350F98F2A1BB6C7A5FBFE1474DFC47331AB398* value)
	{
		___m_fontMaterials_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontMaterials_47), (void*)value);
	}

	inline static int32_t get_offset_of_m_isMaterialDirty_48() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isMaterialDirty_48)); }
	inline bool get_m_isMaterialDirty_48() const { return ___m_isMaterialDirty_48; }
	inline bool* get_address_of_m_isMaterialDirty_48() { return &___m_isMaterialDirty_48; }
	inline void set_m_isMaterialDirty_48(bool value)
	{
		___m_isMaterialDirty_48 = value;
	}

	inline static int32_t get_offset_of_m_fontColor32_49() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor32_49)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_fontColor32_49() const { return ___m_fontColor32_49; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_fontColor32_49() { return &___m_fontColor32_49; }
	inline void set_m_fontColor32_49(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_fontColor32_49 = value;
	}

	inline static int32_t get_offset_of_m_fontColor_50() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColor_50)); }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  get_m_fontColor_50() const { return ___m_fontColor_50; }
	inline Color_t119BCA590009762C7223FDD3AF9706653AC84ED2 * get_address_of_m_fontColor_50() { return &___m_fontColor_50; }
	inline void set_m_fontColor_50(Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  value)
	{
		___m_fontColor_50 = value;
	}

	inline static int32_t get_offset_of_m_underlineColor_52() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColor_52)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_underlineColor_52() const { return ___m_underlineColor_52; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_underlineColor_52() { return &___m_underlineColor_52; }
	inline void set_m_underlineColor_52(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_underlineColor_52 = value;
	}

	inline static int32_t get_offset_of_m_strikethroughColor_53() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColor_53)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_strikethroughColor_53() const { return ___m_strikethroughColor_53; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_strikethroughColor_53() { return &___m_strikethroughColor_53; }
	inline void set_m_strikethroughColor_53(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_strikethroughColor_53 = value;
	}

	inline static int32_t get_offset_of_m_highlightColor_54() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColor_54)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_highlightColor_54() const { return ___m_highlightColor_54; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_highlightColor_54() { return &___m_highlightColor_54; }
	inline void set_m_highlightColor_54(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_highlightColor_54 = value;
	}

	inline static int32_t get_offset_of_m_highlightPadding_55() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightPadding_55)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_highlightPadding_55() const { return ___m_highlightPadding_55; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_highlightPadding_55() { return &___m_highlightPadding_55; }
	inline void set_m_highlightPadding_55(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_highlightPadding_55 = value;
	}

	inline static int32_t get_offset_of_m_enableVertexGradient_56() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableVertexGradient_56)); }
	inline bool get_m_enableVertexGradient_56() const { return ___m_enableVertexGradient_56; }
	inline bool* get_address_of_m_enableVertexGradient_56() { return &___m_enableVertexGradient_56; }
	inline void set_m_enableVertexGradient_56(bool value)
	{
		___m_enableVertexGradient_56 = value;
	}

	inline static int32_t get_offset_of_m_colorMode_57() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorMode_57)); }
	inline int32_t get_m_colorMode_57() const { return ___m_colorMode_57; }
	inline int32_t* get_address_of_m_colorMode_57() { return &___m_colorMode_57; }
	inline void set_m_colorMode_57(int32_t value)
	{
		___m_colorMode_57 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradient_58() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradient_58)); }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  get_m_fontColorGradient_58() const { return ___m_fontColorGradient_58; }
	inline VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A * get_address_of_m_fontColorGradient_58() { return &___m_fontColorGradient_58; }
	inline void set_m_fontColorGradient_58(VertexGradient_tDDAAE14E70CADA44B1B69F228CFF837C67EF6F9A  value)
	{
		___m_fontColorGradient_58 = value;
	}

	inline static int32_t get_offset_of_m_fontColorGradientPreset_59() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontColorGradientPreset_59)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_fontColorGradientPreset_59() const { return ___m_fontColorGradientPreset_59; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_fontColorGradientPreset_59() { return &___m_fontColorGradientPreset_59; }
	inline void set_m_fontColorGradientPreset_59(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_fontColorGradientPreset_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_fontColorGradientPreset_59), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteAsset_60() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAsset_60)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_spriteAsset_60() const { return ___m_spriteAsset_60; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_spriteAsset_60() { return &___m_spriteAsset_60; }
	inline void set_m_spriteAsset_60(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_spriteAsset_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAsset_60), (void*)value);
	}

	inline static int32_t get_offset_of_m_tintAllSprites_61() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintAllSprites_61)); }
	inline bool get_m_tintAllSprites_61() const { return ___m_tintAllSprites_61; }
	inline bool* get_address_of_m_tintAllSprites_61() { return &___m_tintAllSprites_61; }
	inline void set_m_tintAllSprites_61(bool value)
	{
		___m_tintAllSprites_61 = value;
	}

	inline static int32_t get_offset_of_m_tintSprite_62() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tintSprite_62)); }
	inline bool get_m_tintSprite_62() const { return ___m_tintSprite_62; }
	inline bool* get_address_of_m_tintSprite_62() { return &___m_tintSprite_62; }
	inline void set_m_tintSprite_62(bool value)
	{
		___m_tintSprite_62 = value;
	}

	inline static int32_t get_offset_of_m_spriteColor_63() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteColor_63)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_spriteColor_63() const { return ___m_spriteColor_63; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_spriteColor_63() { return &___m_spriteColor_63; }
	inline void set_m_spriteColor_63(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_spriteColor_63 = value;
	}

	inline static int32_t get_offset_of_m_overrideHtmlColors_64() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overrideHtmlColors_64)); }
	inline bool get_m_overrideHtmlColors_64() const { return ___m_overrideHtmlColors_64; }
	inline bool* get_address_of_m_overrideHtmlColors_64() { return &___m_overrideHtmlColors_64; }
	inline void set_m_overrideHtmlColors_64(bool value)
	{
		___m_overrideHtmlColors_64 = value;
	}

	inline static int32_t get_offset_of_m_faceColor_65() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_faceColor_65)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_faceColor_65() const { return ___m_faceColor_65; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_faceColor_65() { return &___m_faceColor_65; }
	inline void set_m_faceColor_65(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_faceColor_65 = value;
	}

	inline static int32_t get_offset_of_m_outlineColor_66() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineColor_66)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_outlineColor_66() const { return ___m_outlineColor_66; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_outlineColor_66() { return &___m_outlineColor_66; }
	inline void set_m_outlineColor_66(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_outlineColor_66 = value;
	}

	inline static int32_t get_offset_of_m_outlineWidth_67() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_outlineWidth_67)); }
	inline float get_m_outlineWidth_67() const { return ___m_outlineWidth_67; }
	inline float* get_address_of_m_outlineWidth_67() { return &___m_outlineWidth_67; }
	inline void set_m_outlineWidth_67(float value)
	{
		___m_outlineWidth_67 = value;
	}

	inline static int32_t get_offset_of_m_fontSize_68() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSize_68)); }
	inline float get_m_fontSize_68() const { return ___m_fontSize_68; }
	inline float* get_address_of_m_fontSize_68() { return &___m_fontSize_68; }
	inline void set_m_fontSize_68(float value)
	{
		___m_fontSize_68 = value;
	}

	inline static int32_t get_offset_of_m_currentFontSize_69() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentFontSize_69)); }
	inline float get_m_currentFontSize_69() const { return ___m_currentFontSize_69; }
	inline float* get_address_of_m_currentFontSize_69() { return &___m_currentFontSize_69; }
	inline void set_m_currentFontSize_69(float value)
	{
		___m_currentFontSize_69 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeBase_70() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeBase_70)); }
	inline float get_m_fontSizeBase_70() const { return ___m_fontSizeBase_70; }
	inline float* get_address_of_m_fontSizeBase_70() { return &___m_fontSizeBase_70; }
	inline void set_m_fontSizeBase_70(float value)
	{
		___m_fontSizeBase_70 = value;
	}

	inline static int32_t get_offset_of_m_sizeStack_71() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_sizeStack_71)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_sizeStack_71() const { return ___m_sizeStack_71; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_sizeStack_71() { return &___m_sizeStack_71; }
	inline void set_m_sizeStack_71(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_sizeStack_71 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_sizeStack_71))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_fontWeight_72() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontWeight_72)); }
	inline int32_t get_m_fontWeight_72() const { return ___m_fontWeight_72; }
	inline int32_t* get_address_of_m_fontWeight_72() { return &___m_fontWeight_72; }
	inline void set_m_fontWeight_72(int32_t value)
	{
		___m_fontWeight_72 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightInternal_73() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightInternal_73)); }
	inline int32_t get_m_FontWeightInternal_73() const { return ___m_FontWeightInternal_73; }
	inline int32_t* get_address_of_m_FontWeightInternal_73() { return &___m_FontWeightInternal_73; }
	inline void set_m_FontWeightInternal_73(int32_t value)
	{
		___m_FontWeightInternal_73 = value;
	}

	inline static int32_t get_offset_of_m_FontWeightStack_74() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontWeightStack_74)); }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  get_m_FontWeightStack_74() const { return ___m_FontWeightStack_74; }
	inline TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B * get_address_of_m_FontWeightStack_74() { return &___m_FontWeightStack_74; }
	inline void set_m_FontWeightStack_74(TMP_RichTextTagStack_1_t9B6C6D23490A525AEA83F4301C7523574055098B  value)
	{
		___m_FontWeightStack_74 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_FontWeightStack_74))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_enableAutoSizing_75() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableAutoSizing_75)); }
	inline bool get_m_enableAutoSizing_75() const { return ___m_enableAutoSizing_75; }
	inline bool* get_address_of_m_enableAutoSizing_75() { return &___m_enableAutoSizing_75; }
	inline void set_m_enableAutoSizing_75(bool value)
	{
		___m_enableAutoSizing_75 = value;
	}

	inline static int32_t get_offset_of_m_maxFontSize_76() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxFontSize_76)); }
	inline float get_m_maxFontSize_76() const { return ___m_maxFontSize_76; }
	inline float* get_address_of_m_maxFontSize_76() { return &___m_maxFontSize_76; }
	inline void set_m_maxFontSize_76(float value)
	{
		___m_maxFontSize_76 = value;
	}

	inline static int32_t get_offset_of_m_minFontSize_77() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minFontSize_77)); }
	inline float get_m_minFontSize_77() const { return ___m_minFontSize_77; }
	inline float* get_address_of_m_minFontSize_77() { return &___m_minFontSize_77; }
	inline void set_m_minFontSize_77(float value)
	{
		___m_minFontSize_77 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMin_78() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMin_78)); }
	inline float get_m_fontSizeMin_78() const { return ___m_fontSizeMin_78; }
	inline float* get_address_of_m_fontSizeMin_78() { return &___m_fontSizeMin_78; }
	inline void set_m_fontSizeMin_78(float value)
	{
		___m_fontSizeMin_78 = value;
	}

	inline static int32_t get_offset_of_m_fontSizeMax_79() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontSizeMax_79)); }
	inline float get_m_fontSizeMax_79() const { return ___m_fontSizeMax_79; }
	inline float* get_address_of_m_fontSizeMax_79() { return &___m_fontSizeMax_79; }
	inline void set_m_fontSizeMax_79(float value)
	{
		___m_fontSizeMax_79 = value;
	}

	inline static int32_t get_offset_of_m_fontStyle_80() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyle_80)); }
	inline int32_t get_m_fontStyle_80() const { return ___m_fontStyle_80; }
	inline int32_t* get_address_of_m_fontStyle_80() { return &___m_fontStyle_80; }
	inline void set_m_fontStyle_80(int32_t value)
	{
		___m_fontStyle_80 = value;
	}

	inline static int32_t get_offset_of_m_FontStyleInternal_81() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FontStyleInternal_81)); }
	inline int32_t get_m_FontStyleInternal_81() const { return ___m_FontStyleInternal_81; }
	inline int32_t* get_address_of_m_FontStyleInternal_81() { return &___m_FontStyleInternal_81; }
	inline void set_m_FontStyleInternal_81(int32_t value)
	{
		___m_FontStyleInternal_81 = value;
	}

	inline static int32_t get_offset_of_m_fontStyleStack_82() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontStyleStack_82)); }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  get_m_fontStyleStack_82() const { return ___m_fontStyleStack_82; }
	inline TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84 * get_address_of_m_fontStyleStack_82() { return &___m_fontStyleStack_82; }
	inline void set_m_fontStyleStack_82(TMP_FontStyleStack_tC7146DA5AD4540B2C8733862D785AD50AD229E84  value)
	{
		___m_fontStyleStack_82 = value;
	}

	inline static int32_t get_offset_of_m_isUsingBold_83() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingBold_83)); }
	inline bool get_m_isUsingBold_83() const { return ___m_isUsingBold_83; }
	inline bool* get_address_of_m_isUsingBold_83() { return &___m_isUsingBold_83; }
	inline void set_m_isUsingBold_83(bool value)
	{
		___m_isUsingBold_83 = value;
	}

	inline static int32_t get_offset_of_m_textAlignment_84() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textAlignment_84)); }
	inline int32_t get_m_textAlignment_84() const { return ___m_textAlignment_84; }
	inline int32_t* get_address_of_m_textAlignment_84() { return &___m_textAlignment_84; }
	inline void set_m_textAlignment_84(int32_t value)
	{
		___m_textAlignment_84 = value;
	}

	inline static int32_t get_offset_of_m_lineJustification_85() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustification_85)); }
	inline int32_t get_m_lineJustification_85() const { return ___m_lineJustification_85; }
	inline int32_t* get_address_of_m_lineJustification_85() { return &___m_lineJustification_85; }
	inline void set_m_lineJustification_85(int32_t value)
	{
		___m_lineJustification_85 = value;
	}

	inline static int32_t get_offset_of_m_lineJustificationStack_86() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineJustificationStack_86)); }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  get_m_lineJustificationStack_86() const { return ___m_lineJustificationStack_86; }
	inline TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115 * get_address_of_m_lineJustificationStack_86() { return &___m_lineJustificationStack_86; }
	inline void set_m_lineJustificationStack_86(TMP_RichTextTagStack_1_t435AA844A7DBDA7E54BCDA3C53622D4B28952115  value)
	{
		___m_lineJustificationStack_86 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_lineJustificationStack_86))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_textContainerLocalCorners_87() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textContainerLocalCorners_87)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_textContainerLocalCorners_87() const { return ___m_textContainerLocalCorners_87; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_textContainerLocalCorners_87() { return &___m_textContainerLocalCorners_87; }
	inline void set_m_textContainerLocalCorners_87(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_textContainerLocalCorners_87 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textContainerLocalCorners_87), (void*)value);
	}

	inline static int32_t get_offset_of_m_characterSpacing_88() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterSpacing_88)); }
	inline float get_m_characterSpacing_88() const { return ___m_characterSpacing_88; }
	inline float* get_address_of_m_characterSpacing_88() { return &___m_characterSpacing_88; }
	inline void set_m_characterSpacing_88(float value)
	{
		___m_characterSpacing_88 = value;
	}

	inline static int32_t get_offset_of_m_cSpacing_89() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cSpacing_89)); }
	inline float get_m_cSpacing_89() const { return ___m_cSpacing_89; }
	inline float* get_address_of_m_cSpacing_89() { return &___m_cSpacing_89; }
	inline void set_m_cSpacing_89(float value)
	{
		___m_cSpacing_89 = value;
	}

	inline static int32_t get_offset_of_m_monoSpacing_90() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_monoSpacing_90)); }
	inline float get_m_monoSpacing_90() const { return ___m_monoSpacing_90; }
	inline float* get_address_of_m_monoSpacing_90() { return &___m_monoSpacing_90; }
	inline void set_m_monoSpacing_90(float value)
	{
		___m_monoSpacing_90 = value;
	}

	inline static int32_t get_offset_of_m_wordSpacing_91() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordSpacing_91)); }
	inline float get_m_wordSpacing_91() const { return ___m_wordSpacing_91; }
	inline float* get_address_of_m_wordSpacing_91() { return &___m_wordSpacing_91; }
	inline void set_m_wordSpacing_91(float value)
	{
		___m_wordSpacing_91 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacing_92() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacing_92)); }
	inline float get_m_lineSpacing_92() const { return ___m_lineSpacing_92; }
	inline float* get_address_of_m_lineSpacing_92() { return &___m_lineSpacing_92; }
	inline void set_m_lineSpacing_92(float value)
	{
		___m_lineSpacing_92 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingDelta_93() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingDelta_93)); }
	inline float get_m_lineSpacingDelta_93() const { return ___m_lineSpacingDelta_93; }
	inline float* get_address_of_m_lineSpacingDelta_93() { return &___m_lineSpacingDelta_93; }
	inline void set_m_lineSpacingDelta_93(float value)
	{
		___m_lineSpacingDelta_93 = value;
	}

	inline static int32_t get_offset_of_m_lineHeight_94() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineHeight_94)); }
	inline float get_m_lineHeight_94() const { return ___m_lineHeight_94; }
	inline float* get_address_of_m_lineHeight_94() { return &___m_lineHeight_94; }
	inline void set_m_lineHeight_94(float value)
	{
		___m_lineHeight_94 = value;
	}

	inline static int32_t get_offset_of_m_lineSpacingMax_95() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineSpacingMax_95)); }
	inline float get_m_lineSpacingMax_95() const { return ___m_lineSpacingMax_95; }
	inline float* get_address_of_m_lineSpacingMax_95() { return &___m_lineSpacingMax_95; }
	inline void set_m_lineSpacingMax_95(float value)
	{
		___m_lineSpacingMax_95 = value;
	}

	inline static int32_t get_offset_of_m_paragraphSpacing_96() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_paragraphSpacing_96)); }
	inline float get_m_paragraphSpacing_96() const { return ___m_paragraphSpacing_96; }
	inline float* get_address_of_m_paragraphSpacing_96() { return &___m_paragraphSpacing_96; }
	inline void set_m_paragraphSpacing_96(float value)
	{
		___m_paragraphSpacing_96 = value;
	}

	inline static int32_t get_offset_of_m_charWidthMaxAdj_97() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthMaxAdj_97)); }
	inline float get_m_charWidthMaxAdj_97() const { return ___m_charWidthMaxAdj_97; }
	inline float* get_address_of_m_charWidthMaxAdj_97() { return &___m_charWidthMaxAdj_97; }
	inline void set_m_charWidthMaxAdj_97(float value)
	{
		___m_charWidthMaxAdj_97 = value;
	}

	inline static int32_t get_offset_of_m_charWidthAdjDelta_98() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charWidthAdjDelta_98)); }
	inline float get_m_charWidthAdjDelta_98() const { return ___m_charWidthAdjDelta_98; }
	inline float* get_address_of_m_charWidthAdjDelta_98() { return &___m_charWidthAdjDelta_98; }
	inline void set_m_charWidthAdjDelta_98(float value)
	{
		___m_charWidthAdjDelta_98 = value;
	}

	inline static int32_t get_offset_of_m_enableWordWrapping_99() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableWordWrapping_99)); }
	inline bool get_m_enableWordWrapping_99() const { return ___m_enableWordWrapping_99; }
	inline bool* get_address_of_m_enableWordWrapping_99() { return &___m_enableWordWrapping_99; }
	inline void set_m_enableWordWrapping_99(bool value)
	{
		___m_enableWordWrapping_99 = value;
	}

	inline static int32_t get_offset_of_m_isCharacterWrappingEnabled_100() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCharacterWrappingEnabled_100)); }
	inline bool get_m_isCharacterWrappingEnabled_100() const { return ___m_isCharacterWrappingEnabled_100; }
	inline bool* get_address_of_m_isCharacterWrappingEnabled_100() { return &___m_isCharacterWrappingEnabled_100; }
	inline void set_m_isCharacterWrappingEnabled_100(bool value)
	{
		___m_isCharacterWrappingEnabled_100 = value;
	}

	inline static int32_t get_offset_of_m_isNonBreakingSpace_101() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNonBreakingSpace_101)); }
	inline bool get_m_isNonBreakingSpace_101() const { return ___m_isNonBreakingSpace_101; }
	inline bool* get_address_of_m_isNonBreakingSpace_101() { return &___m_isNonBreakingSpace_101; }
	inline void set_m_isNonBreakingSpace_101(bool value)
	{
		___m_isNonBreakingSpace_101 = value;
	}

	inline static int32_t get_offset_of_m_isIgnoringAlignment_102() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isIgnoringAlignment_102)); }
	inline bool get_m_isIgnoringAlignment_102() const { return ___m_isIgnoringAlignment_102; }
	inline bool* get_address_of_m_isIgnoringAlignment_102() { return &___m_isIgnoringAlignment_102; }
	inline void set_m_isIgnoringAlignment_102(bool value)
	{
		___m_isIgnoringAlignment_102 = value;
	}

	inline static int32_t get_offset_of_m_wordWrappingRatios_103() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_wordWrappingRatios_103)); }
	inline float get_m_wordWrappingRatios_103() const { return ___m_wordWrappingRatios_103; }
	inline float* get_address_of_m_wordWrappingRatios_103() { return &___m_wordWrappingRatios_103; }
	inline void set_m_wordWrappingRatios_103(float value)
	{
		___m_wordWrappingRatios_103 = value;
	}

	inline static int32_t get_offset_of_m_overflowMode_104() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_overflowMode_104)); }
	inline int32_t get_m_overflowMode_104() const { return ___m_overflowMode_104; }
	inline int32_t* get_address_of_m_overflowMode_104() { return &___m_overflowMode_104; }
	inline void set_m_overflowMode_104(int32_t value)
	{
		___m_overflowMode_104 = value;
	}

	inline static int32_t get_offset_of_m_firstOverflowCharacterIndex_105() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstOverflowCharacterIndex_105)); }
	inline int32_t get_m_firstOverflowCharacterIndex_105() const { return ___m_firstOverflowCharacterIndex_105; }
	inline int32_t* get_address_of_m_firstOverflowCharacterIndex_105() { return &___m_firstOverflowCharacterIndex_105; }
	inline void set_m_firstOverflowCharacterIndex_105(int32_t value)
	{
		___m_firstOverflowCharacterIndex_105 = value;
	}

	inline static int32_t get_offset_of_m_linkedTextComponent_106() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_linkedTextComponent_106)); }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * get_m_linkedTextComponent_106() const { return ___m_linkedTextComponent_106; }
	inline TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 ** get_address_of_m_linkedTextComponent_106() { return &___m_linkedTextComponent_106; }
	inline void set_m_linkedTextComponent_106(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * value)
	{
		___m_linkedTextComponent_106 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_linkedTextComponent_106), (void*)value);
	}

	inline static int32_t get_offset_of_m_isLinkedTextComponent_107() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLinkedTextComponent_107)); }
	inline bool get_m_isLinkedTextComponent_107() const { return ___m_isLinkedTextComponent_107; }
	inline bool* get_address_of_m_isLinkedTextComponent_107() { return &___m_isLinkedTextComponent_107; }
	inline void set_m_isLinkedTextComponent_107(bool value)
	{
		___m_isLinkedTextComponent_107 = value;
	}

	inline static int32_t get_offset_of_m_isTextTruncated_108() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isTextTruncated_108)); }
	inline bool get_m_isTextTruncated_108() const { return ___m_isTextTruncated_108; }
	inline bool* get_address_of_m_isTextTruncated_108() { return &___m_isTextTruncated_108; }
	inline void set_m_isTextTruncated_108(bool value)
	{
		___m_isTextTruncated_108 = value;
	}

	inline static int32_t get_offset_of_m_enableKerning_109() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableKerning_109)); }
	inline bool get_m_enableKerning_109() const { return ___m_enableKerning_109; }
	inline bool* get_address_of_m_enableKerning_109() { return &___m_enableKerning_109; }
	inline void set_m_enableKerning_109(bool value)
	{
		___m_enableKerning_109 = value;
	}

	inline static int32_t get_offset_of_m_enableExtraPadding_110() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_enableExtraPadding_110)); }
	inline bool get_m_enableExtraPadding_110() const { return ___m_enableExtraPadding_110; }
	inline bool* get_address_of_m_enableExtraPadding_110() { return &___m_enableExtraPadding_110; }
	inline void set_m_enableExtraPadding_110(bool value)
	{
		___m_enableExtraPadding_110 = value;
	}

	inline static int32_t get_offset_of_checkPaddingRequired_111() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___checkPaddingRequired_111)); }
	inline bool get_checkPaddingRequired_111() const { return ___checkPaddingRequired_111; }
	inline bool* get_address_of_checkPaddingRequired_111() { return &___checkPaddingRequired_111; }
	inline void set_checkPaddingRequired_111(bool value)
	{
		___checkPaddingRequired_111 = value;
	}

	inline static int32_t get_offset_of_m_isRichText_112() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isRichText_112)); }
	inline bool get_m_isRichText_112() const { return ___m_isRichText_112; }
	inline bool* get_address_of_m_isRichText_112() { return &___m_isRichText_112; }
	inline void set_m_isRichText_112(bool value)
	{
		___m_isRichText_112 = value;
	}

	inline static int32_t get_offset_of_m_parseCtrlCharacters_113() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_parseCtrlCharacters_113)); }
	inline bool get_m_parseCtrlCharacters_113() const { return ___m_parseCtrlCharacters_113; }
	inline bool* get_address_of_m_parseCtrlCharacters_113() { return &___m_parseCtrlCharacters_113; }
	inline void set_m_parseCtrlCharacters_113(bool value)
	{
		___m_parseCtrlCharacters_113 = value;
	}

	inline static int32_t get_offset_of_m_isOverlay_114() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOverlay_114)); }
	inline bool get_m_isOverlay_114() const { return ___m_isOverlay_114; }
	inline bool* get_address_of_m_isOverlay_114() { return &___m_isOverlay_114; }
	inline void set_m_isOverlay_114(bool value)
	{
		___m_isOverlay_114 = value;
	}

	inline static int32_t get_offset_of_m_isOrthographic_115() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isOrthographic_115)); }
	inline bool get_m_isOrthographic_115() const { return ___m_isOrthographic_115; }
	inline bool* get_address_of_m_isOrthographic_115() { return &___m_isOrthographic_115; }
	inline void set_m_isOrthographic_115(bool value)
	{
		___m_isOrthographic_115 = value;
	}

	inline static int32_t get_offset_of_m_isCullingEnabled_116() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCullingEnabled_116)); }
	inline bool get_m_isCullingEnabled_116() const { return ___m_isCullingEnabled_116; }
	inline bool* get_address_of_m_isCullingEnabled_116() { return &___m_isCullingEnabled_116; }
	inline void set_m_isCullingEnabled_116(bool value)
	{
		___m_isCullingEnabled_116 = value;
	}

	inline static int32_t get_offset_of_m_ignoreRectMaskCulling_117() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreRectMaskCulling_117)); }
	inline bool get_m_ignoreRectMaskCulling_117() const { return ___m_ignoreRectMaskCulling_117; }
	inline bool* get_address_of_m_ignoreRectMaskCulling_117() { return &___m_ignoreRectMaskCulling_117; }
	inline void set_m_ignoreRectMaskCulling_117(bool value)
	{
		___m_ignoreRectMaskCulling_117 = value;
	}

	inline static int32_t get_offset_of_m_ignoreCulling_118() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreCulling_118)); }
	inline bool get_m_ignoreCulling_118() const { return ___m_ignoreCulling_118; }
	inline bool* get_address_of_m_ignoreCulling_118() { return &___m_ignoreCulling_118; }
	inline void set_m_ignoreCulling_118(bool value)
	{
		___m_ignoreCulling_118 = value;
	}

	inline static int32_t get_offset_of_m_horizontalMapping_119() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_horizontalMapping_119)); }
	inline int32_t get_m_horizontalMapping_119() const { return ___m_horizontalMapping_119; }
	inline int32_t* get_address_of_m_horizontalMapping_119() { return &___m_horizontalMapping_119; }
	inline void set_m_horizontalMapping_119(int32_t value)
	{
		___m_horizontalMapping_119 = value;
	}

	inline static int32_t get_offset_of_m_verticalMapping_120() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticalMapping_120)); }
	inline int32_t get_m_verticalMapping_120() const { return ___m_verticalMapping_120; }
	inline int32_t* get_address_of_m_verticalMapping_120() { return &___m_verticalMapping_120; }
	inline void set_m_verticalMapping_120(int32_t value)
	{
		___m_verticalMapping_120 = value;
	}

	inline static int32_t get_offset_of_m_uvLineOffset_121() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_uvLineOffset_121)); }
	inline float get_m_uvLineOffset_121() const { return ___m_uvLineOffset_121; }
	inline float* get_address_of_m_uvLineOffset_121() { return &___m_uvLineOffset_121; }
	inline void set_m_uvLineOffset_121(float value)
	{
		___m_uvLineOffset_121 = value;
	}

	inline static int32_t get_offset_of_m_renderMode_122() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderMode_122)); }
	inline int32_t get_m_renderMode_122() const { return ___m_renderMode_122; }
	inline int32_t* get_address_of_m_renderMode_122() { return &___m_renderMode_122; }
	inline void set_m_renderMode_122(int32_t value)
	{
		___m_renderMode_122 = value;
	}

	inline static int32_t get_offset_of_m_geometrySortingOrder_123() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_geometrySortingOrder_123)); }
	inline int32_t get_m_geometrySortingOrder_123() const { return ___m_geometrySortingOrder_123; }
	inline int32_t* get_address_of_m_geometrySortingOrder_123() { return &___m_geometrySortingOrder_123; }
	inline void set_m_geometrySortingOrder_123(int32_t value)
	{
		___m_geometrySortingOrder_123 = value;
	}

	inline static int32_t get_offset_of_m_VertexBufferAutoSizeReduction_124() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_VertexBufferAutoSizeReduction_124)); }
	inline bool get_m_VertexBufferAutoSizeReduction_124() const { return ___m_VertexBufferAutoSizeReduction_124; }
	inline bool* get_address_of_m_VertexBufferAutoSizeReduction_124() { return &___m_VertexBufferAutoSizeReduction_124; }
	inline void set_m_VertexBufferAutoSizeReduction_124(bool value)
	{
		___m_VertexBufferAutoSizeReduction_124 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacter_125() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacter_125)); }
	inline int32_t get_m_firstVisibleCharacter_125() const { return ___m_firstVisibleCharacter_125; }
	inline int32_t* get_address_of_m_firstVisibleCharacter_125() { return &___m_firstVisibleCharacter_125; }
	inline void set_m_firstVisibleCharacter_125(int32_t value)
	{
		___m_firstVisibleCharacter_125 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleCharacters_126() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleCharacters_126)); }
	inline int32_t get_m_maxVisibleCharacters_126() const { return ___m_maxVisibleCharacters_126; }
	inline int32_t* get_address_of_m_maxVisibleCharacters_126() { return &___m_maxVisibleCharacters_126; }
	inline void set_m_maxVisibleCharacters_126(int32_t value)
	{
		___m_maxVisibleCharacters_126 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleWords_127() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleWords_127)); }
	inline int32_t get_m_maxVisibleWords_127() const { return ___m_maxVisibleWords_127; }
	inline int32_t* get_address_of_m_maxVisibleWords_127() { return &___m_maxVisibleWords_127; }
	inline void set_m_maxVisibleWords_127(int32_t value)
	{
		___m_maxVisibleWords_127 = value;
	}

	inline static int32_t get_offset_of_m_maxVisibleLines_128() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxVisibleLines_128)); }
	inline int32_t get_m_maxVisibleLines_128() const { return ___m_maxVisibleLines_128; }
	inline int32_t* get_address_of_m_maxVisibleLines_128() { return &___m_maxVisibleLines_128; }
	inline void set_m_maxVisibleLines_128(int32_t value)
	{
		___m_maxVisibleLines_128 = value;
	}

	inline static int32_t get_offset_of_m_useMaxVisibleDescender_129() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_useMaxVisibleDescender_129)); }
	inline bool get_m_useMaxVisibleDescender_129() const { return ___m_useMaxVisibleDescender_129; }
	inline bool* get_address_of_m_useMaxVisibleDescender_129() { return &___m_useMaxVisibleDescender_129; }
	inline void set_m_useMaxVisibleDescender_129(bool value)
	{
		___m_useMaxVisibleDescender_129 = value;
	}

	inline static int32_t get_offset_of_m_pageToDisplay_130() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageToDisplay_130)); }
	inline int32_t get_m_pageToDisplay_130() const { return ___m_pageToDisplay_130; }
	inline int32_t* get_address_of_m_pageToDisplay_130() { return &___m_pageToDisplay_130; }
	inline void set_m_pageToDisplay_130(int32_t value)
	{
		___m_pageToDisplay_130 = value;
	}

	inline static int32_t get_offset_of_m_isNewPage_131() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isNewPage_131)); }
	inline bool get_m_isNewPage_131() const { return ___m_isNewPage_131; }
	inline bool* get_address_of_m_isNewPage_131() { return &___m_isNewPage_131; }
	inline void set_m_isNewPage_131(bool value)
	{
		___m_isNewPage_131 = value;
	}

	inline static int32_t get_offset_of_m_margin_132() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_margin_132)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_margin_132() const { return ___m_margin_132; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_margin_132() { return &___m_margin_132; }
	inline void set_m_margin_132(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_margin_132 = value;
	}

	inline static int32_t get_offset_of_m_marginLeft_133() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginLeft_133)); }
	inline float get_m_marginLeft_133() const { return ___m_marginLeft_133; }
	inline float* get_address_of_m_marginLeft_133() { return &___m_marginLeft_133; }
	inline void set_m_marginLeft_133(float value)
	{
		___m_marginLeft_133 = value;
	}

	inline static int32_t get_offset_of_m_marginRight_134() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginRight_134)); }
	inline float get_m_marginRight_134() const { return ___m_marginRight_134; }
	inline float* get_address_of_m_marginRight_134() { return &___m_marginRight_134; }
	inline void set_m_marginRight_134(float value)
	{
		___m_marginRight_134 = value;
	}

	inline static int32_t get_offset_of_m_marginWidth_135() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginWidth_135)); }
	inline float get_m_marginWidth_135() const { return ___m_marginWidth_135; }
	inline float* get_address_of_m_marginWidth_135() { return &___m_marginWidth_135; }
	inline void set_m_marginWidth_135(float value)
	{
		___m_marginWidth_135 = value;
	}

	inline static int32_t get_offset_of_m_marginHeight_136() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_marginHeight_136)); }
	inline float get_m_marginHeight_136() const { return ___m_marginHeight_136; }
	inline float* get_address_of_m_marginHeight_136() { return &___m_marginHeight_136; }
	inline void set_m_marginHeight_136(float value)
	{
		___m_marginHeight_136 = value;
	}

	inline static int32_t get_offset_of_m_width_137() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_width_137)); }
	inline float get_m_width_137() const { return ___m_width_137; }
	inline float* get_address_of_m_width_137() { return &___m_width_137; }
	inline void set_m_width_137(float value)
	{
		___m_width_137 = value;
	}

	inline static int32_t get_offset_of_m_textInfo_138() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textInfo_138)); }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * get_m_textInfo_138() const { return ___m_textInfo_138; }
	inline TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 ** get_address_of_m_textInfo_138() { return &___m_textInfo_138; }
	inline void set_m_textInfo_138(TMP_TextInfo_tC40DAAB47C5BD5AD21B3F456D860474D96D9C181 * value)
	{
		___m_textInfo_138 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_textInfo_138), (void*)value);
	}

	inline static int32_t get_offset_of_m_havePropertiesChanged_139() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_havePropertiesChanged_139)); }
	inline bool get_m_havePropertiesChanged_139() const { return ___m_havePropertiesChanged_139; }
	inline bool* get_address_of_m_havePropertiesChanged_139() { return &___m_havePropertiesChanged_139; }
	inline void set_m_havePropertiesChanged_139(bool value)
	{
		___m_havePropertiesChanged_139 = value;
	}

	inline static int32_t get_offset_of_m_isUsingLegacyAnimationComponent_140() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isUsingLegacyAnimationComponent_140)); }
	inline bool get_m_isUsingLegacyAnimationComponent_140() const { return ___m_isUsingLegacyAnimationComponent_140; }
	inline bool* get_address_of_m_isUsingLegacyAnimationComponent_140() { return &___m_isUsingLegacyAnimationComponent_140; }
	inline void set_m_isUsingLegacyAnimationComponent_140(bool value)
	{
		___m_isUsingLegacyAnimationComponent_140 = value;
	}

	inline static int32_t get_offset_of_m_transform_141() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_transform_141)); }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * get_m_transform_141() const { return ___m_transform_141; }
	inline Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA ** get_address_of_m_transform_141() { return &___m_transform_141; }
	inline void set_m_transform_141(Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * value)
	{
		___m_transform_141 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_transform_141), (void*)value);
	}

	inline static int32_t get_offset_of_m_rectTransform_142() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_rectTransform_142)); }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * get_m_rectTransform_142() const { return ___m_rectTransform_142; }
	inline RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 ** get_address_of_m_rectTransform_142() { return &___m_rectTransform_142; }
	inline void set_m_rectTransform_142(RectTransform_t285CBD8775B25174B75164F10618F8B9728E1B20 * value)
	{
		___m_rectTransform_142 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_rectTransform_142), (void*)value);
	}

	inline static int32_t get_offset_of_U3CautoSizeTextContainerU3Ek__BackingField_143() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___U3CautoSizeTextContainerU3Ek__BackingField_143)); }
	inline bool get_U3CautoSizeTextContainerU3Ek__BackingField_143() const { return ___U3CautoSizeTextContainerU3Ek__BackingField_143; }
	inline bool* get_address_of_U3CautoSizeTextContainerU3Ek__BackingField_143() { return &___U3CautoSizeTextContainerU3Ek__BackingField_143; }
	inline void set_U3CautoSizeTextContainerU3Ek__BackingField_143(bool value)
	{
		___U3CautoSizeTextContainerU3Ek__BackingField_143 = value;
	}

	inline static int32_t get_offset_of_m_autoSizeTextContainer_144() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_autoSizeTextContainer_144)); }
	inline bool get_m_autoSizeTextContainer_144() const { return ___m_autoSizeTextContainer_144; }
	inline bool* get_address_of_m_autoSizeTextContainer_144() { return &___m_autoSizeTextContainer_144; }
	inline void set_m_autoSizeTextContainer_144(bool value)
	{
		___m_autoSizeTextContainer_144 = value;
	}

	inline static int32_t get_offset_of_m_mesh_145() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_mesh_145)); }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * get_m_mesh_145() const { return ___m_mesh_145; }
	inline Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C ** get_address_of_m_mesh_145() { return &___m_mesh_145; }
	inline void set_m_mesh_145(Mesh_t6106B8D8E4C691321581AB0445552EC78B947B8C * value)
	{
		___m_mesh_145 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_mesh_145), (void*)value);
	}

	inline static int32_t get_offset_of_m_isVolumetricText_146() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isVolumetricText_146)); }
	inline bool get_m_isVolumetricText_146() const { return ___m_isVolumetricText_146; }
	inline bool* get_address_of_m_isVolumetricText_146() { return &___m_isVolumetricText_146; }
	inline void set_m_isVolumetricText_146(bool value)
	{
		___m_isVolumetricText_146 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimator_147() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimator_147)); }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * get_m_spriteAnimator_147() const { return ___m_spriteAnimator_147; }
	inline TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 ** get_address_of_m_spriteAnimator_147() { return &___m_spriteAnimator_147; }
	inline void set_m_spriteAnimator_147(TMP_SpriteAnimator_tEB1A22D4A88DC5AAC3EFBDD8FD10B2A02C7B0D17 * value)
	{
		___m_spriteAnimator_147 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_spriteAnimator_147), (void*)value);
	}

	inline static int32_t get_offset_of_m_flexibleHeight_148() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleHeight_148)); }
	inline float get_m_flexibleHeight_148() const { return ___m_flexibleHeight_148; }
	inline float* get_address_of_m_flexibleHeight_148() { return &___m_flexibleHeight_148; }
	inline void set_m_flexibleHeight_148(float value)
	{
		___m_flexibleHeight_148 = value;
	}

	inline static int32_t get_offset_of_m_flexibleWidth_149() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_flexibleWidth_149)); }
	inline float get_m_flexibleWidth_149() const { return ___m_flexibleWidth_149; }
	inline float* get_address_of_m_flexibleWidth_149() { return &___m_flexibleWidth_149; }
	inline void set_m_flexibleWidth_149(float value)
	{
		___m_flexibleWidth_149 = value;
	}

	inline static int32_t get_offset_of_m_minWidth_150() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minWidth_150)); }
	inline float get_m_minWidth_150() const { return ___m_minWidth_150; }
	inline float* get_address_of_m_minWidth_150() { return &___m_minWidth_150; }
	inline void set_m_minWidth_150(float value)
	{
		___m_minWidth_150 = value;
	}

	inline static int32_t get_offset_of_m_minHeight_151() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_minHeight_151)); }
	inline float get_m_minHeight_151() const { return ___m_minHeight_151; }
	inline float* get_address_of_m_minHeight_151() { return &___m_minHeight_151; }
	inline void set_m_minHeight_151(float value)
	{
		___m_minHeight_151 = value;
	}

	inline static int32_t get_offset_of_m_maxWidth_152() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxWidth_152)); }
	inline float get_m_maxWidth_152() const { return ___m_maxWidth_152; }
	inline float* get_address_of_m_maxWidth_152() { return &___m_maxWidth_152; }
	inline void set_m_maxWidth_152(float value)
	{
		___m_maxWidth_152 = value;
	}

	inline static int32_t get_offset_of_m_maxHeight_153() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxHeight_153)); }
	inline float get_m_maxHeight_153() const { return ___m_maxHeight_153; }
	inline float* get_address_of_m_maxHeight_153() { return &___m_maxHeight_153; }
	inline void set_m_maxHeight_153(float value)
	{
		___m_maxHeight_153 = value;
	}

	inline static int32_t get_offset_of_m_LayoutElement_154() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_LayoutElement_154)); }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * get_m_LayoutElement_154() const { return ___m_LayoutElement_154; }
	inline LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B ** get_address_of_m_LayoutElement_154() { return &___m_LayoutElement_154; }
	inline void set_m_LayoutElement_154(LayoutElement_tD503826DB41B6EA85AC689292F8B2661B3C1048B * value)
	{
		___m_LayoutElement_154 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LayoutElement_154), (void*)value);
	}

	inline static int32_t get_offset_of_m_preferredWidth_155() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredWidth_155)); }
	inline float get_m_preferredWidth_155() const { return ___m_preferredWidth_155; }
	inline float* get_address_of_m_preferredWidth_155() { return &___m_preferredWidth_155; }
	inline void set_m_preferredWidth_155(float value)
	{
		___m_preferredWidth_155 = value;
	}

	inline static int32_t get_offset_of_m_renderedWidth_156() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedWidth_156)); }
	inline float get_m_renderedWidth_156() const { return ___m_renderedWidth_156; }
	inline float* get_address_of_m_renderedWidth_156() { return &___m_renderedWidth_156; }
	inline void set_m_renderedWidth_156(float value)
	{
		___m_renderedWidth_156 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredWidthDirty_157() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredWidthDirty_157)); }
	inline bool get_m_isPreferredWidthDirty_157() const { return ___m_isPreferredWidthDirty_157; }
	inline bool* get_address_of_m_isPreferredWidthDirty_157() { return &___m_isPreferredWidthDirty_157; }
	inline void set_m_isPreferredWidthDirty_157(bool value)
	{
		___m_isPreferredWidthDirty_157 = value;
	}

	inline static int32_t get_offset_of_m_preferredHeight_158() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_preferredHeight_158)); }
	inline float get_m_preferredHeight_158() const { return ___m_preferredHeight_158; }
	inline float* get_address_of_m_preferredHeight_158() { return &___m_preferredHeight_158; }
	inline void set_m_preferredHeight_158(float value)
	{
		___m_preferredHeight_158 = value;
	}

	inline static int32_t get_offset_of_m_renderedHeight_159() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_renderedHeight_159)); }
	inline float get_m_renderedHeight_159() const { return ___m_renderedHeight_159; }
	inline float* get_address_of_m_renderedHeight_159() { return &___m_renderedHeight_159; }
	inline void set_m_renderedHeight_159(float value)
	{
		___m_renderedHeight_159 = value;
	}

	inline static int32_t get_offset_of_m_isPreferredHeightDirty_160() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isPreferredHeightDirty_160)); }
	inline bool get_m_isPreferredHeightDirty_160() const { return ___m_isPreferredHeightDirty_160; }
	inline bool* get_address_of_m_isPreferredHeightDirty_160() { return &___m_isPreferredHeightDirty_160; }
	inline void set_m_isPreferredHeightDirty_160(bool value)
	{
		___m_isPreferredHeightDirty_160 = value;
	}

	inline static int32_t get_offset_of_m_isCalculatingPreferredValues_161() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculatingPreferredValues_161)); }
	inline bool get_m_isCalculatingPreferredValues_161() const { return ___m_isCalculatingPreferredValues_161; }
	inline bool* get_address_of_m_isCalculatingPreferredValues_161() { return &___m_isCalculatingPreferredValues_161; }
	inline void set_m_isCalculatingPreferredValues_161(bool value)
	{
		___m_isCalculatingPreferredValues_161 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCount_162() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_recursiveCount_162)); }
	inline int32_t get_m_recursiveCount_162() const { return ___m_recursiveCount_162; }
	inline int32_t* get_address_of_m_recursiveCount_162() { return &___m_recursiveCount_162; }
	inline void set_m_recursiveCount_162(int32_t value)
	{
		___m_recursiveCount_162 = value;
	}

	inline static int32_t get_offset_of_m_layoutPriority_163() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutPriority_163)); }
	inline int32_t get_m_layoutPriority_163() const { return ___m_layoutPriority_163; }
	inline int32_t* get_address_of_m_layoutPriority_163() { return &___m_layoutPriority_163; }
	inline void set_m_layoutPriority_163(int32_t value)
	{
		___m_layoutPriority_163 = value;
	}

	inline static int32_t get_offset_of_m_isCalculateSizeRequired_164() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isCalculateSizeRequired_164)); }
	inline bool get_m_isCalculateSizeRequired_164() const { return ___m_isCalculateSizeRequired_164; }
	inline bool* get_address_of_m_isCalculateSizeRequired_164() { return &___m_isCalculateSizeRequired_164; }
	inline void set_m_isCalculateSizeRequired_164(bool value)
	{
		___m_isCalculateSizeRequired_164 = value;
	}

	inline static int32_t get_offset_of_m_isLayoutDirty_165() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isLayoutDirty_165)); }
	inline bool get_m_isLayoutDirty_165() const { return ___m_isLayoutDirty_165; }
	inline bool* get_address_of_m_isLayoutDirty_165() { return &___m_isLayoutDirty_165; }
	inline void set_m_isLayoutDirty_165(bool value)
	{
		___m_isLayoutDirty_165 = value;
	}

	inline static int32_t get_offset_of_m_verticesAlreadyDirty_166() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_verticesAlreadyDirty_166)); }
	inline bool get_m_verticesAlreadyDirty_166() const { return ___m_verticesAlreadyDirty_166; }
	inline bool* get_address_of_m_verticesAlreadyDirty_166() { return &___m_verticesAlreadyDirty_166; }
	inline void set_m_verticesAlreadyDirty_166(bool value)
	{
		___m_verticesAlreadyDirty_166 = value;
	}

	inline static int32_t get_offset_of_m_layoutAlreadyDirty_167() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_layoutAlreadyDirty_167)); }
	inline bool get_m_layoutAlreadyDirty_167() const { return ___m_layoutAlreadyDirty_167; }
	inline bool* get_address_of_m_layoutAlreadyDirty_167() { return &___m_layoutAlreadyDirty_167; }
	inline void set_m_layoutAlreadyDirty_167(bool value)
	{
		___m_layoutAlreadyDirty_167 = value;
	}

	inline static int32_t get_offset_of_m_isAwake_168() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isAwake_168)); }
	inline bool get_m_isAwake_168() const { return ___m_isAwake_168; }
	inline bool* get_address_of_m_isAwake_168() { return &___m_isAwake_168; }
	inline void set_m_isAwake_168(bool value)
	{
		___m_isAwake_168 = value;
	}

	inline static int32_t get_offset_of_m_isWaitingOnResourceLoad_169() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isWaitingOnResourceLoad_169)); }
	inline bool get_m_isWaitingOnResourceLoad_169() const { return ___m_isWaitingOnResourceLoad_169; }
	inline bool* get_address_of_m_isWaitingOnResourceLoad_169() { return &___m_isWaitingOnResourceLoad_169; }
	inline void set_m_isWaitingOnResourceLoad_169(bool value)
	{
		___m_isWaitingOnResourceLoad_169 = value;
	}

	inline static int32_t get_offset_of_m_isInputParsingRequired_170() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isInputParsingRequired_170)); }
	inline bool get_m_isInputParsingRequired_170() const { return ___m_isInputParsingRequired_170; }
	inline bool* get_address_of_m_isInputParsingRequired_170() { return &___m_isInputParsingRequired_170; }
	inline void set_m_isInputParsingRequired_170(bool value)
	{
		___m_isInputParsingRequired_170 = value;
	}

	inline static int32_t get_offset_of_m_inputSource_171() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_inputSource_171)); }
	inline int32_t get_m_inputSource_171() const { return ___m_inputSource_171; }
	inline int32_t* get_address_of_m_inputSource_171() { return &___m_inputSource_171; }
	inline void set_m_inputSource_171(int32_t value)
	{
		___m_inputSource_171 = value;
	}

	inline static int32_t get_offset_of_old_text_172() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___old_text_172)); }
	inline String_t* get_old_text_172() const { return ___old_text_172; }
	inline String_t** get_address_of_old_text_172() { return &___old_text_172; }
	inline void set_old_text_172(String_t* value)
	{
		___old_text_172 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___old_text_172), (void*)value);
	}

	inline static int32_t get_offset_of_m_fontScale_173() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScale_173)); }
	inline float get_m_fontScale_173() const { return ___m_fontScale_173; }
	inline float* get_address_of_m_fontScale_173() { return &___m_fontScale_173; }
	inline void set_m_fontScale_173(float value)
	{
		___m_fontScale_173 = value;
	}

	inline static int32_t get_offset_of_m_fontScaleMultiplier_174() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_fontScaleMultiplier_174)); }
	inline float get_m_fontScaleMultiplier_174() const { return ___m_fontScaleMultiplier_174; }
	inline float* get_address_of_m_fontScaleMultiplier_174() { return &___m_fontScaleMultiplier_174; }
	inline void set_m_fontScaleMultiplier_174(float value)
	{
		___m_fontScaleMultiplier_174 = value;
	}

	inline static int32_t get_offset_of_m_htmlTag_175() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlTag_175)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_htmlTag_175() const { return ___m_htmlTag_175; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_htmlTag_175() { return &___m_htmlTag_175; }
	inline void set_m_htmlTag_175(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_htmlTag_175 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_htmlTag_175), (void*)value);
	}

	inline static int32_t get_offset_of_m_xmlAttribute_176() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xmlAttribute_176)); }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* get_m_xmlAttribute_176() const { return ___m_xmlAttribute_176; }
	inline RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652** get_address_of_m_xmlAttribute_176() { return &___m_xmlAttribute_176; }
	inline void set_m_xmlAttribute_176(RichTextTagAttributeU5BU5D_tDDFB2F68801310D7EEE16822832E48E70B11C652* value)
	{
		___m_xmlAttribute_176 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_xmlAttribute_176), (void*)value);
	}

	inline static int32_t get_offset_of_m_attributeParameterValues_177() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_attributeParameterValues_177)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_m_attributeParameterValues_177() const { return ___m_attributeParameterValues_177; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_m_attributeParameterValues_177() { return &___m_attributeParameterValues_177; }
	inline void set_m_attributeParameterValues_177(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___m_attributeParameterValues_177 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_attributeParameterValues_177), (void*)value);
	}

	inline static int32_t get_offset_of_tag_LineIndent_178() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_LineIndent_178)); }
	inline float get_tag_LineIndent_178() const { return ___tag_LineIndent_178; }
	inline float* get_address_of_tag_LineIndent_178() { return &___tag_LineIndent_178; }
	inline void set_tag_LineIndent_178(float value)
	{
		___tag_LineIndent_178 = value;
	}

	inline static int32_t get_offset_of_tag_Indent_179() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_Indent_179)); }
	inline float get_tag_Indent_179() const { return ___tag_Indent_179; }
	inline float* get_address_of_tag_Indent_179() { return &___tag_Indent_179; }
	inline void set_tag_Indent_179(float value)
	{
		___tag_Indent_179 = value;
	}

	inline static int32_t get_offset_of_m_indentStack_180() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_indentStack_180)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_indentStack_180() const { return ___m_indentStack_180; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_indentStack_180() { return &___m_indentStack_180; }
	inline void set_m_indentStack_180(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_indentStack_180 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_indentStack_180))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_tag_NoParsing_181() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___tag_NoParsing_181)); }
	inline bool get_tag_NoParsing_181() const { return ___tag_NoParsing_181; }
	inline bool* get_address_of_tag_NoParsing_181() { return &___tag_NoParsing_181; }
	inline void set_tag_NoParsing_181(bool value)
	{
		___tag_NoParsing_181 = value;
	}

	inline static int32_t get_offset_of_m_isParsingText_182() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isParsingText_182)); }
	inline bool get_m_isParsingText_182() const { return ___m_isParsingText_182; }
	inline bool* get_address_of_m_isParsingText_182() { return &___m_isParsingText_182; }
	inline void set_m_isParsingText_182(bool value)
	{
		___m_isParsingText_182 = value;
	}

	inline static int32_t get_offset_of_m_FXMatrix_183() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_FXMatrix_183)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_FXMatrix_183() const { return ___m_FXMatrix_183; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_FXMatrix_183() { return &___m_FXMatrix_183; }
	inline void set_m_FXMatrix_183(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_FXMatrix_183 = value;
	}

	inline static int32_t get_offset_of_m_isFXMatrixSet_184() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_isFXMatrixSet_184)); }
	inline bool get_m_isFXMatrixSet_184() const { return ___m_isFXMatrixSet_184; }
	inline bool* get_address_of_m_isFXMatrixSet_184() { return &___m_isFXMatrixSet_184; }
	inline void set_m_isFXMatrixSet_184(bool value)
	{
		___m_isFXMatrixSet_184 = value;
	}

	inline static int32_t get_offset_of_m_TextParsingBuffer_185() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_TextParsingBuffer_185)); }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* get_m_TextParsingBuffer_185() const { return ___m_TextParsingBuffer_185; }
	inline UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505** get_address_of_m_TextParsingBuffer_185() { return &___m_TextParsingBuffer_185; }
	inline void set_m_TextParsingBuffer_185(UnicodeCharU5BU5D_t14B138F2B44C8EA3A5A5DB234E3739F385E55505* value)
	{
		___m_TextParsingBuffer_185 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextParsingBuffer_185), (void*)value);
	}

	inline static int32_t get_offset_of_m_internalCharacterInfo_186() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_internalCharacterInfo_186)); }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* get_m_internalCharacterInfo_186() const { return ___m_internalCharacterInfo_186; }
	inline TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604** get_address_of_m_internalCharacterInfo_186() { return &___m_internalCharacterInfo_186; }
	inline void set_m_internalCharacterInfo_186(TMP_CharacterInfoU5BU5D_t415BD08A7E8A8C311B1F7BD9C3AC60BF99339604* value)
	{
		___m_internalCharacterInfo_186 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_internalCharacterInfo_186), (void*)value);
	}

	inline static int32_t get_offset_of_m_input_CharArray_187() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_input_CharArray_187)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_m_input_CharArray_187() const { return ___m_input_CharArray_187; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_m_input_CharArray_187() { return &___m_input_CharArray_187; }
	inline void set_m_input_CharArray_187(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___m_input_CharArray_187 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_input_CharArray_187), (void*)value);
	}

	inline static int32_t get_offset_of_m_charArray_Length_188() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_charArray_Length_188)); }
	inline int32_t get_m_charArray_Length_188() const { return ___m_charArray_Length_188; }
	inline int32_t* get_address_of_m_charArray_Length_188() { return &___m_charArray_Length_188; }
	inline void set_m_charArray_Length_188(int32_t value)
	{
		___m_charArray_Length_188 = value;
	}

	inline static int32_t get_offset_of_m_totalCharacterCount_189() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_totalCharacterCount_189)); }
	inline int32_t get_m_totalCharacterCount_189() const { return ___m_totalCharacterCount_189; }
	inline int32_t* get_address_of_m_totalCharacterCount_189() { return &___m_totalCharacterCount_189; }
	inline void set_m_totalCharacterCount_189(int32_t value)
	{
		___m_totalCharacterCount_189 = value;
	}

	inline static int32_t get_offset_of_m_SavedWordWrapState_190() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedWordWrapState_190)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedWordWrapState_190() const { return ___m_SavedWordWrapState_190; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedWordWrapState_190() { return &___m_SavedWordWrapState_190; }
	inline void set_m_SavedWordWrapState_190(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedWordWrapState_190 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedWordWrapState_190))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedWordWrapState_190))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedWordWrapState_190))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_SavedLineState_191() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_SavedLineState_191)); }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  get_m_SavedLineState_191() const { return ___m_SavedLineState_191; }
	inline WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557 * get_address_of_m_SavedLineState_191() { return &___m_SavedLineState_191; }
	inline void set_m_SavedLineState_191(WordWrapState_t415B8622774DD094A9CD7447D298B33B7365A557  value)
	{
		___m_SavedLineState_191 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___textInfo_27), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorStack_34))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___underlineColorStack_35))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___strikethroughColorStack_36))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___highlightColorStack_37))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorGradientStack_38))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___colorGradientStack_38))->___m_DefaultItem_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___sizeStack_39))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___indentStack_40))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___fontWeightStack_41))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___styleStack_42))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___baselineStack_43))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___actionStack_44))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fontAsset_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___spriteAsset_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___material_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&((&(((&___m_SavedLineState_191))->___materialReferenceStack_45))->___m_DefaultItem_3))->___fallbackMaterial_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_SavedLineState_191))->___lineJustificationStack_46))->___m_ItemStack_0), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentFontAsset_48), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentSpriteAsset_49), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SavedLineState_191))->___currentMaterial_50), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_characterCount_192() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_characterCount_192)); }
	inline int32_t get_m_characterCount_192() const { return ___m_characterCount_192; }
	inline int32_t* get_address_of_m_characterCount_192() { return &___m_characterCount_192; }
	inline void set_m_characterCount_192(int32_t value)
	{
		___m_characterCount_192 = value;
	}

	inline static int32_t get_offset_of_m_firstCharacterOfLine_193() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstCharacterOfLine_193)); }
	inline int32_t get_m_firstCharacterOfLine_193() const { return ___m_firstCharacterOfLine_193; }
	inline int32_t* get_address_of_m_firstCharacterOfLine_193() { return &___m_firstCharacterOfLine_193; }
	inline void set_m_firstCharacterOfLine_193(int32_t value)
	{
		___m_firstCharacterOfLine_193 = value;
	}

	inline static int32_t get_offset_of_m_firstVisibleCharacterOfLine_194() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_firstVisibleCharacterOfLine_194)); }
	inline int32_t get_m_firstVisibleCharacterOfLine_194() const { return ___m_firstVisibleCharacterOfLine_194; }
	inline int32_t* get_address_of_m_firstVisibleCharacterOfLine_194() { return &___m_firstVisibleCharacterOfLine_194; }
	inline void set_m_firstVisibleCharacterOfLine_194(int32_t value)
	{
		___m_firstVisibleCharacterOfLine_194 = value;
	}

	inline static int32_t get_offset_of_m_lastCharacterOfLine_195() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastCharacterOfLine_195)); }
	inline int32_t get_m_lastCharacterOfLine_195() const { return ___m_lastCharacterOfLine_195; }
	inline int32_t* get_address_of_m_lastCharacterOfLine_195() { return &___m_lastCharacterOfLine_195; }
	inline void set_m_lastCharacterOfLine_195(int32_t value)
	{
		___m_lastCharacterOfLine_195 = value;
	}

	inline static int32_t get_offset_of_m_lastVisibleCharacterOfLine_196() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lastVisibleCharacterOfLine_196)); }
	inline int32_t get_m_lastVisibleCharacterOfLine_196() const { return ___m_lastVisibleCharacterOfLine_196; }
	inline int32_t* get_address_of_m_lastVisibleCharacterOfLine_196() { return &___m_lastVisibleCharacterOfLine_196; }
	inline void set_m_lastVisibleCharacterOfLine_196(int32_t value)
	{
		___m_lastVisibleCharacterOfLine_196 = value;
	}

	inline static int32_t get_offset_of_m_lineNumber_197() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineNumber_197)); }
	inline int32_t get_m_lineNumber_197() const { return ___m_lineNumber_197; }
	inline int32_t* get_address_of_m_lineNumber_197() { return &___m_lineNumber_197; }
	inline void set_m_lineNumber_197(int32_t value)
	{
		___m_lineNumber_197 = value;
	}

	inline static int32_t get_offset_of_m_lineVisibleCharacterCount_198() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineVisibleCharacterCount_198)); }
	inline int32_t get_m_lineVisibleCharacterCount_198() const { return ___m_lineVisibleCharacterCount_198; }
	inline int32_t* get_address_of_m_lineVisibleCharacterCount_198() { return &___m_lineVisibleCharacterCount_198; }
	inline void set_m_lineVisibleCharacterCount_198(int32_t value)
	{
		___m_lineVisibleCharacterCount_198 = value;
	}

	inline static int32_t get_offset_of_m_pageNumber_199() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_pageNumber_199)); }
	inline int32_t get_m_pageNumber_199() const { return ___m_pageNumber_199; }
	inline int32_t* get_address_of_m_pageNumber_199() { return &___m_pageNumber_199; }
	inline void set_m_pageNumber_199(int32_t value)
	{
		___m_pageNumber_199 = value;
	}

	inline static int32_t get_offset_of_m_maxAscender_200() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxAscender_200)); }
	inline float get_m_maxAscender_200() const { return ___m_maxAscender_200; }
	inline float* get_address_of_m_maxAscender_200() { return &___m_maxAscender_200; }
	inline void set_m_maxAscender_200(float value)
	{
		___m_maxAscender_200 = value;
	}

	inline static int32_t get_offset_of_m_maxCapHeight_201() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxCapHeight_201)); }
	inline float get_m_maxCapHeight_201() const { return ___m_maxCapHeight_201; }
	inline float* get_address_of_m_maxCapHeight_201() { return &___m_maxCapHeight_201; }
	inline void set_m_maxCapHeight_201(float value)
	{
		___m_maxCapHeight_201 = value;
	}

	inline static int32_t get_offset_of_m_maxDescender_202() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxDescender_202)); }
	inline float get_m_maxDescender_202() const { return ___m_maxDescender_202; }
	inline float* get_address_of_m_maxDescender_202() { return &___m_maxDescender_202; }
	inline void set_m_maxDescender_202(float value)
	{
		___m_maxDescender_202 = value;
	}

	inline static int32_t get_offset_of_m_maxLineAscender_203() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineAscender_203)); }
	inline float get_m_maxLineAscender_203() const { return ___m_maxLineAscender_203; }
	inline float* get_address_of_m_maxLineAscender_203() { return &___m_maxLineAscender_203; }
	inline void set_m_maxLineAscender_203(float value)
	{
		___m_maxLineAscender_203 = value;
	}

	inline static int32_t get_offset_of_m_maxLineDescender_204() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_maxLineDescender_204)); }
	inline float get_m_maxLineDescender_204() const { return ___m_maxLineDescender_204; }
	inline float* get_address_of_m_maxLineDescender_204() { return &___m_maxLineDescender_204; }
	inline void set_m_maxLineDescender_204(float value)
	{
		___m_maxLineDescender_204 = value;
	}

	inline static int32_t get_offset_of_m_startOfLineAscender_205() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_startOfLineAscender_205)); }
	inline float get_m_startOfLineAscender_205() const { return ___m_startOfLineAscender_205; }
	inline float* get_address_of_m_startOfLineAscender_205() { return &___m_startOfLineAscender_205; }
	inline void set_m_startOfLineAscender_205(float value)
	{
		___m_startOfLineAscender_205 = value;
	}

	inline static int32_t get_offset_of_m_lineOffset_206() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_lineOffset_206)); }
	inline float get_m_lineOffset_206() const { return ___m_lineOffset_206; }
	inline float* get_address_of_m_lineOffset_206() { return &___m_lineOffset_206; }
	inline void set_m_lineOffset_206(float value)
	{
		___m_lineOffset_206 = value;
	}

	inline static int32_t get_offset_of_m_meshExtents_207() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_meshExtents_207)); }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  get_m_meshExtents_207() const { return ___m_meshExtents_207; }
	inline Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3 * get_address_of_m_meshExtents_207() { return &___m_meshExtents_207; }
	inline void set_m_meshExtents_207(Extents_tB63A1FF929CAEBC8E097EF426A8B6F91442B0EA3  value)
	{
		___m_meshExtents_207 = value;
	}

	inline static int32_t get_offset_of_m_htmlColor_208() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_htmlColor_208)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_m_htmlColor_208() const { return ___m_htmlColor_208; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_m_htmlColor_208() { return &___m_htmlColor_208; }
	inline void set_m_htmlColor_208(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___m_htmlColor_208 = value;
	}

	inline static int32_t get_offset_of_m_colorStack_209() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorStack_209)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_colorStack_209() const { return ___m_colorStack_209; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_colorStack_209() { return &___m_colorStack_209; }
	inline void set_m_colorStack_209(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_colorStack_209 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorStack_209))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_underlineColorStack_210() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_underlineColorStack_210)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_underlineColorStack_210() const { return ___m_underlineColorStack_210; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_underlineColorStack_210() { return &___m_underlineColorStack_210; }
	inline void set_m_underlineColorStack_210(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_underlineColorStack_210 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_underlineColorStack_210))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_strikethroughColorStack_211() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_strikethroughColorStack_211)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_strikethroughColorStack_211() const { return ___m_strikethroughColorStack_211; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_strikethroughColorStack_211() { return &___m_strikethroughColorStack_211; }
	inline void set_m_strikethroughColorStack_211(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_strikethroughColorStack_211 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_strikethroughColorStack_211))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_highlightColorStack_212() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_highlightColorStack_212)); }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  get_m_highlightColorStack_212() const { return ___m_highlightColorStack_212; }
	inline TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0 * get_address_of_m_highlightColorStack_212() { return &___m_highlightColorStack_212; }
	inline void set_m_highlightColorStack_212(TMP_RichTextTagStack_1_tDAE1C182F153530A3E6A3ADC1803919A380BCDF0  value)
	{
		___m_highlightColorStack_212 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_highlightColorStack_212))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_colorGradientPreset_213() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientPreset_213)); }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * get_m_colorGradientPreset_213() const { return ___m_colorGradientPreset_213; }
	inline TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 ** get_address_of_m_colorGradientPreset_213() { return &___m_colorGradientPreset_213; }
	inline void set_m_colorGradientPreset_213(TMP_ColorGradient_tEA29C4736B1786301A803B6C0FB30107A10D79B7 * value)
	{
		___m_colorGradientPreset_213 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_colorGradientPreset_213), (void*)value);
	}

	inline static int32_t get_offset_of_m_colorGradientStack_214() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_colorGradientStack_214)); }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  get_m_colorGradientStack_214() const { return ___m_colorGradientStack_214; }
	inline TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D * get_address_of_m_colorGradientStack_214() { return &___m_colorGradientStack_214; }
	inline void set_m_colorGradientStack_214(TMP_RichTextTagStack_1_tF73231072FB2CD9EBFCAF3C4D7E41E2221B9ED1D  value)
	{
		___m_colorGradientStack_214 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_214))->___m_ItemStack_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_colorGradientStack_214))->___m_DefaultItem_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_tabSpacing_215() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_tabSpacing_215)); }
	inline float get_m_tabSpacing_215() const { return ___m_tabSpacing_215; }
	inline float* get_address_of_m_tabSpacing_215() { return &___m_tabSpacing_215; }
	inline void set_m_tabSpacing_215(float value)
	{
		___m_tabSpacing_215 = value;
	}

	inline static int32_t get_offset_of_m_spacing_216() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spacing_216)); }
	inline float get_m_spacing_216() const { return ___m_spacing_216; }
	inline float* get_address_of_m_spacing_216() { return &___m_spacing_216; }
	inline void set_m_spacing_216(float value)
	{
		___m_spacing_216 = value;
	}

	inline static int32_t get_offset_of_m_styleStack_217() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_styleStack_217)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_m_styleStack_217() const { return ___m_styleStack_217; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_m_styleStack_217() { return &___m_styleStack_217; }
	inline void set_m_styleStack_217(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___m_styleStack_217 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_styleStack_217))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_actionStack_218() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_actionStack_218)); }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  get_m_actionStack_218() const { return ___m_actionStack_218; }
	inline TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F * get_address_of_m_actionStack_218() { return &___m_actionStack_218; }
	inline void set_m_actionStack_218(TMP_RichTextTagStack_1_t629E00E06021AA51A5AD8607BAFC61DB099F2D7F  value)
	{
		___m_actionStack_218 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_actionStack_218))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_padding_219() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_padding_219)); }
	inline float get_m_padding_219() const { return ___m_padding_219; }
	inline float* get_address_of_m_padding_219() { return &___m_padding_219; }
	inline void set_m_padding_219(float value)
	{
		___m_padding_219 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffset_220() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffset_220)); }
	inline float get_m_baselineOffset_220() const { return ___m_baselineOffset_220; }
	inline float* get_address_of_m_baselineOffset_220() { return &___m_baselineOffset_220; }
	inline void set_m_baselineOffset_220(float value)
	{
		___m_baselineOffset_220 = value;
	}

	inline static int32_t get_offset_of_m_baselineOffsetStack_221() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_baselineOffsetStack_221)); }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  get_m_baselineOffsetStack_221() const { return ___m_baselineOffsetStack_221; }
	inline TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3 * get_address_of_m_baselineOffsetStack_221() { return &___m_baselineOffsetStack_221; }
	inline void set_m_baselineOffsetStack_221(TMP_RichTextTagStack_1_t221674BAE112F99AB4BDB4D127F20A021FF50CA3  value)
	{
		___m_baselineOffsetStack_221 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_baselineOffsetStack_221))->___m_ItemStack_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_xAdvance_222() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_xAdvance_222)); }
	inline float get_m_xAdvance_222() const { return ___m_xAdvance_222; }
	inline float* get_address_of_m_xAdvance_222() { return &___m_xAdvance_222; }
	inline void set_m_xAdvance_222(float value)
	{
		___m_xAdvance_222 = value;
	}

	inline static int32_t get_offset_of_m_textElementType_223() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_textElementType_223)); }
	inline int32_t get_m_textElementType_223() const { return ___m_textElementType_223; }
	inline int32_t* get_address_of_m_textElementType_223() { return &___m_textElementType_223; }
	inline void set_m_textElementType_223(int32_t value)
	{
		___m_textElementType_223 = value;
	}

	inline static int32_t get_offset_of_m_cached_TextElement_224() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_TextElement_224)); }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * get_m_cached_TextElement_224() const { return ___m_cached_TextElement_224; }
	inline TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 ** get_address_of_m_cached_TextElement_224() { return &___m_cached_TextElement_224; }
	inline void set_m_cached_TextElement_224(TMP_TextElement_tB9A6A361BB93487BD07DDDA37A368819DA46C344 * value)
	{
		___m_cached_TextElement_224 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_TextElement_224), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Underline_Character_225() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Underline_Character_225)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Underline_Character_225() const { return ___m_cached_Underline_Character_225; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Underline_Character_225() { return &___m_cached_Underline_Character_225; }
	inline void set_m_cached_Underline_Character_225(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Underline_Character_225 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Underline_Character_225), (void*)value);
	}

	inline static int32_t get_offset_of_m_cached_Ellipsis_Character_226() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_cached_Ellipsis_Character_226)); }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D * get_m_cached_Ellipsis_Character_226() const { return ___m_cached_Ellipsis_Character_226; }
	inline TMP_Character_t1875AACA978396521498D6A699052C187903553D ** get_address_of_m_cached_Ellipsis_Character_226() { return &___m_cached_Ellipsis_Character_226; }
	inline void set_m_cached_Ellipsis_Character_226(TMP_Character_t1875AACA978396521498D6A699052C187903553D * value)
	{
		___m_cached_Ellipsis_Character_226 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_cached_Ellipsis_Character_226), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultSpriteAsset_227() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_defaultSpriteAsset_227)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_defaultSpriteAsset_227() const { return ___m_defaultSpriteAsset_227; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_defaultSpriteAsset_227() { return &___m_defaultSpriteAsset_227; }
	inline void set_m_defaultSpriteAsset_227(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_defaultSpriteAsset_227 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultSpriteAsset_227), (void*)value);
	}

	inline static int32_t get_offset_of_m_currentSpriteAsset_228() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_currentSpriteAsset_228)); }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * get_m_currentSpriteAsset_228() const { return ___m_currentSpriteAsset_228; }
	inline TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 ** get_address_of_m_currentSpriteAsset_228() { return &___m_currentSpriteAsset_228; }
	inline void set_m_currentSpriteAsset_228(TMP_SpriteAsset_tF896FFED2AA9395D6BC40FFEAC6DE7555A27A487 * value)
	{
		___m_currentSpriteAsset_228 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_currentSpriteAsset_228), (void*)value);
	}

	inline static int32_t get_offset_of_m_spriteCount_229() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteCount_229)); }
	inline int32_t get_m_spriteCount_229() const { return ___m_spriteCount_229; }
	inline int32_t* get_address_of_m_spriteCount_229() { return &___m_spriteCount_229; }
	inline void set_m_spriteCount_229(int32_t value)
	{
		___m_spriteCount_229 = value;
	}

	inline static int32_t get_offset_of_m_spriteIndex_230() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteIndex_230)); }
	inline int32_t get_m_spriteIndex_230() const { return ___m_spriteIndex_230; }
	inline int32_t* get_address_of_m_spriteIndex_230() { return &___m_spriteIndex_230; }
	inline void set_m_spriteIndex_230(int32_t value)
	{
		___m_spriteIndex_230 = value;
	}

	inline static int32_t get_offset_of_m_spriteAnimationID_231() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_spriteAnimationID_231)); }
	inline int32_t get_m_spriteAnimationID_231() const { return ___m_spriteAnimationID_231; }
	inline int32_t* get_address_of_m_spriteAnimationID_231() { return &___m_spriteAnimationID_231; }
	inline void set_m_spriteAnimationID_231(int32_t value)
	{
		___m_spriteAnimationID_231 = value;
	}

	inline static int32_t get_offset_of_m_ignoreActiveState_232() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___m_ignoreActiveState_232)); }
	inline bool get_m_ignoreActiveState_232() const { return ___m_ignoreActiveState_232; }
	inline bool* get_address_of_m_ignoreActiveState_232() { return &___m_ignoreActiveState_232; }
	inline void set_m_ignoreActiveState_232(bool value)
	{
		___m_ignoreActiveState_232 = value;
	}

	inline static int32_t get_offset_of_k_Power_233() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7, ___k_Power_233)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_k_Power_233() const { return ___k_Power_233; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_k_Power_233() { return &___k_Power_233; }
	inline void set_k_Power_233(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___k_Power_233 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___k_Power_233), (void*)value);
	}
};

struct TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields
{
public:
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  ___s_colorWhite_51;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargePositiveVector2_234;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___k_LargeNegativeVector2_235;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_236;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_237;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_238;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_239;

public:
	inline static int32_t get_offset_of_s_colorWhite_51() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___s_colorWhite_51)); }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  get_s_colorWhite_51() const { return ___s_colorWhite_51; }
	inline Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23 * get_address_of_s_colorWhite_51() { return &___s_colorWhite_51; }
	inline void set_s_colorWhite_51(Color32_t23ABC4AE0E0BDFD2E22EE1FA0DA3904FFE5F6E23  value)
	{
		___s_colorWhite_51 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveVector2_234() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveVector2_234)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargePositiveVector2_234() const { return ___k_LargePositiveVector2_234; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargePositiveVector2_234() { return &___k_LargePositiveVector2_234; }
	inline void set_k_LargePositiveVector2_234(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargePositiveVector2_234 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeVector2_235() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeVector2_235)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_k_LargeNegativeVector2_235() const { return ___k_LargeNegativeVector2_235; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_k_LargeNegativeVector2_235() { return &___k_LargeNegativeVector2_235; }
	inline void set_k_LargeNegativeVector2_235(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___k_LargeNegativeVector2_235 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveFloat_236() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveFloat_236)); }
	inline float get_k_LargePositiveFloat_236() const { return ___k_LargePositiveFloat_236; }
	inline float* get_address_of_k_LargePositiveFloat_236() { return &___k_LargePositiveFloat_236; }
	inline void set_k_LargePositiveFloat_236(float value)
	{
		___k_LargePositiveFloat_236 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeFloat_237() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeFloat_237)); }
	inline float get_k_LargeNegativeFloat_237() const { return ___k_LargeNegativeFloat_237; }
	inline float* get_address_of_k_LargeNegativeFloat_237() { return &___k_LargeNegativeFloat_237; }
	inline void set_k_LargeNegativeFloat_237(float value)
	{
		___k_LargeNegativeFloat_237 = value;
	}

	inline static int32_t get_offset_of_k_LargePositiveInt_238() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargePositiveInt_238)); }
	inline int32_t get_k_LargePositiveInt_238() const { return ___k_LargePositiveInt_238; }
	inline int32_t* get_address_of_k_LargePositiveInt_238() { return &___k_LargePositiveInt_238; }
	inline void set_k_LargePositiveInt_238(int32_t value)
	{
		___k_LargePositiveInt_238 = value;
	}

	inline static int32_t get_offset_of_k_LargeNegativeInt_239() { return static_cast<int32_t>(offsetof(TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7_StaticFields, ___k_LargeNegativeInt_239)); }
	inline int32_t get_k_LargeNegativeInt_239() const { return ___k_LargeNegativeInt_239; }
	inline int32_t* get_address_of_k_LargeNegativeInt_239() { return &___k_LargeNegativeInt_239; }
	inline void set_k_LargeNegativeInt_239(int32_t value)
	{
		___k_LargeNegativeInt_239 = value;
	}
};


// TMPro.TextMeshProUGUI
struct  TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438  : public TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7
{
public:
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_240;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* ___m_subTextObjects_241;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_242;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ___m_RectTransformCorners_243;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * ___m_canvasRenderer_244;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * ___m_canvas_245;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_246;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_247;
	// System.Boolean TMPro.TextMeshProUGUI::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_248;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * ___m_baseMaterial_249;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_250;
	// System.Int32 TMPro.TextMeshProUGUI::m_stencilID
	int32_t ___m_stencilID_251;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___m_maskOffset_252;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  ___m_EnvMapMatrix_253;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_254;
	// System.Int32 TMPro.TextMeshProUGUI::m_recursiveCountA
	int32_t ___m_recursiveCountA_255;
	// System.Int32 TMPro.TextMeshProUGUI::loopCountA
	int32_t ___loopCountA_256;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_257;

public:
	inline static int32_t get_offset_of_m_hasFontAssetChanged_240() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_hasFontAssetChanged_240)); }
	inline bool get_m_hasFontAssetChanged_240() const { return ___m_hasFontAssetChanged_240; }
	inline bool* get_address_of_m_hasFontAssetChanged_240() { return &___m_hasFontAssetChanged_240; }
	inline void set_m_hasFontAssetChanged_240(bool value)
	{
		___m_hasFontAssetChanged_240 = value;
	}

	inline static int32_t get_offset_of_m_subTextObjects_241() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_subTextObjects_241)); }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* get_m_subTextObjects_241() const { return ___m_subTextObjects_241; }
	inline TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E** get_address_of_m_subTextObjects_241() { return &___m_subTextObjects_241; }
	inline void set_m_subTextObjects_241(TMP_SubMeshUIU5BU5D_tB20103A3891C74028E821AA6857CD89D59C9A87E* value)
	{
		___m_subTextObjects_241 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subTextObjects_241), (void*)value);
	}

	inline static int32_t get_offset_of_m_previousLossyScaleY_242() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_previousLossyScaleY_242)); }
	inline float get_m_previousLossyScaleY_242() const { return ___m_previousLossyScaleY_242; }
	inline float* get_address_of_m_previousLossyScaleY_242() { return &___m_previousLossyScaleY_242; }
	inline void set_m_previousLossyScaleY_242(float value)
	{
		___m_previousLossyScaleY_242 = value;
	}

	inline static int32_t get_offset_of_m_RectTransformCorners_243() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_RectTransformCorners_243)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get_m_RectTransformCorners_243() const { return ___m_RectTransformCorners_243; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of_m_RectTransformCorners_243() { return &___m_RectTransformCorners_243; }
	inline void set_m_RectTransformCorners_243(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		___m_RectTransformCorners_243 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransformCorners_243), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvasRenderer_244() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvasRenderer_244)); }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * get_m_canvasRenderer_244() const { return ___m_canvasRenderer_244; }
	inline CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 ** get_address_of_m_canvasRenderer_244() { return &___m_canvasRenderer_244; }
	inline void set_m_canvasRenderer_244(CanvasRenderer_tB4D9C9FE77FD5C9C4546FC022D6E956960BC2B72 * value)
	{
		___m_canvasRenderer_244 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvasRenderer_244), (void*)value);
	}

	inline static int32_t get_offset_of_m_canvas_245() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_canvas_245)); }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * get_m_canvas_245() const { return ___m_canvas_245; }
	inline Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 ** get_address_of_m_canvas_245() { return &___m_canvas_245; }
	inline void set_m_canvas_245(Canvas_tBC28BF1DD8D8499A89B5781505833D3728CF8591 * value)
	{
		___m_canvas_245 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_canvas_245), (void*)value);
	}

	inline static int32_t get_offset_of_m_isFirstAllocation_246() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isFirstAllocation_246)); }
	inline bool get_m_isFirstAllocation_246() const { return ___m_isFirstAllocation_246; }
	inline bool* get_address_of_m_isFirstAllocation_246() { return &___m_isFirstAllocation_246; }
	inline void set_m_isFirstAllocation_246(bool value)
	{
		___m_isFirstAllocation_246 = value;
	}

	inline static int32_t get_offset_of_m_max_characters_247() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_max_characters_247)); }
	inline int32_t get_m_max_characters_247() const { return ___m_max_characters_247; }
	inline int32_t* get_address_of_m_max_characters_247() { return &___m_max_characters_247; }
	inline void set_m_max_characters_247(int32_t value)
	{
		___m_max_characters_247 = value;
	}

	inline static int32_t get_offset_of_m_isMaskingEnabled_248() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isMaskingEnabled_248)); }
	inline bool get_m_isMaskingEnabled_248() const { return ___m_isMaskingEnabled_248; }
	inline bool* get_address_of_m_isMaskingEnabled_248() { return &___m_isMaskingEnabled_248; }
	inline void set_m_isMaskingEnabled_248(bool value)
	{
		___m_isMaskingEnabled_248 = value;
	}

	inline static int32_t get_offset_of_m_baseMaterial_249() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_baseMaterial_249)); }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * get_m_baseMaterial_249() const { return ___m_baseMaterial_249; }
	inline Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 ** get_address_of_m_baseMaterial_249() { return &___m_baseMaterial_249; }
	inline void set_m_baseMaterial_249(Material_tF7DB3BF0C24DEC2FE0CB51E5DF5053D5223C8598 * value)
	{
		___m_baseMaterial_249 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_baseMaterial_249), (void*)value);
	}

	inline static int32_t get_offset_of_m_isScrollRegionSet_250() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isScrollRegionSet_250)); }
	inline bool get_m_isScrollRegionSet_250() const { return ___m_isScrollRegionSet_250; }
	inline bool* get_address_of_m_isScrollRegionSet_250() { return &___m_isScrollRegionSet_250; }
	inline void set_m_isScrollRegionSet_250(bool value)
	{
		___m_isScrollRegionSet_250 = value;
	}

	inline static int32_t get_offset_of_m_stencilID_251() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_stencilID_251)); }
	inline int32_t get_m_stencilID_251() const { return ___m_stencilID_251; }
	inline int32_t* get_address_of_m_stencilID_251() { return &___m_stencilID_251; }
	inline void set_m_stencilID_251(int32_t value)
	{
		___m_stencilID_251 = value;
	}

	inline static int32_t get_offset_of_m_maskOffset_252() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_maskOffset_252)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_m_maskOffset_252() const { return ___m_maskOffset_252; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_m_maskOffset_252() { return &___m_maskOffset_252; }
	inline void set_m_maskOffset_252(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___m_maskOffset_252 = value;
	}

	inline static int32_t get_offset_of_m_EnvMapMatrix_253() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_EnvMapMatrix_253)); }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  get_m_EnvMapMatrix_253() const { return ___m_EnvMapMatrix_253; }
	inline Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * get_address_of_m_EnvMapMatrix_253() { return &___m_EnvMapMatrix_253; }
	inline void set_m_EnvMapMatrix_253(Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  value)
	{
		___m_EnvMapMatrix_253 = value;
	}

	inline static int32_t get_offset_of_m_isRegisteredForEvents_254() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRegisteredForEvents_254)); }
	inline bool get_m_isRegisteredForEvents_254() const { return ___m_isRegisteredForEvents_254; }
	inline bool* get_address_of_m_isRegisteredForEvents_254() { return &___m_isRegisteredForEvents_254; }
	inline void set_m_isRegisteredForEvents_254(bool value)
	{
		___m_isRegisteredForEvents_254 = value;
	}

	inline static int32_t get_offset_of_m_recursiveCountA_255() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_recursiveCountA_255)); }
	inline int32_t get_m_recursiveCountA_255() const { return ___m_recursiveCountA_255; }
	inline int32_t* get_address_of_m_recursiveCountA_255() { return &___m_recursiveCountA_255; }
	inline void set_m_recursiveCountA_255(int32_t value)
	{
		___m_recursiveCountA_255 = value;
	}

	inline static int32_t get_offset_of_loopCountA_256() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___loopCountA_256)); }
	inline int32_t get_loopCountA_256() const { return ___loopCountA_256; }
	inline int32_t* get_address_of_loopCountA_256() { return &___loopCountA_256; }
	inline void set_loopCountA_256(int32_t value)
	{
		___loopCountA_256 = value;
	}

	inline static int32_t get_offset_of_m_isRebuildingLayout_257() { return static_cast<int32_t>(offsetof(TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438, ___m_isRebuildingLayout_257)); }
	inline bool get_m_isRebuildingLayout_257() const { return ___m_isRebuildingLayout_257; }
	inline bool* get_address_of_m_isRebuildingLayout_257() { return &___m_isRebuildingLayout_257; }
	inline void set_m_isRebuildingLayout_257(bool value)
	{
		___m_isRebuildingLayout_257 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Object[]
struct ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A  : public RuntimeArray
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
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
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


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared (RuntimeObject * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared (RuntimeObject * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared_inline (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mF8FF73BE3718AE0B06267C2DB18FDE1812BFA3C9_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Queue_1_Dequeue_m044CB40FECAA27576757F5D7E4BD5B162E6F279C_gshared (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method);

// GameManager GameManager::GetInstance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline (const RuntimeMethod* method);
// System.Void AmmoButton::UpdatePrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmoButton_UpdatePrice_m6133A15AC7FDC64060E453EBCE22E178B5D4A583 (AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02 (int32_t* __this, const RuntimeMethod* method);
// System.Void TMPro.TMP_Text::set_text(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A (TMP_Text_t7BA5B6522651EBED2D8E2C92CBE3F17C14075CE7 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void PurchaseableButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseableButton__ctor_mA597E13945A1D59B3A57826A07A715BF35AAAB0D (PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Cursor::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431 (bool ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387 (String_t* ___axisName0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0 (float ___angle0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___axis1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790 (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___lhs0, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rhs1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E (const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784 (int32_t ___key0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mEAEC84B222C60319D593E456D769B3311DFCEF97 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_realtimeSinceStartup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___translation0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m3424566A0D19A1487AE3A82B08C47F2A2D2A26CB (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_time()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8 (const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905 (const RuntimeMethod* method);
// System.Void UnityEngine.GUI::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_set_color_mDB63437059F35CAC23B01D03CF1CE3A66EBB9643 (Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3 (const RuntimeMethod* method);
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150 (const RuntimeMethod* method);
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280 (Rect_t35B976DE901B5423C11705E156938EA27AB402CE * __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07 (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* ___args0, const RuntimeMethod* method);
// System.Void UnityEngine.GUI::Label(UnityEngine.Rect,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUI_Label_m3262E5E30013ECAF83C075710F7761E49BEA5CCE (Rect_t35B976DE901B5423C11705E156938EA27AB402CE  ___position0, String_t* ___text1, const RuntimeMethod* method);
// System.Void UnityEngine.Random::InitState(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random_InitState_mCCD7D065EE8613CF0053C97D77C2C4A12F2BCA21 (int32_t ___seed0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Light>()
inline Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * Component_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m1DCED5DB1934151FC68A8E7CAECF7986359D7107 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m4E9152844D85D03FEDA5AE4599AFAFC3C66EFF23 (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728 (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384 (float ___min0, float ___max1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_insideUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Random_get_insideUnitSphere_m10033DFB85B1A21CE44201CB0E421F27B77A868F (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C (Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * __this, float ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___a0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863 (Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___vector0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A (Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Damageable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageable__ctor_mA624F1EE721D3F8D8A70640ED8CF76ACC63998A9 (Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AI.NavMeshAgent>()
inline NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * Component_GetComponent_TisNavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB_mFCC507CF7EDAE5FCD236FEC7ABD0A2668D7FCB96 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_velocity(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_velocity_m76D7D2F03D759A3A63FB0B1E739650591DE8F876 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// Scoring Scoring::GetInstance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02_inline (const RuntimeMethod* method);
// System.Void Scoring::EnemyHit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoring_EnemyHit_m080CBA7F9189CA94A6CA9A6F228FC7F4B8893E81 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___enemyPos0, const RuntimeMethod* method);
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_m2C2144E88C664B9DE839A94B6F282D5908BF1C29 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method);
// System.Void Scoring::EnemyKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoring_EnemyKill_mA67072CF9ADB5D118B7F7FAD32AAC7D6DFC9BC5C (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method);
// System.Void GameManager::EnemyDied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnemyDied_m7BCDE0AF041162A5E95CCF48A52A9587308AB6E4 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.AI.NavMeshAgent::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavMeshAgent_get_velocity_m1CF6CC11732234E2E3EC3B778B79C5492A990186 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49 (Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * __this, const RuntimeMethod* method);
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<IDamageable>()
inline RuntimeObject* GameObject_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_m178D924FAD9BC62D5A28723DF4B3682AE5D08023 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Void Enemy::DieNoPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_DieNoPoints_m68A16AD4A2F62F8A5C7BA7CAFBDBEBDC7B4C96C1 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AI.NavMeshAgent::set_destination(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavMeshAgent_set_destination_m006DABA697BAB705D68EE7208171C0230EB644D7 (NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___value0, const RuntimeMethod* method);
// System.Void State/StateChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged__ctor_m8AA4A8CD1B7DEC02D2ECCBC420950580B10A779A (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void State::add_GameStateChanged(State/StateChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_add_GameStateChanged_m2618E258FC9540D124C2F76659A386517D30B72F (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * ___value0, const RuntimeMethod* method);
// State/GameState State::GetGameState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t State_GetGameState_m54A8B9BD9346B78AC4CFA3A980F02E384348B44B_inline (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B (Behaviour_tBDC7E9C3C898AD8348891B82D3E345801D920CA8 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void State::remove_GameStateChanged(State/StateChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_remove_GameStateChanged_m840886B5A411DCAA538BD5D2FF26F4B8C3D4A5EE (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___exists0, const RuntimeMethod* method);
// UIManager UIManager::GetInstance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * UIManager_GetInstance_m2CEB5E722EE87CB720B1D2C8C5596D2B537A5A6C_inline (const RuntimeMethod* method);
// PoolManager PoolManager::GetInstance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * PoolManager_GetInstance_mE8BBF4EBB3F655D9EAAFF62EA621AD367D4233DC_inline (const RuntimeMethod* method);
// State State::GetInstance()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_inline (const RuntimeMethod* method);
// System.Void State::add_WaveStateChanged(State/StateChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_add_WaveStateChanged_m07846383CD17959BE8A8FD840F662E60C4CA0D13 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * ___value0, const RuntimeMethod* method);
// System.Void PoolManager::CreateEnemyPool(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_CreateEnemyPool_m4A4213DFAAE9D833789949BD44CF2B1525B86B3C (PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, int32_t ___amount1, const RuntimeMethod* method);
// System.Void GameManager::StartEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartEnemies_m2270859EFD02CAB5801B4DEDFC0E31CF2C844784 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041 (float ___f0, const RuntimeMethod* method);
// System.Void UIManager::CanPause(System.Boolean)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UIManager_CanPause_m109D06ED90BD689AB628DE1C3F0A62D463C212D4_inline (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, bool ___pause0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameManager::StartNewWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartNewWave_m3EE69DE0615A8B9A0B9FACFA329F42635082EA91 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_tAE7DB2FC70A0AE6477F896F852057CB0754F06EC * MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7 (MonoBehaviour_t4A60845CF505405AF8BE8C61CC07F75CADEF6429 * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void State::UnPauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UnPauseGame_m27A0F1F9A8F2BF763B629D1A7CF53AC02C78FDEE (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<IDamageable>()
inline RuntimeObject* Component_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_mA9D82E44CC018CCA691758D999FF6E2B6BDA8068 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// State/WaveState State::GetWaveState()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t State_GetWaveState_m671090CC8F21B08AACE28C95F02BD54B652A9C61_inline (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// System.Void State::SetWaveStatePaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_SetWaveStatePaused_m5F081D286798759EAFBF735BEE534A199A6FAF2F (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// System.Void Scoring::SurvivedWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoring_SurvivedWave_m76A6452E8A4F6B4CEF59CF81AE13017938F0DED4 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method);
// System.Void State::Shop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_Shop_m7876D412A5161EC31C5C465299D27B83C28B58A2 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// System.Void GameManager::SpawnEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnEnemies_m7C05C89B370EAB82ADF103E6A7966521FA5CDDBC (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC (int32_t ___key0, const RuntimeMethod* method);
// System.Boolean UIManager::GetCanPause()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool UIManager_GetCanPause_m5E6B9A4CCB5350905D13A0FDC72D747FBD67AB9E_inline (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method);
// System.Void State::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_PauseGame_mDDAE38C87C223F080256CF58525E596C65BE4C14 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<Spawner>::get_Count()
inline int32_t List_1_get_Count_mC24601E344AD1C7AA8A1E7E75FFD1B3484B98095_inline (List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A *, const RuntimeMethod*))List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780 (int32_t ___min0, int32_t ___max1, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<Spawner>::get_Item(System.Int32)
inline Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D * List_1_get_Item_m56233872D5CA605BE5A1EE5E792FAD05CAE581C2_inline (List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D * (*) (List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A *, int32_t, const RuntimeMethod*))List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.GameObject PoolManager::GetEnemyFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PoolManager_GetEnemyFromPool_mD2BE242337D1F987C891E650CEF40D65EBCD6C7C (PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * __this, const RuntimeMethod* method);
// System.Void Spawner::Spawn(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Spawn_mC4A347D5B0A4DF08B424A734CD76E7AD3B2EEE29 (Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___objToSpawn0, const RuntimeMethod* method);
// System.Void GameManager/<StartNewWave>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartNewWaveU3Ed__26__ctor_m6D9FFA288CF45197140BBA0A178A75CF580B66E0 (U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559 (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void State::SetWaveStateSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_SetWaveStateSpawning_m1DBDA590B523E1C41B79171D88C1964D13A63AAA (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33 (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * __this, const RuntimeMethod* method);
// System.Void HealthButton::UpdatePrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthButton_UpdatePrice_mEBC23202B04E53CD9F62A47F8018A9ACD7C8462C (HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F * __this, const RuntimeMethod* method);
// System.Void IncreasedDamageButton::UpdateCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedDamageButton_UpdateCost_m5E1FB40B4658359858ACD32BE8BFAC412EE4359A (IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76 * __this, const RuntimeMethod* method);
// System.Void IncreasedKnockbackButton::UpdateCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedKnockbackButton_UpdateCost_m00CA0826E4A76C5C7B31772A9BF9E1D1063E77ED (IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95 (const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method);
// System.Void Player::RotateToMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_RotateToMouse_m8F615ACC8EE905F5E309ED8DB5964C855320FA78 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A (int32_t ___button0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53 (const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::WorldToScreenPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF (Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void State::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_GameOver_mC001040632873A57029C559FB842CC059260D57A (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawRay_m29E7E14150B9A13FD49138FD3B9BF062B0E2DEBF (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___r0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60 (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_mFE9C42D5336D4F9EFF8CD96E2A26962EFF523947_gshared)(___original0, ___position1, ___rotation2, method);
}
// !!0 UnityEngine.GameObject::AddComponent<EnemyNavigation>()
inline EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F * GameObject_AddComponent_TisEnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F_mF43971EB4E9F2BC2C0A9E64351D17D676CFBBAC8 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::Add(!0)
inline void List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687 (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))List_1_Add_m6930161974C7504C80F52EC379EF012387D43138_gshared)(__this, ___item0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.GameObject>::GetEnumerator()
inline Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  (*) (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::get_Current()
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_inline (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::MoveNext()
inline bool Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969 (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.GameObject>::Dispose()
inline void Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812 (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void RespawnBarricadesButton::UpdatePrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnBarricadesButton_UpdatePrice_m9DD643C3772526846F1914182983AC41D36D2840 (RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, const RuntimeMethod* method);
// System.Int32 Scoring::DistanceScore(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scoring_DistanceScore_mD9812854052C0EAA54AC7F724AD352A2B2A259F1 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___enemyPos0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Gizmos::DrawWireSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Gizmos_DrawWireSphere_mF6F2BC5CDF7B3F312FE9AB579CDC1C6B72154BCF (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___center0, float ___radius1, const RuntimeMethod* method);
// System.Void State::OnGameStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnGameStateChanged_m95BEB30587F7BEE184E23A77967083557D04A73E (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Void State/StateChanged::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged_Invoke_mC0D1E6BCCBF99B1EEFD63E60B0850BECF9ADC684 (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * __this, const RuntimeMethod* method);
// System.Void State::SetGameState(State/GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_SetGameState_m21B5C6D970C8CA21667614F11DDDDB2E1CCAC2B6 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, int32_t ___newState0, const RuntimeMethod* method);
// System.Void State::OnWaveStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnWaveStateChanged_mBC8DE70A4E5F98E5C11150948A95D26E69CC5E12 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method);
// System.Void State::SetWaveState(State/WaveState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_SetWaveState_mD116D38C52ECB9A9EB8A9CA056D0BC597C424F5C (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, int32_t ___state0, const RuntimeMethod* method);
// System.Void UIBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101 (UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 * __this, const RuntimeMethod* method);
// System.Void UIBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B (UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 * __this, const RuntimeMethod* method);
// System.Void UIBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2 (UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 * __this, const RuntimeMethod* method);
// System.Void UIBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB (UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 * __this, const RuntimeMethod* method);
// System.Int32 Scoring::GetWavesSurvived()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Scoring_GetWavesSurvived_m50F14578BA88D194C3E3C2089F62C679617FB674_inline (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method);
// System.Int32 Scoring::GetKills()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Scoring_GetKills_mA254377BDA58EEDE91960BAE66882B48A3046344_inline (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method);
// System.Int32 Scoring::GetTotalMoney()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Scoring_GetTotalMoney_m289384516363E56CFE7FC4F12D63C026B237DA95_inline (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32,UnityEngine.SceneManagement.LoadSceneMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m84E39F1210BA4482CF2D8A2F068198760DE4B4C5 (int32_t ___sceneBuildIndex0, int32_t ___mode1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::.ctor()
inline void Queue_1__ctor_mA5BDA0FDC59A60309E7B7651D7D68A650908FABD (Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 *, const RuntimeMethod*))Queue_1__ctor_m57D20E9B6532A644845C835306D5BCBCD3163964_gshared)(__this, method);
}
// System.Void UIManager::OpenWindow(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ui0, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Transform)
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___original0, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m73EEBB28CACDFA6979C3B74E0EE960684825A5DD_gshared)(___original0, ___parent1, method);
}
// System.Int32 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::get_Count()
inline int32_t Queue_1_get_Count_mF3FF543F43616B19548F1A7FBC8BB7C79AF58015_inline (Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 *, const RuntimeMethod*))Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared_inline)(__this, method);
}
// System.Void UIManager::CloseWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CloseWindow_m912797EE56B153F0C6FADFA02EFD8235FD8E0C1D (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Enqueue(!0)
inline void Queue_1_Enqueue_mE8CAD285D84453EFF8B2D30D84DE431C4DD986B8 (Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 *, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))Queue_1_Enqueue_mF8FF73BE3718AE0B06267C2DB18FDE1812BFA3C9_gshared)(__this, ___item0, method);
}
// !0 System.Collections.Generic.Queue`1<UnityEngine.GameObject>::Dequeue()
inline GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * Queue_1_Dequeue_mAFDC3F18F0BE5A1F4EBC18346C8ECCFDB05769CA (Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * (*) (Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 *, const RuntimeMethod*))Queue_1_Dequeue_m044CB40FECAA27576757F5D7E4BD5B162E6F279C_gshared)(__this, method);
}
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Collections.IEnumerator UITime::Countdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UITime_Countdown_m6A96B225942F81DCDAE8F8FA8D36C063A81D525B (UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * __this, const RuntimeMethod* method);
// System.Void UITime/<Countdown>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6__ctor_m43A04F807BA7A5371FFD6443BF93CCF2A4E54E9B (U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String System.Single::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE (float* __this, String_t* ___format0, const RuntimeMethod* method);
// System.Void UITime::SetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITime_SetText_m85CBF7FF62BACAE6C1563383F51484DBDC9B35F4 (UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8 (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * (*) (Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m233A1E6EF90A3BA46CD83BFC568F4E4DB4D93CC9_gshared)(__this, method);
}
// System.Void UnityEngine.ParticleSystem::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleSystem_Play_m5BC5E6B56FCF639CAD5DF41B51DC05A0B444212F (ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643 (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD (AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * __this, AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * ___clip0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_mCE618579F667A62D15CB74CEF76147136EB2D495 (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___ray0, RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * ___hitInfo1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.RaycastHit::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279 (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * __this, const RuntimeMethod* method);
// System.Void Weapon::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Awake_m0513FE0E521BFC4BBDC162CD85821E1EFD3B7BCD (Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * __this, const RuntimeMethod* method);
// System.Void Weapon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Update_m7DA8D41CDC329A2B7B4C3B31A2A67D8D3763BE9E (Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * __this, const RuntimeMethod* method);
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m77DEF0E33330AD6C46C2283D8AD2F7C355389EF9 (Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550 (const RuntimeMethod* method);
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
// System.Void AmmoButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmoButton_Start_m08911FA0E1D53E37BAD2451CA977F147B8963EDF (AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74 * __this, const RuntimeMethod* method)
{
	{
		// playerWeapon = GameManager.GetInstance().player.weapon;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = L_0->get_player_17();
		NullCheck(L_1);
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_2 = L_1->get_weapon_7();
		__this->set_playerWeapon_8(L_2);
		// }
		return;
	}
}
// System.Void AmmoButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmoButton_OnEnable_m4A0E8C97CF68B279D75AD77302F9B2488729D881 (AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74 * __this, const RuntimeMethod* method)
{
	{
		// UpdatePrice();
		AmmoButton_UpdatePrice_m6133A15AC7FDC64060E453EBCE22E178B5D4A583(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AmmoButton::UpdatePrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmoButton_UpdatePrice_m6133A15AC7FDC64060E453EBCE22E178B5D4A583 (AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74 * __this, const RuntimeMethod* method)
{
	{
		// costText.text = price.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_costText_9();
		int32_t* L_1 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_address_of_price_4();
		String_t* L_2 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AmmoButton::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmoButton_Buy_mAC12C50B0245588CB1A8733FAE60F3696153D489 (AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AmmoButton_Buy_mAC12C50B0245588CB1A8733FAE60F3696153D489_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Scoring.money >= price)
		int32_t L_0 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		int32_t L_1 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_price_4();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0040;
		}
	}
	{
		// Scoring.money -= price;
		int32_t L_2 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		int32_t L_3 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_price_4();
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_money_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)));
		// playerWeapon.ammo += 50;
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_4 = __this->get_playerWeapon_8();
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_ammo_5();
		NullCheck(L_5);
		L_5->set_ammo_5(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)50))));
		// timesPurchased++;
		int32_t L_7 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->set_timesPurchased_7(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void AmmoButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AmmoButton__ctor_m5816FF9AE83B1A0D375334EEF1E8CFC5D38CCDE6 (AmmoButton_tB6F4DC8808459FFDF46106A61518E70F8B641D74 * __this, const RuntimeMethod* method)
{
	{
		PurchaseableButton__ctor_mA597E13945A1D59B3A57826A07A715BF35AAAB0D(__this, /*hidden argument*/NULL);
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
// System.Void Aura2API.AuraFreeCamera::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuraFreeCamera_Start_m59CC93B489B2875D319AA2846EA668E0BB3F332F (AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC * __this, const RuntimeMethod* method)
{
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_yaw = transform.rotation.eulerAngles.y;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_1 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		float L_3 = L_2.get_y_3();
		__this->set_m_yaw_9(L_3);
		// m_pitch = transform.rotation.eulerAngles.x;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_0), /*hidden argument*/NULL);
		float L_7 = L_6.get_x_2();
		__this->set_m_pitch_10(L_7);
		// Cursor.visible = showCursor;
		bool L_8 = __this->get_showCursor_5();
		Cursor_set_visible_mDB51E60B3D7B14873A6F5FBE5E0A432D4A46C431(L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Aura2API.AuraFreeCamera::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuraFreeCamera_Update_mD7F53BF89E33BC30A4035BE53EE445970263DA3F (AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AuraFreeCamera_Update_mD7F53BF89E33BC30A4035BE53EE445970263DA3F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B3_0 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B7_0 = 0.0f;
	float G_B6_0 = 0.0f;
	float G_B8_0 = 0.0f;
	float G_B8_1 = 0.0f;
	float G_B10_0 = 0.0f;
	float G_B10_1 = 0.0f;
	float G_B9_0 = 0.0f;
	float G_B9_1 = 0.0f;
	float G_B11_0 = 0.0f;
	float G_B11_1 = 0.0f;
	float G_B11_2 = 0.0f;
	{
		// if (!freeLookEnabled)
		bool L_0 = __this->get_freeLookEnabled_4();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// m_yaw = (m_yaw + lookSpeed * Input.GetAxis("Mouse X")) % 360f;
		float L_1 = __this->get_m_yaw_9();
		float L_2 = __this->get_lookSpeed_6();
		float L_3 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral294D359ECE148A430F19981912277E5154CA19E0, /*hidden argument*/NULL);
		__this->set_m_yaw_9((fmodf(((float)il2cpp_codegen_add((float)L_1, (float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)))), (360.0f))));
		// m_pitch = (m_pitch - lookSpeed * Input.GetAxis("Mouse Y")) % 360f;
		float L_4 = __this->get_m_pitch_10();
		float L_5 = __this->get_lookSpeed_6();
		float L_6 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral1E88AB05D76FF253F292B74866D32460BB3836E2, /*hidden argument*/NULL);
		__this->set_m_pitch_10((fmodf(((float)il2cpp_codegen_subtract((float)L_4, (float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)))), (360.0f))));
		// transform.rotation = Quaternion.AngleAxis(m_yaw, Vector3.up) * Quaternion.AngleAxis(m_pitch, Vector3.right);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_7 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_8 = __this->get_m_yaw_9();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_8, L_9, /*hidden argument*/NULL);
		float L_11 = __this->get_m_pitch_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_12 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(L_11, L_12, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_7);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_7, L_14, /*hidden argument*/NULL);
		// var speed = Time.deltaTime * (Input.GetKey(KeyCode.LeftShift) ? sprintSpeed : moveSpeed);
		float L_15 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		bool L_16 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)304), /*hidden argument*/NULL);
		G_B3_0 = L_15;
		if (L_16)
		{
			G_B4_0 = L_15;
			goto IL_009a;
		}
	}
	{
		float L_17 = __this->get_moveSpeed_7();
		G_B5_0 = L_17;
		G_B5_1 = G_B3_0;
		goto IL_00a0;
	}

IL_009a:
	{
		float L_18 = __this->get_sprintSpeed_8();
		G_B5_0 = L_18;
		G_B5_1 = G_B4_0;
	}

IL_00a0:
	{
		// var forward = speed * Input.GetAxis("Vertical");
		float L_19 = ((float)il2cpp_codegen_multiply((float)G_B5_1, (float)G_B5_0));
		float L_20 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4B937CC841D82F8936CEF1EFB88708AB5B0F1EE5, /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_multiply((float)L_19, (float)L_20));
		// var right = speed * Input.GetAxis("Horizontal");
		float L_21 = L_19;
		float L_22 = Input_GetAxis_m6454498C755B9A2C964875927FB557CA9E75D387(_stringLiteral4F57A1CE99E68A7B05C42D0A7EA0070EAFABD31C, /*hidden argument*/NULL);
		V_1 = ((float)il2cpp_codegen_multiply((float)L_21, (float)L_22));
		// var up = speed * ((Input.GetKey(KeyCode.Q) ? 1f : 0f) - (Input.GetKey(KeyCode.E) ? 1f : 0f));
		bool L_23 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)113), /*hidden argument*/NULL);
		G_B6_0 = L_21;
		if (L_23)
		{
			G_B7_0 = L_21;
			goto IL_00cb;
		}
	}
	{
		G_B8_0 = (0.0f);
		G_B8_1 = G_B6_0;
		goto IL_00d0;
	}

IL_00cb:
	{
		G_B8_0 = (1.0f);
		G_B8_1 = G_B7_0;
	}

IL_00d0:
	{
		bool L_24 = Input_GetKey_m46AA83E14F9C3A75E06FE0A8C55740D47B2DB784(((int32_t)101), /*hidden argument*/NULL);
		G_B9_0 = G_B8_0;
		G_B9_1 = G_B8_1;
		if (L_24)
		{
			G_B10_0 = G_B8_0;
			G_B10_1 = G_B8_1;
			goto IL_00e0;
		}
	}
	{
		G_B11_0 = (0.0f);
		G_B11_1 = G_B9_0;
		G_B11_2 = G_B9_1;
		goto IL_00e5;
	}

IL_00e0:
	{
		G_B11_0 = (1.0f);
		G_B11_1 = G_B10_0;
		G_B11_2 = G_B10_1;
	}

IL_00e5:
	{
		V_2 = ((float)il2cpp_codegen_multiply((float)G_B11_2, (float)((float)il2cpp_codegen_subtract((float)G_B11_1, (float)G_B11_0))));
		// transform.position += transform.forward * forward + transform.right * right + Vector3.up * up;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_26 = L_25;
		NullCheck(L_26);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_26, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_28 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_28, /*hidden argument*/NULL);
		float L_30 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_29, L_30, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_32 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Transform_get_right_mC32CE648E98D3D4F62F897A2751EE567C7C0CFB0(L_32, /*hidden argument*/NULL);
		float L_34 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_33, L_34, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_36 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_35, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_37 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		float L_38 = V_2;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_39 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_37, L_38, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_40 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_36, L_39, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_41 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_27, L_40, /*hidden argument*/NULL);
		NullCheck(L_26);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_26, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Aura2API.AuraFreeCamera::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AuraFreeCamera__ctor_mAE867DC103EE6727FC911573413007917E41AEFE (AuraFreeCamera_t371F62B8A59C3B2C98093B9D91CD51FB9C35EDCC * __this, const RuntimeMethod* method)
{
	{
		// public float lookSpeed = 5f;
		__this->set_lookSpeed_6((5.0f));
		// public float moveSpeed = 5f;
		__this->set_moveSpeed_7((5.0f));
		// public float sprintSpeed = 50f;
		__this->set_sprintSpeed_8((50.0f));
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
// System.Void Aura2API.AutoMoveAndRotate::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveAndRotate_Start_m23FB00BEB45304DEC609C28AFE670F292EC30697 (AutoMoveAndRotate_tCFBA53289008A1AC602A2DA108126401EB3C9131 * __this, const RuntimeMethod* method)
{
	{
		// m_LastRealTime = Time.realtimeSinceStartup;
		float L_0 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_m_LastRealTime_7(L_0);
		// }
		return;
	}
}
// System.Void Aura2API.AutoMoveAndRotate::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveAndRotate_Update_m7CCD0E5BE36C93A81AB64CFA4AF11D27008FBE2E (AutoMoveAndRotate_tCFBA53289008A1AC602A2DA108126401EB3C9131 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AutoMoveAndRotate_Update_m7CCD0E5BE36C93A81AB64CFA4AF11D27008FBE2E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float deltaTime = Time.deltaTime;
		float L_0 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		V_0 = L_0;
		// if (ignoreTimescale)
		bool L_1 = __this->get_ignoreTimescale_6();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// deltaTime = (Time.realtimeSinceStartup - m_LastRealTime);
		float L_2 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		float L_3 = __this->get_m_LastRealTime_7();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_2, (float)L_3));
		// m_LastRealTime = Time.realtimeSinceStartup;
		float L_4 = Time_get_realtimeSinceStartup_mCA1086EC9DFCF135F77BC46D3B7127711EA3DE03(/*hidden argument*/NULL);
		__this->set_m_LastRealTime_7(L_4);
	}

IL_0026:
	{
		// transform.Translate(moveUnitsPerSecond.value*deltaTime, moveUnitsPerSecond.space);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_5 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * L_6 = __this->get_moveUnitsPerSecond_4();
		NullCheck(L_6);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = L_6->get_value_0();
		float L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_7, L_8, /*hidden argument*/NULL);
		Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * L_10 = __this->get_moveUnitsPerSecond_4();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_space_1();
		NullCheck(L_5);
		Transform_Translate_m91072CBFB456E51FC3435D890E3F7E6A04F4BABD(L_5, L_9, L_11, /*hidden argument*/NULL);
		// transform.Rotate(rotateDegreesPerSecond.value*deltaTime, rotateDegreesPerSecond.space);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * L_13 = __this->get_rotateDegreesPerSecond_5();
		NullCheck(L_13);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_14 = L_13->get_value_0();
		float L_15 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_16 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_14, L_15, /*hidden argument*/NULL);
		Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * L_17 = __this->get_rotateDegreesPerSecond_5();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_space_1();
		NullCheck(L_12);
		Transform_Rotate_m3424566A0D19A1487AE3A82B08C47F2A2D2A26CB(L_12, L_16, L_18, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Aura2API.AutoMoveAndRotate::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AutoMoveAndRotate__ctor_mDE9E2DB098B8FA897731193F4668B7173CCA799D (AutoMoveAndRotate_tCFBA53289008A1AC602A2DA108126401EB3C9131 * __this, const RuntimeMethod* method)
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
// System.Void Aura2API.AutoMoveAndRotate_Vector3andSpace::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3andSpace__ctor_m8CF38A6A2B968C2BBCB512239D4BC5AFD4F88702 (Vector3andSpace_tE3A75F19099C8710A1CE379BB427DD219139382D * __this, const RuntimeMethod* method)
{
	{
		// public Space space = Space.Self;
		__this->set_space_1(1);
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
// System.Void Aura2API.DebugFps::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugFps_Update_m8D9C37B0621DEF3B6A6E2A70AC18BA872CBEBE96 (DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3 * __this, const RuntimeMethod* method)
{
	{
		// if(Time.time - _timestamp > interval)
		float L_0 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_1 = __this->get__timestamp_7();
		float L_2 = __this->get_interval_4();
		if ((!(((float)((float)il2cpp_codegen_subtract((float)L_0, (float)L_1))) > ((float)L_2))))
		{
			goto IL_0045;
		}
	}
	{
		// _meanFps = _accumulationValue / _framesCount;
		float L_3 = __this->get__accumulationValue_5();
		int32_t L_4 = __this->get__framesCount_6();
		__this->set__meanFps_9(((float)((float)L_3/(float)(((float)((float)L_4))))));
		// _timestamp = Time.time;
		float L_5 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		__this->set__timestamp_7(L_5);
		// _framesCount = 0;
		__this->set__framesCount_6(0);
		// _accumulationValue = 0;
		__this->set__accumulationValue_5((0.0f));
	}

IL_0045:
	{
		// ++_framesCount;
		int32_t L_6 = __this->get__framesCount_6();
		__this->set__framesCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
		// _rawFps = 1.0f / Time.deltaTime;
		float L_7 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set__rawFps_8(((float)((float)(1.0f)/(float)L_7)));
		// _accumulationValue += _rawFps;
		float L_8 = __this->get__accumulationValue_5();
		float L_9 = __this->get__rawFps_8();
		__this->set__accumulationValue_5(((float)il2cpp_codegen_add((float)L_8, (float)L_9)));
		// }
		return;
	}
}
// System.Void Aura2API.DebugFps::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugFps_OnGUI_mEE4F96F024233B0BEBBF87D3BF77B486F6479116 (DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DebugFps_OnGUI_mEE4F96F024233B0BEBBF87D3BF77B486F6479116_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GUI.color = Color.white;
		Color_t119BCA590009762C7223FDD3AF9706653AC84ED2  L_0 = Color_get_white_mE7F3AC4FF0D6F35E48049C73116A222CBE96D905(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(GUI_t3E5CBC6B113E392EBBE1453DEF2B7CD020F345AA_il2cpp_TypeInfo_var);
		GUI_set_color_mDB63437059F35CAC23B01D03CF1CE3A66EBB9643(L_0, /*hidden argument*/NULL);
		// GUI.Label(new Rect(0, 0, Screen.width, Screen.height), "Mean FPS over " + interval + " second(s) = " + _meanFps + "\nRaw FPS = " + _rawFps);
		int32_t L_1 = Screen_get_width_m8ECCEF7FF17395D1237BC0193D7A6640A3FEEAD3(/*hidden argument*/NULL);
		int32_t L_2 = Screen_get_height_mF5B64EBC4CDE0EAAA5713C1452ED2CE475F25150(/*hidden argument*/NULL);
		Rect_t35B976DE901B5423C11705E156938EA27AB402CE  L_3;
		memset((&L_3), 0, sizeof(L_3));
		Rect__ctor_m50B92C75005C9C5A0D05E6E0EBB43AFAF7C66280((&L_3), (0.0f), (0.0f), (((float)((float)L_1))), (((float)((float)L_2))), /*hidden argument*/NULL);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_4 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)SZArrayNew(ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_5 = L_4;
		NullCheck(L_5);
		ArrayElementTypeCheck (L_5, _stringLiteral64D3BC46076D60D72B5E3F73E778E959AB181915);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject *)_stringLiteral64D3BC46076D60D72B5E3F73E778E959AB181915);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_6 = L_5;
		float L_7 = __this->get_interval_4();
		float L_8 = L_7;
		RuntimeObject * L_9 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_8);
		NullCheck(L_6);
		ArrayElementTypeCheck (L_6, L_9);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject *)L_9);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_10 = L_6;
		NullCheck(L_10);
		ArrayElementTypeCheck (L_10, _stringLiteralBBDC7757D030FE9E37EE5FC4AAF0A4A8B7EE63AF);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject *)_stringLiteralBBDC7757D030FE9E37EE5FC4AAF0A4A8B7EE63AF);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_11 = L_10;
		float L_12 = __this->get__meanFps_9();
		float L_13 = L_12;
		RuntimeObject * L_14 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_13);
		NullCheck(L_11);
		ArrayElementTypeCheck (L_11, L_14);
		(L_11)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject *)L_14);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_15 = L_11;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral117DEFDCBAEB752F96F21605CE42D543CD8A1378);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject *)_stringLiteral117DEFDCBAEB752F96F21605CE42D543CD8A1378);
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_16 = L_15;
		float L_17 = __this->get__rawFps_8();
		float L_18 = L_17;
		RuntimeObject * L_19 = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &L_18);
		NullCheck(L_16);
		ArrayElementTypeCheck (L_16, L_19);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject *)L_19);
		String_t* L_20 = String_Concat_mB7BA84F13912303B2E5E40FBF0109E1A328ACA07(L_16, /*hidden argument*/NULL);
		GUI_Label_m3262E5E30013ECAF83C075710F7761E49BEA5CCE(L_3, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Aura2API.DebugFps::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DebugFps__ctor_mD01F778479F87EE5B90EA4598D30DAEB73CB8EA9 (DebugFps_t1CEAF444245BBAE399A223E8146879953673D1D3 * __this, const RuntimeMethod* method)
{
	{
		// public float interval = 1;
		__this->set_interval_4((1.0f));
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
// System.Void Aura2API.LightFlicker::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightFlicker_Start_m5F8BA1CC13065C14DA9BF1E22630DB77F9A7AA2D (LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LightFlicker_Start_m5F8BA1CC13065C14DA9BF1E22630DB77F9A7AA2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Random.InitState((int)transform.position.x + (int)transform.position.y);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_x_2();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		float L_5 = L_4.get_y_3();
		Random_InitState_mCCD7D065EE8613CF0053C97D77C2C4A12F2BCA21(((int32_t)il2cpp_codegen_add((int32_t)(((int32_t)((int32_t)L_2))), (int32_t)(((int32_t)((int32_t)L_5))))), /*hidden argument*/NULL);
		// _initialFactor = GetComponent<Light>().intensity;
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_6 = Component_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m1DCED5DB1934151FC68A8E7CAECF7986359D7107(__this, /*hidden argument*/Component_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m1DCED5DB1934151FC68A8E7CAECF7986359D7107_RuntimeMethod_var);
		NullCheck(L_6);
		float L_7 = Light_get_intensity_m4E9152844D85D03FEDA5AE4599AFAFC3C66EFF23(L_6, /*hidden argument*/NULL);
		__this->set__initialFactor_14(L_7);
		// }
		return;
	}
}
// System.Void Aura2API.LightFlicker::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightFlicker_OnEnable_m328BF28063E6654909A503651FE21684C3A82ABB (LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571 * __this, const RuntimeMethod* method)
{
	{
		// _initPos = transform.localPosition;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_localPosition_m812D43318E05BDCB78310EB7308785A13D85EFD8(L_0, /*hidden argument*/NULL);
		__this->set__initPos_11(L_1);
		// _currentPos = _initPos;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get__initPos_11();
		__this->set__currentPos_9(L_2);
		// }
		return;
	}
}
// System.Void Aura2API.LightFlicker::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightFlicker_OnDisable_mE62DAB7C95B59A558FB0FE877B942B46F4BA021E (LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571 * __this, const RuntimeMethod* method)
{
	{
		// transform.localPosition = _initPos;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get__initPos_11();
		NullCheck(L_0);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Aura2API.LightFlicker::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightFlicker_Update_m79885F10349BE6BD00D28EE31143E981F69C0906 (LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (LightFlicker_Update_m79885F10349BE6BD00D28EE31143E981F69C0906_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// _deltaTime = Time.deltaTime;
		float L_0 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set__deltaTime_10(L_0);
		// if (_timeLeft <= _deltaTime)
		float L_1 = __this->get__timeLeft_16();
		float L_2 = __this->get__deltaTime_10();
		if ((!(((float)L_1) <= ((float)L_2))))
		{
			goto IL_005e;
		}
	}
	{
		// _targetFactor = Random.Range(minFactor, maxFactor);
		float L_3 = __this->get_minFactor_5();
		float L_4 = __this->get_maxFactor_4();
		float L_5 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(L_3, L_4, /*hidden argument*/NULL);
		__this->set__targetFactor_12(L_5);
		// _targetPos = _initPos + Random.insideUnitSphere * moveRange;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = __this->get__initPos_11();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Random_get_insideUnitSphere_m10033DFB85B1A21CE44201CB0E421F27B77A868F(/*hidden argument*/NULL);
		float L_8 = __this->get_moveRange_6();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_7, L_8, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_6, L_9, /*hidden argument*/NULL);
		__this->set__targetPos_13(L_10);
		// _timeLeft = speed;
		float L_11 = __this->get_speed_7();
		__this->set__timeLeft_16(L_11);
		// }
		return;
	}

IL_005e:
	{
		// float weight = _deltaTime / _timeLeft;
		float L_12 = __this->get__deltaTime_10();
		float L_13 = __this->get__timeLeft_16();
		V_0 = ((float)((float)L_12/(float)L_13));
		// _currentFactor = Mathf.Lerp(_currentFactor, _targetFactor, weight);
		float L_14 = __this->get__currentFactor_8();
		float L_15 = __this->get__targetFactor_12();
		float L_16 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_17 = Mathf_Lerp_m9A74C5A0C37D0CDF45EE66E7774D12A9B93B1364(L_14, L_15, L_16, /*hidden argument*/NULL);
		__this->set__currentFactor_8(L_17);
		// GetComponent<Light>().intensity = _initialFactor * _currentFactor;
		Light_tFDE490EADBC7E080F74CA804929513AF07C31A6C * L_18 = Component_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m1DCED5DB1934151FC68A8E7CAECF7986359D7107(__this, /*hidden argument*/Component_GetComponent_TisLight_tFDE490EADBC7E080F74CA804929513AF07C31A6C_m1DCED5DB1934151FC68A8E7CAECF7986359D7107_RuntimeMethod_var);
		float L_19 = __this->get__initialFactor_14();
		float L_20 = __this->get__currentFactor_8();
		NullCheck(L_18);
		Light_set_intensity_mE209975C840F1D887B4207C390DB5A2EF15A763C(L_18, ((float)il2cpp_codegen_multiply((float)L_19, (float)L_20)), /*hidden argument*/NULL);
		// _currentPos = Vector3.Lerp(_currentPos, _targetPos, weight);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = __this->get__currentPos_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = __this->get__targetPos_13();
		float L_23 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_24 = Vector3_Lerp_m5BA75496B803820CC64079383956D73C6FD4A8A1(L_21, L_22, L_23, /*hidden argument*/NULL);
		__this->set__currentPos_9(L_24);
		// transform.localPosition = _currentPos;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_26 = __this->get__currentPos_9();
		NullCheck(L_25);
		Transform_set_localPosition_m275F5550DD939F83AFEB5E8D681131172E2E1728(L_25, L_26, /*hidden argument*/NULL);
		// _timeLeft -= _deltaTime;
		float L_27 = __this->get__timeLeft_16();
		float L_28 = __this->get__deltaTime_10();
		__this->set__timeLeft_16(((float)il2cpp_codegen_subtract((float)L_27, (float)L_28)));
		// }
		return;
	}
}
// System.Void Aura2API.LightFlicker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightFlicker__ctor_m677F11ABB90A25B99FA37B738DCE4EBF8CBB31E4 (LightFlicker_tF4BDF7A3FAEDB8EF110B70667469F3D7EA03A571 * __this, const RuntimeMethod* method)
{
	{
		// public float maxFactor = 1.2f;
		__this->set_maxFactor_4((1.2f));
		// public float minFactor = 1.0f;
		__this->set_minFactor_5((1.0f));
		// public float moveRange = 0.1f;
		__this->set_moveRange_6((0.1f));
		// public float speed = 0.1f;
		__this->set_speed_7((0.1f));
		// private float _currentFactor = 1.0f;
		__this->set__currentFactor_8((1.0f));
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
// System.Void Aura2API.MoveSinCos::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveSinCos_Start_m1E4E75145D83F98C32F1EDB16AC68224A50C1141 (MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51 * __this, const RuntimeMethod* method)
{
	{
		// _initialPosition = transform.position;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		__this->set__initialPosition_4(L_1);
		// }
		return;
	}
}
// System.Void Aura2API.MoveSinCos::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveSinCos_Update_mD9FFFE8D54810856476C29543CF2AEDEE3B29B34 (MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveSinCos_Update_mD9FFFE8D54810856476C29543CF2AEDEE3B29B34_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// Vector3 sinVector = sinDirection.normalized * Mathf.Sin(Time.time * sinSpeed + sinOffset) * sinAmplitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = __this->get_address_of_sinDirection_10();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0, /*hidden argument*/NULL);
		float L_2 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_3 = __this->get_sinSpeed_12();
		float L_4 = __this->get_sinOffset_11();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_5 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_2, (float)L_3)), (float)L_4)));
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_1, L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_sinAmplitude_9();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		// Vector3 cosVector = cosDirection.normalized * Mathf.Cos(Time.time * cosSpeed + cosOffset) * cosAmplitude;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_9 = __this->get_address_of_cosDirection_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_10 = Vector3_get_normalized_mE20796F1D2D36244FACD4D14DADB245BE579849B((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_9, /*hidden argument*/NULL);
		float L_11 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_12 = __this->get_cosSpeed_8();
		float L_13 = __this->get_cosOffset_7();
		float L_14 = cosf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_11, (float)L_12)), (float)L_13)));
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_10, L_14, /*hidden argument*/NULL);
		float L_16 = __this->get_cosAmplitude_5();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_17 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_15, L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		// sinVector = space == Space.World ? sinVector : transform.localToWorldMatrix.MultiplyVector(sinVector);
		int32_t L_18 = __this->get_space_13();
		if (!L_18)
		{
			goto IL_0086;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_20 = Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED(L_19, /*hidden argument*/NULL);
		V_2 = L_20;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = V_0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_22 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_21, /*hidden argument*/NULL);
		G_B3_0 = L_22;
		goto IL_0087;
	}

IL_0086:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = V_0;
		G_B3_0 = L_23;
	}

IL_0087:
	{
		V_0 = G_B3_0;
		// cosVector = space == Space.World ? cosVector : transform.localToWorldMatrix.MultiplyVector(cosVector);
		int32_t L_24 = __this->get_space_13();
		if (!L_24)
		{
			goto IL_00a6;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_25 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA  L_26 = Transform_get_localToWorldMatrix_mBC86B8C7BA6F53DAB8E0120D77729166399A0EED(L_25, /*hidden argument*/NULL);
		V_2 = L_26;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_27 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_28 = Matrix4x4_MultiplyVector_mFED70C58FB201633483463CE64DBF0D0BE081863((Matrix4x4_t6BF60F70C9169DF14C9D2577672A44224B236ECA *)(&V_2), L_27, /*hidden argument*/NULL);
		G_B6_0 = L_28;
		goto IL_00a7;
	}

IL_00a6:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_29 = V_1;
		G_B6_0 = L_29;
	}

IL_00a7:
	{
		V_1 = G_B6_0;
		// transform.position = _initialPosition + sinVector + cosVector;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_30 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_31 = __this->get__initialPosition_4();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_32 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_33 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_31, L_32, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_34 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_35 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_33, L_34, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_30, L_35, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Aura2API.MoveSinCos::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveSinCos__ctor_m2859153E609DD22B909D09F5FC5E491ED3720F78 (MoveSinCos_t11ACD8C0D9630F296D92B5457BC12358FF97AE51 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MoveSinCos__ctor_m2859153E609DD22B909D09F5FC5E491ED3720F78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Vector3 cosDirection = Vector3.right;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_right_m6DD9559CA0C75BBA42D9140021C4C2A9AAA9B3F5(/*hidden argument*/NULL);
		__this->set_cosDirection_6(L_0);
		// public Vector3 sinDirection = Vector3.up;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		__this->set_sinDirection_10(L_1);
		// public Space space = Space.Self;
		__this->set_space_13(1);
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
// System.Void Aura2API.SinRotationOffset::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinRotationOffset_Start_m8EB135C8BF3154688A6DCB45253D83040FF95DE7 (SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382 * __this, const RuntimeMethod* method)
{
	SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382 * G_B2_0 = NULL;
	SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382 * G_B1_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382 * G_B3_1 = NULL;
	{
		// _initialRotation = space == Space.Self ? transform.localRotation : transform.rotation;
		int32_t L_0 = __this->get_space_9();
		G_B1_0 = __this;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			G_B2_0 = __this;
			goto IL_0017;
		}
	}
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_0022;
	}

IL_0017:
	{
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = Transform_get_localRotation_mEDA319E1B42EF12A19A95AC0824345B6574863FE(L_3, /*hidden argument*/NULL);
		G_B3_0 = L_4;
		G_B3_1 = G_B2_0;
	}

IL_0022:
	{
		NullCheck(G_B3_1);
		G_B3_1->set__initialRotation_4(G_B3_0);
		// }
		return;
	}
}
// System.Void Aura2API.SinRotationOffset::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinRotationOffset_Update_mD8BD0BBBA8616D1B48E1EAD1A734224DBD438FA1 (SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SinRotationOffset_Update_mD8BD0BBBA8616D1B48E1EAD1A734224DBD438FA1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// float angle = sinAmplitude * Mathf.Sin(Time.time * sinSpeed + sinOffset);
		float L_0 = __this->get_sinAmplitude_5();
		float L_1 = Time_get_time_m7863349C8845BBA36629A2B3F8EF1C3BEA350FD8(/*hidden argument*/NULL);
		float L_2 = __this->get_sinSpeed_8();
		float L_3 = __this->get_sinOffset_7();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_4 = sinf(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), (float)L_3)));
		// Quaternion rotationOffset = Quaternion.AngleAxis(angle, sinDirection);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_sinDirection_6();
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = Quaternion_AngleAxis_m07DACF59F0403451DABB9BC991C53EE3301E88B0(((float)il2cpp_codegen_multiply((float)L_0, (float)L_4)), L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// if (space == Space.Self)
		int32_t L_7 = __this->get_space_9();
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_004c;
		}
	}
	{
		// transform.localRotation = _initialRotation * rotationOffset;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_8 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_9 = __this->get__initialRotation_4();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_11 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Transform_set_localRotation_mE2BECB0954FFC1D93FB631600D9A9BEFF41D9C8A(L_8, L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004c:
	{
		// transform.rotation = _initialRotation * rotationOffset;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_13 = __this->get__initialRotation_4();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_15 = Quaternion_op_Multiply_mDB9F738AA8160E3D85549F4FEDA23BC658B5A790(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_12, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Aura2API.SinRotationOffset::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SinRotationOffset__ctor_m01D64F6180743B290B4DA7938D3492F6B70259F2 (SinRotationOffset_t858920ACB23F1C13F1BC6F177E98B429739AA382 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SinRotationOffset__ctor_m01D64F6180743B290B4DA7938D3492F6B70259F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float sinAmplitude = 15;
		__this->set_sinAmplitude_5((15.0f));
		// public Vector3 sinDirection = Vector3.up;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Vector3_get_up_m6309EBC4E42D6D0B3D28056BD23D0331275306F7(/*hidden argument*/NULL);
		__this->set_sinDirection_6(L_0);
		// public float sinSpeed = 1;
		__this->set_sinSpeed_8((1.0f));
		// public Space space = Space.Self;
		__this->set_space_9(1);
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
// System.Void Damageable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Damageable__ctor_mA624F1EE721D3F8D8A70640ED8CF76ACC63998A9 (Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 * __this, const RuntimeMethod* method)
{
	{
		// public int health = 100;
		__this->set_health_4(((int32_t)100));
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
// System.Void DamageableBarricade::IDamageable.TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageableBarricade_IDamageable_TakeDamage_m3C41220DAA1682BB380492FF15DD2CC358F1D4DC (DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// health -= damage;
		int32_t L_0 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->get_health_4();
		int32_t L_1 = ___damage0;
		((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if(health <= 0)
		int32_t L_2 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->get_health_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		// gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void DamageableBarricade::IDamageable.TakeKnockBack(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageableBarricade_IDamageable_TakeKnockBack_m889B4225ABED64525F45331A9ABF33B7CFC11EEA (DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method)
{
	{
		// return;
		return;
	}
}
// System.Void DamageableBarricade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DamageableBarricade__ctor_m84E0FFD67D4494D9436AFA219645979B1329D240 (DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * __this, const RuntimeMethod* method)
{
	{
		Damageable__ctor_mA624F1EE721D3F8D8A70640ED8CF76ACC63998A9(__this, /*hidden argument*/NULL);
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
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * L_0 = Component_GetComponent_TisNavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB_mFCC507CF7EDAE5FCD236FEC7ABD0A2668D7FCB96(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB_mFCC507CF7EDAE5FCD236FEC7ABD0A2668D7FCB96_RuntimeMethod_var);
		__this->set_agent_5(L_0);
		// }
		return;
	}
}
// System.Void Enemy::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Update_m4B43E4ED31FD86486FE3A8B0F65B9D69A46217E6 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Update_m4B43E4ED31FD86486FE3A8B0F65B9D69A46217E6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(knockbackDelay > 0){
		float L_0 = __this->get_knockbackDelay_6();
		if ((!(((float)L_0) > ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// knockbackDelay -= Time.deltaTime;
		float L_1 = __this->get_knockbackDelay_6();
		float L_2 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_knockbackDelay_6(((float)il2cpp_codegen_subtract((float)L_1, (float)L_2)));
		// if(knockbackDelay <= 0){
		float L_3 = __this->get_knockbackDelay_6();
		if ((!(((float)L_3) <= ((float)(0.0f)))))
		{
			goto IL_0047;
		}
	}
	{
		// knockbackDelay = 0;
		__this->set_knockbackDelay_6((0.0f));
		// agent.velocity = Vector3.zero;
		NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * L_4 = __this->get_agent_5();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		NullCheck(L_4);
		NavMeshAgent_set_velocity_m76D7D2F03D759A3A63FB0B1E739650591DE8F876(L_4, L_5, /*hidden argument*/NULL);
	}

IL_0047:
	{
		// }
		return;
	}
}
// System.Void Enemy::IDamageable.TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_IDamageable_TakeDamage_m3B5797997E5DE91D8E5B3091952C7DA928C88B72 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// health -= damage;
		int32_t L_0 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->get_health_4();
		int32_t L_1 = ___damage0;
		((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// Scoring.GetInstance().EnemyHit(transform.position);
		Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * L_2 = Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02_inline(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		Scoring_EnemyHit_m080CBA7F9189CA94A6CA9A6F228FC7F4B8893E81(L_2, L_4, /*hidden argument*/NULL);
		// if(health <= 0)
		int32_t L_5 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->get_health_4();
		if ((((int32_t)L_5) > ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// Die();
		Enemy_Die_m2C2144E88C664B9DE839A94B6F282D5908BF1C29(__this, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Enemy::Die()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_Die_m2C2144E88C664B9DE839A94B6F282D5908BF1C29 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_Die_m2C2144E88C664B9DE839A94B6F282D5908BF1C29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// health = 100;
		((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->set_health_4(((int32_t)100));
		// knockbackDelay = 0;
		__this->set_knockbackDelay_6((0.0f));
		// Scoring.GetInstance().EnemyKill();
		Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * L_0 = Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		Scoring_EnemyKill_mA67072CF9ADB5D118B7F7FAD32AAC7D6DFC9BC5C(L_0, /*hidden argument*/NULL);
		// GameManager.GetInstance().EnemyDied();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_1 = GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline(/*hidden argument*/NULL);
		NullCheck(L_1);
		GameManager_EnemyDied_m7BCDE0AF041162A5E95CCF48A52A9587308AB6E4(L_1, /*hidden argument*/NULL);
		// transform.position = Vector3.one * 100;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Vector3_get_one_mA11B83037CB269C6076CBCF754E24C8F3ACEC2AB(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_3, (100.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_2, L_4, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::DieNoPoints()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_DieNoPoints_m68A16AD4A2F62F8A5C7BA7CAFBDBEBDC7B4C96C1 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	{
		// health = 100;
		((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->set_health_4(((int32_t)100));
		// knockbackDelay = 0;
		__this->set_knockbackDelay_6((0.0f));
		// GameManager.GetInstance().EnemyDied();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		GameManager_EnemyDied_m7BCDE0AF041162A5E95CCF48A52A9587308AB6E4(L_0, /*hidden argument*/NULL);
		// gameObject.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Enemy::IDamageable.TakeKnockBack(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_IDamageable_TakeKnockBack_m7AD5C24BCAD88B786ADD49158C0600A95B2A158A (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_IDamageable_TakeKnockBack_m7AD5C24BCAD88B786ADD49158C0600A95B2A158A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 force = direction;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___direction0;
		V_0 = L_0;
		// agent.velocity += force;
		NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * L_1 = __this->get_agent_5();
		NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * L_2 = L_1;
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = NavMeshAgent_get_velocity_m1CF6CC11732234E2E3EC3B778B79C5492A990186(L_2, /*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_3, L_4, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavMeshAgent_set_velocity_m76D7D2F03D759A3A63FB0B1E739650591DE8F876(L_2, L_5, /*hidden argument*/NULL);
		// knockbackDelay = 0.25f;
		__this->set_knockbackDelay_6((0.25f));
		// }
		return;
	}
}
// System.Void Enemy::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy_OnCollisionEnter_m0E5C6C0A258355EAF0700AC2905EAD3A5E7905FA (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * ___col0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Enemy_OnCollisionEnter_m0E5C6C0A258355EAF0700AC2905EAD3A5E7905FA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.gameObject.tag == "Barricade")
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_0 = ___col0;
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		String_t* L_2 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_1, /*hidden argument*/NULL);
		bool L_3 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_2, _stringLiteralF58F1C9BBBCED2419818A0A2151E340ADCC0CC8B, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// IDamageable damageable = col.gameObject.GetComponent<IDamageable>();
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_4 = ___col0;
		NullCheck(L_4);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		RuntimeObject* L_6 = GameObject_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_m178D924FAD9BC62D5A28723DF4B3682AE5D08023(L_5, /*hidden argument*/GameObject_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_m178D924FAD9BC62D5A28723DF4B3682AE5D08023_RuntimeMethod_var);
		// damageable.TakeDamage(100);
		NullCheck(L_6);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void IDamageable::TakeDamage(System.Int32) */, IDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_il2cpp_TypeInfo_var, L_6, ((int32_t)100));
		// DieNoPoints();
		Enemy_DieNoPoints_m68A16AD4A2F62F8A5C7BA7CAFBDBEBDC7B4C96C1(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0030:
	{
		// else if (col.gameObject.tag == "Player"){
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_7 = ___col0;
		NullCheck(L_7);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		String_t* L_9 = GameObject_get_tag_mA9DC75D3D591B5E7D1ADAD14EA66CC4186580275(L_8, /*hidden argument*/NULL);
		bool L_10 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_9, _stringLiteralE53407CFE1A5156B9F0D1EED3BAB5EF3AE75CFD8, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// IDamageable damageable = col.gameObject.GetComponent<IDamageable>();
		Collision_t7FF0F4B0E24A2AEB1131DD980F63AB8CBF11FC3C * L_11 = ___col0;
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Collision_get_gameObject_m9A7069ABE50D4BB957A8ED76E5F4A59ACEC57C49(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		RuntimeObject* L_13 = GameObject_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_m178D924FAD9BC62D5A28723DF4B3682AE5D08023(L_12, /*hidden argument*/GameObject_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_m178D924FAD9BC62D5A28723DF4B3682AE5D08023_RuntimeMethod_var);
		// damageable.TakeDamage(50);
		NullCheck(L_13);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void IDamageable::TakeDamage(System.Int32) */, IDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_il2cpp_TypeInfo_var, L_13, ((int32_t)50));
		// DieNoPoints();
		Enemy_DieNoPoints_m68A16AD4A2F62F8A5C7BA7CAFBDBEBDC7B4C96C1(__this, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void Enemy::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enemy__ctor_mA9911783A212E3706D7D51DC82C19D14CBDE5BE3 (Enemy_tFD4DFBD9B55680685776C01FAC4E6877F5935DF6 * __this, const RuntimeMethod* method)
{
	{
		Damageable__ctor_mA624F1EE721D3F8D8A70640ED8CF76ACC63998A9(__this, /*hidden argument*/NULL);
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
// System.Void EnemyNavigation::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyNavigation_Awake_mA024E0A8D386630708FB4DC8995592D893B75ACA (EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyNavigation_Awake_mA024E0A8D386630708FB4DC8995592D893B75ACA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent = GetComponent<NavMeshAgent>();
		NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * L_0 = Component_GetComponent_TisNavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB_mFCC507CF7EDAE5FCD236FEC7ABD0A2668D7FCB96(__this, /*hidden argument*/Component_GetComponent_TisNavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB_mFCC507CF7EDAE5FCD236FEC7ABD0A2668D7FCB96_RuntimeMethod_var);
		__this->set_agent_4(L_0);
		// }
		return;
	}
}
// System.Void EnemyNavigation::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyNavigation_OnEnable_m3BF458E00F748A6F048A71E8D9133ADE9702207D (EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyNavigation_OnEnable_m3BF458E00F748A6F048A71E8D9133ADE9702207D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// agent.destination = playerTransform.position;
		NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * L_0 = __this->get_agent_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = __this->get_playerTransform_5();
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		NavMeshAgent_set_destination_m006DABA697BAB705D68EE7208171C0230EB644D7(L_0, L_2, /*hidden argument*/NULL);
		// stateReference.GameStateChanged += OnGameStateChanged;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_3 = __this->get_stateReference_6();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_4 = (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)il2cpp_codegen_object_new(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var);
		StateChanged__ctor_m8AA4A8CD1B7DEC02D2ECCBC420950580B10A779A(L_4, __this, (intptr_t)((intptr_t)EnemyNavigation_OnGameStateChanged_mE6F81E67B6ABF787390AC7DB2BB8F1CE8EECA66E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_3);
		State_add_GameStateChanged_m2618E258FC9540D124C2F76659A386517D30B72F(L_3, L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyNavigation::OnGameStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyNavigation_OnGameStateChanged_mE6F81E67B6ABF787390AC7DB2BB8F1CE8EECA66E (EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F * __this, const RuntimeMethod* method)
{
	{
		// if(stateReference.GetGameState() == State.GameState.Playing){
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = __this->get_stateReference_6();
		NullCheck(L_0);
		int32_t L_1 = State_GetGameState_m54A8B9BD9346B78AC4CFA3A980F02E384348B44B_inline(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0030;
		}
	}
	{
		// agent.enabled = true;
		NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * L_2 = __this->get_agent_4();
		NullCheck(L_2);
		Behaviour_set_enabled_m9755D3B17D7022D23D1E4C618BD9A6B66A5ADC6B(L_2, (bool)1, /*hidden argument*/NULL);
		// agent.destination = playerTransform.position;
		NavMeshAgent_tD93BAD8854B394AA1D372193F21154E94CA84BEB * L_3 = __this->get_agent_4();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = __this->get_playerTransform_5();
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		NavMeshAgent_set_destination_m006DABA697BAB705D68EE7208171C0230EB644D7(L_3, L_5, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// }
		return;
	}
}
// System.Void EnemyNavigation::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyNavigation_OnDisable_m43F2D283628ED34AF7BAA6A19D1695F803B55C91 (EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (EnemyNavigation_OnDisable_m43F2D283628ED34AF7BAA6A19D1695F803B55C91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stateReference.GameStateChanged -= OnGameStateChanged;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = __this->get_stateReference_6();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_1 = (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)il2cpp_codegen_object_new(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var);
		StateChanged__ctor_m8AA4A8CD1B7DEC02D2ECCBC420950580B10A779A(L_1, __this, (intptr_t)((intptr_t)EnemyNavigation_OnGameStateChanged_mE6F81E67B6ABF787390AC7DB2BB8F1CE8EECA66E_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_0);
		State_remove_GameStateChanged_m840886B5A411DCAA538BD5D2FF26F4B8C3D4A5EE(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EnemyNavigation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyNavigation__ctor_m306A63A9188B57F8BF5922D74CAAA534945A9598 (EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F * __this, const RuntimeMethod* method)
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
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m12E1357322F99B1544DAD9C099CBFA6E63529A49 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Awake_m12E1357322F99B1544DAD9C099CBFA6E63529A49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!instance) instance = this;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_18();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (!instance) instance = this;
		((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->set_instance_18(__this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m4B67F69CF18652603C29FC1C5B7C6482C77B69DB (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Start_m4B67F69CF18652603C29FC1C5B7C6482C77B69DB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!uiManagerInstance) uiManagerInstance = UIManager.GetInstance();
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = __this->get_uiManagerInstance_20();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!uiManagerInstance) uiManagerInstance = UIManager.GetInstance();
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_2 = UIManager_GetInstance_m2CEB5E722EE87CB720B1D2C8C5596D2B537A5A6C_inline(/*hidden argument*/NULL);
		__this->set_uiManagerInstance_20(L_2);
	}

IL_0018:
	{
		// if (!pm) pm = PoolManager.GetInstance();
		PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * L_3 = __this->get_pm_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		// if (!pm) pm = PoolManager.GetInstance();
		PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * L_5 = PoolManager_GetInstance_mE8BBF4EBB3F655D9EAAFF62EA621AD367D4233DC_inline(/*hidden argument*/NULL);
		__this->set_pm_9(L_5);
	}

IL_0030:
	{
		// if (!stateReference) stateReference = State.GetInstance();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_6 = __this->get_stateReference_19();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_7 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_0048;
		}
	}
	{
		// if (!stateReference) stateReference = State.GetInstance();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_8 = State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_inline(/*hidden argument*/NULL);
		__this->set_stateReference_19(L_8);
	}

IL_0048:
	{
		// stateReference.WaveStateChanged += OnWaveStateChanged;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_9 = __this->get_stateReference_19();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_10 = (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)il2cpp_codegen_object_new(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var);
		StateChanged__ctor_m8AA4A8CD1B7DEC02D2ECCBC420950580B10A779A(L_10, __this, (intptr_t)((intptr_t)GameManager_OnWaveStateChanged_mB66178205B75B222DD9621AB48054BD2EA9A1943_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_9);
		State_add_WaveStateChanged_m07846383CD17959BE8A8FD840F662E60C4CA0D13(L_9, L_10, /*hidden argument*/NULL);
		// stateReference.GameStateChanged += OnGameStateChanged;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_11 = __this->get_stateReference_19();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_12 = (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)il2cpp_codegen_object_new(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var);
		StateChanged__ctor_m8AA4A8CD1B7DEC02D2ECCBC420950580B10A779A(L_12, __this, (intptr_t)((intptr_t)GameManager_OnGameStateChanged_mD216B65D183F04354CDE736E7DA9B6B0BDFD946A_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_11);
		State_add_GameStateChanged_m2618E258FC9540D124C2F76659A386517D30B72F(L_11, L_12, /*hidden argument*/NULL);
		// pm.CreateEnemyPool(enemyPrefab, 30);
		PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * L_13 = __this->get_pm_9();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = __this->get_enemyPrefab_11();
		NullCheck(L_13);
		PoolManager_CreateEnemyPool_m4A4213DFAAE9D833789949BD44CF2B1525B86B3C(L_13, L_14, ((int32_t)30), /*hidden argument*/NULL);
		// StartEnemies();
		GameManager_StartEnemies_m2270859EFD02CAB5801B4DEDFC0E31CF2C844784(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::StartEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_StartEnemies_m2270859EFD02CAB5801B4DEDFC0E31CF2C844784 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_StartEnemies_m2270859EFD02CAB5801B4DEDFC0E31CF2C844784_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wave++;
		int32_t L_0 = __this->get_wave_4();
		__this->set_wave_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// enemiesLeftThisWave = Mathf.RoundToInt(2 + (3 * wave));
		int32_t L_1 = __this->get_wave_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_2 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041((((float)((float)((int32_t)il2cpp_codegen_add((int32_t)2, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_1))))))), /*hidden argument*/NULL);
		__this->set_enemiesLeftThisWave_5(L_2);
		// totalEnemiesThisWave = enemiesLeftThisWave;
		int32_t L_3 = __this->get_enemiesLeftThisWave_5();
		__this->set_totalEnemiesThisWave_6(L_3);
		// uiManagerInstance.CanPause(true);
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_4 = __this->get_uiManagerInstance_20();
		NullCheck(L_4);
		UIManager_CanPause_m109D06ED90BD689AB628DE1C3F0A62D463C212D4_inline(L_4, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::OnWaveStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnWaveStateChanged_mB66178205B75B222DD9621AB48054BD2EA9A1943 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void GameManager::OnGameStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_OnGameStateChanged_mD216B65D183F04354CDE736E7DA9B6B0BDFD946A (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		// if(lastGameState == State.GameState.Buying)
		int32_t L_0 = __this->get_lastGameState_21();
		if ((!(((uint32_t)L_0) == ((uint32_t)2))))
		{
			goto IL_0028;
		}
	}
	{
		// StartCoroutine(StartNewWave());
		RuntimeObject* L_1 = GameManager_StartNewWave_m3EE69DE0615A8B9A0B9FACFA329F42635082EA91(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_1, /*hidden argument*/NULL);
		// lastGameState = State.GameState.Playing;
		__this->set_lastGameState_21(1);
		// stateReference.UnPauseGame();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_2 = __this->get_stateReference_19();
		NullCheck(L_2);
		State_UnPauseGame_m27A0F1F9A8F2BF763B629D1A7CF53AC02C78FDEE(L_2, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mB18435F2FDDC6175F5A83AB40198635F26D6FBFB (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_Update_mB18435F2FDDC6175F5A83AB40198635F26D6FBFB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (winButton)
		bool L_0 = __this->get_winButton_7();
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// enemiesLeftThisWave = 0;
		__this->set_enemiesLeftThisWave_5(0);
	}

IL_000f:
	{
		// if (loseButton)
		bool L_1 = __this->get_loseButton_8();
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		// player.GetComponent<IDamageable>().TakeDamage(100);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_2 = __this->get_player_17();
		NullCheck(L_2);
		RuntimeObject* L_3 = Component_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_mA9D82E44CC018CCA691758D999FF6E2B6BDA8068(L_2, /*hidden argument*/Component_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_mA9D82E44CC018CCA691758D999FF6E2B6BDA8068_RuntimeMethod_var);
		NullCheck(L_3);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void IDamageable::TakeDamage(System.Int32) */, IDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_il2cpp_TypeInfo_var, L_3, ((int32_t)100));
	}

IL_0029:
	{
		// if (stateReference.GetGameState() == State.GameState.Playing && stateReference.GetWaveState() == State.WaveState.Spawning)
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_4 = __this->get_stateReference_19();
		NullCheck(L_4);
		int32_t L_5 = State_GetGameState_m54A8B9BD9346B78AC4CFA3A980F02E384348B44B_inline(L_4, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_007a;
		}
	}
	{
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_6 = __this->get_stateReference_19();
		NullCheck(L_6);
		int32_t L_7 = State_GetWaveState_m671090CC8F21B08AACE28C95F02BD54B652A9C61_inline(L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_007a;
		}
	}
	{
		// if (enemiesLeftThisWave <= 0)
		int32_t L_8 = __this->get_enemiesLeftThisWave_5();
		if ((((int32_t)L_8) > ((int32_t)0)))
		{
			goto IL_0074;
		}
	}
	{
		// stateReference.SetWaveStatePaused();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_9 = __this->get_stateReference_19();
		NullCheck(L_9);
		State_SetWaveStatePaused_m5F081D286798759EAFBF735BEE534A199A6FAF2F(L_9, /*hidden argument*/NULL);
		// Scoring.GetInstance().SurvivedWave();
		Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * L_10 = Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02_inline(/*hidden argument*/NULL);
		NullCheck(L_10);
		Scoring_SurvivedWave_m76A6452E8A4F6B4CEF59CF81AE13017938F0DED4(L_10, /*hidden argument*/NULL);
		// stateReference.Shop();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_11 = __this->get_stateReference_19();
		NullCheck(L_11);
		State_Shop_m7876D412A5161EC31C5C465299D27B83C28B58A2(L_11, /*hidden argument*/NULL);
		// lastGameState = State.GameState.Buying;
		__this->set_lastGameState_21(2);
	}

IL_0074:
	{
		// SpawnEnemies();
		GameManager_SpawnEnemies_m7C05C89B370EAB82ADF103E6A7966521FA5CDDBC(__this, /*hidden argument*/NULL);
	}

IL_007a:
	{
		// if (Input.GetKeyDown(KeyCode.Escape))
		bool L_12 = Input_GetKeyDown_mEA57896808B6F484B12CD0AEEB83390A3CFCDBDC(((int32_t)27), /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_00b4;
		}
	}
	{
		// if (uiManagerInstance.GetCanPause())
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_13 = __this->get_uiManagerInstance_20();
		NullCheck(L_13);
		bool L_14 = UIManager_GetCanPause_m5E6B9A4CCB5350905D13A0FDC72D747FBD67AB9E_inline(L_13, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00b4;
		}
	}
	{
		// if (stateReference.GetGameState() == State.GameState.Paused)
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_15 = __this->get_stateReference_19();
		NullCheck(L_15);
		int32_t L_16 = State_GetGameState_m54A8B9BD9346B78AC4CFA3A980F02E384348B44B_inline(L_15, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00a9;
		}
	}
	{
		// stateReference.UnPauseGame();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_17 = __this->get_stateReference_19();
		NullCheck(L_17);
		State_UnPauseGame_m27A0F1F9A8F2BF763B629D1A7CF53AC02C78FDEE(L_17, /*hidden argument*/NULL);
		return;
	}

IL_00a9:
	{
		// stateReference.PauseGame();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_18 = __this->get_stateReference_19();
		NullCheck(L_18);
		State_PauseGame_mDDAE38C87C223F080256CF58525E596C65BE4C14(L_18, /*hidden argument*/NULL);
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void GameManager::EnemyDied()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_EnemyDied_m7BCDE0AF041162A5E95CCF48A52A9587308AB6E4 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		// enemiesAlive--;
		int32_t L_0 = __this->get_enemiesAlive_12();
		__this->set_enemiesAlive_12(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)1)));
		// enemiesLeftThisWave--;
		int32_t L_1 = __this->get_enemiesLeftThisWave_5();
		__this->set_enemiesLeftThisWave_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)1)));
		// }
		return;
	}
}
// System.Void GameManager::SpawnEnemies()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SpawnEnemies_m7C05C89B370EAB82ADF103E6A7966521FA5CDDBC (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_SpawnEnemies_m7C05C89B370EAB82ADF103E6A7966521FA5CDDBC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enemiesAlive < maxEnemiesAtOnce && enemiesLeftThisWave - enemiesAlive > 0)
		int32_t L_0 = __this->get_enemiesAlive_12();
		int32_t L_1 = __this->get_maxEnemiesAtOnce_13();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0084;
		}
	}
	{
		int32_t L_2 = __this->get_enemiesLeftThisWave_5();
		int32_t L_3 = __this->get_enemiesAlive_12();
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3))) <= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		// if (timeUntilNewSpawn <= 0)
		float L_4 = __this->get_timeUntilNewSpawn_15();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0072;
		}
	}
	{
		// timeUntilNewSpawn = timeBetweenSpawns;
		float L_5 = __this->get_timeBetweenSpawns_14();
		__this->set_timeUntilNewSpawn_15(L_5);
		// spawners[Random.Range(0, spawners.Count)].Spawn(pm.GetEnemyFromPool());
		List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A * L_6 = __this->get_spawners_10();
		List_1_tAA58641880941D2F2083DCB298A59D76AB7F620A * L_7 = __this->get_spawners_10();
		NullCheck(L_7);
		int32_t L_8 = List_1_get_Count_mC24601E344AD1C7AA8A1E7E75FFD1B3484B98095_inline(L_7, /*hidden argument*/List_1_get_Count_mC24601E344AD1C7AA8A1E7E75FFD1B3484B98095_RuntimeMethod_var);
		int32_t L_9 = Random_Range_mD0C8F37FF3CAB1D87AAA6C45130BD59626BD6780(0, L_8, /*hidden argument*/NULL);
		NullCheck(L_6);
		Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D * L_10 = List_1_get_Item_m56233872D5CA605BE5A1EE5E792FAD05CAE581C2_inline(L_6, L_9, /*hidden argument*/List_1_get_Item_m56233872D5CA605BE5A1EE5E792FAD05CAE581C2_RuntimeMethod_var);
		PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * L_11 = __this->get_pm_9();
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = PoolManager_GetEnemyFromPool_mD2BE242337D1F987C891E650CEF40D65EBCD6C7C(L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Spawner_Spawn_mC4A347D5B0A4DF08B424A734CD76E7AD3B2EEE29(L_10, L_12, /*hidden argument*/NULL);
		// enemiesAlive++;
		int32_t L_13 = __this->get_enemiesAlive_12();
		__this->set_enemiesAlive_12(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// }
		return;
	}

IL_0072:
	{
		// timeUntilNewSpawn -= Time.deltaTime;
		float L_14 = __this->get_timeUntilNewSpawn_15();
		float L_15 = Time_get_deltaTime_m16F98FC9BA931581236008C288E3B25CBCB7C81E(/*hidden argument*/NULL);
		__this->set_timeUntilNewSpawn_15(((float)il2cpp_codegen_subtract((float)L_14, (float)L_15)));
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::StartNewWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_StartNewWave_m3EE69DE0615A8B9A0B9FACFA329F42635082EA91 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_StartNewWave_m3EE69DE0615A8B9A0B9FACFA329F42635082EA91_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 * L_0 = (U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 *)il2cpp_codegen_object_new(U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915_il2cpp_TypeInfo_var);
		U3CStartNewWaveU3Ed__26__ctor_m6D9FFA288CF45197140BBA0A178A75CF580B66E0(L_0, 0, /*hidden argument*/NULL);
		U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// GameManager GameManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_18();
		return L_0;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mFBEDEFD70BE58F3D3BE07FA8F9D97DE156D5C358 (GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * __this, const RuntimeMethod* method)
{
	{
		// public int maxEnemiesAtOnce = 30;
		__this->set_maxEnemiesAtOnce_13(((int32_t)30));
		// public float timeBetweenSpawns = 3;
		__this->set_timeBetweenSpawns_14((3.0f));
		// float timeUntilNewSpawn = 3;
		__this->set_timeUntilNewSpawn_15((3.0f));
		// private float timeUntilNewWave = 10;
		__this->set_timeUntilNewWave_16((10.0f));
		// State.GameState lastGameState = State.GameState.Playing;
		__this->set_lastGameState_21(1);
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
// System.Void GameManager_<StartNewWave>d__26::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartNewWaveU3Ed__26__ctor_m6D9FFA288CF45197140BBA0A178A75CF580B66E0 (U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameManager_<StartNewWave>d__26::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartNewWaveU3Ed__26_System_IDisposable_Dispose_m223BFCC3BE7FA37C88DBF57AF97627D01B4693B4 (U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameManager_<StartNewWave>d__26::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CStartNewWaveU3Ed__26_MoveNext_m62B063D081C64E86610097D4B32F543A7A53106D (U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartNewWaveU3Ed__26_MoveNext_m62B063D081C64E86610097D4B32F543A7A53106D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0043;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// uiManagerInstance.CanPause(false);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_4 = V_1;
		NullCheck(L_4);
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_5 = L_4->get_uiManagerInstance_20();
		NullCheck(L_5);
		UIManager_CanPause_m109D06ED90BD689AB628DE1C3F0A62D463C212D4_inline(L_5, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(10);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_6 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_6, (10.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0043:
	{
		__this->set_U3CU3E1__state_0((-1));
		// stateReference.SetWaveStateSpawning();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_7 = V_1;
		NullCheck(L_7);
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_8 = L_7->get_stateReference_19();
		NullCheck(L_8);
		State_SetWaveStateSpawning_m1DBDA590B523E1C41B79171D88C1964D13A63AAA(L_8, /*hidden argument*/NULL);
		// wave++;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_9 = V_1;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_wave_4();
		NullCheck(L_9);
		L_9->set_wave_4(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		// enemiesLeftThisWave = Mathf.RoundToInt(5 + (3 * wave));
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_12 = V_1;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_13 = V_1;
		NullCheck(L_13);
		int32_t L_14 = L_13->get_wave_4();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		int32_t L_15 = Mathf_RoundToInt_m0EAD8BD38FCB72FA1D8A04E96337C820EC83F041((((float)((float)((int32_t)il2cpp_codegen_add((int32_t)5, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)3, (int32_t)L_14))))))), /*hidden argument*/NULL);
		NullCheck(L_12);
		L_12->set_enemiesLeftThisWave_5(L_15);
		// totalEnemiesThisWave = enemiesLeftThisWave;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_16 = V_1;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_17 = V_1;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_enemiesLeftThisWave_5();
		NullCheck(L_16);
		L_16->set_totalEnemiesThisWave_6(L_18);
		// uiManagerInstance.CanPause(true);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_19 = V_1;
		NullCheck(L_19);
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_20 = L_19->get_uiManagerInstance_20();
		NullCheck(L_20);
		UIManager_CanPause_m109D06ED90BD689AB628DE1C3F0A62D463C212D4_inline(L_20, (bool)1, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}
}
// System.Object GameManager_<StartNewWave>d__26::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartNewWaveU3Ed__26_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6080D33F788D976876C1DC29113A0FFEA7C6B791 (U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameManager_<StartNewWave>d__26::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CStartNewWaveU3Ed__26_System_Collections_IEnumerator_Reset_m97DDB4ABD2688210F039B6DB24BBF0C292CCEEC2 (U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CStartNewWaveU3Ed__26_System_Collections_IEnumerator_Reset_m97DDB4ABD2688210F039B6DB24BBF0C292CCEEC2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CStartNewWaveU3Ed__26_System_Collections_IEnumerator_Reset_m97DDB4ABD2688210F039B6DB24BBF0C292CCEEC2_RuntimeMethod_var);
	}
}
// System.Object GameManager_<StartNewWave>d__26::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CStartNewWaveU3Ed__26_System_Collections_IEnumerator_get_Current_m53A1FDE5E03DB8434B411620358E69B946061377 (U3CStartNewWaveU3Ed__26_tBE950DFC57CC445864A11F38D0D7784D69FAE915 * __this, const RuntimeMethod* method)
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
// System.Void HealthButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthButton_Start_m29347184DFEAC7342416AEF19BCC2C3CFF7D8A0D (HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F * __this, const RuntimeMethod* method)
{
	{
		// player = GameManager.GetInstance().player;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = L_0->get_player_17();
		__this->set_player_8(L_1);
		// }
		return;
	}
}
// System.Void HealthButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthButton_OnEnable_m5B9D60CE02E62119AB9AC495AEE35CBC352090EA (HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F * __this, const RuntimeMethod* method)
{
	{
		// UpdatePrice();
		HealthButton_UpdatePrice_mEBC23202B04E53CD9F62A47F8018A9ACD7C8462C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HealthButton::UpdatePrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthButton_UpdatePrice_mEBC23202B04E53CD9F62A47F8018A9ACD7C8462C (HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F * __this, const RuntimeMethod* method)
{
	{
		// costText.text = price.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_costText_9();
		int32_t* L_1 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_address_of_price_4();
		String_t* L_2 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void HealthButton::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthButton_Buy_m8DC22398CB7C00C3392953B0190FD8996159BB1A (HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HealthButton_Buy_m8DC22398CB7C00C3392953B0190FD8996159BB1A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Scoring.money >= price)
		int32_t L_0 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		int32_t L_1 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_price_4();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0050;
		}
	}
	{
		// if (player.health == 100)
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_2 = __this->get_player_8();
		NullCheck(L_2);
		int32_t L_3 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_2)->get_health_4();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_001d;
		}
	}
	{
		// return;
		return;
	}

IL_001d:
	{
		// player.health += 50;
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_4 = __this->get_player_8();
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_5 = L_4;
		NullCheck(L_5);
		int32_t L_6 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_5)->get_health_4();
		NullCheck(L_5);
		((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_5)->set_health_4(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)50))));
		// Scoring.money -= price;
		int32_t L_7 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		int32_t L_8 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_price_4();
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_money_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_8)));
		// timesPurchased++;
		int32_t L_9 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->set_timesPurchased_7(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void HealthButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthButton__ctor_m953AE05924324801B2B403FCF8BD6C384E3FE092 (HealthButton_t3E34A2F267CFBB484B4E41E12BA59FDEFE56B25F * __this, const RuntimeMethod* method)
{
	{
		PurchaseableButton__ctor_mA597E13945A1D59B3A57826A07A715BF35AAAB0D(__this, /*hidden argument*/NULL);
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
// System.Void IncreasedDamageButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedDamageButton_Start_m192308C7001C3F1AB3DA91BDACF457CCC9BAB610 (IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76 * __this, const RuntimeMethod* method)
{
	{
		// playerWeapon = GameManager.GetInstance().player.weapon;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = L_0->get_player_17();
		NullCheck(L_1);
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_2 = L_1->get_weapon_7();
		__this->set_playerWeapon_8(L_2);
		// }
		return;
	}
}
// System.Void IncreasedDamageButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedDamageButton_OnEnable_m11B6E2C580D8DDB5F22756268C4494D3B7E001C9 (IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76 * __this, const RuntimeMethod* method)
{
	{
		// UpdateCost();
		IncreasedDamageButton_UpdateCost_m5E1FB40B4658359858ACD32BE8BFAC412EE4359A(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IncreasedDamageButton::UpdateCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedDamageButton_UpdateCost_m5E1FB40B4658359858ACD32BE8BFAC412EE4359A (IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncreasedDamageButton_UpdateCost_m5E1FB40B4658359858ACD32BE8BFAC412EE4359A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timesPurchased >= maxPurchaseable)
		int32_t L_0 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		int32_t L_1 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_maxPurchaseable_5();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		// costText.text = "Max";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_2 = __this->get_costText_10();
		NullCheck(L_2);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_2, _stringLiteralA95E85AED56318093B024674E217CAE0BD30241D, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		// costText.text = prices[timesPurchased].ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_3 = __this->get_costText_10();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_prices_6();
		int32_t L_5 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		NullCheck(L_4);
		String_t* L_6 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		NullCheck(L_3);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IncreasedDamageButton::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedDamageButton_Buy_m0A997E3A104D1E59AC6E4792AD9185407D9CFA57 (IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncreasedDamageButton_Buy_m0A997E3A104D1E59AC6E4792AD9185407D9CFA57_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timesPurchased < maxPurchaseable)
		int32_t L_0 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		int32_t L_1 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_maxPurchaseable_5();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0066;
		}
	}
	{
		// if (prices[timesPurchased] <= Scoring.money)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_prices_6();
		int32_t L_3 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_0066;
		}
	}
	{
		// Scoring.money -= prices[timesPurchased];
		int32_t L_7 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_prices_6();
		int32_t L_9 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_money_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_11)));
		// playerWeapon.damagePerShot = newDamage[timesPurchased];
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_12 = __this->get_playerWeapon_8();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_13 = __this->get_newDamage_9();
		int32_t L_14 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		NullCheck(L_13);
		int32_t L_15 = L_14;
		int32_t L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		L_12->set_damagePerShot_4(L_16);
		// timesPurchased++;
		int32_t L_17 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->set_timesPurchased_7(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// UpdateCost();
		IncreasedDamageButton_UpdateCost_m5E1FB40B4658359858ACD32BE8BFAC412EE4359A(__this, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void IncreasedDamageButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedDamageButton__ctor_mA2F2DA67514638893B51FDADE90B789D8F930FE6 (IncreasedDamageButton_t80E603E5779AEE1CC7265124144B6DE097CA4B76 * __this, const RuntimeMethod* method)
{
	{
		PurchaseableButton__ctor_mA597E13945A1D59B3A57826A07A715BF35AAAB0D(__this, /*hidden argument*/NULL);
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
// System.Void IncreasedKnockbackButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedKnockbackButton_Start_mA82045AC4A98D8F8675B0D89BEDD6C4B4DBAFE82 (IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713 * __this, const RuntimeMethod* method)
{
	{
		// playerWeapon = GameManager.GetInstance().player.weapon;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = L_0->get_player_17();
		NullCheck(L_1);
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_2 = L_1->get_weapon_7();
		__this->set_playerWeapon_8(L_2);
		// }
		return;
	}
}
// System.Void IncreasedKnockbackButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedKnockbackButton_OnEnable_mCA25E2C65ECAF47DDB855E83132193AD40074D01 (IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713 * __this, const RuntimeMethod* method)
{
	{
		// UpdateCost();
		IncreasedKnockbackButton_UpdateCost_m00CA0826E4A76C5C7B31772A9BF9E1D1063E77ED(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IncreasedKnockbackButton::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedKnockbackButton_Buy_mC877D3C7F99D47291FF2C45A96D5511D7876A852 (IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncreasedKnockbackButton_Buy_mC877D3C7F99D47291FF2C45A96D5511D7876A852_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timesPurchased < maxPurchaseable)
		int32_t L_0 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		int32_t L_1 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_maxPurchaseable_5();
		if ((((int32_t)L_0) >= ((int32_t)L_1)))
		{
			goto IL_0066;
		}
	}
	{
		// if (prices[timesPurchased] <= Scoring.money)
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_2 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_prices_6();
		int32_t L_3 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		int32_t L_6 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		if ((((int32_t)L_5) > ((int32_t)L_6)))
		{
			goto IL_0066;
		}
	}
	{
		// Scoring.money -= prices[timesPurchased];
		int32_t L_7 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_8 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_prices_6();
		int32_t L_9 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_money_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)L_11)));
		// playerWeapon.knockbackModifier = newKnockbackModifier[timesPurchased];
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_12 = __this->get_playerWeapon_8();
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_13 = __this->get_newKnockbackModifier_9();
		int32_t L_14 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		NullCheck(L_13);
		int32_t L_15 = L_14;
		float L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_12);
		L_12->set_knockbackModifier_6(L_16);
		// timesPurchased++;
		int32_t L_17 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->set_timesPurchased_7(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// UpdateCost();
		IncreasedKnockbackButton_UpdateCost_m00CA0826E4A76C5C7B31772A9BF9E1D1063E77ED(__this, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void IncreasedKnockbackButton::UpdateCost()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedKnockbackButton_UpdateCost_m00CA0826E4A76C5C7B31772A9BF9E1D1063E77ED (IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IncreasedKnockbackButton_UpdateCost_m00CA0826E4A76C5C7B31772A9BF9E1D1063E77ED_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timesPurchased >= maxPurchaseable)
		int32_t L_0 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		int32_t L_1 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_maxPurchaseable_5();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_001f;
		}
	}
	{
		// costText.text = "Max";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_2 = __this->get_costText_10();
		NullCheck(L_2);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_2, _stringLiteralA95E85AED56318093B024674E217CAE0BD30241D, /*hidden argument*/NULL);
		return;
	}

IL_001f:
	{
		// costText.text = prices[timesPurchased].ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_3 = __this->get_costText_10();
		Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* L_4 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_prices_6();
		int32_t L_5 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		NullCheck(L_4);
		String_t* L_6 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), /*hidden argument*/NULL);
		NullCheck(L_3);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_3, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void IncreasedKnockbackButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncreasedKnockbackButton__ctor_m51189B1EF91059FFC1F22C8C82CE9CC599BAD47D (IncreasedKnockbackButton_tE16C21C5A5E6C4CE31CF347BF207BFEE895BD713 * __this, const RuntimeMethod* method)
{
	{
		PurchaseableButton__ctor_mA597E13945A1D59B3A57826A07A715BF35AAAB0D(__this, /*hidden argument*/NULL);
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
// System.Void MainMenu::PlayButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_PlayButton_mEE45E6F12C1120731CB40DE31257CCE60FCF24F2 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	{
		// SceneManager.LoadScene(1);
		SceneManager_LoadScene_m258051AAA1489D2D8B252815A45C1E9A2C097201(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::ExitButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_ExitButton_m1685748EFAFCAF84444425EF36E507A845EF9F8C (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::InformationButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_InformationButton_m5626459EB8FA1A498DA9D4B803570FEEC78DA937 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	{
		// mainMenuScreen.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_mainMenuScreen_5();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)0, /*hidden argument*/NULL);
		// infoScreen.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_infoScreen_4();
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::HomeButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu_HomeButton_mA70517125E25DF2BE1C241DA396E67BD0C08D06A (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
{
	{
		// mainMenuScreen.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = __this->get_mainMenuScreen_5();
		NullCheck(L_0);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_0, (bool)1, /*hidden argument*/NULL);
		// infoScreen.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = __this->get_infoScreen_4();
		NullCheck(L_1);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void MainMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainMenu__ctor_m63F945D965550BD614DCD2AE7F7489D4F28C5B30 (MainMenu_t7CD5D54EA3EBFAE6ECFE46E095EFEBFD14C45105 * __this, const RuntimeMethod* method)
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
// System.Void Player::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Start_mD6E1D31879EB485356D1C22C8AE12C5DF6392E79 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		// stateReference = State.GetInstance();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_inline(/*hidden argument*/NULL);
		__this->set_stateReference_6(L_0);
		// }
		return;
	}
}
// System.Void Player::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_Update_m10202D3DF1DE1AD29B6B00E0092D9C41BD3861F7 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		// if(stateReference.GetGameState() == State.GameState.Playing){
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = __this->get_stateReference_6();
		NullCheck(L_0);
		int32_t L_1 = State_GetGameState_m54A8B9BD9346B78AC4CFA3A980F02E384348B44B_inline(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		// ray = new Ray(transform.position, transform.forward);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_4 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_4, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_6), L_3, L_5, /*hidden argument*/NULL);
		__this->set_ray_5(L_6);
		// RotateToMouse();
		Player_RotateToMouse_m8F615ACC8EE905F5E309ED8DB5964C855320FA78(__this, /*hidden argument*/NULL);
		// if(Input.GetMouseButtonDown(0))
		bool L_7 = Input_GetMouseButtonDown_m5AD76E22AA839706219AD86A4E0BE5276AF8E28A(0, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0048;
		}
	}
	{
		// weapon.Shoot();
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_8 = __this->get_weapon_7();
		NullCheck(L_8);
		VirtActionInvoker0::Invoke(6 /* System.Void Weapon::Shoot() */, L_8);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void Player::RotateToMouse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_RotateToMouse_m8F615ACC8EE905F5E309ED8DB5964C855320FA78 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Player_RotateToMouse_m8F615ACC8EE905F5E309ED8DB5964C855320FA78_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	{
		// Vector3 mousePos = Input.mousePosition;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = Input_get_mousePosition_m1F6706785983B41FE8D5CBB81B5F15F68EBD9A53(/*hidden argument*/NULL);
		V_0 = L_0;
		// Vector3 playerViewport = Camera.main.WorldToScreenPoint(transform.position);
		Camera_t48B2B9ECB3CE6108A98BF949A1CECF0FE3421F34 * L_1 = Camera_get_main_m9256A9F84F92D7ED73F3E6C4E2694030AD8B61FA(/*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Camera_WorldToScreenPoint_m880F9611E4848C11F21FDF1A1D307B401C61B1BF(L_1, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// mousePos.x = mousePos.x - playerViewport.x;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = V_0;
		float L_6 = L_5.get_x_2();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = V_1;
		float L_8 = L_7.get_x_2();
		(&V_0)->set_x_2(((float)il2cpp_codegen_subtract((float)L_6, (float)L_8)));
		// mousePos.y = mousePos.y - playerViewport.y;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_9 = V_0;
		float L_10 = L_9.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = V_1;
		float L_12 = L_11.get_y_3();
		(&V_0)->set_y_3(((float)il2cpp_codegen_subtract((float)L_10, (float)L_12)));
		// float angle = Mathf.Atan2(mousePos.y, mousePos.x) * Mathf.Rad2Deg - 90;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_13 = V_0;
		float L_14 = L_13.get_y_3();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = V_0;
		float L_16 = L_15.get_x_2();
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_tFBDE6467D269BFE410605C7D806FD9991D4A89CB_il2cpp_TypeInfo_var);
		float L_17 = atan2f(L_14, L_16);
		V_2 = ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)L_17, (float)(57.29578f))), (float)(90.0f)));
		// if(angle <= 90 && angle >= -90)
		float L_18 = V_2;
		if ((!(((float)L_18) <= ((float)(90.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		float L_19 = V_2;
		if ((!(((float)L_19) >= ((float)(-90.0f)))))
		{
			goto IL_008e;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0, -angle, 0);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_20 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		float L_21 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_22 = Quaternion_Euler_m537DD6CEAE0AD4274D8A84414C24C30730427D05((0.0f), ((-L_21)), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_rotation_m429694E264117C6DC682EC6AF45C7864E5155935(L_20, L_22, /*hidden argument*/NULL);
	}

IL_008e:
	{
		// }
		return;
	}
}
// System.Void Player::IDamageable.TakeDamage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IDamageable_TakeDamage_m9372771927655AB6B08CD6CE9F1AA42EF04D6DC8 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, int32_t ___damage0, const RuntimeMethod* method)
{
	{
		// health -= damage;
		int32_t L_0 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->get_health_4();
		int32_t L_1 = ___damage0;
		((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->set_health_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)));
		// if(health <= 0){
		int32_t L_2 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)__this)->get_health_4();
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		// stateReference.GameOver();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_3 = __this->get_stateReference_6();
		NullCheck(L_3);
		State_GameOver_mC001040632873A57029C559FB842CC059260D57A(L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void Player::IDamageable.TakeKnockBack(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_IDamageable_TakeKnockBack_m03B910138A8171C1F6B1155002239BA688F21801 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction0, const RuntimeMethod* method)
{
	{
		// return; //Player doesn't take knockback
		return;
	}
}
// System.Void Player::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player_OnDrawGizmos_m64466A15CE8B007C84A692D2DD92787427050794 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		// Gizmos.DrawRay(ray);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_0 = __this->get_ray_5();
		Gizmos_DrawRay_m29E7E14150B9A13FD49138FD3B9BF062B0E2DEBF(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Player::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Player__ctor_mAEC38956EFD0E61D848D4E5AFB83BABCE2DF1E23 (Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * __this, const RuntimeMethod* method)
{
	{
		Damageable__ctor_mA624F1EE721D3F8D8A70640ED8CF76ACC63998A9(__this, /*hidden argument*/NULL);
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
// System.Void PoolManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_Awake_m821EBA923D0180B464158074FB002FF6981F78FE (PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoolManager_Awake_m821EBA923D0180B464158074FB002FF6981F78FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!instance) instance = this;
		PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * L_0 = ((PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if(!instance) instance = this;
		((PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0012:
	{
		// enemies = new List<GameObject>();
		List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * L_2 = (List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B *)il2cpp_codegen_object_new(List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B_il2cpp_TypeInfo_var);
		List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60(L_2, /*hidden argument*/List_1__ctor_m23BDA1112566B2E9149D885E4061EA3063EEDA60_RuntimeMethod_var);
		__this->set_enemies_6(L_2);
		// }
		return;
	}
}
// System.Void PoolManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_Start_m940A45F2F8A5B2E67848A115055E1475B908478C (PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * __this, const RuntimeMethod* method)
{
	{
		// gmInstance = GameManager.GetInstance();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline(/*hidden argument*/NULL);
		__this->set_gmInstance_5(L_0);
		// }
		return;
	}
}
// PoolManager PoolManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * PoolManager_GetInstance_mE8BBF4EBB3F655D9EAAFF62EA621AD367D4233DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoolManager_GetInstance_mE8BBF4EBB3F655D9EAAFF62EA621AD367D4233DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * L_0 = ((PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// System.Void PoolManager::CreateEnemyPool(UnityEngine.GameObject,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager_CreateEnemyPool_m4A4213DFAAE9D833789949BD44CF2B1525B86B3C (PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___obj0, int32_t ___amount1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoolManager_CreateEnemyPool_m4A4213DFAAE9D833789949BD44CF2B1525B86B3C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	{
		// State stateReference = State.GetInstance();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_inline(/*hidden argument*/NULL);
		V_0 = L_0;
		// for(int i = 0; i < amount; i++){
		V_1 = 0;
		goto IL_0062;
	}

IL_000a:
	{
		// GameObject clone = Instantiate(obj, Vector3.zero, Quaternion.identity);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_3 = Quaternion_get_identity_m548B37D80F2DEE60E41D1F09BF6889B557BE1A64(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_4 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F(L_1, L_2, L_3, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m4F397BCC6697902B40033E61129D4EA6FE93570F_RuntimeMethod_var);
		V_2 = L_4;
		// clone.SetActive(false);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_2;
		NullCheck(L_5);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_5, (bool)0, /*hidden argument*/NULL);
		// EnemyNavigation nav = clone.AddComponent<EnemyNavigation>();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = V_2;
		NullCheck(L_6);
		EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F * L_7 = GameObject_AddComponent_TisEnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F_mF43971EB4E9F2BC2C0A9E64351D17D676CFBBAC8(L_6, /*hidden argument*/GameObject_AddComponent_TisEnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F_mF43971EB4E9F2BC2C0A9E64351D17D676CFBBAC8_RuntimeMethod_var);
		// nav.playerTransform = playerTransform;
		EnemyNavigation_tF9240F39BB40ABB05A540BAFE8E279D17815020F * L_8 = L_7;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = __this->get_playerTransform_7();
		NullCheck(L_8);
		L_8->set_playerTransform_5(L_9);
		// nav.stateReference = stateReference;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_10 = V_0;
		NullCheck(L_8);
		L_8->set_stateReference_6(L_10);
		// clone.name = $"Enemy {i + 1}";
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = V_2;
		int32_t L_12 = V_1;
		int32_t L_13 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
		RuntimeObject * L_14 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_13);
		String_t* L_15 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral7A67C28476450BFF38CE8226A30240E013217DD0, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		Object_set_name_m538711B144CDE30F929376BCF72D0DC8F85D0826(L_11, L_15, /*hidden argument*/NULL);
		// enemies.Add(clone);
		List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * L_16 = __this->get_enemies_6();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = V_2;
		NullCheck(L_16);
		List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687(L_16, L_17, /*hidden argument*/List_1_Add_m3F7B0DBB84912A2D10FB3328CF93B90917C7C687_RuntimeMethod_var);
		// for(int i = 0; i < amount; i++){
		int32_t L_18 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_0062:
	{
		// for(int i = 0; i < amount; i++){
		int32_t L_19 = V_1;
		int32_t L_20 = ___amount1;
		if ((((int32_t)L_19) < ((int32_t)L_20)))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.GameObject PoolManager::GetEnemyFromPool()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * PoolManager_GetEnemyFromPool_mD2BE242337D1F987C891E650CEF40D65EBCD6C7C (PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoolManager_GetEnemyFromPool_mD2BE242337D1F987C891E650CEF40D65EBCD6C7C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  V_0;
	memset((&V_0), 0, sizeof(V_0));
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_1 = NULL;
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// foreach(GameObject obj in enemies){
		List_1_t0087C02D52C7E5CFF8C0C55FC0453A28FD5F055B * L_0 = __this->get_enemies_6();
		NullCheck(L_0);
		Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053  L_1 = List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B(L_0, /*hidden argument*/List_1_GetEnumerator_m3E7042AE58561530C10A47E4F39B8368CFCB693B_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0022;
		}

IL_000e:
		{
			// foreach(GameObject obj in enemies){
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_inline((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m6C0BE2971AF7991C469272BC300664B8BAF8D800_RuntimeMethod_var);
			V_1 = L_2;
			// if(!obj.activeInHierarchy)
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_1;
			NullCheck(L_3);
			bool L_4 = GameObject_get_activeInHierarchy_mDEE60F1B28281974BA9880EC448682F3DAABB1EF(L_3, /*hidden argument*/NULL);
			if (L_4)
			{
				goto IL_0022;
			}
		}

IL_001e:
		{
			// return obj;
			GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = V_1;
			V_2 = L_5;
			IL2CPP_LEAVE(0x3D, FINALLY_002d);
		}

IL_0022:
		{
			// foreach(GameObject obj in enemies){
			bool L_6 = Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m774CA65723516595B6E22D200D19ADBE8C3E7969_RuntimeMethod_var);
			if (L_6)
			{
				goto IL_000e;
			}
		}

IL_002b:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_002d);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002d;
	}

FINALLY_002d:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812((Enumerator_t9EFA6071D21C1230CBB2E56045AD75472BC48053 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m0C9F007B48F37CD7F09430C3C1B407ACE6213812_RuntimeMethod_var);
		IL2CPP_END_FINALLY(45)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(45)
	{
		IL2CPP_JUMP_TBL(0x3D, IL_003d)
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		// return null;
		return (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *)NULL;
	}

IL_003d:
	{
		// }
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_2;
		return L_7;
	}
}
// System.Void PoolManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PoolManager__ctor_mFBD9E9473247F74E354287F3F6CD423E6C71B8A4 (PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * __this, const RuntimeMethod* method)
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
// System.Void PurchaseableButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PurchaseableButton__ctor_mA597E13945A1D59B3A57826A07A715BF35AAAB0D (PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 * __this, const RuntimeMethod* method)
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
// System.Void RespawnBarricadesButton::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnBarricadesButton_OnEnable_mDBF4784F3C7740522F650005D26A678FF80DB04A (RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B * __this, const RuntimeMethod* method)
{
	{
		// UpdatePrice();
		RespawnBarricadesButton_UpdatePrice_m9DD643C3772526846F1914182983AC41D36D2840(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RespawnBarricadesButton::UpdatePrice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnBarricadesButton_UpdatePrice_m9DD643C3772526846F1914182983AC41D36D2840 (RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B * __this, const RuntimeMethod* method)
{
	{
		// costText.text = price.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_costText_11();
		int32_t* L_1 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_address_of_price_4();
		String_t* L_2 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RespawnBarricadesButton::Buy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnBarricadesButton_Buy_m5866AE02F5AA9A18EC4019F48474C65908009596 (RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RespawnBarricadesButton_Buy_m5866AE02F5AA9A18EC4019F48474C65908009596_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (barricade1.health == 100 && barricade2.health == 100 && barricade3.health == 100)
		DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * L_0 = __this->get_barricade1_8();
		NullCheck(L_0);
		int32_t L_1 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_0)->get_health_4();
		if ((!(((uint32_t)L_1) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_002e;
		}
	}
	{
		DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * L_2 = __this->get_barricade2_9();
		NullCheck(L_2);
		int32_t L_3 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_2)->get_health_4();
		if ((!(((uint32_t)L_3) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_002e;
		}
	}
	{
		DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * L_4 = __this->get_barricade3_10();
		NullCheck(L_4);
		int32_t L_5 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_4)->get_health_4();
		if ((!(((uint32_t)L_5) == ((uint32_t)((int32_t)100)))))
		{
			goto IL_002e;
		}
	}
	{
		// return;
		return;
	}

IL_002e:
	{
		// if (Scoring.money >= price)
		int32_t L_6 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		int32_t L_7 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_price_4();
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_00b4;
		}
	}
	{
		// barricade1.health = 100;
		DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * L_8 = __this->get_barricade1_8();
		NullCheck(L_8);
		((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_8)->set_health_4(((int32_t)100));
		// barricade2.health = 100;
		DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * L_9 = __this->get_barricade2_9();
		NullCheck(L_9);
		((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_9)->set_health_4(((int32_t)100));
		// barricade3.health = 100;
		DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * L_10 = __this->get_barricade3_10();
		NullCheck(L_10);
		((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_10)->set_health_4(((int32_t)100));
		// barricade1.gameObject.SetActive(true);
		DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * L_11 = __this->get_barricade1_8();
		NullCheck(L_11);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_12, (bool)1, /*hidden argument*/NULL);
		// barricade2.gameObject.SetActive(true);
		DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * L_13 = __this->get_barricade2_9();
		NullCheck(L_13);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_14 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_14, (bool)1, /*hidden argument*/NULL);
		// barricade3.gameObject.SetActive(true);
		DamageableBarricade_t7219A7A2FA91A8D760555F4D7E8D06455202CEF9 * L_15 = __this->get_barricade3_10();
		NullCheck(L_15);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_16 = Component_get_gameObject_m0B0570BA8DDD3CD78A9DB568EA18D7317686603C(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_16, (bool)1, /*hidden argument*/NULL);
		// Scoring.money -= price;
		int32_t L_17 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		int32_t L_18 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_price_4();
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_money_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)L_18)));
		// timesPurchased++;
		int32_t L_19 = ((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->get_timesPurchased_7();
		((PurchaseableButton_t76CCABF444EC90FDF47826DA315D114E31044959 *)__this)->set_timesPurchased_7(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
	}

IL_00b4:
	{
		// }
		return;
	}
}
// System.Void RespawnBarricadesButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RespawnBarricadesButton__ctor_m5838EE68C945BBF474F1B193A90B8906643D0355 (RespawnBarricadesButton_t9CAB6B50F5FB965F5DA0D24D15D8985F719BC56B * __this, const RuntimeMethod* method)
{
	{
		PurchaseableButton__ctor_mA597E13945A1D59B3A57826A07A715BF35AAAB0D(__this, /*hidden argument*/NULL);
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
// System.Void Scoring::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoring_Awake_m14F2B321277DD1101F0936CED3E1CEEB317F48AD (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scoring_Awake_m14F2B321277DD1101F0936CED3E1CEEB317F48AD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(!instance) instance = this;
		Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * L_0 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_instance_7();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if(!instance) instance = this;
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_instance_7(__this);
	}

IL_0012:
	{
		// money = 0;
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_money_8(0);
		// }
		return;
	}
}
// System.Void Scoring::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoring_Start_mD61EFB643CBC934425D8CD5B5D62035273FE58B0 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	{
		// gmInstance = GameManager.GetInstance();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline(/*hidden argument*/NULL);
		__this->set_gmInstance_12(L_0);
		// }
		return;
	}
}
// Scoring Scoring::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * L_0 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_instance_7();
		return L_0;
	}
}
// System.Int32 Scoring::DistanceScore(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scoring_DistanceScore_mD9812854052C0EAA54AC7F724AD352A2B2A259F1 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___enemyPos0, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// float dist = enemyPos.magnitude - gmInstance.player.transform.position.magnitude;
		float L_0 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___enemyPos0), /*hidden argument*/NULL);
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_1 = __this->get_gmInstance_12();
		NullCheck(L_1);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_2 = L_1->get_player_17();
		NullCheck(L_2);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_3 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
		float L_5 = Vector3_get_magnitude_m9A750659B60C5FE0C30438A7F9681775D5DB1274((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&V_2), /*hidden argument*/NULL);
		V_0 = ((float)il2cpp_codegen_subtract((float)L_0, (float)L_5));
		// if(dist >= distFar){
		float L_6 = V_0;
		float L_7 = __this->get_distFar_4();
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_0033;
		}
	}
	{
		// distanceScore = 5;
		V_1 = 5;
		// }else if(dist >= distMid){
		goto IL_004f;
	}

IL_0033:
	{
		// }else if(dist >= distMid){
		float L_8 = V_0;
		float L_9 = __this->get_distMid_5();
		if ((!(((float)L_8) >= ((float)L_9))))
		{
			goto IL_0040;
		}
	}
	{
		// distanceScore = 3;
		V_1 = 3;
		// }else if(dist >= distClose){
		goto IL_004f;
	}

IL_0040:
	{
		// }else if(dist >= distClose){
		float L_10 = V_0;
		float L_11 = __this->get_distClose_6();
		if ((!(((float)L_10) >= ((float)L_11))))
		{
			goto IL_004d;
		}
	}
	{
		// distanceScore = 2;
		V_1 = 2;
		// }else{
		goto IL_004f;
	}

IL_004d:
	{
		// distanceScore = 1;
		V_1 = 1;
	}

IL_004f:
	{
		// return distanceScore;
		int32_t L_12 = V_1;
		return L_12;
	}
}
// System.Void Scoring::EnemyHit(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoring_EnemyHit_m080CBA7F9189CA94A6CA9A6F228FC7F4B8893E81 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___enemyPos0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scoring_EnemyHit_m080CBA7F9189CA94A6CA9A6F228FC7F4B8893E81_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// int distScore = DistanceScore(enemyPos);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___enemyPos0;
		int32_t L_1 = Scoring_DistanceScore_mD9812854052C0EAA54AC7F724AD352A2B2A259F1(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// money += distScore;
		int32_t L_2 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		int32_t L_3 = V_0;
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_money_8(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		// totalEarnedMoney += distScore;
		int32_t L_4 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_totalEarnedMoney_9();
		int32_t L_5 = V_0;
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_totalEarnedMoney_9(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		// }
		return;
	}
}
// System.Void Scoring::EnemyKill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoring_EnemyKill_mA67072CF9ADB5D118B7F7FAD32AAC7D6DFC9BC5C (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scoring_EnemyKill_mA67072CF9ADB5D118B7F7FAD32AAC7D6DFC9BC5C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// money += 10;
		int32_t L_0 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_money_8(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))));
		// totalEarnedMoney += 10;
		int32_t L_1 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_totalEarnedMoney_9();
		((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->set_totalEarnedMoney_9(((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)((int32_t)10))));
		// kills++;
		int32_t L_2 = __this->get_kills_10();
		__this->set_kills_10(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Scoring::SurvivedWave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoring_SurvivedWave_m76A6452E8A4F6B4CEF59CF81AE13017938F0DED4 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	{
		// wavesSurvived++;
		int32_t L_0 = __this->get_wavesSurvived_11();
		__this->set_wavesSurvived_11(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// }
		return;
	}
}
// System.Int32 Scoring::GetWavesSurvived()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scoring_GetWavesSurvived_m50F14578BA88D194C3E3C2089F62C679617FB674 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	{
		// return wavesSurvived;
		int32_t L_0 = __this->get_wavesSurvived_11();
		return L_0;
	}
}
// System.Int32 Scoring::GetMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scoring_GetMoney_mF17383D5FF69A97D3EEE5A573B16CA50FBDCB2A8 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scoring_GetMoney_mF17383D5FF69A97D3EEE5A573B16CA50FBDCB2A8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return money;
		int32_t L_0 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_money_8();
		return L_0;
	}
}
// System.Int32 Scoring::GetTotalMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scoring_GetTotalMoney_m289384516363E56CFE7FC4F12D63C026B237DA95 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scoring_GetTotalMoney_m289384516363E56CFE7FC4F12D63C026B237DA95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return totalEarnedMoney;
		int32_t L_0 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_totalEarnedMoney_9();
		return L_0;
	}
}
// System.Int32 Scoring::GetKills()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scoring_GetKills_mA254377BDA58EEDE91960BAE66882B48A3046344 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	{
		// return kills;
		int32_t L_0 = __this->get_kills_10();
		return L_0;
	}
}
// System.Void Scoring::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scoring__ctor_mEC64CA73DD2D4EC0C3ECA85EC525EDD8F4904875 (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	{
		// public float distFar = 20;
		__this->set_distFar_4((20.0f));
		// public float distMid = 15;
		__this->set_distMid_5((15.0f));
		// public float distClose = 10;
		__this->set_distClose_6((10.0f));
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
// System.Void Spawner::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Awake_m6AD2059289CB612ED140AE1940A65B45FECC9299 (Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D * __this, const RuntimeMethod* method)
{
	{
		// pm = PoolManager.GetInstance();
		PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * L_0 = PoolManager_GetInstance_mE8BBF4EBB3F655D9EAAFF62EA621AD367D4233DC_inline(/*hidden argument*/NULL);
		__this->set_pm_6(L_0);
		// }
		return;
	}
}
// System.Void Spawner::Spawn(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_Spawn_mC4A347D5B0A4DF08B424A734CD76E7AD3B2EEE29 (Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___objToSpawn0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Spawner_Spawn_mC4A347D5B0A4DF08B424A734CD76E7AD3B2EEE29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if(objToSpawn == null)
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___objToSpawn0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// randomX = Random.Range(-spawnerRadius, spawnerRadius);
		float L_2 = __this->get_spawnerRadius_4();
		float L_3 = __this->get_spawnerRadius_4();
		float L_4 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(((-L_2)), L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		// randomZ = Random.Range(-spawnerRadius, spawnerRadius);
		float L_5 = __this->get_spawnerRadius_4();
		float L_6 = __this->get_spawnerRadius_4();
		float L_7 = Random_Range_m2844A4A71C86BDF83A12D97FC6DD95278E87E384(((-L_5)), L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		// objToSpawn.transform.position = new Vector3(transform.position.x + randomX, transform.position.y, transform.position.z + randomZ);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = ___objToSpawn0;
		NullCheck(L_8);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = GameObject_get_transform_mA5C38857137F137CB96C69FAA624199EB1C2FB2C(L_8, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_10 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_11 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_x_2();
		float L_13 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_14 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_14, /*hidden argument*/NULL);
		float L_16 = L_15.get_y_3();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_17 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_17, /*hidden argument*/NULL);
		float L_19 = L_18.get_z_4();
		float L_20 = V_1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector3__ctor_m08F61F548AA5836D8789843ACB4A81E4963D2EE1((&L_21), ((float)il2cpp_codegen_add((float)L_12, (float)L_13)), L_16, ((float)il2cpp_codegen_add((float)L_19, (float)L_20)), /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_mDA89E4893F14ECA5CBEEE7FB80A5BF7C1B8EA6DC(L_9, L_21, /*hidden argument*/NULL);
		// objToSpawn.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_22 = ___objToSpawn0;
		NullCheck(L_22);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_22, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spawner::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner_OnDrawGizmos_m6AE93FC6552D452E7B20E73F4E6195E95B2D7DAF (Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D * __this, const RuntimeMethod* method)
{
	{
		// Gizmos.DrawWireSphere(transform.position, spawnerRadius);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		float L_2 = __this->get_spawnerRadius_4();
		Gizmos_DrawWireSphere_mF6F2BC5CDF7B3F312FE9AB579CDC1C6B72154BCF(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Spawner::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spawner__ctor_m68CFEF422897294431A79CD05B53EBBAD72C3981 (Spawner_t6D000391A607DDA6E3C0F62284BA6E5127E2010D * __this, const RuntimeMethod* method)
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
// System.Void State::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_Awake_m9DE62C4A62B2519108B321A0664678A14A2AD2CB (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (State_Awake_m9DE62C4A62B2519108B321A0664678A14A2AD2CB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!instance) instance = this;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = ((State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_StaticFields*)il2cpp_codegen_static_fields_for(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (!instance) instance = this;
		((State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_StaticFields*)il2cpp_codegen_static_fields_for(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_il2cpp_TypeInfo_var))->set_instance_4(__this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// State State::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = ((State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_StaticFields*)il2cpp_codegen_static_fields_for(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
// State_GameState State::GetGameState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_GetGameState_m54A8B9BD9346B78AC4CFA3A980F02E384348B44B (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// return gameState;
		int32_t L_0 = __this->get_gameState_5();
		return L_0;
	}
}
// System.Void State::SetGameState(State_GameState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_SetGameState_m21B5C6D970C8CA21667614F11DDDDB2E1CCAC2B6 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, int32_t ___newState0, const RuntimeMethod* method)
{
	{
		// gameState = newState;
		int32_t L_0 = ___newState0;
		__this->set_gameState_5(L_0);
		// OnGameStateChanged();
		State_OnGameStateChanged_m95BEB30587F7BEE184E23A77967083557D04A73E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void State::add_GameStateChanged(State_StateChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_add_GameStateChanged_m2618E258FC9540D124C2F76659A386517D30B72F (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (State_add_GameStateChanged_m2618E258FC9540D124C2F76659A386517D30B72F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_0 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_1 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_2 = NULL;
	{
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_0 = __this->get_GameStateChanged_7();
		V_0 = L_0;
	}

IL_0007:
	{
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_1 = V_0;
		V_1 = L_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_2 = V_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)CastclassSealed((RuntimeObject*)L_4, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var));
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 ** L_5 = __this->get_address_of_GameStateChanged_7();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_6 = V_2;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_7 = V_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_8 = InterlockedCompareExchangeImpl<StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *>((StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 **)L_5, L_6, L_7);
		V_0 = L_8;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_9 = V_0;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)L_9) == ((RuntimeObject*)(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void State::remove_GameStateChanged(State_StateChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_remove_GameStateChanged_m840886B5A411DCAA538BD5D2FF26F4B8C3D4A5EE (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (State_remove_GameStateChanged_m840886B5A411DCAA538BD5D2FF26F4B8C3D4A5EE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_0 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_1 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_2 = NULL;
	{
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_0 = __this->get_GameStateChanged_7();
		V_0 = L_0;
	}

IL_0007:
	{
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_1 = V_0;
		V_1 = L_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_2 = V_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)CastclassSealed((RuntimeObject*)L_4, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var));
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 ** L_5 = __this->get_address_of_GameStateChanged_7();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_6 = V_2;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_7 = V_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_8 = InterlockedCompareExchangeImpl<StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *>((StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 **)L_5, L_6, L_7);
		V_0 = L_8;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_9 = V_0;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)L_9) == ((RuntimeObject*)(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void State::OnGameStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnGameStateChanged_m95BEB30587F7BEE184E23A77967083557D04A73E (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * G_B3_0 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * G_B2_0 = NULL;
	{
		// if (GameStateChanged != null)
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_0 = __this->get_GameStateChanged_7();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// GameStateChanged?.Invoke();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_1 = __this->get_GameStateChanged_7();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		StateChanged_Invoke_mC0D1E6BCCBF99B1EEFD63E60B0850BECF9ADC684(G_B3_0, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void State::PauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_PauseGame_mDDAE38C87C223F080256CF58525E596C65BE4C14 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// SetGameState(GameState.Paused);
		State_SetGameState_m21B5C6D970C8CA21667614F11DDDDB2E1CCAC2B6(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void State::UnPauseGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_UnPauseGame_m27A0F1F9A8F2BF763B629D1A7CF53AC02C78FDEE (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// SetGameState(GameState.Playing);
		State_SetGameState_m21B5C6D970C8CA21667614F11DDDDB2E1CCAC2B6(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void State::GameOver()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_GameOver_mC001040632873A57029C559FB842CC059260D57A (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// SetGameState(GameState.GameOver);
		State_SetGameState_m21B5C6D970C8CA21667614F11DDDDB2E1CCAC2B6(__this, 3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void State::Shop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_Shop_m7876D412A5161EC31C5C465299D27B83C28B58A2 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// SetGameState(GameState.Buying);
		State_SetGameState_m21B5C6D970C8CA21667614F11DDDDB2E1CCAC2B6(__this, 2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// State_WaveState State::GetWaveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t State_GetWaveState_m671090CC8F21B08AACE28C95F02BD54B652A9C61 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// return waveState;
		int32_t L_0 = __this->get_waveState_6();
		return L_0;
	}
}
// System.Void State::SetWaveState(State_WaveState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_SetWaveState_mD116D38C52ECB9A9EB8A9CA056D0BC597C424F5C (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, int32_t ___state0, const RuntimeMethod* method)
{
	{
		// waveState = state;
		int32_t L_0 = ___state0;
		__this->set_waveState_6(L_0);
		// OnWaveStateChanged();
		State_OnWaveStateChanged_mBC8DE70A4E5F98E5C11150948A95D26E69CC5E12(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void State::add_WaveStateChanged(State_StateChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_add_WaveStateChanged_m07846383CD17959BE8A8FD840F662E60C4CA0D13 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (State_add_WaveStateChanged_m07846383CD17959BE8A8FD840F662E60C4CA0D13_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_0 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_1 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_2 = NULL;
	{
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_0 = __this->get_WaveStateChanged_8();
		V_0 = L_0;
	}

IL_0007:
	{
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_1 = V_0;
		V_1 = L_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_2 = V_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)CastclassSealed((RuntimeObject*)L_4, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var));
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 ** L_5 = __this->get_address_of_WaveStateChanged_8();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_6 = V_2;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_7 = V_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_8 = InterlockedCompareExchangeImpl<StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *>((StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 **)L_5, L_6, L_7);
		V_0 = L_8;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_9 = V_0;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)L_9) == ((RuntimeObject*)(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void State::remove_WaveStateChanged(State_StateChanged)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_remove_WaveStateChanged_m2486E3945871D003A8E7752B5541E992970EDE29 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (State_remove_WaveStateChanged_m2486E3945871D003A8E7752B5541E992970EDE29_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_0 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_1 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * V_2 = NULL;
	{
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_0 = __this->get_WaveStateChanged_8();
		V_0 = L_0;
	}

IL_0007:
	{
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_1 = V_0;
		V_1 = L_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_2 = V_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		V_2 = ((StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)CastclassSealed((RuntimeObject*)L_4, StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var));
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 ** L_5 = __this->get_address_of_WaveStateChanged_8();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_6 = V_2;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_7 = V_1;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_8 = InterlockedCompareExchangeImpl<StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *>((StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 **)L_5, L_6, L_7);
		V_0 = L_8;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_9 = V_0;
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_10 = V_1;
		if ((!(((RuntimeObject*)(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)L_9) == ((RuntimeObject*)(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)L_10))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void State::OnWaveStateChanged()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_OnWaveStateChanged_mBC8DE70A4E5F98E5C11150948A95D26E69CC5E12 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * G_B3_0 = NULL;
	StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * G_B2_0 = NULL;
	{
		// if (WaveStateChanged != null)
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_0 = __this->get_WaveStateChanged_8();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		// WaveStateChanged?.Invoke();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_1 = __this->get_WaveStateChanged_8();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_2 = L_1;
		G_B2_0 = L_2;
		if (L_2)
		{
			G_B3_0 = L_2;
			goto IL_0013;
		}
	}
	{
		return;
	}

IL_0013:
	{
		NullCheck(G_B3_0);
		StateChanged_Invoke_mC0D1E6BCCBF99B1EEFD63E60B0850BECF9ADC684(G_B3_0, /*hidden argument*/NULL);
	}

IL_0018:
	{
		// }
		return;
	}
}
// System.Void State::SetWaveStatePaused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_SetWaveStatePaused_m5F081D286798759EAFBF735BEE534A199A6FAF2F (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// SetWaveState(WaveState.Paused);
		State_SetWaveState_mD116D38C52ECB9A9EB8A9CA056D0BC597C424F5C(__this, 1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void State::SetWaveStateSpawning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State_SetWaveStateSpawning_m1DBDA590B523E1C41B79171D88C1964D13A63AAA (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// SetWaveState(WaveState.Spawning);
		State_SetWaveState_mD116D38C52ECB9A9EB8A9CA056D0BC597C424F5C(__this, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void State::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void State__ctor_m4175CFD71B078879CCB1FFF1A29C294858A6E5D9 (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// private GameState gameState = GameState.Playing;
		__this->set_gameState_5(1);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void State_StateChanged::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged__ctor_m8AA4A8CD1B7DEC02D2ECCBC420950580B10A779A (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void State_StateChanged::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged_Invoke_mC0D1E6BCCBF99B1EEFD63E60B0850BECF9ADC684 (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * __this, const RuntimeMethod* method)
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
// System.IAsyncResult State_StateChanged::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StateChanged_BeginInvoke_m8B6AD80369836AA2C3B0494C3C7D94B5EAF3357B (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * __this, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback0, RuntimeObject * ___object1, const RuntimeMethod* method)
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback0, (RuntimeObject*)___object1);
}
// System.Void State_StateChanged::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StateChanged_EndInvoke_mAA6DD9F5E9086C78492DB31AE5F3E29034DE78D6 (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UIAmmo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIAmmo_Awake_m45A1B445E3D82B0C36389A94318C449027F9128B (UIAmmo_tD6DC7E96EBB5CE609CAAA7812A03D2CC97C94399 * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIAmmo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIAmmo_Start_m4F9BE4DC7F56457CA7A4EB67D28916FDADC7E1F3 (UIAmmo_tD6DC7E96EBB5CE609CAAA7812A03D2CC97C94399 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B(__this, /*hidden argument*/NULL);
		// playerWeapon = gmInstance.player.weapon;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_gmInstance_4();
		NullCheck(L_0);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = L_0->get_player_17();
		NullCheck(L_1);
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_2 = L_1->get_weapon_7();
		__this->set_playerWeapon_7(L_2);
		// }
		return;
	}
}
// System.Void UIAmmo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIAmmo_Update_m0259B0DE9F0E883958F48074D4AE8D0DADF23F58 (UIAmmo_tD6DC7E96EBB5CE609CAAA7812A03D2CC97C94399 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2(__this, /*hidden argument*/NULL);
		// ammoText.text = playerWeapon.ammo.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_ammoText_6();
		Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * L_1 = __this->get_playerWeapon_7();
		NullCheck(L_1);
		int32_t* L_2 = L_1->get_address_of_ammo_5();
		String_t* L_3 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIAmmo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIAmmo__ctor_m206B461788DF15BAE55E7D36695589071477E349 (UIAmmo_tD6DC7E96EBB5CE609CAAA7812A03D2CC97C94399 * __this, const RuntimeMethod* method)
{
	{
		UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB(__this, /*hidden argument*/NULL);
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
// System.Void UIBase::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101 (UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIBase::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B (UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 * __this, const RuntimeMethod* method)
{
	{
		// gmInstance = GameManager.GetInstance();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline(/*hidden argument*/NULL);
		__this->set_gmInstance_4(L_0);
		// stateReference = State.GetInstance();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_1 = State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_inline(/*hidden argument*/NULL);
		__this->set_stateReference_5(L_1);
		// }
		return;
	}
}
// System.Void UIBase::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2 (UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UIBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB (UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 * __this, const RuntimeMethod* method)
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
// System.Void UIBuyMenu::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBuyMenu_Awake_mD50DFCDB8F2AABD29FC73896A778AE1465650C81 (UIBuyMenu_tDA1EA67055DEFF28D2381FD7AAC240A83AD00B1D * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIBuyMenu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBuyMenu_Start_m399F7B237E836606F9F07CC70BBD6BD4A89C228E (UIBuyMenu_tDA1EA67055DEFF28D2381FD7AAC240A83AD00B1D * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIBuyMenu::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBuyMenu_Update_m4277056F502CB5D2B744B4916783E5F58F66F35B (UIBuyMenu_tDA1EA67055DEFF28D2381FD7AAC240A83AD00B1D * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIBuyMenu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBuyMenu__ctor_m645C83C4EB75614E149661566089AC16E18B6B1E (UIBuyMenu_tDA1EA67055DEFF28D2381FD7AAC240A83AD00B1D * __this, const RuntimeMethod* method)
{
	{
		UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB(__this, /*hidden argument*/NULL);
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
// System.Void UIGameOver::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver_OnEnable_m69914F6CFA11AF990033F0010B94C54C90036A53 (UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// Scoring scoring = Scoring.GetInstance();
		Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * L_0 = Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02_inline(/*hidden argument*/NULL);
		// int wavesSurvivedAmount = scoring.GetWavesSurvived();
		Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * L_1 = L_0;
		NullCheck(L_1);
		int32_t L_2 = Scoring_GetWavesSurvived_m50F14578BA88D194C3E3C2089F62C679617FB674_inline(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int enemiesKilledAmount = scoring.GetKills();
		Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * L_3 = L_1;
		NullCheck(L_3);
		int32_t L_4 = Scoring_GetKills_mA254377BDA58EEDE91960BAE66882B48A3046344_inline(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		// int coinsEarnedAmount = scoring.GetTotalMoney();
		NullCheck(L_3);
		int32_t L_5 = Scoring_GetTotalMoney_m289384516363E56CFE7FC4F12D63C026B237DA95_inline(L_3, /*hidden argument*/NULL);
		V_2 = L_5;
		// wavesSurvivedAmountText.text = wavesSurvivedAmount.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_6 = __this->get_wavesSurvivedAmountText_10();
		String_t* L_7 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_6);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_6, L_7, /*hidden argument*/NULL);
		// enemiesKilledAmountText.text = enemiesKilledAmount.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_8 = __this->get_enemiesKilledAmountText_11();
		String_t* L_9 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_8);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_8, L_9, /*hidden argument*/NULL);
		// coinsEarnedAmountText.text = coinsEarnedAmount.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_10 = __this->get_coinsEarnedAmountText_12();
		String_t* L_11 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_10);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_10, L_11, /*hidden argument*/NULL);
		// int wavesSurvivedScore = wavesSurvivedAmount * 12000;
		int32_t L_12 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_12, (int32_t)((int32_t)12000)));
		// int killsScore = enemiesKilledAmount * 50;
		int32_t L_13 = V_1;
		V_4 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_13, (int32_t)((int32_t)50)));
		// int coinsScore = coinsEarnedAmount * 10;
		int32_t L_14 = V_2;
		V_5 = ((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)((int32_t)10)));
		// int totalScore = wavesSurvivedScore + killsScore + coinsScore;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)), (int32_t)L_17));
		// wavesSurvivedScoreText.text = wavesSurvivedScore.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_18 = __this->get_wavesSurvivedScoreText_6();
		String_t* L_19 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_3), /*hidden argument*/NULL);
		NullCheck(L_18);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_18, L_19, /*hidden argument*/NULL);
		// enemiesKilledScoreText.text = killsScore.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_20 = __this->get_enemiesKilledScoreText_7();
		String_t* L_21 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_4), /*hidden argument*/NULL);
		NullCheck(L_20);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_20, L_21, /*hidden argument*/NULL);
		// coinsEarnedScoreText.text = coinsScore.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_22 = __this->get_coinsEarnedScoreText_8();
		String_t* L_23 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_5), /*hidden argument*/NULL);
		NullCheck(L_22);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_22, L_23, /*hidden argument*/NULL);
		// totalScoreText.text = totalScore.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_24 = __this->get_totalScoreText_9();
		String_t* L_25 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(&V_6), /*hidden argument*/NULL);
		NullCheck(L_24);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_24, L_25, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIGameOver::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver_Awake_m6AF7C65A9AD0A1373C16B9558C06C50B8A5D4C5F (UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195 * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIGameOver::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver_Start_m669682CCBFB4381B034C86BB1A3C68589B877F08 (UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIGameOver::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver_Update_mA3D7FB7370DD7CA31DBF740423A47429CE086FE5 (UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIGameOver::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver_Quit_m2695A81B5478DCD746DB5D866B940804713E5B81 (UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIGameOver::Retry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver_Retry_m4EBB5CCBEA796882EE4A1CA2B65A3B80119C5E38 (UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195 * __this, const RuntimeMethod* method)
{
	{
		// stateReference.UnPauseGame();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_stateReference_5();
		NullCheck(L_0);
		State_UnPauseGame_m27A0F1F9A8F2BF763B629D1A7CF53AC02C78FDEE(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(1, LoadSceneMode.Single);
		SceneManager_LoadScene_m84E39F1210BA4482CF2D8A2F068198760DE4B4C5(1, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIGameOver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIGameOver__ctor_m0657ADBB4411A4ADA995ED7E7F250FCE45B053C6 (UIGameOver_t934CB218321186E746AC5CD9A34E0651D5FAA195 * __this, const RuntimeMethod* method)
{
	{
		UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB(__this, /*hidden argument*/NULL);
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
// System.Void UIHealth::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealth_Awake_mD1062F3D5647FE14FA55198D95D6D683E3F4BA0C (UIHealth_t8358029AB4BE890792AC5ADED398B55ED33D9F68 * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIHealth::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealth_Start_mD2ECAC9A563B0B38A820C58F0368EE8F28ED5056 (UIHealth_t8358029AB4BE890792AC5ADED398B55ED33D9F68 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B(__this, /*hidden argument*/NULL);
		// character = gmInstance.player;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_gmInstance_4();
		NullCheck(L_0);
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = L_0->get_player_17();
		__this->set_character_6(L_1);
		// }
		return;
	}
}
// System.Void UIHealth::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealth_Update_mCEA3DE29E3950A01B9CCE47842BA256A2CE0606A (UIHealth_t8358029AB4BE890792AC5ADED398B55ED33D9F68 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2(__this, /*hidden argument*/NULL);
		// slider.value = (float)(character.health / 100.0f);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_0 = __this->get_slider_7();
		Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 * L_1 = __this->get_character_6();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_health_4();
		NullCheck(L_0);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_0, (((float)((float)((float)((float)(((float)((float)L_2)))/(float)(100.0f)))))));
		// }
		return;
	}
}
// System.Void UIHealth::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealth__ctor_m675424A7C454DD8A240BC09EED28B8096D3CE7CC (UIHealth_t8358029AB4BE890792AC5ADED398B55ED33D9F68 * __this, const RuntimeMethod* method)
{
	{
		UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB(__this, /*hidden argument*/NULL);
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
// System.Void UIHealthCounter::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthCounter_OnEnable_m4A209FF5AB1533AA890A75464BE670E2ACD3D105 (UIHealthCounter_t156C24DE6270503DB209DC28BDD9E1F60608220A * __this, const RuntimeMethod* method)
{
	{
		// costText.text = playerReference.health.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_costText_5();
		Player_t8321F4671F549F5A7793BB8BA33D32CCCD538873 * L_1 = __this->get_playerReference_4();
		NullCheck(L_1);
		int32_t* L_2 = ((Damageable_t1F9E6FF2BB0415FE1DF54B608FFC589378A4F474 *)L_1)->get_address_of_health_4();
		String_t* L_3 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)L_2, /*hidden argument*/NULL);
		NullCheck(L_0);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIHealthCounter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIHealthCounter__ctor_mE98D20B51BCE76DEC037943B3932BB7FA35878C1 (UIHealthCounter_t156C24DE6270503DB209DC28BDD9E1F60608220A * __this, const RuntimeMethod* method)
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
// UIManager UIManager::GetInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * UIManager_GetInstance_m2CEB5E722EE87CB720B1D2C8C5596D2B537A5A6C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_GetInstance_m2CEB5E722EE87CB720B1D2C8C5596D2B537A5A6C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = ((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->get_instance_10();
		return L_0;
	}
}
// System.Void UIManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Awake_mD9EFB03744D897F8A0784A58CB31CE9B0BC5D651 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Awake_mD9EFB03744D897F8A0784A58CB31CE9B0BC5D651_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!instance) instance = this;
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = ((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->get_instance_10();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (!instance) instance = this;
		((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->set_instance_10(__this);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mA404E1D4B4AA55F22307F16D7D7842CE7580DD0B (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_Start_mA404E1D4B4AA55F22307F16D7D7842CE7580DD0B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// activeUI = new Queue<GameObject>();
		Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * L_0 = (Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 *)il2cpp_codegen_object_new(Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5_il2cpp_TypeInfo_var);
		Queue_1__ctor_mA5BDA0FDC59A60309E7B7651D7D68A650908FABD(L_0, /*hidden argument*/Queue_1__ctor_mA5BDA0FDC59A60309E7B7651D7D68A650908FABD_RuntimeMethod_var);
		__this->set_activeUI_9(L_0);
		// if (!stateReference) stateReference = State.GetInstance();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_1 = __this->get_stateReference_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0023;
		}
	}
	{
		// if (!stateReference) stateReference = State.GetInstance();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_3 = State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_inline(/*hidden argument*/NULL);
		__this->set_stateReference_11(L_3);
	}

IL_0023:
	{
		// stateReference.GameStateChanged += ChangeUI;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_4 = __this->get_stateReference_11();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_5 = (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)il2cpp_codegen_object_new(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var);
		StateChanged__ctor_m8AA4A8CD1B7DEC02D2ECCBC420950580B10A779A(L_5, __this, (intptr_t)((intptr_t)UIManager_ChangeUI_m401472FB79E159F95C7F053E93FF052A59209871_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_4);
		State_add_GameStateChanged_m2618E258FC9540D124C2F76659A386517D30B72F(L_4, L_5, /*hidden argument*/NULL);
		// stateReference.WaveStateChanged += ChangeUI;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_6 = __this->get_stateReference_11();
		StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 * L_7 = (StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6 *)il2cpp_codegen_object_new(StateChanged_t322619EC6EF536C2DDC8BF885940F0FEE0C343A6_il2cpp_TypeInfo_var);
		StateChanged__ctor_m8AA4A8CD1B7DEC02D2ECCBC420950580B10A779A(L_7, __this, (intptr_t)((intptr_t)UIManager_ChangeUI_m401472FB79E159F95C7F053E93FF052A59209871_RuntimeMethod_var), /*hidden argument*/NULL);
		NullCheck(L_6);
		State_add_WaveStateChanged_m07846383CD17959BE8A8FD840F662E60C4CA0D13(L_6, L_7, /*hidden argument*/NULL);
		// OpenWindow(inGameUI);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_8 = __this->get_inGameUI_4();
		UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9(__this, L_8, /*hidden argument*/NULL);
		// CanPause(true);
		UIManager_CanPause_m109D06ED90BD689AB628DE1C3F0A62D463C212D4_inline(__this, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::ChangeUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ChangeUI_m401472FB79E159F95C7F053E93FF052A59209871 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// State.GameState gameState = stateReference.GetGameState();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = __this->get_stateReference_11();
		NullCheck(L_0);
		int32_t L_1 = State_GetGameState_m54A8B9BD9346B78AC4CFA3A980F02E384348B44B_inline(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// State.WaveState waveState = stateReference.GetWaveState();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_2 = __this->get_stateReference_11();
		NullCheck(L_2);
		int32_t L_3 = State_GetWaveState_m671090CC8F21B08AACE28C95F02BD54B652A9C61_inline(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		// if (gameState == State.GameState.GameOver)
		int32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) == ((uint32_t)3))))
		{
			goto IL_0029;
		}
	}
	{
		// OpenWindow(gameOverUI);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_5 = __this->get_gameOverUI_6();
		UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9(__this, L_5, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0029:
	{
		// else if (gameState == State.GameState.Buying)
		int32_t L_6 = V_0;
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0041;
		}
	}
	{
		// OpenWindow(buyUI);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = __this->get_buyUI_8();
		UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9(__this, L_7, /*hidden argument*/NULL);
		// CanPause(false);
		UIManager_CanPause_m109D06ED90BD689AB628DE1C3F0A62D463C212D4_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0041:
	{
		// else if (waveState == State.WaveState.Paused)
		int32_t L_8 = V_1;
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		// OpenWindow(timerUI);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_9 = __this->get_timerUI_7();
		UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9(__this, L_9, /*hidden argument*/NULL);
		// CanPause(false);
		UIManager_CanPause_m109D06ED90BD689AB628DE1C3F0A62D463C212D4_inline(__this, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0059:
	{
		// else if (gameState == State.GameState.Paused)
		int32_t L_10 = V_0;
		if (L_10)
		{
			goto IL_0069;
		}
	}
	{
		// OpenWindow(pauseUI);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_11 = __this->get_pauseUI_5();
		UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9(__this, L_11, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0069:
	{
		// else if (gameState == State.GameState.Playing)
		int32_t L_12 = V_0;
		if ((!(((uint32_t)L_12) == ((uint32_t)1))))
		{
			goto IL_0079;
		}
	}
	{
		// OpenWindow(inGameUI);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_13 = __this->get_inGameUI_4();
		UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9(__this, L_13, /*hidden argument*/NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void UIManager::CanPause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CanPause_m109D06ED90BD689AB628DE1C3F0A62D463C212D4 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, bool ___pause0, const RuntimeMethod* method)
{
	{
		// canPause = pause;
		bool L_0 = ___pause0;
		__this->set_canPause_12(L_0);
		// }
		return;
	}
}
// System.Boolean UIManager::GetCanPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UIManager_GetCanPause_m5E6B9A4CCB5350905D13A0FDC72D747FBD67AB9E (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// return canPause;
		bool L_0 = __this->get_canPause_12();
		return L_0;
	}
}
// System.Void UIManager::OpenWindow(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___ui0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_OpenWindow_m4D27D338B5077F075ABDA443C60ECDD152B80BB9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * V_0 = NULL;
	{
		// GameObject newUI = Instantiate(ui, transform);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_0 = ___ui0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_1 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_2 = Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0(L_0, L_1, /*hidden argument*/Object_Instantiate_TisGameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F_m1CDF66D563B03D37B37264800222D4F3B307EDA0_RuntimeMethod_var);
		V_0 = L_2;
		// newUI.SetActive(true);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = V_0;
		NullCheck(L_3);
		GameObject_SetActive_m25A39F6D9FB68C51F13313F9804E85ACC937BC04(L_3, (bool)1, /*hidden argument*/NULL);
		// if (activeUI.Count > 0)
		Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * L_4 = __this->get_activeUI_9();
		NullCheck(L_4);
		int32_t L_5 = Queue_1_get_Count_mF3FF543F43616B19548F1A7FBC8BB7C79AF58015_inline(L_4, /*hidden argument*/Queue_1_get_Count_mF3FF543F43616B19548F1A7FBC8BB7C79AF58015_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0028;
		}
	}
	{
		// CloseWindow();
		UIManager_CloseWindow_m912797EE56B153F0C6FADFA02EFD8235FD8E0C1D(__this, /*hidden argument*/NULL);
	}

IL_0028:
	{
		// activeUI.Enqueue(newUI);
		Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * L_6 = __this->get_activeUI_9();
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_7 = V_0;
		NullCheck(L_6);
		Queue_1_Enqueue_mE8CAD285D84453EFF8B2D30D84DE431C4DD986B8(L_6, L_7, /*hidden argument*/Queue_1_Enqueue_mE8CAD285D84453EFF8B2D30D84DE431C4DD986B8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void UIManager::CloseWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CloseWindow_m912797EE56B153F0C6FADFA02EFD8235FD8E0C1D (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_CloseWindow_m912797EE56B153F0C6FADFA02EFD8235FD8E0C1D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(activeUI.Dequeue());
		Queue_1_t79949E96996CE1B64FD03E22AF428379C0753FF5 * L_0 = __this->get_activeUI_9();
		NullCheck(L_0);
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_1 = Queue_1_Dequeue_mAFDC3F18F0BE5A1F4EBC18346C8ECCFDB05769CA(L_0, /*hidden argument*/Queue_1_Dequeue_mAFDC3F18F0BE5A1F4EBC18346C8ECCFDB05769CA_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_Destroy_m23B4562495BA35A74266D4372D45368F8C05109A(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_m5E5065654115BEE5B00F84AC64469D5D642351A3 (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// private bool canPause = true;
		__this->set_canPause_12((bool)1);
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
// System.Void UIMoney::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMoney_Awake_m736C35E0BD328AAF770A0FC5EA42038F42622B33 (UIMoney_tA821A929D622FDA2D686FAABADC21F1584A257F6 * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIMoney::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMoney_Start_m70E5FC7034920ECEEE0D3F4E3565334FB2D6CDC7 (UIMoney_tA821A929D622FDA2D686FAABADC21F1584A257F6 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIMoney::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMoney_Update_m453B7A8363031920224464985A70DBAE2534F97F (UIMoney_tA821A929D622FDA2D686FAABADC21F1584A257F6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIMoney_Update_m453B7A8363031920224464985A70DBAE2534F97F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Update();
		UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2(__this, /*hidden argument*/NULL);
		// moneyText.text = Scoring.money.ToString();
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_moneyText_6();
		String_t* L_1 = Int32_ToString_m1863896DE712BF97C031D55B12E1583F1982DC02((int32_t*)(((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_address_of_money_8()), /*hidden argument*/NULL);
		NullCheck(L_0);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIMoney::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIMoney__ctor_mAAAC5BC4135F67DCD5D76666D833D71AA73B5C97 (UIMoney_tA821A929D622FDA2D686FAABADC21F1584A257F6 * __this, const RuntimeMethod* method)
{
	{
		UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB(__this, /*hidden argument*/NULL);
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
// System.Void UIPause::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause_Awake_m825D9E372DB916889717B0AFBEBADDC536BA4261 (UIPause_t3384ECEE2ADD964940A87F5FB15E696B35C60E72 * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIPause::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause_Start_m495EB08BA53DACD67FB9FD7BE549870CBCA4E973 (UIPause_t3384ECEE2ADD964940A87F5FB15E696B35C60E72 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIPause::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause_Update_m1AB549DBD6EF9A6ECF5EC6F8129CD1532DBE7C82 (UIPause_t3384ECEE2ADD964940A87F5FB15E696B35C60E72 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIPause::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause_Resume_mFAF7C110F8F9B7A859DC33CD33DE4BF002B0FA1D (UIPause_t3384ECEE2ADD964940A87F5FB15E696B35C60E72 * __this, const RuntimeMethod* method)
{
	{
		// stateReference.UnPauseGame();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_stateReference_5();
		NullCheck(L_0);
		State_UnPauseGame_m27A0F1F9A8F2BF763B629D1A7CF53AC02C78FDEE(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIPause::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause_Quit_m54A578C0CF9BFDBFE13C24037F4E9553D283561F (UIPause_t3384ECEE2ADD964940A87F5FB15E696B35C60E72 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_mA005EB22CB989AC3794334754F15E1C0D2FF1C95(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIPause::Retry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause_Retry_m6D5D9911F372D19F90B1F9E02E4D39EFF87F3286 (UIPause_t3384ECEE2ADD964940A87F5FB15E696B35C60E72 * __this, const RuntimeMethod* method)
{
	{
		// stateReference.UnPauseGame();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_stateReference_5();
		NullCheck(L_0);
		State_UnPauseGame_m27A0F1F9A8F2BF763B629D1A7CF53AC02C78FDEE(L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene(1, LoadSceneMode.Single);
		SceneManager_LoadScene_m84E39F1210BA4482CF2D8A2F068198760DE4B4C5(1, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIPause::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPause__ctor_mE06CDCC14FF2FB49D935C4D4A423564376D98113 (UIPause_t3384ECEE2ADD964940A87F5FB15E696B35C60E72 * __this, const RuntimeMethod* method)
{
	{
		UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB(__this, /*hidden argument*/NULL);
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
// System.Void UIPlayButton::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPlayButton_Click_m5A74BB3C58615FACF9FC0B468AA76C3C3A3F7C00 (UIPlayButton_t8F31132EEC3EB4DA226498809075014AF39528A8 * __this, const RuntimeMethod* method)
{
	{
		// State.GetInstance().UnPauseGame();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_inline(/*hidden argument*/NULL);
		NullCheck(L_0);
		State_UnPauseGame_m27A0F1F9A8F2BF763B629D1A7CF53AC02C78FDEE(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIPlayButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIPlayButton__ctor_mD8AAE1AF5456C2A75CD0312134F61795AA7D113B (UIPlayButton_t8F31132EEC3EB4DA226498809075014AF39528A8 * __this, const RuntimeMethod* method)
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
// System.Void UITime::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITime_Awake_m6C7205D20ABDCA1EA66AD81B5DDBB6D7CE946E17 (UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UITime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITime_Start_m3FBB25BD539306179F02E62100BC6A68A569C5BE (UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UITime::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITime_OnEnable_m6575C638F5D3BB960913B328C8CC8435373C3877 (UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UITime_OnEnable_m6575C638F5D3BB960913B328C8CC8435373C3877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!stateReference) stateReference = State.GetInstance();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_stateReference_5();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Implicit_m8B2A44B4B1406ED346D1AE6D962294FD58D0D534(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0018;
		}
	}
	{
		// if (!stateReference) stateReference = State.GetInstance();
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_2 = State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_inline(/*hidden argument*/NULL);
		((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->set_stateReference_5(L_2);
	}

IL_0018:
	{
		// StartCoroutine(Countdown());
		RuntimeObject* L_3 = UITime_Countdown_m6A96B225942F81DCDAE8F8FA8D36C063A81D525B(__this, /*hidden argument*/NULL);
		MonoBehaviour_StartCoroutine_mBF8044CE06A35D76A69669ADD8977D05956616B7(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UITime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITime_Update_m22CF4C44A6A3D2FDB535758D881A40D656546F3D (UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator UITime::Countdown()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UITime_Countdown_m6A96B225942F81DCDAE8F8FA8D36C063A81D525B (UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UITime_Countdown_m6A96B225942F81DCDAE8F8FA8D36C063A81D525B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 * L_0 = (U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 *)il2cpp_codegen_object_new(U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96_il2cpp_TypeInfo_var);
		U3CCountdownU3Ed__6__ctor_m43A04F807BA7A5371FFD6443BF93CCF2A4E54E9B(L_0, 0, /*hidden argument*/NULL);
		U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UITime::SetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITime_SetText_m85CBF7FF62BACAE6C1563383F51484DBDC9B35F4 (UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UITime_SetText_m85CBF7FF62BACAE6C1563383F51484DBDC9B35F4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timerText.text = timer.ToString("0");
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_timerText_6();
		float* L_1 = __this->get_address_of_timer_7();
		String_t* L_2 = Single_ToString_m211B5E14B0C60667C56838D5C3788CFA58670DDE((float*)L_1, _stringLiteralB6589FC6AB0DC82CF12099D1C2D40AB994E8410C, /*hidden argument*/NULL);
		NullCheck(L_0);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UITime::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UITime__ctor_m2CEC9B3A8DF1A00D5B2921F606355BCBF4145B59 (UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * __this, const RuntimeMethod* method)
{
	{
		// private float timer = 10;
		__this->set_timer_7((10.0f));
		UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB(__this, /*hidden argument*/NULL);
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
// System.Void UITime_<Countdown>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6__ctor_m43A04F807BA7A5371FFD6443BF93CCF2A4E54E9B (U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UITime_<Countdown>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6_System_IDisposable_Dispose_mDCBF227BBC89C47FC2670E3975391CCF9A542C7B (U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UITime_<Countdown>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCountdownU3Ed__6_MoveNext_m34DAF6A25C40D90569EBFCDD6FA57B6B3F0675AA (U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountdownU3Ed__6_MoveNext_m34DAF6A25C40D90569EBFCDD6FA57B6B3F0675AA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_003f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_0058;
	}

IL_0020:
	{
		// SetText();
		UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * L_4 = V_1;
		NullCheck(L_4);
		UITime_SetText_m85CBF7FF62BACAE6C1563383F51484DBDC9B35F4(L_4, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 * L_5 = (WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8 *)il2cpp_codegen_object_new(WaitForSeconds_t3E9E78D3BB53F03F96C7F28BA9B9086CD1A5F4E8_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m8E4BA3E27AEFFE5B74A815F26FF8AAB99743F559(L_5, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_003f:
	{
		__this->set_U3CU3E1__state_0((-1));
		// timer -= 1;
		UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * L_6 = V_1;
		UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * L_7 = V_1;
		NullCheck(L_7);
		float L_8 = L_7->get_timer_7();
		NullCheck(L_6);
		L_6->set_timer_7(((float)il2cpp_codegen_subtract((float)L_8, (float)(1.0f))));
	}

IL_0058:
	{
		// while(timer > 0)
		UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * L_9 = V_1;
		NullCheck(L_9);
		float L_10 = L_9->get_timer_7();
		if ((((float)L_10) > ((float)(0.0f))))
		{
			goto IL_0020;
		}
	}
	{
		// timer = 10;
		UITime_t1B9F993C2B80CDEDBD989198C8E0B80B504AD96B * L_11 = V_1;
		NullCheck(L_11);
		L_11->set_timer_7((10.0f));
		// }
		return (bool)0;
	}
}
// System.Object UITime_<Countdown>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountdownU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m8361ECA2DD9D9977C63123FE62C82A4AE2CDC53D (U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UITime_<Countdown>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_mC130F6AE7DA876F8E7286870B9C3B49BC001D218 (U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_mC130F6AE7DA876F8E7286870B9C3B49BC001D218_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 * L_0 = (NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010 *)il2cpp_codegen_object_new(NotSupportedException_tE75B318D6590A02A5D9B29FD97409B1750FA0010_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_mA121DE1CAC8F25277DEB489DC7771209D91CAE33(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, U3CCountdownU3Ed__6_System_Collections_IEnumerator_Reset_mC130F6AE7DA876F8E7286870B9C3B49BC001D218_RuntimeMethod_var);
	}
}
// System.Object UITime_<Countdown>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CCountdownU3Ed__6_System_Collections_IEnumerator_get_Current_m936DC227588FB3C08CC1FC973AA662F9E1B7FC97 (U3CCountdownU3Ed__6_tF8BAA46B0EFA94BCFA8C2B319305A8EE65FE9B96 * __this, const RuntimeMethod* method)
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
// System.Void UIWaveInfo::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIWaveInfo_Awake_mAD478C2198E056B1388481E19A6E9C5F9496B2A5 (UIWaveInfo_t5CBBE22C27BBFAFE5FB22980EC39298E8C14EBF0 * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		UIBase_Awake_m7CEEC85BC0F6D2087E3BF16EE891EC0C1D407101(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIWaveInfo::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIWaveInfo_Start_m73AD66D611BA6B0FA97541F423DADB1DF769ED54 (UIWaveInfo_t5CBBE22C27BBFAFE5FB22980EC39298E8C14EBF0 * __this, const RuntimeMethod* method)
{
	{
		// base.Start();
		UIBase_Start_mF1D52ABC316B006F993586D6EE0B7BE17199891B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIWaveInfo::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIWaveInfo_Update_mB46978C5E2853367265BC281D547A730FF9F76CD (UIWaveInfo_t5CBBE22C27BBFAFE5FB22980EC39298E8C14EBF0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIWaveInfo_Update_mB46978C5E2853367265BC281D547A730FF9F76CD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Update();
		UIBase_Update_mE16593F37CA94F7D184BB0B4A72E12C073876FC2(__this, /*hidden argument*/NULL);
		// waveNumberText.text = $"Wave {gmInstance.wave}";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_0 = __this->get_waveNumberText_6();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_1 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_gmInstance_4();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_wave_4();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_3);
		String_t* L_5 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteralA031001BED8B7813F5084BDEF396E523AA274B46, L_4, /*hidden argument*/NULL);
		NullCheck(L_0);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_0, L_5, /*hidden argument*/NULL);
		// enemyAmountText.text = $"{gmInstance.enemiesLeftThisWave} Left";
		TextMeshProUGUI_tBA60B913AB6151F8563F7078AD67EB6458129438 * L_6 = __this->get_enemyAmountText_7();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_7 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_gmInstance_4();
		NullCheck(L_7);
		int32_t L_8 = L_7->get_enemiesLeftThisWave_5();
		int32_t L_9 = L_8;
		RuntimeObject * L_10 = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11 = String_Format_m0ACDD8B34764E4040AED0B3EEB753567E4576BFA(_stringLiteral28254A4DA5C76FF30ED3BCD236A4573ECB144E0D, L_10, /*hidden argument*/NULL);
		NullCheck(L_6);
		TMP_Text_set_text_m079B767F4E146B6F9150EC2208B5C2736207251A(L_6, L_11, /*hidden argument*/NULL);
		// if(gmInstance.totalEnemiesThisWave == 0)
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_12 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_gmInstance_4();
		NullCheck(L_12);
		int32_t L_13 = L_12->get_totalEnemiesThisWave_6();
		if (L_13)
		{
			goto IL_005e;
		}
	}
	{
		// return;
		return;
	}

IL_005e:
	{
		// enemySlider.value = ((float)gmInstance.enemiesLeftThisWave / (float)gmInstance.totalEnemiesThisWave);
		Slider_t0654A41304B5CE7074CA86F4E66CB681D0D52C09 * L_14 = __this->get_enemySlider_8();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_15 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_gmInstance_4();
		NullCheck(L_15);
		int32_t L_16 = L_15->get_enemiesLeftThisWave_5();
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_17 = ((UIBase_tFECC089313F18C7DE00A8588CFEC6144CB15A467 *)__this)->get_gmInstance_4();
		NullCheck(L_17);
		int32_t L_18 = L_17->get_totalEnemiesThisWave_6();
		NullCheck(L_14);
		VirtActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_14, ((float)((float)(((float)((float)L_16)))/(float)(((float)((float)L_18))))));
		// }
		return;
	}
}
// System.Void UIWaveInfo::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIWaveInfo__ctor_m30811AF52F5D9BA28FF5074BC2D2A2878B65ED01 (UIWaveInfo_t5CBBE22C27BBFAFE5FB22980EC39298E8C14EBF0 * __this, const RuntimeMethod* method)
{
	{
		UIBase__ctor_mC574F0F77BDC06252421D6E0E99EBB95CA04A7BB(__this, /*hidden argument*/NULL);
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
// System.Void Weapon::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Awake_m0513FE0E521BFC4BBDC162CD85821E1EFD3B7BCD (Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Weapon_Awake_m0513FE0E521BFC4BBDC162CD85821E1EFD3B7BCD_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gunshotSource = GetComponent<AudioSource>();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_0 = Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C_m04C8E98F2393C77979C9D8F6DE1D98343EF025E8_RuntimeMethod_var);
		__this->set_gunshotSource_9(L_0);
		// }
		return;
	}
}
// System.Void Weapon::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Update_m7DA8D41CDC329A2B7B4C3B31A2A67D8D3763BE9E (Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * __this, const RuntimeMethod* method)
{
	{
		// ray = new Ray(transform.position, transform.forward);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_0 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = Transform_get_position_mF54C3A064F7C8E24F1C56EE128728B2E4485E294(L_0, /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_2 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_2, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_4), L_1, L_3, /*hidden argument*/NULL);
		__this->set_ray_7(L_4);
		// }
		return;
	}
}
// System.Void Weapon::Shoot()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_Shoot_m9EDE314E294EE82D2A90D2EB541C30457F908650 (Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Weapon_Shoot_m9EDE314E294EE82D2A90D2EB541C30457F908650_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if(ammo <= 0)
		int32_t L_0 = __this->get_ammo_5();
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_000a;
		}
	}
	{
		// return;
		return;
	}

IL_000a:
	{
		// muzzleFlashParticle.Play();
		ParticleSystem_t45DA87A3E83E738DA3FDAA5A48A133F1A1247C3D * L_1 = __this->get_muzzleFlashParticle_8();
		NullCheck(L_1);
		ParticleSystem_Play_m5BC5E6B56FCF639CAD5DF41B51DC05A0B444212F(L_1, /*hidden argument*/NULL);
		// gunshotSource.PlayOneShot(gunshotSource.clip);
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_2 = __this->get_gunshotSource_9();
		AudioSource_t5196F862B4E60F404613361C90D87FBDD041E93C * L_3 = __this->get_gunshotSource_9();
		NullCheck(L_3);
		AudioClip_tCC3C35F579203CE2601243585AB3D6953C3BA051 * L_4 = AudioSource_get_clip_m773ECEF5566EA64C74E316D7EF1A63AA01604643(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		AudioSource_PlayOneShot_mFD68566752A61B9C54843650A5C6075DBBFC56CD(L_2, L_4, /*hidden argument*/NULL);
		// ammo--;
		int32_t L_5 = __this->get_ammo_5();
		__this->set_ammo_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)));
		// Physics.Raycast(ray, out hit);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_6 = __this->get_ray_7();
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_7 = __this->get_address_of_hit_10();
		Physics_Raycast_mCE618579F667A62D15CB74CEF76147136EB2D495(L_6, (RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_7, /*hidden argument*/NULL);
		// if(hit.transform == null)
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_8 = __this->get_address_of_hit_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_9 = RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_10 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_9, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		// return;
		return;
	}

IL_005f:
	{
		// if((damageable = hit.transform.GetComponent<IDamageable>()) != null){
		RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 * L_11 = __this->get_address_of_hit_10();
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_12 = RaycastHit_get_transform_m3C0BEE7439CA37F82FD5216143B92BF32F995279((RaycastHit_t19695F18F9265FE5425062BBA6A4D330480538C3 *)L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		RuntimeObject* L_13 = Component_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_mA9D82E44CC018CCA691758D999FF6E2B6BDA8068(L_12, /*hidden argument*/Component_GetComponent_TisIDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_mA9D82E44CC018CCA691758D999FF6E2B6BDA8068_RuntimeMethod_var);
		RuntimeObject* L_14 = L_13;
		V_0 = L_14;
		if (!L_14)
		{
			goto IL_00b3;
		}
	}
	{
		// damageable.TakeKnockBack((transform.rotation.eulerAngles + transform.forward) * knockbackModifier);
		RuntimeObject* L_15 = V_0;
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_16 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_17 = Transform_get_rotation_m3AB90A67403249AECCA5E02BC70FCE8C90FE9FB9(L_16, /*hidden argument*/NULL);
		V_1 = L_17;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_18 = Quaternion_get_eulerAngles_mF8ABA8EB77CD682017E92F0F457374E54BC943F9((Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&V_1), /*hidden argument*/NULL);
		Transform_tBB9E78A2766C3C83599A8F66EDE7D1FCAFC66EDA * L_19 = Component_get_transform_m00F05BD782F920C301A7EBA480F3B7A904C07EC9(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_20 = Transform_get_forward_m0BE1E88B86049ADA39391C3ACED2314A624BC67F(L_19, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_21 = Vector3_op_Addition_m929F9C17E5D11B94D50B4AFF1D730B70CB59B50E(L_18, L_20, /*hidden argument*/NULL);
		float L_22 = __this->get_knockbackModifier_6();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_23 = Vector3_op_Multiply_m1C5F07723615156ACF035D88A1280A9E8F35A04E(L_21, L_22, /*hidden argument*/NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  >::Invoke(1 /* System.Void IDamageable::TakeKnockBack(UnityEngine.Vector3) */, IDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_il2cpp_TypeInfo_var, L_15, L_23);
		// damageable.TakeDamage(damagePerShot);
		RuntimeObject* L_24 = V_0;
		int32_t L_25 = __this->get_damagePerShot_4();
		NullCheck(L_24);
		InterfaceActionInvoker1< int32_t >::Invoke(0 /* System.Void IDamageable::TakeDamage(System.Int32) */, IDamageable_tE1E811DB7C2A6DDF0CDD15945BE46A46E4CB11CD_il2cpp_TypeInfo_var, L_24, L_25);
	}

IL_00b3:
	{
		// }
		return;
	}
}
// System.Void Weapon::OnDrawGizmos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon_OnDrawGizmos_m09A178B30B45A3633AE68DBBA0E5DDE484F3C8C2 (Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * __this, const RuntimeMethod* method)
{
	{
		// Gizmos.DrawRay(ray);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_0 = __this->get_ray_7();
		Gizmos_DrawRay_m29E7E14150B9A13FD49138FD3B9BF062B0E2DEBF(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Weapon::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Weapon__ctor_m77DEF0E33330AD6C46C2283D8AD2F7C355389EF9 (Weapon_t48BBA717651DD6DFBEA2C0F35AB8A9DF972D94C9 * __this, const RuntimeMethod* method)
{
	{
		// public float knockbackModifier = 1;
		__this->set_knockbackModifier_6((1.0f));
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
// System.Void WeaponRifle::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponRifle_Awake_m4BC2AAC5D3A45BE1CFE52ECE0308A3FAEC5F7713 (WeaponRifle_t68B5D7472A8059680D858F6CDDBB3D36DA30D956 * __this, const RuntimeMethod* method)
{
	{
		// base.Awake();
		Weapon_Awake_m0513FE0E521BFC4BBDC162CD85821E1EFD3B7BCD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WeaponRifle::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponRifle_Update_m563B3A7825DF121AB2D54F20366AAB88E9092C05 (WeaponRifle_t68B5D7472A8059680D858F6CDDBB3D36DA30D956 * __this, const RuntimeMethod* method)
{
	{
		// base.Update();
		Weapon_Update_m7DA8D41CDC329A2B7B4C3B31A2A67D8D3763BE9E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WeaponRifle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WeaponRifle__ctor_m78E45FD624C6F47D911B061F61421B1E957E9C23 (WeaponRifle_t68B5D7472A8059680D858F6CDDBB3D36DA30D956 * __this, const RuntimeMethod* method)
{
	{
		Weapon__ctor_m77DEF0E33330AD6C46C2283D8AD2F7C355389EF9(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GameManager_GetInstance_mACB2BD5FD1A33020D524A8CA7907278738F34E23AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89 * L_0 = ((GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_StaticFields*)il2cpp_codegen_static_fields_for(GameManager_tAC830B937D5E37F47803FE8AB44CAB0762B77B89_il2cpp_TypeInfo_var))->get_instance_18();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scoring_GetInstance_mCC0FE18177A9D639288F54B821197B9F17C91C02AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * L_0 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_instance_7();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t State_GetGameState_m54A8B9BD9346B78AC4CFA3A980F02E384348B44B_inline (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// return gameState;
		int32_t L_0 = __this->get_gameState_5();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * UIManager_GetInstance_m2CEB5E722EE87CB720B1D2C8C5596D2B537A5A6C_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (UIManager_GetInstance_m2CEB5E722EE87CB720B1D2C8C5596D2B537A5A6CAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * L_0 = ((UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_StaticFields*)il2cpp_codegen_static_fields_for(UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C_il2cpp_TypeInfo_var))->get_instance_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * PoolManager_GetInstance_mE8BBF4EBB3F655D9EAAFF62EA621AD367D4233DC_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PoolManager_GetInstance_mE8BBF4EBB3F655D9EAAFF62EA621AD367D4233DCAssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04 * L_0 = ((PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_StaticFields*)il2cpp_codegen_static_fields_for(PoolManager_tF8E9B3BE47DB0134CCEA8C1629ABD78DA9CE2F04_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (State_GetInstance_m3051DFFBD591D4E186C22BB15C650B2AE35C24E4AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return instance;
		State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * L_0 = ((State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_StaticFields*)il2cpp_codegen_static_fields_for(State_tC5BA2DC909C73846EB01A3E0806E5D6347274619_il2cpp_TypeInfo_var))->get_instance_4();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void UIManager_CanPause_m109D06ED90BD689AB628DE1C3F0A62D463C212D4_inline (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, bool ___pause0, const RuntimeMethod* method)
{
	{
		// canPause = pause;
		bool L_0 = ___pause0;
		__this->set_canPause_12(L_0);
		// }
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t State_GetWaveState_m671090CC8F21B08AACE28C95F02BD54B652A9C61_inline (State_tC5BA2DC909C73846EB01A3E0806E5D6347274619 * __this, const RuntimeMethod* method)
{
	{
		// return waveState;
		int32_t L_0 = __this->get_waveState_6();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR bool UIManager_GetCanPause_m5E6B9A4CCB5350905D13A0FDC72D747FBD67AB9E_inline (UIManager_tA871F1BE896F9D7434A52E7413E3C9F11E6B323C * __this, const RuntimeMethod* method)
{
	{
		// return canPause;
		bool L_0 = __this->get_canPause_12();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Scoring_GetWavesSurvived_m50F14578BA88D194C3E3C2089F62C679617FB674_inline (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	{
		// return wavesSurvived;
		int32_t L_0 = __this->get_wavesSurvived_11();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Scoring_GetKills_mA254377BDA58EEDE91960BAE66882B48A3046344_inline (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	{
		// return kills;
		int32_t L_0 = __this->get_kills_10();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR int32_t Scoring_GetTotalMoney_m289384516363E56CFE7FC4F12D63C026B237DA95_inline (Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Scoring_GetTotalMoney_m289384516363E56CFE7FC4F12D63C026B237DA95AssemblyU2DCSharp_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return totalEarnedMoney;
		int32_t L_0 = ((Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_StaticFields*)il2cpp_codegen_static_fields_for(Scoring_tF35426801E72FB0A1D62AF8CF83E029E143EAE01_il2cpp_TypeInfo_var))->get_totalEarnedMoney_9();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m507C9149FF7F83AAC72C29091E745D557DA47D22_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mFDB8AD680C600072736579BBF5F38F7416396588_gshared_inline (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_mBA2AF20A35144E0C43CD721A22EAC9FCA15D6550(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A* L_2 = (ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_t3C9242B5C88A48B2A5BD9FDA6CD0024E792AF08A*)L_2, (int32_t)L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m0CE0B6919A09EFFBB1EBA5B5DFEF50E4F8A89CFA_gshared_inline (Queue_1_tCC0C12E9ABD1C1421DEDD8C737F1A87C67ACC8F0 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_3();
		return L_0;
	}
}
