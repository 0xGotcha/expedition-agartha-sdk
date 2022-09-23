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
	 * 		Name   -> Function BP_rope_spline.BP_rope_spline_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_rope_spline_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_rope_spline.BP_rope_spline_C.UserConstructionScript");
		
		ABP_rope_spline_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_rope_spline_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_rope_spline_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_rope_spline.BP_rope_spline_C");
		return ptr;
	}

}


