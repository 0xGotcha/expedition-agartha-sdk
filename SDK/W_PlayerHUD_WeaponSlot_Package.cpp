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
	 * 		Name   -> Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_PlayerHUD_WeaponSlot_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.PreConstruct");
		
		UW_PlayerHUD_WeaponSlot_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_PlayerHUD_WeaponSlot_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.Construct");
		
		UW_PlayerHUD_WeaponSlot_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.Set Item
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemTable                                  Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_PlayerHUD_WeaponSlot_C::Set_Item(const struct FItemTable& Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.Set Item");
		
		UW_PlayerHUD_WeaponSlot_C_Set_Item_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.Update Binding Text
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_PlayerHUD_WeaponSlot_C::Update_Binding_Text(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.Update Binding Text");
		
		UW_PlayerHUD_WeaponSlot_C_Update_Binding_Text_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.ExecuteUbergraph_W_PlayerHUD_WeaponSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerHUD_WeaponSlot_C::ExecuteUbergraph_W_PlayerHUD_WeaponSlot(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C.ExecuteUbergraph_W_PlayerHUD_WeaponSlot");
		
		UW_PlayerHUD_WeaponSlot_C_ExecuteUbergraph_W_PlayerHUD_WeaponSlot_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PlayerHUD_WeaponSlot_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PlayerHUD_WeaponSlot_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlayerHUD_WeaponSlot.W_PlayerHUD_WeaponSlot_C");
		return ptr;
	}

}


