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
	 * 		Name   -> Function ItemDisplayable.ItemDisplayable_C.CloseBackpack_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BackpackItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemDisplayable_C::CloseBackpack_Item(class UItem* BackpackItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDisplayable.ItemDisplayable_C.CloseBackpack_Item");
		
		UItemDisplayable_C_CloseBackpack_Item_Params params {};
		params.BackpackItem = BackpackItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDisplayable.ItemDisplayable_C.CloseBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_BackpackInventory_C*                      backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemDisplayable_C::CloseBackpack(class UW_BackpackInventory_C* backpack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDisplayable.ItemDisplayable_C.CloseBackpack");
		
		UItemDisplayable_C_CloseBackpack_Params params {};
		params.backpack = backpack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDisplayable.ItemDisplayable_C.HasBackpackOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemDisplayable_C::HasBackpackOpen(class UItem* backpack, bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDisplayable.ItemDisplayable_C.HasBackpackOpen");
		
		UItemDisplayable_C_HasBackpackOpen_Params params {};
		params.backpack = backpack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDisplayable.ItemDisplayable_C.CreateBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_BackpackInventory_C*                      backpackWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemDisplayable_C::CreateBackpack(class UItem* Item, class UW_BackpackInventory_C** backpackWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDisplayable.ItemDisplayable_C.CreateBackpack");
		
		UItemDisplayable_C_CreateBackpack_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (backpackWidget != nullptr)
			*backpackWidget = params.backpackWidget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDisplayable.ItemDisplayable_C.GetGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventorySlotType                                 GridType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  Grid                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemDisplayable_C::GetGrid(EInventorySlotType GridType, class UGridPanel** Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDisplayable.ItemDisplayable_C.GetGrid");
		
		UItemDisplayable_C_GetGrid_Params params {};
		params.GridType = GridType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Grid != nullptr)
			*Grid = params.Grid;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDisplayable.ItemDisplayable_C.PutItemWidgetIntoGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Item_Object                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force_Position                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIntPoint                                   ForcedPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Compact                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UItemDisplayable_C::PutItemWidgetIntoGrid(class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& ForcedPosition, bool Compact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDisplayable.ItemDisplayable_C.PutItemWidgetIntoGrid");
		
		UItemDisplayable_C_PutItemWidgetIntoGrid_Params params {};
		params.Grid = Grid;
		params.Widget = Widget;
		params.Item_Object = Item_Object;
		params.Force_Position = Force_Position;
		params.ForcedPosition = ForcedPosition;
		params.Compact = Compact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDisplayable.ItemDisplayable_C.Dragging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UW_Item_C*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUIInventoryDragOperation_C*                 Drag_Operation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemDisplayable_C::Dragging(bool On, class UW_Item_C* Item, class UUIInventoryDragOperation_C* Drag_Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDisplayable.ItemDisplayable_C.Dragging");
		
		UItemDisplayable_C_Dragging_Params params {};
		params.On = On;
		params.Item = Item;
		params.Drag_Operation = Drag_Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ItemDisplayable.ItemDisplayable_C.OriginalSlotForItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Item_C*                                   ItemWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSlot_C*                               ItemSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UItemDisplayable_C::OriginalSlotForItemWidget(class UW_Item_C* ItemWidget, class UW_ItemSlot_C** ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ItemDisplayable.ItemDisplayable_C.OriginalSlotForItemWidget");
		
		UItemDisplayable_C_OriginalSlotForItemWidget_Params params {};
		params.ItemWidget = ItemWidget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemSlot != nullptr)
			*ItemSlot = params.ItemSlot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemDisplayable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemDisplayable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ItemDisplayable.ItemDisplayable_C");
		return ptr;
	}

}


