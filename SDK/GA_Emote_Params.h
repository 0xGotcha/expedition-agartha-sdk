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
	 * Function GA_Emote.GA_Emote_C.OnCancelled_D996D15743A7A070EF824FBF9620C314
	 */
	struct UGA_Emote_C_OnCancelled_D996D15743A7A070EF824FBF9620C314_Params
	{	};

	/**
	 * Function GA_Emote.GA_Emote_C.OnInterrupted_D996D15743A7A070EF824FBF9620C314
	 */
	struct UGA_Emote_C_OnInterrupted_D996D15743A7A070EF824FBF9620C314_Params
	{	};

	/**
	 * Function GA_Emote.GA_Emote_C.OnBlendOut_D996D15743A7A070EF824FBF9620C314
	 */
	struct UGA_Emote_C_OnBlendOut_D996D15743A7A070EF824FBF9620C314_Params
	{	};

	/**
	 * Function GA_Emote.GA_Emote_C.OnCompleted_D996D15743A7A070EF824FBF9620C314
	 */
	struct UGA_Emote_C_OnCompleted_D996D15743A7A070EF824FBF9620C314_Params
	{	};

	/**
	 * Function GA_Emote.GA_Emote_C.OnVelocityChange_41EFB53142584ED653BF669711CEC5B8
	 */
	struct UGA_Emote_C_OnVelocityChange_41EFB53142584ED653BF669711CEC5B8_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Turning;                                                 // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Emote.GA_Emote_C.K2_OnEndAbility
	 */
	struct UGA_Emote_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Emote.GA_Emote_C.K2_ActivateAbilityFromEvent
	 */
	struct UGA_Emote_C_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_Emote.GA_Emote_C.ExecuteUbergraph_GA_Emote
	 */
	struct UGA_Emote_C_ExecuteUbergraph_GA_Emote_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
