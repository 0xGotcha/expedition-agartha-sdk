/**
 * Name: Agartha
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Apply State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRandomWeatherVariation_State               Random_Weather_State                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::Apply_State(const struct FRandomWeatherVariation_State& Random_Weather_State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Apply State");
		
		URandom_Weather_Variation_C_Apply_State_Params params {};
		params.Random_Weather_State = Random_Weather_State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Get State for Saving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRandomWeatherVariation_State               State                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AWeather_Override_Volume_C*                  Volume                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::Get_State_for_Saving(struct FRandomWeatherVariation_State* State, class AWeather_Override_Volume_C** Volume)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Get State for Saving");
		
		URandom_Weather_Variation_C_Get_State_for_Saving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (State != nullptr)
			*State = params.State;
		if (Volume != nullptr)
			*Volume = params.Volume;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Select New Random Weather Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Filter_Probability_List                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URandom_Weather_Variation_C::Select_New_Random_Weather_Type(bool Filter_Probability_List)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Select New Random Weather Type");
		
		URandom_Weather_Variation_C_Select_New_Random_Weather_Type_Params params {};
		params.Filter_Probability_List = Filter_Probability_List;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Random Weather
	 * 		Flags  -> ()
	 */
	void URandom_Weather_Variation_C::Increment_Random_Weather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Increment Random Weather");
		
		URandom_Weather_Variation_C_Increment_Random_Weather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Initialize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AUltra_Dynamic_Weather_C*                    UDW                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<EUDS_WeatherTypes, float>                     Summer_Probabilities                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TMap<EUDS_WeatherTypes, float>                     Autumn_Probabilities                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TMap<EUDS_WeatherTypes, float>                     Winter_Probabilities                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		TMap<EUDS_WeatherTypes, float>                     Spring_Probabilities                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Start_with_Random_Type                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void URandom_Weather_Variation_C::Initialize(class AUltra_Dynamic_Weather_C* UDW, TMap<EUDS_WeatherTypes, float> Summer_Probabilities, TMap<EUDS_WeatherTypes, float> Autumn_Probabilities, TMap<EUDS_WeatherTypes, float> Winter_Probabilities, TMap<EUDS_WeatherTypes, float> Spring_Probabilities, bool Start_with_Random_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Initialize");
		
		URandom_Weather_Variation_C_Initialize_Params params {};
		params.UDW = UDW;
		params.Summer_Probabilities = Summer_Probabilities;
		params.Autumn_Probabilities = Autumn_Probabilities;
		params.Winter_Probabilities = Winter_Probabilities;
		params.Spring_Probabilities = Spring_Probabilities;
		params.Start_with_Random_Type = Start_with_Random_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.ReceiveTick");
		
		URandom_Weather_Variation_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Start Timer to Change Weather Type
	 * 		Flags  -> ()
	 */
	void URandom_Weather_Variation_C::Start_Timer_to_Change_Weather_Type()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Start Timer to Change Weather Type");
		
		URandom_Weather_Variation_C_Start_Timer_to_Change_Weather_Type_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Reset Timer
	 * 		Flags  -> ()
	 */
	void URandom_Weather_Variation_C::Reset_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Reset Timer");
		
		URandom_Weather_Variation_C_Reset_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.Update Old Variables
	 * 		Flags  -> ()
	 */
	void URandom_Weather_Variation_C::Update_Old_Variables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.Update Old Variables");
		
		URandom_Weather_Variation_C_Update_Old_Variables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Random_Weather_Variation.Random_Weather_Variation_C.ExecuteUbergraph_Random_Weather_Variation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void URandom_Weather_Variation_C::ExecuteUbergraph_Random_Weather_Variation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Random_Weather_Variation.Random_Weather_Variation_C.ExecuteUbergraph_Random_Weather_Variation");
		
		URandom_Weather_Variation_C_ExecuteUbergraph_Random_Weather_Variation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URandom_Weather_Variation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URandom_Weather_Variation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Random_Weather_Variation.Random_Weather_Variation_C");
		return ptr;
	}

}


