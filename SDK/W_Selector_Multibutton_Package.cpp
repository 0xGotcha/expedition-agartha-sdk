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
	 * 		Name   -> Function W_Selector_Multibutton.W_Selector_Multibutton_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_Selector_Multibutton_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Selector_Multibutton.W_Selector_Multibutton_C.PreConstruct");
		
		UW_Selector_Multibutton_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Selector_Multibutton.W_Selector_Multibutton_C.OnSelectorClick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Selector_Multibutton_C::OnSelectorClick(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Selector_Multibutton.W_Selector_Multibutton_C.OnSelectorClick");
		
		UW_Selector_Multibutton_C_OnSelectorClick_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Selector_Multibutton.W_Selector_Multibutton_C.Populate
	 * 		Flags  -> ()
	 */
	void UW_Selector_Multibutton_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Selector_Multibutton.W_Selector_Multibutton_C.Populate");
		
		UW_Selector_Multibutton_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Selector_Multibutton.W_Selector_Multibutton_C.Set Selected Index
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Selected_Index                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Selector_Multibutton_C::Set_Selected_Index(int32_t Selected_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Selector_Multibutton.W_Selector_Multibutton_C.Set Selected Index");
		
		UW_Selector_Multibutton_C_Set_Selected_Index_Params params {};
		params.Selected_Index = Selected_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Selector_Multibutton.W_Selector_Multibutton_C.ExecuteUbergraph_W_Selector_Multibutton
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Selector_Multibutton_C::ExecuteUbergraph_W_Selector_Multibutton(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Selector_Multibutton.W_Selector_Multibutton_C.ExecuteUbergraph_W_Selector_Multibutton");
		
		UW_Selector_Multibutton_C_ExecuteUbergraph_W_Selector_Multibutton_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_Selector_Multibutton.W_Selector_Multibutton_C.SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_Selector_Multibutton_C::SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_Selector_Multibutton.W_Selector_Multibutton_C.SelectedIndexChanged__DelegateSignature");
		
		UW_Selector_Multibutton_C_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_Selector_Multibutton_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_Selector_Multibutton_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_Selector_Multibutton.W_Selector_Multibutton_C");
		return ptr;
	}

}


