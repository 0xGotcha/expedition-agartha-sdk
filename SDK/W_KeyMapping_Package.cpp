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
	 * 		Name   -> Function W_KeyMapping.W_KeyMapping_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_KeyMapping_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMapping.W_KeyMapping_C.Construct");
		
		UW_KeyMapping_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMapping.W_KeyMapping_C.Selector State Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_KeyMappingEntry_C*                        Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Selecting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_KeyMapping_C::Selector_State_Changed(class UW_KeyMappingEntry_C* Selector, bool Selecting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMapping.W_KeyMapping_C.Selector State Changed");
		
		UW_KeyMapping_C_Selector_State_Changed_Params params {};
		params.Selector = Selector;
		params.Selecting = Selecting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMapping.W_KeyMapping_C.New Key Selected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_KeyMappingEntry_C*                        Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Action_Name                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInputChord                                 New_Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_KeyMapping_C::New_Key_Selected(class UW_KeyMappingEntry_C* Selector, const class FName& Action_Name, const struct FInputChord& New_Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMapping.W_KeyMapping_C.New Key Selected");
		
		UW_KeyMapping_C_New_Key_Selected_Params params {};
		params.Selector = Selector;
		params.Action_Name = Action_Name;
		params.New_Key = New_Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMapping.W_KeyMapping_C.BndEvt__W_KeyMapping_ResetButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_KeyMapping_C::BndEvt__W_KeyMapping_ResetButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMapping.W_KeyMapping_C.BndEvt__W_KeyMapping_ResetButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature");
		
		UW_KeyMapping_C_BndEvt__W_KeyMapping_ResetButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMapping.W_KeyMapping_C.BndEvt__W_KeyMapping_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_KeyMapping_C::BndEvt__W_KeyMapping_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMapping.W_KeyMapping_C.BndEvt__W_KeyMapping_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UW_KeyMapping_C_BndEvt__W_KeyMapping_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMapping.W_KeyMapping_C.Repopulate Mapping List
	 * 		Flags  -> ()
	 */
	void UW_KeyMapping_C::Repopulate_Mapping_List()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMapping.W_KeyMapping_C.Repopulate Mapping List");
		
		UW_KeyMapping_C_Repopulate_Mapping_List_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMapping.W_KeyMapping_C.Save Bindings
	 * 		Flags  -> ()
	 */
	void UW_KeyMapping_C::Save_Bindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMapping.W_KeyMapping_C.Save Bindings");
		
		UW_KeyMapping_C_Save_Bindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMapping.W_KeyMapping_C.ExecuteUbergraph_W_KeyMapping
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_KeyMapping_C::ExecuteUbergraph_W_KeyMapping(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMapping.W_KeyMapping_C.ExecuteUbergraph_W_KeyMapping");
		
		UW_KeyMapping_C_ExecuteUbergraph_W_KeyMapping_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMapping.W_KeyMapping_C.Key Selection State Changed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selecting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_KeyMapping_C::Key_Selection_State_Changed__DelegateSignature(bool Selecting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMapping.W_KeyMapping_C.Key Selection State Changed__DelegateSignature");
		
		UW_KeyMapping_C_Key_Selection_State_Changed__DelegateSignature_Params params {};
		params.Selecting = Selecting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_KeyMapping_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_KeyMapping_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_KeyMapping.W_KeyMapping_C");
		return ptr;
	}

}


