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
	 * AnimBlueprintGeneratedClass ABP_BaseCharacter.ABP_BaseCharacter_C
	 * Size -> 0x2AE9 (FullSize[0x2DA1] - InheritedSize[0x02B8])
	 */
	class UABP_BaseCharacter_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_Q0BW[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_3;                                    // 0x02C8(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x0310(0x0158)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_10;                       // 0x0468(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_9;                        // 0x0490(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_8;                        // 0x04B8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_7;                        // 0x04E0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_6;                        // 0x0508(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_11;                         // 0x0530(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_11;                            // 0x05B0(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_10;                         // 0x05E0(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_10;                            // 0x0660(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_9;                          // 0x0690(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_9;                             // 0x0710(0x0030)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_11;                        // 0x0740(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_6;                        // 0x07E0(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_8;                             // 0x08C8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_5;                            // 0x08F8(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_10;                        // 0x09A8(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_9;                         // 0x0A48(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_5;                        // 0x0AE8(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_4;                        // 0x0BD0(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_8;                         // 0x0CB8(0x00A0)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_3;                        // 0x0D58(0x00E8)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer_2;                        // 0x0E40(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_7;                             // 0x0F28(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_4;                            // 0x0F58(0x00B0)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization;                           // 0x1008(0x0070)
		struct FAnimNode_LinkedAnimLayer                           AnimGraphNode_LinkedAnimLayer;                           // 0x1078(0x00B0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x1128(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x1150(0x0028)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x1178(0x0048)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_5;                        // 0x11C0(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_8;                          // 0x11E8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_6;                             // 0x1268(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_7;                          // 0x1298(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_5;                             // 0x1318(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x1348(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_7;                         // 0x13F8(0x00A0)
		struct FAnimNode_ControlRig                                AnimGraphNode_ControlRig;                                // 0x1498(0x0368)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x1800(0x0158)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x1958(0x00C0)
		struct FAnimNode_Root                                      AnimGraphNode_Root_2;                                    // 0x1A18(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_6;                          // 0x1A48(0x0080)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_5;                          // 0x1AC8(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_6;                         // 0x1B48(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x1BE8(0x0158)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_4;                          // 0x1D40(0x0080)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x1DC0(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x1E60(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x1F00(0x0028)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1F28(0x0028)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x1F50(0x00E8)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x2038(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x2068(0x00B0)
		struct FAnimNode_BlendListByEnum                           AnimGraphNode_BlendListByEnum;                           // 0x2118(0x00B0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x21C8(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x2320(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x2348(0x00A0)
		struct FAnimNode_MeshSpaceRefPose                          AnimGraphNode_MeshRefPose;                               // 0x23E8(0x0010)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x23F8(0x0020)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x2418(0x0190)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_4;                        // 0x25A8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_3;                        // 0x25D0(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult_2;                        // 0x25F8(0x0028)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x2620(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_3;                          // 0x2648(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x26C8(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x26F8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x2778(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x27A8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x2828(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x2858(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x2908(0x00A0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x29A8(0x00A0)
		struct FAnimNode_LinkedInputPose                           AnimGraphNode_LinkedInputPose;                           // 0x2A48(0x0118)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x2B60(0x0048)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x2BA8(0x0030)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x2BD8(0x0090)
		float                                                      __CustomProperty_NonCombat_2016996D45DAB978827D8CAA371EA24F; // 0x2C68(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             __CustomProperty_LookAtLocation_2016996D45DAB978827D8CAA371EA24F; // 0x2C6C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      __CustomProperty_LookAtAlpha_2016996D45DAB978827D8CAA371EA24F; // 0x2C78(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ECharacterStance                                           Character_Stance;                                        // 0x2C7C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EWeaponType                                                Weapon_Type;                                             // 0x2C7D(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_L4NZ[0x2];                                   // 0x2C7E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Pitch;                                                   // 0x2C80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkRight;                                               // 0x2C84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkForward;                                             // 0x2C88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Angular_Velocity;                                        // 0x2C8C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTransform                                          Xbow_Grip_Transform;                                     // 0x2C90(0x0030) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Aiming;                                                  // 0x2CC0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Crouched;                                             // 0x2CC1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Reloading;                                               // 0x2CC2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_In_Air;                                               // 0x2CC3(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Sprinting;                                               // 0x2CC4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Blocking;                                                // 0x2CC5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Vaulting;                                                // 0x2CC6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Dead;                                                 // 0x2CC7(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		float                                                      Footstep_Volume;                                         // 0x2CC8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4JM3[0x4];                                   // 0x2CCC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UActorComponent*                                     SayVoice;                                                // 0x2CD0(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Is_Landing;                                              // 0x2CD8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Falling;                                              // 0x2CD9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_NHEY[0x2];                                   // 0x2CDA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Landing_Velocity;                                        // 0x2CDC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Pelvis_Offset;                                           // 0x2CE0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Exhausted;                                               // 0x2CE4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Feminine_Body_Type;                                      // 0x2CE5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_18SM[0x2];                                   // 0x2CE6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          Anim_Table;                                              // 0x2CE8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<EWeaponType, struct FWeaponAnimsStruct>               Weapon_Anims;                                            // 0x2CF0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             Look_At_Location;                                        // 0x2D40(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Rebuild_Ongoing;                                         // 0x2D4C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_0XU5[0x3];                                   // 0x2D4D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Look_at_Alpha;                                           // 0x2D50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_U3DN[0x4];                                   // 0x2D54(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSnapshot                                       DeathRagdollPose;                                        // 0x2D58(0x0038) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      LocomotionRateScale;                                     // 0x2D90(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             LeftHand2HTarget;                                        // 0x2D94(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       LeftHandIKEnabled;                                       // 0x2DA0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

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
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_ControlRig_2016996D45DAB978827D8CAA371EA24F();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_A6B8DE514BE06423C8A209BFE44351C0();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_980FB8EB469C6A1C4052F5979CE38C22();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_166D2AFE4A50127513E9768C7167B635();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_CA622F354C51421315EC728B9D3133B8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_RotationOffsetBlendSpace_ADFE0D8E46BF24752A9993ABCE6E48BB();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_B9F276134E643E32262F36B6A9CDFE39();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_384F85184373266C24744EB1B6FA20EE();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_C03C791B490AD7DC1091F8A080444964();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_FA040F84496BEA98740AFB89490D18C4();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_55880FED43BC6EDF561051A20361F23C();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_656B533344C0CAB29B01B0ABAD4EF634();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_A3C6977640B8840696B4959065629DE9();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_98EE300A4524303DF35C9F9F042E0BAF();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_30D9E82F4B5BA9ACA31641A76DFC7311();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_4CDEEA0947FD71D7CC9330B0634C9A76();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_78BC3A594AF9100C84433EAC41E120C5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_1261D6944AB642FB45C900BEDC8B879B();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_A682ABC140DDD9BC921C65A2E7A63093();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_30FBF944411D5F0AC38497B535AA52B8();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_887649BC402024AB21573CB07DC621A5();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_C691154340135A276B3F7C880BCB6F35();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_F51847284C3B50E856C842A7321C39C7();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_ED701760458609BA4E6F0D93973D4011();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_4713F7E84DC5F77E22DC04A688F05B00();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_5BDF613A454F5C81771161A7B0845741();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_7C509C6847F0F6FDBA5314967960EE00();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_ED1DAAC944411553C34E7B87DFDADF8A();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_FC9A634E4E6CA1DDDA69F6AF236FB673();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_3F7DEF52475D27FBAEA1AEB5BF5017E0();
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
		void AnimNotify_Warcry();
		void ExecuteUbergraph_ABP_BaseCharacter(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
