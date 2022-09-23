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
	 * Function BP_NPCChatter.BP_NPCChatter_C.ReceiveActorBeginOverlap
	 */
	struct ABP_NPCChatter_C_ReceiveActorBeginOverlap_Params
	{
	public:
		class AActor*                                              OtherActor;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_NPCChatter.BP_NPCChatter_C.Shut Up
	 */
	struct ABP_NPCChatter_C_Shut_Up_Params
	{	};

	/**
	 * Function BP_NPCChatter.BP_NPCChatter_C.ExecuteUbergraph_BP_NPCChatter
	 */
	struct ABP_NPCChatter_C_ExecuteUbergraph_BP_NPCChatter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
