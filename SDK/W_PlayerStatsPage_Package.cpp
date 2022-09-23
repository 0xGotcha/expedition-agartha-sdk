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
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddAsGameplayAttribute
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttribute                          Key                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UW_PlayerStatsPage_C::AddAsGameplayAttribute(const struct FGameplayAttribute& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddAsGameplayAttribute");
		
		UW_PlayerStatsPage_C_AddAsGameplayAttribute_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.UpdateRealTimeStatValues
	 * 		Flags  -> ()
	 */
	void UW_PlayerStatsPage_C::UpdateRealTimeStatValues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.UpdateRealTimeStatValues");
		
		UW_PlayerStatsPage_C_UpdateRealTimeStatValues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddCheckedPlayerStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemStatType                                      StatType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FString                                      AltStatType                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FText                                        optionalReadableText                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      optionalStatFormatting                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_PlayerStatsPage_C::AddCheckedPlayerStat(EItemStatType StatType, const class FString& AltStatType, const class FText& optionalReadableText, const class FString& optionalStatFormatting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddCheckedPlayerStat");
		
		UW_PlayerStatsPage_C_AddCheckedPlayerStat_Params params {};
		params.StatType = StatType;
		params.AltStatType = AltStatType;
		params.optionalReadableText = optionalReadableText;
		params.optionalStatFormatting = optionalStatFormatting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddEquipmentStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      SlotID                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerStatsPage_C::AddEquipmentStat(EquipmentType SlotID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddEquipmentStat");
		
		UW_PlayerStatsPage_C_AddEquipmentStat_Params params {};
		params.SlotID = SlotID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.MaxStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              currStat                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              MaxStat                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              RegenStat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemStatType                                      StatType                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_PlayerStatsPage_C::MaxStat(float currStat, float MaxStat, float RegenStat, EItemStatType StatType, const class FText& Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.MaxStat");
		
		UW_PlayerStatsPage_C_MaxStat_Params params {};
		params.currStat = currStat;
		params.MaxStat = MaxStat;
		params.RegenStat = RegenStat;
		params.StatType = StatType;
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddPlayerStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              StatValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EItemStatType                                      _itemStat                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FText                                        optionalReadableText                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		class FString                                      optionalStatFormatting                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 */
	void UW_PlayerStatsPage_C::AddPlayerStat(float StatValue, EItemStatType _itemStat, const class FText& optionalReadableText, const class FString& optionalStatFormatting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.AddPlayerStat");
		
		UW_PlayerStatsPage_C_AddPlayerStat_Params params {};
		params.StatValue = StatValue;
		params._itemStat = _itemStat;
		params.optionalReadableText = optionalReadableText;
		params.optionalStatFormatting = optionalStatFormatting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_PlayerStatsPage_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.Construct");
		
		UW_PlayerStatsPage_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.BndEvt__W_PlayerStatsPage_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PlayerStatsPage_C::BndEvt__W_PlayerStatsPage_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.BndEvt__W_PlayerStatsPage_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");
		
		UW_PlayerStatsPage_C_BndEvt__W_PlayerStatsPage_CloseButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerStatsPage_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.Tick");
		
		UW_PlayerStatsPage_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.Destruct
	 * 		Flags  -> ()
	 */
	void UW_PlayerStatsPage_C::Destruct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.Destruct");
		
		UW_PlayerStatsPage_C_Destruct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.SetupCamera
	 * 		Flags  -> ()
	 */
	void UW_PlayerStatsPage_C::SetupCamera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.SetupCamera");
		
		UW_PlayerStatsPage_C_SetupCamera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.Close
	 * 		Flags  -> ()
	 */
	void UW_PlayerStatsPage_C::Close()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.Close");
		
		UW_PlayerStatsPage_C_Close_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.ExecuteUbergraph_W_PlayerStatsPage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerStatsPage_C::ExecuteUbergraph_W_PlayerStatsPage(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.ExecuteUbergraph_W_PlayerStatsPage");
		
		UW_PlayerStatsPage_C_ExecuteUbergraph_W_PlayerStatsPage_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerStatsPage.W_PlayerStatsPage_C.BeginDestroy__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UW_PlayerStatsPage_C::BeginDestroy__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerStatsPage.W_PlayerStatsPage_C.BeginDestroy__DelegateSignature");
		
		UW_PlayerStatsPage_C_BeginDestroy__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PlayerStatsPage_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PlayerStatsPage_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlayerStatsPage.W_PlayerStatsPage_C");
		return ptr;
	}

}


