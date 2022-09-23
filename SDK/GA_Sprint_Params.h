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
	 * Function GA_Sprint.GA_Sprint_C.OnChange_643EA0F74C7ED963AAADF5A6390AFA51
	 */
	struct UGA_Sprint_C_OnChange_643EA0F74C7ED963AAADF5A6390AFA51_Params
	{
	public:
		bool                                                       bMatchesComparison;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_S0DF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      CurrentValue;                                            // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnRelease_713CE67340C7F62BFBE6C0871A53E2F2
	 */
	struct UGA_Sprint_C_OnRelease_713CE67340C7F62BFBE6C0871A53E2F2_Params
	{
	public:
		float                                                      TimeHeld;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.OnVelocityChange_C380735C469843B389062192615878C9
	 */
	struct UGA_Sprint_C_OnVelocityChange_C380735C469843B389062192615878C9_Params
	{
	public:
		struct FVector                                             Velocity;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Turning;                                                 // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility
	 */
	struct UGA_Sprint_C_K2_ActivateAbility_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility
	 */
	struct UGA_Sprint_C_K2_OnEndAbility_Params
	{
	public:
		bool                                                       bWasCancelled;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.On Start
	 */
	struct UGA_Sprint_C_On_Start_Params
	{	};

	/**
	 * Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint
	 */
	struct UGA_Sprint_C_ExecuteUbergraph_GA_Sprint_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_J267[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
