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
	 * WidgetBlueprintGeneratedClass W_BackpackInventory.W_BackpackInventory_C
	 * Size -> 0x00C0 (FullSize[0x0320] - InheritedSize[0x0260])
	 */
	class UW_BackpackInventory_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UImage*                                              Background;                                              // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UBorder*                                             Border_228;                                              // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             CloseBackpackButton;                                     // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UGridPanel*                                          ItemPannel;                                              // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          PackName;                                                // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UItem*                                               Item;                                                    // 0x0290(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x0298(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UW_Item_C*>                                   All_Item_Widgets;                                        // 0x02A0(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		class UW_Item_C*                                           draggedItem;                                             // 0x02B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              ParentDisplayable[0x10];                                 // 0x02B8(0x0010) UNKNOWN PROPERTY: InterfaceProperty
		bool                                                       isDummy;                                                 // 0x02C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn
		bool                                                       RepopulateOngoing;                                       // 0x02C9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       PopulatePending;                                         // 0x02CA(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_YVL3[0x1];                                   // 0x02CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           LastMouseOffset;                                         // 0x02CC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VN7X[0x4];                                   // 0x02D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UW_BackpackInventory_C*>                      Backpacks;                                               // 0x02D8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference
		int32_t                                                    SubPack;                                                 // 0x02E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_JR0Q[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUIInventoryDragOperation_C*                         DragOperation;                                           // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class UItem*>                                       itemsToSkip;                                             // 0x02F8(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                CustomPackName;                                          // 0x0308(0x0018) Edit, BlueprintVisible, ExposeOnSpawn

	public:
		void HasBackpackOpen(class UItem* backpack, bool* IsOpen);
		void CreateBackpack(class UItem* Item, class UW_BackpackInventory_C** backpackWidget);
		void OriginalSlotForItemWidget(class UW_Item_C* ItemWidget, class UW_ItemSlot_C** ItemSlot);
		void GetGrid(EInventorySlotType GridType, class UGridPanel** Grid);
		struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
		void OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation);
		void Put_Item_Widget_Into_Grid(class UInventoryComponent* Inventory_Component, class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& Forced_Position, bool Compact);
		void Construct();
		void Operation_Event(EInventoryItemMoveResult Result);
		void Update_Inventory_Event(class UInventoryComponent* Inventory);
		void Contents_Changed(class UInventoryComponent* UpdatedInventory);
		void PutItemWidgetIntoGrid(class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& ForcedPosition, bool Compact);
		void Dragging(bool On, class UW_Item_C* Item, class UUIInventoryDragOperation_C* Drag_Operation);
		void BndEvt__W_BackpackInventory_CloseBackpack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void Close();
		void OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
		void ClearItemGrid();
		void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
		void ServerFinishedRotationHandler();
		void Populate();
		void RepopulateFinished();
		void CloseBackpack(class UW_BackpackInventory_C* backpack);
		void RotateWidget();
		void RotateInputDetected();
		void PopulateBackpacks(TArray<class UItem*> itemsToSkip);
		void CloseBackpack_Item(class UItem* BackpackItem);
		void ExecuteUbergraph_W_BackpackInventory(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
