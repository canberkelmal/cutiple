#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.EventSystems.RaycastResult>
struct Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule>
struct List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem>
struct List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.Transform[]
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioListener
struct AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35;
// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CollCube
struct CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E;
// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76;
// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// Credits
struct Credits_tBBC07C3828896827C56E49CF1E9818E15A428A99;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// EpicToonFX.ETFXButtonScript
struct ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4;
// EpicToonFX.ETFXFireProjectile
struct ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3;
// EpicToonFX.ETFXLightFade
struct ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79;
// EpicToonFX.ETFXLoopScript
struct ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B;
// EpicToonFX.ETFXMouseOrbit
struct ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0;
// EpicToonFX.ETFXPitchRandomizer
struct ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF;
// ETFXProjectileScript
struct ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B;
// EpicToonFX.ETFXRotation
struct ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71;
// ETFXSceneManager
struct ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E;
// EpicToonFX.ETFXTarget
struct ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// PEButtonScript
struct PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305;
// ParticleEffectsLibrary
struct ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57;
// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1;
// PlaayerMovement
struct PlaayerMovement_t3771366E125C6142F8CC2429CF2D34581CE6D825;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF;
// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// ScoreInc
struct ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SetHS
struct SetHS_t29CCACF953CB7309D37E527D1E57AD23569739DF;
// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F;
// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0;
// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F;
// UnityEngine.UI.ToggleGroup
struct ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UICanvasManager
struct UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// collector
struct collector_tEBF92C62743EEF3431C1272AAD3719963B853D32;
// fallowPlayer
struct fallowPlayer_t62D393B163E6F79B12E58BF2965314132C029248;
// getCoin
struct getCoin_t4353487B8BE0BCC8B5ADDC8614F50A14714F4CF3;
// overCollider
struct overCollider_t32A0197272EB1713809E300FBAECE0EDE98A20DE;
// setMovement
struct setMovement_t8A6DECBF9518276CC7B39BDD9654C4A7F3BB38DE;
// setTurning
struct setTurning_t7CB12F9759A5C1366418BB04240A7C9E7D5B87FE;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// AudioManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367;
// AudioManager/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917;
// AudioManager/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// EpicToonFX.ETFXLoopScript/<EffectLoop>d__6
struct U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92;
// EpicToonFX.ETFXTarget/<Respawn>d__7
struct U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3;
// GameManager/<justScoreIn>d__11
struct U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC;
// GameManager/<scoreIn>d__10
struct U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// ScoreInc/<scoreCount>d__3
struct U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905;
// UnityEngine.UI.Scrollbar/ScrollEvent
struct ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555;
// UnityEngine.UI.Toggle/ToggleEvent
struct ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02;

IL2CPP_EXTERN_C RuntimeClass* AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral01228D97468F93F4C08D34049F3BE2138BFA15D8;
IL2CPP_EXTERN_C String_t* _stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083;
IL2CPP_EXTERN_C String_t* _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA;
IL2CPP_EXTERN_C String_t* _stringLiteral09AE944F2EF6BC951D18CDE8720230EE96ADB38D;
IL2CPP_EXTERN_C String_t* _stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A;
IL2CPP_EXTERN_C String_t* _stringLiteral0C9FF3B3141F5DF7D803B4AA8CC203B64A33D903;
IL2CPP_EXTERN_C String_t* _stringLiteral16B50E8F5851EEBF64831B0EAFD15BD9FCC57686;
IL2CPP_EXTERN_C String_t* _stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0;
IL2CPP_EXTERN_C String_t* _stringLiteral1A7FFC98C7BE33F9BD92522989C848CB308F744A;
IL2CPP_EXTERN_C String_t* _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9;
IL2CPP_EXTERN_C String_t* _stringLiteral1AD38741C1B1C0E0AF2D15477229F01D1C220477;
IL2CPP_EXTERN_C String_t* _stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC;
IL2CPP_EXTERN_C String_t* _stringLiteral1EFF1CA3F95D2B3E9378D139FADBCDD0308F8162;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2940DE8D75B2E8B88DD329CDDC03D118CF148C79;
IL2CPP_EXTERN_C String_t* _stringLiteral2A5F1D79B12F1C52B9B1E470CFFAFFA221390695;
IL2CPP_EXTERN_C String_t* _stringLiteral2E9A7309AEEF5B192FD019E712D2973C5AF4E319;
IL2CPP_EXTERN_C String_t* _stringLiteral2F9C7E885FC8CB8756A11F639091D57668960C69;
IL2CPP_EXTERN_C String_t* _stringLiteral32C7705BFA8480B832E938984F70BC2052DF961B;
IL2CPP_EXTERN_C String_t* _stringLiteral342FE8A631B1691BFAFBC5238E49C17B7A0188F8;
IL2CPP_EXTERN_C String_t* _stringLiteral3567C3794ABE76DD48E35F1DF7FC710B55520C9E;
IL2CPP_EXTERN_C String_t* _stringLiteral35976FFCA294560D7E4C40F81B41248FED8AD19E;
IL2CPP_EXTERN_C String_t* _stringLiteral37D044F25CAB14BA122FD122908B282CBE7BD4F0;
IL2CPP_EXTERN_C String_t* _stringLiteral3FA3643AE00785D4AAC8D94F75DBEC31C591CD8C;
IL2CPP_EXTERN_C String_t* _stringLiteral40F46EE1E9B8B2D497BB832A96B0800F6A5E4082;
IL2CPP_EXTERN_C String_t* _stringLiteral44D14CCF197D66A68CD4697D1500796E119D99CD;
IL2CPP_EXTERN_C String_t* _stringLiteral45C5C5B5000E9795C907C03B801CCFF840649D4E;
IL2CPP_EXTERN_C String_t* _stringLiteral45F58255B95DE1B8D542021758DDAB3E1F464AE1;
IL2CPP_EXTERN_C String_t* _stringLiteral4638A17716758734E0923FD7AD361AF48ABC24F4;
IL2CPP_EXTERN_C String_t* _stringLiteral46D9C7FA571DE65777FF674D728A6316C6A26A7C;
IL2CPP_EXTERN_C String_t* _stringLiteral4907D619835F2CCA72462CBD2E9117F3D50AA239;
IL2CPP_EXTERN_C String_t* _stringLiteral493A81CF72EC64D336BBCBDF0854026AEF9F763F;
IL2CPP_EXTERN_C String_t* _stringLiteral4C359D59CA0AE83DF650E859BA9A29E6A13EB1D9;
IL2CPP_EXTERN_C String_t* _stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185;
IL2CPP_EXTERN_C String_t* _stringLiteral4F6D9789D9A0D7483B15CB01BD0BEA1419B65721;
IL2CPP_EXTERN_C String_t* _stringLiteral5046BA9E70AC20B6F9AC56F496268F4CA54CB71D;
IL2CPP_EXTERN_C String_t* _stringLiteral5183CC718F042548CB17830F335CA1300798F98F;
IL2CPP_EXTERN_C String_t* _stringLiteral542C20BA146CC0FFF0BACCD64CCB27638EE2C535;
IL2CPP_EXTERN_C String_t* _stringLiteral551232956AEF66634A14B2FA7D5E43036EBAE5AE;
IL2CPP_EXTERN_C String_t* _stringLiteral55DCD3C41D65D7C0C6131E9F887E925D3D93D999;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795;
IL2CPP_EXTERN_C String_t* _stringLiteral65E4C9869FFDA37EE1A18A807CF2E45B7F66CDFC;
IL2CPP_EXTERN_C String_t* _stringLiteral688401970468562182295CAB9BFDDF1595831564;
IL2CPP_EXTERN_C String_t* _stringLiteral6933499863734D9DA2A66251C6C993DA6A92CCB7;
IL2CPP_EXTERN_C String_t* _stringLiteral6FA6337DF8B49626C6F4D96CF07FF45586BDA214;
IL2CPP_EXTERN_C String_t* _stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B;
IL2CPP_EXTERN_C String_t* _stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870;
IL2CPP_EXTERN_C String_t* _stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926;
IL2CPP_EXTERN_C String_t* _stringLiteral7DF7A265B2E2742BE4BF8DF078EB839FD342B9E9;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE;
IL2CPP_EXTERN_C String_t* _stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7;
IL2CPP_EXTERN_C String_t* _stringLiteral8DDB709CD0A40DF83139466BDB36786AAE75EE8F;
IL2CPP_EXTERN_C String_t* _stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897;
IL2CPP_EXTERN_C String_t* _stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B;
IL2CPP_EXTERN_C String_t* _stringLiteral938FE4E47247B784D5CF095C44F186C46A71820D;
IL2CPP_EXTERN_C String_t* _stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2;
IL2CPP_EXTERN_C String_t* _stringLiteral9D108E69F651AE4F1653BCDCAA8D2C79B865B23A;
IL2CPP_EXTERN_C String_t* _stringLiteralA48328E12C38ADB209E5965BAF23D6A254F32EAA;
IL2CPP_EXTERN_C String_t* _stringLiteralA76F4AAE4B7821A200351EDC2EFB8D95A7ECBB79;
IL2CPP_EXTERN_C String_t* _stringLiteralA8CB7C6FADD83444661425569583A6C959948E59;
IL2CPP_EXTERN_C String_t* _stringLiteralABD884F7688123CE5EAB301152D58085806E28FD;
IL2CPP_EXTERN_C String_t* _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D;
IL2CPP_EXTERN_C String_t* _stringLiteralB4B98DFD193C6BB1F1EE1FC7E48E5D716980E761;
IL2CPP_EXTERN_C String_t* _stringLiteralBAAA90AC733B7E7E42D2C8D1D639DDE68DFECD7F;
IL2CPP_EXTERN_C String_t* _stringLiteralBE95278C133C16A058F9D4C519E94B186E62CAB1;
IL2CPP_EXTERN_C String_t* _stringLiteralBEA1C1FC4991BEA4C5C3473788758C174B98177A;
IL2CPP_EXTERN_C String_t* _stringLiteralBF872ADFA6D009455788B01E0039910ABAA9AEE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC36E2206A2F7EED468C9DBF8C86A794A7BEF655A;
IL2CPP_EXTERN_C String_t* _stringLiteralCE8DBC7FFF52925F8AED0C5F50AEF43ABA6C6C36;
IL2CPP_EXTERN_C String_t* _stringLiteralD034A94E67370F92465B64938096D26AAEB067EF;
IL2CPP_EXTERN_C String_t* _stringLiteralD1679F19DA567DC41D2778CF07FA2C003E100369;
IL2CPP_EXTERN_C String_t* _stringLiteralD1A5DD4236D1A92FAEAD17BCF8C6BD3C5BFB9D05;
IL2CPP_EXTERN_C String_t* _stringLiteralD1F4C7874D8C5796DE4C135A07BAAC06BCFB2B01;
IL2CPP_EXTERN_C String_t* _stringLiteralD8A460B57C708AAE5B3FE032970AB4EB08FDAB9B;
IL2CPP_EXTERN_C String_t* _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDE5BF181784DF133F54423263E2A279227E7C299;
IL2CPP_EXTERN_C String_t* _stringLiteralDF246C2C30DD050AD1D57A21AAC461FA49F6D42E;
IL2CPP_EXTERN_C String_t* _stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B;
IL2CPP_EXTERN_C String_t* _stringLiteralE5B46BB36C025A58C6B5C47AF145C69CC35BB955;
IL2CPP_EXTERN_C String_t* _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640;
IL2CPP_EXTERN_C String_t* _stringLiteralE69D94930F093E3C8456CDD8FE7C6901E4EE9F25;
IL2CPP_EXTERN_C String_t* _stringLiteralE720B9F5A19BBE91E81F3577B920642AEA974C49;
IL2CPP_EXTERN_C String_t* _stringLiteralEF0887D90DE9B75255B1C019432AC465E5794CEB;
IL2CPP_EXTERN_C String_t* _stringLiteralF1139BB3AE79C001CF6F5F90BCA36DDCE803947C;
IL2CPP_EXTERN_C String_t* _stringLiteralF2A170901896DA9E535CB9AFD05D068A6DC3ED07;
IL2CPP_EXTERN_C String_t* _stringLiteralF398C620EA88F4070BE8AC9916E05DE1E9EAF174;
IL2CPP_EXTERN_C String_t* _stringLiteralF6D97D00609AFACA4B87C40A156E004B7493ECD0;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C String_t* _stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E_mF6DBD7C4413996E0BC96EEE8842CD0CC2046C092_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass5_0_U3CPlayU3Eb__0_m42997281B26623BCB07B4F72655CD9223410940D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CStopU3Eb__0_m919DC8BAC637BF7E043398006EC6FB56362B3D23_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass7_0_U3CsetVolumeU3Eb__0_mF5ECD1405171E881BE942DFCBC65EB866439D800_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CjustScoreInU3Ed__11_System_Collections_IEnumerator_Reset_mD4720C592A4D9161155EB202B85F1C366517F9A8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CscoreCountU3Ed__3_System_Collections_IEnumerator_Reset_mF699424FFD466752C21C956CE8CF17F7BB81B0EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CscoreInU3Ed__10_System_Collections_IEnumerator_Reset_m22C6A36C1EF51D482407715FC26255A45FD0A4BD_RuntimeMethod_var;
struct ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// Sound
struct Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0  : public RuntimeObject
{
	// System.String Sound::name
	String_t* ___name_0;
	// UnityEngine.AudioClip Sound::clip
	AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip_1;
	// System.Single Sound::volume
	float ___volume_2;
	// System.Single Sound::pitch
	float ___pitch_3;
	// System.Boolean Sound::loop
	bool ___loop_4;
	// UnityEngine.AudioSource Sound::source
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___source_5;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// AudioManager/<>c__DisplayClass5_0
struct U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass5_0::name
	String_t* ___name_0;
};

// AudioManager/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass6_0::name
	String_t* ___name_0;
};

// AudioManager/<>c__DisplayClass7_0
struct U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2  : public RuntimeObject
{
	// System.String AudioManager/<>c__DisplayClass7_0::name
	String_t* ___name_0;
};

// EpicToonFX.ETFXLoopScript/<EffectLoop>d__6
struct U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXLoopScript EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<>4__this
	ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* ___U3CU3E4__this_2;
	// UnityEngine.GameObject EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::<effectPlayer>5__2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CeffectPlayerU3E5__2_3;
};

// EpicToonFX.ETFXTarget/<Respawn>d__7
struct U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3  : public RuntimeObject
{
	// System.Int32 EpicToonFX.ETFXTarget/<Respawn>d__7::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// EpicToonFX.ETFXTarget EpicToonFX.ETFXTarget/<Respawn>d__7::<>4__this
	ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* ___U3CU3E4__this_2;
};

// GameManager/<justScoreIn>d__11
struct U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC  : public RuntimeObject
{
	// System.Int32 GameManager/<justScoreIn>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<justScoreIn>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Text GameManager/<justScoreIn>d__11::a
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___a_2;
	// GameManager GameManager/<justScoreIn>d__11::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_3;
	// System.Int32 GameManager/<justScoreIn>d__11::<i>5__2
	int32_t ___U3CiU3E5__2_4;
};

// GameManager/<scoreIn>d__10
struct U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124  : public RuntimeObject
{
	// System.Int32 GameManager/<scoreIn>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameManager/<scoreIn>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// UnityEngine.UI.Text GameManager/<scoreIn>d__10::a
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___a_2;
	// GameManager GameManager/<scoreIn>d__10::<>4__this
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___U3CU3E4__this_3;
	// System.Int32 GameManager/<scoreIn>d__10::<i>5__2
	int32_t ___U3CiU3E5__2_4;
};

// ScoreInc/<scoreCount>d__3
struct U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905  : public RuntimeObject
{
	// System.Int32 ScoreInc/<scoreCount>d__3::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ScoreInc/<scoreCount>d__3::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// ScoreInc ScoreInc/<scoreCount>d__3::<>4__this
	ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* ___U3CU3E4__this_2;
	// System.Int32 ScoreInc/<scoreCount>d__3::<i>5__2
	int32_t ___U3CiU3E5__2_3;
	// System.Int32 ScoreInc/<scoreCount>d__3::<j>5__3
	int32_t ___U3CjU3E5__3_4;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
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
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 
{
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1__padding[1];
	};
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// UnityEngine.SceneManagement.Scene
struct Scene_tA1DC762B79745EB5140F054C884855B922318356 
{
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::activeEventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::sendEvents
	bool ___sendEvents_1;
	// System.Boolean UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig::createPanelGameObjectsOnStart
	bool ___createPanelGameObjectsOnStart_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_pinvoke
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig
struct UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182_marshaled_com
{
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___activeEventSystem_0;
	int32_t ___sendEvents_1;
	int32_t ___createPanelGameObjectsOnStart_2;
};

// UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0  : public RuntimeObject
{
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	// UnityEngine.Component UnityEngine.Collision::m_Body
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t3570603E8D0685B71B3D8BA07031674B00C5E411* ___m_LegacyContacts_6;
};
// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_pinvoke
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0_marshaled_com
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Impulse_0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_RelativeVelocity_1;
	Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___m_Body_2;
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_ReusedContacts_5;
	ContactPoint_t241857959C0D517C21F541BB04B63FA6C1EAB3F9* ___m_LegacyContacts_6;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
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
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
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
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 
{
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	// System.Single UnityEngine.EventSystems.RaycastResult::distance
	float ___distance_2;
	// System.Single UnityEngine.EventSystems.RaycastResult::index
	float ___index_3;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::depth
	int32_t ___depth_4;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingLayer
	int32_t ___sortingLayer_5;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::sortingOrder
	int32_t ___sortingOrder_6;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_pinvoke
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023_marshaled_com
{
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_GameObject_0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition_7;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldNormal_8;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPosition_9;
	int32_t ___displayIndex_10;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB  : public BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F
{
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerEnter>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerEnterU3Ek__BackingField_2;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::m_PointerPress
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PointerPress_3;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<lastPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3ClastPressU3Ek__BackingField_4;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<rawPointerPress>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CrawPointerPressU3Ek__BackingField_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerDrag>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerDragU3Ek__BackingField_6;
	// UnityEngine.GameObject UnityEngine.EventSystems.PointerEventData::<pointerClick>k__BackingField
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___U3CpointerClickU3Ek__BackingField_7;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerCurrentRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerCurrentRaycastU3Ek__BackingField_8;
	// UnityEngine.EventSystems.RaycastResult UnityEngine.EventSystems.PointerEventData::<pointerPressRaycast>k__BackingField
	RaycastResult_tEC6A7B7CABA99C386F054F01E498AEC426CF8023 ___U3CpointerPressRaycastU3Ek__BackingField_9;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> UnityEngine.EventSystems.PointerEventData::hovered
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___hovered_10;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<eligibleForClick>k__BackingField
	bool ___U3CeligibleForClickU3Ek__BackingField_11;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<pointerId>k__BackingField
	int32_t ___U3CpointerIdU3Ek__BackingField_12;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<position>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpositionU3Ek__BackingField_13;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<delta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CdeltaU3Ek__BackingField_14;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<pressPosition>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CpressPositionU3Ek__BackingField_15;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldPosition>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldPositionU3Ek__BackingField_16;
	// UnityEngine.Vector3 UnityEngine.EventSystems.PointerEventData::<worldNormal>k__BackingField
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___U3CworldNormalU3Ek__BackingField_17;
	// System.Single UnityEngine.EventSystems.PointerEventData::<clickTime>k__BackingField
	float ___U3CclickTimeU3Ek__BackingField_18;
	// System.Int32 UnityEngine.EventSystems.PointerEventData::<clickCount>k__BackingField
	int32_t ___U3CclickCountU3Ek__BackingField_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<scrollDelta>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CscrollDeltaU3Ek__BackingField_20;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<useDragThreshold>k__BackingField
	bool ___U3CuseDragThresholdU3Ek__BackingField_21;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<dragging>k__BackingField
	bool ___U3CdraggingU3Ek__BackingField_22;
	// UnityEngine.EventSystems.PointerEventData/InputButton UnityEngine.EventSystems.PointerEventData::<button>k__BackingField
	int32_t ___U3CbuttonU3Ek__BackingField_23;
	// System.Single UnityEngine.EventSystems.PointerEventData::<pressure>k__BackingField
	float ___U3CpressureU3Ek__BackingField_24;
	// System.Single UnityEngine.EventSystems.PointerEventData::<tangentialPressure>k__BackingField
	float ___U3CtangentialPressureU3Ek__BackingField_25;
	// System.Single UnityEngine.EventSystems.PointerEventData::<altitudeAngle>k__BackingField
	float ___U3CaltitudeAngleU3Ek__BackingField_26;
	// System.Single UnityEngine.EventSystems.PointerEventData::<azimuthAngle>k__BackingField
	float ___U3CazimuthAngleU3Ek__BackingField_27;
	// System.Single UnityEngine.EventSystems.PointerEventData::<twist>k__BackingField
	float ___U3CtwistU3Ek__BackingField_28;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radius>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusU3Ek__BackingField_29;
	// UnityEngine.Vector2 UnityEngine.EventSystems.PointerEventData::<radiusVariance>k__BackingField
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___U3CradiusVarianceU3Ek__BackingField_30;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<fullyExited>k__BackingField
	bool ___U3CfullyExitedU3Ek__BackingField_31;
	// System.Boolean UnityEngine.EventSystems.PointerEventData::<reentered>k__BackingField
	bool ___U3CreenteredU3Ek__BackingField_32;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Predicate`1<Sound>
struct Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Collider
struct Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.ParticleSystem
struct ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Renderer
struct Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Rigidbody
struct Rigidbody_t268697F5A994213ED97393309870968BC1C7393C  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.BoxCollider
struct BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.SphereCollider
struct SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275  : public Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76
{
};

// AudioManager
struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.AudioListener AudioManager::audioListener
	AudioListener_t1D629CE9BC079C8ECDE8F822616E8A8E319EAE35* ___audioListener_4;
	// Sound[] AudioManager::sounds
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___sounds_5;
};

struct AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields
{
	// AudioManager AudioManager::instance
	AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* ___instance_6;
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CollCube
struct CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GameManager CollCube::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_4;
	// System.Boolean CollCube::collEd
	bool ___collEd_5;
	// System.Int32 CollCube::index
	int32_t ___index_6;
	// collector CollCube::collector
	collector_tEBF92C62743EEF3431C1272AAD3719963B853D32* ___collector_7;
};

// Credits
struct Credits_tBBC07C3828896827C56E49CF1E9818E15A428A99  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject Credits::HS
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HS_4;
	// UnityEngine.GameObject Credits::NEW
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___NEW_5;
	// UnityEngine.UI.Text Credits::title
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___title_6;
};

// EpicToonFX.ETFXButtonScript
struct ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXButtonScript::Button
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Button_4;
	// UnityEngine.UI.Text EpicToonFX.ETFXButtonScript::MyButtonText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___MyButtonText_5;
	// System.String EpicToonFX.ETFXButtonScript::projectileParticleName
	String_t* ___projectileParticleName_6;
	// EpicToonFX.ETFXFireProjectile EpicToonFX.ETFXButtonScript::effectScript
	ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* ___effectScript_7;
	// ETFXProjectileScript EpicToonFX.ETFXButtonScript::projectileScript
	ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* ___projectileScript_8;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsX
	float ___buttonsX_9;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsY
	float ___buttonsY_10;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsSizeX
	float ___buttonsSizeX_11;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsSizeY
	float ___buttonsSizeY_12;
	// System.Single EpicToonFX.ETFXButtonScript::buttonsDistance
	float ___buttonsDistance_13;
};

// EpicToonFX.ETFXFireProjectile
struct ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject[] EpicToonFX.ETFXFireProjectile::projectiles
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___projectiles_4;
	// UnityEngine.Transform EpicToonFX.ETFXFireProjectile::spawnPosition
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___spawnPosition_5;
	// System.Int32 EpicToonFX.ETFXFireProjectile::currentProjectile
	int32_t ___currentProjectile_6;
	// System.Single EpicToonFX.ETFXFireProjectile::speed
	float ___speed_7;
	// EpicToonFX.ETFXButtonScript EpicToonFX.ETFXFireProjectile::selectedProjectileButton
	ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* ___selectedProjectileButton_8;
	// UnityEngine.RaycastHit EpicToonFX.ETFXFireProjectile::hit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___hit_9;
};

// EpicToonFX.ETFXLightFade
struct ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EpicToonFX.ETFXLightFade::life
	float ___life_4;
	// System.Boolean EpicToonFX.ETFXLightFade::killAfterLife
	bool ___killAfterLife_5;
	// UnityEngine.Light EpicToonFX.ETFXLightFade::li
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___li_6;
	// System.Single EpicToonFX.ETFXLightFade::initIntensity
	float ___initIntensity_7;
};

// EpicToonFX.ETFXLoopScript
struct ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXLoopScript::chosenEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___chosenEffect_4;
	// System.Single EpicToonFX.ETFXLoopScript::loopTimeLimit
	float ___loopTimeLimit_5;
	// System.Boolean EpicToonFX.ETFXLoopScript::spawnWithoutLight
	bool ___spawnWithoutLight_6;
	// System.Boolean EpicToonFX.ETFXLoopScript::spawnWithoutSound
	bool ___spawnWithoutSound_7;
};

// EpicToonFX.ETFXMouseOrbit
struct ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform EpicToonFX.ETFXMouseOrbit::target
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___target_4;
	// System.Single EpicToonFX.ETFXMouseOrbit::distance
	float ___distance_5;
	// System.Single EpicToonFX.ETFXMouseOrbit::xSpeed
	float ___xSpeed_6;
	// System.Single EpicToonFX.ETFXMouseOrbit::ySpeed
	float ___ySpeed_7;
	// System.Single EpicToonFX.ETFXMouseOrbit::yMinLimit
	float ___yMinLimit_8;
	// System.Single EpicToonFX.ETFXMouseOrbit::yMaxLimit
	float ___yMaxLimit_9;
	// System.Single EpicToonFX.ETFXMouseOrbit::distanceMin
	float ___distanceMin_10;
	// System.Single EpicToonFX.ETFXMouseOrbit::distanceMax
	float ___distanceMax_11;
	// System.Single EpicToonFX.ETFXMouseOrbit::smoothTime
	float ___smoothTime_12;
	// System.Single EpicToonFX.ETFXMouseOrbit::rotationYAxis
	float ___rotationYAxis_13;
	// System.Single EpicToonFX.ETFXMouseOrbit::rotationXAxis
	float ___rotationXAxis_14;
	// System.Single EpicToonFX.ETFXMouseOrbit::velocityX
	float ___velocityX_15;
	// System.Single EpicToonFX.ETFXMouseOrbit::velocityY
	float ___velocityY_16;
};

// EpicToonFX.ETFXPitchRandomizer
struct ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single EpicToonFX.ETFXPitchRandomizer::randomPercent
	float ___randomPercent_4;
};

// ETFXProjectileScript
struct ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject ETFXProjectileScript::impactParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___impactParticle_4;
	// UnityEngine.GameObject ETFXProjectileScript::projectileParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___projectileParticle_5;
	// UnityEngine.GameObject ETFXProjectileScript::muzzleParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___muzzleParticle_6;
	// System.Single ETFXProjectileScript::colliderRadius
	float ___colliderRadius_7;
	// System.Single ETFXProjectileScript::collideOffset
	float ___collideOffset_8;
};

// EpicToonFX.ETFXRotation
struct ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 EpicToonFX.ETFXRotation::rotateVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rotateVector_4;
	// EpicToonFX.ETFXRotation/spaceEnum EpicToonFX.ETFXRotation::rotateSpace
	int32_t ___rotateSpace_5;
};

// ETFXSceneManager
struct ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean ETFXSceneManager::GUIHide
	bool ___GUIHide_4;
	// System.Boolean ETFXSceneManager::GUIHide2
	bool ___GUIHide2_5;
	// System.Boolean ETFXSceneManager::GUIHide3
	bool ___GUIHide3_6;
	// System.Boolean ETFXSceneManager::GUIHide4
	bool ___GUIHide4_7;
};

// EpicToonFX.ETFXTarget
struct ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject EpicToonFX.ETFXTarget::hitParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___hitParticle_4;
	// UnityEngine.GameObject EpicToonFX.ETFXTarget::respawnParticle
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___respawnParticle_5;
	// UnityEngine.Renderer EpicToonFX.ETFXTarget::targetRenderer
	Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* ___targetRenderer_6;
	// UnityEngine.Collider EpicToonFX.ETFXTarget::targetCollider
	Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___targetCollider_7;
};

// GameManager
struct GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text GameManager::multier
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___multier_4;
	// UnityEngine.UI.Text GameManager::score
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___score_5;
	// UnityEngine.Transform GameManager::CollectorTrans
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___CollectorTrans_6;
	// System.Int32 GameManager::multierValue
	int32_t ___multierValue_7;
	// System.Single GameManager::animationDuration
	float ___animationDuration_8;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text Menu::fwText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___fwText_4;
	// UnityEngine.UI.Text Menu::HrText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___HrText_5;
	// UnityEngine.UI.Text Menu::mouseText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___mouseText_6;
	// UnityEngine.UI.Text Menu::kbText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___kbText_7;
	// UnityEngine.GameObject Menu::fwSlider
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___fwSlider_8;
	// UnityEngine.GameObject Menu::HrSlider
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HrSlider_9;
	// UnityEngine.UI.Toggle Menu::master
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___master_10;
	// UnityEngine.UI.Toggle Menu::music
	Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* ___music_11;
	// UnityEngine.UI.Scrollbar Menu::remoteScroll
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___remoteScroll_12;
};

// PEButtonScript
struct PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Button PEButtonScript::myButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___myButton_4;
	// ButtonTypes PEButtonScript::ButtonType
	int32_t ___ButtonType_5;
};

// ParticleEffectsLibrary
struct ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Int32 ParticleEffectsLibrary::TotalEffects
	int32_t ___TotalEffects_5;
	// System.Int32 ParticleEffectsLibrary::CurrentParticleEffectIndex
	int32_t ___CurrentParticleEffectIndex_6;
	// System.Int32 ParticleEffectsLibrary::CurrentParticleEffectNum
	int32_t ___CurrentParticleEffectNum_7;
	// UnityEngine.Vector3[] ParticleEffectsLibrary::ParticleEffectSpawnOffsets
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___ParticleEffectSpawnOffsets_8;
	// System.Single[] ParticleEffectsLibrary::ParticleEffectLifetimes
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___ParticleEffectLifetimes_9;
	// UnityEngine.GameObject[] ParticleEffectsLibrary::ParticleEffectPrefabs
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___ParticleEffectPrefabs_10;
	// System.String ParticleEffectsLibrary::effectNameString
	String_t* ___effectNameString_11;
	// System.Collections.Generic.List`1<UnityEngine.Transform> ParticleEffectsLibrary::currentActivePEList
	List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* ___currentActivePEList_12;
	// UnityEngine.Vector3 ParticleEffectsLibrary::spawnPosition
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___spawnPosition_13;
};

struct ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields
{
	// ParticleEffectsLibrary ParticleEffectsLibrary::GlobalAccess
	ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* ___GlobalAccess_4;
};

// PlaayerMovement
struct PlaayerMovement_t3771366E125C6142F8CC2429CF2D34581CE6D825  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean PlaayerMovement::TestMode
	bool ___TestMode_4;
	// System.Single PlaayerMovement::forwardV
	float ___forwardV_5;
	// System.Single PlaayerMovement::horizV
	float ___horizV_6;
	// System.Single PlaayerMovement::sens
	float ___sens_7;
	// UnityEngine.Vector2 PlaayerMovement::turn
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___turn_8;
	// System.Single PlaayerMovement::rotationX
	float ___rotationX_9;
	// System.Single PlaayerMovement::sensitivityX
	float ___sensitivityX_10;
};

// ScoreInc
struct ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text ScoreInc::currentScore
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___currentScore_4;
	// System.Int32 ScoreInc::score
	int32_t ___score_5;
};

// SetHS
struct SetHS_t29CCACF953CB7309D37E527D1E57AD23569739DF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SetHS::HS
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___HS_4;
	// UnityEngine.GameObject SetHS::NEW
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___NEW_5;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UICanvasManager
struct UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean UICanvasManager::MouseOverButton
	bool ___MouseOverButton_5;
	// UnityEngine.UI.Text UICanvasManager::PENameText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___PENameText_6;
	// UnityEngine.UI.Text UICanvasManager::ToolTipText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ToolTipText_7;
	// UnityEngine.RaycastHit UICanvasManager::rayHit
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___rayHit_8;
};

struct UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields
{
	// UICanvasManager UICanvasManager::GlobalAccess
	UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* ___GlobalAccess_4;
};

// collector
struct collector_tEBF92C62743EEF3431C1272AAD3719963B853D32  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject collector::mainCube
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___mainCube_4;
	// UnityEngine.GameObject collector::pickupEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pickupEffect_5;
	// GameManager collector::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_6;
	// System.Int32 collector::height
	int32_t ___height_7;
	// UnityEngine.Vector3 collector::targetAngle
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetAngle_8;
};

