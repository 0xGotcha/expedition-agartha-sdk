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
	 * 		Name   -> Function W_GenericFloatingTooltip.W_GenericFloatingTooltip_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_GenericFloatingTooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_GenericFloatingTooltip.W_GenericFloatingTooltip_C.Construct");
		
		UW_GenericFloatingTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_GenericFloatingTooltip.W_GenericFloatingTooltip_C.ExecuteUbergraph_W_GenericFloatingTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_GenericFloatingTooltip_C::ExecuteUbergraph_W_GenericFloatingTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_GenericFloatingTooltip.W_GenericFloatingTooltip_C.ExecuteUbergraph_W_GenericFloatingTooltip");
		
		UW_GenericFloatingTooltip_C_ExecuteUbergraph_W_GenericFloatingTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_GenericFloatingTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_GenericFloatingTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_GenericFloatingTooltip.W_GenericFloatingTooltip_C");
		return ptr;
	}

}


