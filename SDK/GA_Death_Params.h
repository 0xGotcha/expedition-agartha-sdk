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
	 * Function GA_Death.GA_Death_C.OnCancelled_5F5A3866453AC12E812F009F8BC3ACFA
	 */
	struct UGA_Death_C_OnCancelled_5F5A3866453AC12E812F009F8BC3ACFA_Params
	{	};

	/**
	 * Function GA_Death.GA_Death_C.OnInterrupted_5F5A3866453AC12E812F009F8BC3ACFA
	 */
	struct UGA_Death_C_OnInterrupted_5F5A3866453AC12E812F009F8BC3ACFA_Params
	{	};

	/**
	 * Function GA_Death.GA_Death_C.OnBlendOut_5F5A3866453AC12E812F009F8BC3ACFA
	 */
	struct UGA_Death_C_OnBlendOut_5F5A3866453AC12E812F009F8BC3ACFA_Params
	{	};

	/**
	 * Function GA_Death.GA_Death_C.OnCompleted_5F5A3866453AC12E812F009F8BC3ACFA
	 */
	struct UGA_Death_C_OnCompleted_5F5A3866453AC12E812F009F8BC3ACFA_Params
	{	};

	/**
	 * Function GA_Death.GA_Death_C.OnFinish_4E558C634F7F250B11DFD8A41D587F6B
	 */
	struct UGA_Death_C_OnFinish_4E558C634F7F250B11DFD8A41D587F6B_Params
	{	};

	/**
	 * Function GA_Death.GA_Death_C.EventReceived_736767D846B152DAC4F52281C1A58F5C
	 */
	struct UGA_Death_C_EventReceived_736767D846B152DAC4F52281C1A58F5C_Params
	{
	public:
		struct FGameplayEventData                                  Payload;                                                 // 0x0000(0x00B0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function GA_Death.GA_Death_C.OnFinish_84C979724BAE93065BD5F4AD036807CA
	 */
	struct UGA_Death_C_OnFinish_84C979724BAE93065BD5F4AD036807CA_Params
	{	};

	/**
	 * Function GA_Death.GA_Death_C.K2_ActivateAbility
	 */
	struct UGA_Death_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Death.GA_Death_C.Multicast Play Montages
	 */
	struct UGA_Death_C_Multicast_Play_Montages_Params
	{
	public:
		class UAnimMontage*                                        PP_Montage;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        FPP_Montage;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Death.GA_Death_C.Play Montages
	 */
	struct UGA_Death_C_Play_Montages_Params
	{
	public:
		class UAnimMontage*                                        PP_Montage_To_Play;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        FPP_Montage_To_Play;                                     // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Death.GA_Death_C.Go Ragdoll
	 */
	struct UGA_Death_C_Go_Ragdoll_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Death.GA_Death_C.Multicast Ragdoll
	 */
	struct UGA_Death_C_Multicast_Ragdoll_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Death.GA_Death_C.Stop Ragdoll
	 */
	struct UGA_Death_C_Stop_Ragdoll_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Death.GA_Death_C.Multicast Stop Ragdoll
	 */
	struct UGA_Death_C_Multicast_Stop_Ragdoll_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Death.GA_Death_C.K2_OnEndAbility
	 */
	struct UGA_Death_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Death.GA_Death_C.ExecuteUbergraph_GA_Death
	 */
	struct UGA_Death_C_ExecuteUbergraph_GA_Death_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_75LJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
