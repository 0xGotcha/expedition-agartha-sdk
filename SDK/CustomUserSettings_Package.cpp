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
	 * 		Name   -> Function CustomUserSettings.CustomUserSettings_C.Save
	 * 		Flags  -> ()
	 */
	void UCustomUserSettings_C::Save()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomUserSettings.CustomUserSettings_C.Save");
		
		UCustomUserSettings_C_Save_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function CustomUserSettings.CustomUserSettings_C.ExecuteUbergraph_CustomUserSettings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UCustomUserSettings_C::ExecuteUbergraph_CustomUserSettings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function CustomUserSettings.CustomUserSettings_C.ExecuteUbergraph_CustomUserSettings");
		
		UCustomUserSettings_C_ExecuteUbergraph_CustomUserSettings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomUserSettings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomUserSettings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass CustomUserSettings.CustomUserSettings_C");
		return ptr;
	}

}


