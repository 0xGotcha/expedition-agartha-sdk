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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_AgarthaGameInstance.BP_AgarthaGameInstance_C
	 * Size -> 0x00E0 (FullSize[0x07B0] - InheritedSize[0x06D0])
	 */
	class UBP_AgarthaGameInstance_C : public UProjectAgarthaGameInstance
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x06D0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UPlayFabJsonObject*                                  JsonRequestOnUpdateUserInventoryData;                    // 0x06D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayFabJsonObject*                                  JsonRequestOnUpdateUserBodyData;                         // 0x06E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             WhenUserBodyUpdate;                                      // 0x06E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             LoginSuccessDelegate;                                    // 0x06F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UWBP_LoginWithCustomID_C*                            WBP_LoginWithCustomID;                                   // 0x0708(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       ForceLoginWithSteamID;                                   // 0x0710(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       UseSavedCustomID;                                        // 0x0711(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       MoveEmptyCharacterToCreator;                             // 0x0712(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_WY81[0x5];                                   // 0x0713(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        MatchmakerTimer;                                         // 0x0718(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       LoginDialogShowed;                                       // 0x0720(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4HE9[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCharacterBody                                      ClientBodyData;                                          // 0x0728(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             OnTimerUpdate;                                           // 0x0788(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class UCustomUserSettings_C*                               User_Settings;                                           // 0x0798(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UPlayerHUD_C*>                                Found_Widgets;                                           // 0x07A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference

	public:
		void Check_Is_LoggedIn(bool CheckLoggedIn, bool* Result);
		void OnPlayFabResponse_3970802E4EEB84335452C7A178730939(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void OnPlayFabResponse_532401A7444D989FBA3B10A90B465960(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void OnPlayFabResponse_2D424043487296096E0E9080464E694D(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void OnPlayFabResponse_8458F913446A127D6487F6B5B07D7878(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void OnPlayFabResponse_898BBD8C439B502A9AE1F884A1A38549(const struct FPlayFabBaseModel& response, class UObject* customData, bool successful);
		void OnUpdateUserInventoryDate(const class FString& Data);
		void OnUpdateUserBodyDate(const class FString& Data);
		void PlayfabSuccess1(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData);
		void ShowLoginDialog(bool CheckLoggedIn);
		void OnUpdateUserStashDate(const class FString& Data);
		void PlayFabDeleteUser();
		void DeleteUserSuccess(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData);
		void PlayFabDeleteAllUser();
		void DeleteAllUserSuccess(const struct FClientExecuteCloudScriptResult& Result, class UObject* customData);
		void BPOnPlayfabLoginSuccess();
		void PlayfabFailure(const struct FPlayFabError& Error, class UObject* customData);
		void BPOnLoadCharacter(class AProjectAgarthaCharacter* Character);
		void OnCancelMatchmakingFromCode();
		void OnOldRaidFound(const class FString& RaidURL);
		void ReceiveInit();
		void MatchQuery();
		void onGetTargetGameServerHostCallback(const class FString& TargetGameServerHost);
		void CustomEvent_3(const class FString& MatchId);
		void OnCreateMatchmakerForLevel();
		void AttemptPlayfabLogin();
		void BP_SpawnLootbag(const struct FVector& Location);
		void Reconnect();
		void BP_OnTimerUpdate(int32_t MinutesRemaining);
		void Get_User_Settings();
		void Apply_User_Settings();
		void BP_OnInsuranceArrived(int32_t ItemsPlaced, int32_t ItemsInQueue);
		void OnMatchPendingTimeUpdated();
		void OnKickedFromServer(const class FString& Reason);
		void ExecuteUbergraph_BP_AgarthaGameInstance(int32_t EntryPoint);
		void OnTimerUpdate__DelegateSignature(int32_t MinutesRemaining);
		void LoginSuccessDelegate__DelegateSignature();
		void WhenUserBodyUpdate__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
