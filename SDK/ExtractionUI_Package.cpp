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
	 * 		Name   -> Function ExtractionUI.ExtractionUI_C.Construct
	 * 		Flags  -> ()
	 */
	void UExtractionUI_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExtractionUI.ExtractionUI_C.Construct");
		
		UExtractionUI_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExtractionUI.ExtractionUI_C.BndEvt__ExtractionUI_Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UExtractionUI_C::BndEvt__ExtractionUI_Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExtractionUI.ExtractionUI_C.BndEvt__ExtractionUI_Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UExtractionUI_C_BndEvt__ExtractionUI_Button_98_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExtractionUI.ExtractionUI_C.OnAllowLeave
	 * 		Flags  -> ()
	 */
	void UExtractionUI_C::OnAllowLeave()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExtractionUI.ExtractionUI_C.OnAllowLeave");
		
		UExtractionUI_C_OnAllowLeave_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ExtractionUI.ExtractionUI_C.ExecuteUbergraph_ExtractionUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UExtractionUI_C::ExecuteUbergraph_ExtractionUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ExtractionUI.ExtractionUI_C.ExecuteUbergraph_ExtractionUI");
		
		UExtractionUI_C_ExecuteUbergraph_ExtractionUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UExtractionUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UExtractionUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ExtractionUI.ExtractionUI_C");
		return ptr;
	}

}