// fallowPlayer
struct fallowPlayer_t62D393B163E6F79B12E58BF2965314132C029248  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Transform fallowPlayer::Player
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___Player_4;
	// System.Single fallowPlayer::smoothSpeed
	float ___smoothSpeed_5;
	// UnityEngine.Vector3 fallowPlayer::offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___offset_6;
};

// getCoin
struct getCoin_t4353487B8BE0BCC8B5ADDC8614F50A14714F4CF3  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject getCoin::pickupEffect
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pickupEffect_4;
	// GameManager getCoin::gameManager
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* ___gameManager_5;
	// System.Boolean getCoin::collEd
	bool ___collEd_6;
};

// overCollider
struct overCollider_t32A0197272EB1713809E300FBAECE0EDE98A20DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// setMovement
struct setMovement_t8A6DECBF9518276CC7B39BDD9654C4A7F3BB38DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single setMovement::speed
	float ___speed_4;
	// System.Int32 setMovement::direction
	int32_t ___direction_5;
};

// setTurning
struct setTurning_t7CB12F9759A5C1366418BB04240A7C9E7D5B87FE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Single setTurning::speed
	float ___speed_4;
	// UnityEngine.Vector3 setTurning::targetAngle
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___targetAngle_5;
};

// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.BaseInputModule> UnityEngine.EventSystems.EventSystem::m_SystemInputModules
	List_1_tA5BDE435C735A082941CD33D212F97F4AE9FA55F* ___m_SystemInputModules_4;
	// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.EventSystem::m_CurrentInputModule
	BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1* ___m_CurrentInputModule_5;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_FirstSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_FirstSelected_7;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_sendNavigationEvents
	bool ___m_sendNavigationEvents_8;
	// System.Int32 UnityEngine.EventSystems.EventSystem::m_DragThreshold
	int32_t ___m_DragThreshold_9;
	// UnityEngine.GameObject UnityEngine.EventSystems.EventSystem::m_CurrentSelected
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentSelected_10;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_HasFocus
	bool ___m_HasFocus_11;
	// System.Boolean UnityEngine.EventSystems.EventSystem::m_SelectionGuard
	bool ___m_SelectionGuard_12;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.EventSystem::m_DummyData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_DummyData_13;
};

struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventSystem> UnityEngine.EventSystems.EventSystem::m_EventSystems
	List_1_tF2FE88545EFEC788CAAE6C74EC2F78E937FCCAC3* ___m_EventSystems_6;
	// System.Comparison`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.EventSystem::s_RaycastComparer
	Comparison_1_t9FCAC8C8CE160A96C5AAD2DE1D353DCE8A2FEEFC* ___s_RaycastComparer_14;
	// UnityEngine.EventSystems.EventSystem/UIToolkitOverrideConfig UnityEngine.EventSystems.EventSystem::s_UIToolkitOverride
	UIToolkitOverrideConfig_t4E6B4528E38BCA7DA72C45424634806200A50182 ___s_UIToolkitOverride_15;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_20;
	// UnityEngine.UI.Scrollbar/Direction UnityEngine.UI.Scrollbar::m_Direction
	int32_t ___m_Direction_21;
	// System.Single UnityEngine.UI.Scrollbar::m_Value
	float ___m_Value_22;
	// System.Single UnityEngine.UI.Scrollbar::m_Size
	float ___m_Size_23;
	// System.Int32 UnityEngine.UI.Scrollbar::m_NumberOfSteps
	int32_t ___m_NumberOfSteps_24;
	// UnityEngine.UI.Scrollbar/ScrollEvent UnityEngine.UI.Scrollbar::m_OnValueChanged
	ScrollEvent_tDDBE21D44D65DF069C54FE3ACF7668D976E6BBB6* ___m_OnValueChanged_25;
	// UnityEngine.RectTransform UnityEngine.UI.Scrollbar::m_ContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_ContainerRect_26;
	// UnityEngine.Vector2 UnityEngine.UI.Scrollbar::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_27;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Scrollbar::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_28;
	// UnityEngine.Coroutine UnityEngine.UI.Scrollbar::m_PointerDownRepeat
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_PointerDownRepeat_29;
	// System.Boolean UnityEngine.UI.Scrollbar::isPointerDownAndNotDragging
	bool ___isPointerDownAndNotDragging_30;
	// System.Boolean UnityEngine.UI.Scrollbar::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_31;
};

// UnityEngine.UI.Slider
struct Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t92A82EF6C62E15AF92B640FE2D960E877E8C6555* ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_tFB0706C933E3C68E4F377C204FCEEF091F1EE0B1 ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;
};

// UnityEngine.UI.Toggle
struct Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Toggle/ToggleTransition UnityEngine.UI.Toggle::toggleTransition
	int32_t ___toggleTransition_20;
	// UnityEngine.UI.Graphic UnityEngine.UI.Toggle::graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___graphic_21;
	// UnityEngine.UI.ToggleGroup UnityEngine.UI.Toggle::m_Group
	ToggleGroup_tF2E6FE7D4B17BDBF82462715CFB57C4FDE0A2A2C* ___m_Group_22;
	// UnityEngine.UI.Toggle/ToggleEvent UnityEngine.UI.Toggle::onValueChanged
	ToggleEvent_t88B31268F9D6D1882E4F921B14704FB9F7047F02* ___onValueChanged_23;
	// System.Boolean UnityEngine.UI.Toggle::m_IsOn
	bool ___m_IsOn_24;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.ParticleSystem[]
struct ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6  : public RuntimeArray
{
	ALIGN_FIELD (8) ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* m_Items[1];

	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

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
// Sound[]
struct SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5  : public RuntimeArray
{
	ALIGN_FIELD (8) Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* m_Items[1];

	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Array::Find<System.Object>(T[],System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Array_Find_TisRuntimeObject_m9CD4698A92B100B5B54C53DB03F738B7CD233F21_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___array0, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match1, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared (const RuntimeMethod* method) ;

// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m2A2DD50EC8EB54C91AF71E02DFD6969174D82B08_gshared)(___original0, ___position1, ___rotation2, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_parent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, float ___t1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Rigidbody::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.SphereCollider>()
inline SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.SphereCollider::get_radius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697 (SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rigidbody::get_useGravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Physics::get_gravity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::SphereCast(UnityEngine.Vector3,System.Single,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_SphereCast_mE2C58E7A0D85E87CBC4798BE3E99D0E146F1CAE7 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___origin0, float ___radius1, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction2, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo3, float ___maxDistance4, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___fromDirection0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___toDirection1, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.ParticleSystem>()
inline ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::Contains(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3 (String_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF (String_t* ___sceneName0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyDown(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3 (int32_t ___key0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51 (String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::.ctor()
inline void List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268 (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.Transform>::get_Count()
inline int32_t List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.Transform>::get_Item(System.Int32)
inline Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Clear()
inline void List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.Transform>::Add(T)
inline void List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Button>()
inline Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UICanvasManager::UpdateToolTip(ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UpdateToolTip_mFA1330F8A25B3437AADA88116C2B3AF9B9A43256 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, int32_t ___toolTipType0, const RuntimeMethod* method) ;
// System.Void UICanvasManager::ClearToolTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_ClearToolTip_m49C6117C20B9614BB602042D8A9DECF1AB68BC9C (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) ;
// System.Void UICanvasManager::UIButtonClick(ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UIButtonClick_m46983844912FADCFDDBA0455339B5E2162CB801C (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, int32_t ___buttonTypeClicked0, const RuntimeMethod* method) ;
// System.String ParticleEffectsLibrary::GetCurrentPENameString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void UICanvasManager::SpawnCurrentParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SpawnCurrentParticleEffect_m2A1BB27F11451D24EE32BB3F30A8E9A3B007DDB5 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetKeyUp(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842 (int32_t ___key0, const RuntimeMethod* method) ;
// System.Void UICanvasManager::SelectPreviousPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) ;
// System.Void UICanvasManager::SelectNextPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) ;
// System.Void ParticleEffectsLibrary::PreviousParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_PreviousParticleEffect_m64E26B750D13C94BBA08E689744844E190550830 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) ;
// System.Void ParticleEffectsLibrary::NextParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_NextParticleEffect_mC2497E960308324CF6ED87F2248E5ABBBFAC372D (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) ;
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43 (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Input::get_mousePosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD (const RuntimeMethod* method) ;
// UnityEngine.Ray UnityEngine.Camera::ScreenPointToRay(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, const RuntimeMethod* method) ;
// System.Void ParticleEffectsLibrary::SpawnParticleEffect(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_SpawnParticleEffect_m245CE977A9E3D2A85EC1B9A96C559FC78E5A4F57 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionInWorldToSpawn0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::DontDestroyOnLoad(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___target0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::set_clip(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_pitch(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::set_loop(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void AudioManager::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___name0, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m8C54CF0F0E5F074525DA04D415803917C3371E69 (U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<Sound>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Array::Find<Sound>(T[],System.Predicate`1<T>)
inline Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87 (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* ___array0, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* ___match1, const RuntimeMethod* method)
{
	return ((  Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* (*) (SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5*, Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*, const RuntimeMethod*))Array_Find_TisRuntimeObject_m9CD4698A92B100B5B54C53DB03F738B7CD233F21_gshared)(___array0, ___match1, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m67ADEC061C6A1781C72DFC2A7AC2134C751AA940 (U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Void AudioManager/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mE1303CB5114C4E9FBFCE8A99E5CAD205BDF1B572 (U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_pause(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_pause_mE2C2B6C40696BEF96662114C695151943A14299E (bool ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_useGravity(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_isKinematic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Collision::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.GameObject::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_tag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Object::FindObjectOfType<AudioManager>()
inline AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538 (const RuntimeMethod* method)
{
	return ((  AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m9990A7304DF02BA1ED160587D1C2F6DAE89BB343_gshared)(method);
}
// System.Void collector::decreeseHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collector_decreeseHeight_mB4994DAF97E2DEF62F52575EA7DA09FD8DBC48A9 (collector_tEBF92C62743EEF3431C1272AAD3719963B853D32* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Collider::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70 (Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void GameManager::CollPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CollPos_m41BF9EC4D27DDFA34E6A2A3DADBE26284D3A0074 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// System.Void GameManager::multierMinus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_multierMinus_mE5BE53285C769A52A6C1A7EDE5075C74B77C3C2F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_tA1DC762B79745EB5140F054C884855B922318356 SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE (const RuntimeMethod* method) ;
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<CollCube>()
inline CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* GameObject_GetComponent_TisCollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E_mF6DBD7C4413996E0BC96EEE8842CD0CC2046C092 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean CollCube::getCollEd()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CollCube_getCollEd_mF79F309D9726A2EFDCAE9380F6224076ED446B4F_inline (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, const RuntimeMethod* method) ;
// System.Void GameManager::multierPlus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_multierPlus_mFF48EDA8552329A89122F6B00DDDA4DB89067F17 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Collision::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6 (Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* __this, const RuntimeMethod* method) ;
// System.Void CollCube::doColl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollCube_doColl_m6BA57EF3F6F1F4E2E2C9333406970869D74C7C4C (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B (String_t* ___key0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_red()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Color32::.ctor(System.Byte,System.Byte,System.Byte,System.Byte)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color32::op_Implicit(UnityEngine.Color32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134 (const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) ;
// System.Void AudioManager::setVolume(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_setVolume_m6EB55D3C130FBA65E10134E9AD24899849A30601 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___name0, int32_t ___volume1, const RuntimeMethod* method) ;
// System.Void AudioManager::mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_mute_m973DD576838A395B9B5601BDD54F499EAB963FB3 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, bool ___x0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::justScoreIn(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_justScoreIn_m731D9BF9D50074B3759C899F21F346523A22F3C4 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___a0, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameManager::scoreIn(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_scoreIn_mDEC3E7AEC4048C9540BCF462287B81FBF318D4E1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___a0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF (String_t* ___key0, float ___value1, const RuntimeMethod* method) ;
// System.Void GameManager/<scoreIn>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CscoreInU3Ed__10__ctor_m5AA82BC6A9FDB6FBBF968AADE29EAE2B17D1511E (U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void GameManager/<justScoreIn>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CjustScoreInU3Ed__11__ctor_m342E1B2C00B148869B9F64E14D822AFC722CBDEF (U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Text::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontSize(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4 (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void getCoin::pickCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void getCoin_pickCoin_m03884EC416127174D62DB998FD0D6DC0E9FA48D9 (getCoin_t4353487B8BE0BCC8B5ADDC8614F50A14714F4CF3* __this, const RuntimeMethod* method) ;
// System.Void GameManager::scorePlus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_scorePlus_m3BAFCD19186FBB6BFFC47E853615B4D70A89F7CF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Slider>()
inline Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293 (String_t* ___key0, float ___defaultValue1, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Toggle::set_isOn(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Toggle::get_isOn()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Text::set_fontStyle(UnityEngine.FontStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Scrollbar::set_value(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804 (Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void Menu::setRemote(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_setRemote_m5CBBD359978169E1AC24F7C2407286F58E69F5E8 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, float ___x0, const RuntimeMethod* method) ;
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::DeleteKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.SceneManagement.Scene::get_buildIndex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E (Scene_tA1DC762B79745EB5140F054C884855B922318356* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896 (String_t* ___key0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C (const RuntimeMethod* method) ;
// System.Single PlaayerMovement::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlaayerMovement_Remap_mE133D6143AD9C1A8E1FDFDD5455461B332F6DE48 (float ___value0, float ___from11, float ___to12, float ___from23, float ___to24, const RuntimeMethod* method) ;
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4 (String_t* ___axisName0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Collections.IEnumerator ScoreInc::scoreCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScoreInc_scoreCount_mF3DF243F4A98227433311F7CAFBE4028623A15F8 (ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* __this, const RuntimeMethod* method) ;
// System.Void ScoreInc/<scoreCount>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CscoreCountU3Ed__3__ctor_mC6944F71C1BAABA5B15BE2EF5A21FADDFB0DA22D (U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EpicToonFX.ETFXFireProjectile>()
inline ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EpicToonFX.ETFXButtonScript::getProjectileNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, String_t* ___n0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<ETFXProjectileScript>()
inline ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, float ___x0, float ___y1, float ___width2, float ___height3, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Screen::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___point0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<EpicToonFX.ETFXButtonScript>()
inline ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void EpicToonFX.ETFXFireProjectile::nextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXFireProjectile::previousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) ;
// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.EventSystem::get_current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0 (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.EventSystems.EventSystem::IsPointerOverGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38 (EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Raycast(UnityEngine.Ray,UnityEngine.RaycastHit&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo1, float ___maxDistance2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::AddForce(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198 (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___force0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_origin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Ray::get_direction()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086 (Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_yellow()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::DrawRay(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___dir1, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color2, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXLoopScript::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, String_t* ___methodName0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Light>()
inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Rigidbody::set_freezeRotation(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC (Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButton(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Single EpicToonFX.ETFXMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ETFXMouseOrbit_ClampAngle_m0465F9A5E01116400F3D22596C9EFB68F949297D (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Linecast_m92B9E7A0130FAA5613977E5C9F887ED629CF3A14 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___start0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___end1, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___hitInfo2, const RuntimeMethod* method) ;
// System.Single UnityEngine.RaycastHit::get_distance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0 (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Renderer>()
inline Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.Collider>()
inline Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8 (Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* __this, bool ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Component::get_tag()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator EpicToonFX.ETFXTarget::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void EpicToonFX.ETFXTarget::SpawnTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Light::get_intensity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_intensity(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, float ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single UnityEngine.AudioSource::get_pitch()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::Rotate(UnityEngine.Vector3,UnityEngine.Space)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___eulers0, int32_t ___relativeTo1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
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
// System.Void ETFXProjectileScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXProjectileScript_Start_m0E1FB70AED6DE06208444A4B1EE0095D4495A5C0 (ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// projectileParticle = Instantiate(projectileParticle, transform.position, transform.rotation) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___projectileParticle_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4;
		L_4 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_0, L_2, L_4, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___projectileParticle_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileParticle_5), (void*)L_5);
		// projectileParticle.transform.parent = transform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___projectileParticle_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_7, L_8, NULL);
		// if (muzzleParticle)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___muzzleParticle_6;
		bool L_10;
		L_10 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_9, NULL);
		if (!L_10)
		{
			goto IL_0081;
		}
	}
	{
		// muzzleParticle = Instantiate(muzzleParticle, transform.position, transform.rotation) as GameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___muzzleParticle_6;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_12, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_15;
		L_15 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_14, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16;
		L_16 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_11, L_13, L_15, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___muzzleParticle_6 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___muzzleParticle_6), (void*)L_16);
		// Destroy(muzzleParticle, 1.5f); // 2nd parameter is lifetime of effect in seconds
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___muzzleParticle_6;
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_17, (1.5f), NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void ETFXProjectileScript::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXProjectileScript_FixedUpdate_m2FB7E63B404F5C701112656F5A4913E022A1553A (ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8A460B57C708AAE5B3FE032970AB4EB08FDAB9B);
		s_Il2CppMethodInitialized = true;
	}
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_5 = NULL;
	ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* V_6 = NULL;
	int32_t V_7 = 0;
	ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* V_8 = NULL;
	{
		// if (GetComponent<Rigidbody>().velocity.magnitude != 0)
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_0;
		L_0 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_0, NULL);
		V_4 = L_1;
		float L_2;
		L_2 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0036;
		}
	}
	{
		// transform.rotation = Quaternion.LookRotation(GetComponent<Rigidbody>().velocity); // Sets rotation to look at direction of movement
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_4;
		L_4 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Quaternion_LookRotation_m8C0F294E5143F93D378E020EAD9DA2288A5907A3(L_5, NULL);
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_3, L_6, NULL);
	}

IL_0036:
	{
		// if (transform.GetComponent<SphereCollider>())
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_8;
		L_8 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(L_7, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_8, NULL);
		if (!L_9)
		{
			goto IL_005b;
		}
	}
	{
		// radius = transform.GetComponent<SphereCollider>().radius;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		SphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275* L_11;
		L_11 = Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A(L_10, Component_GetComponent_TisSphereCollider_tBA111C542CE97F6873DE742757213D6265C7D275_m426333A1BDA38D3C9F15B074674322AF344D6C3A_RuntimeMethod_var);
		float L_12;
		L_12 = SphereCollider_get_radius_m1BB513491906E76A4F71929E3DB72A1542309697(L_11, NULL);
		V_1 = L_12;
		goto IL_0062;
	}

IL_005b:
	{
		// radius = colliderRadius;
		float L_13 = __this->___colliderRadius_7;
		V_1 = L_13;
	}

IL_0062:
	{
		// Vector3 direction = transform.GetComponent<Rigidbody>().velocity; // Gets the direction of the projectile, used for collision detection
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15;
		L_15 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_14, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_15, NULL);
		V_2 = L_16;
		// if (transform.GetComponent<Rigidbody>().useGravity)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_17;
		L_17 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_18;
		L_18 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_17, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		bool L_19;
		L_19 = Rigidbody_get_useGravity_mBDA227BDCB0F9A81B61A6592929EE43EDDEE7D16(L_18, NULL);
		if (!L_19)
		{
			goto IL_009b;
		}
	}
	{
		// direction += Physics.gravity * Time.deltaTime; // Accounts for gravity if enabled
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Physics_get_gravity_m3A4C8594035C638686900919118B176B9F0A6F81(NULL);
		float L_22;
		L_22 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_21, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_20, L_23, NULL);
		V_2 = L_24;
	}

IL_009b:
	{
		// direction = direction.normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_2), NULL);
		V_2 = L_25;
		// float detectionDistance = transform.GetComponent<Rigidbody>().velocity.magnitude * Time.deltaTime; // Distance of collision detection for this frame
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_27;
		L_27 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(L_26, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Rigidbody_get_velocity_mAE331303E7214402C93E2183D0AA1198F425F843(L_27, NULL);
		V_4 = L_28;
		float L_29;
		L_29 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_4), NULL);
		float L_30;
		L_30 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_3 = ((float)il2cpp_codegen_multiply(L_29, L_30));
		// if (Physics.SphereCast(transform.position, radius, direction, out hit, detectionDistance)) // Checks if collision will happen
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_2;
		float L_35 = V_3;
		bool L_36;
		L_36 = Physics_SphereCast_mE2C58E7A0D85E87CBC4798BE3E99D0E146F1CAE7(L_32, L_33, L_34, (&V_0), L_35, NULL);
		if (!L_36)
		{
			goto IL_01ae;
		}
	}
	{
		// transform.position = hit.point + (hit.normal * collideOffset); // Move projectile to point of collision
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		float L_40 = __this->___collideOffset_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_39, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_38, L_41, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_42, NULL);
		// GameObject impactP = Instantiate(impactParticle, transform.position, Quaternion.FromToRotation(Vector3.up, hit.normal)) as GameObject; // Spawns impact effect
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___impactParticle_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = RaycastHit_get_normal_mD8741B70D2039C5CAFC4368D4CE59D89562040B5((&V_0), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48;
		L_48 = Quaternion_FromToRotation_m041093DBB23CB3641118310881D6B7746E3B8418(L_46, L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49;
		L_49 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_43, L_45, L_48, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_5 = L_49;
		// ParticleSystem[] trails = GetComponentsInChildren<ParticleSystem>(); // Gets a list of particle systems, as we need to detach the trails
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_50;
		L_50 = Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D(__this, Component_GetComponentsInChildren_TisParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1_m4A6A34D7CF3ABDD3C27C0FB3017B5B0D05AF407D_RuntimeMethod_var);
		V_6 = L_50;
		// for (int i = 1; i < trails.Length; i++) // Loop to cycle through found particle systems
		V_7 = 1;
		goto IL_017f;
	}

IL_013c:
	{
		// ParticleSystem trail = trails[i];
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_51 = V_6;
		int32_t L_52 = V_7;
		int32_t L_53 = L_52;
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_54 = (L_51)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_53));
		V_8 = L_54;
		// if (trail.gameObject.name.Contains("Trail"))
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_55 = V_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56;
		L_56 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_55, NULL);
		String_t* L_57;
		L_57 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_56, NULL);
		bool L_58;
		L_58 = String_Contains_m6D77B121FADA7CA5F397C0FABB65DA62DF03B6C3(L_57, _stringLiteralD8A460B57C708AAE5B3FE032970AB4EB08FDAB9B, NULL);
		if (!L_58)
		{
			goto IL_0179;
		}
	}
	{
		// trail.transform.SetParent(null); // Detaches the trail from the projectile
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_59 = V_8;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_60;
		L_60 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_59, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_60, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// Destroy(trail.gameObject, 2f); // Removes the trail after seconds
		ParticleSystem_tB19986EE308BD63D36FB6025EEEAFBEDB97C67C1* L_61 = V_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62;
		L_62 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_61, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_62, (2.0f), NULL);
	}

IL_0179:
	{
		// for (int i = 1; i < trails.Length; i++) // Loop to cycle through found particle systems
		int32_t L_63 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_63, 1));
	}

IL_017f:
	{
		// for (int i = 1; i < trails.Length; i++) // Loop to cycle through found particle systems
		int32_t L_64 = V_7;
		ParticleSystemU5BU5D_tC5E33DA557C9C2064085128B3530C5F04D48F6E6* L_65 = V_6;
		if ((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length)))))
		{
			goto IL_013c;
		}
	}
	{
		// Destroy(projectileParticle, 3f); // Removes particle effect after delay
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___projectileParticle_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_66, (3.0f), NULL);
		// Destroy(impactP, 3.5f); // Removes impact effect after delay
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = V_5;
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_67, (3.5f), NULL);
		// Destroy(gameObject); // Removes the projectile
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68;
		L_68 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_68, NULL);
	}

IL_01ae:
	{
		// }
		return;
	}
}
// System.Void ETFXProjectileScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXProjectileScript__ctor_mA40725837A6D1433D09D449D6AAFD1B47C127268 (ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* __this, const RuntimeMethod* method) 
{
	{
		// public float colliderRadius = 1f;
		__this->___colliderRadius_7 = (1.0f);
		// public float collideOffset = 0.15f;
		__this->___collideOffset_8 = (0.150000006f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ETFXSceneManager::LoadScene2DDemo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScene2DDemo_m166AEE719B3CBEC9FC515335DE96024A63A85DDE (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE8DBC7FFF52925F8AED0C5F50AEF43ABA6C6C36);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_2ddemo");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralCE8DBC7FFF52925F8AED0C5F50AEF43ABA6C6C36, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneCards_mB6F24EFE58EF75B76ABA00ACEA57378F02431E05 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01228D97468F93F4C08D34049F3BE2138BFA15D8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_cards");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral01228D97468F93F4C08D34049F3BE2138BFA15D8, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneCombat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneCombat_mCE714064D2C42D885FC23182E28D712841776A3D (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF2A170901896DA9E535CB9AFD05D068A6DC3ED07);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_combat");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralF2A170901896DA9E535CB9AFD05D068A6DC3ED07, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneDecals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneDecals_mA158CAC129C42A88BEC4D62E13E95AAAAFFE6AFA (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral35976FFCA294560D7E4C40F81B41248FED8AD19E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_decals");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral35976FFCA294560D7E4C40F81B41248FED8AD19E, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneDecals2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneDecals2_m184A79CC375CA61C1758EBAD3CAE31AB22910990 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5183CC718F042548CB17830F335CA1300798F98F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_decals2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral5183CC718F042548CB17830F335CA1300798F98F, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneEmojis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneEmojis_m6B2D44847F224B852EE92930A1899AE0B668C82E (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D108E69F651AE4F1653BCDCAA8D2C79B865B23A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_emojis");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral9D108E69F651AE4F1653BCDCAA8D2C79B865B23A, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneEmojis2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneEmojis2_m666659BC62458A3476CB5FAEDFE82DAAB0767348 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA48328E12C38ADB209E5965BAF23D6A254F32EAA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_emojis2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralA48328E12C38ADB209E5965BAF23D6A254F32EAA, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneExplosions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneExplosions_mD769ACD162F37878BA03F1087C3F54C452218EDB (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6FA6337DF8B49626C6F4D96CF07FF45586BDA214);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_explosions");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral6FA6337DF8B49626C6F4D96CF07FF45586BDA214, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneExplosions2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneExplosions2_m5DAA46AB9C03E980D042D43A9E4DF0098239A9E7 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral551232956AEF66634A14B2FA7D5E43036EBAE5AE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_explosions2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral551232956AEF66634A14B2FA7D5E43036EBAE5AE, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFire()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFire_m265A0FE056A7394B2703C490DA983BAD77088070 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16B50E8F5851EEBF64831B0EAFD15BD9FCC57686);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_fire");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral16B50E8F5851EEBF64831B0EAFD15BD9FCC57686, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFire2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFire2_mC60D6D1346670AFB87EBF57CB7A9E3EF006FBABE (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1679F19DA567DC41D2778CF07FA2C003E100369);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_fire2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralD1679F19DA567DC41D2778CF07FA2C003E100369, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFire3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFire3_m612F02454CCBA7586A07E0F9CD22036A781D748C (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDF246C2C30DD050AD1D57A21AAC461FA49F6D42E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_fire3");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralDF246C2C30DD050AD1D57A21AAC461FA49F6D42E, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFireworks()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFireworks_m7A3BDB3A9EFBD640FDB55EFF76AECBA710D67DF4 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8DDB709CD0A40DF83139466BDB36786AAE75EE8F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_fireworks");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral8DDB709CD0A40DF83139466BDB36786AAE75EE8F, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneFlares()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneFlares_mBA39D71D779C26CC664E29DFF6E271A129948AD8 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF0887D90DE9B75255B1C019432AC465E5794CEB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_flares");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralEF0887D90DE9B75255B1C019432AC465E5794CEB, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMagic()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMagic_m4FD8415183E84CE25BEBBA3F8F11C51837971543 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral542C20BA146CC0FFF0BACCD64CCB27638EE2C535);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_magic");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral542C20BA146CC0FFF0BACCD64CCB27638EE2C535, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMagic2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMagic2_mE2E16D49C06756F213CF11AB7B4A41CA9B4F150C (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF872ADFA6D009455788B01E0039910ABAA9AEE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_magic2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralBF872ADFA6D009455788B01E0039910ABAA9AEE9, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMagic3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMagic3_mD289F0F5997DB1F43766BA61FD263FC4394A664B (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A5F1D79B12F1C52B9B1E470CFFAFFA221390695);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_magic3");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral2A5F1D79B12F1C52B9B1E470CFFAFFA221390695, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMainDemo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMainDemo_m70F4C7C5EE4597D9E841C29AECCFD0CA81C28E37 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5046BA9E70AC20B6F9AC56F496268F4CA54CB71D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_maindemo");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral5046BA9E70AC20B6F9AC56F496268F4CA54CB71D, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMissiles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMissiles_mB99EAF3004F5DEA20BE35072805A10ECA57448E7 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4907D619835F2CCA72462CBD2E9117F3D50AA239);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_missiles");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral4907D619835F2CCA72462CBD2E9117F3D50AA239, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadScenePortals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePortals_m1B2413CADCA92522BDDD627784DF16FD60D2F689 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3FA3643AE00785D4AAC8D94F75DBEC31C591CD8C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_portals");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral3FA3643AE00785D4AAC8D94F75DBEC31C591CD8C, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadScenePortals2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePortals2_m3ACA5707C45EFFA6CF56DF4C46FA463F5A0C8234 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3567C3794ABE76DD48E35F1DF7FC710B55520C9E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_portals2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral3567C3794ABE76DD48E35F1DF7FC710B55520C9E, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadScenePowerups()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePowerups_m17C376EDD497476395E80F44059E697969F02E45 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral342FE8A631B1691BFAFBC5238E49C17B7A0188F8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_powerups");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral342FE8A631B1691BFAFBC5238E49C17B7A0188F8, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadScenePowerups2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadScenePowerups2_m794E525131173D846FF3E93E8D5EE43C2ED1F0E8 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DF7A265B2E2742BE4BF8DF078EB839FD342B9E9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_powerups2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral7DF7A265B2E2742BE4BF8DF078EB839FD342B9E9, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneSparkles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneSparkles_m88CDB8CDE008657DA1B5067FCA0DC212FD33F5FF (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral55DCD3C41D65D7C0C6131E9F887E925D3D93D999);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_sparkles");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral55DCD3C41D65D7C0C6131E9F887E925D3D93D999, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneSwordCombat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneSwordCombat_m9894108F9A1F0F0F3C41E949B971C3FC69D9F18E (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE720B9F5A19BBE91E81F3577B920642AEA974C49);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_swordcombat");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralE720B9F5A19BBE91E81F3577B920642AEA974C49, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneSwordCombat2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneSwordCombat2_m0DB358EDEA5A3878935D46106295FE0896252325 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2940DE8D75B2E8B88DD329CDDC03D118CF148C79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_swordcombat2");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral2940DE8D75B2E8B88DD329CDDC03D118CF148C79, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneMoney()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneMoney_mBECE1A285111F033F4C07471B6E4C6D0D23A4BF4 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5B46BB36C025A58C6B5C47AF145C69CC35BB955);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_money");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralE5B46BB36C025A58C6B5C47AF145C69CC35BB955, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneHealing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneHealing_mBEC91CD262B682CB6FCBDCA9CF9547E9B487B197 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBAAA90AC733B7E7E42D2C8D1D639DDE68DFECD7F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_healing");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteralBAAA90AC733B7E7E42D2C8D1D639DDE68DFECD7F, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::LoadSceneWind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_LoadSceneWind_mA896516E55DAF0CB0D04ECED1EFFDBEBA833FF69 (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E9A7309AEEF5B192FD019E712D2973C5AF4E319);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene ("etfx_wind");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral2E9A7309AEEF5B192FD019E712D2973C5AF4E319, NULL);
		// }
		return;
	}
}
// System.Void ETFXSceneManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager_Update_m837F7099F9821C1978177139C1DC56D8DDFC132E (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C9FF3B3141F5DF7D803B4AA8CC203B64A33D903);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A7FFC98C7BE33F9BD92522989C848CB308F744A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EFF1CA3F95D2B3E9378D139FADBCDD0308F8162);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(Input.GetKeyDown(KeyCode.L))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)108), NULL);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// GUIHide = !GUIHide;
		bool L_1 = __this->___GUIHide_4;
		__this->___GUIHide_4 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		// if (GUIHide)
		bool L_2 = __this->___GUIHide_4;
		if (!L_2)
		{
			goto IL_0037;
		}
	}
	{
		// GameObject.Find("CanvasSceneSelect").GetComponent<Canvas> ().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral1EFF1CA3F95D2B3E9378D139FADBCDD0308F8162, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4;
		L_4 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_3, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_4, (bool)0, NULL);
		goto IL_004c;
	}

