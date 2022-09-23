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
	 * 		Name   -> Function UI_NPCDialog.UI_NPCDialog_C.EnableCharacterMovement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterNPCsComponent*                     CharNPCComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NPCDialog_C::EnableCharacterMovement(class UCharacterNPCsComponent* CharNPCComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NPCDialog.UI_NPCDialog_C.EnableCharacterMovement");
		
		UUI_NPCDialog_C_EnableCharacterMovement_Params params {};
		params.CharNPCComponent = CharNPCComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NPCDialog.UI_NPCDialog_C.SetQuestReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuestTable                                 QuestRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_NPCDialog_C::SetQuestReward(const struct FQuestTable& QuestRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NPCDialog.UI_NPCDialog_C.SetQuestReward");
		
		UUI_NPCDialog_C_SetQuestReward_Params params {};
		params.QuestRow = QuestRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NPCDialog.UI_NPCDialog_C.SetQuestConditions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FQuestTable                                 QuestRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_NPCDialog_C::SetQuestConditions(const struct FQuestTable& QuestRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NPCDialog.UI_NPCDialog_C.SetQuestConditions");
		
		UUI_NPCDialog_C_SetQuestConditions_Params params {};
		params.QuestRow = QuestRow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NPCDialog.UI_NPCDialog_C.OnLoaded_29D690EC45D4B1CFAB8229AA1A9E8FE8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NPCDialog_C::OnLoaded_29D690EC45D4B1CFAB8229AA1A9E8FE8(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NPCDialog.UI_NPCDialog_C.OnLoaded_29D690EC45D4B1CFAB8229AA1A9E8FE8");
		
		UUI_NPCDialog_C_OnLoaded_29D690EC45D4B1CFAB8229AA1A9E8FE8_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NPCDialog.UI_NPCDialog_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_NPCDialog_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NPCDialog.UI_NPCDialog_C.Construct");
		
		UUI_NPCDialog_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NPCDialog.UI_NPCDialog_C.BndEvt__UI_NPCDialog_Finish_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_NPCDialog_C::BndEvt__UI_NPCDialog_Finish_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NPCDialog.UI_NPCDialog_C.BndEvt__UI_NPCDialog_Finish_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_NPCDialog_C_BndEvt__UI_NPCDialog_Finish_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NPCDialog.UI_NPCDialog_C.BndEvt__UI_NPCDialog_FirstDialogAccept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_NPCDialog_C::BndEvt__UI_NPCDialog_FirstDialogAccept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NPCDialog.UI_NPCDialog_C.BndEvt__UI_NPCDialog_FirstDialogAccept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_NPCDialog_C_BndEvt__UI_NPCDialog_FirstDialogAccept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NPCDialog.UI_NPCDialog_C.OnNPCRepWaitFinished
	 * 		Flags  -> ()
	 */
	void UUI_NPCDialog_C::OnNPCRepWaitFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NPCDialog.UI_NPCDialog_C.OnNPCRepWaitFinished");
		
		UUI_NPCDialog_C_OnNPCRepWaitFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_NPCDialog.UI_NPCDialog_C.ExecuteUbergraph_UI_NPCDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_NPCDialog_C::ExecuteUbergraph_UI_NPCDialog(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_NPCDialog.UI_NPCDialog_C.ExecuteUbergraph_UI_NPCDialog");
		
		UUI_NPCDialog_C_ExecuteUbergraph_UI_NPCDialog_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_NPCDialog_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_NPCDialog_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_NPCDialog.UI_NPCDialog_C");
		return ptr;
	}

}


