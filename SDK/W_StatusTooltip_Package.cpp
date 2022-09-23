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
	 * 		Name   -> Function W_StatusTooltip.W_StatusTooltip_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_StatusTooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusTooltip.W_StatusTooltip_C.Construct");
		
		UW_StatusTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusTooltip.W_StatusTooltip_C.ExecuteUbergraph_W_StatusTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StatusTooltip_C::ExecuteUbergraph_W_StatusTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusTooltip.W_StatusTooltip_C.ExecuteUbergraph_W_StatusTooltip");
		
		UW_StatusTooltip_C_ExecuteUbergraph_W_StatusTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_StatusTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_StatusTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_StatusTooltip.W_StatusTooltip_C");
		return ptr;
	}

}


