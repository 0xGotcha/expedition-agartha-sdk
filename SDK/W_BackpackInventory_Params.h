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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.HasBackpackOpen
	 */
	struct UW_BackpackInventory_C_HasBackpackOpen_Params
	{
	public:
		class UItem*                                               backpack;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOpen;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CZYR[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.CreateBackpack
	 */
	struct UW_BackpackInventory_C_CreateBackpack_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_BackpackInventory_C*                              backpackWidget;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.OriginalSlotForItemWidget
	 */
	struct UW_BackpackInventory_C_OriginalSlotForItemWidget_Params
	{
	public:
		class UW_Item_C*                                           ItemWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_ItemSlot_C*                                       ItemSlot;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.GetGrid
	 */
	struct UW_BackpackInventory_C_GetGrid_Params
	{
	public:
		EInventorySlotType                                         GridType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3335[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGridPanel*                                          Grid;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.OnMouseButtonDown
	 */
	struct UW_BackpackInventory_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.OnDragDetected
	 */
	struct UW_BackpackInventory_C_OnDragDetected_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       PointerEvent;                                            // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x00A8(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.Put Item Widget Into Grid
	 */
	struct UW_BackpackInventory_C_Put_Item_Widget_Into_Grid_Params
	{
	public:
		class UInventoryComponent*                                 Inventory_Component;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGridPanel*                                          Grid;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Item_Object;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force_Position;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_1JCT[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIntPoint                                           Forced_Position;                                         // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Compact;                                                 // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9I1U[0x3];                                   // 0x002D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.Construct
	 */
	struct UW_BackpackInventory_C_Construct_Params
	{	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.Operation Event
	 */
	struct UW_BackpackInventory_C_Operation_Event_Params
	{
	public:
		EInventoryItemMoveResult                                   Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.Update Inventory Event
	 */
	struct UW_BackpackInventory_C_Update_Inventory_Event_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.Contents Changed
	 */
	struct UW_BackpackInventory_C_Contents_Changed_Params
	{
	public:
		class UInventoryComponent*                                 UpdatedInventory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.PutItemWidgetIntoGrid
	 */
	struct UW_BackpackInventory_C_PutItemWidgetIntoGrid_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Item_Object;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force_Position;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KK98[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIntPoint                                           ForcedPosition;                                          // 0x001C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Compact;                                                 // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.Dragging
	 */
	struct UW_BackpackInventory_C_Dragging_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VL5B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_Item_C*                                           Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUIInventoryDragOperation_C*                         Drag_Operation;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.BndEvt__W_BackpackInventory_CloseBackpack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_BackpackInventory_C_BndEvt__W_BackpackInventory_CloseBackpack_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.Close
	 */
	struct UW_BackpackInventory_C_Close_Params
	{	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.OnDragCancelled
	 */
	struct UW_BackpackInventory_C_OnDragCancelled_Params
	{
	public:
		struct FPointerEvent                                       PointerEvent;                                            // 0x0000(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UDragDropOperation*                                  Operation;                                               // 0x0070(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.ClearItemGrid
	 */
	struct UW_BackpackInventory_C_ClearItemGrid_Params
	{	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.Tick
	 */
	struct UW_BackpackInventory_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.ServerFinishedRotationHandler
	 */
	struct UW_BackpackInventory_C_ServerFinishedRotationHandler_Params
	{	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.Populate
	 */
	struct UW_BackpackInventory_C_Populate_Params
	{	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.RepopulateFinished
	 */
	struct UW_BackpackInventory_C_RepopulateFinished_Params
	{	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.CloseBackpack
	 */
	struct UW_BackpackInventory_C_CloseBackpack_Params
	{
	public:
		class UW_BackpackInventory_C*                              backpack;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.RotateWidget
	 */
	struct UW_BackpackInventory_C_RotateWidget_Params
	{	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.RotateInputDetected
	 */
	struct UW_BackpackInventory_C_RotateInputDetected_Params
	{	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.PopulateBackpacks
	 */
	struct UW_BackpackInventory_C_PopulateBackpacks_Params
	{
	public:
		TArray<class UItem*>                                       itemsToSkip;                                             // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.CloseBackpack_Item
	 */
	struct UW_BackpackInventory_C_CloseBackpack_Item_Params
	{
	public:
		class UItem*                                               BackpackItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_BackpackInventory.W_BackpackInventory_C.ExecuteUbergraph_W_BackpackInventory
	 */
	struct UW_BackpackInventory_C_ExecuteUbergraph_W_BackpackInventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
