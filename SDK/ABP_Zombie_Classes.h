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
	 * AnimBlueprintGeneratedClass ABP_Zombie.ABP_Zombie_C
	 * Size -> 0x1678 (FullSize[0x1930] - InheritedSize[0x02B8])
	 */
	class UABP_Zombie_C : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_R23G[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FAnimNode_Slot                                      AnimGraphNode_Slot_2;                                    // 0x02C8(0x0048)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_4;                          // 0x0310(0x0158)
		struct FAnimNode_Slot                                      AnimGraphNode_Slot;                                      // 0x0468(0x0048)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_5;                           // 0x04B0(0x0028)
		struct FAnimNode_PowerIK                                   AnimGraphNode_PowerIK;                                   // 0x04D8(0x0208)
		struct FAnimNode_ConvertLocalToComponentSpace              AnimGraphNode_LocalToComponentSpace;                     // 0x06E0(0x0020)
		struct FAnimNode_ConvertComponentToLocalSpace              AnimGraphNode_ComponentToLocalSpace;                     // 0x0700(0x0020)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_5;                         // 0x0720(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_3;                          // 0x07C0(0x0158)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_4;                           // 0x0918(0x0028)
		struct FAnimNode_LayeredBoneBlend                          AnimGraphNode_LayeredBoneBlend;                          // 0x0940(0x00C0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_3;                           // 0x0A00(0x0028)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose_2;                          // 0x0A28(0x0158)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer_2;                            // 0x0B80(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_4;                             // 0x0BF8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_3;                            // 0x0C28(0x00B0)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_4;                         // 0x0CD8(0x00A0)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot_2;                            // 0x0D78(0x0090)
		struct FAnimNode_RandomPlayer                              AnimGraphNode_RandomPlayer;                              // 0x0E08(0x0078)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_3;                             // 0x0E80(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine_2;                            // 0x0EB0(0x00B0)
		struct FAnimNode_PoseSnapshot                              AnimGraphNode_PoseSnapshot;                              // 0x0F60(0x0090)
		struct FAnimNode_BlendSpacePlayer                          AnimGraphNode_BlendSpacePlayer;                          // 0x0FF0(0x00E8)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_3;                         // 0x10D8(0x00A0)
		struct FAnimNode_RotationOffsetBlendSpace                  AnimGraphNode_RotationOffsetBlendSpace;                  // 0x1178(0x0190)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose_2;                           // 0x1308(0x0028)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool_2;                         // 0x1330(0x00A0)
		struct FAnimNode_SaveCachedPose                            AnimGraphNode_SaveCachedPose;                            // 0x13D0(0x0158)
		struct FAnimNode_BlendListByBool                           AnimGraphNode_BlendListByBool;                           // 0x1528(0x00A0)
		struct FAnimNode_UseCachedPose                             AnimGraphNode_UseCachedPose;                             // 0x15C8(0x0028)
		struct FAnimNode_Root                                      AnimGraphNode_Root;                                      // 0x15F0(0x0030)
		struct FAnimNode_Inertialization                           AnimGraphNode_Inertialization;                           // 0x1620(0x0070)
		struct FAnimNode_TransitionResult                          AnimGraphNode_TransitionResult;                          // 0x1690(0x0028)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer_2;                          // 0x16B8(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult_2;                             // 0x1738(0x0030)
		struct FAnimNode_SequencePlayer                            AnimGraphNode_SequencePlayer;                            // 0x1768(0x0080)
		struct FAnimNode_StateResult                               AnimGraphNode_StateResult;                               // 0x17E8(0x0030)
		struct FAnimNode_StateMachine                              AnimGraphNode_StateMachine;                              // 0x1818(0x00B0)
		float                                                      Pitch;                                                   // 0x18C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkForward;                                             // 0x18CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      WalkRight;                                               // 0x18D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Is_Crouched;                                             // 0x18D4(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_In_Air;                                               // 0x18D5(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Falling;                                              // 0x18D6(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QGR1[0x1];                                   // 0x18D7(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Landing_Velocity;                                        // 0x18D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Pelvis_Offset;                                           // 0x18DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Is_Dead;                                                 // 0x18E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Landing;                                              // 0x18E1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Sprinting;                                               // 0x18E2(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_H0AN[0x1];                                   // 0x18E3(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZombieType;                                              // 0x18E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Angular_Velocity;                                        // 0x18E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Ragdolling;                                              // 0x18EC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8WIB[0x3];                                   // 0x18ED(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Footstep_Volume;                                         // 0x18F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4CWC[0x4];                                   // 0x18F4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPoseSnapshot                                       DeathRagdollPose;                                        // 0x18F8(0x0038) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void AnimGraph(struct FPoseLink* AnimGraph);
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_423BBD0F4363AE00158AAFAC77E9CE33();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_PowerIK_C997F8044A42891665C032BA37F792BA();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_81AB99504B5AFE0AF8E1369E77781466();
		void EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_TransitionResult_75E503014F6847C95462D1BFEA1E3979();
		void BlueprintUpdateAnimation(float DeltaTimeX);
		void BlueprintInitializeAnimation();
		void AnimNotify_DeathScream();
		void AnimNotify_Light_Exertion();
		void AnimNotify_MediumExertion();
		void AnimNotify_HeavyExertion();
		void AnimNotify_Step();
		void AnimNotify_Exhausted();
		void AnimNotify_ArmorFootstep();
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
		void ExecuteUbergraph_ABP_Zombie(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