IL_0037:
	{
		// GameObject.Find("CanvasSceneSelect").GetComponent<Canvas> ().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral1EFF1CA3F95D2B3E9378D139FADBCDD0308F8162, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_6;
		L_6 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_5, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_6, (bool)1, NULL);
	}

IL_004c:
	{
		// if(Input.GetKeyDown(KeyCode.J))
		bool L_7;
		L_7 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)106), NULL);
		if (!L_7)
		{
			goto IL_0098;
		}
	}
	{
		// GUIHide2 = !GUIHide2;
		bool L_8 = __this->___GUIHide2_5;
		__this->___GUIHide2_5 = (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		// if (GUIHide2)
		bool L_9 = __this->___GUIHide2_5;
		if (!L_9)
		{
			goto IL_0083;
		}
	}
	{
		// GameObject.Find("Canvas").GetComponent<Canvas> ().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11;
		L_11 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_10, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_11, (bool)0, NULL);
		goto IL_0098;
	}

IL_0083:
	{
		// GameObject.Find("Canvas").GetComponent<Canvas> ().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_13;
		L_13 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_12, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
	}

IL_0098:
	{
		// if(Input.GetKeyDown(KeyCode.H))
		bool L_14;
		L_14 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)104), NULL);
		if (!L_14)
		{
			goto IL_00e4;
		}
	}
	{
		// GUIHide3 = !GUIHide3;
		bool L_15 = __this->___GUIHide3_6;
		__this->___GUIHide3_6 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		// if (GUIHide3)
		bool L_16 = __this->___GUIHide3_6;
		if (!L_16)
		{
			goto IL_00cf;
		}
	}
	{
		// GameObject.Find("ParticleSysDisplayCanvas").GetComponent<Canvas> ().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral0C9FF3B3141F5DF7D803B4AA8CC203B64A33D903, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_18;
		L_18 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_17, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_18, (bool)0, NULL);
		goto IL_00e4;
	}

IL_00cf:
	{
		// GameObject.Find("ParticleSysDisplayCanvas").GetComponent<Canvas> ().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral0C9FF3B3141F5DF7D803B4AA8CC203B64A33D903, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_20;
		L_20 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_19, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)1, NULL);
	}

IL_00e4:
	{
		// if(Input.GetKeyDown(KeyCode.K))
		bool L_21;
		L_21 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)107), NULL);
		if (!L_21)
		{
			goto IL_012f;
		}
	}
	{
		// GUIHide4 = !GUIHide4;
		bool L_22 = __this->___GUIHide4_7;
		__this->___GUIHide4_7 = (bool)((((int32_t)L_22) == ((int32_t)0))? 1 : 0);
		// if (GUIHide3)
		bool L_23 = __this->___GUIHide3_6;
		if (!L_23)
		{
			goto IL_011a;
		}
	}
	{
		// GameObject.Find("CanvasTips").GetComponent<Canvas> ().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral1A7FFC98C7BE33F9BD92522989C848CB308F744A, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_25;
		L_25 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_24, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_25, (bool)0, NULL);
		return;
	}

IL_011a:
	{
		// GameObject.Find("CanvasTips").GetComponent<Canvas> ().enabled = true;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral1A7FFC98C7BE33F9BD92522989C848CB308F744A, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_27;
		L_27 = GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE(L_26, GameObject_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_mE5A2711FA84F57F5EA0876DB106B1A146956CEFE_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_27, (bool)1, NULL);
	}

IL_012f:
	{
		// }
		return;
	}
}
// System.Void ETFXSceneManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXSceneManager__ctor_m60E2AAFF19268179EAC55C8580C43FF2EB93FEFB (ETFXSceneManager_t9E60C39569DBFE7A94F74D627969F815389F9F2E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ParticleEffectsLibrary::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_Awake_mF2AC0D83644D9429E668B1603C7F23D803AEEA46 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB4B98DFD193C6BB1F1EE1FC7E48E5D716980E761);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36E2206A2F7EED468C9DBF8C86A794A7BEF655A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GlobalAccess = this;
		((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4), (void*)__this);
		// currentActivePEList = new List<Transform> ();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_0 = (List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D*)il2cpp_codegen_object_new(List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D_il2cpp_TypeInfo_var);
		List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268(L_0, List_1__ctor_mDC3E95DC5C927A867B9B42EDE1945F909B894268_RuntimeMethod_var);
		__this->___currentActivePEList_12 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentActivePEList_12), (void*)L_0);
		// TotalEffects = ParticleEffectPrefabs.Length;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___ParticleEffectPrefabs_10;
		__this->___TotalEffects_5 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		// CurrentParticleEffectNum = 1;
		__this->___CurrentParticleEffectNum_7 = 1;
		// if (ParticleEffectSpawnOffsets.Length != TotalEffects) {
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_2 = __this->___ParticleEffectSpawnOffsets_8;
		int32_t L_3 = __this->___TotalEffects_5;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)L_3)))
		{
			goto IL_0040;
		}
	}
	{
		// Debug.LogError ("ParticleEffectsLibrary-ParticleEffectSpawnOffset: Not all arrays match length, double check counts.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralB4B98DFD193C6BB1F1EE1FC7E48E5D716980E761, NULL);
	}

IL_0040:
	{
		// if (ParticleEffectPrefabs.Length != TotalEffects) {
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_4 = __this->___ParticleEffectPrefabs_10;
		int32_t L_5 = __this->___TotalEffects_5;
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)L_5)))
		{
			goto IL_005a;
		}
	}
	{
		// Debug.LogError ("ParticleEffectsLibrary-ParticleEffectPrefabs: Not all arrays match length, double check counts.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralC36E2206A2F7EED468C9DBF8C86A794A7BEF655A, NULL);
	}

IL_005a:
	{
		// effectNameString = ParticleEffectPrefabs [CurrentParticleEffectIndex].name + " (" + CurrentParticleEffectNum.ToString() + " of " + TotalEffects.ToString() + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_6 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_8 = __this->___ParticleEffectPrefabs_10;
		int32_t L_9 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_10 = L_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		String_t* L_12;
		L_12 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_11, NULL);
		ArrayElementTypeCheck (L_7, L_12);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_12);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_13 = L_7;
		ArrayElementTypeCheck (L_13, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_13)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_14 = L_13;
		int32_t* L_15 = (&__this->___CurrentParticleEffectNum_7);
		String_t* L_16;
		L_16 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_15, NULL);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_16);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_17 = L_14;
		ArrayElementTypeCheck (L_17, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		(L_17)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_18 = L_17;
		int32_t* L_19 = (&__this->___TotalEffects_5);
		String_t* L_20;
		L_20 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_19, NULL);
		ArrayElementTypeCheck (L_18, L_20);
		(L_18)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_20);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_21 = L_18;
		ArrayElementTypeCheck (L_21, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_21)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_22;
		L_22 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_21, NULL);
		__this->___effectNameString_11 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameString_11), (void*)L_22);
		// }
		return;
	}
}
// System.Void ParticleEffectsLibrary::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_Start_mEB46C3D6FAF9CDCE0C134F6E807DBF702519CDC9 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.String ParticleEffectsLibrary::GetCurrentPENameString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return ParticleEffectPrefabs [CurrentParticleEffectIndex].name + " (" + CurrentParticleEffectNum.ToString() + " of " + TotalEffects.ToString() + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_0 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = L_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___ParticleEffectPrefabs_10;
		int32_t L_3 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		String_t* L_6;
		L_6 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_5, NULL);
		ArrayElementTypeCheck (L_1, L_6);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_7 = L_1;
		ArrayElementTypeCheck (L_7, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_7)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_8 = L_7;
		int32_t* L_9 = (&__this->___CurrentParticleEffectNum_7);
		String_t* L_10;
		L_10 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_9, NULL);
		ArrayElementTypeCheck (L_8, L_10);
		(L_8)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_10);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_11 = L_8;
		ArrayElementTypeCheck (L_11, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		(L_11)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_12 = L_11;
		int32_t* L_13 = (&__this->___TotalEffects_5);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		ArrayElementTypeCheck (L_12, L_14);
		(L_12)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_14);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_15 = L_12;
		ArrayElementTypeCheck (L_15, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_15)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_16;
		L_16 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_15, NULL);
		return L_16;
	}
}
// System.Void ParticleEffectsLibrary::PreviousParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_PreviousParticleEffect_m64E26B750D13C94BBA08E689744844E190550830 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ParticleEffectLifetimes [CurrentParticleEffectIndex] == 0) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___ParticleEffectLifetimes_9;
		int32_t L_1 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		// if (currentActivePEList.Count > 0) {
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___currentActivePEList_12;
		int32_t L_5;
		L_5 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_4, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		V_0 = 0;
		goto IL_0054;
	}

IL_0026:
	{
		// if (currentActivePEList [i] != null) {
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_6 = __this->___currentActivePEList_12;
		int32_t L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_6, L_7, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// Destroy (currentActivePEList [i].gameObject);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___currentActivePEList_12;
		int32_t L_11 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_10, L_11, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_13, NULL);
	}

IL_0050:
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		int32_t L_15 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_16 = __this->___currentActivePEList_12;
		int32_t L_17;
		L_17 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_16, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0026;
		}
	}
	{
		// currentActivePEList.Clear ();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_18 = __this->___currentActivePEList_12;
		List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline(L_18, List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
	}

IL_006d:
	{
		// if (CurrentParticleEffectIndex > 0) {
		int32_t L_19 = __this->___CurrentParticleEffectIndex_6;
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		// CurrentParticleEffectIndex -= 1;
		int32_t L_20 = __this->___CurrentParticleEffectIndex_6;
		__this->___CurrentParticleEffectIndex_6 = ((int32_t)il2cpp_codegen_subtract(L_20, 1));
		goto IL_0094;
	}

IL_0086:
	{
		// CurrentParticleEffectIndex = TotalEffects - 1;
		int32_t L_21 = __this->___TotalEffects_5;
		__this->___CurrentParticleEffectIndex_6 = ((int32_t)il2cpp_codegen_subtract(L_21, 1));
	}

IL_0094:
	{
		// CurrentParticleEffectNum = CurrentParticleEffectIndex + 1;
		int32_t L_22 = __this->___CurrentParticleEffectIndex_6;
		__this->___CurrentParticleEffectNum_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// effectNameString = ParticleEffectPrefabs [CurrentParticleEffectIndex].name + " (" + CurrentParticleEffectNum.ToString() + " of " + TotalEffects.ToString() + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___ParticleEffectPrefabs_10;
		int32_t L_26 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		String_t* L_29;
		L_29 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_28, NULL);
		ArrayElementTypeCheck (L_24, L_29);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_24;
		ArrayElementTypeCheck (L_30, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		int32_t* L_32 = (&__this->___CurrentParticleEffectNum_7);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_32, NULL);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_31;
		ArrayElementTypeCheck (L_34, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		int32_t* L_36 = (&__this->___TotalEffects_5);
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_36, NULL);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_35;
		ArrayElementTypeCheck (L_38, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_39;
		L_39 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_38, NULL);
		__this->___effectNameString_11 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameString_11), (void*)L_39);
		// }
		return;
	}
}
// System.Void ParticleEffectsLibrary::NextParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_NextParticleEffect_mC2497E960308324CF6ED87F2248E5ABBBFAC372D (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if (ParticleEffectLifetimes [CurrentParticleEffectIndex] == 0) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___ParticleEffectLifetimes_9;
		int32_t L_1 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_2 = L_1;
		float L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		if ((!(((float)L_3) == ((float)(0.0f)))))
		{
			goto IL_006d;
		}
	}
	{
		// if (currentActivePEList.Count > 0) {
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_4 = __this->___currentActivePEList_12;
		int32_t L_5;
		L_5 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_4, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_006d;
		}
	}
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		V_0 = 0;
		goto IL_0054;
	}

IL_0026:
	{
		// if (currentActivePEList [i] != null) {
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_6 = __this->___currentActivePEList_12;
		int32_t L_7 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_6, L_7, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0050;
		}
	}
	{
		// Destroy (currentActivePEList [i].gameObject);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_10 = __this->___currentActivePEList_12;
		int32_t L_11 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA(L_10, L_11, List_1_get_Item_m8EAA91B4CE37CBB6C720FD238E4505097B29FFDA_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13;
		L_13 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_13, NULL);
	}

IL_0050:
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		int32_t L_14 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0054:
	{
		// for (int i = 0; i < currentActivePEList.Count; i++) {
		int32_t L_15 = V_0;
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_16 = __this->___currentActivePEList_12;
		int32_t L_17;
		L_17 = List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_inline(L_16, List_1_get_Count_mB5E64608D47703A98476E026480AE38671047C87_RuntimeMethod_var);
		if ((((int32_t)L_15) < ((int32_t)L_17)))
		{
			goto IL_0026;
		}
	}
	{
		// currentActivePEList.Clear ();
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_18 = __this->___currentActivePEList_12;
		List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_inline(L_18, List_1_Clear_m62240D3AFAD9D2125A87C35D5324B9451929FDF1_RuntimeMethod_var);
	}

IL_006d:
	{
		// if (CurrentParticleEffectIndex < TotalEffects - 1) {
		int32_t L_19 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_20 = __this->___TotalEffects_5;
		if ((((int32_t)L_19) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_20, 1)))))
		{
			goto IL_008d;
		}
	}
	{
		// CurrentParticleEffectIndex += 1;
		int32_t L_21 = __this->___CurrentParticleEffectIndex_6;
		__this->___CurrentParticleEffectIndex_6 = ((int32_t)il2cpp_codegen_add(L_21, 1));
		goto IL_0094;
	}

IL_008d:
	{
		// CurrentParticleEffectIndex = 0;
		__this->___CurrentParticleEffectIndex_6 = 0;
	}

