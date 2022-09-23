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
	 * 		Name   -> Function BP_CharacterNPCComponent.BP_CharacterNPCComponent_C.EventQuestResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestActionResult                                 Result                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        QuestName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CharacterNPCComponent_C::EventQuestResult(EQuestActionResult Result, const class FName& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterNPCComponent.BP_CharacterNPCComponent_C.EventQuestResult");
		
		UBP_CharacterNPCComponent_C_EventQuestResult_Params params {};
		params.Result = Result;
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_CharacterNPCComponent.BP_CharacterNPCComponent_C.ExecuteUbergraph_BP_CharacterNPCComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_CharacterNPCComponent_C::ExecuteUbergraph_BP_CharacterNPCComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_CharacterNPCComponent.BP_CharacterNPCComponent_C.ExecuteUbergraph_BP_CharacterNPCComponent");
		
		UBP_CharacterNPCComponent_C_ExecuteUbergraph_BP_CharacterNPCComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_CharacterNPCComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_CharacterNPCComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_CharacterNPCComponent.BP_CharacterNPCComponent_C");
		return ptr;
	}

}


