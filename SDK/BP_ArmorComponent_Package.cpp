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
	 * 		Name   -> Function BP_ArmorComponent.BP_ArmorComponent_C.OnArmorUpdate
	 * 		Flags  -> ()
	 */
	void UBP_ArmorComponent_C::OnArmorUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArmorComponent.BP_ArmorComponent_C.OnArmorUpdate");
		
		UBP_ArmorComponent_C_OnArmorUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ArmorComponent.BP_ArmorComponent_C.OnUnequipArmor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterModuleType                               Module                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<ECharacterModuleType>                       ShowModules                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UBP_ArmorComponent_C::OnUnequipArmor(ECharacterModuleType Module, TArray<ECharacterModuleType> ShowModules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArmorComponent.BP_ArmorComponent_C.OnUnequipArmor");
		
		UBP_ArmorComponent_C_OnUnequipArmor_Params params {};
		params.Module = Module;
		params.ShowModules = ShowModules;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ArmorComponent.BP_ArmorComponent_C.OnEquipArmor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterModuleType                               Module                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<ECharacterModuleType>                       HideModules                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		int32_t                                            BodyType                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FItemTable                                  ItemData                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UBP_ArmorComponent_C::OnEquipArmor(ECharacterModuleType Module, TArray<ECharacterModuleType> HideModules, int32_t BodyType, const struct FItemTable& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArmorComponent.BP_ArmorComponent_C.OnEquipArmor");
		
		UBP_ArmorComponent_C_OnEquipArmor_Params params {};
		params.Module = Module;
		params.HideModules = HideModules;
		params.BodyType = BodyType;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ArmorComponent.BP_ArmorComponent_C.ExecuteUbergraph_BP_ArmorComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_ArmorComponent_C::ExecuteUbergraph_BP_ArmorComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArmorComponent.BP_ArmorComponent_C.ExecuteUbergraph_BP_ArmorComponent");
		
		UBP_ArmorComponent_C_ExecuteUbergraph_BP_ArmorComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ArmorComponent.BP_ArmorComponent_C.Armor Updated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_ArmorComponent_C::Armor_Updated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ArmorComponent.BP_ArmorComponent_C.Armor Updated__DelegateSignature");
		
		UBP_ArmorComponent_C_Armor_Updated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_ArmorComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ArmorComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ArmorComponent.BP_ArmorComponent_C");
		return ptr;
	}

}