IL_0094:
	{
		// CurrentParticleEffectNum = CurrentParticleEffectIndex + 1;
		int32_t L_22 = __this->___CurrentParticleEffectIndex_6;
		__this->___CurrentParticleEffectNum_7 = ((int32_t)il2cpp_codegen_add(L_22, 1));
		// effectNameString = ParticleEffectPrefabs [CurrentParticleEffectIndex].name + " (" + CurrentParticleEffectNum.ToString() + " of " + TotalEffects.ToString() + ")";
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_25 = __this->___ParticleEffectPrefabs_10;
		int32_t L_26 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_27 = L_26;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = (L_25)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_27));
		String_t* L_29;
		L_29 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_28, NULL);
		ArrayElementTypeCheck (L_24, L_29);
		(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)L_29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_24;
		ArrayElementTypeCheck (L_30, _stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralD99605E29810F93D7DAE4EFBB764C41AF4E80D32);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
		int32_t* L_32 = (&__this->___CurrentParticleEffectNum_7);
		String_t* L_33;
		L_33 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_32, NULL);
		ArrayElementTypeCheck (L_31, L_33);
		(L_31)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)L_33);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_34 = L_31;
		ArrayElementTypeCheck (L_34, _stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteralE5EE957CF9978795A3D9DF30B3186097186F4640);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_35 = L_34;
		int32_t* L_36 = (&__this->___TotalEffects_5);
		String_t* L_37;
		L_37 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_36, NULL);
		ArrayElementTypeCheck (L_35, L_37);
		(L_35)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)L_37);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = L_35;
		ArrayElementTypeCheck (L_38, _stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		(L_38)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (String_t*)_stringLiteralB3F14BF976EFD974E34846B742502C802FABAE9D);
		String_t* L_39;
		L_39 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_38, NULL);
		__this->___effectNameString_11 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameString_11), (void*)L_39);
		// }
		return;
	}
}
// System.Void ParticleEffectsLibrary::SpawnParticleEffect(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary_SpawnParticleEffect_m245CE977A9E3D2A85EC1B9A96C559FC78E5A4F57 (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positionInWorldToSpawn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral938FE4E47247B784D5CF095C44F186C46A71820D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_0 = NULL;
	String_t* G_B2_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B2_2 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_0 = NULL;
	String_t* G_B1_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B1_2 = NULL;
	String_t* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B3_2 = NULL;
	{
		// spawnPosition = positionInWorldToSpawn + ParticleEffectSpawnOffsets[CurrentParticleEffectIndex];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___positionInWorldToSpawn0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___ParticleEffectSpawnOffsets_8;
		int32_t L_2 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_0, L_4, NULL);
		__this->___spawnPosition_13 = L_5;
		// GameObject newParticleEffect = GameObject.Instantiate(ParticleEffectPrefabs[CurrentParticleEffectIndex], spawnPosition, ParticleEffectPrefabs[CurrentParticleEffectIndex].transform.rotation) as GameObject;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_6 = __this->___ParticleEffectPrefabs_10;
		int32_t L_7 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_8 = L_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___spawnPosition_13;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_11 = __this->___ParticleEffectPrefabs_10;
		int32_t L_12 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_13 = L_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_14, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_15, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17;
		L_17 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_9, L_10, L_16, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_0 = L_17;
		// newParticleEffect.name = "PE_" + ParticleEffectPrefabs[CurrentParticleEffectIndex];
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_19 = __this->___ParticleEffectPrefabs_10;
		int32_t L_20 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_21 = L_20;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = (L_19)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_21));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = L_22;
		G_B1_0 = L_23;
		G_B1_1 = _stringLiteral938FE4E47247B784D5CF095C44F186C46A71820D;
		G_B1_2 = L_18;
		if (L_23)
		{
			G_B2_0 = L_23;
			G_B2_1 = _stringLiteral938FE4E47247B784D5CF095C44F186C46A71820D;
			G_B2_2 = L_18;
			goto IL_0067;
		}
	}
	{
		G_B3_0 = ((String_t*)(NULL));
		G_B3_1 = G_B1_1;
		G_B3_2 = G_B1_2;
		goto IL_006c;
	}

IL_0067:
	{
		String_t* L_24;
		L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B2_0);
		G_B3_0 = L_24;
		G_B3_1 = G_B2_1;
		G_B3_2 = G_B2_2;
	}

IL_006c:
	{
		String_t* L_25;
		L_25 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(G_B3_1, G_B3_0, NULL);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(G_B3_2, L_25, NULL);
		// if (ParticleEffectLifetimes [CurrentParticleEffectIndex] == 0) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_26 = __this->___ParticleEffectLifetimes_9;
		int32_t L_27 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_28 = L_27;
		float L_29 = (L_26)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_28));
		if ((!(((float)L_29) == ((float)(0.0f)))))
		{
			goto IL_009b;
		}
	}
	{
		// currentActivePEList.Add (newParticleEffect.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_30 = __this->___currentActivePEList_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_30, L_32, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
	}

IL_009b:
	{
		// currentActivePEList.Add(newParticleEffect.transform);
		List_1_t991BBC5A1D51F59A450367DF944DAA207F22D06D* L_33 = __this->___currentActivePEList_12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_34, NULL);
		List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_inline(L_33, L_35, List_1_Add_m36829EC89855C8C23CEDA8C5F5B12B76ADFE2248_RuntimeMethod_var);
		// if (ParticleEffectLifetimes [CurrentParticleEffectIndex] != 0) {
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_36 = __this->___ParticleEffectLifetimes_9;
		int32_t L_37 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_38 = L_37;
		float L_39 = (L_36)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_38));
		if ((((float)L_39) == ((float)(0.0f))))
		{
			goto IL_00d3;
		}
	}
	{
		// Destroy(newParticleEffect, ParticleEffectLifetimes[CurrentParticleEffectIndex]);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = V_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = __this->___ParticleEffectLifetimes_9;
		int32_t L_42 = __this->___CurrentParticleEffectIndex_6;
		int32_t L_43 = L_42;
		float L_44 = (L_41)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_43));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_40, L_44, NULL);
	}

IL_00d3:
	{
		// }
		return;
	}
}
// System.Void ParticleEffectsLibrary::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ParticleEffectsLibrary__ctor_m79285CB8E8EC1C6689AC297F476DC97D2B19620B (ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string effectNameString = "";
		__this->___effectNameString_11 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectNameString_11), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private Vector3 spawnPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___spawnPosition_13 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PEButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_Start_mBAE6F283CF1BF849003C4A07636457CD26794A4A (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// myButton = gameObject.GetComponent<Button> ();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_1;
		L_1 = GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290(L_0, GameObject_GetComponent_TisButton_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098_mB997CBF78A37938DC1624352E12D0205078CB290_RuntimeMethod_var);
		__this->___myButton_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myButton_4), (void*)L_1);
		// }
		return;
	}
}
// System.Void PEButtonScript::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_OnPointerEnter_m13D52C4BBB849EEFBFE03A6150CCB45CBF76B661 (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICanvasManager.GlobalAccess.MouseOverButton = true;
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_0 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		L_0->___MouseOverButton_5 = (bool)1;
		// UICanvasManager.GlobalAccess.UpdateToolTip (ButtonType);
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_1 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		int32_t L_2 = __this->___ButtonType_5;
		UICanvasManager_UpdateToolTip_mFA1330F8A25B3437AADA88116C2B3AF9B9A43256(L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void PEButtonScript::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_OnPointerExit_m74437A2567B5F27EA507688085E363B1DA9B9DD7 (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICanvasManager.GlobalAccess.MouseOverButton = false;
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_0 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		L_0->___MouseOverButton_5 = (bool)0;
		// UICanvasManager.GlobalAccess.ClearToolTip ();
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_1 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		UICanvasManager_ClearToolTip_m49C6117C20B9614BB602042D8A9DECF1AB68BC9C(L_1, NULL);
		// }
		return;
	}
}
// System.Void PEButtonScript::OnButtonClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript_OnButtonClicked_mAAE0BE73FD4EE3BCE49D05419C3CF9C90CB3F6B1 (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UICanvasManager.GlobalAccess.UIButtonClick(ButtonType);
		UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* L_0 = ((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		int32_t L_1 = __this->___ButtonType_5;
		UICanvasManager_UIButtonClick_m46983844912FADCFDDBA0455339B5E2162CB801C(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void PEButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PEButtonScript__ctor_mF6CD7E0AB9B93D2AC0CD5B782A58ADBB40FE968E (PEButtonScript_t6C35A513977FB94BF7AB3C7D7D969D9CB7947305* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void UICanvasManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_Awake_mC3050903833E679EAD258432288E2E1AEF262F90 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GlobalAccess = this;
		((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_StaticFields*)il2cpp_codegen_static_fields_for(UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB_il2cpp_TypeInfo_var))->___GlobalAccess_4), (void*)__this);
		// }
		return;
	}
}
// System.Void UICanvasManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_Start_mF34E919B169144CB9C8666C9A8DCE009F5E6BD68 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PENameText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___PENameText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// PENameText.text = ParticleEffectsLibrary.GlobalAccess.GetCurrentPENameString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___PENameText_6;
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_3 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		String_t* L_4;
		L_4 = ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50(L_3, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_4);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_Update_mFD93AA63AD21FF943446DAD0C8BF3AD4275CD482 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	{
		// if (!MouseOverButton) {
		bool L_0 = __this->___MouseOverButton_5;
		if (L_0)
		{
			goto IL_0016;
		}
	}
	{
		// if (Input.GetMouseButtonUp (0)) {
		bool L_1;
		L_1 = Input_GetMouseButtonUp_m69FCCF4E6D2F0E4E9B310D1ED2AD5A6927A8C081(0, NULL);
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// SpawnCurrentParticleEffect();
		UICanvasManager_SpawnCurrentParticleEffect_m2A1BB27F11451D24EE32BB3F30A8E9A3B007DDB5(__this, NULL);
	}

IL_0016:
	{
		// if (Input.GetKeyUp (KeyCode.A)) {
		bool L_2;
		L_2 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)97), NULL);
		if (!L_2)
		{
			goto IL_0025;
		}
	}
	{
		// SelectPreviousPE ();
		UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781(__this, NULL);
	}

IL_0025:
	{
		// if (Input.GetKeyUp (KeyCode.D)) {
		bool L_3;
		L_3 = Input_GetKeyUp_m4A66DE48A7B1B25374D4FDD31208EFE43C972842(((int32_t)100), NULL);
		if (!L_3)
		{
			goto IL_0034;
		}
	}
	{
		// SelectNextPE ();
		UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4(__this, NULL);
	}

IL_0034:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::UpdateToolTip(ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UpdateToolTip_mFA1330F8A25B3437AADA88116C2B3AF9B9A43256 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, int32_t ___toolTipType0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45F58255B95DE1B8D542021758DDAB3E1F464AE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F6D9789D9A0D7483B15CB01BD0BEA1419B65721);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ToolTipText != null) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___ToolTipText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0037;
		}
	}
	{
		// if (toolTipType == ButtonTypes.Previous) {
		int32_t L_2 = ___toolTipType0;
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0023;
		}
	}
	{
		// ToolTipText.text = "Select Previous Particle Effect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___ToolTipText_7;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral45F58255B95DE1B8D542021758DDAB3E1F464AE1);
		return;
	}

IL_0023:
	{
		// else if (toolTipType == ButtonTypes.Next) {
		int32_t L_4 = ___toolTipType0;
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0037;
		}
	}
	{
		// ToolTipText.text = "Select Next Particle Effect";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___ToolTipText_7;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral4F6D9789D9A0D7483B15CB01BD0BEA1419B65721);
	}

IL_0037:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::ClearToolTip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_ClearToolTip_m49C6117C20B9614BB602042D8A9DECF1AB68BC9C (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (ToolTipText != null) {
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___ToolTipText_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// ToolTipText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___ToolTipText_7;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::SelectPreviousPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ParticleEffectsLibrary.GlobalAccess.PreviousParticleEffect();
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_0 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		ParticleEffectsLibrary_PreviousParticleEffect_m64E26B750D13C94BBA08E689744844E190550830(L_0, NULL);
		// if (PENameText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___PENameText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// PENameText.text = ParticleEffectsLibrary.GlobalAccess.GetCurrentPENameString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___PENameText_6;
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_4 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		String_t* L_5;
		L_5 = ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50(L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::SelectNextPE()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ParticleEffectsLibrary.GlobalAccess.NextParticleEffect();
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_0 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		ParticleEffectsLibrary_NextParticleEffect_mC2497E960308324CF6ED87F2248E5ABBBFAC372D(L_0, NULL);
		// if (PENameText != null)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___PENameText_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_002d;
		}
	}
	{
		// PENameText.text = ParticleEffectsLibrary.GlobalAccess.GetCurrentPENameString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___PENameText_6;
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_4 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		String_t* L_5;
		L_5 = ParticleEffectsLibrary_GetCurrentPENameString_m74111FB17F0434816215EACDE896C76173765A50(L_4, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
	}

IL_002d:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::SpawnCurrentParticleEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_SpawnCurrentParticleEffect_m2A1BB27F11451D24EE32BB3F30A8E9A3B007DDB5 (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Ray mouseRay = Camera.main.ScreenPointToRay(Input.mousePosition);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_2;
		L_2 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_0, L_1, NULL);
		// if (Physics.Raycast (mouseRay, out rayHit)) {
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_3 = (&__this->___rayHit_8);
		bool L_4;
		L_4 = Physics_Raycast_m07803863BB5A3896FA01061562532B21E1ED6D4A(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0031;
		}
	}
	{
		// ParticleEffectsLibrary.GlobalAccess.SpawnParticleEffect (rayHit.point);
		ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57* L_5 = ((ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_StaticFields*)il2cpp_codegen_static_fields_for(ParticleEffectsLibrary_t8C20BBF02959C886134EFB5E30D855D639885B57_il2cpp_TypeInfo_var))->___GlobalAccess_4;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_6 = (&__this->___rayHit_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_6, NULL);
		ParticleEffectsLibrary_SpawnParticleEffect_m245CE977A9E3D2A85EC1B9A96C559FC78E5A4F57(L_5, L_7, NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void UICanvasManager::UIButtonClick(ButtonTypes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager_UIButtonClick_m46983844912FADCFDDBA0455339B5E2162CB801C (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, int32_t ___buttonTypeClicked0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___buttonTypeClicked0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0009;
		}
	}
	{
		int32_t L_1 = ___buttonTypeClicked0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_0010;
		}
	}
	{
		return;
	}

IL_0009:
	{
		// SelectPreviousPE();
		UICanvasManager_SelectPreviousPE_mABAFDA327ADCC81AC8691CB70066BACB881D2781(__this, NULL);
		// break;
		return;
	}

IL_0010:
	{
		// SelectNextPE();
		UICanvasManager_SelectNextPE_m8D79E72664DD30A066DFC2A9CE024F5D568F2FC4(__this, NULL);
		// }
		return;
	}
}
// System.Void UICanvasManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UICanvasManager__ctor_mB927EAA45E53F674F466CFDF2205E5A29ED838DD (UICanvasManager_t1235F60DFCA28FAA0ED74D43873B10F00E8002FB* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AudioManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Awake_m8138BCED4D692C83C95626A1A09AB46EA5205569 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* V_0 = NULL;
	int32_t V_1 = 0;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_2 = NULL;
	{
		// if(instance==null){
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0 = ((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// instance=this;
		((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_6 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&((AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_StaticFields*)il2cpp_codegen_static_fields_for(AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_il2cpp_TypeInfo_var))->___instance_6), (void*)__this);
		goto IL_0021;
	}

IL_0015:
	{
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_2, NULL);
		// return;
		return;
	}

IL_0021:
	{
		// DontDestroyOnLoad(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_DontDestroyOnLoad_m303AA1C4DC810349F285B4809E426CBBA8F834F9(L_3, NULL);
		// foreach(Sound s in sounds){
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_4 = __this->___sounds_5;
		V_0 = L_4;
		V_1 = 0;
		goto IL_0094;
	}

IL_0037:
	{
		// foreach(Sound s in sounds){
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_5 = V_0;
		int32_t L_6 = V_1;
		int32_t L_7 = L_6;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_8 = (L_5)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// s.source=gameObject.AddComponent<AudioSource>();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_9 = V_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_11;
		L_11 = GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14(L_10, GameObject_AddComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m0E8EFDB9B3D8DF1ADE10C56D3168A9C1BA19BF14_RuntimeMethod_var);
		L_9->___source_5 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&L_9->___source_5), (void*)L_11);
		// s.source.clip=s.clip;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_12 = V_2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_13 = L_12->___source_5;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_14 = V_2;
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_15 = L_14->___clip_1;
		AudioSource_set_clip_mFF441895E274286C88D9C75ED5CA1B1B39528D70(L_13, L_15, NULL);
		// s.source.volume=s.volume;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_16 = V_2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_17 = L_16->___source_5;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_18 = V_2;
		float L_19 = L_18->___volume_2;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_17, L_19, NULL);
		// s.source.pitch=s.pitch;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_20 = V_2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_21 = L_20->___source_5;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_22 = V_2;
		float L_23 = L_22->___pitch_3;
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_21, L_23, NULL);
		// s.source.loop=s.loop;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_24 = V_2;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_25 = L_24->___source_5;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_26 = V_2;
		bool L_27 = L_26->___loop_4;
		AudioSource_set_loop_m834A590939D8456008C0F897FD80B0ECFFB7FE56(L_25, L_27, NULL);
		int32_t L_28 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0094:
	{
		// foreach(Sound s in sounds){
		int32_t L_29 = V_1;
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_30 = V_0;
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0037;
		}
	}
	{
		// }
		return;
	}
}
// System.Void AudioManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Start_m3C0FEAF19F58B6D28A9E6D815B3AAF94FEA21B69 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46D9C7FA571DE65777FF674D728A6316C6A26A7C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Play("Theme");
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(__this, _stringLiteral46D9C7FA571DE65777FF674D728A6316C6A26A7C, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_U3CPlayU3Eb__0_m42997281B26623BCB07B4F72655CD9223410940D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09AE944F2EF6BC951D18CDE8720230EE96ADB38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* V_0 = NULL;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* L_0 = (U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass5_0__ctor_m8C54CF0F0E5F074525DA04D415803917C3371E69(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* L_1 = V_0;
		String_t* L_2 = ___name0;
		L_1->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)L_2);
		// Sound s = Array.Find(sounds, sound => sound.name == name);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___sounds_5;
		U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass5_0_U3CPlayU3Eb__0_m42997281B26623BCB07B4F72655CD9223410940D_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		V_1 = L_6;
		// if(s == null)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_7 = V_1;
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogWarning("Sound: " + name + " not found!");
		U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* L_8 = V_0;
		String_t* L_9 = L_8->___name_0;
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral09AE944F2EF6BC951D18CDE8720230EE96ADB38D, L_9, _stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_10, NULL);
		// return;
		return;
	}

IL_0043:
	{
		// s.source.Play();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_11 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = L_11->___source_5;
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_12, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::Stop(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_Stop_m45D13BF030985CD03F88752B8CA92FFFCD0B11C3 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___name0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CStopU3Eb__0_m919DC8BAC637BF7E043398006EC6FB56362B3D23_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09AE944F2EF6BC951D18CDE8720230EE96ADB38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917* V_0 = NULL;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917* L_0 = (U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass6_0__ctor_m67ADEC061C6A1781C72DFC2A7AC2134C751AA940(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917* L_1 = V_0;
		String_t* L_2 = ___name0;
		L_1->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)L_2);
		// Sound s = Array.Find(sounds, sound => sound.name == name);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___sounds_5;
		U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CStopU3Eb__0_m919DC8BAC637BF7E043398006EC6FB56362B3D23_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		V_1 = L_6;
		// if(s == null)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_7 = V_1;
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogWarning("Sound: " + name + " not found!");
		U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917* L_8 = V_0;
		String_t* L_9 = L_8->___name_0;
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral09AE944F2EF6BC951D18CDE8720230EE96ADB38D, L_9, _stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_10, NULL);
		// return;
		return;
	}

IL_0043:
	{
		// s.source.Stop();
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_11 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = L_11->___source_5;
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_12, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::setVolume(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_setVolume_m6EB55D3C130FBA65E10134E9AD24899849A30601 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, String_t* ___name0, int32_t ___volume1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_U3CsetVolumeU3Eb__0_mF5ECD1405171E881BE942DFCBC65EB866439D800_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral09AE944F2EF6BC951D18CDE8720230EE96ADB38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2* V_0 = NULL;
	Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2* L_0 = (U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2_il2cpp_TypeInfo_var);
		U3CU3Ec__DisplayClass7_0__ctor_mE1303CB5114C4E9FBFCE8A99E5CAD205BDF1B572(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2* L_1 = V_0;
		String_t* L_2 = ___name0;
		L_1->___name_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___name_0), (void*)L_2);
		// Sound s = Array.Find(sounds, sound => sound.name == name);
		SoundU5BU5D_t72FB050B36D0242C25330F8F4AC115C91598A1F5* L_3 = __this->___sounds_5;
		U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2* L_4 = V_0;
		Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A* L_5 = (Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A*)il2cpp_codegen_object_new(Predicate_1_tCA7B47253C16D768A67CE2038792E40256D5327A_il2cpp_TypeInfo_var);
		Predicate_1__ctor_mD508F46C736E97AC65AEC65E413880D3C2A905BD(L_5, L_4, (intptr_t)((void*)U3CU3Ec__DisplayClass7_0_U3CsetVolumeU3Eb__0_mF5ECD1405171E881BE942DFCBC65EB866439D800_RuntimeMethod_var), NULL);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_6;
		L_6 = Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87(L_3, L_5, Array_Find_TisSound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0_mD3A41C4C52E64EEE0ED91D1995DDCA83047EDB87_RuntimeMethod_var);
		V_1 = L_6;
		// if(s == null)
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_7 = V_1;
		if (L_7)
		{
			goto IL_0043;
		}
	}
	{
		// Debug.LogWarning("Sound: " + name + " not found!");
		U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2* L_8 = V_0;
		String_t* L_9 = L_8->___name_0;
		String_t* L_10;
		L_10 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral09AE944F2EF6BC951D18CDE8720230EE96ADB38D, L_9, _stringLiteral7DE8C3C0A60A6ACECA32354A399EE2CC5274F926, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(L_10, NULL);
		// return;
		return;
	}

IL_0043:
	{
		// s.source.volume=volume;
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_11 = V_1;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_12 = L_11->___source_5;
		int32_t L_13 = ___volume1;
		AudioSource_set_volume_mD902BBDBBDE0E3C148609BF3C05096148E90F2C0(L_12, ((float)L_13), NULL);
		// }
		return;
	}
}
// System.Void AudioManager::mute(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_mute_m973DD576838A395B9B5601BDD54F499EAB963FB3 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, bool ___x0, const RuntimeMethod* method) 
{
	{
		// if(x){
		bool L_0 = ___x0;
		if (!L_0)
		{
			goto IL_000a;
		}
	}
	{
		// AudioListener.pause=true;
		AudioListener_set_pause_mE2C2B6C40696BEF96662114C695151943A14299E((bool)1, NULL);
		return;
	}

IL_000a:
	{
		// AudioListener.pause=false;
		AudioListener_set_pause_mE2C2B6C40696BEF96662114C695151943A14299E((bool)0, NULL);
		// }
		return;
	}
}
// System.Void AudioManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager__ctor_mA793A9DF6B975D03690B7C953972EFE41AE4D5E6 (AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void AudioManager/<>c__DisplayClass5_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass5_0__ctor_m8C54CF0F0E5F074525DA04D415803917C3371E69 (U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass5_0::<Play>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass5_0_U3CPlayU3Eb__0_m42997281B26623BCB07B4F72655CD9223410940D (U3CU3Ec__DisplayClass5_0_tDD85608198A296C2C97868D289F0F35ECD9FB367* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___sound0, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(sounds, sound => sound.name == name);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___sound0;
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
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
// System.Void AudioManager/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_m67ADEC061C6A1781C72DFC2A7AC2134C751AA940 (U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass6_0::<Stop>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass6_0_U3CStopU3Eb__0_m919DC8BAC637BF7E043398006EC6FB56362B3D23 (U3CU3Ec__DisplayClass6_0_t181AAFA51155A93676051B979945909777364917* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___sound0, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(sounds, sound => sound.name == name);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___sound0;
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
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
// System.Void AudioManager/<>c__DisplayClass7_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass7_0__ctor_mE1303CB5114C4E9FBFCE8A99E5CAD205BDF1B572 (U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean AudioManager/<>c__DisplayClass7_0::<setVolume>b__0(Sound)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass7_0_U3CsetVolumeU3Eb__0_mF5ECD1405171E881BE942DFCBC65EB866439D800 (U3CU3Ec__DisplayClass7_0_t20AE7DED8DD71264D66F1E31288F57F7077884C2* __this, Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* ___sound0, const RuntimeMethod* method) 
{
	{
		// Sound s = Array.Find(sounds, sound => sound.name == name);
		Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* L_0 = ___sound0;
		String_t* L_1 = L_0->___name_0;
		String_t* L_2 = __this->___name_0;
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, L_2, NULL);
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
// System.Void CollCube::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollCube_Start_m5AEF1EE009BF047818E92778818C0DBF8A7A0422 (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, const RuntimeMethod* method) 
{
	{
		// collEd=false;
		__this->___collEd_5 = (bool)0;
		// }
		return;
	}
}
// System.Void CollCube::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollCube_Update_mF5518F92410AEF9FAF56E34BC56F0811981E5E75 (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(transform.parent!=null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_0, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// transform.localPosition=new Vector3(0,transform.localPosition.y,0);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_4, NULL);
		float L_6 = L_5.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_7), (0.0f), L_6, (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_3, L_7, NULL);
	}

IL_003d:
	{
		// if(transform.position.y>1.1 && transform.parent==null){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		float L_10 = L_9.___y_3;
		if ((!(((double)((double)L_10)) > ((double)(1.1000000000000001)))))
		{
			goto IL_0084;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_11, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_13)
		{
			goto IL_0084;
		}
	}
	{
		// GetComponent<Rigidbody>().useGravity=true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_14;
		L_14 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_14, (bool)1, NULL);
		// GetComponent<Rigidbody>().isKinematic=false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_15;
		L_15 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_15, (bool)0, NULL);
	}

IL_0084:
	{
		// if(transform.position.y<0.9 && transform.parent==null){
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		float L_18 = L_17.___y_3;
		if ((!(((double)((double)L_18)) < ((double)(0.90000000000000002)))))
		{
			goto IL_00cb;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_20, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_21)
		{
			goto IL_00cb;
		}
	}
	{
		// GetComponent<Rigidbody>().useGravity=false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_22;
		L_22 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_22, (bool)0, NULL);
		// GetComponent<Rigidbody>().isKinematic=true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_23;
		L_23 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_23, (bool)1, NULL);
	}

