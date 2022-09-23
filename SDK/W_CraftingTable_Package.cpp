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
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.HasBackpackOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_CraftingTable_C::HasBackpackOpen(class UItem* backpack, bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.HasBackpackOpen");
		
		UW_CraftingTable_C_HasBackpackOpen_Params params {};
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
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.CreateBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_BackpackInventory_C*                      backpackWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::CreateBackpack(class UItem* Item, class UW_BackpackInventory_C** backpackWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.CreateBackpack");
		
		UW_CraftingTable_C_CreateBackpack_Params params {};
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
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.GetGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventorySlotType                                 GridType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  Grid                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::GetGrid(EInventorySlotType GridType, class UGridPanel** Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.GetGrid");
		
		UW_CraftingTable_C_GetGrid_Params params {};
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
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.OriginalSlotForItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Item_C*                                   ItemWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSlot_C*                               ItemSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::OriginalSlotForItemWidget(class UW_Item_C* ItemWidget, class UW_ItemSlot_C** ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.OriginalSlotForItemWidget");
		
		UW_CraftingTable_C_OriginalSlotForItemWidget_Params params {};
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
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.AddNotesToArray
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::AddNotesToArray(class UItem** Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.AddNotesToArray");
		
		UW_CraftingTable_C_AddNotesToArray_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item != nullptr)
			*Item = params.Item;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.RemoveCraftingInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               wasRemoved                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_CraftingTable_C::RemoveCraftingInput(class UItem* Item, bool* wasRemoved)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.RemoveCraftingInput");
		
		UW_CraftingTable_C_RemoveCraftingInput_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (wasRemoved != nullptr)
			*wasRemoved = params.wasRemoved;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.AddCraftingInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::AddCraftingInput(class UItem* NewItem, int32_t* Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.AddCraftingInput");
		
		UW_CraftingTable_C_AddCraftingInput_Params params {};
		params.NewItem = NewItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Index != nullptr)
			*Index = params.Index;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.CreateOutputItemsNew
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItem*>                               Items                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            GridSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  OutputGrid                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::CreateOutputItemsNew(TArray<class UItem*>* Items, int32_t GridSize, class UGridPanel* OutputGrid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.CreateOutputItemsNew");
		
		UW_CraftingTable_C_CreateOutputItemsNew_Params params {};
		params.GridSize = GridSize;
		params.OutputGrid = OutputGrid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.CreateUpgradeItem
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::CreateUpgradeItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.CreateUpgradeItem");
		
		UW_CraftingTable_C_CreateUpgradeItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.GetRootContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItem*>                               Container                                                  (Parm, OutParm)
	 */
	void UW_CraftingTable_C::GetRootContainer(TArray<class UItem*>* Container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.GetRootContainer");
		
		UW_CraftingTable_C_GetRootContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Container != nullptr)
			*Container = params.Container;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Show Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::Show_Message(const class FText& Text, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Show Message");
		
		UW_CraftingTable_C_Show_Message_Params params {};
		params.Text = Text;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Can Equip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemTable                                  Item_Data                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_CraftingTable_C::Can_Equip(const struct FItemTable& Item_Data, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Can Equip");
		
		UW_CraftingTable_C_Can_Equip_Params params {};
		params.Item_Data = Item_Data;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Get Item Widget For Item In Grid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Item_C*                                   Item_Widget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::Get_Item_Widget_For_Item_In_Grid(class UItem* Item, class UGridPanel* Grid, class UW_Item_C** Item_Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Get Item Widget For Item In Grid");
		
		UW_CraftingTable_C_Get_Item_Widget_For_Item_In_Grid_Params params {};
		params.Item = Item;
		params.Grid = Grid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item_Widget != nullptr)
			*Item_Widget = params.Item_Widget;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Row Size For Grid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::Row_Size_For_Grid(class UGridPanel* Grid, int32_t* Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Row Size For Grid");
		
		UW_CraftingTable_C_Row_Size_For_Grid_Params params {};
		params.Grid = Grid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Size != nullptr)
			*Size = params.Size;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.OnLoaded_FD8D374941AC2DE5BB9BC4B6C794C452
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::OnLoaded_FD8D374941AC2DE5BB9BC4B6C794C452(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.OnLoaded_FD8D374941AC2DE5BB9BC4B6C794C452");
		
		UW_CraftingTable_C_OnLoaded_FD8D374941AC2DE5BB9BC4B6C794C452_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Construct");
		
		UW_CraftingTable_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Close Crafting Table
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::Close_Crafting_Table()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Close Crafting Table");
		
		UW_CraftingTable_C_Close_Crafting_Table_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Operation Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryItemMoveResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::Operation_Event(EInventoryItemMoveResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Operation Event");
		
		UW_CraftingTable_C_Operation_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Update Inventory Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::Update_Inventory_Event(class UInventoryComponent* Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Update Inventory Event");
		
		UW_CraftingTable_C_Update_Inventory_Event_Params params {};
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Populate
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Populate");
		
		UW_CraftingTable_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Contents Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         UpdatedInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::Contents_Changed(class UInventoryComponent* UpdatedInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Contents Changed");
		
		UW_CraftingTable_C_Contents_Changed_Params params {};
		params.UpdatedInventory = UpdatedInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Outside Source Inventory Updated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         UpdatedInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::Outside_Source_Inventory_Updated(class UInventoryComponent* UpdatedInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Outside Source Inventory Updated");
		
		UW_CraftingTable_C_Outside_Source_Inventory_Updated_Params params {};
		params.UpdatedInventory = UpdatedInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Clear Inventory
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::Clear_Inventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Clear Inventory");
		
		UW_CraftingTable_C_Clear_Inventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Clear Output Grid
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::Clear_Output_Grid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Clear Output Grid");
		
		UW_CraftingTable_C_Clear_Output_Grid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Clear Input Grid
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::Clear_Input_Grid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Clear Input Grid");
		
		UW_CraftingTable_C_Clear_Input_Grid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Dragging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UW_Item_C*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUIInventoryDragOperation_C*                 Drag_Operation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::Dragging(bool On, class UW_Item_C* Item, class UUIInventoryDragOperation_C* Drag_Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Dragging");
		
		UW_CraftingTable_C_Dragging_Params params {};
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
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.PutItemWidgetIntoGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Item_Object                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force_Position                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIntPoint                                   ForcedPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Compact                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_CraftingTable_C::PutItemWidgetIntoGrid(class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& ForcedPosition, bool Compact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.PutItemWidgetIntoGrid");
		
		UW_CraftingTable_C_PutItemWidgetIntoGrid_Params params {};
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
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.CraftItem
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::CraftItem()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.CraftItem");
		
		UW_CraftingTable_C_CraftItem_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.BndEvt__W_CraftingTable_CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::BndEvt__W_CraftingTable_CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.BndEvt__W_CraftingTable_CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_CraftingTable_C_BndEvt__W_CraftingTable_CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.CreateFakeItemInGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               ForcePosition                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIntPoint                                   ForcedPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Compact                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_CraftingTable_C::CreateFakeItemInGrid(class UGridPanel* Grid, class UObject* Item, bool ForcePosition, const struct FIntPoint& ForcedPosition, bool Compact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.CreateFakeItemInGrid");
		
		UW_CraftingTable_C_CreateFakeItemInGrid_Params params {};
		params.Grid = Grid;
		params.Item = Item;
		params.ForcePosition = ForcePosition;
		params.ForcedPosition = ForcedPosition;
		params.Compact = Compact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.BndEvt__W_CraftingTable_OutputsSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::BndEvt__W_CraftingTable_OutputsSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.BndEvt__W_CraftingTable_OutputsSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature");
		
		UW_CraftingTable_C_BndEvt__W_CraftingTable_OutputsSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.RemoveFakeItemFromGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::RemoveFakeItemFromGrid(class UGridPanel* Grid, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.RemoveFakeItemFromGrid");
		
		UW_CraftingTable_C_RemoveFakeItemFromGrid_Params params {};
		params.Grid = Grid;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.RecipeCraftedEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasSuccessful                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		ECraftResult                                       Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::RecipeCraftedEvent(bool bWasSuccessful, ECraftResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.RecipeCraftedEvent");
		
		UW_CraftingTable_C_RecipeCraftedEvent_Params params {};
		params.bWasSuccessful = bWasSuccessful;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.ServerFinishedRotationHandler
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::ServerFinishedRotationHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.ServerFinishedRotationHandler");
		
		UW_CraftingTable_C_ServerFinishedRotationHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.OnStationRankRetrievedHandler
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      ContainerWidth                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      ContainerHeight                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      Level                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::OnStationRankRetrievedHandler(unsigned char ContainerWidth, unsigned char ContainerHeight, unsigned char Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.OnStationRankRetrievedHandler");
		
		UW_CraftingTable_C_OnStationRankRetrievedHandler_Params params {};
		params.ContainerWidth = ContainerWidth;
		params.ContainerHeight = ContainerHeight;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.Destruct
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.Destruct");
		
		UW_CraftingTable_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.TryShowStationUpgradeRequirements
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::TryShowStationUpgradeRequirements()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.TryShowStationUpgradeRequirements");
		
		UW_CraftingTable_C_TryShowStationUpgradeRequirements_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.ClearUpgradeDisplay
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::ClearUpgradeDisplay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.ClearUpgradeDisplay");
		
		UW_CraftingTable_C_ClearUpgradeDisplay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.CloseBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_BackpackInventory_C*                      backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::CloseBackpack(class UW_BackpackInventory_C* backpack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.CloseBackpack");
		
		UW_CraftingTable_C_CloseBackpack_Params params {};
		params.backpack = backpack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.InventorySetup
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         InventoryComponent                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::InventorySetup(class UInventoryComponent* InventoryComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.InventorySetup");
		
		UW_CraftingTable_C_InventorySetup_Params params {};
		params.InventoryComponent = InventoryComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.UnbindInventoryEvents
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::UnbindInventoryEvents()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.UnbindInventoryEvents");
		
		UW_CraftingTable_C_UnbindInventoryEvents_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.BndEvt__W_CraftingTable_SwapInventoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::BndEvt__W_CraftingTable_SwapInventoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.BndEvt__W_CraftingTable_SwapInventoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UW_CraftingTable_C_BndEvt__W_CraftingTable_SwapInventoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.RepopulateBackpacks
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::RepopulateBackpacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.RepopulateBackpacks");
		
		UW_CraftingTable_C_RepopulateBackpacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.TryShowPlayerNotes
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::TryShowPlayerNotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.TryShowPlayerNotes");
		
		UW_CraftingTable_C_TryShowPlayerNotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.TryGetAllPlayerNotes
	 * 		Flags  -> ()
	 */
	void UW_CraftingTable_C::TryGetAllPlayerNotes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.TryGetAllPlayerNotes");
		
		UW_CraftingTable_C_TryGetAllPlayerNotes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.CloseBackpack_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BackpackItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::CloseBackpack_Item(class UItem* BackpackItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.CloseBackpack_Item");
		
		UW_CraftingTable_C_CloseBackpack_Item_Params params {};
		params.BackpackItem = BackpackItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_CraftingTable.W_CraftingTable_C.ExecuteUbergraph_W_CraftingTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_CraftingTable_C::ExecuteUbergraph_W_CraftingTable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_CraftingTable.W_CraftingTable_C.ExecuteUbergraph_W_CraftingTable");
		
		UW_CraftingTable_C_ExecuteUbergraph_W_CraftingTable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_CraftingTable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_CraftingTable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_CraftingTable.W_CraftingTable_C");
		return ptr;
	}

}


