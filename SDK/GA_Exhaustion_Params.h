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
	 * Function GA_Exhaustion.GA_Exhaustion_C.K2_OnEndAbility
	 */
	struct UGA_Exhaustion_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Exhaustion.GA_Exhaustion_C.K2_ActivateAbility
	 */
	struct UGA_Exhaustion_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Exhaustion.GA_Exhaustion_C.ExecuteUbergraph_GA_Exhaustion
	 */
	struct UGA_Exhaustion_C_ExecuteUbergraph_GA_Exhaustion_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
