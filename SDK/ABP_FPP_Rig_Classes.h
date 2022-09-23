#pragma once

/**
 * Name: Agartha
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * AnimBlueprintGeneratedClass ABP_FPP_Rig.ABP_FPP_Rig_C
	 * Size -> 0x4E34 (FullSize[0x50EC] - InheritedSize[0x02B8])
	 */
	class UABP_FPP_Rig_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_GJY7[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x02C8(0x0118)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_7;                          // 0x03E0(0x0158)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum_2;                         // 0x0538(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x05E8(0x00A0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x0688(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_37;                         // 0x0738(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_6;                          // 0x07B8(0x0158)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_5;                          // 0x0910(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0A68(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_10;                          // 0x0AB0(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace_2;                // 0x0AD8(0x0190)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_9;                           // 0x0C68(0x0028)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x0C90(0x0190)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x0E20(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_36;                         // 0x0EC0(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_47;                       // 0x0F40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_46;                       // 0x0F68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_45;                       // 0x0F90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_44;                       // 0x0FB8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_43;                       // 0x0FE0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_42;                       // 0x1008(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_35;                         // 0x1030(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_30;                            // 0x10B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_34;                         // 0x10E0(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x1160(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x1200(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_29;                            // 0x12E8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_33;                         // 0x1318(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_28;                            // 0x1398(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_32;                         // 0x13C8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_27;                            // 0x1448(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_7;                            // 0x1478(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x1528(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_8;                           // 0x1680(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_7;                           // 0x16A8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_31;                         // 0x16D0(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_30;                         // 0x1750(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x17D0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x1928(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1950(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1978(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x19A0(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1AF8(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1B40(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_41;                       // 0x1B68(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_40;                       // 0x1B90(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_39;                       // 0x1BB8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_38;                       // 0x1BE0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_37;                       // 0x1C08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_36;                       // 0x1C30(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_35;                       // 0x1C58(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_34;                       // 0x1C80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_33;                       // 0x1CA8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_32;                       // 0x1CD0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_31;                       // 0x1CF8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_30;                       // 0x1D20(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_29;                       // 0x1D48(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_29;                         // 0x1D70(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_26;                            // 0x1DF0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_28;                         // 0x1E20(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_25;                            // 0x1EA0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_27;                         // 0x1ED0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_24;                            // 0x1F50(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_26;                         // 0x1F80(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x2000(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x20A0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_23;                            // 0x2188(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_25;                         // 0x21B8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_22;                            // 0x2238(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_24;                         // 0x2268(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_21;                            // 0x22E8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_23;                         // 0x2318(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_20;                            // 0x2398(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_6;                            // 0x23C8(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_28;                       // 0x2478(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_27;                       // 0x24A0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_26;                       // 0x24C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_25;                       // 0x24F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_24;                       // 0x2518(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_23;                       // 0x2540(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_22;                         // 0x2568(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_19;                            // 0x25E8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_21;                         // 0x2618(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x2698(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x2738(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_18;                            // 0x2820(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_20;                         // 0x2850(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_17;                            // 0x28D0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_19;                         // 0x2900(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_16;                            // 0x2980(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x29B0(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_18;                         // 0x2A60(0x0080)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_22;                       // 0x2AE0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_21;                       // 0x2B08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_20;                       // 0x2B30(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_19;                       // 0x2B58(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_18;                       // 0x2B80(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_17;                       // 0x2BA8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_17;                         // 0x2BD0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_15;                            // 0x2C50(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x2C80(0x00A0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_16;                         // 0x2D20(0x0080)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x2DA0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_14;                            // 0x2E88(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_15;                         // 0x2EB8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_13;                            // 0x2F38(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_14;                         // 0x2F68(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_12;                            // 0x2FE8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x3018(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_16;                       // 0x30C8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_15;                       // 0x30F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_14;                       // 0x3118(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_13;                       // 0x3140(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_12;                       // 0x3168(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_11;                       // 0x3190(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_13;                         // 0x31B8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x3238(0x0030)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x3268(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x3350(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x3380(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x3400(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x3430(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x34B0(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x34E0(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x3590(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x35B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x35E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x3608(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x3630(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x36B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x36E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x3760(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x3790(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x3810(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x3840(0x00B0)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x38F0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x3918(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x3940(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x3968(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x3990(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x39B8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x39E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x3A60(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x3A90(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x3B10(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x3BB0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x3C98(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x3CC8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x3D48(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x3D78(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x3DF8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x3E28(0x00B0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x3ED8(0x0030)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x3F08(0x00C0)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x3FC8(0x00B0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x4078(0x0048)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x40C0(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x40F0(0x00A0)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization;                           // 0x4190(0x0070)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x4200(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x4220(0x0020)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_8;                              // 0x4240(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_7;                              // 0x4348(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_6;                              // 0x4450(0x0108)
		struct FAnimNode_CopyBone                                  AnimGraphNode_CopyBone;                                  // 0x4558(0x00F0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x4648(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x46C8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x4748(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_5;                              // 0x47E8(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_4;                              // 0x48F0(0x0108)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x49F8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x4B50(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x4B78(0x0028)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_3;                              // 0x4BA0(0x0108)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone_2;                              // 0x4CA8(0x0108)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x4DB0(0x0090)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x4E40(0x00A0)
		struct FAnimNode_ModifyBone                                AnimGraphNode_ModifyBone;                                // 0x4EE0(0x0108)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x4FE8(0x0080)
		EWeaponType                                                Weapon_Type;                                             // 0x5068(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_01CY[0x3];                                   // 0x5069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Pitch;                                                   // 0x506C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkRight;                                               // 0x5070(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkForward;                                             // 0x5074(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Aiming;                                                  // 0x5078(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Crouched;                                             // 0x5079(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Reloading;                                               // 0x507A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_In_Air;                                               // 0x507B(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Sprinting;                                               // 0x507C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Blocking;                                                // 0x507D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Vaulting;                                                // 0x507E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Doing_Heavy_Attack;                                   // 0x507F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Dead;                                                 // 0x5080(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Falling;                                              // 0x5081(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Landing;                                              // 0x5082(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Exhausted;                                               // 0x5083(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_IH16[0x4];                                   // 0x5084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMeshComponent*                              PP_Mesh;                                                 // 0x5088(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Landing_Velocity;                                        // 0x5090(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Pelvis_Offset;                                           // 0x5094(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EWeaponType, struct FWeaponAnimsStruct>               Weapon_Anims;                                            // 0x5098(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      PP_Pelvis_Z;                                             // 0x50E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpperBodyLayer(const struct FPoseLink& Basic_Loco, struct FPoseLink* UpperBodyLayer);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void Get_Locomotion_Blendspace(EWeaponType Weapon_Type, int32_t Index, class UBlendSpaceBase** BlendSpace);
		void Get_Idle(EWeaponType Weapon_Type, bool Exhausted, class UAnimSequence** Sequence);
		void Get_Jump_Land(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Jump_Loop(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Jump_Start(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Block_Release(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Block_Loop(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Block_Start(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Movement();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendListByBool_79B77088467D609CFD7308927C4604F5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_ModifyBone_A5805EB54AD47C802EBD4D97725A9E76();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_ModifyBone_3BE7A4E941BBCC04E19710A279B7C4E2();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendListByBool_FDF37CBB45838FE1AB7C908D014DA90F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_9104FDC04C801017432B6D9131B1032F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_7F68F3F24BFE99A3B7D889AA0F4C1B4F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_F0E34B2E4D9E0319617AC8A3C6FC04AB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_5FB366AB4DDC31409BF6FFA0064892D7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_6DECD41741A1A3FBC85C2BAE4151805B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_394AEC8841137E4AF174FC84306DB40C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_FAD374CB466583E75DA5F6ABCB854149();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_AEDC6AA4421486C90C333FB63AFFF73D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_7C5273584F3ACA08FF7C90B55A0E9B78();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_FE3148F342A2167A1980BEAD6F5C6143();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_ADB0C3D54775BC956837BC8349383436();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_117197014944665A0B1141913A3C2183();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_5CC463214BD644B0669935B7CB229F56();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_39313E80403D3164DB32DF9D4B12C497();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_9ECFADED460992E72653539DFAED7F7D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_034F16674641C9868AE2C69465A62075();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_717829BA4801C2C3D2DD93A42485D9D9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_CB254A0140ACFC6945018FBCD26ED2D9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_D945CF2E48F2B7F2C5115DB862970235();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_B44AC594468F52E8FC93C9A80D2CDC81();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_C480CA2446C715056FBD768F325ACDA4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_A77EECD0408898A2A801098A15B0A74F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_0FD13369405267CC2604DCBAD0DD9DC8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_07ED045D4C6EC162CD9EEBA8A7B732CC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_0B3E68FD43F8BC02277026A3D79EB179();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_A9CE510446DB35FAE9C1B58A23AFA1EA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_122DA140416E29FF05BEE2B953A22A7C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_9D9DD65349AD507987F61C8DDCA90B4C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_FB731E2A4D3FDE5B1560F89954C95ED3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_AC39588B4EE03FF2A60D87BE665AF032();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_4B41EB1846D2E52138E63581AC2C9C91();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_D0032DDC48396154CF56D3923C261A66();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_405FDADF49D397FFE0BC16AFB45E51C3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_1B0ED5BF4A6D3F79A9AF67B45E5E32E9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_137F816A469F603173C142A2490DD185();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_A513374A424E5842966BF59E13560D65();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_24A6190446BFCDBCBAA44290A55F9D0D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_CDDCFB1C46FC452027522B907F3E295F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_B31277C846DA44236AFE468953979DE9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_8B2F3C7248292CB3BF9FF0A464FDC152();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_54AE37B643A2087E04F803AA9BDB3EBF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_0F0DA26F4C150A93EA205198BB489266();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_20B782E1439C771FB35B73A08A276C0E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_DB87DC284DA56DDFD52E75B0E0AC8DD6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_1053205945F39F17B3F6C7AF2084FC45();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_E3A1C3FB485D12F292592C845C54C362();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_854054504281CB9AAF41F4B2E7BB383D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_EF90DB864EC6C654179E248C2868FEB7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_2FC2E1C247721424452335934BE13835();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_BED35E6F46D3BF411369F7B7EE70E3D3();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_ReloadStart();
		void AnimNotify_ReloadEnd();
		void AnimNotify_Vaulting();
		void AnimNotify_EndVaulting();
		void AnimNotify_Step();
		void AnimNotify_Dead();
		void BlueprintInitializeAnimation();
		void Store_Animation_Table();
		void ExecuteUbergraph_ABP_FPP_Rig(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
