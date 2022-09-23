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
	 * Function PlayerHUD.PlayerHUD_C.OLD_GetCountdownTimerText
	 */
	struct UPlayerHUD_C_OLD_GetCountdownTimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.GetCountDownTimerText
	 */
	struct UPlayerHUD_C_GetCountDownTimerText_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get_CharacterHunger_Percent_1
	 */
	struct UPlayerHUD_C_Get_CharacterHunger_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FU1Z[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.CancelMatchmaker
	 */
	struct UPlayerHUD_C_CancelMatchmaker_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get_NameTextAuxiliary_Text_1
	 */
	struct UPlayerHUD_C_Get_NameTextAuxiliary_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get_NameTextSecondary_Text_1
	 */
	struct UPlayerHUD_C_Get_NameTextSecondary_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get_NameTextLeader_Text_2
	 */
	struct UPlayerHUD_C_Get_NameTextLeader_Text_2_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get_PartyIdEntry_Text_1
	 */
	struct UPlayerHUD_C_Get_PartyIdEntry_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get_NameTextLeader_Text_1
	 */
	struct UPlayerHUD_C_Get_NameTextLeader_Text_1_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.FinishExtractionCountdown
	 */
	struct UPlayerHUD_C_FinishExtractionCountdown_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ProcExtractionCountdown
	 */
	struct UPlayerHUD_C_ProcExtractionCountdown_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.StartExtractionCountdown
	 */
	struct UPlayerHUD_C_StartExtractionCountdown_Params
	{
	public:
		struct FVector                                             ExtractPosition;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get_CharacterHealth_Percent_1
	 */
	struct UPlayerHUD_C_Get_CharacterHealth_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BOBU[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Get_CharacterStamina_Percent_1
	 */
	struct UPlayerHUD_C_Get_CharacterStamina_Percent_1_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_NPHL[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.SetCompassDirection
	 */
	struct UPlayerHUD_C_SetCompassDirection_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Construct
	 */
	struct UPlayerHUD_C_Construct_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.SimTick
	 */
	struct UPlayerHUD_C_SimTick_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.DisplayDeath
	 */
	struct UPlayerHUD_C_DisplayDeath_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.StartMatchToGame
	 */
	struct UPlayerHUD_C_StartMatchToGame_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.MatchQuery
	 */
	struct UPlayerHUD_C_MatchQuery_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.BndEvt__PlayerHUD_Button_CancelMatch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UPlayerHUD_C_BndEvt__PlayerHUD_Button_CancelMatch_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.onGetTargetGameServerHostCallback
	 */
	struct UPlayerHUD_C_onGetTargetGameServerHostCallback_Params
	{
	public:
		class FString                                              TargetGameServerHost;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.CustomEvent_1
	 */
	struct UPlayerHUD_C_CustomEvent_1_Params
	{
	public:
		class FString                                              MatchId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.Set Portrait
	 */
	struct UPlayerHUD_C_Set_Portrait_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.SetKillTImerMessage
	 */
	struct UPlayerHUD_C_SetKillTImerMessage_Params
	{
	public:
		int32_t                                                    TimeLeft;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ShouldShow;                                              // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.HideMessage
	 */
	struct UPlayerHUD_C_HideMessage_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ShowAreaName
	 */
	struct UPlayerHUD_C_ShowAreaName_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.AnimFinished
	 */
	struct UPlayerHUD_C_AnimFinished_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.StartExtraction
	 */
	struct UPlayerHUD_C_StartExtraction_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.TickDownTimer
	 */
	struct UPlayerHUD_C_TickDownTimer_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.CancelExtraction
	 */
	struct UPlayerHUD_C_CancelExtraction_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ExtractionStateChangedHandler
	 */
	struct UPlayerHUD_C_ExtractionStateChangedHandler_Params
	{
	public:
		EExtractionResult                                          ExtractionState;                                         // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.SetupExtractionTimerCallbacks
	 */
	struct UPlayerHUD_C_SetupExtractionTimerCallbacks_Params
	{	};

	/**
	 * Function PlayerHUD.PlayerHUD_C.ExecuteUbergraph_PlayerHUD
	 */
	struct UPlayerHUD_C_ExecuteUbergraph_PlayerHUD_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_Y6Q1[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
