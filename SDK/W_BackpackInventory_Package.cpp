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
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.HasBackpackOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_BackpackInventory_C::HasBackpackOpen(class UItem* backpack, bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.HasBackpackOpen");
		
		UW_BackpackInventory_C_HasBackpackOpen_Params params {};
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
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.CreateBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_BackpackInventory_C*                      backpackWidget                                             (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::CreateBackpack(class UItem* Item, class UW_BackpackInventory_C** backpackWidget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.CreateBackpack");
		
		UW_BackpackInventory_C_CreateBackpack_Params params {};
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
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.OriginalSlotForItemWidget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Item_C*                                   ItemWidget                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_ItemSlot_C*                               ItemSlot                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::OriginalSlotForItemWidget(class UW_Item_C* ItemWidget, class UW_ItemSlot_C** ItemSlot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.OriginalSlotForItemWidget");
		
		UW_BackpackInventory_C_OriginalSlotForItemWidget_Params params {};
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
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.GetGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventorySlotType                                 GridType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UGridPanel*                                  Grid                                                       (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::GetGrid(EInventorySlotType GridType, class UGridPanel** Grid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.GetGrid");
		
		UW_BackpackInventory_C_GetGrid_Params params {};
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
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.OnMouseButtonDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               MouseEvent                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	struct FEventReply UW_BackpackInventory_C::OnMouseButtonDown(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.OnMouseButtonDown");
		
		UW_BackpackInventory_C_OnMouseButtonDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.MouseEvent = MouseEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.OnDragDetected
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::OnDragDetected(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.OnDragDetected");
		
		UW_BackpackInventory_C_OnDragDetected_Params params {};
		params.MyGeometry = MyGeometry;
		params.PointerEvent = PointerEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Operation != nullptr)
			*Operation = params.Operation;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.Put Item Widget Into Grid
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
	void UW_BackpackInventory_C::Put_Item_Widget_Into_Grid(class UInventoryComponent* Inventory_Component, class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& Forced_Position, bool Compact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.Put Item Widget Into Grid");
		
		UW_BackpackInventory_C_Put_Item_Widget_Into_Grid_Params params {};
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
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_BackpackInventory_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.Construct");
		
		UW_BackpackInventory_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.Operation Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryItemMoveResult                           Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::Operation_Event(EInventoryItemMoveResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.Operation Event");
		
		UW_BackpackInventory_C_Operation_Event_Params params {};
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.Update Inventory Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::Update_Inventory_Event(class UInventoryComponent* Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.Update Inventory Event");
		
		UW_BackpackInventory_C_Update_Inventory_Event_Params params {};
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.Contents Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         UpdatedInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::Contents_Changed(class UInventoryComponent* UpdatedInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.Contents Changed");
		
		UW_BackpackInventory_C_Contents_Changed_Params params {};
		params.UpdatedInventory = UpdatedInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.PutItemWidgetIntoGrid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGridPanel*                                  Grid                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UWidget*                                     Widget                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UObject*                                     Item_Object                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Force_Position                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FIntPoint                                   ForcedPosition                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Compact                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_BackpackInventory_C::PutItemWidgetIntoGrid(class UGridPanel* Grid, class UWidget* Widget, class UObject* Item_Object, bool Force_Position, const struct FIntPoint& ForcedPosition, bool Compact)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.PutItemWidgetIntoGrid");
		
		UW_BackpackInventory_C_PutItemWidgetIntoGrid_Params params {};
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
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.Dragging
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               On                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class UW_Item_C*                                   Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UUIInventoryDragOperation_C*                 Drag_Operation                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::Dragging(bool On, class UW_Item_C* Item, class UUIInventoryDragOperation_C* Drag_Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.Dragging");
		
		UW_BackpackInventory_C_Dragging_Params params {};
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
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.BndEvt__W_BackpackInventory_CloseBackpack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_BackpackInventory_C::BndEvt__W_BackpackInventory_CloseBackpack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.BndEvt__W_BackpackInventory_CloseBackpack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_BackpackInventory_C_BndEvt__W_BackpackInventory_CloseBackpack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.Close
	 * 		Flags  -> ()
	 */
	void UW_BackpackInventory_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.Close");
		
		UW_BackpackInventory_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.OnDragCancelled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPointerEvent                               PointerEvent                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UDragDropOperation*                          Operation                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::OnDragCancelled(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.OnDragCancelled");
		
		UW_BackpackInventory_C_OnDragCancelled_Params params {};
		params.PointerEvent = PointerEvent;
		params.Operation = Operation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.ClearItemGrid
	 * 		Flags  -> ()
	 */
	void UW_BackpackInventory_C::ClearItemGrid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.ClearItemGrid");
		
		UW_BackpackInventory_C_ClearItemGrid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.Tick");
		
		UW_BackpackInventory_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.ServerFinishedRotationHandler
	 * 		Flags  -> ()
	 */
	void UW_BackpackInventory_C::ServerFinishedRotationHandler()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.ServerFinishedRotationHandler");
		
		UW_BackpackInventory_C_ServerFinishedRotationHandler_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.Populate
	 * 		Flags  -> ()
	 */
	void UW_BackpackInventory_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.Populate");
		
		UW_BackpackInventory_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.RepopulateFinished
	 * 		Flags  -> ()
	 */
	void UW_BackpackInventory_C::RepopulateFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.RepopulateFinished");
		
		UW_BackpackInventory_C_RepopulateFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.CloseBackpack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_BackpackInventory_C*                      backpack                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::CloseBackpack(class UW_BackpackInventory_C* backpack)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.CloseBackpack");
		
		UW_BackpackInventory_C_CloseBackpack_Params params {};
		params.backpack = backpack;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.RotateWidget
	 * 		Flags  -> ()
	 */
	void UW_BackpackInventory_C::RotateWidget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.RotateWidget");
		
		UW_BackpackInventory_C_RotateWidget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.RotateInputDetected
	 * 		Flags  -> ()
	 */
	void UW_BackpackInventory_C::RotateInputDetected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.RotateInputDetected");
		
		UW_BackpackInventory_C_RotateInputDetected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.PopulateBackpacks
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItem*>                               itemsToSkip                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UW_BackpackInventory_C::PopulateBackpacks(TArray<class UItem*> itemsToSkip)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.PopulateBackpacks");
		
		UW_BackpackInventory_C_PopulateBackpacks_Params params {};
		params.itemsToSkip = itemsToSkip;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.CloseBackpack_Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BackpackItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::CloseBackpack_Item(class UItem* BackpackItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.CloseBackpack_Item");
		
		UW_BackpackInventory_C_CloseBackpack_Item_Params params {};
		params.BackpackItem = BackpackItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_BackpackInventory.W_BackpackInventory_C.ExecuteUbergraph_W_BackpackInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_BackpackInventory_C::ExecuteUbergraph_W_BackpackInventory(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_BackpackInventory.W_BackpackInventory_C.ExecuteUbergraph_W_BackpackInventory");
		
		UW_BackpackInventory_C_ExecuteUbergraph_W_BackpackInventory_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_BackpackInventory_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_BackpackInventory_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_BackpackInventory.W_BackpackInventory_C");
		return ptr;
	}

}


