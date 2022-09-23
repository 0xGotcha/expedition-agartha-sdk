/**
 * Name: Agartha
 * Version: 1
 */

#include "../SDK.hpp"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.Requires Hold To Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_ItemContainer_C::Requires_Hold_To_Interact(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.Requires Hold To Interact");
		
		ABP_ItemContainer_C_Requires_Hold_To_Interact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.Hold Time Multiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemContainer_C::Hold_Time_Multiplier(float* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.Hold Time Multiplier");
		
		ABP_ItemContainer_C_Hold_Time_Multiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.Action Verb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void ABP_ItemContainer_C::Action_Verb(class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.Action Verb");
		
		ABP_ItemContainer_C_Action_Verb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void ABP_ItemContainer_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.UserConstructionScript");
		
		ABP_ItemContainer_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BaseCharacter_C*                         Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemContainer_C::Interact(class ABP_BaseCharacter_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.Interact");
		
		ABP_ItemContainer_C_Interact_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ItemContainer_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.ReceiveBeginPlay");
		
		ABP_ItemContainer_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.BP_OnInventoryEmptied
	 * 		Flags  -> ()
	 */
	void ABP_ItemContainer_C::BP_OnInventoryEmptied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.BP_OnInventoryEmptied");
		
		ABP_ItemContainer_C_BP_OnInventoryEmptied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.Stop Custom Depth
	 * 		Flags  -> ()
	 */
	void ABP_ItemContainer_C::Stop_Custom_Depth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.Stop Custom Depth");
		
		ABP_ItemContainer_C_Stop_Custom_Depth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.Multicast Stop Custom Depth
	 * 		Flags  -> ()
	 */
	void ABP_ItemContainer_C::Multicast_Stop_Custom_Depth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.Multicast Stop Custom Depth");
		
		ABP_ItemContainer_C_Multicast_Stop_Custom_Depth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.Contents Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         UpdatedInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemContainer_C::Contents_Changed(class UInventoryComponent* UpdatedInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.Contents Changed");
		
		ABP_ItemContainer_C_Contents_Changed_Params params {};
		params.UpdatedInventory = UpdatedInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.Set Inventory Tick Interval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Tick_Interval                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemContainer_C::Set_Inventory_Tick_Interval(float Tick_Interval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.Set Inventory Tick Interval");
		
		ABP_ItemContainer_C_Set_Inventory_Tick_Interval_Params params {};
		params.Tick_Interval = Tick_Interval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ItemContainer.BP_ItemContainer_C.ExecuteUbergraph_BP_ItemContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ItemContainer_C::ExecuteUbergraph_BP_ItemContainer(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ItemContainer.BP_ItemContainer_C.ExecuteUbergraph_BP_ItemContainer");
		
		ABP_ItemContainer_C_ExecuteUbergraph_BP_ItemContainer_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ItemContainer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ItemContainer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ItemContainer.BP_ItemContainer_C");
		return ptr;
	}

}


