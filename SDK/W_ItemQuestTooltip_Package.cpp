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
	 * 		Name   -> Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestGoalsDescription
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               NotRandom                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FQuestTable                                 QuestRow                                                   (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UProjectAgarthaGameInstance*                 GameInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               QuestFInished                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemQuestTooltip_C::SetQuestGoalsDescription(bool NotRandom, const struct FQuestTable& QuestRow, class UProjectAgarthaGameInstance* GameInstance, bool QuestFInished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestGoalsDescription");
		
		UW_ItemQuestTooltip_C_SetQuestGoalsDescription_Params params {};
		params.NotRandom = NotRandom;
		params.QuestRow = QuestRow;
		params.GameInstance = GameInstance;
		params.QuestFInished = QuestFInished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestConditionItemStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ConditionString                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FQuestCondition                             QuestCondition                                             (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class UProjectAgarthaGameInstance*                 GameInstance                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      ConditionStringOut                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_ItemQuestTooltip_C::SetQuestConditionItemStats(const class FString& ConditionString, const struct FQuestCondition& QuestCondition, class UProjectAgarthaGameInstance* GameInstance, class FString* ConditionStringOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestConditionItemStats");
		
		UW_ItemQuestTooltip_C_SetQuestConditionItemStats_Params params {};
		params.ConditionString = ConditionString;
		params.QuestCondition = QuestCondition;
		params.GameInstance = GameInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ConditionStringOut != nullptr)
			*ConditionStringOut = params.ConditionStringOut;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.UpdateQuestOngoingConditions
	 * 		Flags  -> ()
	 */
	void UW_ItemQuestTooltip_C::UpdateQuestOngoingConditions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.UpdateQuestOngoingConditions");
		
		UW_ItemQuestTooltip_C_UpdateQuestOngoingConditions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  RewardInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UCharacterNPCsComponent*                     CharNPCComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemQuestTooltip_C::SetQuestReward(class UDataTable* RewardInventory, class UCharacterNPCsComponent* CharNPCComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestReward");
		
		UW_ItemQuestTooltip_C_SetQuestReward_Params params {};
		params.RewardInventory = RewardInventory;
		params.CharNPCComponent = CharNPCComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestOngoingConditionsRows
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FQuestCondition>                     QuestConditions                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterNPCsComponent*                     CharNPCComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FProjectAgartha_FNPCQuestProgress           QuestProgress                                              (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_ItemQuestTooltip_C::SetQuestOngoingConditionsRows(TArray<struct FQuestCondition>* QuestConditions, class UCharacterNPCsComponent* CharNPCComponent, const struct FProjectAgartha_FNPCQuestProgress& QuestProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestOngoingConditionsRows");
		
		UW_ItemQuestTooltip_C_SetQuestOngoingConditionsRows_Params params {};
		params.CharNPCComponent = CharNPCComponent;
		params.QuestProgress = QuestProgress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestConditions != nullptr)
			*QuestConditions = params.QuestConditions;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestConditionsRows
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FQuestCondition>                     QuestConditions                                            (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		class UCharacterNPCsComponent*                     CharNPCComponent                                           (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               HideConditions                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               QuestFInished                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_ItemQuestTooltip_C::SetQuestConditionsRows(TArray<struct FQuestCondition>* QuestConditions, class UCharacterNPCsComponent** CharNPCComponent, bool HideConditions, bool QuestFInished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.SetQuestConditionsRows");
		
		UW_ItemQuestTooltip_C_SetQuestConditionsRows_Params params {};
		params.HideConditions = HideConditions;
		params.QuestFInished = QuestFInished;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestConditions != nullptr)
			*QuestConditions = params.QuestConditions;
		if (CharNPCComponent != nullptr)
			*CharNPCComponent = params.CharNPCComponent;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ItemQuestTooltip_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.Construct");
		
		UW_ItemQuestTooltip_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.ExecuteUbergraph_W_ItemQuestTooltip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemQuestTooltip_C::ExecuteUbergraph_W_ItemQuestTooltip(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemQuestTooltip.W_ItemQuestTooltip_C.ExecuteUbergraph_W_ItemQuestTooltip");
		
		UW_ItemQuestTooltip_C_ExecuteUbergraph_W_ItemQuestTooltip_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemQuestTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemQuestTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemQuestTooltip.W_ItemQuestTooltip_C");
		return ptr;
	}

}


