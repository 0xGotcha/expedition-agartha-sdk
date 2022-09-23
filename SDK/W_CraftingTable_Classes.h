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
	 * WidgetBlueprintGeneratedClass W_CraftingTable.W_CraftingTable_C
	 * Size -> 0x0280 (FullSize[0x04E0] - InheritedSize[0x0260])
	 */
	class UW_CraftingTable_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              Background;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BackpackIcon;                                            // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CraftButton;                                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            CraftingOutput;                                          // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            CraftingSpace;                                           // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            CraftingUpgradeDisplay;                                  // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          InputGrid;                                               // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          InventoryGrid;                                           // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          InventoryName;                                           // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          InventoryName_2;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          InventoryName_3;                                         // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            InventoryPanel;                                          // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UNamedSlot*                                          MessageSlot;                                             // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          NotesDisplay;                                            // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          OutputAmount;                                            // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          OutputGrid;                                              // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             OutputsSlider;                                           // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UOverlay*                                            PlayerNotes;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StationDescription;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StationLevelText;                                        // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          StationName;                                             // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             SwapInventoryButton;                                     // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          UpgradeDisplay;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              YieldArrow;                                              // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FIntPoint                                           InventorySize;                                           // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FIntPoint                                           LootSize;                                                // 0x0338(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UWidget*>                                     EquipmentSlots;                                          // 0x0340(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x0350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UW_Item_C*>                                   All_Item_Widgets;                                        // 0x0358(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UCraftingComponent*                                  CraftingTable;                                           // 0x0368(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		int32_t                                                    RecipeIndex;                                             // 0x0370(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              Quality;                                                 // 0x0374(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W5E7[0x3];                                   // 0x0375(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            InputGridCollision;                                      // 0x0378(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UW_Item_C*                                           draggedItem;                                             // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              stationLevel;                                            // 0x0390(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              stationContainerWidth;                                   // 0x0391(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              stationContainerHeight;                                  // 0x0392(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_H2B5[0x5];                                   // 0x0393(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<struct FCraftingStationInfo, class FName>             StationToUpgrade;                                        // 0x0398(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UItem*>                                       TmpStationUpgradeItems;                                  // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              TmpStationUpgradeItemsWidth;                             // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PP5B[0x7];                                   // 0x03F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UW_BackpackInventory_C*>                      Backpacks;                                               // 0x0400(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		bool                                                       isInventory;                                             // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_JAFJ[0x7];                                   // 0x0411(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          CraftSFX;                                                // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              StationToCraftSFX[0x50];                                 // 0x0420(0x0050) UNKNOWN PROPERTY: MapProperty
		int32_t                                                    NotesWidth;                                              // 0x0470(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7KJ4[0x4];                                   // 0x0474(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UItem*>                                       AllPlayerNotesItems;                                     // 0x0478(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    NotesHeight;                                             // 0x0488(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JBCF[0x4];                                   // 0x048C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              InputWidgetToColSpace[0x50];                             // 0x0490(0x0050) UNKNOWN PROPERTY: MapProperty

	public:
		void HasBackpackOpen(class UItem* backpack, bool* IsOpen);
		void CreateBackpack(class UItem* Item, class UW_BackpackInventory_C** backpackWidget);
		void GetGrid(EInventorySlotType GridType, class UGridPanel** Grid);
		void OriginalSlotForItemWidget(class UW_Item_C* ItemWidget, class UW_ItemSlot_C** ItemSlot);
		void AddNotesToArray(class UItem** Item);
		void RemoveCraftingInput(class UItem* Item, bool* wasRemoved);
		void AddCraftingInput(class UItem* NewItem, int32_t* Index);
		void CreateOutputItemsNew(TArray<class UItem*>* Items, int32_t GridSize, class UGridPanel* OutputGrid);
		void CreateUpgradeItem();
		void GetRootContainer(TArray<class UItem*>* Container);
		void Show_Message(const class FText& Text, const struct FLinearColor& Color);
		void Can_Equip(const struct FItemTable& Item_Data, bool* Result);
		void Get_Item_Widget_For_Item_In_Grid(class UItem* Item, class UGridPanel* Grid, class UW_Item_C** Item_Widget);
		void Row_Size_For_Grid(class UGridPanel* Grid, int32_t* Size);
		void OnLoaded_FD8D374941AC2DE5BB9BC4B6C794C452(class UObject* Loaded);
		void Construct();
		void Close_Crafting_Table();
		void Operation_Event(EInventoryItemMoveResult Result);
		void Update_Inventory_Event(class UInventoryComponent* Inventory);
		void Populate();
		void Contents_Changed(class UInventoryComponent* UpdatedInventory);
		void Outside_Source_Inventory_Updated(class UInventoryComponent* UpdatedInventory);
		void Clear_Inventory();
		void Clear_Output_Grid();
		void Clear_Input_Grid();
		void Dragging(bool On, class UW_Item_C* Item, class UUIInventoryDragOperation_C* Drag_Operation);
		void PutItemWidgetIntoGrid(class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& ForcedPosition, bool Compact);
		void CraftItem();
		void BndEvt__W_CraftingTable_CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void CreateFakeItemInGrid(class UGridPanel* Grid, class UObject* Item, bool ForcePosition, const struct FIntPoint& ForcedPosition, bool Compact);
		void BndEvt__W_CraftingTable_OutputsSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void RemoveFakeItemFromGrid(class UGridPanel* Grid, class UItem* Item);
		void RecipeCraftedEvent(bool bWasSuccessful, ECraftResult Result);
		void ServerFinishedRotationHandler();
		void OnStationRankRetrievedHandler(unsigned char ContainerWidth, unsigned char ContainerHeight, unsigned char Level);
		void Destruct();
		void TryShowStationUpgradeRequirements();
		void ClearUpgradeDisplay();
		void CloseBackpack(class UW_BackpackInventory_C* backpack);
		void InventorySetup(class UInventoryComponent* InventoryComponent);
		void UnbindInventoryEvents();
		void BndEvt__W_CraftingTable_SwapInventoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
		void RepopulateBackpacks();
		void TryShowPlayerNotes();
		void TryGetAllPlayerNotes();
		void CloseBackpack_Item(class UItem* BackpackItem);
		void ExecuteUbergraph_W_CraftingTable(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
