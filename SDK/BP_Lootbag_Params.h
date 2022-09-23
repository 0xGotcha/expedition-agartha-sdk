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
	 * Function BP_Lootbag.BP_Lootbag_C.Requires Hold To Interact
	 */
	struct ABP_Lootbag_C_Requires_Hold_To_Interact_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_Lootbag.BP_Lootbag_C.Hold Time Multiplier
	 */
	struct ABP_Lootbag_C_Hold_Time_Multiplier_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lootbag.BP_Lootbag_C.Action Verb
	 */
	struct ABP_Lootbag_C_Action_Verb_Params
	{
	public:
		class FText                                                Result;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_Lootbag.BP_Lootbag_C.Set Inventory Tick Interval
	 */
	struct ABP_Lootbag_C_Set_Inventory_Tick_Interval_Params
	{
	public:
		float                                                      Tick_Interval;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lootbag.BP_Lootbag_C.Interact
	 */
	struct ABP_Lootbag_C_Interact_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Lootbag.BP_Lootbag_C.ExecuteUbergraph_BP_Lootbag
	 */
	struct ABP_Lootbag_C_ExecuteUbergraph_BP_Lootbag_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0DM0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
