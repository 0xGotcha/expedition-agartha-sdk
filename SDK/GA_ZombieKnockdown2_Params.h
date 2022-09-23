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
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.OnCancelled_9E8C91D84E93A634452566AAE11B4790
	 */
	struct UGA_ZombieKnockdown2_C_OnCancelled_9E8C91D84E93A634452566AAE11B4790_Params
	{	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.OnInterrupted_9E8C91D84E93A634452566AAE11B4790
	 */
	struct UGA_ZombieKnockdown2_C_OnInterrupted_9E8C91D84E93A634452566AAE11B4790_Params
	{	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.OnBlendOut_9E8C91D84E93A634452566AAE11B4790
	 */
	struct UGA_ZombieKnockdown2_C_OnBlendOut_9E8C91D84E93A634452566AAE11B4790_Params
	{	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.OnCompleted_9E8C91D84E93A634452566AAE11B4790
	 */
	struct UGA_ZombieKnockdown2_C_OnCompleted_9E8C91D84E93A634452566AAE11B4790_Params
	{	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.EventReceived_1E4AB1774C630350C881738A522ED336
	 */
	struct UGA_ZombieKnockdown2_C_EventReceived_1E4AB1774C630350C881738A522ED336_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.OnFinish_426FAC4F49876B388256E79DFBDB74E1
	 */
	struct UGA_ZombieKnockdown2_C_OnFinish_426FAC4F49876B388256E79DFBDB74E1_Params
	{	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.OnFinish_08A3CCA24CE4A881E19704B07A1182EA
	 */
	struct UGA_ZombieKnockdown2_C_OnFinish_08A3CCA24CE4A881E19704B07A1182EA_Params
	{	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.OnFinish_10EA67164BBE2F3672D299B287183DA3
	 */
	struct UGA_ZombieKnockdown2_C_OnFinish_10EA67164BBE2F3672D299B287183DA3_Params
	{	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.OnFinish_1B284A6944C5C65EA5D5DB857148C1FA
	 */
	struct UGA_ZombieKnockdown2_C_OnFinish_1B284A6944C5C65EA5D5DB857148C1FA_Params
	{	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.K2_ActivateAbility
	 */
	struct UGA_ZombieKnockdown2_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.K2_OnEndAbility
	 */
	struct UGA_ZombieKnockdown2_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.Multicast Play Montages
	 */
	struct UGA_ZombieKnockdown2_C_Multicast_Play_Montages_Params
	{
	public:
		class UAnimMontage*                                        PP_Montage;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        FPP_Montage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.Play Montages
	 */
	struct UGA_ZombieKnockdown2_C_Play_Montages_Params
	{
	public:
		class UAnimMontage*                                        PP_Montage_To_Play;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        FPP_Montage_To_Play;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.Go Ragdoll
	 */
	struct UGA_ZombieKnockdown2_C_Go_Ragdoll_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.Multicast Ragdoll
	 */
	struct UGA_ZombieKnockdown2_C_Multicast_Ragdoll_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.Stop Ragdoll
	 */
	struct UGA_ZombieKnockdown2_C_Stop_Ragdoll_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.Multicast Stop Ragdoll
	 */
	struct UGA_ZombieKnockdown2_C_Multicast_Stop_Ragdoll_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_ZombieKnockdown2.GA_ZombieKnockdown2_C.ExecuteUbergraph_GA_ZombieKnockdown2
	 */
	struct UGA_ZombieKnockdown2_C_ExecuteUbergraph_GA_ZombieKnockdown2_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EWZH[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
