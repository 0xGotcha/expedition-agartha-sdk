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
	 * 		Name   -> Function WBP_LoginWithCustomID_Field.WBP_LoginWithCustomID_Field_C.BndEvt__WBP_LoginWithCustomID_Field_EditableTextBox_54_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		ETextCommit                                        CommitMethod                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_LoginWithCustomID_Field_C::BndEvt__WBP_LoginWithCustomID_Field_EditableTextBox_54_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const class FText& Text, ETextCommit CommitMethod)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoginWithCustomID_Field.WBP_LoginWithCustomID_Field_C.BndEvt__WBP_LoginWithCustomID_Field_EditableTextBox_54_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature");
		
		UWBP_LoginWithCustomID_Field_C_BndEvt__WBP_LoginWithCustomID_Field_EditableTextBox_54_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		params.CommitMethod = CommitMethod;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function WBP_LoginWithCustomID_Field.WBP_LoginWithCustomID_Field_C.ExecuteUbergraph_WBP_LoginWithCustomID_Field
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UWBP_LoginWithCustomID_Field_C::ExecuteUbergraph_WBP_LoginWithCustomID_Field(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WBP_LoginWithCustomID_Field.WBP_LoginWithCustomID_Field_C.ExecuteUbergraph_WBP_LoginWithCustomID_Field");
		
		UWBP_LoginWithCustomID_Field_C_ExecuteUbergraph_WBP_LoginWithCustomID_Field_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWBP_LoginWithCustomID_Field_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWBP_LoginWithCustomID_Field_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WBP_LoginWithCustomID_Field.WBP_LoginWithCustomID_Field_C");
		return ptr;
	}

}


