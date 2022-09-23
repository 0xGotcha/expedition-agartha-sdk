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
	 * UserDefinedStruct UDS_and_UDW_State.UDS_and_UDW_State
	 * Size -> 0x00D4
	 */
	struct FUDS_and_UDW_State
	{
	public:
		float                                                      TimeofDay_2_2DF54613424D82C28D8AF38B5CCC017E;            // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HXYR[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FDateTime                                           SimulationDate_6_6AAFF3384452285DB969FABE6CC7502E;       // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash
		int32_t                                                    TotalDaysElapsed_10_85A4D6E54B4BA738A5AAD08B278168AC;    // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      UDS_CloudCoverage_14_5BE3DD95403439E0DC4FC7B950B72734;   // 0x0014(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MoonPhase_16_00C2557E44B4CE73A824F2977842EF06;           // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IncludesUDWState_19_4B877A784EE94D12717D3998B8494AC4;    // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_J36H[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FRandomWeatherVariation_State                       UDWRandomWeatherState_27_74741D5149E4365461FC87BA73842B8C; // 0x0020(0x0024) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_T51B[0x4];                                   // 0x0044(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AWeather_Override_Volume_C*, struct FRandomWeatherVariation_State> WeatherOverrideVolumeStates_31_56B54B4D46756590EAD0B08CF93C14E3; // 0x0048(0x0050) Edit, BlueprintVisible, DisableEditOnTemplate
		int32_t                                                    TransitionState_35_8C2DC6CD4C7139677FD63AA06BA2C6F4;     // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldWeatherIntensity_43_C55FBB284F0FA74378B1C39AC4A25456; // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldCloudCoverage_44_02CFC88541ECA075F65C67BAD5B8203D;    // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldRainSnow_46_9681DBA0451D944F00450C8885948EAA;         // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      OldWindIntensity_48_8CA9E58B4FAD1966869DACA837B2A72D;    // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ChangeWeatherTimer_50_353A99B84ED03DA03DEB1389AF8AB999;  // 0x00AC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewWeatherIntensity_52_3F32FA704604722459CF54A5BC2EC84E; // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewCloudCoverage_54_FC7C0B8947BC9984DDE756AA46ECA64B;    // 0x00B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewRainSnow_56_44526E4A4DF5431653EF048234773737;         // 0x00B8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      NewWindIntensity_58_57942B374CDD4F640995D8A100A0A0F7;    // 0x00BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlobalMaterialSnow_60_DCFC3F844EF772ED4960F19588F2CD65;  // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      GlobalMaterialWetness_62_EF1D972F47EF0C4206D6D1B6BB645291; // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Timer_65_5497A6734CE6FEB9AD91B28233665806;               // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LerptoNewSettings_67_D4D699EB4BB843F0AE80E4BFC8CFA364;   // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      LerptoStaticSettings_69_384B646448CA6A50EA63CBA209165004; // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
