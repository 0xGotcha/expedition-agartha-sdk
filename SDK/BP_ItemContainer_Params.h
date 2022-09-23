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
	 * Function BP_ItemContainer.BP_ItemContainer_C.Requires Hold To Interact
	 */
	struct ABP_ItemContainer_C_Requires_Hold_To_Interact_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.Hold Time Multiplier
	 */
	struct ABP_ItemContainer_C_Hold_Time_Multiplier_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.Action Verb
	 */
	struct ABP_ItemContainer_C_Action_Verb_Params
	{
	public:
		class FText                                                Result;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.UserConstructionScript
	 */
	struct ABP_ItemContainer_C_UserConstructionScript_Params
	{	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.Interact
	 */
	struct ABP_ItemContainer_C_Interact_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.ReceiveBeginPlay
	 */
	struct ABP_ItemContainer_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.BP_OnInventoryEmptied
	 */
	struct ABP_ItemContainer_C_BP_OnInventoryEmptied_Params
	{	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.Stop Custom Depth
	 */
	struct ABP_ItemContainer_C_Stop_Custom_Depth_Params
	{	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.Multicast Stop Custom Depth
	 */
	struct ABP_ItemContainer_C_Multicast_Stop_Custom_Depth_Params
	{	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.Contents Changed
	 */
	struct ABP_ItemContainer_C_Contents_Changed_Params
	{
	public:
		class UInventoryComponent*                                 UpdatedInventory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.Set Inventory Tick Interval
	 */
	struct ABP_ItemContainer_C_Set_Inventory_Tick_Interval_Params
	{
	public:
		float                                                      Tick_Interval;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ItemContainer.BP_ItemContainer_C.ExecuteUbergraph_BP_ItemContainer
	 */
	struct ABP_ItemContainer_C_ExecuteUbergraph_BP_ItemContainer_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