IL_00cb:
	{
		// }
		return;
	}
}
// System.Void CollCube::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollCube_OnCollisionEnter_m423D58281FF865CE5818218977F2B8E21D0513E2 (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF1139BB3AE79C001CF6F5F90BCA36DDCE803947C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag=="set"){
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, NULL);
		if (!L_3)
		{
			goto IL_0087;
		}
	}
	{
		// other.gameObject.tag="c";
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		GameObject_set_tag_m0A41528AFD8C83E1CEC5D769921159897CDD2B24(L_5, _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		// FindObjectOfType<AudioManager>().Play("lost");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_6;
		L_6 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_6, _stringLiteralF1139BB3AE79C001CF6F5F90BCA36DDCE803947C, NULL);
		// collector.decreeseHeight();
		collector_tEBF92C62743EEF3431C1272AAD3719963B853D32* L_7 = __this->___collector_7;
		collector_decreeseHeight_mB4994DAF97E2DEF62F52575EA7DA09FD8DBC48A9(L_7, NULL);
		// transform.parent=null;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_8, (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)NULL, NULL);
		// GetComponent<BoxCollider>().enabled=true;
		BoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23* L_9;
		L_9 = Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7(__this, Component_GetComponent_TisBoxCollider_tFA5D239388334D6DE0B8FFDAD6825C5B03786E23_m59698092F1230C6FB7F40D0F58F643A931A732D7_RuntimeMethod_var);
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_9, (bool)1, NULL);
		// GetComponent<Rigidbody>().useGravity=false;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_10;
		L_10 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Rigidbody_set_useGravity_m1B1B22E093F9DC92D7BEEBBE6B02642B3B6C4389(L_10, (bool)0, NULL);
		// GetComponent<Rigidbody>().isKinematic=true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_11;
		L_11 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Rigidbody_set_isKinematic_m6C3FD3EA358DADA3B191F2449CF1C4F8B22695ED(L_11, (bool)1, NULL);
		// gameManager.CollPos();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_12 = __this->___gameManager_4;
		GameManager_CollPos_m41BF9EC4D27DDFA34E6A2A3DADBE26284D3A0074(L_12, NULL);
		// gameManager.multierMinus();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_13 = __this->___gameManager_4;
		GameManager_multierMinus_mE5BE53285C769A52A6C1A7EDE5075C74B77C3C2F(L_13, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Boolean CollCube::getCollEd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CollCube_getCollEd_mF79F309D9726A2EFDCAE9380F6224076ED446B4F (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, const RuntimeMethod* method) 
{
	{
		// return collEd;
		bool L_0 = __this->___collEd_5;
		return L_0;
	}
}
// System.Void CollCube::doColl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollCube_doColl_m6BA57EF3F6F1F4E2E2C9333406970869D74C7C4C (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, const RuntimeMethod* method) 
{
	{
		// collEd=true;
		__this->___collEd_5 = (bool)1;
		// }
		return;
	}
}
// System.Void CollCube::setIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollCube_setIndex_mEFDC1A5BA172960717954873981D0FAA9FA1202C (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// this.index=index;
		int32_t L_0 = ___index0;
		__this->___index_6 = L_0;
		// }
		return;
	}
}
// System.Void CollCube::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CollCube__ctor_mB662061DB308204F0D4053D77267B53E8D9B6F4C (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void collector::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collector_Start_m65276C48A63A8D217822776CE6A32C4A26375B60 (collector_tEBF92C62743EEF3431C1272AAD3719963B853D32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEA1C1FC4991BEA4C5C3473788758C174B98177A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainCube=GameObject.Find("MainBox");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteralBEA1C1FC4991BEA4C5C3473788758C174B98177A, NULL);
		__this->___mainCube_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCube_4), (void*)L_0);
		// mainCube.transform.position=new Vector3(transform.position.x, height+1, transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___mainCube_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_1, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		float L_5 = L_4.___x_2;
		int32_t L_6 = __this->___height_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_10), L_5, ((float)((int32_t)il2cpp_codegen_add(L_6, 1))), L_9, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_2, L_10, NULL);
		// this.transform.localPosition=new Vector3(0,-height,1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_12 = __this->___height_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		memset((&L_13), 0, sizeof(L_13));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_13), (0.0f), ((float)((-L_12))), (1.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_11, L_13, NULL);
		// }
		return;
	}
}
// System.Void collector::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collector_Update_m9B1F631EA62C91D3A21FF338961B49E523A441E7 (collector_tEBF92C62743EEF3431C1272AAD3719963B853D32* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Input.GetKeyDown(KeyCode.RightControl) || Input.GetKeyDown(KeyCode.R)){
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)305), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)114), NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}

IL_0015:
	{
		// Scene scene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_2;
		// SceneManager.LoadScene(scene.name);
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_3, NULL);
	}

IL_0027:
	{
		// if(Input.GetKeyDown(KeyCode.Escape)){
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)27), NULL);
		if (!L_4)
		{
			goto IL_003a;
		}
	}
	{
		// SceneManager.LoadScene("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
	}

IL_003a:
	{
		// gameManager.CollPos();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_5 = __this->___gameManager_6;
		GameManager_CollPos_m41BF9EC4D27DDFA34E6A2A3DADBE26284D3A0074(L_5, NULL);
		// }
		return;
	}
}
// System.Void collector::decreeseHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collector_decreeseHeight_mB4994DAF97E2DEF62F52575EA7DA09FD8DBC48A9 (collector_tEBF92C62743EEF3431C1272AAD3719963B853D32* __this, const RuntimeMethod* method) 
{
	{
		// height--;
		int32_t L_0 = __this->___height_7;
		__this->___height_7 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// this.transform.localPosition=new Vector3(0,-height,1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_2 = __this->___height_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), (0.0f), ((float)((-L_2))), (1.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_1, L_3, NULL);
		// }
		return;
	}
}
// System.Void collector::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collector_OnCollisionEnter_mED3A8155914DF1FCFC004E8B5FCFB1BC490E4204 (collector_tEBF92C62743EEF3431C1272AAD3719963B853D32* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E_mF6DBD7C4413996E0BC96EEE8842CD0CC2046C092_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AD38741C1B1C0E0AF2D15477229F01D1C220477);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F9C7E885FC8CB8756A11F639091D57668960C69);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral688401970468562182295CAB9BFDDF1595831564);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD884F7688123CE5EAB301152D58085806E28FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD034A94E67370F92465B64938096D26AAEB067EF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1F4C7874D8C5796DE4C135A07BAAC06BCFB2B01);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("hit");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral9CEB4D81FE1382FF120AEE05E403D6F7BCE690D2, NULL);
		// if (other.gameObject.tag=="END"){
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral1AD38741C1B1C0E0AF2D15477229F01D1C220477, NULL);
		if (!L_3)
		{
			goto IL_0047;
		}
	}
	{
		// Scene scene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		// SceneManager.LoadScene("Credits");
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795, NULL);
		// PlayerPrefs.GetInt("failed", 0);
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralABD884F7688123CE5EAB301152D58085806E28FD, 0, NULL);
		// Debug.Log("hit to end");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral2F9C7E885FC8CB8756A11F639091D57668960C69, NULL);
	}

IL_0047:
	{
		// if (other.gameObject.tag == "aaa" && other.gameObject.GetComponent<CollCube>().getCollEd()==false){
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_6 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_6, NULL);
		String_t* L_8;
		L_8 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_7, NULL);
		bool L_9;
		L_9 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_8, _stringLiteralD034A94E67370F92465B64938096D26AAEB067EF, NULL);
		if (!L_9)
		{
			goto IL_0194;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_10 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11;
		L_11 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_10, NULL);
		CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* L_12;
		L_12 = GameObject_GetComponent_TisCollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E_mF6DBD7C4413996E0BC96EEE8842CD0CC2046C092(L_11, GameObject_GetComponent_TisCollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E_mF6DBD7C4413996E0BC96EEE8842CD0CC2046C092_RuntimeMethod_var);
		bool L_13;
		L_13 = CollCube_getCollEd_mF79F309D9726A2EFDCAE9380F6224076ED446B4F_inline(L_12, NULL);
		if (L_13)
		{
			goto IL_0194;
		}
	}
	{
		// Debug.Log("hit to box");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD1F4C7874D8C5796DE4C135A07BAAC06BCFB2B01, NULL);
		// height+=1;
		int32_t L_14 = __this->___height_7;
		__this->___height_7 = ((int32_t)il2cpp_codegen_add(L_14, 1));
		// gameManager.CollPos();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_15 = __this->___gameManager_6;
		GameManager_CollPos_m41BF9EC4D27DDFA34E6A2A3DADBE26284D3A0074(L_15, NULL);
		// gameManager.multierPlus();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_16 = __this->___gameManager_6;
		GameManager_multierPlus_mFF48EDA8552329A89122F6B00DDDA4DB89067F17(L_16, NULL);
		// FindObjectOfType<AudioManager>().Play("collect");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_17;
		L_17 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_17, _stringLiteral688401970468562182295CAB9BFDDF1595831564, NULL);
		// Instantiate(pickupEffect,transform.position, rotation: Quaternion.Euler(targetAngle));
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___pickupEffect_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___targetAngle_8;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22;
		L_22 = Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline(L_21, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_18, L_20, L_22, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// mainCube.transform.position=new Vector3(mainCube.transform.position.x, height+1, mainCube.transform.position.z);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___mainCube_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_24, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___mainCube_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_27, NULL);
		float L_29 = L_28.___x_2;
		int32_t L_30 = __this->___height_7;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___mainCube_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_32, NULL);
		float L_34 = L_33.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_29, ((float)((int32_t)il2cpp_codegen_add(L_30, 1))), L_34, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_25, L_35, NULL);
		// other.gameObject.transform.parent=mainCube.transform;
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_36 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37;
		L_37 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_36, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_37, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___mainCube_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_39, NULL);
		Transform_set_parent_m9BD5E563B539DD5BEC342736B03F97B38A243234(L_38, L_40, NULL);
		// other.transform.localPosition=new Vector3(0,other.transform.localPosition.y,0);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_41 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_41, NULL);
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_43 = ___other0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_44;
		L_44 = Collision_get_transform_mA5D135D9F696635EA7A0D2184CEF499427A6D0F6(L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Transform_get_localPosition_mA9C86B990DF0685EA1061A120218993FDCC60A95(L_44, NULL);
		float L_46 = L_45.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		memset((&L_47), 0, sizeof(L_47));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_47), (0.0f), L_46, (0.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_42, L_47, NULL);
		// this.transform.localPosition=new Vector3(0,-height,1);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		int32_t L_49 = __this->___height_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), (0.0f), ((float)((-L_49))), (1.0f), /*hidden argument*/NULL);
		Transform_set_localPosition_mDE1C997F7D79C0885210B7732B4BA50EE7D73134(L_48, L_50, NULL);
		// other.gameObject.GetComponent<CollCube>().doColl();
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_51 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52;
		L_52 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_51, NULL);
		CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* L_53;
		L_53 = GameObject_GetComponent_TisCollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E_mF6DBD7C4413996E0BC96EEE8842CD0CC2046C092(L_52, GameObject_GetComponent_TisCollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E_mF6DBD7C4413996E0BC96EEE8842CD0CC2046C092_RuntimeMethod_var);
		CollCube_doColl_m6BA57EF3F6F1F4E2E2C9333406970869D74C7C4C(L_53, NULL);
	}

IL_0194:
	{
		// }
		return;
	}
}
// System.Void collector::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void collector__ctor_m6F0C2E0714A4C9744C560D4132611600CA014594 (collector_tEBF92C62743EEF3431C1272AAD3719963B853D32* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 targetAngle = new Vector3(0f, 360f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (360.0f), (0.0f), /*hidden argument*/NULL);
		__this->___targetAngle_8 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Credits::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits_Start_m6DFBCEA32F2C71A49720DF3F5D928326CE483C26 (Credits_tBBC07C3828896827C56E49CF1E9818E15A428A99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37D044F25CAB14BA122FD122908B282CBE7BD4F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD884F7688123CE5EAB301152D58085806E28FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE69D94930F093E3C8456CDD8FE7C6901E4EE9F25);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (PlayerPrefs.GetInt("failed") == 1)
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralABD884F7688123CE5EAB301152D58085806E28FD, NULL);
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_002e;
		}
	}
	{
		// title.text = "You Failed!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___title_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralE69D94930F093E3C8456CDD8FE7C6901E4EE9F25);
		// title.color= Color.red;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___title_6;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline(NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		return;
	}

IL_002e:
	{
		// title.text = "Thanks for PLAYING!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___title_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral37D044F25CAB14BA122FD122908B282CBE7BD4F0);
		// title.color= new Color32(50,50, 50, 255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___title_6;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline((&L_6), (uint8_t)((int32_t)50), (uint8_t)((int32_t)50), (uint8_t)((int32_t)50), (uint8_t)((int32_t)255), /*hidden argument*/NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline(L_6, NULL);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_7);
		// }
		return;
	}
}
// System.Void Credits::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits_Update_mEA2A7F98723F10360C1C5C0D6868DEC0DBCD81E1 (Credits_tBBC07C3828896827C56E49CF1E9818E15A428A99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(Input.GetKeyDown(KeyCode.RightControl) || Input.GetKeyDown(KeyCode.R)){
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)305), NULL);
		if (L_0)
		{
			goto IL_0015;
		}
	}
	{
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)114), NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}

IL_0015:
	{
		// Scene scene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_2;
		L_2 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_2;
		// SceneManager.LoadScene(scene.name);
		String_t* L_3;
		L_3 = Scene_get_name_m3C818DFA663E159274DAD823B780C7616C5E2A8C((&V_0), NULL);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(L_3, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void Credits::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits_Quit_m5851973055E1123CDF739AB70FEA951B9CBAF12E (Credits_tBBC07C3828896827C56E49CF1E9818E15A428A99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF398C620EA88F4070BE8AC9916E05DE1E9EAF174);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Quit!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF398C620EA88F4070BE8AC9916E05DE1E9EAF174, NULL);
		// Application.Quit();
		Application_Quit_m965C6D4CA85A24DD95B347D22837074F19C58134(NULL);
		// }
		return;
	}
}
// System.Void Credits::playAgain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits_playAgain_mBDE7F0E7C17145315028C53943104F39663EA8D4 (Credits_tBBC07C3828896827C56E49CF1E9818E15A428A99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD884F7688123CE5EAB301152D58085806E28FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6D97D00609AFACA4B87C40A156E004B7493ECD0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Play Again!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralF6D97D00609AFACA4B87C40A156E004B7493ECD0, NULL);
		// SceneManager.LoadScene("Menu");
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral0C10E47675493434D04CD8025C8303AF94F7BA5A, NULL);
		// PlayerPrefs.SetInt("failed", 0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralABD884F7688123CE5EAB301152D58085806E28FD, 0, NULL);
		// }
		return;
	}
}
// System.Void Credits::resetHS()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits_resetHS_m091679213AA13F3D22C6C9B5D813C3BD1E3F8CAC (Credits_tBBC07C3828896827C56E49CF1E9818E15A428A99* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD1A5DD4236D1A92FAEAD17BCF8C6BD3C5BFB9D05);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// Debug.Log("Reset High Score!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralD1A5DD4236D1A92FAEAD17BCF8C6BD3C5BFB9D05, NULL);
		// PlayerPrefs.SetInt("HighScore",0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, NULL);
		// HS.GetComponent<UnityEngine.UI.Text>().text = PlayerPrefs.GetInt("HighScore", 0).ToString();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___HS_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F(L_0, GameObject_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mBE6B722369FF149589D3D42A6A8435A9C5045B3F_RuntimeMethod_var);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, 0, NULL);
		V_0 = L_2;
		String_t* L_3;
		L_3 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// NEW.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___NEW_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Credits::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Credits__ctor_m80C9B62DAD95B2EB09FA8515CD6C7188398060AD (Credits_tBBC07C3828896827C56E49CF1E9818E15A428A99* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void fallowPlayer::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fallowPlayer_FixedUpdate_m67A6BBAD94A292F57CD9464D1158EB96C5B67F10 (fallowPlayer_t62D393B163E6F79B12E58BF2965314132C029248* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Vector3 desiredPosition = Player.position + offset;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___Player_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___offset_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_1, L_2, NULL);
		V_0 = L_3;
		// desiredPosition.y=10;
		(&V_0)->___y_3 = (10.0f);
		// Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, smoothSpeed);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = V_0;
		float L_7 = __this->___smoothSpeed_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_5, L_6, L_7, NULL);
		V_1 = L_8;
		// transform.position=smoothedPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_1;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void fallowPlayer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void fallowPlayer__ctor_mD15EBE44BD1D7829F51D8DD5B8F6C8C12D8B2C9C (fallowPlayer_t62D393B163E6F79B12E58BF2965314132C029248* __this, const RuntimeMethod* method) 
{
	{
		// public float smoothSpeed=0.250f;
		__this->___smoothSpeed_5 = (0.25f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m87A71D65F3171A58DBDDBFB03832ADA65643D0E2 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral46D9C7FA571DE65777FF674D728A6316C6A26A7C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE5BF181784DF133F54423263E2A279227E7C299);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// PlayerPrefs.SetInt("multier", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, 1, NULL);
		// PlayerPrefs.SetInt("score", 0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, NULL);
		// multier.text = PlayerPrefs.GetInt("multier", 1).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___multier_4;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, 1, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// score.text = PlayerPrefs.GetInt("score", 0).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___score_5;
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, NULL);
		V_0 = L_4;
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// FindObjectOfType<AudioManager>().setVolume("Theme", PlayerPrefs.GetInt("music"));
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_6;
		L_6 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F, NULL);
		AudioManager_setVolume_m6EB55D3C130FBA65E10134E9AD24899849A30601(L_6, _stringLiteral46D9C7FA571DE65777FF674D728A6316C6A26A7C, L_7, NULL);
		// if(PlayerPrefs.GetInt("volume")==1){
		int32_t L_8;
		L_8 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B, NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)1))))
		{
			goto IL_0085;
		}
	}
	{
		// FindObjectOfType<AudioManager>().mute(false);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_9;
		L_9 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		AudioManager_mute_m973DD576838A395B9B5601BDD54F499EAB963FB3(L_9, (bool)0, NULL);
		goto IL_0090;
	}

IL_0085:
	{
		// FindObjectOfType<AudioManager>().mute(true);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_10;
		L_10 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		AudioManager_mute_m973DD576838A395B9B5601BDD54F499EAB963FB3(L_10, (bool)1, NULL);
	}

IL_0090:
	{
		// Debug.Log("gamemanager started");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralDE5BF181784DF133F54423263E2A279227E7C299, NULL);
		// }
		return;
	}
}
// System.Void GameManager::scorePlus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_scorePlus_m3BAFCD19186FBB6BFFC47E853615B4D70A89F7CF (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// score.text = PlayerPrefs.GetInt("score", 0).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___score_5;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, NULL);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// StartCoroutine(justScoreIn(score));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___score_5;
		RuntimeObject* L_4;
		L_4 = GameManager_justScoreIn_m731D9BF9D50074B3759C899F21F346523A22F3C4(__this, L_3, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void GameManager::multierPlus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_multierPlus_mFF48EDA8552329A89122F6B00DDDA4DB89067F17 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE95278C133C16A058F9D4C519E94B186E62CAB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// multierValue=PlayerPrefs.GetInt("multier");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, NULL);
		__this->___multierValue_7 = L_0;
		// PlayerPrefs.SetInt("multier",multierValue+1);
		int32_t L_1 = __this->___multierValue_7;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, ((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// multierValue=PlayerPrefs.GetInt("multier");
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, NULL);
		__this->___multierValue_7 = L_2;
		// multier.text = "X " + multierValue.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___multier_4;
		int32_t* L_4 = (&__this->___multierValue_7);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBE95278C133C16A058F9D4C519E94B186E62CAB1, L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// StartCoroutine(scoreIn(multier));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___multier_4;
		RuntimeObject* L_8;
		L_8 = GameManager_scoreIn_mDEC3E7AEC4048C9540BCF462287B81FBF318D4E1(__this, L_7, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void GameManager::multierMinus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_multierMinus_mE5BE53285C769A52A6C1A7EDE5075C74B77C3C2F (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE95278C133C16A058F9D4C519E94B186E62CAB1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// multierValue=PlayerPrefs.GetInt("multier");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, NULL);
		__this->___multierValue_7 = L_0;
		// PlayerPrefs.SetInt("multier",multierValue-1);
		int32_t L_1 = __this->___multierValue_7;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, ((int32_t)il2cpp_codegen_subtract(L_1, 1)), NULL);
		// multierValue=PlayerPrefs.GetInt("multier");
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, NULL);
		__this->___multierValue_7 = L_2;
		// multier.text = "X " + multierValue.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___multier_4;
		int32_t* L_4 = (&__this->___multierValue_7);
		String_t* L_5;
		L_5 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_4, NULL);
		String_t* L_6;
		L_6 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteralBE95278C133C16A058F9D4C519E94B186E62CAB1, L_5, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_6);
		// StartCoroutine(scoreIn(multier));
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___multier_4;
		RuntimeObject* L_8;
		L_8 = GameManager_scoreIn_mDEC3E7AEC4048C9540BCF462287B81FBF318D4E1(__this, L_7, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_9;
		L_9 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_8, NULL);
		// }
		return;
	}
}
// System.Void GameManager::CollPos()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_CollPos_m41BF9EC4D27DDFA34E6A2A3DADBE26284D3A0074 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA76F4AAE4B7821A200351EDC2EFB8D95A7ECBB79);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("pos",CollectorTrans.position.y);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___CollectorTrans_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_0, NULL);
		float L_2 = L_1.___y_3;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteralA76F4AAE4B7821A200351EDC2EFB8D95A7ECBB79, L_2, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameManager::scoreIn(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_scoreIn_mDEC3E7AEC4048C9540BCF462287B81FBF318D4E1 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* L_0 = (U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124*)il2cpp_codegen_object_new(U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124_il2cpp_TypeInfo_var);
		U3CscoreInU3Ed__10__ctor_m5AA82BC6A9FDB6FBBF968AADE29EAE2B17D1511E(L_0, 0, NULL);
		U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* L_1 = L_0;
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* L_2 = L_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = ___a0;
		L_2->___a_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___a_2), (void*)L_3);
		return L_2;
	}
}
// System.Collections.IEnumerator GameManager::justScoreIn(UnityEngine.UI.Text)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameManager_justScoreIn_m731D9BF9D50074B3759C899F21F346523A22F3C4 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* L_0 = (U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC*)il2cpp_codegen_object_new(U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC_il2cpp_TypeInfo_var);
		U3CjustScoreInU3Ed__11__ctor_m342E1B2C00B148869B9F64E14D822AFC722CBDEF(L_0, 0, NULL);
		U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* L_1 = L_0;
		L_1->___U3CU3E4__this_3 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_3), (void*)__this);
		U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* L_2 = L_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = ___a0;
		L_2->___a_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&L_2->___a_2), (void*)L_3);
		return L_2;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mF453CED520617BFB65C52405A964E06CF17DB368 (GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* __this, const RuntimeMethod* method) 
{
	{
		// public float animationDuration=0.001f;
		__this->___animationDuration_8 = (0.00100000005f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameManager/<scoreIn>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CscoreInU3Ed__10__ctor_m5AA82BC6A9FDB6FBBF968AADE29EAE2B17D1511E (U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<scoreIn>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CscoreInU3Ed__10_System_IDisposable_Dispose_m77DF7829BA88650D404756E87E6AAAB315EFDC59 (U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<scoreIn>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CscoreInU3Ed__10_MoveNext_m165A06C386C2DCF4ABDF9247E1B5B0DA2B13DFC1 (U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_3;
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
				goto IL_0064;
			}
			case 2:
			{
				goto IL_00d6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for(int i=0; i<8;i++){
		__this->___U3CiU3E5__2_4 = 0;
		goto IL_0099;
	}

IL_0032:
	{
		// a.fontSize=a.fontSize+3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___a_2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___a_2;
		int32_t L_5;
		L_5 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_4, NULL);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_3, ((int32_t)il2cpp_codegen_add(L_5, 3)), NULL);
		// yield return new WaitForSeconds(animationDuration);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		float L_7 = L_6->___animationDuration_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0064:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(a.fontSize>96){
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___a_2;
		int32_t L_10;
		L_10 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)96))))
		{
			goto IL_0089;
		}
	}
	{
		// a.fontSize=96;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___a_2;
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_11, ((int32_t)96), NULL);
		// break;
		goto IL_00dd;
	}

IL_0089:
	{
		// for(int i=0; i<8;i++){
		int32_t L_12 = __this->___U3CiU3E5__2_4;
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->___U3CiU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0099:
	{
		// for(int i=0; i<8;i++){
		int32_t L_14 = __this->___U3CiU3E5__2_4;
		if ((((int32_t)L_14) < ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00dd;
	}

IL_00a4:
	{
		// a.fontSize=a.fontSize-3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___a_2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___a_2;
		int32_t L_17;
		L_17 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_16, NULL);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 3)), NULL);
		// yield return new WaitForSeconds(animationDuration);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		float L_19 = L_18->___animationDuration_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, L_19, NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00dd:
	{
		// while(a.fontSize>40){
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___a_2;
		int32_t L_22;
		L_22 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_21, NULL);
		if ((((int32_t)L_22) > ((int32_t)((int32_t)40))))
		{
			goto IL_00a4;
		}
	}
	{
		// a.fontSize=40;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___a_2;
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_23, ((int32_t)40), NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<scoreIn>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CscoreInU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m29383791F7B108ECB06120954EBE754A16502CAA (U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<scoreIn>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CscoreInU3Ed__10_System_Collections_IEnumerator_Reset_m22C6A36C1EF51D482407715FC26255A45FD0A4BD (U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CscoreInU3Ed__10_System_Collections_IEnumerator_Reset_m22C6A36C1EF51D482407715FC26255A45FD0A4BD_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<scoreIn>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CscoreInU3Ed__10_System_Collections_IEnumerator_get_Current_mF730F45D5649A1395A43125011A14D666A8DB5C6 (U3CscoreInU3Ed__10_t981FF8B6353355801D2BBF348E10D14E902E9124* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GameManager/<justScoreIn>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CjustScoreInU3Ed__11__ctor_m342E1B2C00B148869B9F64E14D822AFC722CBDEF (U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameManager/<justScoreIn>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CjustScoreInU3Ed__11_System_IDisposable_Dispose_m69F9A82406DB32B2ECC26F33D36200F31C3B6909 (U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameManager/<justScoreIn>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CjustScoreInU3Ed__11_MoveNext_mEF73D737D3FE7323A6615E28A2ED76A5E4D579B9 (U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_1 = __this->___U3CU3E4__this_3;
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
				goto IL_0064;
			}
			case 2:
			{
				goto IL_00d6;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// for(int i=0; i<8;i++){
		__this->___U3CiU3E5__2_4 = 0;
		goto IL_0099;
	}

IL_0032:
	{
		// a.fontSize=a.fontSize+3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___a_2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___a_2;
		int32_t L_5;
		L_5 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_4, NULL);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_3, ((int32_t)il2cpp_codegen_add(L_5, 3)), NULL);
		// yield return new WaitForSeconds(animationDuration);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_6 = V_1;
		float L_7 = L_6->___animationDuration_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_8 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_8, L_7, NULL);
		__this->___U3CU3E2__current_1 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_8);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0064:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(a.fontSize>96){
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___a_2;
		int32_t L_10;
		L_10 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_9, NULL);
		if ((((int32_t)L_10) <= ((int32_t)((int32_t)96))))
		{
			goto IL_0089;
		}
	}
	{
		// a.fontSize=96;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___a_2;
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_11, ((int32_t)96), NULL);
		// break;
		goto IL_00dd;
	}

IL_0089:
	{
		// for(int i=0; i<8;i++){
		int32_t L_12 = __this->___U3CiU3E5__2_4;
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->___U3CiU3E5__2_4 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_0099:
	{
		// for(int i=0; i<8;i++){
		int32_t L_14 = __this->___U3CiU3E5__2_4;
		if ((((int32_t)L_14) < ((int32_t)8)))
		{
			goto IL_0032;
		}
	}
	{
		goto IL_00dd;
	}

IL_00a4:
	{
		// a.fontSize=a.fontSize-3;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___a_2;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___a_2;
		int32_t L_17;
		L_17 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_16, NULL);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_15, ((int32_t)il2cpp_codegen_subtract(L_17, 3)), NULL);
		// yield return new WaitForSeconds(animationDuration);
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_18 = V_1;
		float L_19 = L_18->___animationDuration_8;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_20 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_20, L_19, NULL);
		__this->___U3CU3E2__current_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_20);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_00d6:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_00dd:
	{
		// while(a.fontSize>40){
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___a_2;
		int32_t L_22;
		L_22 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_21, NULL);
		if ((((int32_t)L_22) > ((int32_t)((int32_t)40))))
		{
			goto IL_00a4;
		}
	}
	{
		// a.fontSize=40;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_23 = __this->___a_2;
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_23, ((int32_t)40), NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameManager/<justScoreIn>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CjustScoreInU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFB95E77A3EC1E1AFF2765E2EB892F2B0DD6CFF0F (U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameManager/<justScoreIn>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CjustScoreInU3Ed__11_System_Collections_IEnumerator_Reset_mD4720C592A4D9161155EB202B85F1C366517F9A8 (U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CjustScoreInU3Ed__11_System_Collections_IEnumerator_Reset_mD4720C592A4D9161155EB202B85F1C366517F9A8_RuntimeMethod_var)));
	}
}
// System.Object GameManager/<justScoreIn>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CjustScoreInU3Ed__11_System_Collections_IEnumerator_get_Current_mEA920945EC76886E4377BBD45E5049F8F7679EDF (U3CjustScoreInU3Ed__11_tCF31398CB20BD508918FBC08A0A59BCA151E0FBC* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void getCoin::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void getCoin_OnCollisionEnter_m7B49AD4C89B6DA3B4C434B49181CDBBF4268A2D2 (getCoin_t4353487B8BE0BCC8B5ADDC8614F50A14714F4CF3* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD034A94E67370F92465B64938096D26AAEB067EF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(other.gameObject.tag=="main" || other.gameObject.tag=="aaa" && collEd==false){
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral4F2993C30C434C5F8BA708B372A8D4AC4A165185, NULL);
		if (L_3)
		{
			goto IL_0036;
		}
	}
	{
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_4 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_4, NULL);
		String_t* L_6;
		L_6 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_5, NULL);
		bool L_7;
		L_7 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_6, _stringLiteralD034A94E67370F92465B64938096D26AAEB067EF, NULL);
		if (!L_7)
		{
			goto IL_006f;
		}
	}
	{
		bool L_8 = __this->___collEd_6;
		if (L_8)
		{
			goto IL_006f;
		}
	}

