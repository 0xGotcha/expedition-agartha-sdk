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
	 * Function W_ItemTooltip.W_ItemTooltip_C.SetGoldValue
	 */
	struct UW_ItemTooltip_C_SetGoldValue_Params
	{
	public:
		bool                                                       IsShop;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_ItemTooltip.W_ItemTooltip_C.UpgradesUpdateStatInfo
	 */
	struct UW_ItemTooltip_C_UpgradesUpdateStatInfo_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemTooltip.W_ItemTooltip_C.SetUpgradeSlots
	 */
	struct UW_ItemTooltip_C_SetUpgradeSlots_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemTooltip.W_ItemTooltip_C.AddWeaponInformation
	 */
	struct UW_ItemTooltip_C_AddWeaponInformation_Params
	{
	public:
		bool                                                       bShowDPSStats;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6JZD[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemTooltip.W_ItemTooltip_C.AddArmorInformation
	 */
	struct UW_ItemTooltip_C_AddArmorInformation_Params
	{	};

	/**
	 * Function W_ItemTooltip.W_ItemTooltip_C.Construct
	 */
	struct UW_ItemTooltip_C_Construct_Params
	{	};

	/**
	 * Function W_ItemTooltip.W_ItemTooltip_C.ExecuteUbergraph_W_ItemTooltip
	 */
	struct UW_ItemTooltip_C_ExecuteUbergraph_W_ItemTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
