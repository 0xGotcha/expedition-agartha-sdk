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
	 * Function UI_Inventory.UI_Inventory_C.HasBackpackOpen
	 */
	struct UUI_Inventory_C_HasBackpackOpen_Params
	{
	public:
		class UItem*                                               backpack;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       IsOpen;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_R4W3[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.CreateBackpack
	 */
	struct UUI_Inventory_C_CreateBackpack_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_BackpackInventory_C*                              backpackWidget;                                          // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.GetGrid
	 */
	struct UUI_Inventory_C_GetGrid_Params
	{
	public:
		EInventorySlotType                                         GridType;                                                // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0404[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UGridPanel*                                          Grid;                                                    // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.OriginalSlotForItemWidget
	 */
	struct UUI_Inventory_C_OriginalSlotForItemWidget_Params
	{
	public:
		class UW_Item_C*                                           ItemWidget;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_ItemSlot_C*                                       ItemSlot;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.RemoveSortTooltip
	 */
	struct UUI_Inventory_C_RemoveSortTooltip_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.DisplaySortTooltip
	 */
	struct UUI_Inventory_C_DisplaySortTooltip_Params
	{
	public:
		class FText                                                DisplayText;                                             // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.GenericSortFunction
	 */
	struct UUI_Inventory_C_GenericSortFunction_Params
	{
	public:
		ESortStyle                                                 Sort;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Show Message
	 */
	struct UUI_Inventory_C_Show_Message_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FLinearColor                                        Color;                                                   // 0x0018(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Can Equip
	 */
	struct UUI_Inventory_C_Can_Equip_Params
	{
	public:
		struct FItemTable                                          Item_Data;                                               // 0x0000(0x02A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Result;                                                  // 0x02A0(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Get Item Widget For Item In Grid
	 */
	struct UUI_Inventory_C_Get_Item_Widget_For_Item_In_Grid_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGridPanel*                                          Grid;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_Item_C*                                           Item_Widget;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Try Equip Unequip
	 */
	struct UUI_Inventory_C_Try_Equip_Unequip_Params
	{
	public:
		class UW_Item_C*                                           Item_Widget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Ragdoll Slot For Equipment Type
	 */
	struct UUI_Inventory_C_Ragdoll_Slot_For_Equipment_Type_Params
	{
	public:
		EquipmentType                                              Type;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Dead_Body;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PQ54[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_ItemSlot_C*                                       Item_Slot;                                               // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Row Size For Grid
	 */
	struct UUI_Inventory_C_Row_Size_For_Grid_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Size;                                                    // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Put Item Widget Into Equpment Slot
	 */
	struct UUI_Inventory_C_Put_Item_Widget_Into_Equpment_Slot_Params
	{
	public:
		class UW_Item_C*                                           Item_Widget;                                             // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UW_ItemSlot_C*                                       Slot;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGridPanel*                                          Grid;                                                    // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Put Item Widget Into Grid
	 */
	struct UUI_Inventory_C_Put_Item_Widget_Into_Grid_Params
	{
	public:
		class UInventoryComponent*                                 Inventory_Component;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UGridPanel*                                          Grid;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Item_Object;                                             // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force_Position;                                          // 0x0020(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DX1M[0x3];                                   // 0x0021(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIntPoint                                           Forced_Position;                                         // 0x0024(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Compact;                                                 // 0x002C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.OnLoaded_C8A47C864FDBBD737D8D6BBF31D5A7BF
	 */
	struct UUI_Inventory_C_OnLoaded_C8A47C864FDBBD737D8D6BBF31D5A7BF_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.PreConstruct
	 */
	struct UUI_Inventory_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Construct
	 */
	struct UUI_Inventory_C_Construct_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Close Inventory
	 */
	struct UUI_Inventory_C_Close_Inventory_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Operation Event
	 */
	struct UUI_Inventory_C_Operation_Event_Params
	{
	public:
		EInventoryItemMoveResult                                   Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Update Main Inventory Event
	 */
	struct UUI_Inventory_C_Update_Main_Inventory_Event_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Populate
	 */
	struct UUI_Inventory_C_Populate_Params
	{
	public:
		bool                                                       Main_Inventory;                                          // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Outside_Source;                                          // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Main Contents Changed
	 */
	struct UUI_Inventory_C_Main_Contents_Changed_Params
	{
	public:
		class UInventoryComponent*                                 UpdatedInventory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Clear Inventory
	 */
	struct UUI_Inventory_C_Clear_Inventory_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Clear Belt
	 */
	struct UUI_Inventory_C_Clear_Belt_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Clear Ragdoll
	 */
	struct UUI_Inventory_C_Clear_Ragdoll_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Clear Lootbox
	 */
	struct UUI_Inventory_C_Clear_Lootbox_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Dragging
	 */
	struct UUI_Inventory_C_Dragging_Params
	{
	public:
		bool                                                       On;                                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_5XAL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UW_Item_C*                                           Item;                                                    // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UUIInventoryDragOperation_C*                         Drag_Operation;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.PutItemWidgetIntoGrid
	 */
	struct UUI_Inventory_C_PutItemWidgetIntoGrid_Params
	{
	public:
		class UGridPanel*                                          Grid;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UWidget*                                             Widget;                                                  // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UObject*                                             Item_Object;                                             // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Force_Position;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_PS94[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FIntPoint                                           ForcedPosition;                                          // 0x001C(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Compact;                                                 // 0x0024(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Clear Dead Ragdoll
	 */
	struct UUI_Inventory_C_Clear_Dead_Ragdoll_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Destruct
	 */
	struct UUI_Inventory_C_Destruct_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_StatsButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.RemoveStats
	 */
	struct UUI_Inventory_C_RemoveStats_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Update Outside Inventory Event
	 */
	struct UUI_Inventory_C_Update_Outside_Inventory_Event_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Outside Contents Changed
	 */
	struct UUI_Inventory_C_Outside_Contents_Changed_Params
	{
	public:
		class UInventoryComponent*                                 UpdatedInventory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Outside Operation Event
	 */
	struct UUI_Inventory_C_Outside_Operation_Event_Params
	{
	public:
		EInventoryItemMoveResult                                   Result;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStore_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortStore_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.Repopulate Finished
	 */
	struct UUI_Inventory_C_Repopulate_Finished_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.CloseBackpack
	 */
	struct UUI_Inventory_C_CloseBackpack_Params
	{
	public:
		class UW_BackpackInventory_C*                              backpack;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.RotateWidget
	 */
	struct UUI_Inventory_C_RotateWidget_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SearchBar_K2Node_ComponentBoundEvent_9_OnEditableTextChangedEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SearchBar_K2Node_ComponentBoundEvent_9_OnEditableTextChangedEvent__DelegateSignature_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.OnInventoryDeleted
	 */
	struct UUI_Inventory_C_OnInventoryDeleted_Params
	{
	public:
		bool                                                       bClosesUserInterface;                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.InventoryPressed
	 */
	struct UUI_Inventory_C_InventoryPressed_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_13_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_14_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_15_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_17_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortDurability_K2Node_ComponentBoundEvent_18_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortEquipmentType_K2Node_ComponentBoundEvent_19_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortPhysicalSize_K2Node_ComponentBoundEvent_20_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortPrice_K2Node_ComponentBoundEvent_21_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortQuest_K2Node_ComponentBoundEvent_22_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortStackSize_K2Node_ComponentBoundEvent_23_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortTier_K2Node_ComponentBoundEvent_24_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature
	 */
	struct UUI_Inventory_C_BndEvt__UI_Inventory_SortUpgrades_K2Node_ComponentBoundEvent_25_OnButtonHoverEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.CloseBackpack_Item
	 */
	struct UUI_Inventory_C_CloseBackpack_Item_Params
	{
	public:
		class UItem*                                               BackpackItem;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Inventory.UI_Inventory_C.ExecuteUbergraph_UI_Inventory
	 */
	struct UUI_Inventory_C_ExecuteUbergraph_UI_Inventory_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
