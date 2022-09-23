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
	 * Function BP_CraftingTable.BP_CraftingTable_C.Requires Hold To Interact
	 */
	struct ABP_CraftingTable_C_Requires_Hold_To_Interact_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_CraftingTable.BP_CraftingTable_C.Hold Time Multiplier
	 */
	struct ABP_CraftingTable_C_Hold_Time_Multiplier_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CraftingTable.BP_CraftingTable_C.Action Verb
	 */
	struct ABP_CraftingTable_C_Action_Verb_Params
	{
	public:
		class FText                                                Result;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_CraftingTable.BP_CraftingTable_C.Set Inventory Tick Interval
	 */
	struct ABP_CraftingTable_C_Set_Inventory_Tick_Interval_Params
	{
	public:
		float                                                      Tick_Interval;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CraftingTable.BP_CraftingTable_C.Interact
	 */
	struct ABP_CraftingTable_C_Interact_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_CraftingTable.BP_CraftingTable_C.ReceiveBeginPlay
	 */
	struct ABP_CraftingTable_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_CraftingTable.BP_CraftingTable_C.ExecuteUbergraph_BP_CraftingTable
	 */
	struct ABP_CraftingTable_C_ExecuteUbergraph_BP_CraftingTable_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
