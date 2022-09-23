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
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Apply State
	 */
	struct URandom_Weather_Variation_C_Apply_State_Params
	{
	public:
		struct FRandomWeatherVariation_State                       Random_Weather_State;                                    // 0x0000(0x0024)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Get State for Saving
	 */
	struct URandom_Weather_Variation_C_Get_State_for_Saving_Params
	{
	public:
		struct FRandomWeatherVariation_State                       State;                                                   // 0x0000(0x0024)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QE8S[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AWeather_Override_Volume_C*                          Volume;                                                  // 0x0028(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Select New Random Weather Type
	 */
	struct URandom_Weather_Variation_C_Select_New_Random_Weather_Type_Params
	{
	public:
		bool                                                       Filter_Probability_List;                                 // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_O7KJ[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Random Weather
	 */
	struct URandom_Weather_Variation_C_Increment_Random_Weather_Params
	{	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Initialize
	 */
	struct URandom_Weather_Variation_C_Initialize_Params
	{
	public:
		class AUltra_Dynamic_Weather_C*                            UDW;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TMap<EUDS_WeatherTypes, float>                             Summer_Probabilities;                                    // 0x0008(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TMap<EUDS_WeatherTypes, float>                             Autumn_Probabilities;                                    // 0x0058(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TMap<EUDS_WeatherTypes, float>                             Winter_Probabilities;                                    // 0x00A8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		TMap<EUDS_WeatherTypes, float>                             Spring_Probabilities;                                    // 0x00F8(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Start_with_Random_Type;                                  // 0x0148(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.ReceiveTick
	 */
	struct URandom_Weather_Variation_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Start Timer to Change Weather Type
	 */
	struct URandom_Weather_Variation_C_Start_Timer_to_Change_Weather_Type_Params
	{	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Reset Timer
	 */
	struct URandom_Weather_Variation_C_Reset_Timer_Params
	{	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.Update Old Variables
	 */
	struct URandom_Weather_Variation_C_Update_Old_Variables_Params
	{	};

	/**
	 * Function Random_Weather_Variation.Random_Weather_Variation_C.ExecuteUbergraph_Random_Weather_Variation
	 */
	struct URandom_Weather_Variation_C_ExecuteUbergraph_Random_Weather_Variation_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
