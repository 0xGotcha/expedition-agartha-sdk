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
	 * Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Construct
	 */
	struct UW_PlayerHUD_Consumables_C_Construct_Params
	{	};

	/**
	 * Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Update Slots
	 */
	struct UW_PlayerHUD_Consumables_C_Update_Slots_Params
	{	};

	/**
	 * Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Consumables Updated
	 */
	struct UW_PlayerHUD_Consumables_C_Consumables_Updated_Params
	{
	public:
		class UInventoryComponent*                                 UpdatedInventory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Invetory Updated
	 */
	struct UW_PlayerHUD_Consumables_C_Invetory_Updated_Params
	{	};

	/**
	 * Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.ExecuteUbergraph_W_PlayerHUD_Consumables
	 */
	struct UW_PlayerHUD_Consumables_C_ExecuteUbergraph_W_PlayerHUD_Consumables_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