IL_0036:
	{
		// PlayerPrefs.SetInt("score", PlayerPrefs.GetInt("score", 0)+(PlayerPrefs.GetInt("multier", 1)));
		int32_t L_9;
		L_9 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, NULL);
		int32_t L_10;
		L_10 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, 1, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, ((int32_t)il2cpp_codegen_add(L_9, L_10)), NULL);
		// pickCoin();
		getCoin_pickCoin_m03884EC416127174D62DB998FD0D6DC0E9FA48D9(__this, NULL);
		// gameManager.scorePlus();
		GameManager_tFE129A0017AF5BBD30FDCD4403B9CCEAE064C6B6* L_11 = __this->___gameManager_5;
		GameManager_scorePlus_m3BAFCD19186FBB6BFFC47E853615B4D70A89F7CF(L_11, NULL);
		// collEd=true;
		__this->___collEd_6 = (bool)1;
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void getCoin::pickCoin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void getCoin_pickCoin_m03884EC416127174D62DB998FD0D6DC0E9FA48D9 (getCoin_t4353487B8BE0BCC8B5ADDC8614F50A14714F4CF3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32C7705BFA8480B832E938984F70BC2052DF961B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral45C5C5B5000E9795C907C03B801CCFF840649D4E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Coin+1");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral32C7705BFA8480B832E938984F70BC2052DF961B, NULL);
		// FindObjectOfType<AudioManager>().Play("getCoin");
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		AudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B* L_0;
		L_0 = Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538(Object_FindObjectOfType_TisAudioManager_t4BE66A4A0E184D85AF74C37BC93BFBEC52953C7B_mCC0D0DA78E4CF17310F610815EF121FAB87E2538_RuntimeMethod_var);
		AudioManager_Play_mB69D5512DD0ECB0B853CD681D2282DC78844DE4F(L_0, _stringLiteral45C5C5B5000E9795C907C03B801CCFF840649D4E, NULL);
		// Instantiate(pickupEffect,transform.position,transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pickupEffect_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2;
		L_2 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_4, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_1, L_3, L_5, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(gameObject);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_7, NULL);
		// }
		return;
	}
}
// System.Void getCoin::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void getCoin__ctor_m765C4834969E8F9AB3445CAF28CDD9768C859181 (getCoin_t4353487B8BE0BCC8B5ADDC8614F50A14714F4CF3* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D14CCF197D66A68CD4697D1500796E119D99CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C359D59CA0AE83DF650E859BA9A29E6A13EB1D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65E4C9869FFDA37EE1A18A807CF2E45B7F66CDFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6933499863734D9DA2A66251C6C993DA6A92CCB7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// fwSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("forwardForce",9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___fwSlider_8;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_1;
		L_1 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_0, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		float L_2;
		L_2 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral65E4C9869FFDA37EE1A18A807CF2E45B7F66CDFC, (9.0f), NULL);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_1, L_2);
		// HrSlider.GetComponent<Slider>().value = PlayerPrefs.GetFloat("horizontalForce",7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___HrSlider_9;
		Slider_t87EA570E3D6556CABF57456C2F3873FFD86E652F* L_4;
		L_4 = GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA(L_3, GameObject_GetComponent_TisSlider_t87EA570E3D6556CABF57456C2F3873FFD86E652F_m3B73E32B09A6667056AC232DA5238351F51DB7EA_RuntimeMethod_var);
		float L_5;
		L_5 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral6933499863734D9DA2A66251C6C993DA6A92CCB7, (7.0f), NULL);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_4, L_5);
		// fwText.text = "Forward Force: " + PlayerPrefs.GetFloat("forwardForce",9).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___fwText_4;
		float L_7;
		L_7 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral65E4C9869FFDA37EE1A18A807CF2E45B7F66CDFC, (9.0f), NULL);
		V_0 = L_7;
		String_t* L_8;
		L_8 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4C359D59CA0AE83DF650E859BA9A29E6A13EB1D9, L_8, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		// HrText.text = "Horizontal Force: " + PlayerPrefs.GetFloat("horizontalForce",7).ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___HrText_5;
		float L_11;
		L_11 = PlayerPrefs_GetFloat_m8DA6A99E54E6E463048B06988520021347012293(_stringLiteral6933499863734D9DA2A66251C6C993DA6A92CCB7, (7.0f), NULL);
		V_0 = L_11;
		String_t* L_12;
		L_12 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_0), NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral44D14CCF197D66A68CD4697D1500796E119D99CD, L_12, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		// if(PlayerPrefs.GetInt("volume")==1){
		int32_t L_14;
		L_14 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B, NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)1))))
		{
			goto IL_00bd;
		}
	}
	{
		// master.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_15 = __this->___master_10;
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_15, (bool)1, NULL);
		// music.interactable = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_16 = __this->___music_11;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_16, (bool)1, NULL);
		goto IL_00d5;
	}

IL_00bd:
	{
		// master.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_17 = __this->___master_10;
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_17, (bool)0, NULL);
		// music.interactable = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_18 = __this->___music_11;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_18, (bool)0, NULL);
	}

IL_00d5:
	{
		// if(PlayerPrefs.GetInt("music")==1 && master.isOn){
		int32_t L_19;
		L_19 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F, NULL);
		if ((!(((uint32_t)L_19) == ((uint32_t)1))))
		{
			goto IL_00fd;
		}
	}
	{
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_20 = __this->___master_10;
		bool L_21;
		L_21 = Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline(L_20, NULL);
		if (!L_21)
		{
			goto IL_00fd;
		}
	}
	{
		// music.isOn = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_22 = __this->___music_11;
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_22, (bool)1, NULL);
		goto IL_0109;
	}

IL_00fd:
	{
		// music.isOn = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_23 = __this->___music_11;
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_23, (bool)0, NULL);
	}

IL_0109:
	{
		// if(PlayerPrefs.GetInt("remote",0)>0.5f){//keyboard
		int32_t L_24;
		L_24 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083, 0, NULL);
		if ((!(((float)((float)L_24)) > ((float)(0.5f)))))
		{
			goto IL_0156;
		}
	}
	{
		// kbText.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_25 = __this->___kbText_7;
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_25, 1, NULL);
		// mouseText.fontStyle = FontStyle.Normal;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___mouseText_6;
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_26, 0, NULL);
		// HrSlider.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___HrSlider_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28;
		L_28 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_27, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)1, NULL);
		// remoteScroll.value=1;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_29 = __this->___remoteScroll_12;
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_29, (1.0f), NULL);
		return;
	}

IL_0156:
	{
		// kbText.fontStyle = FontStyle.Normal;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___kbText_7;
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_30, 0, NULL);
		// mouseText.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = __this->___mouseText_6;
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_31, 1, NULL);
		// HrSlider.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___HrSlider_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33;
		L_33 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_32, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// remoteScroll.value=0;
		Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* L_34 = __this->___remoteScroll_12;
		Scrollbar_set_value_m8F7815DB02D4A69B33B091FC5F674609F070D804(L_34, (0.0f), NULL);
		// }
		return;
	}
}
// System.Void Menu::onClicked()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_onClicked_m14D6EB02CC0D937B7F461161FB3944F6C0A80329 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(PlayerPrefs.GetInt("remote",0)>0.5f){//to mouse
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083, 0, NULL);
		if ((!(((float)((float)L_0)) > ((float)(0.5f)))))
		{
			goto IL_0020;
		}
	}
	{
		// setRemote(0.01f);
		Menu_setRemote_m5CBBD359978169E1AC24F7C2407286F58E69F5E8(__this, (0.00999999978f), NULL);
		goto IL_002b;
	}

IL_0020:
	{
		// setRemote(0.99f);
		Menu_setRemote_m5CBBD359978169E1AC24F7C2407286F58E69F5E8(__this, (0.99000001f), NULL);
	}

IL_002b:
	{
		// Start();
		Menu_Start_mC49986718939F87924A1391044721CAC6E28919D(__this, NULL);
		// }
		return;
	}
}
// System.Void Menu::setRemote(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_setRemote_m5CBBD359978169E1AC24F7C2407286F58E69F5E8 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, float ___x0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(x>0.5f){
		float L_0 = ___x0;
		if ((!(((float)L_0) > ((float)(0.5f)))))
		{
			goto IL_003d;
		}
	}
	{
		// PlayerPrefs.SetInt("remote",1);//keyboard
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083, 1, NULL);
		// kbText.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___kbText_7;
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_1, 1, NULL);
		// mouseText.fontStyle = FontStyle.Normal;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_2 = __this->___mouseText_6;
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_2, 0, NULL);
		// HrSlider.gameObject.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___HrSlider_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_3, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		return;
	}

IL_003d:
	{
		// PlayerPrefs.SetInt("remote",0);//mouse
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083, 0, NULL);
		// kbText.fontStyle = FontStyle.Normal;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___kbText_7;
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_5, 0, NULL);
		// mouseText.fontStyle = FontStyle.Bold;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___mouseText_6;
		Text_set_fontStyle_m5ABEF66BFC88E7E0A950E2817E4978FF472F6C1D(L_6, 1, NULL);
		// HrSlider.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___HrSlider_9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8;
		L_8 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_7, NULL);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Menu::StartGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_StartGame_m33557706120D85B9BA0ADDA44707411A175D4B74 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA76F4AAE4B7821A200351EDC2EFB8D95A7ECBB79);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	Scene_tA1DC762B79745EB5140F054C884855B922318356 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Debug.Log("Start");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral8243A16D425F93AF62CAAB2BFAE01A2D6246A5FE, NULL);
		// PlayerPrefs.DeleteKey("score");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, NULL);
		// PlayerPrefs.DeleteKey("multier");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteral8EA19EFE7C10200C9B57FC6A99C09467136FC897, NULL);
		// PlayerPrefs.DeleteKey("pos");
		PlayerPrefs_DeleteKey_m8F4F85F8D9F807130C6B848E60432ECC28F1301F(_stringLiteralA76F4AAE4B7821A200351EDC2EFB8D95A7ECBB79, NULL);
		// SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex+1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_0;
		L_0 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Scene_get_buildIndex_m82B6E0C96C85C952B7A2D794DB73CDA99AA9A57E((&V_0), NULL);
		SceneManager_LoadScene_mE00D17D79AD74B307F913BBF296A36115548DB6D(((int32_t)il2cpp_codegen_add(L_1, 1)), NULL);
		// }
		return;
	}
}
// System.Void Menu::setVolume(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_setVolume_m5668D4D6ACA88DDBB19DF72F077BAADC83A75D57 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, bool ___isOn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isOn){
		bool L_0 = ___isOn0;
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// PlayerPrefs.SetInt("volume",1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B, 1, NULL);
		// music.interactable = true;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_1 = __this->___music_11;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_1, (bool)1, NULL);
		return;
	}

IL_001b:
	{
		// PlayerPrefs.SetInt("volume",0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralE359F6FAB740B186702E6266FF2C4659C923C49B, 0, NULL);
		// music.interactable = false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_2 = __this->___music_11;
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_2, (bool)0, NULL);
		// music.isOn=false;
		Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* L_3 = __this->___music_11;
		Toggle_set_isOn_m61D6AB073668E87530A9F49D990A3B3631D2061F(L_3, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Menu::setMusic(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_setMusic_mE2AA0DFCC3A31D41E1F745882C30FD094B21D885 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, bool ___isOn0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(isOn){
		bool L_0 = ___isOn0;
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// PlayerPrefs.SetInt("music",1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F, 1, NULL);
		return;
	}

IL_000f:
	{
		// PlayerPrefs.SetInt("music",0);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral7A9D14B94D28FB9E5C1133505C5CFB7767D6C55F, 0, NULL);
		// }
		return;
	}
}
// System.Void Menu::setForwardForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_setForwardForce_m11A4A2B655DF3C64991B0552E9625CDF61B8FE8D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, float ___a0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4C359D59CA0AE83DF650E859BA9A29E6A13EB1D9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65E4C9869FFDA37EE1A18A807CF2E45B7F66CDFC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("forwardForce",a);
		float L_0 = ___a0;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral65E4C9869FFDA37EE1A18A807CF2E45B7F66CDFC, L_0, NULL);
		// fwText.text = "Forward Force: " + a.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___fwText_4;
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___a0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral4C359D59CA0AE83DF650E859BA9A29E6A13EB1D9, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void Menu::setHorizontalForce(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_setHorizontalForce_m6A0CF023C4518B09E0DCCF243981D2C1339054AB (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, float ___b0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral44D14CCF197D66A68CD4697D1500796E119D99CD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6933499863734D9DA2A66251C6C993DA6A92CCB7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetFloat("horizontalForce",b);
		float L_0 = ___b0;
		PlayerPrefs_SetFloat_m91048D03E901CC01EAD6FEF8F27148F9D2D72DBF(_stringLiteral6933499863734D9DA2A66251C6C993DA6A92CCB7, L_0, NULL);
		// HrText.text = "Horizontal Force: " + b.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___HrText_5;
		String_t* L_2;
		L_2 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&___b0), NULL);
		String_t* L_3;
		L_3 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral44D14CCF197D66A68CD4697D1500796E119D99CD, L_2, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void overCollider::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void overCollider_OnCollisionEnter_mDBF4071AE66F5D77C380862143C07D2798A52288 (overCollider_t32A0197272EB1713809E300FBAECE0EDE98A20DE* __this, Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* ___other0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8CB7C6FADD83444661425569583A6C959948E59);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABD884F7688123CE5EAB301152D58085806E28FD);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (other.gameObject.tag=="set"){
		Collision_tBCC6AEBD9A63E6DA2E50660DAC03CDCB1FF7A9B0* L_0 = ___other0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Collision_get_gameObject_m846FADBCA43E1849D3FE4D5EA44C02D055A70B3E(L_0, NULL);
		String_t* L_2;
		L_2 = GameObject_get_tag_mEDD27BF795072834D656B286CBE51B2C99747805(L_1, NULL);
		bool L_3;
		L_3 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_2, _stringLiteral0312B7097AC8B11AFDEA5E693CEE5800298FB6AA, NULL);
		if (!L_3)
		{
			goto IL_003c;
		}
	}
	{
		// Scene scene = SceneManager.GetActiveScene();
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		Scene_tA1DC762B79745EB5140F054C884855B922318356 L_4;
		L_4 = SceneManager_GetActiveScene_m2DB2A1ACB84805968A4B6396BFDFB92C0AF32BCE(NULL);
		// SceneManager.LoadScene("Credits");
		SceneManager_LoadScene_m7237839058F581BFCA0A79BB96F6F931469E43CF(_stringLiteral5C058FE20FD7652D620A17B5F9D6AE4EEFA76795, NULL);
		// Debug.Log("Oopss!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteralA8CB7C6FADD83444661425569583A6C959948E59, NULL);
		// PlayerPrefs.SetInt("failed", 1);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralABD884F7688123CE5EAB301152D58085806E28FD, 1, NULL);
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void overCollider::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void overCollider__ctor_mD0BD53E199534883C63CB29BAE9A5431BBE33F0C (overCollider_t32A0197272EB1713809E300FBAECE0EDE98A20DE* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void PlaayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaayerMovement_Start_m8F5734D655C7B03D6F0086B02BBFB7CB2F6831EC (PlaayerMovement_t3771366E125C6142F8CC2429CF2D34581CE6D825* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral493A81CF72EC64D336BBCBDF0854026AEF9F763F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral65E4C9869FFDA37EE1A18A807CF2E45B7F66CDFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6933499863734D9DA2A66251C6C993DA6A92CCB7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("Hello World!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m86567BCF22BBE7809747817453CACA0E41E68219(_stringLiteral493A81CF72EC64D336BBCBDF0854026AEF9F763F, NULL);
		// forwardV=PlayerPrefs.GetFloat("forwardForce");
		float L_0;
		L_0 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteral65E4C9869FFDA37EE1A18A807CF2E45B7F66CDFC, NULL);
		__this->___forwardV_5 = L_0;
		// horizV=PlayerPrefs.GetFloat("horizontalForce");
		float L_1;
		L_1 = PlayerPrefs_GetFloat_mF682C7FE84BAE6EED61B6623E7D4458ECDDBE896(_stringLiteral6933499863734D9DA2A66251C6C993DA6A92CCB7, NULL);
		__this->___horizV_6 = L_1;
		// }
		return;
	}
}
// System.Void PlaayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaayerMovement_Update_m0A67830D03C55BA1CE2FD004827FA9DA5F689C52 (PlaayerMovement_t3771366E125C6142F8CC2429CF2D34581CE6D825* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// Vector3 mousePos = Input.mousePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		V_0 = L_0;
		// rotationX = Remap(mousePos.x, -sens+10, Screen.width+sens-10, -2.8f, 2.8f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		float L_2 = L_1.___x_2;
		float L_3 = __this->___sens_7;
		int32_t L_4;
		L_4 = Screen_get_width_mCA5D955A53CF6D29C8C7118D517D0FC84AE8056C(NULL);
		float L_5 = __this->___sens_7;
		float L_6;
		L_6 = PlaayerMovement_Remap_mE133D6143AD9C1A8E1FDFDD5455461B332F6DE48(L_2, ((float)il2cpp_codegen_add(((-L_3)), (10.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)L_4), L_5)), (10.0f))), (-2.79999995f), (2.79999995f), NULL);
		__this->___rotationX_9 = L_6;
		// float horizontal=Input.GetAxis("Horizontal")*horizV*Time.deltaTime;
		float L_7;
		L_7 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, NULL);
		float L_8 = __this->___horizV_6;
		float L_9;
		L_9 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_7, L_8)), L_9));
		// float vertical=Input.GetAxis("Vertical")*forwardV*Time.deltaTime;
		float L_10;
		L_10 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, NULL);
		float L_11 = __this->___forwardV_5;
		float L_12;
		L_12 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_10, L_11)), L_12));
		// if(PlayerPrefs.GetInt("remote")==0){//MOUSE CONTROL
		int32_t L_13;
		L_13 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083, NULL);
		if (L_13)
		{
			goto IL_015c;
		}
	}
	{
		// if(TestMode==true){
		bool L_14 = __this->___TestMode_4;
		if (!L_14)
		{
			goto IL_00d9;
		}
	}
	{
		// this.transform.Translate(0, 0 ,  vertical);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_16 = V_2;
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_15, (0.0f), (0.0f), L_16, NULL);
		// if(rotationX<3 && rotationX>-3)
		float L_17 = __this->___rotationX_9;
		if ((!(((float)L_17) < ((float)(3.0f)))))
		{
			goto IL_015c;
		}
	}
	{
		float L_18 = __this->___rotationX_9;
		if ((!(((float)L_18) > ((float)(-3.0f)))))
		{
			goto IL_015c;
		}
	}
	{
		// this.transform.Translate(horizontal, 0 , /* vertical */ 0 );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_20 = V_1;
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_19, L_20, (0.0f), (0.0f), NULL);
		goto IL_015c;
	}

IL_00d9:
	{
		// else if(TestMode==false){
		bool L_21 = __this->___TestMode_4;
		if (L_21)
		{
			goto IL_015c;
		}
	}
	{
		// this.transform.Translate(0, 0 , forwardV * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_23 = __this->___forwardV_5;
		float L_24;
		L_24 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_22, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_23, L_24)), NULL);
		// if(rotationX<=3.1 && rotationX>=-3.1)
		float L_25 = __this->___rotationX_9;
		if ((!(((double)((double)L_25)) <= ((double)(3.1000000000000001)))))
		{
			goto IL_015c;
		}
	}
	{
		float L_26 = __this->___rotationX_9;
		if ((!(((double)((double)L_26)) >= ((double)(-3.1000000000000001)))))
		{
			goto IL_015c;
		}
	}
	{
		// transform.position=new Vector3(this.transform.position.x,this.transform.position.y, rotationX);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		float L_30 = L_29.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_31, NULL);
		float L_33 = L_32.___y_3;
		float L_34 = __this->___rotationX_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_35), L_30, L_33, L_34, /*hidden argument*/NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_27, L_35, NULL);
	}

IL_015c:
	{
		// if(PlayerPrefs.GetInt("remote")==1){//KEYBOARD CONTROL
		int32_t L_36;
		L_36 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral02A53138C0B128CAEC7FFB9FB3C631A3C7C59083, NULL);
		if ((!(((uint32_t)L_36) == ((uint32_t)1))))
		{
			goto IL_0242;
		}
	}
	{
		// if(TestMode==true){
		bool L_37 = __this->___TestMode_4;
		if (!L_37)
		{
			goto IL_01d5;
		}
	}
	{
		// this.transform.Translate(0, 0 ,  vertical);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38;
		L_38 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_39 = V_2;
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_38, (0.0f), (0.0f), L_39, NULL);
		// if(this.transform.position.z<3 && this.transform.position.z>-3)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_40, NULL);
		float L_42 = L_41.___z_4;
		if ((!(((float)L_42) < ((float)(3.0f)))))
		{
			goto IL_0242;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_43;
		L_43 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_43, NULL);
		float L_45 = L_44.___z_4;
		if ((!(((float)L_45) > ((float)(-3.0f)))))
		{
			goto IL_0242;
		}
	}
	{
		// this.transform.Translate(horizontal, 0 , /* vertical */ 0 );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_47 = V_1;
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_46, L_47, (0.0f), (0.0f), NULL);
		return;
	}

IL_01d5:
	{
		// else if(TestMode==false){
		bool L_48 = __this->___TestMode_4;
		if (L_48)
		{
			goto IL_0242;
		}
	}
	{
		// this.transform.Translate(0, 0 , forwardV * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_49;
		L_49 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_50 = __this->___forwardV_5;
		float L_51;
		L_51 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_49, (0.0f), (0.0f), ((float)il2cpp_codegen_multiply(L_50, L_51)), NULL);
		// if(this.transform.position.z<3 && this.transform.position.z>-3)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_52;
		L_52 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_52, NULL);
		float L_54 = L_53.___z_4;
		if ((!(((float)L_54) < ((float)(3.0f)))))
		{
			goto IL_0242;
		}
	}
	{
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_55;
		L_55 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_55, NULL);
		float L_57 = L_56.___z_4;
		if ((!(((float)L_57) > ((float)(-3.0f)))))
		{
			goto IL_0242;
		}
	}
	{
		// this.transform.Translate(horizontal,0 ,0 );
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_58;
		L_58 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		float L_59 = V_1;
		Transform_Translate_mB42A27EE20E123E0B47336F795B62B017489E3F7(L_58, L_59, (0.0f), (0.0f), NULL);
	}

