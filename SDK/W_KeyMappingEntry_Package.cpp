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
	 * 		Name   -> Function W_KeyMappingEntry.W_KeyMappingEntry_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_KeyMappingEntry_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingEntry.W_KeyMappingEntry_C.Construct");
		
		UW_KeyMappingEntry_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMappingEntry.W_KeyMappingEntry_C.OnIsSelectingKeyChanged
	 * 		Flags  -> ()
	 */
	void UW_KeyMappingEntry_C::OnIsSelectingKeyChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingEntry.W_KeyMappingEntry_C.OnIsSelectingKeyChanged");
		
		UW_KeyMappingEntry_C_OnIsSelectingKeyChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMappingEntry.W_KeyMappingEntry_C.OnKeySelected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FInputChord                                 SelectedKey                                                (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_KeyMappingEntry_C::OnKeySelected(const struct FInputChord& SelectedKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingEntry.W_KeyMappingEntry_C.OnKeySelected");
		
		UW_KeyMappingEntry_C_OnKeySelected_Params params {};
		params.SelectedKey = SelectedKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMappingEntry.W_KeyMappingEntry_C.Set Confilicted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Conflicted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_KeyMappingEntry_C::Set_Confilicted(bool Conflicted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingEntry.W_KeyMappingEntry_C.Set Confilicted");
		
		UW_KeyMappingEntry_C_Set_Confilicted_Params params {};
		params.Conflicted = Conflicted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMappingEntry.W_KeyMappingEntry_C.ExecuteUbergraph_W_KeyMappingEntry
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_KeyMappingEntry_C::ExecuteUbergraph_W_KeyMappingEntry(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingEntry.W_KeyMappingEntry_C.ExecuteUbergraph_W_KeyMappingEntry");
		
		UW_KeyMappingEntry_C_ExecuteUbergraph_W_KeyMappingEntry_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMappingEntry.W_KeyMappingEntry_C.New Key Selected__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_KeyMappingEntry_C*                        Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Action_Name                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FInputChord                                 New_Key                                                    (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_KeyMappingEntry_C::New_Key_Selected__DelegateSignature(class UW_KeyMappingEntry_C* Selector, const class FName& Action_Name, const struct FInputChord& New_Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingEntry.W_KeyMappingEntry_C.New Key Selected__DelegateSignature");
		
		UW_KeyMappingEntry_C_New_Key_Selected__DelegateSignature_Params params {};
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
	 * 		Name   -> Function W_KeyMappingEntry.W_KeyMappingEntry_C.Key Selector State Changed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_KeyMappingEntry_C*                        Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Selecting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_KeyMappingEntry_C::Key_Selector_State_Changed__DelegateSignature(class UW_KeyMappingEntry_C* Selector, bool Selecting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingEntry.W_KeyMappingEntry_C.Key Selector State Changed__DelegateSignature");
		
		UW_KeyMappingEntry_C_Key_Selector_State_Changed__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.Selecting = Selecting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_KeyMappingEntry_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_KeyMappingEntry_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_KeyMappingEntry.W_KeyMappingEntry_C");
		return ptr;
	}

}


