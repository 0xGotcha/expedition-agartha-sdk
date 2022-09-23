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
	 * Function W_CraftingTable.W_CraftingTable_C.HasBackpackOpen
	 */
	struct UW_CraftingTable_C_HasBackpackOpen_Params
	{
	public:
		class UItem*                                               backpack;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOpen;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_W73B[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.CreateBackpack
	 */
	struct UW_CraftingTable_C_CreateBackpack_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_BackpackInventory_C*                              backpackWidget;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.GetGrid
	 */
	struct UW_CraftingTable_C_GetGrid_Params
	{
	public:
		EInventorySlotType                                         GridType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_827B[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGridPanel*                                          Grid;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.OriginalSlotForItemWidget
	 */
	struct UW_CraftingTable_C_OriginalSlotForItemWidget_Params
	{
	public:
		class UW_Item_C*                                           ItemWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_ItemSlot_C*                                       ItemSlot;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.AddNotesToArray
	 */
	struct UW_CraftingTable_C_AddNotesToArray_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DSRR[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.RemoveCraftingInput
	 */
	struct UW_CraftingTable_C_RemoveCraftingInput_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       wasRemoved;                                              // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5TCJ[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.AddCraftingInput
	 */
	struct UW_CraftingTable_C_AddCraftingInput_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.CreateOutputItemsNew
	 */
	struct UW_CraftingTable_C_CreateOutputItemsNew_Params
	{
	public:
		TArray<class UItem*>                                       Items;                                                   // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    GridSize;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ESBE[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGridPanel*                                          OutputGrid;                                              // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.CreateUpgradeItem
	 */
	struct UW_CraftingTable_C_CreateUpgradeItem_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.GetRootContainer
	 */
	struct UW_CraftingTable_C_GetRootContainer_Params
	{
	public:
		TArray<class UItem*>                                       Container;                                               // 0x0000(0x0010)  (Parm, OutParm)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Show Message
	 */
	struct UW_CraftingTable_C_Show_Message_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Can Equip
	 */
	struct UW_CraftingTable_C_Can_Equip_Params
	{
	public:
		struct FItemTable                                          Item_Data;                                               // 0x0000(0x02A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Result;                                                  // 0x02A0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Get Item Widget For Item In Grid
	 */
	struct UW_CraftingTable_C_Get_Item_Widget_For_Item_In_Grid_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGridPanel*                                          Grid;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_Item_C*                                           Item_Widget;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Row Size For Grid
	 */
	struct UW_CraftingTable_C_Row_Size_For_Grid_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Size;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.OnLoaded_FD8D374941AC2DE5BB9BC4B6C794C452
	 */
	struct UW_CraftingTable_C_OnLoaded_FD8D374941AC2DE5BB9BC4B6C794C452_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Construct
	 */
	struct UW_CraftingTable_C_Construct_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Close Crafting Table
	 */
	struct UW_CraftingTable_C_Close_Crafting_Table_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Operation Event
	 */
	struct UW_CraftingTable_C_Operation_Event_Params
	{
	public:
		EInventoryItemMoveResult                                   Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Update Inventory Event
	 */
	struct UW_CraftingTable_C_Update_Inventory_Event_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Populate
	 */
	struct UW_CraftingTable_C_Populate_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Contents Changed
	 */
	struct UW_CraftingTable_C_Contents_Changed_Params
	{
	public:
		class UInventoryComponent*                                 UpdatedInventory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Outside Source Inventory Updated
	 */
	struct UW_CraftingTable_C_Outside_Source_Inventory_Updated_Params
	{
	public:
		class UInventoryComponent*                                 UpdatedInventory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Clear Inventory
	 */
	struct UW_CraftingTable_C_Clear_Inventory_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Clear Output Grid
	 */
	struct UW_CraftingTable_C_Clear_Output_Grid_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Clear Input Grid
	 */
	struct UW_CraftingTable_C_Clear_Input_Grid_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Dragging
	 */
	struct UW_CraftingTable_C_Dragging_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_FUS7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_Item_C*                                           Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUIInventoryDragOperation_C*                         Drag_Operation;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.PutItemWidgetIntoGrid
	 */
	struct UW_CraftingTable_C_PutItemWidgetIntoGrid_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Item_Object;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force_Position;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AF56[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIntPoint                                           ForcedPosition;                                          // 0x001C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Compact;                                                 // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.CraftItem
	 */
	struct UW_CraftingTable_C_CraftItem_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.BndEvt__W_CraftingTable_CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_CraftingTable_C_BndEvt__W_CraftingTable_CraftButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.CreateFakeItemInGrid
	 */
	struct UW_CraftingTable_C_CreateFakeItemInGrid_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       ForcePosition;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_IV8R[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIntPoint                                           ForcedPosition;                                          // 0x0014(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Compact;                                                 // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.BndEvt__W_CraftingTable_OutputsSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UW_CraftingTable_C_BndEvt__W_CraftingTable_OutputsSlider_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.RemoveFakeItemFromGrid
	 */
	struct UW_CraftingTable_C_RemoveFakeItemFromGrid_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UItem*                                               Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.RecipeCraftedEvent
	 */
	struct UW_CraftingTable_C_RecipeCraftedEvent_Params
	{
	public:
		bool                                                       bWasSuccessful;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		ECraftResult                                               Result;                                                  // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.ServerFinishedRotationHandler
	 */
	struct UW_CraftingTable_C_ServerFinishedRotationHandler_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.OnStationRankRetrievedHandler
	 */
	struct UW_CraftingTable_C_OnStationRankRetrievedHandler_Params
	{
	public:
		unsigned char                                              ContainerWidth;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              ContainerHeight;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              Level;                                                   // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.Destruct
	 */
	struct UW_CraftingTable_C_Destruct_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.TryShowStationUpgradeRequirements
	 */
	struct UW_CraftingTable_C_TryShowStationUpgradeRequirements_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.ClearUpgradeDisplay
	 */
	struct UW_CraftingTable_C_ClearUpgradeDisplay_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.CloseBackpack
	 */
	struct UW_CraftingTable_C_CloseBackpack_Params
	{
	public:
		class UW_BackpackInventory_C*                              backpack;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.InventorySetup
	 */
	struct UW_CraftingTable_C_InventorySetup_Params
	{
	public:
		class UInventoryComponent*                                 InventoryComponent;                                      // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.UnbindInventoryEvents
	 */
	struct UW_CraftingTable_C_UnbindInventoryEvents_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.BndEvt__W_CraftingTable_SwapInventoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_CraftingTable_C_BndEvt__W_CraftingTable_SwapInventoryButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.RepopulateBackpacks
	 */
	struct UW_CraftingTable_C_RepopulateBackpacks_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.TryShowPlayerNotes
	 */
	struct UW_CraftingTable_C_TryShowPlayerNotes_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.TryGetAllPlayerNotes
	 */
	struct UW_CraftingTable_C_TryGetAllPlayerNotes_Params
	{	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.CloseBackpack_Item
	 */
	struct UW_CraftingTable_C_CloseBackpack_Item_Params
	{
	public:
		class UItem*                                               BackpackItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_CraftingTable.W_CraftingTable_C.ExecuteUbergraph_W_CraftingTable
	 */
	struct UW_CraftingTable_C_ExecuteUbergraph_W_CraftingTable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
