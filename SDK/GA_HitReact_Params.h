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
	 * Function GA_HitReact.GA_HitReact_C.Direction From Hit Result
	 */
	struct UGA_HitReact_C_Direction_From_Hit_Result_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		unsigned char                                              UnknownData_HH6A[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Instigator;                                              // 0x0090(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Including_Back;                                          // 0x0098(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EDirection                                                 Direction;                                               // 0x0099(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.OnCancelled_062D5C734CE0692C196CF1A2A3F2AF24
	 */
	struct UGA_HitReact_C_OnCancelled_062D5C734CE0692C196CF1A2A3F2AF24_Params
	{	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.OnInterrupted_062D5C734CE0692C196CF1A2A3F2AF24
	 */
	struct UGA_HitReact_C_OnInterrupted_062D5C734CE0692C196CF1A2A3F2AF24_Params
	{	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.OnBlendOut_062D5C734CE0692C196CF1A2A3F2AF24
	 */
	struct UGA_HitReact_C_OnBlendOut_062D5C734CE0692C196CF1A2A3F2AF24_Params
	{	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.OnCompleted_062D5C734CE0692C196CF1A2A3F2AF24
	 */
	struct UGA_HitReact_C_OnCompleted_062D5C734CE0692C196CF1A2A3F2AF24_Params
	{	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.K2_OnEndAbility
	 */
	struct UGA_HitReact_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.Apply Damage
	 */
	struct UGA_HitReact_C_Apply_Damage_Params
	{	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.Play Montages
	 */
	struct UGA_HitReact_C_Play_Montages_Params
	{
	public:
		class UAnimMontage*                                        PP_Montage_To_Play;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        FPP_Montage_To_Play;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.Multicast Play Montages
	 */
	struct UGA_HitReact_C_Multicast_Play_Montages_Params
	{
	public:
		class UAnimMontage*                                        PP_Montage;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        FPP_Montage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.K2_ActivateAbilityFromEvent
	 */
	struct UGA_HitReact_C_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.Damage Armor
	 */
	struct UGA_HitReact_C_Damage_Armor_Params
	{	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.Damage Weapon or Shield On Block or Parry
	 */
	struct UGA_HitReact_C_Damage_Weapon_or_Shield_On_Block_or_Parry_Params
	{	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.Damage Attacker Weapon
	 */
	struct UGA_HitReact_C_Damage_Attacker_Weapon_Params
	{	};

	/**
	 * Function GA_HitReact.GA_HitReact_C.ExecuteUbergraph_GA_HitReact
	 */
	struct UGA_HitReact_C_ExecuteUbergraph_GA_HitReact_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
