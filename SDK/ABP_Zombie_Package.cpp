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
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimGraph
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPoseLink                                   AnimGraph                                                  (Parm, OutParm, NoDestructor)
	 */
	void UABP_Zombie_C::AnimGraph(struct FPoseLink* AnimGraph)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimGraph");
		
		UABP_Zombie_C_AnimGraph_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AnimGraph != nullptr)
			*AnimGraph = params.AnimGraph;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_423BBD0F4363AE00158AAFAC77E9CE33
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_423BBD0F4363AE00158AAFAC77E9CE33()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_423BBD0F4363AE00158AAFAC77E9CE33");
		
		UABP_Zombie_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_423BBD0F4363AE00158AAFAC77E9CE33_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_PowerIK_C997F8044A42891665C032BA37F792BA
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_PowerIK_C997F8044A42891665C032BA37F792BA()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_PowerIK_C997F8044A42891665C032BA37F792BA");
		
		UABP_Zombie_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_PowerIK_C997F8044A42891665C032BA37F792BA_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_81AB99504B5AFE0AF8E1369E77781466
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_81AB99504B5AFE0AF8E1369E77781466()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_81AB99504B5AFE0AF8E1369E77781466");
		
		UABP_Zombie_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_BlendListByBool_81AB99504B5AFE0AF8E1369E77781466_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_TransitionResult_75E503014F6847C95462D1BFEA1E3979
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_TransitionResult_75E503014F6847C95462D1BFEA1E3979()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_TransitionResult_75E503014F6847C95462D1BFEA1E3979");
		
		UABP_Zombie_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_Zombie_AnimGraphNode_TransitionResult_75E503014F6847C95462D1BFEA1E3979_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.BlueprintUpdateAnimation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaTimeX                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Zombie_C::BlueprintUpdateAnimation(float DeltaTimeX)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.BlueprintUpdateAnimation");
		
		UABP_Zombie_C_BlueprintUpdateAnimation_Params params {};
		params.DeltaTimeX = DeltaTimeX;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.BlueprintInitializeAnimation
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::BlueprintInitializeAnimation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.BlueprintInitializeAnimation");
		
		UABP_Zombie_C_BlueprintInitializeAnimation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_DeathScream
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_DeathScream()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_DeathScream");
		
		UABP_Zombie_C_AnimNotify_DeathScream_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_Light Exertion
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_Light_Exertion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_Light Exertion");
		
		UABP_Zombie_C_AnimNotify_Light_Exertion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_MediumExertion
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_MediumExertion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_MediumExertion");
		
		UABP_Zombie_C_AnimNotify_MediumExertion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_HeavyExertion
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_HeavyExertion()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_HeavyExertion");
		
		UABP_Zombie_C_AnimNotify_HeavyExertion_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_Step
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_Step()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_Step");
		
		UABP_Zombie_C_AnimNotify_Step_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_Exhausted
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_Exhausted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_Exhausted");
		
		UABP_Zombie_C_AnimNotify_Exhausted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorFootstep
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorFootstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorFootstep");
		
		UABP_Zombie_C_AnimNotify_ArmorFootstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorJump
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorJump");
		
		UABP_Zombie_C_AnimNotify_ArmorJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorLand
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorLand()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorLand");
		
		UABP_Zombie_C_AnimNotify_ArmorLand_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorSprintFootstep
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorSprintFootstep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorSprintFootstep");
		
		UABP_Zombie_C_AnimNotify_ArmorSprintFootstep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorDodge
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorDodge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorDodge");
		
		UABP_Zombie_C_AnimNotify_ArmorDodge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorKick
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorKick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorKick");
		
		UABP_Zombie_C_AnimNotify_ArmorKick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorLightAttack
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorLightAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorLightAttack");
		
		UABP_Zombie_C_AnimNotify_ArmorLightAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorHeavyCharge
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorHeavyCharge()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorHeavyCharge");
		
		UABP_Zombie_C_AnimNotify_ArmorHeavyCharge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorHeavyRelease
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorHeavyRelease()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorHeavyRelease");
		
		UABP_Zombie_C_AnimNotify_ArmorHeavyRelease_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorBlock
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorBlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorBlock");
		
		UABP_Zombie_C_AnimNotify_ArmorBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorHit
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorHit()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorHit");
		
		UABP_Zombie_C_AnimNotify_ArmorHit_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorCrouch
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorCrouch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorCrouch");
		
		UABP_Zombie_C_AnimNotify_ArmorCrouch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorFall
	 * 		Flags  -> ()
	 */
	void UABP_Zombie_C::AnimNotify_ArmorFall()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.AnimNotify_ArmorFall");
		
		UABP_Zombie_C_AnimNotify_ArmorFall_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ABP_Zombie.ABP_Zombie_C.ExecuteUbergraph_ABP_Zombie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UABP_Zombie_C::ExecuteUbergraph_ABP_Zombie(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABP_Zombie.ABP_Zombie_C.ExecuteUbergraph_ABP_Zombie");
		
		UABP_Zombie_C_ExecuteUbergraph_ABP_Zombie_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABP_Zombie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABP_Zombie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Zombie.ABP_Zombie_C");
		return ptr;
	}

}


