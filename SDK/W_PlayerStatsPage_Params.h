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
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddAsGameplayAttribute
	 */
	struct UW_PlayerStatsPage_C_AddAsGameplayAttribute_Params
	{
	public:
		struct FGameplayAttribute                                  Key;                                                     // 0x0000(0x0038)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.UpdateRealTimeStatValues
	 */
	struct UW_PlayerStatsPage_C_UpdateRealTimeStatValues_Params
	{	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddCheckedPlayerStat
	 */
	struct UW_PlayerStatsPage_C_AddCheckedPlayerStat_Params
	{
	public:
		EItemStatType                                              StatType;                                                // 0x0000(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_9S0D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              AltStatType;                                             // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		class FText                                                optionalReadableText;                                    // 0x0018(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              optionalStatFormatting;                                  // 0x0030(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddEquipmentStat
	 */
	struct UW_PlayerStatsPage_C_AddEquipmentStat_Params
	{
	public:
		EquipmentType                                              SlotID;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3MP9[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.MaxStat
	 */
	struct UW_PlayerStatsPage_C_MaxStat_Params
	{
	public:
		float                                                      currStat;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      MaxStat;                                                 // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      RegenStat;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemStatType                                              StatType;                                                // 0x000C(0x0001)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WWWJ[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                Value;                                                   // 0x0010(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddPlayerStat
	 */
	struct UW_PlayerStatsPage_C_AddPlayerStat_Params
	{
	public:
		float                                                      StatValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EItemStatType                                              _itemStat;                                               // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_ZUCW[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FText                                                optionalReadableText;                                    // 0x0008(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class FString                                              optionalStatFormatting;                                  // 0x0020(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.Construct
	 */
	struct UW_PlayerStatsPage_C_Construct_Params
	{	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.BndEvt__W_PlayerStatsPage_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 */
	struct UW_PlayerStatsPage_C_BndEvt__W_PlayerStatsPage_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.Tick
	 */
	struct UW_PlayerStatsPage_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.Destruct
	 */
	struct UW_PlayerStatsPage_C_Destruct_Params
	{	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.SetupCamera
	 */
	struct UW_PlayerStatsPage_C_SetupCamera_Params
	{	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.Close
	 */
	struct UW_PlayerStatsPage_C_Close_Params
	{	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.ExecuteUbergraph_W_PlayerStatsPage
	 */
	struct UW_PlayerStatsPage_C_ExecuteUbergraph_W_PlayerStatsPage_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlayerStatsPage.W_PlayerStatsPage_C.BeginDestroy__DelegateSignature
	 */
	struct UW_PlayerStatsPage_C_BeginDestroy__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
