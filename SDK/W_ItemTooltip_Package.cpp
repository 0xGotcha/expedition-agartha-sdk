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
	 * 		Name   -> Function W_ItemTooltip.W_ItemTooltip_C.SetGoldValue
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsShop                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemTooltip_C::SetGoldValue(bool IsShop)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemTooltip.W_ItemTooltip_C.SetGoldValue");
		
		UW_ItemTooltip_C_SetGoldValue_Params params {};
		params.IsShop = IsShop;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemTooltip.W_ItemTooltip_C.UpgradesUpdateStatInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemTooltip_C::UpgradesUpdateStatInfo(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemTooltip.W_ItemTooltip_C.UpgradesUpdateStatInfo");
		
		UW_ItemTooltip_C_UpgradesUpdateStatInfo_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemTooltip.W_ItemTooltip_C.SetUpgradeSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemTooltip_C::SetUpgradeSlots(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemTooltip.W_ItemTooltip_C.SetUpgradeSlots");
		
		UW_ItemTooltip_C_SetUpgradeSlots_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemTooltip.W_ItemTooltip_C.AddWeaponInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bShowDPSStats                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemTooltip_C::AddWeaponInformation(bool bShowDPSStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemTooltip.W_ItemTooltip_C.AddWeaponInformation");
		
		UW_ItemTooltip_C_AddWeaponInformation_Params params {};
		params.bShowDPSStats = bShowDPSStats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemTooltip.W_ItemTooltip_C.AddArmorInformation
	 * 		Flags  -> ()
	 */
	void UW_ItemTooltip_C::AddArmorInformation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemTooltip.W_ItemTooltip_C.AddArmorInformation");
		
		UW_ItemTooltip_C_AddArmorInformation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemTooltip.W_ItemTooltip_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ItemTooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemTooltip.W_ItemTooltip_C.Construct");
		
		UW_ItemTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemTooltip.W_ItemTooltip_C.ExecuteUbergraph_W_ItemTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemTooltip_C::ExecuteUbergraph_W_ItemTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemTooltip.W_ItemTooltip_C.ExecuteUbergraph_W_ItemTooltip");
		
		UW_ItemTooltip_C_ExecuteUbergraph_W_ItemTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemTooltip.W_ItemTooltip_C");
		return ptr;
	}

}


