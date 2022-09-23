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
	 * 		Name   -> Function Weather_Effects_Interface.Weather_Effects_Interface_C.Reset Emitters
	 * 		Flags  -> ()
	 */
	void UWeather_Effects_Interface_C::Reset_Emitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Effects_Interface.Weather_Effects_Interface_C.Reset Emitters");
		
		UWeather_Effects_Interface_C_Reset_Emitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weather_Effects_Interface.Weather_Effects_Interface_C.Editor Update
	 * 		Flags  -> ()
	 */
	void UWeather_Effects_Interface_C::Editor_Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Effects_Interface.Weather_Effects_Interface_C.Editor Update");
		
		UWeather_Effects_Interface_C_Editor_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWeather_Effects_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWeather_Effects_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weather_Effects_Interface.Weather_Effects_Interface_C");
		return ptr;
	}

}


