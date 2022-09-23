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
	 * Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.OnRep_Stopped
	 */
	struct ABP_Xbow_Bolt_C_OnRep_Stopped_Params
	{	};

	/**
	 * Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.ReceiveBeginPlay
	 */
	struct ABP_Xbow_Bolt_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.ReceiveTick
	 */
	struct ABP_Xbow_Bolt_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.Stop Audio
	 */
	struct ABP_Xbow_Bolt_C_Stop_Audio_Params
	{	};

	/**
	 * Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.Play Audio
	 */
	struct ABP_Xbow_Bolt_C_Play_Audio_Params
	{
	public:
		class USoundBase*                                          Sound;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.Set Bolt To Hit Location
	 */
	struct ABP_Xbow_Bolt_C_Set_Bolt_To_Hit_Location_Params
	{
	public:
		struct FVector                                             Hit_Location;                                            // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.ExecuteUbergraph_BP_Xbow_Bolt
	 */
	struct ABP_Xbow_Bolt_C_ExecuteUbergraph_BP_Xbow_Bolt_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
