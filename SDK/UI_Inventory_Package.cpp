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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.HasBackpackOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Inventory_C::HasBackpackOpen(class UItem* backpack, bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.HasBackpackOpen");
		
		UUI_Inventory_C_HasBackpackOpen_Params params {};
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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.CreateBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_BackpackInventory_C*                      backpackWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::CreateBackpack(class UItem* Item, class UW_BackpackInventory_C** backpackWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.CreateBackpack");
		
		UUI_Inventory_C_CreateBackpack_Params params {};
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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.GetGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventorySlotType                                 GridType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  Grid                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::GetGrid(EInventorySlotType GridType, class UGridPanel** Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.GetGrid");
		
		UUI_Inventory_C_GetGrid_Params params {};
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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.OriginalSlotForItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Item_C*                                   ItemWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSlot_C*                               ItemSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::OriginalSlotForItemWidget(class UW_Item_C* ItemWidget, class UW_ItemSlot_C** ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OriginalSlotForItemWidget");
		
		UUI_Inventory_C_OriginalSlotForItemWidget_Params params {};
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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.RemoveSortTooltip
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::RemoveSortTooltip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.RemoveSortTooltip");
		
		UUI_Inventory_C_RemoveSortTooltip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.DisplaySortTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        DisplayText                                                (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UUI_Inventory_C::DisplaySortTooltip(const class FText& DisplayText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.DisplaySortTooltip");
		
		UUI_Inventory_C_DisplaySortTooltip_Params params {};
		params.DisplayText = DisplayText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.GenericSortFunction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ESortStyle                                         Sort                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::GenericSortFunction(ESortStyle Sort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.GenericSortFunction");
		
		UUI_Inventory_C_GenericSortFunction_Params params {};
		params.Sort = Sort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Show Message
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		struct FLinearColor                                Color                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Show_Message(const class FText& Text, const struct FLinearColor& Color)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Show Message");
		
		UUI_Inventory_C_Show_Message_Params params {};
		params.Text = Text;
		params.Color = Color;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Can Equip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemTable                                  Item_Data                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Inventory_C::Can_Equip(const struct FItemTable& Item_Data, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Can Equip");
		
		UUI_Inventory_C_Can_Equip_Params params {};
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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Get Item Widget For Item In Grid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_Item_C*                                   Item_Widget                                                (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Get_Item_Widget_For_Item_In_Grid(class UItem* Item, class UGridPanel* Grid, class UW_Item_C** Item_Widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Get Item Widget For Item In Grid");
		
		UUI_Inventory_C_Get_Item_Widget_For_Item_In_Grid_Params params {};
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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Try Equip Unequip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Item_C*                                   Item_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Inventory_C::Try_Equip_Unequip(class UW_Item_C* Item_Widget, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Try Equip Unequip");
		
		UUI_Inventory_C_Try_Equip_Unequip_Params params {};
		params.Item_Widget = Item_Widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Ragdoll Slot For Equipment Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      Type                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Dead_Body                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UW_ItemSlot_C*                               Item_Slot                                                  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Ragdoll_Slot_For_Equipment_Type(EquipmentType Type, bool Dead_Body, class UW_ItemSlot_C** Item_Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Ragdoll Slot For Equipment Type");
		
		UUI_Inventory_C_Ragdoll_Slot_For_Equipment_Type_Params params {};
		params.Type = Type;
		params.Dead_Body = Dead_Body;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Item_Slot != nullptr)
			*Item_Slot = params.Item_Slot;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Row Size For Grid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Row_Size_For_Grid(class UGridPanel* Grid, int32_t* Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Row Size For Grid");
		
		UUI_Inventory_C_Row_Size_For_Grid_Params params {};
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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Put Item Widget Into Equpment Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Item_C*                                   Item_Widget                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSlot_C*                               Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Put_Item_Widget_Into_Equpment_Slot(class UW_Item_C* Item_Widget, class UW_ItemSlot_C* Slot, class UGridPanel* Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Put Item Widget Into Equpment Slot");
		
		UUI_Inventory_C_Put_Item_Widget_Into_Equpment_Slot_Params params {};
		params.Item_Widget = Item_Widget;
		params.Slot = Slot;
		params.Grid = Grid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Put Item Widget Into Grid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory_Component                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Item_Object                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force_Position                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIntPoint                                   Forced_Position                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Compact                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Inventory_C::Put_Item_Widget_Into_Grid(class UInventoryComponent* Inventory_Component, class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& Forced_Position, bool Compact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Put Item Widget Into Grid");
		
		UUI_Inventory_C_Put_Item_Widget_Into_Grid_Params params {};
		params.Inventory_Component = Inventory_Component;
		params.Grid = Grid;
		params.Widget = Widget;
		params.Item_Object = Item_Object;
		params.Force_Position = Force_Position;
		params.Forced_Position = Forced_Position;
		params.Compact = Compact;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.OnLoaded_C8A47C864FDBBD737D8D6BBF31D5A7BF
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::OnLoaded_C8A47C864FDBBD737D8D6BBF31D5A7BF(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnLoaded_C8A47C864FDBBD737D8D6BBF31D5A7BF");
		
		UUI_Inventory_C_OnLoaded_C8A47C864FDBBD737D8D6BBF31D5A7BF_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Inventory_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.PreConstruct");
		
		UUI_Inventory_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Construct");
		
		UUI_Inventory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Close Inventory
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::Close_Inventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Close Inventory");
		
		UUI_Inventory_C_Close_Inventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Operation Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryItemMoveResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Operation_Event(EInventoryItemMoveResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Operation Event");
		
		UUI_Inventory_C_Operation_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Update Main Inventory Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Update_Main_Inventory_Event(class UInventoryComponent* Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Update Main Inventory Event");
		
		UUI_Inventory_C_Update_Main_Inventory_Event_Params params {};
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Populate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Main_Inventory                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Outside_Source                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Inventory_C::Populate(bool Main_Inventory, bool Outside_Source)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Populate");
		
		UUI_Inventory_C_Populate_Params params {};
		params.Main_Inventory = Main_Inventory;
		params.Outside_Source = Outside_Source;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Main Contents Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         UpdatedInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Main_Contents_Changed(class UInventoryComponent* UpdatedInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Main Contents Changed");
		
		UUI_Inventory_C_Main_Contents_Changed_Params params {};
		params.UpdatedInventory = UpdatedInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Clear Inventory
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::Clear_Inventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Clear Inventory");
		
		UUI_Inventory_C_Clear_Inventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Clear Belt
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::Clear_Belt()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Clear Belt");
		
		UUI_Inventory_C_Clear_Belt_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Clear Ragdoll
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::Clear_Ragdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Clear Ragdoll");
		
		UUI_Inventory_C_Clear_Ragdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Clear Lootbox
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::Clear_Lootbox()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Clear Lootbox");
		
		UUI_Inventory_C_Clear_Lootbox_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Dragging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UW_Item_C*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUIInventoryDragOperation_C*                 Drag_Operation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Dragging(bool On, class UW_Item_C* Item, class UUIInventoryDragOperation_C* Drag_Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Dragging");
		
		UUI_Inventory_C_Dragging_Params params {};
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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.PutItemWidgetIntoGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Item_Object                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force_Position                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIntPoint                                   ForcedPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Compact                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Inventory_C::PutItemWidgetIntoGrid(class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& ForcedPosition, bool Compact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.PutItemWidgetIntoGrid");
		
		UUI_Inventory_C_PutItemWidgetIntoGrid_Params params {};
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
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Clear Dead Ragdoll
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::Clear_Dead_Ragdoll()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Clear Dead Ragdoll");
		
		UUI_Inventory_C_Clear_Dead_Ragdoll_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Destruct
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Destruct");
		
		UUI_Inventory_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.RemoveStats
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::RemoveStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.RemoveStats");
		
		UUI_Inventory_C_RemoveStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Update Outside Inventory Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Update_Outside_Inventory_Event(class UInventoryComponent* Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Update Outside Inventory Event");
		
		UUI_Inventory_C_Update_Outside_Inventory_Event_Params params {};
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Outside Contents Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         UpdatedInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Outside_Contents_Changed(class UInventoryComponent* UpdatedInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Outside Contents Changed");
		
		UUI_Inventory_C_Outside_Contents_Changed_Params params {};
		params.UpdatedInventory = UpdatedInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Outside Operation Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryItemMoveResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::Outside_Operation_Event(EInventoryItemMoveResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Outside Operation Event");
		
		UUI_Inventory_C_Outside_Operation_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStore_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortStore_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStore_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortStore_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.Repopulate Finished
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::Repopulate_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.Repopulate Finished");
		
		UUI_Inventory_C_Repopulate_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.CloseBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_BackpackInventory_C*                      backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::CloseBackpack(class UW_BackpackInventory_C* backpack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.CloseBackpack");
		
		UUI_Inventory_C_CloseBackpack_Params params {};
		params.backpack = backpack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.RotateWidget
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::RotateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.RotateWidget");
		
		UUI_Inventory_C_RotateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SearchBar_K2Node_ComponentBoundEvent_9_OnEditableTextChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SearchBar_K2Node_ComponentBoundEvent_9_OnEditableTextChangedEvent__DelegateSignature(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SearchBar_K2Node_ComponentBoundEvent_9_OnEditableTextChangedEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SearchBar_K2Node_ComponentBoundEvent_9_OnEditableTextChangedEvent__DelegateSignature_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.OnInventoryDeleted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bClosesUserInterface                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Inventory_C::OnInventoryDeleted(bool bClosesUserInterface)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.OnInventoryDeleted");
		
		UUI_Inventory_C_OnInventoryDeleted_Params params {};
		params.bClosesUserInterface = bClosesUserInterface;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.InventoryPressed
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::InventoryPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.InventoryPressed");
		
		UUI_Inventory_C_InventoryPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Inventory_C::BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature");
		
		UUI_Inventory_C_BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.CloseBackpack_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BackpackItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::CloseBackpack_Item(class UItem* BackpackItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.CloseBackpack_Item");
		
		UUI_Inventory_C_CloseBackpack_Item_Params params {};
		params.BackpackItem = BackpackItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Inventory_C::ExecuteUbergraph_UI_Inventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory");
		
		UUI_Inventory_C_ExecuteUbergraph_UI_Inventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Inventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Inventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Inventory.UI_Inventory_C");
		return ptr;
	}

}


