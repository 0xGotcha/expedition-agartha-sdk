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
	 * 		Name   -> Function BP_ModularCharacterBotV2.BP_ModularCharacterBotV2_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_ModularCharacterBotV2_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterBotV2.BP_ModularCharacterBotV2_C.ReceiveBeginPlay");
		
		ABP_ModularCharacterBotV2_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_ModularCharacterBotV2.BP_ModularCharacterBotV2_C.ExecuteUbergraph_BP_ModularCharacterBotV2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_ModularCharacterBotV2_C::ExecuteUbergraph_BP_ModularCharacterBotV2(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_ModularCharacterBotV2.BP_ModularCharacterBotV2_C.ExecuteUbergraph_BP_ModularCharacterBotV2");
		
		ABP_ModularCharacterBotV2_C_ExecuteUbergraph_BP_ModularCharacterBotV2_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_ModularCharacterBotV2_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_ModularCharacterBotV2_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ModularCharacterBotV2.BP_ModularCharacterBotV2_C");
		return ptr;
	}

}


