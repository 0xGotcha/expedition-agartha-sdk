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
	 * 		Name   -> Function GA_XbowReload.GA_XbowReload_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_XbowReload_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_XbowReload.GA_XbowReload_C.K2_ActivateAbility");
		
		UGA_XbowReload_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_XbowReload.GA_XbowReload_C.ExecuteUbergraph_GA_XbowReload
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_XbowReload_C::ExecuteUbergraph_GA_XbowReload(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_XbowReload.GA_XbowReload_C.ExecuteUbergraph_GA_XbowReload");
		
		UGA_XbowReload_C_ExecuteUbergraph_GA_XbowReload_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_XbowReload_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_XbowReload_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_XbowReload.GA_XbowReload_C");
		return ptr;
	}

}


