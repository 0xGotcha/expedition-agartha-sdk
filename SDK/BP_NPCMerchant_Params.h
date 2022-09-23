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
	 * Function BP_NPCMerchant.BP_NPCMerchant_C.Hold Time Multiplier
	 */
	struct ABP_NPCMerchant_C_Hold_Time_Multiplier_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NPCMerchant.BP_NPCMerchant_C.Action Verb
	 */
	struct ABP_NPCMerchant_C_Action_Verb_Params
	{
	public:
		class FText                                                Result;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_NPCMerchant.BP_NPCMerchant_C.Requires Hold To Interact
	 */
	struct ABP_NPCMerchant_C_Requires_Hold_To_Interact_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_NPCMerchant.BP_NPCMerchant_C.ReceiveBeginPlay
	 */
	struct ABP_NPCMerchant_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_NPCMerchant.BP_NPCMerchant_C.Rebuild Finished
	 */
	struct ABP_NPCMerchant_C_Rebuild_Finished_Params
	{	};

	/**
	 * Function BP_NPCMerchant.BP_NPCMerchant_C.ExecuteUbergraph_BP_NPCMerchant
	 */
	struct ABP_NPCMerchant_C_ExecuteUbergraph_BP_NPCMerchant_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
