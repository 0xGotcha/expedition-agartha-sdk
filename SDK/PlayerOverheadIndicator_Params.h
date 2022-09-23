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
	 * Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.Construct
	 */
	struct UPlayerOverheadIndicator_C_Construct_Params
	{	};

	/**
	 * Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.SetNameColorOnServer
	 */
	struct UPlayerOverheadIndicator_C_SetNameColorOnServer_Params
	{	};

	/**
	 * Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.SetObjectColorMulticast
	 */
	struct UPlayerOverheadIndicator_C_SetObjectColorMulticast_Params
	{
	public:
		struct FLinearColor                                        LinearColor;                                             // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.ExecuteUbergraph_PlayerOverheadIndicator
	 */
	struct UPlayerOverheadIndicator_C_ExecuteUbergraph_PlayerOverheadIndicator_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LQAI[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
