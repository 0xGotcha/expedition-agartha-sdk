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
	 * Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.ReceiveBeginPlay
	 */
	struct ABP_AgarthaPlayerController_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.HighlightNPC
	 */
	struct ABP_AgarthaPlayerController_C_HighlightNPC_Params
	{
	public:
		class UNPCComponent*                                       NPC;                                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.ReceivePossess
	 */
	struct ABP_AgarthaPlayerController_C_ReceivePossess_Params
	{
	public:
		class APawn*                                               PossessedPawn;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.ExecuteUbergraph_BP_AgarthaPlayerController
	 */
	struct ABP_AgarthaPlayerController_C_ExecuteUbergraph_BP_AgarthaPlayerController_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_2D9I[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
