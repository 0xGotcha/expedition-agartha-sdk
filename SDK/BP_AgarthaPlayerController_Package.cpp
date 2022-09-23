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
	 * 		Name   -> Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_AgarthaPlayerController_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.ReceiveBeginPlay");
		
		ABP_AgarthaPlayerController_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.HighlightNPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNPCComponent*                               NPC                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AgarthaPlayerController_C::HighlightNPC(class UNPCComponent* NPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.HighlightNPC");
		
		ABP_AgarthaPlayerController_C_HighlightNPC_Params params {};
		params.NPC = NPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.ReceivePossess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APawn*                                       PossessedPawn                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AgarthaPlayerController_C::ReceivePossess(class APawn* PossessedPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.ReceivePossess");
		
		ABP_AgarthaPlayerController_C_ReceivePossess_Params params {};
		params.PossessedPawn = PossessedPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.ExecuteUbergraph_BP_AgarthaPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_AgarthaPlayerController_C::ExecuteUbergraph_BP_AgarthaPlayerController(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_AgarthaPlayerController.BP_AgarthaPlayerController_C.ExecuteUbergraph_BP_AgarthaPlayerController");
		
		ABP_AgarthaPlayerController_C_ExecuteUbergraph_BP_AgarthaPlayerController_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_AgarthaPlayerController_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_AgarthaPlayerController_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_AgarthaPlayerController.BP_AgarthaPlayerController_C");
		return ptr;
	}

}


