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
	 * Function GA_Aim.GA_Aim_C.OnChange_5962F6024AD6A058CFC643AA915B410A
	 */
	struct UGA_Aim_C_OnChange_5962F6024AD6A058CFC643AA915B410A_Params
	{
	public:
		bool                                                       bMatchesComparison;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_EVUV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentValue;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Aim.GA_Aim_C.OnRelease_461AD403452889AB167E4A92E4CACED0
	 */
	struct UGA_Aim_C_OnRelease_461AD403452889AB167E4A92E4CACED0_Params
	{
	public:
		float                                                      TimeHeld;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Aim.GA_Aim_C.K2_ActivateAbility
	 */
	struct UGA_Aim_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Aim.GA_Aim_C.K2_OnEndAbility
	 */
	struct UGA_Aim_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Aim.GA_Aim_C.ExecuteUbergraph_GA_Aim
	 */
	struct UGA_Aim_C_ExecuteUbergraph_GA_Aim_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
