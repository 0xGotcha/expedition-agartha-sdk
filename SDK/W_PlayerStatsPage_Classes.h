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
	 * WidgetBlueprintGeneratedClass W_PlayerStatsPage.W_PlayerStatsPage_C
	 * Size -> 0x0148 (FullSize[0x03A8] - InheritedSize[0x0260])
	 */
	class UW_PlayerStatsPage_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UButton*                                             CloseButton;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_114;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Image_232;                                               // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        StatVerticalBox;                                         // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TMap<EItemStatType, class UW_ItemDescriptionInformation_C*> StatDescriptions;                                        // 0x0288(0x0050) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UInventoryComponent*                                 PlayerInventory;                                         // 0x02D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TMap<class FString, float>                                 itemStatValues;                                          // 0x02E0(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             BeginDestroy;                                            // 0x0330(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    totalEquipWeight;                                        // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HTWD[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_BaseCharacter_C*                                 PlayerCharacter;                                         // 0x0348(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TMap<struct FGameplayAttribute, EItemStatType>             AttributeToItemStat;                                     // 0x0350(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_PlayerStatsScreenCam_C*                          RenderCam;                                               // 0x03A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void AddAsGameplayAttribute(const struct FGameplayAttribute& Key);
		void UpdateRealTimeStatValues();
		void AddCheckedPlayerStat(EItemStatType StatType, const class FString& AltStatType, const class FText& optionalReadableText, const class FString& optionalStatFormatting);
		void AddEquipmentStat(EquipmentType SlotID);
		void MaxStat(float currStat, float MaxStat, float RegenStat, EItemStatType StatType, const class FText& Value);
		void AddPlayerStat(float StatValue, EItemStatType _itemStat, const class FText& optionalReadableText, const class FString& optionalStatFormatting);
		void Construct();
		void BndEvt__W_PlayerStatsPage_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void Destruct();
		void SetupCamera();
		void Close();
		void ExecuteUbergraph_W_PlayerStatsPage(int32_t EntryPoint);
		void BeginDestroy__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
