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
	 * 		Name   -> Function ReconnectUI.ReconnectUI_C.BndEvt__ReconnectUI_Reconnect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UReconnectUI_C::BndEvt__ReconnectUI_Reconnect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReconnectUI.ReconnectUI_C.BndEvt__ReconnectUI_Reconnect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UReconnectUI_C_BndEvt__ReconnectUI_Reconnect_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReconnectUI.ReconnectUI_C.BndEvt__ReconnectUI_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UReconnectUI_C::BndEvt__ReconnectUI_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReconnectUI.ReconnectUI_C.BndEvt__ReconnectUI_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UReconnectUI_C_BndEvt__ReconnectUI_Button_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ReconnectUI.ReconnectUI_C.ExecuteUbergraph_ReconnectUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UReconnectUI_C::ExecuteUbergraph_ReconnectUI(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReconnectUI.ReconnectUI_C.ExecuteUbergraph_ReconnectUI");
		
		UReconnectUI_C_ExecuteUbergraph_ReconnectUI_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReconnectUI_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReconnectUI_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ReconnectUI.ReconnectUI_C");
		return ptr;
	}

}


