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
	 * 		Name   -> Function GA_Kick.GA_Kick_C.OnCancelled_564373A642421E4DB74C56977AA062B2
	 * 		Flags  -> ()
	 */
	void UGA_Kick_C::OnCancelled_564373A642421E4DB74C56977AA062B2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Kick.GA_Kick_C.OnCancelled_564373A642421E4DB74C56977AA062B2");
		
		UGA_Kick_C_OnCancelled_564373A642421E4DB74C56977AA062B2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Kick.GA_Kick_C.OnInterrupted_564373A642421E4DB74C56977AA062B2
	 * 		Flags  -> ()
	 */
	void UGA_Kick_C::OnInterrupted_564373A642421E4DB74C56977AA062B2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Kick.GA_Kick_C.OnInterrupted_564373A642421E4DB74C56977AA062B2");
		
		UGA_Kick_C_OnInterrupted_564373A642421E4DB74C56977AA062B2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Kick.GA_Kick_C.OnBlendOut_564373A642421E4DB74C56977AA062B2
	 * 		Flags  -> ()
	 */
	void UGA_Kick_C::OnBlendOut_564373A642421E4DB74C56977AA062B2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Kick.GA_Kick_C.OnBlendOut_564373A642421E4DB74C56977AA062B2");
		
		UGA_Kick_C_OnBlendOut_564373A642421E4DB74C56977AA062B2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Kick.GA_Kick_C.OnCompleted_564373A642421E4DB74C56977AA062B2
	 * 		Flags  -> ()
	 */
	void UGA_Kick_C::OnCompleted_564373A642421E4DB74C56977AA062B2()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Kick.GA_Kick_C.OnCompleted_564373A642421E4DB74C56977AA062B2");
		
		UGA_Kick_C_OnCompleted_564373A642421E4DB74C56977AA062B2_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Kick.GA_Kick_C.K2_ActivateAbility
	 * 		Flags  -> ()
	 */
	void UGA_Kick_C::K2_ActivateAbility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Kick.GA_Kick_C.K2_ActivateAbility");
		
		UGA_Kick_C_K2_ActivateAbility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Kick.GA_Kick_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Kick_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Kick.GA_Kick_C.K2_OnEndAbility");
		
		UGA_Kick_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Kick.GA_Kick_C.ExecuteUbergraph_GA_Kick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Kick_C::ExecuteUbergraph_GA_Kick(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Kick.GA_Kick_C.ExecuteUbergraph_GA_Kick");
		
		UGA_Kick_C_ExecuteUbergraph_GA_Kick_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Kick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Kick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Kick.GA_Kick_C");
		return ptr;
	}

}


