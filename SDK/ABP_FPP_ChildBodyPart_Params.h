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
	 * Function ABP_FPP_ChildBodyPart.ABP_FPP_ChildBodyPart_C.AnimGraph
	 */
	struct UABP_FPP_ChildBodyPart_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_FPP_ChildBodyPart.ABP_FPP_ChildBodyPart_C.BlueprintUpdateAnimation
	 */
	struct UABP_FPP_ChildBodyPart_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_ChildBodyPart.ABP_FPP_ChildBodyPart_C.BlueprintInitializeAnimation
	 */
	struct UABP_FPP_ChildBodyPart_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_FPP_ChildBodyPart.ABP_FPP_ChildBodyPart_C.ExecuteUbergraph_ABP_FPP_ChildBodyPart
	 */
	struct UABP_FPP_ChildBodyPart_C_ExecuteUbergraph_ABP_FPP_ChildBodyPart_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
