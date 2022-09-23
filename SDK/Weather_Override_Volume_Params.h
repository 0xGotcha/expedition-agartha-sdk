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
	 * Function Weather_Override_Volume.Weather_Override_Volume_C.Calculate Spline Bounds
	 */
	struct AWeather_Override_Volume_C_Calculate_Spline_Bounds_Params
	{	};

	/**
	 * Function Weather_Override_Volume.Weather_Override_Volume_C.UserConstructionScript
	 */
	struct AWeather_Override_Volume_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveBeginPlay
	 */
	struct AWeather_Override_Volume_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveTick
	 */
	struct AWeather_Override_Volume_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveDestroyed
	 */
	struct AWeather_Override_Volume_C_ReceiveDestroyed_Params
	{	};

	/**
	 * Function Weather_Override_Volume.Weather_Override_Volume_C.ExecuteUbergraph_Weather_Override_Volume
	 */
	struct AWeather_Override_Volume_C_ExecuteUbergraph_Weather_Override_Volume_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WSEY[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
