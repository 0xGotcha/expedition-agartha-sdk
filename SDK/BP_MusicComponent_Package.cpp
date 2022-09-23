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
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void UBP_MusicComponent_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.ReceiveBeginPlay");
		
		UBP_MusicComponent_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MusicComponent_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.ReceiveTick");
		
		UBP_MusicComponent_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.On Threat Level Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Old_Threat_Level                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Threat_Level                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MusicComponent_C::On_Threat_Level_Changed(int32_t Old_Threat_Level, int32_t New_Threat_Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.On Threat Level Changed");
		
		UBP_MusicComponent_C_On_Threat_Level_Changed_Params params {};
		params.Old_Threat_Level = Old_Threat_Level;
		params.New_Threat_Level = New_Threat_Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.Sunset
	 * 		Flags  -> ()
	 */
	void UBP_MusicComponent_C::Sunset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.Sunset");
		
		UBP_MusicComponent_C_Sunset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.Reset Cues
	 * 		Flags  -> ()
	 */
	void UBP_MusicComponent_C::Reset_Cues()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.Reset Cues");
		
		UBP_MusicComponent_C_Reset_Cues_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.Switch To State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMusicComponentStateEnum                           New_State                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Fade_Time                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MusicComponent_C::Switch_To_State(EMusicComponentStateEnum New_State, float Fade_Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.Switch To State");
		
		UBP_MusicComponent_C_Switch_To_State_Params params {};
		params.New_State = New_State;
		params.Fade_Time = Fade_Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.Fade In Next State
	 * 		Flags  -> ()
	 */
	void UBP_MusicComponent_C::Fade_In_Next_State()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.Fade In Next State");
		
		UBP_MusicComponent_C_Fade_In_Next_State_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.Init
	 * 		Flags  -> ()
	 */
	void UBP_MusicComponent_C::Init()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.Init");
		
		UBP_MusicComponent_C_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.Sunrise
	 * 		Flags  -> ()
	 */
	void UBP_MusicComponent_C::Sunrise()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.Sunrise");
		
		UBP_MusicComponent_C_Sunrise_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_MusicComponent.BP_MusicComponent_C.ExecuteUbergraph_BP_MusicComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UBP_MusicComponent_C::ExecuteUbergraph_BP_MusicComponent(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_MusicComponent.BP_MusicComponent_C.ExecuteUbergraph_BP_MusicComponent");
		
		UBP_MusicComponent_C_ExecuteUbergraph_BP_MusicComponent_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBP_MusicComponent_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_MusicComponent_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_MusicComponent.BP_MusicComponent_C");
		return ptr;
	}

}


