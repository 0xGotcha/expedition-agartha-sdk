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
	 * 		Name   -> Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_PlayerHUD_Weapons_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Construct");
		
		UW_PlayerHUD_Weapons_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Update Slots
	 * 		Flags  -> ()
	 */
	void UW_PlayerHUD_Weapons_C::Update_Slots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Update Slots");
		
		UW_PlayerHUD_Weapons_C_Update_Slots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Inventory Updated
	 * 		Flags  -> ()
	 */
	void UW_PlayerHUD_Weapons_C::Inventory_Updated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Inventory Updated");
		
		UW_PlayerHUD_Weapons_C_Inventory_Updated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Update Inventory Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerHUD_Weapons_C::Update_Inventory_Event(class UInventoryComponent* Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.Update Inventory Event");
		
		UW_PlayerHUD_Weapons_C_Update_Inventory_Event_Params params {};
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.ExecuteUbergraph_W_PlayerHUD_Weapons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerHUD_Weapons_C::ExecuteUbergraph_W_PlayerHUD_Weapons(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C.ExecuteUbergraph_W_PlayerHUD_Weapons");
		
		UW_PlayerHUD_Weapons_C_ExecuteUbergraph_W_PlayerHUD_Weapons_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PlayerHUD_Weapons_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PlayerHUD_Weapons_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlayerHUD_Weapons.W_PlayerHUD_Weapons_C");
		return ptr;
	}

}


