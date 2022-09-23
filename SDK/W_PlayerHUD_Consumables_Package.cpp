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
	 * 		Name   -> Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_PlayerHUD_Consumables_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Construct");
		
		UW_PlayerHUD_Consumables_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Update Slots
	 * 		Flags  -> ()
	 */
	void UW_PlayerHUD_Consumables_C::Update_Slots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Update Slots");
		
		UW_PlayerHUD_Consumables_C_Update_Slots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Consumables Updated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         UpdatedInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerHUD_Consumables_C::Consumables_Updated(class UInventoryComponent* UpdatedInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Consumables Updated");
		
		UW_PlayerHUD_Consumables_C_Consumables_Updated_Params params {};
		params.UpdatedInventory = UpdatedInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Invetory Updated
	 * 		Flags  -> ()
	 */
	void UW_PlayerHUD_Consumables_C::Invetory_Updated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.Invetory Updated");
		
		UW_PlayerHUD_Consumables_C_Invetory_Updated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.ExecuteUbergraph_W_PlayerHUD_Consumables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerHUD_Consumables_C::ExecuteUbergraph_W_PlayerHUD_Consumables(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C.ExecuteUbergraph_W_PlayerHUD_Consumables");
		
		UW_PlayerHUD_Consumables_C_ExecuteUbergraph_W_PlayerHUD_Consumables_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PlayerHUD_Consumables_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PlayerHUD_Consumables_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlayerHUD_Consumables.W_PlayerHUD_Consumables_C");
		return ptr;
	}

}


