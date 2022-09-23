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
	 * 		Name   -> Function GA_AbstractAttack.GA_AbstractAttack_C.EventReceived_DFDFA43A495D79248276C4A2786DB36D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_AbstractAttack_C::EventReceived_DFDFA43A495D79248276C4A2786DB36D(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_AbstractAttack.GA_AbstractAttack_C.EventReceived_DFDFA43A495D79248276C4A2786DB36D");
		
		UGA_AbstractAttack_C_EventReceived_DFDFA43A495D79248276C4A2786DB36D_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_AbstractAttack.GA_AbstractAttack_C.EventReceived_A2CCDA9542EFD827F48F46937080F818
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          Payload                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UGA_AbstractAttack_C::EventReceived_A2CCDA9542EFD827F48F46937080F818(const struct FGameplayEventData& Payload)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_AbstractAttack.GA_AbstractAttack_C.EventReceived_A2CCDA9542EFD827F48F46937080F818");
		
		UGA_AbstractAttack_C_EventReceived_A2CCDA9542EFD827F48F46937080F818_Params params {};
		params.Payload = Payload;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_AbstractAttack.GA_AbstractAttack_C.Cleanup Attack Sweep Window Tasks
	 * 		Flags  -> ()
	 */
	void UGA_AbstractAttack_C::Cleanup_Attack_Sweep_Window_Tasks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_AbstractAttack.GA_AbstractAttack_C.Cleanup Attack Sweep Window Tasks");
		
		UGA_AbstractAttack_C_Cleanup_Attack_Sweep_Window_Tasks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_AbstractAttack.GA_AbstractAttack_C.Make Wait Attack Sweep Window
	 * 		Flags  -> ()
	 */
	void UGA_AbstractAttack_C::Make_Wait_Attack_Sweep_Window()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_AbstractAttack.GA_AbstractAttack_C.Make Wait Attack Sweep Window");
		
		UGA_AbstractAttack_C_Make_Wait_Attack_Sweep_Window_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_AbstractAttack.GA_AbstractAttack_C.ExecuteUbergraph_GA_AbstractAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_AbstractAttack_C::ExecuteUbergraph_GA_AbstractAttack(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_AbstractAttack.GA_AbstractAttack_C.ExecuteUbergraph_GA_AbstractAttack");
		
		UGA_AbstractAttack_C_ExecuteUbergraph_GA_AbstractAttack_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_AbstractAttack_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_AbstractAttack_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_AbstractAttack.GA_AbstractAttack_C");
		return ptr;
	}

}


