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
	 * 		Name   -> Function BP_CharacterModular.BP_CharacterModular_C.UpdateCharacterMesh
	 * 		Flags  -> ()
	 */
	void UBP_CharacterModular_C::UpdateCharacterMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterModular.BP_CharacterModular_C.UpdateCharacterMesh");
		
		UBP_CharacterModular_C_UpdateCharacterMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterModular.BP_CharacterModular_C.ExecuteUbergraph_BP_CharacterModular
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CharacterModular_C::ExecuteUbergraph_BP_CharacterModular(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterModular.BP_CharacterModular_C.ExecuteUbergraph_BP_CharacterModular");
		
		UBP_CharacterModular_C_ExecuteUbergraph_BP_CharacterModular_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterModular.BP_CharacterModular_C.Character Looks Updated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UBP_CharacterModular_C::Character_Looks_Updated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterModular.BP_CharacterModular_C.Character Looks Updated__DelegateSignature");
		
		UBP_CharacterModular_C_Character_Looks_Updated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CharacterModular_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CharacterModular_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterModular.BP_CharacterModular_C");
		return ptr;
	}

}


