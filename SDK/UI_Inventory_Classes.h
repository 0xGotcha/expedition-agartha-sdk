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
	 * WidgetBlueprintGeneratedClass UI_Inventory.UI_Inventory_C
	 * Size -> 0x02C0 (FullSize[0x0520] - InheritedSize[0x0260])
	 */
	class UUI_Inventory_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UW_ItemSlot_C*                                       AmmoSlot;                                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       ArmorSlot;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              Background;                                              // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BackpackIcon;                                            // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       Belt1Slot;                                               // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       Belt2Slot;                                               // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       Belt3Slot;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       Belt4Slot;                                               // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          BeltGrid;                                                // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Body;                                                    // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       BootsSlot;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UCanvasPanel*                                        CanvasPanel_1;                                           // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadAmmoSlot;                                            // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadArmorSlot;                                           // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        DeadBody;                                                // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadBootsSlot_2;                                         // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            DeadEquipment;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadGlovesSlot;                                          // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadHelmetSlot;                                          // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadPantsSlot;                                           // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadPrimarySlot;                                         // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          DeadRagdollGrid;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadSecondarySlot;                                       // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadShieldSlot;                                          // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DeadShirtSlot;                                           // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       DropSlot;                                                // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            EquipmentPanel;                                          // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       GlovesSlot;                                              // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             GoldIcon;                                                // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          GoldTextBlock;                                           // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       HelmetSlot;                                              // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Inventory;                                               // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          InventoryGrid;                                           // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            InventoryPanel;                                          // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          MessageSlot;                                             // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        OutsideSource;                                           // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          OutsideSourceGrid;                                       // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            OutsideSourcePanel;                                      // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       PantsSlot;                                               // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       PrimarySlot;                                             // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          RagdollGrid;                                             // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       Safe1Slot;                                               // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       Safe2Slot;                                               // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       Safe3Slot;                                               // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       Safe4Slot;                                               // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          SafeGrid;                                                // 0x03D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            SafePouchPanel;                                          // 0x03D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UEditableText*                                       SearchBar;                                               // 0x03E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       SecondarySlot;                                           // 0x03E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       ShieldSlot;                                              // 0x03F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ItemSlot_C*                                       ShirtSlot;                                               // 0x03F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SortDurability;                                          // 0x0400(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SortEquipmentType;                                       // 0x0408(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SortPhysicalSize;                                        // 0x0410(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SortPrice;                                               // 0x0418(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SortQuest;                                               // 0x0420(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SortStackSize;                                           // 0x0428(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SortTier;                                                // 0x0430(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SortUpgrades;                                            // 0x0438(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             StatsButton;                                             // 0x0440(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_ContainerCapacity_C*                              W_ContainerCapacity;                                     // 0x0448(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_MerchantExp_C*                                    W_MerchantExp;                                           // 0x0450(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_StatusBar_C*                                      W_StatusBar;                                             // 0x0458(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FIntPoint                                           InventorySize;                                           // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           LootSize;                                                // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWidget*>                                     EquipmentSlots;                                          // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UInventoryComponent*                                 Outside_Source_Inventory;                                // 0x0490(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UInventoryComponent*                                 Outside_Source_Inventory_Component;                      // 0x0498(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UW_Item_C*>                                   All_Item_Widgets;                                        // 0x04A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       Dead_Loot;                                               // 0x04B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_S3BI[0x7];                                   // 0x04B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_Item_C*                                           draggedItem;                                             // 0x04B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_PlayerStatsPage_C*                                PlayerStatsPage;                                         // 0x04C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    SortIndex;                                               // 0x04C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Repopulate_Ongoing;                                      // 0x04CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Main_Repopulate_Pending;                                 // 0x04CD(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Outside_Repopulate_Pending;                              // 0x04CE(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_3WF9[0x1];                                   // 0x04CF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUIInventoryDragOperation_C*                         Drag_Operation;                                          // 0x04D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UItem*                                               Item_Pending_Deletion;                                   // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UW_BackpackInventory_C*>                      Backpacks;                                               // 0x04E0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		TArray<class UItem*>                                       VisibleItems;                                            // 0x04F0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FString                                              SearchFilterAsString;                                    // 0x0500(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash
		int32_t                                                    TotalGold;                                               // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VS1H[0x4];                                   // 0x0514(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_GenericFloatingTooltip_C*                         CurrSortTooltip;                                         // 0x0518(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void HasBackpackOpen(class UItem* backpack, bool* IsOpen);
		void CreateBackpack(class UItem* Item, class UW_BackpackInventory_C** backpackWidget);
		void GetGrid(EInventorySlotType GridType, class UGridPanel** Grid);
		void OriginalSlotForItemWidget(class UW_Item_C* ItemWidget, class UW_ItemSlot_C** ItemSlot);
		void RemoveSortTooltip();
		void DisplaySortTooltip(const class FText& DisplayText);
		void GenericSortFunction(ESortStyle Sort);
		void Show_Message(const class FText& Text, const struct FLinearColor& Color);
		void Can_Equip(const struct FItemTable& Item_Data, bool* Result);
		void Get_Item_Widget_For_Item_In_Grid(class UItem* Item, class UGridPanel* Grid, class UW_Item_C** Item_Widget);
		void Try_Equip_Unequip(class UW_Item_C* Item_Widget, bool* Result);
		void Ragdoll_Slot_For_Equipment_Type(EquipmentType Type, bool Dead_Body, class UW_ItemSlot_C** Item_Slot);
		void Row_Size_For_Grid(class UGridPanel* Grid, int32_t* Size);
		void Put_Item_Widget_Into_Equpment_Slot(class UW_Item_C* Item_Widget, class UW_ItemSlot_C* Slot, class UGridPanel* Grid);
		void Put_Item_Widget_Into_Grid(class UInventoryComponent* Inventory_Component, class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& Forced_Position, bool Compact);
		void OnLoaded_C8A47C864FDBBD737D8D6BBF31D5A7BF(class UObject* Loaded);
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void Close_Inventory();
		void Operation_Event(EInventoryItemMoveResult Result);
		void Update_Main_Inventory_Event(class UInventoryComponent* Inventory);
		void Populate(bool Main_Inventory, bool Outside_Source);
		void Main_Contents_Changed(class UInventoryComponent* UpdatedInventory);
		void Clear_Inventory();
		void Clear_Belt();
		void Clear_Ragdoll();
		void Clear_Lootbox();
		void Dragging(bool On, class UW_Item_C* Item, class UUIInventoryDragOperation_C* Drag_Operation);
		void PutItemWidgetIntoGrid(class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& ForcedPosition, bool Compact);
		void Clear_Dead_Ragdoll();
		void Destruct();
		void BndEvt__UI_Inventory_StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void RemoveStats();
		void Update_Outside_Inventory_Event(class UInventoryComponent* Inventory);
		void Outside_Contents_Changed(class UInventoryComponent* UpdatedInventory);
		void Outside_Operation_Event(EInventoryItemMoveResult Result);
		void BndEvt__UI_Inventory_SortStore_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void Repopulate_Finished();
		void CloseBackpack(class UW_BackpackInventory_C* backpack);
		void RotateWidget();
		void BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SearchBar_K2Node_ComponentBoundEvent_9_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text);
		void OnInventoryDeleted(bool bClosesUserInterface);
		void InventoryPressed();
		void BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature();
		void BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature();
		void CloseBackpack_Item(class UItem* BackpackItem);
		void ExecuteUbergraph_UI_Inventory(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
