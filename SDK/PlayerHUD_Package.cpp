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
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.OLD_GetCountdownTimerText
	 * 		Flags  -> ()
	 */
	class FText UPlayerHUD_C::OLD_GetCountdownTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.OLD_GetCountdownTimerText");
		
		UPlayerHUD_C_OLD_GetCountdownTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.GetCountDownTimerText
	 * 		Flags  -> ()
	 */
	class FText UPlayerHUD_C::GetCountDownTimerText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.GetCountDownTimerText");
		
		UPlayerHUD_C_GetCountDownTimerText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Get_CharacterHunger_Percent_1
	 * 		Flags  -> ()
	 */
	float UPlayerHUD_C::Get_CharacterHunger_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get_CharacterHunger_Percent_1");
		
		UPlayerHUD_C_Get_CharacterHunger_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.CancelMatchmaker
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::CancelMatchmaker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.CancelMatchmaker");
		
		UPlayerHUD_C_CancelMatchmaker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Get_NameTextAuxiliary_Text_1
	 * 		Flags  -> ()
	 */
	class FText UPlayerHUD_C::Get_NameTextAuxiliary_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get_NameTextAuxiliary_Text_1");
		
		UPlayerHUD_C_Get_NameTextAuxiliary_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Get_NameTextSecondary_Text_1
	 * 		Flags  -> ()
	 */
	class FText UPlayerHUD_C::Get_NameTextSecondary_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get_NameTextSecondary_Text_1");
		
		UPlayerHUD_C_Get_NameTextSecondary_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Get_NameTextLeader_Text_2
	 * 		Flags  -> ()
	 */
	class FText UPlayerHUD_C::Get_NameTextLeader_Text_2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get_NameTextLeader_Text_2");
		
		UPlayerHUD_C_Get_NameTextLeader_Text_2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Get_PartyIdEntry_Text_1
	 * 		Flags  -> ()
	 */
	class FText UPlayerHUD_C::Get_PartyIdEntry_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get_PartyIdEntry_Text_1");
		
		UPlayerHUD_C_Get_PartyIdEntry_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Get_NameTextLeader_Text_1
	 * 		Flags  -> ()
	 */
	class FText UPlayerHUD_C::Get_NameTextLeader_Text_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get_NameTextLeader_Text_1");
		
		UPlayerHUD_C_Get_NameTextLeader_Text_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.FinishExtractionCountdown
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::FinishExtractionCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.FinishExtractionCountdown");
		
		UPlayerHUD_C_FinishExtractionCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.ProcExtractionCountdown
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::ProcExtractionCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ProcExtractionCountdown");
		
		UPlayerHUD_C_ProcExtractionCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.StartExtractionCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ExtractPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::StartExtractionCountdown(const struct FVector& ExtractPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.StartExtractionCountdown");
		
		UPlayerHUD_C_StartExtractionCountdown_Params params {};
		params.ExtractPosition = ExtractPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Get_CharacterHealth_Percent_1
	 * 		Flags  -> ()
	 */
	float UPlayerHUD_C::Get_CharacterHealth_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get_CharacterHealth_Percent_1");
		
		UPlayerHUD_C_Get_CharacterHealth_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Get_CharacterStamina_Percent_1
	 * 		Flags  -> ()
	 */
	float UPlayerHUD_C::Get_CharacterStamina_Percent_1()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Get_CharacterStamina_Percent_1");
		
		UPlayerHUD_C_Get_CharacterStamina_Percent_1_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.SetCompassDirection
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::SetCompassDirection()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.SetCompassDirection");
		
		UPlayerHUD_C_SetCompassDirection_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Construct
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Construct");
		
		UPlayerHUD_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.SimTick
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::SimTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.SimTick");
		
		UPlayerHUD_C_SimTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.DisplayDeath
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::DisplayDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.DisplayDeath");
		
		UPlayerHUD_C_DisplayDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.StartMatchToGame
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::StartMatchToGame()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.StartMatchToGame");
		
		UPlayerHUD_C_StartMatchToGame_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.MatchQuery
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::MatchQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.MatchQuery");
		
		UPlayerHUD_C_MatchQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.BndEvt__PlayerHUD_Button_CancelMatch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::BndEvt__PlayerHUD_Button_CancelMatch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.BndEvt__PlayerHUD_Button_CancelMatch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UPlayerHUD_C_BndEvt__PlayerHUD_Button_CancelMatch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.onGetTargetGameServerHostCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TargetGameServerHost                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::onGetTargetGameServerHostCallback(const class FString& TargetGameServerHost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.onGetTargetGameServerHostCallback");
		
		UPlayerHUD_C_onGetTargetGameServerHostCallback_Params params {};
		params.TargetGameServerHost = TargetGameServerHost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.CustomEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MatchId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::CustomEvent_1(const class FString& MatchId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.CustomEvent_1");
		
		UPlayerHUD_C_CustomEvent_1_Params params {};
		params.MatchId = MatchId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.Set Portrait
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::Set_Portrait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.Set Portrait");
		
		UPlayerHUD_C_Set_Portrait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.SetKillTImerMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TimeLeft                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ShouldShow                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UPlayerHUD_C::SetKillTImerMessage(int32_t TimeLeft, bool ShouldShow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.SetKillTImerMessage");
		
		UPlayerHUD_C_SetKillTImerMessage_Params params {};
		params.TimeLeft = TimeLeft;
		params.ShouldShow = ShouldShow;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.HideMessage
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::HideMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.HideMessage");
		
		UPlayerHUD_C_HideMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.ShowAreaName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UPlayerHUD_C::ShowAreaName(const class FText& InText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ShowAreaName");
		
		UPlayerHUD_C_ShowAreaName_Params params {};
		params.InText = InText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.AnimFinished
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::AnimFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.AnimFinished");
		
		UPlayerHUD_C_AnimFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.StartExtraction
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::StartExtraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.StartExtraction");
		
		UPlayerHUD_C_StartExtraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.TickDownTimer
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::TickDownTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.TickDownTimer");
		
		UPlayerHUD_C_TickDownTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.CancelExtraction
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::CancelExtraction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.CancelExtraction");
		
		UPlayerHUD_C_CancelExtraction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.ExtractionStateChangedHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EExtractionResult                                  ExtractionState                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::ExtractionStateChangedHandler(EExtractionResult ExtractionState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ExtractionStateChangedHandler");
		
		UPlayerHUD_C_ExtractionStateChangedHandler_Params params {};
		params.ExtractionState = ExtractionState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.SetupExtractionTimerCallbacks
	 * 		Flags  -> ()
	 */
	void UPlayerHUD_C::SetupExtractionTimerCallbacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.SetupExtractionTimerCallbacks");
		
		UPlayerHUD_C_SetupExtractionTimerCallbacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function PlayerHUD.PlayerHUD_C.ExecuteUbergraph_PlayerHUD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UPlayerHUD_C::ExecuteUbergraph_PlayerHUD(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function PlayerHUD.PlayerHUD_C.ExecuteUbergraph_PlayerHUD");
		
		UPlayerHUD_C_ExecuteUbergraph_PlayerHUD_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPlayerHUD_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPlayerHUD_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PlayerHUD.PlayerHUD_C");
		return ptr;
	}

}


