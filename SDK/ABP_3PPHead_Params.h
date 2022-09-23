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
	 * Function ABP_3PPHead.ABP_3PPHead_C.AnimGraph
	 */
	struct UABP_3PPHead_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_3PPHead.ABP_3PPHead_C.BlueprintInitializeAnimation
	 */
	struct UABP_3PPHead_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_3PPHead.ABP_3PPHead_C.BlueprintUpdateAnimation
	 */
	struct UABP_3PPHead_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_3PPHead.ABP_3PPHead_C.ExecuteUbergraph_ABP_3PPHead
	 */
	struct UABP_3PPHead_C_ExecuteUbergraph_ABP_3PPHead_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_UHU5[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
