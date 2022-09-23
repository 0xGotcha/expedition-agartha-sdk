﻿#pragma once

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
	 * UserDefinedStruct RandomWeatherVariation_State.RandomWeatherVariation_State
	 * Size -> 0x0024
	 */
	struct FRandomWeatherVariation_State
	{
	public:
		EUDS_WeatherTypes                                          CurrentRandomWeatherType_2_BBFDBC5E46C25F1DFB0037A44AB6D268; // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_6JMU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CurrentLerpAlpha_5_659CCE944698D027E31F1C9F648EBD85;     // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      CurrentTimerLength_7_6CC4C61F4528647B419BE189C0944ADF;   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldWeatherIntensity_9_FBA2AA3C45530C5B72D769836DAC5BEF;  // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldCloudCoverage_12_785DBA4D45042845F6718D87A32DBA6C;    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldRainSnow_14_88A2F3814DEF14993ACD34BDBE05DA78;         // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldWindIntensity_16_EAE21A8E4109BF6212FE67B06F9E815F;    // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldMaterialSnow_18_05E60ACC40235A16FAADB5BFE7CBE4FF;     // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldMaterialWetness_20_687930BF433C23D3A4CAB79B88485D72;  // 0x0020(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
