/**
 * Name: Agartha
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gada.ABP_Gada_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Gada_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gada.ABP_Gada_C.AnimGraph");
		
		UABP_Gada_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gada.ABP_Gada_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_BlendSpacePlayer_03ACE6644C69CDB5594DC888F754B92A
	 * 		Flags  -> ()
	 */
	void UABP_Gada_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_BlendSpacePlayer_03ACE6644C69CDB5594DC888F754B92A()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gada.ABP_Gada_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_BlendSpacePlayer_03ACE6644C69CDB5594DC888F754B92A");
		
		UABP_Gada_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_BlendSpacePlayer_03ACE6644C69CDB5594DC888F754B92A_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gada.ABP_Gada_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_PowerIK_D81D9C2241F0A10F918F9BA06E882065
	 * 		Flags  -> ()
	 */
	void UABP_Gada_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_PowerIK_D81D9C2241F0A10F918F9BA06E882065()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gada.ABP_Gada_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_PowerIK_D81D9C2241F0A10F918F9BA06E882065");
		
		UABP_Gada_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_PowerIK_D81D9C2241F0A10F918F9BA06E882065_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gada.ABP_Gada_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_PowerIK_Ground_87420E2A4F9D3FD1331B05B45B0AD297
	 * 		Flags  -> ()
	 */
	void UABP_Gada_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_PowerIK_Ground_87420E2A4F9D3FD1331B05B45B0AD297()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gada.ABP_Gada_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_PowerIK_Ground_87420E2A4F9D3FD1331B05B45B0AD297");
		
		UABP_Gada_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Gada_AnimGraphNode_PowerIK_Ground_87420E2A4F9D3FD1331B05B45B0AD297_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gada.ABP_Gada_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Gada_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gada.ABP_Gada_C.BlueprintUpdateAnimation");
		
		UABP_Gada_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gada.ABP_Gada_C.AnimNotify_StartTracking
	 * 		Flags  -> ()
	 */
	void UABP_Gada_C::AnimNotify_StartTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gada.ABP_Gada_C.AnimNotify_StartTracking");
		
		UABP_Gada_C_AnimNotify_StartTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gada.ABP_Gada_C.AnimNotify_StopTracking
	 * 		Flags  -> ()
	 */
	void UABP_Gada_C::AnimNotify_StopTracking()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gada.ABP_Gada_C.AnimNotify_StopTracking");
		
		UABP_Gada_C_AnimNotify_StopTracking_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Gada.ABP_Gada_C.ExecuteUbergraph_ABP_Gada
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Gada_C::ExecuteUbergraph_ABP_Gada(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Gada.ABP_Gada_C.ExecuteUbergraph_ABP_Gada");
		
		UABP_Gada_C_ExecuteUbergraph_ABP_Gada_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Gada_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Gada_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Gada.ABP_Gada_C");
		return ptr;
	}

}


