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
	 * Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Construct
	 */
	struct UW_PlayerHUD_Weapons_C_Construct_Params
	{	};

	/**
	 * Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Update Slots
	 */
	struct UW_PlayerHUD_Weapons_C_Update_Slots_Params
	{	};

	/**
	 * Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Inventory Updated
	 */
	struct UW_PlayerHUD_Weapons_C_Inventory_Updated_Params
	{	};

	/**
	 * Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Update Inventory Event
	 */
	struct UW_PlayerHUD_Weapons_C_Update_Inventory_Event_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.ExecuteUbergraph_W_PlayerHUD_Weapons
	 */
	struct UW_PlayerHUD_Weapons_C_ExecuteUbergraph_W_PlayerHUD_Weapons_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IOY7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
