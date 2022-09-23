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
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Check Is LoggedIn
	 */
	struct UBP_AgarthaGameInstance_C_Check_Is_LoggedIn_Params
	{
	public:
		bool                                                       CheckLoggedIn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_3970802E4EEB84335452C7A178730939
	 */
	struct UBP_AgarthaGameInstance_C_OnPlayFabResponse_3970802E4EEB84335452C7A178730939_Params
	{
	public:
		struct FPlayFabBaseModel                                   response;                                                // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             customData;                                              // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       successful;                                              // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_532401A7444D989FBA3B10A90B465960
	 */
	struct UBP_AgarthaGameInstance_C_OnPlayFabResponse_532401A7444D989FBA3B10A90B465960_Params
	{
	public:
		struct FPlayFabBaseModel                                   response;                                                // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             customData;                                              // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       successful;                                              // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_2D424043487296096E0E9080464E694D
	 */
	struct UBP_AgarthaGameInstance_C_OnPlayFabResponse_2D424043487296096E0E9080464E694D_Params
	{
	public:
		struct FPlayFabBaseModel                                   response;                                                // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             customData;                                              // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       successful;                                              // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_8458F913446A127D6487F6B5B07D7878
	 */
	struct UBP_AgarthaGameInstance_C_OnPlayFabResponse_8458F913446A127D6487F6B5B07D7878_Params
	{
	public:
		struct FPlayFabBaseModel                                   response;                                                // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             customData;                                              // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       successful;                                              // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_898BBD8C439B502A9AE1F884A1A38549
	 */
	struct UBP_AgarthaGameInstance_C_OnPlayFabResponse_898BBD8C439B502A9AE1F884A1A38549_Params
	{
	public:
		struct FPlayFabBaseModel                                   response;                                                // 0x0000(0x0040)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             customData;                                              // 0x0040(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       successful;                                              // 0x0048(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnUpdateUserInventoryDate
	 */
	struct UBP_AgarthaGameInstance_C_OnUpdateUserInventoryDate_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnUpdateUserBodyDate
	 */
	struct UBP_AgarthaGameInstance_C_OnUpdateUserBodyDate_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayfabSuccess1
	 */
	struct UBP_AgarthaGameInstance_C_PlayfabSuccess1_Params
	{
	public:
		struct FClientExecuteCloudScriptResult                     Result;                                                  // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             customData;                                              // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.ShowLoginDialog
	 */
	struct UBP_AgarthaGameInstance_C_ShowLoginDialog_Params
	{
	public:
		bool                                                       CheckLoggedIn;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnUpdateUserStashDate
	 */
	struct UBP_AgarthaGameInstance_C_OnUpdateUserStashDate_Params
	{
	public:
		class FString                                              Data;                                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayFabDeleteUser
	 */
	struct UBP_AgarthaGameInstance_C_PlayFabDeleteUser_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.DeleteUserSuccess
	 */
	struct UBP_AgarthaGameInstance_C_DeleteUserSuccess_Params
	{
	public:
		struct FClientExecuteCloudScriptResult                     Result;                                                  // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             customData;                                              // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayFabDeleteAllUser
	 */
	struct UBP_AgarthaGameInstance_C_PlayFabDeleteAllUser_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.DeleteAllUserSuccess
	 */
	struct UBP_AgarthaGameInstance_C_DeleteAllUserSuccess_Params
	{
	public:
		struct FClientExecuteCloudScriptResult                     Result;                                                  // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             customData;                                              // 0x0060(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BPOnPlayfabLoginSuccess
	 */
	struct UBP_AgarthaGameInstance_C_BPOnPlayfabLoginSuccess_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayfabFailure
	 */
	struct UBP_AgarthaGameInstance_C_PlayfabFailure_Params
	{
	public:
		struct FPlayFabError                                       Error;                                                   // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UObject*                                             customData;                                              // 0x0038(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BPOnLoadCharacter
	 */
	struct UBP_AgarthaGameInstance_C_BPOnLoadCharacter_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnCancelMatchmakingFromCode
	 */
	struct UBP_AgarthaGameInstance_C_OnCancelMatchmakingFromCode_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnOldRaidFound
	 */
	struct UBP_AgarthaGameInstance_C_OnOldRaidFound_Params
	{
	public:
		class FString                                              RaidURL;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.ReceiveInit
	 */
	struct UBP_AgarthaGameInstance_C_ReceiveInit_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.MatchQuery
	 */
	struct UBP_AgarthaGameInstance_C_MatchQuery_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.onGetTargetGameServerHostCallback
	 */
	struct UBP_AgarthaGameInstance_C_onGetTargetGameServerHostCallback_Params
	{
	public:
		class FString                                              TargetGameServerHost;                                    // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.CustomEvent_3
	 */
	struct UBP_AgarthaGameInstance_C_CustomEvent_3_Params
	{
	public:
		class FString                                              MatchId;                                                 // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnCreateMatchmakerForLevel
	 */
	struct UBP_AgarthaGameInstance_C_OnCreateMatchmakerForLevel_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.AttemptPlayfabLogin
	 */
	struct UBP_AgarthaGameInstance_C_AttemptPlayfabLogin_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BP_SpawnLootbag
	 */
	struct UBP_AgarthaGameInstance_C_BP_SpawnLootbag_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Reconnect
	 */
	struct UBP_AgarthaGameInstance_C_Reconnect_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BP_OnTimerUpdate
	 */
	struct UBP_AgarthaGameInstance_C_BP_OnTimerUpdate_Params
	{
	public:
		int32_t                                                    MinutesRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Get User Settings
	 */
	struct UBP_AgarthaGameInstance_C_Get_User_Settings_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Apply User Settings
	 */
	struct UBP_AgarthaGameInstance_C_Apply_User_Settings_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BP_OnInsuranceArrived
	 */
	struct UBP_AgarthaGameInstance_C_BP_OnInsuranceArrived_Params
	{
	public:
		int32_t                                                    ItemsPlaced;                                             // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    ItemsInQueue;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnMatchPendingTimeUpdated
	 */
	struct UBP_AgarthaGameInstance_C_OnMatchPendingTimeUpdated_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnKickedFromServer
	 */
	struct UBP_AgarthaGameInstance_C_OnKickedFromServer_Params
	{
	public:
		class FString                                              Reason;                                                  // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.ExecuteUbergraph_BP_AgarthaGameInstance
	 */
	struct UBP_AgarthaGameInstance_C_ExecuteUbergraph_BP_AgarthaGameInstance_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnTimerUpdate__DelegateSignature
	 */
	struct UBP_AgarthaGameInstance_C_OnTimerUpdate__DelegateSignature_Params
	{
	public:
		int32_t                                                    MinutesRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.LoginSuccessDelegate__DelegateSignature
	 */
	struct UBP_AgarthaGameInstance_C_LoginSuccessDelegate__DelegateSignature_Params
	{	};

	/**
	 * Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.WhenUserBodyUpdate__DelegateSignature
	 */
	struct UBP_AgarthaGameInstance_C_WhenUserBodyUpdate__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