IL_0242:
	{
		// }
		return;
	}
}
// System.Single PlaayerMovement::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlaayerMovement_Remap_mE133D6143AD9C1A8E1FDFDD5455461B332F6DE48 (float ___value0, float ___from11, float ___to12, float ___from23, float ___to24, const RuntimeMethod* method) 
{
	{
		// return (value - from1) / (to1 - from1) * (to2 - from2) + from2;
		float L_0 = ___value0;
		float L_1 = ___from11;
		float L_2 = ___to12;
		float L_3 = ___from11;
		float L_4 = ___to24;
		float L_5 = ___from23;
		float L_6 = ___from23;
		return ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)(((float)il2cpp_codegen_subtract(L_0, L_1))/((float)il2cpp_codegen_subtract(L_2, L_3)))), ((float)il2cpp_codegen_subtract(L_4, L_5)))), L_6));
	}
}
// System.Void PlaayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlaayerMovement__ctor_mE5151A7CB28A84B6D4EADB129D9942240E96188B (PlaayerMovement_t3771366E125C6142F8CC2429CF2D34581CE6D825* __this, const RuntimeMethod* method) 
{
	{
		// public float sensitivityX = 15F;
		__this->___sensitivityX_10 = (15.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ScoreInc::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreInc_Start_m798015ABFEA5659022B364272A67790F7099DAD4 (ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score=PlayerPrefs.GetInt("score", 0);
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, 0, NULL);
		__this->___score_5 = L_0;
		// StartCoroutine(scoreCount());
		RuntimeObject* L_1;
		L_1 = ScoreInc_scoreCount_mF3DF243F4A98227433311F7CAFBE4028623A15F8(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator ScoreInc::scoreCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScoreInc_scoreCount_mF3DF243F4A98227433311F7CAFBE4028623A15F8 (ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905* L_0 = (U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905*)il2cpp_codegen_object_new(U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905_il2cpp_TypeInfo_var);
		U3CscoreCountU3Ed__3__ctor_mC6944F71C1BAABA5B15BE2EF5A21FADDFB0DA22D(L_0, 0, NULL);
		U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void ScoreInc::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreInc__ctor_m8F2C8A96C9DDA47ADB8D42635B87ADA2DE265284 (ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void ScoreInc/<scoreCount>d__3::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CscoreCountU3Ed__3__ctor_mC6944F71C1BAABA5B15BE2EF5A21FADDFB0DA22D (U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void ScoreInc/<scoreCount>d__3::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CscoreCountU3Ed__3_System_IDisposable_Dispose_mE221BC30B8164484D47B62984335461170C06C85 (U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean ScoreInc/<scoreCount>d__3::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CscoreCountU3Ed__3_MoveNext_m710EE462B893211C2443B49F22CA51F97C8A78A3 (U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* V_1 = NULL;
	int32_t V_2 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_1 = __this->___U3CU3E4__this_2;
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
				goto IL_008f;
			}
			case 2:
			{
				goto IL_012a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// currentScore.fontSize=54;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_3 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = L_3->___currentScore_4;
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_4, ((int32_t)54), NULL);
		// for(int i=0; i<=score; i++){
		__this->___U3CiU3E5__2_3 = 0;
		goto IL_0168;
	}

IL_0042:
	{
		// if(score-i>8){
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_5 = V_1;
		int32_t L_6 = L_5->___score_5;
		int32_t L_7 = __this->___U3CiU3E5__2_3;
		if ((((int32_t)((int32_t)il2cpp_codegen_subtract(L_6, L_7))) <= ((int32_t)8)))
		{
			goto IL_0060;
		}
	}
	{
		// i=i+7;
		int32_t L_8 = __this->___U3CiU3E5__2_3;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_8, 7));
	}

IL_0060:
	{
		// currentScore.text=i.ToString();
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_9 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = L_9->___currentScore_4;
		int32_t* L_11 = (&__this->___U3CiU3E5__2_3);
		String_t* L_12;
		L_12 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_11, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_12);
		// yield return new WaitForSeconds(0.006f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_13 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_13, (0.00600000005f), NULL);
		__this->___U3CU3E2__current_1 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_13);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008f:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(i<score){
		int32_t L_14 = __this->___U3CiU3E5__2_3;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_15 = V_1;
		int32_t L_16 = L_15->___score_5;
		if ((((int32_t)L_14) >= ((int32_t)L_16)))
		{
			goto IL_00b9;
		}
	}
	{
		// currentScore.fontSize++;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_17 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = L_17->___currentScore_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = L_18;
		int32_t L_20;
		L_20 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_19, NULL);
		V_2 = L_20;
		int32_t L_21 = V_2;
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_19, ((int32_t)il2cpp_codegen_add(L_21, 1)), NULL);
	}

IL_00b9:
	{
		// if(i==score){
		int32_t L_22 = __this->___U3CiU3E5__2_3;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_23 = V_1;
		int32_t L_24 = L_23->___score_5;
		if ((!(((uint32_t)L_22) == ((uint32_t)L_24))))
		{
			goto IL_0158;
		}
	}
	{
		// currentScore.text=score.ToString();
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_25 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = L_25->___currentScore_4;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_27 = V_1;
		int32_t* L_28 = (&L_27->___score_5);
		String_t* L_29;
		L_29 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_28, NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_29);
		// for(int j=0;j<=16;j++){
		__this->___U3CjU3E5__3_4 = 0;
		goto IL_0141;
	}

IL_00e9:
	{
		// if(currentScore.fontSize>54){
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_30 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = L_30->___currentScore_4;
		int32_t L_32;
		L_32 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_31, NULL);
		if ((((int32_t)L_32) <= ((int32_t)((int32_t)54))))
		{
			goto IL_0131;
		}
	}
	{
		// currentScore.fontSize=currentScore.fontSize-10;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_33 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_34 = L_33->___currentScore_4;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_35 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = L_35->___currentScore_4;
		int32_t L_37;
		L_37 = Text_get_fontSize_m837C0618E78D0FDA972D11DDE3015DC888E93993(L_36, NULL);
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_34, ((int32_t)il2cpp_codegen_subtract(L_37, ((int32_t)10))), NULL);
		// yield return new WaitForSeconds(0.04f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_38 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_38, (0.0399999991f), NULL);
		__this->___U3CU3E2__current_1 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_38);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_012a:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0131:
	{
		// for(int j=0;j<=16;j++){
		int32_t L_39 = __this->___U3CjU3E5__3_4;
		V_2 = L_39;
		int32_t L_40 = V_2;
		__this->___U3CjU3E5__3_4 = ((int32_t)il2cpp_codegen_add(L_40, 1));
	}

IL_0141:
	{
		// for(int j=0;j<=16;j++){
		int32_t L_41 = __this->___U3CjU3E5__3_4;
		if ((((int32_t)L_41) <= ((int32_t)((int32_t)16))))
		{
			goto IL_00e9;
		}
	}
	{
		// currentScore.fontSize=54;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_42 = V_1;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = L_42->___currentScore_4;
		Text_set_fontSize_m426338B0A2CDA58609028FFD471EF5F2C9F364D4(L_43, ((int32_t)54), NULL);
	}

IL_0158:
	{
		// for(int i=0; i<=score; i++){
		int32_t L_44 = __this->___U3CiU3E5__2_3;
		V_2 = L_44;
		int32_t L_45 = V_2;
		__this->___U3CiU3E5__2_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_0168:
	{
		// for(int i=0; i<=score; i++){
		int32_t L_46 = __this->___U3CiU3E5__2_3;
		ScoreInc_t0C8636D4EB3B3C2FD162FA2A30AE7C2CA3BEFD77* L_47 = V_1;
		int32_t L_48 = L_47->___score_5;
		if ((((int32_t)L_46) <= ((int32_t)L_48)))
		{
			goto IL_0042;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object ScoreInc/<scoreCount>d__3::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CscoreCountU3Ed__3_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m90680DF794A7F1A6F3CFD62A2D7F2832D4E60150 (U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void ScoreInc/<scoreCount>d__3::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CscoreCountU3Ed__3_System_Collections_IEnumerator_Reset_mF699424FFD466752C21C956CE8CF17F7BB81B0EF (U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CscoreCountU3Ed__3_System_Collections_IEnumerator_Reset_mF699424FFD466752C21C956CE8CF17F7BB81B0EF_RuntimeMethod_var)));
	}
}
// System.Object ScoreInc/<scoreCount>d__3::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CscoreCountU3Ed__3_System_Collections_IEnumerator_get_Current_m537BFA1EA6D256DF47EE77B3B7C960EFBB7EFDCA (U3CscoreCountU3Ed__3_t525FFA8E45B2BE7C6DF80E28B9427C56B1A9F905* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SetHS::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetHS_Start_m720B2ADE8611EDD5C350685E54FA273285A60F75 (SetHS_t29CCACF953CB7309D37E527D1E57AD23569739DF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// NEW.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___NEW_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if(PlayerPrefs.GetInt("HighScore")<PlayerPrefs.GetInt("score")){
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, NULL);
		int32_t L_2;
		L_2 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, NULL);
		if ((((int32_t)L_1) >= ((int32_t)L_2)))
		{
			goto IL_0042;
		}
	}
	{
		// PlayerPrefs.SetInt("HighScore", PlayerPrefs.GetInt("score"));
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, NULL);
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, L_3, NULL);
		// NEW.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___NEW_5;
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
	}

IL_0042:
	{
		// HS.text = PlayerPrefs.GetInt("HighScore").ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___HS_4;
		int32_t L_6;
		L_6 = PlayerPrefs_GetInt_m35C13A87BBC7907554CE5405EB5D00CF85E7457B(_stringLiteral79B0BC20C4F38EB2142290F5EFAB4EF138899A9B, NULL);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5((&V_0), NULL);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_7);
		// }
		return;
	}
}
// System.Void SetHS::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetHS__ctor_mE819EEB2F05573A92FFDEC145A6210F258704425 (SetHS_t29CCACF953CB7309D37E527D1E57AD23569739DF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void setMovement::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void setMovement_FixedUpdate_m87CE982DE24A3F634F016956757D668CCC58252B (setMovement_t8A6DECBF9518276CC7B39BDD9654C4A7F3BB38DE* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if(direction==1){
		int32_t L_0 = __this->___direction_5;
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		// Vector3 desiredPosition = new Vector3(transform.position.x , transform.position.y , 20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_1, NULL);
		float L_3 = L_2.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		float L_6 = L_5.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_0), L_3, L_6, (20.0f), NULL);
		// Vector3 smoothedPosition = Vector3.Lerp(transform.position, desiredPosition, speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = V_0;
		float L_10 = __this->___speed_4;
		float L_11;
		L_11 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_8, L_9, ((float)il2cpp_codegen_multiply(L_10, L_11)), NULL);
		V_1 = L_12;
		// transform.position=smoothedPosition;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_13, L_14, NULL);
		// if(transform.position.z>2.99)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		float L_17 = L_16.___z_4;
		if ((!(((double)((double)L_17)) > ((double)(2.9900000000000002)))))
		{
			goto IL_0082;
		}
	}
	{
		// direction=2;
		__this->___direction_5 = 2;
	}

IL_0082:
	{
		// if(direction==2){
		int32_t L_18 = __this->___direction_5;
		if ((!(((uint32_t)L_18) == ((uint32_t)2))))
		{
			goto IL_0104;
		}
	}
	{
		// Vector3 desiredPosition2 = new Vector3(transform.position.x , transform.position.y , -20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_19, NULL);
		float L_21 = L_20.___x_2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_22, NULL);
		float L_24 = L_23.___y_3;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), L_21, L_24, (-20.0f), NULL);
		// Vector3 smoothedPosition2 = Vector3.Lerp(transform.position, desiredPosition2, speed* Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_2;
		float L_28 = __this->___speed_4;
		float L_29;
		L_29 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline(L_26, L_27, ((float)il2cpp_codegen_multiply(L_28, L_29)), NULL);
		V_3 = L_30;
		// transform.position=smoothedPosition2;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_3;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_31, L_32, NULL);
		// if(transform.position.z<-2.99)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_33;
		L_33 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_33, NULL);
		float L_35 = L_34.___z_4;
		if ((!(((double)((double)L_35)) < ((double)(-2.9900000000000002)))))
		{
			goto IL_0104;
		}
	}
	{
		// direction=1;
		__this->___direction_5 = 1;
	}

IL_0104:
	{
		// }
		return;
	}
}
// System.Void setMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void setMovement__ctor_mA9D38BFF339663D0BD9138E60CDE79B6D78C9801 (setMovement_t8A6DECBF9518276CC7B39BDD9654C4A7F3BB38DE* __this, const RuntimeMethod* method) 
{
	{
		// public float speed=0.250f;
		__this->___speed_4 = (0.25f);
		// public int direction=1;
		__this->___direction_5 = 1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void setTurning::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void setTurning_FixedUpdate_m2DCD0EE41A8B963D01FFEB898C9435656D8A5DA7 (setTurning_t7CB12F9759A5C1366418BB04240A7C9E7D5B87FE* __this, const RuntimeMethod* method) 
{
	{
		// transform.Rotate(targetAngle * speed * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___targetAngle_5;
		float L_2 = __this->___speed_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_1, L_2, NULL);
		float L_4;
		L_4 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, L_4, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_0, L_5, NULL);
		// }
		return;
	}
}
// System.Void setTurning::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void setTurning__ctor_m982D99FAC9E656F12022F3AFEB92C6E77CB4535C (setTurning_t7CB12F9759A5C1366418BB04240A7C9E7D5B87FE* __this, const RuntimeMethod* method) 
{
	{
		// public float speed=0.250f;
		__this->___speed_4 = (0.25f);
		// public Vector3 targetAngle = new Vector3(0f, 360f, 0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_0), (0.0f), (360.0f), (0.0f), /*hidden argument*/NULL);
		__this->___targetAngle_5 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Sound::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Sound__ctor_m5DD7C9F71B98D5670BBDD05F6D6FCDF43DC9EA8F (Sound_t06FB644265ECCFDDC2E12D87F6111B3760FC17A0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void EpicToonFX.ETFXButtonScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_Start_m0F7F0CFD5169405746F313FF1D7ED1534412844D (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// effectScript = GameObject.Find("ETFXFireProjectile").GetComponent<ETFXFireProjectile>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral1D5023AE7302543623D57BF8963460D9F09BC3CC, NULL);
		ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* L_1;
		L_1 = GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791(L_0, GameObject_GetComponent_TisETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3_mB664808A3C2397E12E4E978928DC98190CE7D791_RuntimeMethod_var);
		__this->___effectScript_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___effectScript_7), (void*)L_1);
		// getProjectileNames();
		ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B(__this, NULL);
		// MyButtonText = Button.transform.Find("Text").GetComponent<Text>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___Button_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_2, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4;
		L_4 = Transform_Find_m3087032B0E1C5B96A2D2C27020BAEAE2DA08F932(L_3, _stringLiteral1A82671F2C34BEA09C35354DDB899812746CBCF9, NULL);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5;
		L_5 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(L_4, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___MyButtonText_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___MyButtonText_5), (void*)L_5);
		// MyButtonText.text = projectileParticleName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___MyButtonText_5;
		String_t* L_7 = __this->___projectileParticleName_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_7);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXButtonScript::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_Update_m81BD65853D34C93426A7D596C3DE2194AA0DDE65 (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	{
		// MyButtonText.text = projectileParticleName;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___MyButtonText_5;
		String_t* L_1 = __this->___projectileParticleName_6;
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXButtonScript::getProjectileNames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// projectileScript = effectScript.projectiles[effectScript.currentProjectile].GetComponent<ETFXProjectileScript>();
		ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* L_0 = __this->___effectScript_7;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = L_0->___projectiles_4;
		ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* L_2 = __this->___effectScript_7;
		int32_t L_3 = L_2->___currentProjectile_6;
		int32_t L_4 = L_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* L_6;
		L_6 = GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436(L_5, GameObject_GetComponent_TisETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B_m629EB575AE5BC0AB98CB2C7A97BBEE5637459436_RuntimeMethod_var);
		__this->___projectileScript_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileScript_8), (void*)L_6);
		// projectileParticleName = projectileScript.projectileParticle.name;    // Assign the name of the currently selected projectile to projectileParticleName
		ETFXProjectileScript_tA2947F5586F8DC4C799B267781C47DBC0F53B25B* L_7 = __this->___projectileScript_8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___projectileParticle_5;
		String_t* L_9;
		L_9 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_8, NULL);
		__this->___projectileParticleName_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___projectileParticleName_6), (void*)L_9);
		// }
		return;
	}
}
// System.Boolean EpicToonFX.ETFXButtonScript::overButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ETFXButtonScript_overButton_m91409E8AD5D3F2F253116858FFC90E972C7BA9B2 (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// Rect button1 = new Rect(buttonsX, buttonsY, buttonsSizeX, buttonsSizeY);
		float L_0 = __this->___buttonsX_9;
		float L_1 = __this->___buttonsY_10;
		float L_2 = __this->___buttonsSizeX_11;
		float L_3 = __this->___buttonsSizeY_12;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_0), L_0, L_1, L_2, L_3, NULL);
		// Rect button2 = new Rect(buttonsX + buttonsDistance, buttonsY, buttonsSizeX, buttonsSizeY);
		float L_4 = __this->___buttonsX_9;
		float L_5 = __this->___buttonsDistance_13;
		float L_6 = __this->___buttonsY_10;
		float L_7 = __this->___buttonsSizeX_11;
		float L_8 = __this->___buttonsSizeY_12;
		Rect__ctor_m18C3033D135097BEE424AAA68D91C706D2647F23((&V_1), ((float)il2cpp_codegen_add(L_4, L_5)), L_6, L_7, L_8, NULL);
		// if(button1.Contains(new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y)) ||
		//    button2.Contains(new Vector2(Input.mousePosition.x, Screen.height - Input.mousePosition.y)))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_10 = L_9.___x_2;
		int32_t L_11;
		L_11 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_13 = L_12.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_14), L_10, ((float)il2cpp_codegen_subtract(((float)L_11), L_13)), /*hidden argument*/NULL);
		bool L_15;
		L_15 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_0), L_14, NULL);
		if (L_15)
		{
			goto IL_0097;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_17 = L_16.___x_2;
		int32_t L_18;
		L_18 = Screen_get_height_m624DD2D53F34087064E3B9D09AC2207DB4E86CA8(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		float L_20 = L_19.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_21), L_17, ((float)il2cpp_codegen_subtract(((float)L_18), L_20)), /*hidden argument*/NULL);
		bool L_22;
		L_22 = Rect_Contains_mAB270D6B7E3B0009A50D142C569D63E8FE59F48B((&V_1), L_21, NULL);
		if (!L_22)
		{
			goto IL_0099;
		}
	}

IL_0097:
	{
		// return true;
		return (bool)1;
	}

IL_0099:
	{
		// return false;
		return (bool)0;
	}
}
// System.Void EpicToonFX.ETFXButtonScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXButtonScript__ctor_m517511C6802BD4A71C24EB8F22F6CDB5C429FECE (ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXFireProjectile::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_Start_m71FE79B72E21B59B68A10A40490B898D259A1E79 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870);
		s_Il2CppMethodInitialized = true;
	}
	{
		// selectedProjectileButton = GameObject.Find("Button").GetComponent<ETFXButtonScript>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = GameObject_Find_mFF1D6C65A7E2CD82443F4DCE4C53472FB30B7F51(_stringLiteral7DE03E5EBA0308517D1762F2C0DF3B9E2A2F1870, NULL);
		ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* L_1;
		L_1 = GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2(L_0, GameObject_GetComponent_TisETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4_m60831DC90D8EE22CA60EEE0DF9439F0E17CC15E2_RuntimeMethod_var);
		__this->___selectedProjectileButton_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___selectedProjectileButton_8), (void*)L_1);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_Update_mA610052D76161FC9BE9184F05BC78C01D1D2664D (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (Input.GetKeyDown(KeyCode.RightArrow))
		bool L_0;
		L_0 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)275), NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// nextEffect();
		ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE(__this, NULL);
	}

IL_0012:
	{
		// if (Input.GetKeyDown(KeyCode.D))
		bool L_1;
		L_1 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)100), NULL);
		if (!L_1)
		{
			goto IL_0021;
		}
	}
	{
		// nextEffect();
		ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE(__this, NULL);
	}

IL_0021:
	{
		// if (Input.GetKeyDown(KeyCode.A))
		bool L_2;
		L_2 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)97), NULL);
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		// previousEffect();
		ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492(__this, NULL);
		goto IL_0044;
	}

IL_0032:
	{
		// else if (Input.GetKeyDown(KeyCode.LeftArrow))
		bool L_3;
		L_3 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)276), NULL);
		if (!L_3)
		{
			goto IL_0044;
		}
	}
	{
		// previousEffect();
		ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492(__this, NULL);
	}

IL_0044:
	{
		// if (Input.GetKeyDown(KeyCode.Mouse0)) //On left mouse down-click
		bool L_4;
		L_4 = Input_GetKeyDown_m0D59B7EBC3A782C9FBBF107FBCD4B72B38D993B3(((int32_t)323), NULL);
		if (!L_4)
		{
			goto IL_00da;
		}
	}
	{
		// if (!EventSystem.current.IsPointerOverGameObject()) //Checks if the mouse is not over a UI part
		il2cpp_codegen_runtime_class_init_inline(EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707_il2cpp_TypeInfo_var);
		EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* L_5;
		L_5 = EventSystem_get_current_mD15EA86304E070D175EF359A051A7DB807CA26C0(NULL);
		bool L_6;
		L_6 = EventSystem_IsPointerOverGameObject_mC89BFEA46B0DA67F914B9B90356E63BFBE11EB38(L_5, NULL);
		if (L_6)
		{
			goto IL_00da;
		}
	}
	{
		// if (Physics.Raycast(Camera.main.ScreenPointToRay(Input.mousePosition), out hit, 100f)) //Finds the point where you click with the mouse
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_7;
		L_7 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_9;
		L_9 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_7, L_8, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_10 = (&__this->___hit_9);
		bool L_11;
		L_11 = Physics_Raycast_m9D43811EF26E70072B39A8CE10402EE074A61901(L_9, L_10, (100.0f), NULL);
		if (!L_11)
		{
			goto IL_00da;
		}
	}
	{
		// GameObject projectile = Instantiate(projectiles[currentProjectile], spawnPosition.position, Quaternion.identity) as GameObject; //Spawns the selected projectile
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = __this->___projectiles_4;
		int32_t L_13 = __this->___currentProjectile_6;
		int32_t L_14 = L_13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = (L_12)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_14));
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___spawnPosition_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_16, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18;
		L_18 = Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19;
		L_19 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_15, L_17, L_18, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		V_0 = L_19;
		// projectile.transform.LookAt(hit.point); //Sets the projectiles rotation to look at the point clicked
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_20, NULL);
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_22 = (&__this->___hit_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_22, NULL);
		Transform_LookAt_mFEF7353E4CAEB85D5F7CEEF9276C3B8D6E314C6C(L_21, L_23, NULL);
		// projectile.GetComponent<Rigidbody>().AddForce(projectile.transform.forward * speed); //Set the speed of the projectile by applying force to the rigidbody
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = V_0;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_25;
		L_25 = GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90(L_24, GameObject_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m2D7F86C77ECF9B82AAC077B511F1004280571B90_RuntimeMethod_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_27;
		L_27 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_27, NULL);
		float L_29 = __this->___speed_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_28, L_29, NULL);
		Rigidbody_AddForce_m7A3EEEED21F986917107CBA6CC0106DCBC212198(L_25, L_30, NULL);
	}

