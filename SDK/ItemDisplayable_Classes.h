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
	 * BlueprintGeneratedClass ItemDisplayable.ItemDisplayable_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UItemDisplayable_C : public UInterface
	{
	public:
		void CloseBackpack_Item(class UItem* BackpackItem);
		void CloseBackpack(class UW_BackpackInventory_C* backpack);
		void HasBackpackOpen(class UItem* backpack, bool* IsOpen);
		void CreateBackpack(class UItem* Item, class UW_BackpackInventory_C** backpackWidget);
		void GetGrid(EInventorySlotType GridType, class UGridPanel** Grid);
		void PutItemWidgetIntoGrid(class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& ForcedPosition, bool Compact);
		void Dragging(bool On, class UW_Item_C* Item, class UUIInventoryDragOperation_C* Drag_Operation);
		void OriginalSlotForItemWidget(class UW_Item_C* ItemWidget, class UW_ItemSlot_C** ItemSlot);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
