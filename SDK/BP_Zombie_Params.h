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
	 * Function BP_Zombie.BP_Zombie_C.Effect To Apply On Event
	 */
	struct ABP_Zombie_C_Effect_To_Apply_On_Event_Params
	{
	public:
		struct FGameplayTag                                        Event_Tag;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Effect;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Zombie.BP_Zombie_C.Randomize Appearance
	 */
	struct ABP_Zombie_C_Randomize_Appearance_Params
	{	};

	/**
	 * Function BP_Zombie.BP_Zombie_C.ReceiveBeginPlay
	 */
	struct ABP_Zombie_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Zombie.BP_Zombie_C.ExecuteUbergraph_BP_Zombie
	 */
	struct ABP_Zombie_C_ExecuteUbergraph_BP_Zombie_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
