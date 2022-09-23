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
	 * 		Name   -> Function GA_Aim.GA_Aim_C.OnChange_5962F6024AD6A058CFC643AA915B410A
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMatchesComparison                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              CurrentValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Aim_C::OnChange_5962F6024AD6A058CFC643AA915B410A(bool bMatchesComparison, float CurrentValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Aim.GA_Aim_C.OnChange_5962F6024AD6A058CFC643AA915B410A");
		
		UGA_Aim_C_OnChange_5962F6024AD6A058CFC643AA915B410A_Params params {};
		params.bMatchesComparison = bMatchesComparison;
		params.CurrentValue = CurrentValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Aim.GA_Aim_C.OnRelease_461AD403452889AB167E4A92E4CACED0
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              TimeHeld                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Aim_C::OnRelease_461AD403452889AB167E4A92E4CACED0(float TimeHeld)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Aim.GA_Aim_C.OnRelease_461AD403452889AB167E4A92E4CACED0");
		
		UGA_Aim_C_OnRelease_461AD403452889AB167E4A92E4CACED0_Params params {};
		params.TimeHeld = TimeHeld;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Aim.GA_Aim_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Aim_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Aim.GA_Aim_C.K2_ActivateAbility");
		
		UGA_Aim_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Aim.GA_Aim_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Aim_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Aim.GA_Aim_C.K2_OnEndAbility");
		
		UGA_Aim_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Aim.GA_Aim_C.ExecuteUbergraph_GA_Aim
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Aim_C::ExecuteUbergraph_GA_Aim(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Aim.GA_Aim_C.ExecuteUbergraph_GA_Aim");
		
		UGA_Aim_C_ExecuteUbergraph_GA_Aim_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Aim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Aim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Aim.GA_Aim_C");
		return ptr;
	}

}


