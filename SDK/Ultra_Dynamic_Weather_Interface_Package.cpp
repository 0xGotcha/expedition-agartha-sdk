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
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Material Effects
	 * 		Flags  -> ()
	 */
	void UUltra_Dynamic_Weather_Interface_C::Update_Material_Effects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Material Effects");
		
		UUltra_Dynamic_Weather_Interface_C_Update_Material_Effects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::Apply_State(const struct FUDS_and_UDW_State& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State");
		
		UUltra_Dynamic_Weather_Interface_C_Apply_State_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          UDW_State                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::Get_State_for_Saving(struct FUDS_and_UDW_State* UDW_State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving");
		
		UUltra_Dynamic_Weather_Interface_C_Get_State_for_Saving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UDW_State != nullptr)
			*UDW_State = params.UDW_State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Intended_Cloud_Direction                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::Get_Intended_Cloud_Direction(float* Intended_Cloud_Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction");
		
		UUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Direction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Intended_Cloud_Direction != nullptr)
			*Intended_Cloud_Direction = params.Intended_Cloud_Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Intended_Cloud_Speed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::Get_Intended_Cloud_Speed(float* Intended_Cloud_Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed");
		
		UUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Speed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Intended_Cloud_Speed != nullptr)
			*Intended_Cloud_Speed = params.Intended_Cloud_Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Cloud Coverage from UDS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cloud_Coverage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::Update_Cloud_Coverage_from_UDS(float Cloud_Coverage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Cloud Coverage from UDS");
		
		UUltra_Dynamic_Weather_Interface_C_Update_Cloud_Coverage_from_UDS_Params params {};
		params.Cloud_Coverage = Cloud_Coverage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather
	 * 		Flags  -> ()
	 */
	void UUltra_Dynamic_Weather_Interface_C::Initialize_Weather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather");
		
		UUltra_Dynamic_Weather_Interface_C_Initialize_Weather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Current Season
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDS_Season                                        Season                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUltra_Dynamic_Weather_Interface_C::Set_Current_Season(EUDS_Season Season)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Current Season");
		
		UUltra_Dynamic_Weather_Interface_C_Set_Current_Season_Params params {};
		params.Season = Season;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUltra_Dynamic_Weather_Interface_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUltra_Dynamic_Weather_Interface_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C");
		return ptr;
	}

}


