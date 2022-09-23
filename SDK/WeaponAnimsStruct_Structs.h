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
	// # Structs
	// --------------------------------------------------
	/**
	 * UserDefinedStruct WeaponAnimsStruct.WeaponAnimsStruct
	 * Size -> 0x0100
	 */
	struct FWeaponAnimsStruct
	{
	public:
		TArray<class UAnimMontage*>                                LightAttacksCombo_3_AB31356042AA6F196EE0759A8AA864F6;    // 0x0000(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                HeavyAttackChargeWithHold_Release_6_ABFE6087446A23480BEDF6819FF757A6; // 0x0010(0x0010) Edit, BlueprintVisible
		TArray<class UAnimSequence*>                               BlockStartup_Loop_Release_9_1526AFD14C3D2AADB4A86F98E9F19154; // 0x0020(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                BlockHitCenter_Left_Right_16_44FD3A98448CB860CA06EEB55A6B572C; // 0x0030(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                DodgeBack_Left_Right_15_1C124A01457101F8232A01BAEB344B1A; // 0x0040(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                Equip_Unequip_18_2F975FC54545BD49844A82B8F6A97D9F;       // 0x0050(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                HitBlockingEnemyLightAttacks_HeavyAttack_ParryHit_57_F49DE6294943F7F2D95068A9FA2BD960; // 0x0060(0x0010) Edit, BlueprintVisible
		TArray<class UAnimSequence*>                               IdleNormal_Exhausted_23_EE1CC6374E6060F1F825D493C76350FB; // 0x0070(0x0010) Edit, BlueprintVisible
		TArray<class UAnimSequence*>                               JumpStart_Loop_Land_38_B1CD4EDF42CCF766EA6C469A31ECD818; // 0x0080(0x0010) Edit, BlueprintVisible
		TArray<class UBlendSpaceBase*>                             LocomotionBlendspacesNormal_Crouched_TurnInPlaceNormal_TurnInPlaceCrouched_43_9B897DDD49BE5B692103D09FE39B93A3; // 0x0090(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                HitReactsLightCenter_Left_Right_30_5E5274E74587F85CAC19078049ACC7F5; // 0x00A0(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                HitReactsHeavyCenter_Left_Right_32_3548F8654D13857034EA699D31603CA3; // 0x00B0(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                StaggersCenter_Left_Right_35_1066300D4E824713C9F46497078D2BC6; // 0x00C0(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                KicksHigh_Low_42_424ED4334A516E1F9CB2BDBBD20DF0DB;       // 0x00D0(0x0010) Edit, BlueprintVisible
		TArray<class UAnimMontage*>                                ParryMontageParry_Riposte_49_CCA9999C48F94EA3F24B4DA33B9B7E9A; // 0x00E0(0x0010) Edit, BlueprintVisible
		class UAimOffsetBlendSpace1D*                              AimOffset_56_78CAE6A84A4630A777462BA7352CFC31;           // 0x00F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UBlendSpace1D*                                       SprintBlendspace_60_DFF210BF4D02FF79D47033823170AB1B;    // 0x00F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
