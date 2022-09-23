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
	 * 		Name   -> Function ABP_Rabbit.ABP_Rabbit_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Rabbit_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rabbit.ABP_Rabbit_C.AnimGraph");
		
		UABP_Rabbit_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Rabbit.ABP_Rabbit_C.Movement
	 * 		Flags  -> ()
	 */
	void UABP_Rabbit_C::Movement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rabbit.ABP_Rabbit_C.Movement");
		
		UABP_Rabbit_C_Movement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Rabbit.ABP_Rabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_BlendSpacePlayer_C8FB3EA74A26787A56BA4689CA126F66
	 * 		Flags  -> ()
	 */
	void UABP_Rabbit_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_BlendSpacePlayer_C8FB3EA74A26787A56BA4689CA126F66()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rabbit.ABP_Rabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_BlendSpacePlayer_C8FB3EA74A26787A56BA4689CA126F66");
		
		UABP_Rabbit_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_BlendSpacePlayer_C8FB3EA74A26787A56BA4689CA126F66_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Rabbit.ABP_Rabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_B1483C3B41C15B4508D2ADA628A6D780
	 * 		Flags  -> ()
	 */
	void UABP_Rabbit_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_B1483C3B41C15B4508D2ADA628A6D780()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rabbit.ABP_Rabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_B1483C3B41C15B4508D2ADA628A6D780");
		
		UABP_Rabbit_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_B1483C3B41C15B4508D2ADA628A6D780_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Rabbit.ABP_Rabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_8D700E66408AF20FFC20168B51535E7F
	 * 		Flags  -> ()
	 */
	void UABP_Rabbit_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_8D700E66408AF20FFC20168B51535E7F()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rabbit.ABP_Rabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_8D700E66408AF20FFC20168B51535E7F");
		
		UABP_Rabbit_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_8D700E66408AF20FFC20168B51535E7F_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Rabbit.ABP_Rabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_F8DA363B4B198E84A67C7B86F7031259
	 * 		Flags  -> ()
	 */
	void UABP_Rabbit_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_F8DA363B4B198E84A67C7B86F7031259()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rabbit.ABP_Rabbit_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_F8DA363B4B198E84A67C7B86F7031259");
		
		UABP_Rabbit_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Rabbit_AnimGraphNode_TransitionResult_F8DA363B4B198E84A67C7B86F7031259_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Rabbit.ABP_Rabbit_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Rabbit_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rabbit.ABP_Rabbit_C.BlueprintUpdateAnimation");
		
		UABP_Rabbit_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Rabbit.ABP_Rabbit_C.AnimNotify_Step
	 * 		Flags  -> ()
	 */
	void UABP_Rabbit_C::AnimNotify_Step()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rabbit.ABP_Rabbit_C.AnimNotify_Step");
		
		UABP_Rabbit_C_AnimNotify_Step_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Rabbit.ABP_Rabbit_C.ExecuteUbergraph_ABP_Rabbit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Rabbit_C::ExecuteUbergraph_ABP_Rabbit(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Rabbit.ABP_Rabbit_C.ExecuteUbergraph_ABP_Rabbit");
		
		UABP_Rabbit_C_ExecuteUbergraph_ABP_Rabbit_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Rabbit_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Rabbit_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Rabbit.ABP_Rabbit_C");
		return ptr;
	}

}


