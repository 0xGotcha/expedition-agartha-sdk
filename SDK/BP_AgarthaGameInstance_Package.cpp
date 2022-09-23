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
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Check Is LoggedIn
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CheckLoggedIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AgarthaGameInstance_C::Check_Is_LoggedIn(bool CheckLoggedIn, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Check Is LoggedIn");
		
		UBP_AgarthaGameInstance_C_Check_Is_LoggedIn_Params params {};
		params.CheckLoggedIn = CheckLoggedIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_3970802E4EEB84335452C7A178730939
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AgarthaGameInstance_C::OnPlayFabResponse_3970802E4EEB84335452C7A178730939(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_3970802E4EEB84335452C7A178730939");
		
		UBP_AgarthaGameInstance_C_OnPlayFabResponse_3970802E4EEB84335452C7A178730939_Params params {};
		params.response = response;
		params.customData = customData;
		params.successful = successful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_532401A7444D989FBA3B10A90B465960
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AgarthaGameInstance_C::OnPlayFabResponse_532401A7444D989FBA3B10A90B465960(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_532401A7444D989FBA3B10A90B465960");
		
		UBP_AgarthaGameInstance_C_OnPlayFabResponse_532401A7444D989FBA3B10A90B465960_Params params {};
		params.response = response;
		params.customData = customData;
		params.successful = successful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_2D424043487296096E0E9080464E694D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AgarthaGameInstance_C::OnPlayFabResponse_2D424043487296096E0E9080464E694D(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_2D424043487296096E0E9080464E694D");
		
		UBP_AgarthaGameInstance_C_OnPlayFabResponse_2D424043487296096E0E9080464E694D_Params params {};
		params.response = response;
		params.customData = customData;
		params.successful = successful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_8458F913446A127D6487F6B5B07D7878
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AgarthaGameInstance_C::OnPlayFabResponse_8458F913446A127D6487F6B5B07D7878(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_8458F913446A127D6487F6B5B07D7878");
		
		UBP_AgarthaGameInstance_C_OnPlayFabResponse_8458F913446A127D6487F6B5B07D7878_Params params {};
		params.response = response;
		params.customData = customData;
		params.successful = successful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_898BBD8C439B502A9AE1F884A1A38549
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayFabBaseModel                           response                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               successful                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AgarthaGameInstance_C::OnPlayFabResponse_898BBD8C439B502A9AE1F884A1A38549(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnPlayFabResponse_898BBD8C439B502A9AE1F884A1A38549");
		
		UBP_AgarthaGameInstance_C_OnPlayFabResponse_898BBD8C439B502A9AE1F884A1A38549_Params params {};
		params.response = response;
		params.customData = customData;
		params.successful = successful;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnUpdateUserInventoryDate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::OnUpdateUserInventoryDate(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnUpdateUserInventoryDate");
		
		UBP_AgarthaGameInstance_C_OnUpdateUserInventoryDate_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnUpdateUserBodyDate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::OnUpdateUserBodyDate(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnUpdateUserBodyDate");
		
		UBP_AgarthaGameInstance_C_OnUpdateUserBodyDate_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayfabSuccess1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClientExecuteCloudScriptResult             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::PlayfabSuccess1(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayfabSuccess1");
		
		UBP_AgarthaGameInstance_C_PlayfabSuccess1_Params params {};
		params.Result = Result;
		params.customData = customData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.ShowLoginDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CheckLoggedIn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBP_AgarthaGameInstance_C::ShowLoginDialog(bool CheckLoggedIn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.ShowLoginDialog");
		
		UBP_AgarthaGameInstance_C_ShowLoginDialog_Params params {};
		params.CheckLoggedIn = CheckLoggedIn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnUpdateUserStashDate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Data                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::OnUpdateUserStashDate(const class FString& Data)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnUpdateUserStashDate");
		
		UBP_AgarthaGameInstance_C_OnUpdateUserStashDate_Params params {};
		params.Data = Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayFabDeleteUser
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::PlayFabDeleteUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayFabDeleteUser");
		
		UBP_AgarthaGameInstance_C_PlayFabDeleteUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.DeleteUserSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClientExecuteCloudScriptResult             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::DeleteUserSuccess(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.DeleteUserSuccess");
		
		UBP_AgarthaGameInstance_C_DeleteUserSuccess_Params params {};
		params.Result = Result;
		params.customData = customData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayFabDeleteAllUser
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::PlayFabDeleteAllUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayFabDeleteAllUser");
		
		UBP_AgarthaGameInstance_C_PlayFabDeleteAllUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.DeleteAllUserSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FClientExecuteCloudScriptResult             Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::DeleteAllUserSuccess(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.DeleteAllUserSuccess");
		
		UBP_AgarthaGameInstance_C_DeleteAllUserSuccess_Params params {};
		params.Result = Result;
		params.customData = customData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BPOnPlayfabLoginSuccess
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::BPOnPlayfabLoginSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BPOnPlayfabLoginSuccess");
		
		UBP_AgarthaGameInstance_C_BPOnPlayfabLoginSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayfabFailure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPlayFabError                               Error                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UObject*                                     customData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::PlayfabFailure(const struct FPlayFabError& Error, class UObject* customData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.PlayfabFailure");
		
		UBP_AgarthaGameInstance_C_PlayfabFailure_Params params {};
		params.Error = Error;
		params.customData = customData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BPOnLoadCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::BPOnLoadCharacter(class AProjectAgarthaCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BPOnLoadCharacter");
		
		UBP_AgarthaGameInstance_C_BPOnLoadCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnCancelMatchmakingFromCode
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::OnCancelMatchmakingFromCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnCancelMatchmakingFromCode");
		
		UBP_AgarthaGameInstance_C_OnCancelMatchmakingFromCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnOldRaidFound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RaidURL                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::OnOldRaidFound(const class FString& RaidURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnOldRaidFound");
		
		UBP_AgarthaGameInstance_C_OnOldRaidFound_Params params {};
		params.RaidURL = RaidURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.ReceiveInit
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::ReceiveInit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.ReceiveInit");
		
		UBP_AgarthaGameInstance_C_ReceiveInit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.MatchQuery
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::MatchQuery()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.MatchQuery");
		
		UBP_AgarthaGameInstance_C_MatchQuery_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.onGetTargetGameServerHostCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      TargetGameServerHost                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::onGetTargetGameServerHostCallback(const class FString& TargetGameServerHost)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.onGetTargetGameServerHostCallback");
		
		UBP_AgarthaGameInstance_C_onGetTargetGameServerHostCallback_Params params {};
		params.TargetGameServerHost = TargetGameServerHost;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.CustomEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      MatchId                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::CustomEvent_3(const class FString& MatchId)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.CustomEvent_3");
		
		UBP_AgarthaGameInstance_C_CustomEvent_3_Params params {};
		params.MatchId = MatchId;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnCreateMatchmakerForLevel
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::OnCreateMatchmakerForLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnCreateMatchmakerForLevel");
		
		UBP_AgarthaGameInstance_C_OnCreateMatchmakerForLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.AttemptPlayfabLogin
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::AttemptPlayfabLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.AttemptPlayfabLogin");
		
		UBP_AgarthaGameInstance_C_AttemptPlayfabLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BP_SpawnLootbag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::BP_SpawnLootbag(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BP_SpawnLootbag");
		
		UBP_AgarthaGameInstance_C_BP_SpawnLootbag_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Reconnect
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::Reconnect()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Reconnect");
		
		UBP_AgarthaGameInstance_C_Reconnect_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BP_OnTimerUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinutesRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::BP_OnTimerUpdate(int32_t MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BP_OnTimerUpdate");
		
		UBP_AgarthaGameInstance_C_BP_OnTimerUpdate_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Get User Settings
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::Get_User_Settings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Get User Settings");
		
		UBP_AgarthaGameInstance_C_Get_User_Settings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Apply User Settings
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::Apply_User_Settings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.Apply User Settings");
		
		UBP_AgarthaGameInstance_C_Apply_User_Settings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BP_OnInsuranceArrived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemsPlaced                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            ItemsInQueue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::BP_OnInsuranceArrived(int32_t ItemsPlaced, int32_t ItemsInQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.BP_OnInsuranceArrived");
		
		UBP_AgarthaGameInstance_C_BP_OnInsuranceArrived_Params params {};
		params.ItemsPlaced = ItemsPlaced;
		params.ItemsInQueue = ItemsInQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnMatchPendingTimeUpdated
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::OnMatchPendingTimeUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnMatchPendingTimeUpdated");
		
		UBP_AgarthaGameInstance_C_OnMatchPendingTimeUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnKickedFromServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Reason                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::OnKickedFromServer(const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnKickedFromServer");
		
		UBP_AgarthaGameInstance_C_OnKickedFromServer_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.ExecuteUbergraph_BP_AgarthaGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::ExecuteUbergraph_BP_AgarthaGameInstance(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.ExecuteUbergraph_BP_AgarthaGameInstance");
		
		UBP_AgarthaGameInstance_C_ExecuteUbergraph_BP_AgarthaGameInstance_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnTimerUpdate__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinutesRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_AgarthaGameInstance_C::OnTimerUpdate__DelegateSignature(int32_t MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.OnTimerUpdate__DelegateSignature");
		
		UBP_AgarthaGameInstance_C_OnTimerUpdate__DelegateSignature_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.LoginSuccessDelegate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::LoginSuccessDelegate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.LoginSuccessDelegate__DelegateSignature");
		
		UBP_AgarthaGameInstance_C_LoginSuccessDelegate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.WhenUserBodyUpdate__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_AgarthaGameInstance_C::WhenUserBodyUpdate__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaGameInstance.BP_AgarthaGameInstance_C.WhenUserBodyUpdate__DelegateSignature");
		
		UBP_AgarthaGameInstance_C_WhenUserBodyUpdate__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_AgarthaGameInstance_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_AgarthaGameInstance_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AgarthaGameInstance.BP_AgarthaGameInstance_C");
		return ptr;
	}

}


