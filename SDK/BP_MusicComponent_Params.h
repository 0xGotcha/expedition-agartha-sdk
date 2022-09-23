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
	 * Function BP_MusicComponent.BP_MusicComponent_C.ReceiveBeginPlay
	 */
	struct UBP_MusicComponent_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_MusicComponent.BP_MusicComponent_C.ReceiveTick
	 */
	struct UBP_MusicComponent_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicComponent.BP_MusicComponent_C.On Threat Level Changed
	 */
	struct UBP_MusicComponent_C_On_Threat_Level_Changed_Params
	{
	public:
		int32_t                                                    Old_Threat_Level;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Threat_Level;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicComponent.BP_MusicComponent_C.Sunset
	 */
	struct UBP_MusicComponent_C_Sunset_Params
	{	};

	/**
	 * Function BP_MusicComponent.BP_MusicComponent_C.Reset Cues
	 */
	struct UBP_MusicComponent_C_Reset_Cues_Params
	{	};

	/**
	 * Function BP_MusicComponent.BP_MusicComponent_C.Switch To State
	 */
	struct UBP_MusicComponent_C_Switch_To_State_Params
	{
	public:
		EMusicComponentStateEnum                                   New_State;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I3OU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Fade_Time;                                               // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_MusicComponent.BP_MusicComponent_C.Fade In Next State
	 */
	struct UBP_MusicComponent_C_Fade_In_Next_State_Params
	{	};

	/**
	 * Function BP_MusicComponent.BP_MusicComponent_C.Init
	 */
	struct UBP_MusicComponent_C_Init_Params
	{	};

	/**
	 * Function BP_MusicComponent.BP_MusicComponent_C.Sunrise
	 */
	struct UBP_MusicComponent_C_Sunrise_Params
	{	};

	/**
	 * Function BP_MusicComponent.BP_MusicComponent_C.ExecuteUbergraph_BP_MusicComponent
	 */
	struct UBP_MusicComponent_C_ExecuteUbergraph_BP_MusicComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
