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
	 * WidgetBlueprintGeneratedClass W_ItemQuestTooltip.W_ItemQuestTooltip_C
	 * Size -> 0x0348 (FullSize[0x05A8] - InheritedSize[0x0260])
	 */
	class UW_ItemQuestTooltip_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          GoalsDescription;                                        // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        ItemInfoPanel;                                           // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MerchantName;                                            // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          QuestDescription;                                        // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          QuestGoals;                                              // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          QuestGoals_2;                                            // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          QuestName;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          QuestReward;                                             // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        VBGoals;                                                 // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FItemTable                                          Item_Data;                                               // 0x02B0(0x02A0) Edit, BlueprintVisible, ExposeOnSpawn
		TArray<struct FQuestCondition>                             LocalConditions;                                         // 0x0550(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LTExplore;                                               // 0x0560(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LTKill;                                                  // 0x0578(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		class FText                                                LTExplored;                                              // 0x0590(0x0018) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void SetQuestGoalsDescription(bool NotRandom, const struct FQuestTable& QuestRow, class UProjectAgarthaGameInstance* GameInstance, bool QuestFInished);
		void SetQuestConditionItemStats(const class FString& ConditionString, const struct FQuestCondition& QuestCondition, class UProjectAgarthaGameInstance* GameInstance, class FString* ConditionStringOut);
		void UpdateQuestOngoingConditions();
		void SetQuestReward(class UDataTable* RewardInventory, class UCharacterNPCsComponent* CharNPCComponent);
		void SetQuestOngoingConditionsRows(TArray<struct FQuestCondition>* QuestConditions, class UCharacterNPCsComponent* CharNPCComponent, const struct FProjectAgartha_FNPCQuestProgress& QuestProgress);
		void SetQuestConditionsRows(TArray<struct FQuestCondition>* QuestConditions, class UCharacterNPCsComponent** CharNPCComponent, bool HideConditions, bool QuestFInished);
		void Construct();
		void ExecuteUbergraph_W_ItemQuestTooltip(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
