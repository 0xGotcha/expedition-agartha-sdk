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
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.LoadAudioCaptureDevice
	 * 		Flags  -> ()
	 */
	void ABP_ModularCharacterTest_C::LoadAudioCaptureDevice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.LoadAudioCaptureDevice");
		
		ABP_ModularCharacterTest_C_LoadAudioCaptureDevice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::InpActEvt_VoiceChat_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_4");
		
		ABP_ModularCharacterTest_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::InpActEvt_VoiceChat_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_3");
		
		ABP_ModularCharacterTest_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChatParty_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::InpActEvt_VoiceChatParty_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChatParty_K2Node_InputActionEvent_2");
		
		ABP_ModularCharacterTest_C_InpActEvt_VoiceChatParty_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChatParty_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::InpActEvt_VoiceChatParty_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChatParty_K2Node_InputActionEvent_1");
		
		ABP_ModularCharacterTest_C_InpActEvt_VoiceChatParty_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BP_PlayerDied
	 * 		Flags  -> ()
	 */
	void ABP_ModularCharacterTest_C::BP_PlayerDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BP_PlayerDied");
		
		ABP_ModularCharacterTest_C_BP_PlayerDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.SRV_SendVoiceData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              CompressedVoiceData                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               bUseRadio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ModularCharacterTest_C::SRV_SendVoiceData(TArray<unsigned char> CompressedVoiceData, bool bUseRadio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.SRV_SendVoiceData");
		
		ABP_ModularCharacterTest_C_SRV_SendVoiceData_Params params {};
		params.CompressedVoiceData = CompressedVoiceData;
		params.bUseRadio = bUseRadio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              VoiceData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		float                                              MicLevel                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature(TArray<unsigned char> VoiceData, float MicLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature");
		
		ABP_ModularCharacterTest_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature_Params params {};
		params.VoiceData = VoiceData;
		params.MicLevel = MicLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.ReceivePossessed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AController*                                 NewController                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::ReceivePossessed(class AController* NewController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.ReceivePossessed");
		
		ABP_ModularCharacterTest_C_ReceivePossessed_Params params {};
		params.NewController = NewController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.Client_Possessed
	 * 		Flags  -> ()
	 */
	void ABP_ModularCharacterTest_C::Client_Possessed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.Client_Possessed");
		
		ABP_ModularCharacterTest_C_Client_Possessed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BndEvt__BP_ModularCharacterTest_VoipParty_K2Node_ComponentBoundEvent_7_OnSynthEnvelopeValue__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EnvelopeValue                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::BndEvt__BP_ModularCharacterTest_VoipParty_K2Node_ComponentBoundEvent_7_OnSynthEnvelopeValue__DelegateSignature(float EnvelopeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BndEvt__BP_ModularCharacterTest_VoipParty_K2Node_ComponentBoundEvent_7_OnSynthEnvelopeValue__DelegateSignature");
		
		ABP_ModularCharacterTest_C_BndEvt__BP_ModularCharacterTest_VoipParty_K2Node_ComponentBoundEvent_7_OnSynthEnvelopeValue__DelegateSignature_Params params {};
		params.EnvelopeValue = EnvelopeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BndEvt__BP_ModularCharacterTest_VoipAudio_K2Node_ComponentBoundEvent_0_OnSynthEnvelopeValue__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              EnvelopeValue                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::BndEvt__BP_ModularCharacterTest_VoipAudio_K2Node_ComponentBoundEvent_0_OnSynthEnvelopeValue__DelegateSignature(float EnvelopeValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BndEvt__BP_ModularCharacterTest_VoipAudio_K2Node_ComponentBoundEvent_0_OnSynthEnvelopeValue__DelegateSignature");
		
		ABP_ModularCharacterTest_C_BndEvt__BP_ModularCharacterTest_VoipAudio_K2Node_ComponentBoundEvent_0_OnSynthEnvelopeValue__DelegateSignature_Params params {};
		params.EnvelopeValue = EnvelopeValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.Client_ReceiveVoiceData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_ModularCharacterTest_C*                  Player                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<unsigned char>                              Voice                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Use_Radio                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ModularCharacterTest_C::Client_ReceiveVoiceData(class ABP_ModularCharacterTest_C* Player, TArray<unsigned char> Voice, bool Use_Radio)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.Client_ReceiveVoiceData");
		
		ABP_ModularCharacterTest_C_Client_ReceiveVoiceData_Params params {};
		params.Player = Player;
		params.Voice = Voice;
		params.Use_Radio = Use_Radio;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.ReceiveTick");
		
		ABP_ModularCharacterTest_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BP_SpectatorCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ModularCharacterTest_C::BP_SpectatorCamera(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BP_SpectatorCamera");
		
		ABP_ModularCharacterTest_C_BP_SpectatorCamera_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpAxisEvt_Vertical_K2Node_InputAxisEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::InpAxisEvt_Vertical_K2Node_InputAxisEvent_3(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpAxisEvt_Vertical_K2Node_InputAxisEvent_3");
		
		ABP_ModularCharacterTest_C_InpAxisEvt_Vertical_K2Node_InputAxisEvent_3_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.Get User Settings
	 * 		Flags  -> ()
	 */
	void ABP_ModularCharacterTest_C::Get_User_Settings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.Get User Settings");
		
		ABP_ModularCharacterTest_C_Get_User_Settings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.ExecuteUbergraph_BP_ModularCharacterTest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterTest_C::ExecuteUbergraph_BP_ModularCharacterTest(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.ExecuteUbergraph_BP_ModularCharacterTest");
		
		ABP_ModularCharacterTest_C_ExecuteUbergraph_BP_ModularCharacterTest_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ModularCharacterTest_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ModularCharacterTest_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModularCharacterTest.BP_ModularCharacterTest_C");
		return ptr;
	}

}


