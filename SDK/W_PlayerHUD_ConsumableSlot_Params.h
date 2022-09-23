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
	 * Function W_PlayerHUD_ConsumableSlot.W_PlayerHUD_ConsumableSlot_C.PreConstruct
	 */
	struct UW_PlayerHUD_ConsumableSlot_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_PlayerHUD_ConsumableSlot.W_PlayerHUD_ConsumableSlot_C.Construct
	 */
	struct UW_PlayerHUD_ConsumableSlot_C_Construct_Params
	{	};

	/**
	 * Function W_PlayerHUD_ConsumableSlot.W_PlayerHUD_ConsumableSlot_C.Set Item
	 */
	struct UW_PlayerHUD_ConsumableSlot_C_Set_Item_Params
	{
	public:
		struct FItemTable                                          Item;                                                    // 0x0000(0x02A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_PlayerHUD_ConsumableSlot.W_PlayerHUD_ConsumableSlot_C.Update Binding Text
	 */
	struct UW_PlayerHUD_ConsumableSlot_C_Update_Binding_Text_Params
	{
	public:
		class FText                                                Text;                                                    // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_PlayerHUD_ConsumableSlot.W_PlayerHUD_ConsumableSlot_C.ExecuteUbergraph_W_PlayerHUD_ConsumableSlot
	 */
	struct UW_PlayerHUD_ConsumableSlot_C_ExecuteUbergraph_W_PlayerHUD_ConsumableSlot_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DCNE[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
