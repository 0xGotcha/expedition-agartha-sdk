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
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnChange_643EA0F74C7ED963AAADF5A6390AFA51
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMatchesComparison                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Sprint_C::OnChange_643EA0F74C7ED963AAADF5A6390AFA51(bool bMatchesComparison, float CurrentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnChange_643EA0F74C7ED963AAADF5A6390AFA51");
		
		UGA_Sprint_C_OnChange_643EA0F74C7ED963AAADF5A6390AFA51_Params params {};
		params.bMatchesComparison = bMatchesComparison;
		params.CurrentValue = CurrentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnRelease_713CE67340C7F62BFBE6C0871A53E2F2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeHeld                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Sprint_C::OnRelease_713CE67340C7F62BFBE6C0871A53E2F2(float TimeHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnRelease_713CE67340C7F62BFBE6C0871A53E2F2");
		
		UGA_Sprint_C_OnRelease_713CE67340C7F62BFBE6C0871A53E2F2_Params params {};
		params.TimeHeld = TimeHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.OnVelocityChange_C380735C469843B389062192615878C9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Turning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Sprint_C::OnVelocityChange_C380735C469843B389062192615878C9(const struct FVector& Velocity, bool Turning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.OnVelocityChange_C380735C469843B389062192615878C9");
		
		UGA_Sprint_C_OnVelocityChange_C380735C469843B389062192615878C9_Params params {};
		params.Velocity = Velocity;
		params.Turning = Turning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Sprint_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.K2_ActivateAbility");
		
		UGA_Sprint_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Sprint_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.K2_OnEndAbility");
		
		UGA_Sprint_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.On Start
	 * 		Flags  -> ()
	 */
	void UGA_Sprint_C::On_Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.On Start");
		
		UGA_Sprint_C_On_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Sprint_C::ExecuteUbergraph_GA_Sprint(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Sprint.GA_Sprint_C.ExecuteUbergraph_GA_Sprint");
		
		UGA_Sprint_C_ExecuteUbergraph_GA_Sprint_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Sprint_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Sprint_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Sprint.GA_Sprint_C");
		return ptr;
	}

}


