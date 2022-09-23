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
	 * Function GA_StatusControl.GA_StatusControl_C.Get Character
	 */
	struct UGA_StatusControl_C_Get_Character_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Character;                                               // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_StatusControl.GA_StatusControl_C.OnFinish_27EC9FF04A955D2FAD730195E4D47727
	 */
	struct UGA_StatusControl_C_OnFinish_27EC9FF04A955D2FAD730195E4D47727_Params
	{	};

	/**
	 * Function GA_StatusControl.GA_StatusControl_C.K2_ActivateAbilityFromEvent
	 */
	struct UGA_StatusControl_C_K2_ActivateAbilityFromEvent_Params
	{
	public:
		struct FGameplayEventData                                  EventData;                                               // 0x0000(0x00B0)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function GA_StatusControl.GA_StatusControl_C.ExecuteUbergraph_GA_StatusControl
	 */
	struct UGA_StatusControl_C_ExecuteUbergraph_GA_StatusControl_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
