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
	 * 		Name   -> Function GA_Interact.GA_Interact_C.OnRelease_C44D4B2846EA0404BA9CFBB2882BA19C
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeHeld                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Interact_C::OnRelease_C44D4B2846EA0404BA9CFBB2882BA19C(float TimeHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Interact.GA_Interact_C.OnRelease_C44D4B2846EA0404BA9CFBB2882BA19C");
		
		UGA_Interact_C_OnRelease_C44D4B2846EA0404BA9CFBB2882BA19C_Params params {};
		params.TimeHeld = TimeHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Interact.GA_Interact_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Interact_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Interact.GA_Interact_C.K2_ActivateAbility");
		
		UGA_Interact_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Interact.GA_Interact_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Interact_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Interact.GA_Interact_C.K2_OnEndAbility");
		
		UGA_Interact_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Interact.GA_Interact_C.Interactable Actors Changed
	 * 		Flags  -> ()
	 */
	void UGA_Interact_C::Interactable_Actors_Changed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Interact.GA_Interact_C.Interactable Actors Changed");
		
		UGA_Interact_C_Interactable_Actors_Changed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Interact.GA_Interact_C.Held Enough
	 * 		Flags  -> ()
	 */
	void UGA_Interact_C::Held_Enough()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Interact.GA_Interact_C.Held Enough");
		
		UGA_Interact_C_Held_Enough_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Interact.GA_Interact_C.Interact
	 * 		Flags  -> ()
	 */
	void UGA_Interact_C::Interact()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Interact.GA_Interact_C.Interact");
		
		UGA_Interact_C_Interact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Interact.GA_Interact_C.ExecuteUbergraph_GA_Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Interact_C::ExecuteUbergraph_GA_Interact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Interact.GA_Interact_C.ExecuteUbergraph_GA_Interact");
		
		UGA_Interact_C_ExecuteUbergraph_GA_Interact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Interact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Interact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Interact.GA_Interact_C");
		return ptr;
	}

}


