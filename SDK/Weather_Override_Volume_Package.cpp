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
	 * 		Name   -> Function Weather_Override_Volume.Weather_Override_Volume_C.Calculate Spline Bounds
	 * 		Flags  -> ()
	 */
	void AWeather_Override_Volume_C::Calculate_Spline_Bounds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Override_Volume.Weather_Override_Volume_C.Calculate Spline Bounds");
		
		AWeather_Override_Volume_C_Calculate_Spline_Bounds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weather_Override_Volume.Weather_Override_Volume_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AWeather_Override_Volume_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Override_Volume.Weather_Override_Volume_C.UserConstructionScript");
		
		AWeather_Override_Volume_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AWeather_Override_Volume_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveBeginPlay");
		
		AWeather_Override_Volume_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeather_Override_Volume_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveTick");
		
		AWeather_Override_Volume_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveDestroyed
	 * 		Flags  -> ()
	 */
	void AWeather_Override_Volume_C::ReceiveDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Override_Volume.Weather_Override_Volume_C.ReceiveDestroyed");
		
		AWeather_Override_Volume_C_ReceiveDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Weather_Override_Volume.Weather_Override_Volume_C.ExecuteUbergraph_Weather_Override_Volume
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AWeather_Override_Volume_C::ExecuteUbergraph_Weather_Override_Volume(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Weather_Override_Volume.Weather_Override_Volume_C.ExecuteUbergraph_Weather_Override_Volume");
		
		AWeather_Override_Volume_C_ExecuteUbergraph_Weather_Override_Volume_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AWeather_Override_Volume_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AWeather_Override_Volume_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Weather_Override_Volume.Weather_Override_Volume_C");
		return ptr;
	}

}