IL_00da:
	{
		// Debug.DrawRay(Camera.main.ScreenPointToRay(Input.mousePosition).origin, Camera.main.ScreenPointToRay(Input.mousePosition).direction * 100, Color.yellow);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_31;
		L_31 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_33;
		L_33 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_31, L_32, NULL);
		V_1 = L_33;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Ray_get_origin_m97604A8F180316A410DCD77B7D74D04522FA1BA6((&V_1), NULL);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_35;
		L_35 = Camera_get_main_mF222B707D3BF8CC9C7544609EFC71CFB62E81D43(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Input_get_mousePosition_m2414B43222ED0C5FAB960D393964189AFD21EEAD(NULL);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_37;
		L_37 = Camera_ScreenPointToRay_m2887B9A49880B7AB670C57D66B67D6A6689FE315(L_35, L_36, NULL);
		V_1 = L_37;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Ray_get_direction_m21C2D22D3BD4A683BD4DC191AB22DD05F5EC2086((&V_1), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_38, (100.0f), NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_DrawRay_m1BD1A8102641D8558DB116464114E56BDADD3B92(L_34, L_39, L_40, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::nextEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_nextEffect_m6DB23389E6552F6A459F0CE526A4DCD1820687CE (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	{
		// if (currentProjectile < projectiles.Length - 1)
		int32_t L_0 = __this->___currentProjectile_6;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_1 = __this->___projectiles_4;
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_0022;
		}
	}
	{
		// currentProjectile++;
		int32_t L_2 = __this->___currentProjectile_6;
		__this->___currentProjectile_6 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		goto IL_0029;
	}

IL_0022:
	{
		// currentProjectile = 0;
		__this->___currentProjectile_6 = 0;
	}

IL_0029:
	{
		// selectedProjectileButton.getProjectileNames();
		ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* L_3 = __this->___selectedProjectileButton_8;
		ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B(L_3, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::previousEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_previousEffect_mA36F8D920BA12504B6A9B7C70997F04E4DAD0492 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	{
		// if (currentProjectile > 0)
		int32_t L_0 = __this->___currentProjectile_6;
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0019;
		}
	}
	{
		// currentProjectile--;
		int32_t L_1 = __this->___currentProjectile_6;
		__this->___currentProjectile_6 = ((int32_t)il2cpp_codegen_subtract(L_1, 1));
		goto IL_0029;
	}

IL_0019:
	{
		// currentProjectile = projectiles.Length - 1;
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_2 = __this->___projectiles_4;
		__this->___currentProjectile_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1));
	}

IL_0029:
	{
		// selectedProjectileButton.getProjectileNames();
		ETFXButtonScript_t55538C4C7F789AF8DEB036BD68F3101013C8F4E4* L_3 = __this->___selectedProjectileButton_8;
		ETFXButtonScript_getProjectileNames_mD169E11F6B6E57C5CBD06E7BCB3C4305CA23028B(L_3, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::AdjustSpeed(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile_AdjustSpeed_m9A00824BF1347E0F8FE0E6126CF794676B7BB8FB (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, float ___newSpeed0, const RuntimeMethod* method) 
{
	{
		// speed = newSpeed;
		float L_0 = ___newSpeed0;
		__this->___speed_7 = L_0;
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXFireProjectile::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXFireProjectile__ctor_m0454A1D37EA11E608273AB3987BD6D93213A31A8 (ETFXFireProjectile_tFDC9B58792CEE6C48406483625F5B0B0E80F8FA3* __this, const RuntimeMethod* method) 
{
	{
		// public float speed = 500;
		__this->___speed_7 = (500.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXLoopScript::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_Start_m8B9F608C71269FF287FF5CF6A0D12F728446FE59 (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	{
		// PlayEffect();
		ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB(__this, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXLoopScript::PlayEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartCoroutine("EffectLoop");
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_0;
		L_0 = MonoBehaviour_StartCoroutine_m10C4B693B96175C42B0FD00911E072701C220DB4(__this, _stringLiteral92E9796AF13FEEF7EE0A3D7079F97259971BBF9B, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXLoopScript::EffectLoop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXLoopScript_EffectLoop_m9BD0D9DFE864FB2692165E94270E5CFB64CBE5BE (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* L_0 = (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92*)il2cpp_codegen_object_new(U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92_il2cpp_TypeInfo_var);
		U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C(L_0, 0, NULL);
		U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXLoopScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLoopScript__ctor_m7D358DD45F488706D4E3340A8540A6AF526BB6B7 (ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* __this, const RuntimeMethod* method) 
{
	{
		// public float loopTimeLimit = 2.0f;
		__this->___loopTimeLimit_5 = (2.0f);
		// public bool spawnWithoutLight = true;
		__this->___spawnWithoutLight_6 = (bool)1;
		// public bool spawnWithoutSound = true;
		__this->___spawnWithoutSound_7 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6__ctor_m241FF657591CE685C8CB3D30BB7388E021FFCC3C (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6_System_IDisposable_Dispose_mE9D671CFBC0674F6D6F1E16BCD8DB26A1FCB4B57 (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CEffectLoopU3Ed__6_MoveNext_m327965464B09214DB41A74AD12ACC109A74F1DDC (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* V_1 = NULL;
	bool V_2 = false;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_00ba;
		}
	}
	{
		return (bool)0;
	}

IL_001a:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// GameObject effectPlayer = (GameObject) Instantiate(chosenEffect, transform.position, transform.rotation);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_4 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___chosenEffect_4;
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_6 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_7, NULL);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_9 = V_1;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_9, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_11;
		L_11 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_10, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_8, L_11, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		__this->___U3CeffectPlayerU3E5__2_3 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CeffectPlayerU3E5__2_3), (void*)L_12);
		// if(spawnWithoutLight = true && effectPlayer.GetComponent<Light>())
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_13 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14 = __this->___U3CeffectPlayerU3E5__2_3;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15;
		L_15 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_14, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		bool L_16;
		L_16 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_15, NULL);
		bool L_17 = L_16;
		V_2 = L_17;
		L_13->___spawnWithoutLight_6 = L_17;
		bool L_18 = V_2;
		if (!L_18)
		{
			goto IL_0074;
		}
	}
	{
		// effectPlayer.GetComponent<Light>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___U3CeffectPlayerU3E5__2_3;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_20;
		L_20 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_19, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_20, (bool)0, NULL);
	}

IL_0074:
	{
		// if(spawnWithoutSound = true && effectPlayer.GetComponent<AudioSource>())
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_21 = V_1;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___U3CeffectPlayerU3E5__2_3;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_23;
		L_23 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_22, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_23, NULL);
		bool L_25 = L_24;
		V_2 = L_25;
		L_21->___spawnWithoutSound_7 = L_25;
		bool L_26 = V_2;
		if (!L_26)
		{
			goto IL_00a0;
		}
	}
	{
		// effectPlayer.GetComponent<AudioSource>().enabled = false;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___U3CeffectPlayerU3E5__2_3;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_28;
		L_28 = GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A(L_27, GameObject_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m4F30DAB8E5B57E8DB6BD8C0C3BB11CCB57690C4A_RuntimeMethod_var);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_28, (bool)0, NULL);
	}

IL_00a0:
	{
		// yield return new WaitForSeconds(loopTimeLimit);
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_29 = V_1;
		float L_30 = L_29->___loopTimeLimit_5;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_31 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_31, L_30, NULL);
		__this->___U3CU3E2__current_1 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_31);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_00ba:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// Destroy (effectPlayer);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___U3CeffectPlayerU3E5__2_3;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_32, NULL);
		// PlayEffect();
		ETFXLoopScript_tCDE8DB0D9E555C12328CE15351C9982ACDE5F78B* L_33 = V_1;
		ETFXLoopScript_PlayEffect_mB0F1246770022F592F854F71DA7E1A13C3949DCB(L_33, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__6_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m4095FEA0B6FAFD62E68FBC39B482787B6889936B (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_Reset_mE24C736927FD987ADF846421E107CC05D683376D_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXLoopScript/<EffectLoop>d__6::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CEffectLoopU3Ed__6_System_Collections_IEnumerator_get_Current_m62DB043819328D994B722601E774742FB16DBE29 (U3CEffectLoopU3Ed__6_tCE0B336757480A28B5597A7C3483AD93888FDA92* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EpicToonFX.ETFXMouseOrbit::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_Start_m883ED864D07ED2B013CBEC297E413AC4F7E8403A (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Vector3 angles = transform.eulerAngles;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_eulerAngles_mCAAF48EFCF628F1ED91C2FFE75A4FD19C039DD6A(L_0, NULL);
		V_0 = L_1;
		// rotationYAxis = angles.y;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		float L_3 = L_2.___y_3;
		__this->___rotationYAxis_13 = L_3;
		// rotationXAxis = angles.x;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		float L_5 = L_4.___x_2;
		__this->___rotationXAxis_14 = L_5;
		// if (GetComponent<Rigidbody>())
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_6;
		L_6 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// GetComponent<Rigidbody>().freezeRotation = true;
		Rigidbody_t268697F5A994213ED97393309870968BC1C7393C* L_8;
		L_8 = Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8(__this, Component_GetComponent_TisRigidbody_t268697F5A994213ED97393309870968BC1C7393C_m4B5CAD64B52D153BEA96432633CA9A45FA523DD8_RuntimeMethod_var);
		Rigidbody_set_freezeRotation_m6D049F82E9133020C31EEFB35A179A56364325DC(L_8, (bool)1, NULL);
	}

IL_003d:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit_LateUpdate_m88BAD2785B3447A239E1094CBEBEC160B1D5C270 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if (target)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___target_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_01ae;
		}
	}
	{
		// if (Input.GetMouseButton(1))
		bool L_2;
		L_2 = Input_GetMouseButton_mE545CF4B790C6E202808B827E3141BEC3330DB70(1, NULL);
		if (!L_2)
		{
			goto IL_0067;
		}
	}
	{
		// velocityX += xSpeed * Input.GetAxis("Mouse X") * distance * 0.02f;
		float L_3 = __this->___velocityX_15;
		float L_4 = __this->___xSpeed_6;
		float L_5;
		L_5 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral88BEE283254D7094E258B3A88730F4CC4F1E4AC7, NULL);
		float L_6 = __this->___distance_5;
		__this->___velocityX_15 = ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_4, L_5)), L_6)), (0.0199999996f)))));
		// velocityY += ySpeed * Input.GetAxis("Mouse Y") * 0.02f;
		float L_7 = __this->___velocityY_16;
		float L_8 = __this->___ySpeed_7;
		float L_9;
		L_9 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteral16DD21BE77B115D392226EB71A2D3A9FDC29E3F0, NULL);
		__this->___velocityY_16 = ((float)il2cpp_codegen_add(L_7, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_8, L_9)), (0.0199999996f)))));
	}

IL_0067:
	{
		// rotationYAxis += velocityX;
		float L_10 = __this->___rotationYAxis_13;
		float L_11 = __this->___velocityX_15;
		__this->___rotationYAxis_13 = ((float)il2cpp_codegen_add(L_10, L_11));
		// rotationXAxis -= velocityY;
		float L_12 = __this->___rotationXAxis_14;
		float L_13 = __this->___velocityY_16;
		__this->___rotationXAxis_14 = ((float)il2cpp_codegen_subtract(L_12, L_13));
		// rotationXAxis = ClampAngle(rotationXAxis, yMinLimit, yMaxLimit);
		float L_14 = __this->___rotationXAxis_14;
		float L_15 = __this->___yMinLimit_8;
		float L_16 = __this->___yMaxLimit_9;
		float L_17;
		L_17 = ETFXMouseOrbit_ClampAngle_m0465F9A5E01116400F3D22596C9EFB68F949297D(L_14, L_15, L_16, NULL);
		__this->___rotationXAxis_14 = L_17;
		// Quaternion toRotation = Quaternion.Euler(rotationXAxis, rotationYAxis, 0);
		float L_18 = __this->___rotationXAxis_14;
		float L_19 = __this->___rotationYAxis_13;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20;
		L_20 = Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline(L_18, L_19, (0.0f), NULL);
		// Quaternion rotation = toRotation;
		V_0 = L_20;
		// distance = Mathf.Clamp(distance - Input.GetAxis("Mouse ScrollWheel") * 5, distanceMin, distanceMax);
		float L_21 = __this->___distance_5;
		float L_22;
		L_22 = Input_GetAxis_m1F49B26F24032F45FB4583C95FB24E6771A161D4(_stringLiteralFC6687DC37346CD2569888E29764F727FAF530E0, NULL);
		float L_23 = __this->___distanceMin_10;
		float L_24 = __this->___distanceMax_11;
		float L_25;
		L_25 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)il2cpp_codegen_subtract(L_21, ((float)il2cpp_codegen_multiply(L_22, (5.0f))))), L_23, L_24, NULL);
		__this->___distance_5 = L_25;
		// if (Physics.Linecast(target.position, transform.position, out hit))
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26 = __this->___target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_26, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_28, NULL);
		bool L_30;
		L_30 = Physics_Linecast_m92B9E7A0130FAA5613977E5C9F887ED629CF3A14(L_27, L_29, (&V_1), NULL);
		if (!L_30)
		{
			goto IL_0122;
		}
	}
	{
		// distance -= hit.distance;
		float L_31 = __this->___distance_5;
		float L_32;
		L_32 = RaycastHit_get_distance_m035194B0E9BB6229259CFC43B095A9C8E5011C78((&V_1), NULL);
		__this->___distance_5 = ((float)il2cpp_codegen_subtract(L_31, L_32));
	}

IL_0122:
	{
		// Vector3 negDistance = new Vector3(0.0f, 0.0f, -distance);
		float L_33 = __this->___distance_5;
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&V_2), (0.0f), (0.0f), ((-L_33)), NULL);
		// Vector3 position = rotation * negDistance + target.position;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Quaternion_op_Multiply_mF1348668A6CCD46FBFF98D39182F89358ED74AC0(L_34, L_35, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___target_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_36, L_38, NULL);
		V_3 = L_39;
		// transform.rotation = rotation;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_41 = V_0;
		Transform_set_rotation_m61340DE74726CF0F9946743A727C4D444397331D(L_40, L_41, NULL);
		// transform.position = position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_3;
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_42, L_43, NULL);
		// velocityX = Mathf.Lerp(velocityX, 0, Time.deltaTime * smoothTime);
		float L_44 = __this->___velocityX_15;
		float L_45;
		L_45 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_46 = __this->___smoothTime_12;
		float L_47;
		L_47 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_44, (0.0f), ((float)il2cpp_codegen_multiply(L_45, L_46)), NULL);
		__this->___velocityX_15 = L_47;
		// velocityY = Mathf.Lerp(velocityY, 0, Time.deltaTime * smoothTime);
		float L_48 = __this->___velocityY_16;
		float L_49;
		L_49 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_50 = __this->___smoothTime_12;
		float L_51;
		L_51 = Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline(L_48, (0.0f), ((float)il2cpp_codegen_multiply(L_49, L_50)), NULL);
		__this->___velocityY_16 = L_51;
	}

IL_01ae:
	{
		// }
		return;
	}
}
// System.Single EpicToonFX.ETFXMouseOrbit::ClampAngle(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ETFXMouseOrbit_ClampAngle_m0465F9A5E01116400F3D22596C9EFB68F949297D (float ___angle0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	{
		// if (angle < -360F)
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-360.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360F;
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add(L_1, (360.0f)));
	}

IL_0011:
	{
		// if (angle > 360F)
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(360.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360F;
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract(L_3, (360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle, min, max);
		float L_4 = ___angle0;
		float L_5 = ___min1;
		float L_6 = ___max2;
		float L_7;
		L_7 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_4, L_5, L_6, NULL);
		return L_7;
	}
}
// System.Void EpicToonFX.ETFXMouseOrbit::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXMouseOrbit__ctor_mCCECFB7E06C2B4F0D1F93D142B8CA91738C63370 (ETFXMouseOrbit_tF90F05A1264D58A68A0292F11E2B905982531AF0* __this, const RuntimeMethod* method) 
{
	{
		// public float distance = 5.0f;
		__this->___distance_5 = (5.0f);
		// public float xSpeed = 120.0f;
		__this->___xSpeed_6 = (120.0f);
		// public float ySpeed = 120.0f;
		__this->___ySpeed_7 = (120.0f);
		// public float yMinLimit = -20f;
		__this->___yMinLimit_8 = (-20.0f);
		// public float yMaxLimit = 80f;
		__this->___yMaxLimit_9 = (80.0f);
		// public float distanceMin = .5f;
		__this->___distanceMin_10 = (0.5f);
		// public float distanceMax = 15f;
		__this->___distanceMax_11 = (15.0f);
		// public float smoothTime = 2f;
		__this->___smoothTime_12 = (2.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXTarget::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_Start_m4453DDD66DCD94DE34E122A858EF37B3622FBDDE (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetRenderer = GetComponent<Renderer>();
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0;
		L_0 = Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8(__this, Component_GetComponent_TisRenderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF_mC91ACC92AD57CA6CA00991DAF1DB3830BCE07AF8_RuntimeMethod_var);
		__this->___targetRenderer_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetRenderer_6), (void*)L_0);
		// targetCollider = GetComponent<Collider>();
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1;
		L_1 = Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14(__this, Component_GetComponent_TisCollider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76_m820398EDBF1D3766C3166A0C323A127662A29A14_RuntimeMethod_var);
		__this->___targetCollider_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___targetCollider_7), (void*)L_1);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXTarget::SpawnTarget()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targetRenderer.enabled = true; //Shows the target
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_0 = __this->___targetRenderer_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_0, (bool)1, NULL);
		// targetCollider.enabled = true; //Enables the collider
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_1 = __this->___targetCollider_7;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_1, (bool)1, NULL);
		// GameObject respawnEffect = Instantiate(respawnParticle, transform.position, transform.rotation) as GameObject; //Spawns attached respawn effect
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___respawnParticle_5;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_3, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_2, L_4, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(respawnEffect, 3.5f); //Removes attached respawn effect after x seconds
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_7, (3.5f), NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXTarget::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget_OnTriggerEnter_m02835C9D449C3DF9EF0F1ED51651FBB8B81EC58A (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* ___col0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4638A17716758734E0923FD7AD361AF48ABC24F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (col.tag == "Missile") // If collider is tagged as missile
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_0 = ___col0;
		String_t* L_1;
		L_1 = Component_get_tag_m7561A81116CAB82B8A459E934662BFC2039FB7EF(L_0, NULL);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral4638A17716758734E0923FD7AD361AF48ABC24F4, NULL);
		if (!L_2)
		{
			goto IL_006f;
		}
	}
	{
		// if (hitParticle)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___hitParticle_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_3, NULL);
		if (!L_4)
		{
			goto IL_006f;
		}
	}
	{
		// GameObject destructibleEffect = Instantiate(hitParticle, transform.position, transform.rotation) as GameObject; // Spawns attached hit effect
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___hitParticle_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_6, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9;
		L_9 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_8, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0(L_5, L_7, L_9, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m2537AA64AEAC12995F52F5B412866556B83CFBE0_RuntimeMethod_var);
		// Destroy(destructibleEffect, 2f); // Removes hit effect after x seconds
		Object_Destroy_m0E1B4CF8C29EB7FC8658C2C84C57F49C0DD12C91(L_10, (2.0f), NULL);
		// targetRenderer.enabled = false; // Hides the target
		Renderer_t320575F223BCB177A982E5DDB5DB19FAA89E7FBF* L_11 = __this->___targetRenderer_6;
		Renderer_set_enabled_m015E6D7B825528A31182F267234CC6A925F71DA8(L_11, (bool)0, NULL);
		// targetCollider.enabled = false; // Disables target collider
		Collider_t1CC3163924FCD6C4CC2E816373A929C1E3D55E76* L_12 = __this->___targetCollider_7;
		Collider_set_enabled_m8D5C3B5047592D227A52560FC9723D176E209F70(L_12, (bool)0, NULL);
		// StartCoroutine(Respawn()); // Sets timer for respawning the target
		RuntimeObject* L_13;
		L_13 = ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_14;
		L_14 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_13, NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator EpicToonFX.ETFXTarget::Respawn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ETFXTarget_Respawn_m1E5F54C8F846226F0BCF265F03D4BBAD53F20426 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* L_0 = (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3*)il2cpp_codegen_object_new(U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3_il2cpp_TypeInfo_var);
		U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1(L_0, 0, NULL);
		U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* L_1 = L_0;
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void EpicToonFX.ETFXTarget::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXTarget__ctor_m6D27B723D5EE302E348D7A5A7052A37FF09EFB33 (ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7__ctor_m040E268CB255063C99CBBCC0B266BDCCF8F8D4A1 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7_System_IDisposable_Dispose_m2A539129FAD324FCCFE7570356787FA4CE45616B (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean EpicToonFX.ETFXTarget/<Respawn>d__7::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRespawnU3Ed__7_MoveNext_m98CEBFB0B767AF44163EF68F42B2F00DA7C99D1A (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* L_1 = __this->___U3CU3E4__this_2;
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
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(3);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (3.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SpawnTarget();
		ETFXTarget_tFDEC4CD5CA1B096161C895BCC94565CBF1C9B835* L_5 = V_1;
		ETFXTarget_SpawnTarget_m6D2F813642C270F2D24D5C8E59FBB9DCEE4F2FA9(L_5, NULL);
		// }
		return (bool)0;
	}
}
// System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRespawnU3Ed__7_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9E9C4DF0C87738322C436CFF672F3C0FDD320374 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617 (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRespawnU3Ed__7_System_Collections_IEnumerator_Reset_mD1EC0BDBAB12A918382764A21350B45F5C2AD617_RuntimeMethod_var)));
	}
}
// System.Object EpicToonFX.ETFXTarget/<Respawn>d__7::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CRespawnU3Ed__7_System_Collections_IEnumerator_get_Current_mFCD05AB83ED3E741E6D5D7F5F8B51CEA97F24FBF (U3CRespawnU3Ed__7_t88C997B031897A61FB14C8C3A35EC3FE4058A9A3* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void EpicToonFX.ETFXLightFade::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLightFade_Start_m0D678058F25EBDBD14494760618ED99E7EED9A60 (ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40F46EE1E9B8B2D497BB832A96B0800F6A5E4082);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.GetComponent<Light>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1;
		L_1 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_0, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0035;
		}
	}
	{
		// li = gameObject.GetComponent<Light>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4;
		L_4 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_3, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		__this->___li_6 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___li_6), (void*)L_4);
		// initIntensity = li.intensity;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_5 = __this->___li_6;
		float L_6;
		L_6 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_5, NULL);
		__this->___initIntensity_7 = L_6;
		return;
	}

IL_0035:
	{
		// print("No light object found on " + gameObject.name);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		String_t* L_8;
		L_8 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_7, NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(_stringLiteral40F46EE1E9B8B2D497BB832A96B0800F6A5E4082, L_8, NULL);
		MonoBehaviour_print_mED815C779E369787B3E9646A6DE96FBC2944BF0B(L_9, NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXLightFade::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLightFade_Update_mE8F13E85F7C1AD93E0B9D2CE9737638E9BD340AF (ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (gameObject.GetComponent<Light>())
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_1;
		L_1 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_0, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		// li.intensity -= initIntensity * (Time.deltaTime / life);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_3 = __this->___li_6;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4 = L_3;
		float L_5;
		L_5 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_4, NULL);
		float L_6 = __this->___initIntensity_7;
		float L_7;
		L_7 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		float L_8 = __this->___life_4;
		Light_set_intensity_mE4820C7F39F490B92ED5EA0C3AADA7C0775BE854(L_4, ((float)il2cpp_codegen_subtract(L_5, ((float)il2cpp_codegen_multiply(L_6, ((float)(L_7/L_8)))))), NULL);
		// if (killAfterLife && li.intensity <= 0)
		bool L_9 = __this->___killAfterLife_5;
		if (!L_9)
		{
			goto IL_0061;
		}
	}
	{
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = __this->___li_6;
		float L_11;
		L_11 = Light_get_intensity_m8FA28D515853068A93FA68B2148809BBEE4E710F(L_10, NULL);
		if ((!(((float)L_11) <= ((float)(0.0f)))))
		{
			goto IL_0061;
		}
	}
	{
		// Destroy(gameObject.GetComponent<Light>());
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12;
		L_12 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_13;
		L_13 = GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E(L_12, GameObject_GetComponent_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_m360B68036A4201772041F6229CE3B2EB21B0C91E_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mFCDAE6333522488F60597AF019EA90BB1207A5AA(L_13, NULL);
	}

IL_0061:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXLightFade::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXLightFade__ctor_m1ED5D845611A6F5D0DEE7066BD50B26BCD197107 (ETFXLightFade_tDBE243B98772F55E0917A38C92D20E3E16E26C79* __this, const RuntimeMethod* method) 
{
	{
		// public float life = 0.2f;
		__this->___life_4 = (0.200000003f);
		// public bool killAfterLife = true;
		__this->___killAfterLife_5 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXPitchRandomizer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXPitchRandomizer_Start_m59C6A78C8AEBFB7E0C1475BC3AC48D3EE0E96832 (ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.GetComponent<AudioSource>().pitch *= 1 + Random.Range(-randomPercent / 100, randomPercent / 100);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_1;
		L_1 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(L_0, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_2 = L_1;
		float L_3;
		L_3 = AudioSource_get_pitch_mB1B0B8A52400B5C798BF1E644FE1C2FFA20A9863(L_2, NULL);
		float L_4 = __this->___randomPercent_4;
		float L_5 = __this->___randomPercent_4;
		float L_6;
		L_6 = Random_Range_mF26F26EB446B76823B4815C91FA0907B484DF02B(((float)(((-L_4))/(100.0f))), ((float)(L_5/(100.0f))), NULL);
		AudioSource_set_pitch_mD14631FC99BF38AAFB356D9C45546BC16CF9E811(L_2, ((float)il2cpp_codegen_multiply(L_3, ((float)il2cpp_codegen_add((1.0f), L_6)))), NULL);
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXPitchRandomizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXPitchRandomizer__ctor_m5A7D44A2501727B8D8CFA36DF1DAAD0652A78BD2 (ETFXPitchRandomizer_t9B94C8E4864F0AB2DEF6B4C0B82CCE3472074EEF* __this, const RuntimeMethod* method) 
{
	{
		// public float randomPercent = 10;
		__this->___randomPercent_4 = (10.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void EpicToonFX.ETFXRotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXRotation_Start_mE170B11ECA9897944DF1D88D87CE6C393707E7D5 (ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71* __this, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXRotation::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXRotation_Update_mFEF375BFB4CEA01E6D71EF0CC11ADD6014784F6A (ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71* __this, const RuntimeMethod* method) 
{
	{
		// if (rotateSpace == spaceEnum.Local)
		int32_t L_0 = __this->___rotateSpace_5;
		if (L_0)
		{
			goto IL_0023;
		}
	}
	{
		// transform.Rotate(rotateVector * Time.deltaTime);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___rotateVector_4;
		float L_3;
		L_3 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_2, L_3, NULL);
		Transform_Rotate_m2A308205498AFEEA3DF784B1C86E4F7C126CA2EE(L_1, L_4, NULL);
	}

IL_0023:
	{
		// if (rotateSpace == spaceEnum.World)
		int32_t L_5 = __this->___rotateSpace_5;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0048;
		}
	}
	{
		// transform.Rotate(rotateVector * Time.deltaTime, Space.World);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = __this->___rotateVector_4;
		float L_8;
		L_8 = Time_get_deltaTime_m7AB6BFA101D83E1D8F2EF3D5A128AEE9DDBF1A6D(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_7, L_8, NULL);
		Transform_Rotate_mAE711E1B1F639FDBA7B456E1E1B35DB90EEB737A(L_6, L_9, 0, NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void EpicToonFX.ETFXRotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ETFXRotation__ctor_m819E8377B916CB68CEA35D318A4B1EFED3B1D007 (ETFXRotation_t72433929D1B73BD508CF35DC32C38FC1E0BCBB71* __this, const RuntimeMethod* method) 
{
	{
		// public Vector3 rotateVector = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->___rotateVector_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CollCube_getCollEd_mF79F309D9726A2EFDCAE9380F6224076ED446B4F_inline (CollCube_tA5A7C7B5BCABBA766F8C83C4B41E45D337A89B1E* __this, const RuntimeMethod* method) 
{
	{
		// return collEd;
		bool L_0 = __this->___collEd_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m66E346161C9778DF8486DB4FE823D8F81A54AF1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_red_m27D04C1E5FE794AD933B7B9364F3D34B9EA25109_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.0f), (0.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color32__ctor_mC9C6B443F0C7CA3F8B174158B2AF6F05E18EAC4E_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B* __this, uint8_t ___r0, uint8_t ___g1, uint8_t ___b2, uint8_t ___a3, const RuntimeMethod* method) 
{
	{
		__this->___rgba_0 = 0;
		uint8_t L_0 = ___r0;
		__this->___r_1 = L_0;
		uint8_t L_1 = ___g1;
		__this->___g_2 = L_1;
		uint8_t L_2 = ___b2;
		__this->___b_3 = L_2;
		uint8_t L_3 = ___a3;
		__this->___a_4 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color32_op_Implicit_m203A634DBB77053C9400C68065CA29529103D172_inline (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___c0, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_0 = ___c0;
		uint8_t L_1 = L_0.___r_1;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_2 = ___c0;
		uint8_t L_3 = L_2.___g_2;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_4 = ___c0;
		uint8_t L_5 = L_4.___b_3;
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_6 = ___c0;
		uint8_t L_7 = L_6.___a_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8;
		memset((&L_8), 0, sizeof(L_8));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_8), ((float)(((float)L_1)/(255.0f))), ((float)(((float)L_3)/(255.0f))), ((float)(((float)L_5)/(255.0f))), ((float)(((float)L_7)/(255.0f))), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m57EE8D709A93B2B0FF8D499FA2947B1D61CB1FD6_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, float ___t2, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___t2;
		float L_1;
		L_1 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_0, NULL);
		___t2 = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___b1;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___x_2;
		float L_8 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___a0;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___b1;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___a0;
		float L_14 = L_13.___y_3;
		float L_15 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___a0;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___b1;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___a0;
		float L_21 = L_20.___z_4;
		float L_22 = ___t2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Toggle_get_isOn_m89A609E936CD67F460E336CA8E03C4047BFB6619_inline (Toggle_tBF13F3EBA485E06826FD8A38F4B4C1380DF21A1F* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_IsOn; }
		bool L_0 = __this->___m_IsOn_24;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_get_identity_mB9CAEEB21BC81352CBF32DB9664BFC06FA7EA27B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ((Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields*)il2cpp_codegen_static_fields_for(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_il2cpp_TypeInfo_var))->___identityQuaternion_4;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_yellow_m1EF7276EF58050DFBA8921E2383F0249C08D346F_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (0.921568632f), (0.0156862754f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_mD4601D966F1F58F3FCA01B3FC19A12D0AD0396DD_inline (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___x0;
		float L_1 = ___y1;
		float L_2 = ___z2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		memset((&L_3), 0, sizeof(L_3));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_3), L_0, L_1, L_2, /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_3, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5;
		L_5 = Quaternion_Internal_FromEulerRad_m2842B9FFB31CDC0F80B7C2172E22831D11D91E93(L_4, NULL);
		V_0 = L_5;
		goto IL_001b;
	}

IL_001b:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_mFB4910B358B986AFB22114ED90458E8341867479_inline (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		float L_2 = ___a0;
		float L_3 = ___t2;
		float L_4;
		L_4 = Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mD921B23F47F5347996C56DC789D1DE16EE27D9B1_inline (float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___value0;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___value0;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___value0;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
