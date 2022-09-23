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
	 * 		Name   -> Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerOverheadIndicator_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.Construct");
		
		UPlayerOverheadIndicator_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.SetNameColorOnServer
	 * 		Flags  -> ()
	 */
	void UPlayerOverheadIndicator_C::SetNameColorOnServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.SetNameColorOnServer");
		
		UPlayerOverheadIndicator_C_SetNameColorOnServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.SetObjectColorMulticast
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FLinearColor                                LinearColor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerOverheadIndicator_C::SetObjectColorMulticast(const struct FLinearColor& LinearColor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.SetObjectColorMulticast");
		
		UPlayerOverheadIndicator_C_SetObjectColorMulticast_Params params {};
		params.LinearColor = LinearColor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.ExecuteUbergraph_PlayerOverheadIndicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerOverheadIndicator_C::ExecuteUbergraph_PlayerOverheadIndicator(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerOverheadIndicator.PlayerOverheadIndicator_C.ExecuteUbergraph_PlayerOverheadIndicator");
		
		UPlayerOverheadIndicator_C_ExecuteUbergraph_PlayerOverheadIndicator_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerOverheadIndicator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerOverheadIndicator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerOverheadIndicator.PlayerOverheadIndicator_C");
		return ptr;
	}

}


