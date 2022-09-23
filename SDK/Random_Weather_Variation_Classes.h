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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Random_Weather_Variation.Random_Weather_Variation_C
	 * Size -> 0x019C (FullSize[0x024C] - InheritedSize[0x00B0])
	 */
	class URandom_Weather_Variation_C : public UActorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class AUltra_Dynamic_Weather_C*                            UDW;                                                     // 0x00B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Random_Weather_Intensity;                                // 0x00C0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Random_Cloud_Coverage;                                   // 0x00C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Snow;                                                    // 0x00C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Random_Wind_Intensity;                                   // 0x00CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Random_Material_Snow;                                    // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Random_Material_Wetness;                                 // 0x00D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EUDS_WeatherTypes                                          Current_Random_Weather_Type;                             // 0x00D8(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KOFH[0x7];                                   // 0x00D9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<EUDS_WeatherTypes, float>                             Weather_Type_Probabilities_Summer;                       // 0x00E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EUDS_WeatherTypes, float>                             Weather_Type_Probabilities_Autumn;                       // 0x0130(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EUDS_WeatherTypes, float>                             Weather_Type_Probabilities_Winter;                       // 0x0180(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EUDS_WeatherTypes, float>                             Weather_Type_Probabilities_Spring;                       // 0x01D0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      Current_Lerp_Alpha;                                      // 0x0220(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Current_Timer_Length;                                    // 0x0224(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Old_Weather_Intensity;                                   // 0x0228(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Old_Cloud_Coverage;                                      // 0x022C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Snow2;                                                   // 0x0230(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Old_Wind_Intensity;                                      // 0x0234(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Old_Material_Snow;                                       // 0x0238(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Old_Material_Wetness;                                    // 0x023C(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class AWeather_Override_Volume_C*                          Volume;                                                  // 0x0240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Total_Changes;                                           // 0x0248(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Apply_State(const struct FRandomWeatherVariation_State& Random_Weather_State);
		void Get_State_for_Saving(struct FRandomWeatherVariation_State* State, class AWeather_Override_Volume_C** Volume);
		void Select_New_Random_Weather_Type(bool Filter_Probability_List);
		void Increment_Random_Weather();
		void Initialize(class AUltra_Dynamic_Weather_C* UDW, TMap<EUDS_WeatherTypes, float> Summer_Probabilities, TMap<EUDS_WeatherTypes, float> Autumn_Probabilities, TMap<EUDS_WeatherTypes, float> Winter_Probabilities, TMap<EUDS_WeatherTypes, float> Spring_Probabilities, bool Start_with_Random_Type);
		void ReceiveTick(float DeltaSeconds);
		void Start_Timer_to_Change_Weather_Type();
		void Reset_Timer();
		void Update_Old_Variables();
		void ExecuteUbergraph_Random_Weather_Variation(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
