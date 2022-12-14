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
	 * 		Name   -> Function BP_CraftingTable.BP_CraftingTable_C.Requires Hold To Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_CraftingTable_C::Requires_Hold_To_Interact(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CraftingTable.BP_CraftingTable_C.Requires Hold To Interact");
		
		ABP_CraftingTable_C_Requires_Hold_To_Interact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CraftingTable.BP_CraftingTable_C.Hold Time Multiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CraftingTable_C::Hold_Time_Multiplier(float* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CraftingTable.BP_CraftingTable_C.Hold Time Multiplier");
		
		ABP_CraftingTable_C_Hold_Time_Multiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CraftingTable.BP_CraftingTable_C.Action Verb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void ABP_CraftingTable_C::Action_Verb(class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CraftingTable.BP_CraftingTable_C.Action Verb");
		
		ABP_CraftingTable_C_Action_Verb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CraftingTable.BP_CraftingTable_C.Set Inventory Tick Interval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Tick_Interval                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CraftingTable_C::Set_Inventory_Tick_Interval(float Tick_Interval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CraftingTable.BP_CraftingTable_C.Set Inventory Tick Interval");
		
		ABP_CraftingTable_C_Set_Inventory_Tick_Interval_Params params {};
		params.Tick_Interval = Tick_Interval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CraftingTable.BP_CraftingTable_C.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BaseCharacter_C*                         Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CraftingTable_C::Interact(class ABP_BaseCharacter_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CraftingTable.BP_CraftingTable_C.Interact");
		
		ABP_CraftingTable_C_Interact_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CraftingTable.BP_CraftingTable_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_CraftingTable_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CraftingTable.BP_CraftingTable_C.ReceiveBeginPlay");
		
		ABP_CraftingTable_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CraftingTable.BP_CraftingTable_C.ExecuteUbergraph_BP_CraftingTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_CraftingTable_C::ExecuteUbergraph_BP_CraftingTable(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CraftingTable.BP_CraftingTable_C.ExecuteUbergraph_BP_CraftingTable");
		
		ABP_CraftingTable_C_ExecuteUbergraph_BP_CraftingTable_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_CraftingTable_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_CraftingTable_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CraftingTable.BP_CraftingTable_C");
		return ptr;
	}

}


