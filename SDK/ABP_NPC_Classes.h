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
	 * AnimBlueprintGeneratedClass ABP_NPC.ABP_NPC_C
	 * Size -> 0x3208 (FullSize[0x34C0] - InheritedSize[0x02B8])
	 */
	class UABP_NPC_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_B5DQ[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x02C8(0x00B0)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x0378(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0398(0x0020)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x03B8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_6;                           // 0x0510(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x0538(0x0048)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x0580(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x0620(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0648(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0670(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x0698(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x06C0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x06E8(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_12;                         // 0x0710(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x0790(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x07C0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0840(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x0870(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x08F0(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x0920(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x09C0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x0AA8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x0AD8(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x0B88(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x0C28(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x0CC8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x0DB0(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x0E98(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x0F38(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x1020(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x1108(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x1138(0x00B0)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization;                           // 0x11E8(0x0070)
		struct FAnimNode_PowerIK_Ground                            AnimGraphNode_PowerIK_Ground;                            // 0x1258(0x0390)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend_2;                        // 0x15E8(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x16A8(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x16D0(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x1718(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x1740(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x17C0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x17F0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1870(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x18A0(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x1950(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x19F0(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1A18(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x1A40(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1B98(0x00C0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x1C58(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x1C88(0x0080)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1D08(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1E60(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x1EE0(0x00A0)
		struct FAnimNode_PowerIK                                   AnimGraphNode_PowerIK;                                   // 0x1F80(0x0208)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x2188(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x22E0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x2308(0x0080)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x2388(0x0368)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x26F0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x2790(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x2830(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x2918(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x2948(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x29F8(0x00B0)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x2AA8(0x0080)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x2B28(0x0190)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x2CB8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x2CE0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x2D08(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x2D30(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x2D58(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x2DD8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x2E08(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2E88(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x2EB8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2F38(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2F68(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x3018(0x00A0)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x30B8(0x0118)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x31D0(0x0090)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x3260(0x00A0)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x3300(0x0048)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x3348(0x0030)
		struct FVector                                             __CustomProperty_LookAtLocation_653F4BED472F7D14EE940F8E41E980E5; // 0x3378(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_LookAtAlpha_653F4BED472F7D14EE940F8E41E980E5; // 0x3384(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterStance                                           Character_Stance;                                        // 0x3388(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWeaponType                                                Weapon_Type;                                             // 0x3389(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_K8RU[0x2];                                   // 0x338A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Pitch;                                                   // 0x338C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkRight;                                               // 0x3390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkForward;                                             // 0x3394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Angular_Velocity;                                        // 0x3398(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5PS4[0x4];                                   // 0x339C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          Xbow_Grip_Transform;                                     // 0x33A0(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Aiming;                                                  // 0x33D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Crouched;                                             // 0x33D1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Reloading;                                               // 0x33D2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_In_Air;                                               // 0x33D3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Sprinting;                                               // 0x33D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Blocking;                                                // 0x33D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Vaulting;                                                // 0x33D6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Dead;                                                 // 0x33D7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Footstep_Volume;                                         // 0x33D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_8HDZ[0x4];                                   // 0x33DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActorComponent*                                     SayVoice;                                                // 0x33E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Is_Landing;                                              // 0x33E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Falling;                                              // 0x33E9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N4NA[0x2];                                   // 0x33EA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Landing_Velocity;                                        // 0x33EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Pelvis_Offset;                                           // 0x33F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Exhausted;                                               // 0x33F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Feminine_Body_Type;                                      // 0x33F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H6SG[0x2];                                   // 0x33F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          Anim_Table;                                              // 0x33F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EWeaponType, struct FWeaponAnimsStruct>               Weapon_Anims;                                            // 0x3400(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             Look_At_Location;                                        // 0x3450(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Rebuild_Ongoing;                                         // 0x345C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H7LJ[0x3];                                   // 0x345D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Look_at_Alpha;                                           // 0x3460(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_473H[0x4];                                   // 0x3464(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSnapshot                                       DeathRagdollPose;                                        // 0x3468(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      LocomotionRateScale;                                     // 0x34A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftHand2HTarget;                                        // 0x34A4(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftHandIKEnabled;                                       // 0x34B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_BIDC[0x7];                                   // 0x34B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequence*                                       Default_Animation;                                       // 0x34B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void UpperBodyLayer(const struct FPoseLink& Basic_Loco, struct FPoseLink* UpperBodyLayer);
		void AnimGraph(struct FPoseLink* AnimGraph);
		void Get_Sprint_Blendspace(EWeaponType Weapon_Type, class UBlendSpaceBase** BlendSpace);
		void Get_Aim_Offset(EWeaponType Weapon_Type, class UAimOffsetBlendSpace1D** Aim_Offset);
		void Get_Locomotion_Blendspace(EWeaponType Weapon_Type, int32_t Index, class UBlendSpaceBase** BlendSpace);
		void Get_Idle(EWeaponType Weapon_Type, bool Exhausted, class UAnimSequence** Sequence);
		void Get_Jump_Land(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Jump_Loop(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Jump_Start(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Block_Release(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Block_Loop(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Get_Block_Start(EWeaponType Weapon_Type, class UAnimSequence** Sequence);
		void Left_Hand_Grip(bool* Result);
		void Movement();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_PowerIK_0B466CBB432268B4A688FEB559C19A66();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_PowerIK_Ground_8FA2EFE64AC771BD0FAFA68560959E77();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_092AFC144008C2D2DE2736AADC83C531();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_CB45F8C44B4F89F623D0B3856AD00BD7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_16B398354386E530C5BE9A812EF5E3B3();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_855E41494B536A661631E098B0D8DDFC();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_B96165724B150585C5FC16AD174BF45C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_RotationOffsetBlendSpace_6341150F4CEC301EB61B3DA0245989D6();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_F80DBED44B1F8175582329AD83DCF2CA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_68DC07F5441CC7DBB06FA58EA6288A0A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_5B4E19B54A156843091B0C8A906E03DE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_70BE97784C721125C0B730AD13A36A8D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_FF2DE7124E8336E2818D7EA44107F286();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_8B1179D84CE3A33AB70677A1A48675B5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_4EAD32954CD1245064855D95BF02AC87();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_1035470A410BB1F5F673A2A05659AC16();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_7ED635724DEA7C1E35B7DC918A4F1B66();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_5BEA858740CAB6C1363F1284B0F33AA4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_6B56B0684D63B21576F10590B4158805();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_D19AB20C413ADB0227E13CA2FCB312F1();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_54D2931E4A743F99C5EBA3972EB6EF2B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_9451C7BE40E4987FF36D4B9949CBCF3A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_790438D24789F77E43268FA092D68A2D();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_86DC75B445ED96C49C0341A42D27D561();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_4C9538364B6FE18D185DC9AA0CAEA9CB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_FF596A5C401F225A209448A38F25CF1A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_345893A742B3136D89C21E93CE3A2406();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_AE08D92A42BAC2ECE9BEEC8D3E7FDA6C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_79FBA058412953E1D234058AD20C123E();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_2AF359744004CAA649EA608FD136F49F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_3A99E4AF44D6C8B994E2B9B07192A95A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_64C56CDA44C541EEB071648E8DBF327B();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void AnimNotify_ReloadStart();
		void AnimNotify_ReloadEnd();
		void AnimNotify_Vaulting();
		void AnimNotify_EndVaulting();
		void AnimNotify_Step();
		void AnimNotify_Dead();
		void AnimNotify_MediumExertion();
		void AnimNotify_HeavyExertion();
		void AnimNotify_LightExertion();
		void AnimNotify_MinorPain();
		void AnimNotify_MajorPain();
		void AnimNotify_DeathScream();
		void BlueprintInitializeAnimation();
		void AnimNotify_JumpStart();
		void AnimNotify_JumpLand();
		void AnimNotify_ArmorFootstep();
		void Store_Animation_Table();
		void AnimNotify_Exhausted();
		void AnimNotify_ArmorJump();
		void AnimNotify_ArmorLand();
		void AnimNotify_ArmorSprintFootstep();
		void AnimNotify_ArmorDodge();
		void AnimNotify_ArmorKick();
		void AnimNotify_ArmorLightAttack();
		void AnimNotify_ArmorHeavyCharge();
		void AnimNotify_ArmorHeavyRelease();
		void AnimNotify_ArmorBlock();
		void AnimNotify_ArmorHit();
		void AnimNotify_ArmorCrouch();
		void AnimNotify_ArmorFall();
		void AnimNotify_ShortLaugh();
		void AnimNotify_LongLaugh();
		void AnimNotify_Block_Loop();
		void ExecuteUbergraph_ABP_NPC(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
