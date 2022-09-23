#pragma once

/**
 * Name: Agartha
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.LoadAudioCaptureDevice
	 */
	struct ABP_ModularCharacterTest_C_LoadAudioCaptureDevice_Params
	{	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_4
	 */
	struct ABP_ModularCharacterTest_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChat_K2Node_InputActionEvent_3
	 */
	struct ABP_ModularCharacterTest_C_InpActEvt_VoiceChat_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChatParty_K2Node_InputActionEvent_2
	 */
	struct ABP_ModularCharacterTest_C_InpActEvt_VoiceChatParty_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpActEvt_VoiceChatParty_K2Node_InputActionEvent_1
	 */
	struct ABP_ModularCharacterTest_C_InpActEvt_VoiceChatParty_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BP_PlayerDied
	 */
	struct ABP_ModularCharacterTest_C_BP_PlayerDied_Params
	{	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.SRV_SendVoiceData
	 */
	struct ABP_ModularCharacterTest_C_SRV_SendVoiceData_Params
	{
	public:
		TArray<unsigned char>                                      CompressedVoiceData;                                     // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       bUseRadio;                                               // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature
	 */
	struct ABP_ModularCharacterTest_C_BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature_Params
	{
	public:
		TArray<unsigned char>                                      VoiceData;                                               // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		float                                                      MicLevel;                                                // 0x0010(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.ReceivePossessed
	 */
	struct ABP_ModularCharacterTest_C_ReceivePossessed_Params
	{
	public:
		class AController*                                         NewController;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.Client_Possessed
	 */
	struct ABP_ModularCharacterTest_C_Client_Possessed_Params
	{	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BndEvt__BP_ModularCharacterTest_VoipParty_K2Node_ComponentBoundEvent_7_OnSynthEnvelopeValue__DelegateSignature
	 */
	struct ABP_ModularCharacterTest_C_BndEvt__BP_ModularCharacterTest_VoipParty_K2Node_ComponentBoundEvent_7_OnSynthEnvelopeValue__DelegateSignature_Params
	{
	public:
		float                                                      EnvelopeValue;                                           // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BndEvt__BP_ModularCharacterTest_VoipAudio_K2Node_ComponentBoundEvent_0_OnSynthEnvelopeValue__DelegateSignature
	 */
	struct ABP_ModularCharacterTest_C_BndEvt__BP_ModularCharacterTest_VoipAudio_K2Node_ComponentBoundEvent_0_OnSynthEnvelopeValue__DelegateSignature_Params
	{
	public:
		float                                                      EnvelopeValue;                                           // 0x0000(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.Client_ReceiveVoiceData
	 */
	struct ABP_ModularCharacterTest_C_Client_ReceiveVoiceData_Params
	{
	public:
		class ABP_ModularCharacterTest_C*                          Player;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<unsigned char>                                      Voice;                                                   // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Use_Radio;                                               // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.ReceiveTick
	 */
	struct ABP_ModularCharacterTest_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.BP_SpectatorCamera
	 */
	struct ABP_ModularCharacterTest_C_BP_SpectatorCamera_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.InpAxisEvt_Vertical_K2Node_InputAxisEvent_3
	 */
	struct ABP_ModularCharacterTest_C_InpAxisEvt_Vertical_K2Node_InputAxisEvent_3_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.Get User Settings
	 */
	struct ABP_ModularCharacterTest_C_Get_User_Settings_Params
	{	};

	/**
	 * Function BP_ModularCharacterTest.BP_ModularCharacterTest_C.ExecuteUbergraph_BP_ModularCharacterTest
	 */
	struct ABP_ModularCharacterTest_C_ExecuteUbergraph_BP_ModularCharacterTest_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
