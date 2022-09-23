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
	 * Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestGoalsDescription
	 */
	struct UW_ItemQuestTooltip_C_SetQuestGoalsDescription_Params
	{
	public:
		bool                                                       NotRandom;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_P30D[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FQuestTable                                         QuestRow;                                                // 0x0008(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UProjectAgarthaGameInstance*                         GameInstance;                                            // 0x00D8(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       QuestFInished;                                           // 0x00E0(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_Q82U[0x7];                                   // 0x00E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestConditionItemStats
	 */
	struct UW_ItemQuestTooltip_C_SetQuestConditionItemStats_Params
	{
	public:
		class FString                                              ConditionString;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		struct FQuestCondition                                     QuestCondition;                                          // 0x0010(0x0058)  (BlueprintVisible, BlueprintReadOnly, Parm)
		class UProjectAgarthaGameInstance*                         GameInstance;                                            // 0x0068(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FString                                              ConditionStringOut;                                      // 0x0070(0x0010)  (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.UpdateQuestOngoingConditions
	 */
	struct UW_ItemQuestTooltip_C_UpdateQuestOngoingConditions_Params
	{	};

	/**
	 * Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestReward
	 */
	struct UW_ItemQuestTooltip_C_SetQuestReward_Params
	{
	public:
		class UDataTable*                                          RewardInventory;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UCharacterNPCsComponent*                             CharNPCComponent;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestOngoingConditionsRows
	 */
	struct UW_ItemQuestTooltip_C_SetQuestOngoingConditionsRows_Params
	{
	public:
		TArray<struct FQuestCondition>                             QuestConditions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterNPCsComponent*                             CharNPCComponent;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FProjectAgartha_FNPCQuestProgress                   QuestProgress;                                           // 0x0018(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestConditionsRows
	 */
	struct UW_ItemQuestTooltip_C_SetQuestConditionsRows_Params
	{
	public:
		TArray<struct FQuestCondition>                             QuestConditions;                                         // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		class UCharacterNPCsComponent*                             CharNPCComponent;                                        // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       HideConditions;                                          // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       QuestFInished;                                           // 0x0019(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_DW3L[0x6];                                   // 0x001A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.Construct
	 */
	struct UW_ItemQuestTooltip_C_Construct_Params
	{	};

	/**
	 * Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.ExecuteUbergraph_W_ItemQuestTooltip
	 */
	struct UW_ItemQuestTooltip_C_ExecuteUbergraph_W_ItemQuestTooltip_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RTML[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
