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
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Dynamic Sky Light Multiplier
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Dynamic_Sky_Light_Multiplier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Dynamic Sky Light Multiplier");
		
		AUltra_Dynamic_Sky_C_Update_Dynamic_Sky_Light_Multiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Transition Sky Light Intensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              New_Sky_Light_Intensity_Multiplier                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Transition_Time                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Transition_Sky_Light_Intensity(float New_Sky_Light_Intensity_Multiplier, float Transition_Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Transition Sky Light Intensity");
		
		AUltra_Dynamic_Sky_C_Transition_Sky_Light_Intensity_Params params {};
		params.New_Sky_Light_Intensity_Multiplier = New_Sky_Light_Intensity_Multiplier;
		params.Transition_Time = Transition_Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lens Flare
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Lens_Flare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lens Flare");
		
		AUltra_Dynamic_Sky_C_Update_Lens_Flare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Lens Flare
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Set_Up_Lens_Flare()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Lens Flare");
		
		AUltra_Dynamic_Sky_C_Set_Up_Lens_Flare_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Volumetric Mode
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDS_VolRT_Mode                                    Mode                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Apply_Volumetric_Mode(EUDS_VolRT_Mode Mode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Volumetric Mode");
		
		AUltra_Dynamic_Sky_C_Apply_Volumetric_Mode_Params params {};
		params.Mode = Mode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Moon Parameters
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Moon_Parameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Moon Parameters");
		
		AUltra_Dynamic_Sky_C_Update_Moon_Parameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise Times
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Sunrise_Times()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise Times");
		
		AUltra_Dynamic_Sky_C_Sunrise_Times_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Saved UDS and UDW State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Apply_Saved_UDS_and_UDW_State(const struct FUDS_and_UDW_State& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Saved UDS and UDW State");
		
		AUltra_Dynamic_Sky_C_Apply_Saved_UDS_and_UDW_State_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Create UDS and UDW State for Saving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          Packaged_State                                             (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Create_UDS_and_UDW_State_for_Saving(struct FUDS_and_UDW_State* Packaged_State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Create UDS and UDW State for Saving");
		
		AUltra_Dynamic_Sky_C_Create_UDS_and_UDW_State_for_Saving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Packaged_State != nullptr)
			*Packaged_State = params.Packaged_State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Current Volumetric Clouds MID
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Current_Volumetric_Clouds_MID()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Current Volumetric Clouds MID");
		
		AUltra_Dynamic_Sky_C_Update_Current_Volumetric_Clouds_MID_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated Time
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Replicated_Time()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated Time");
		
		AUltra_Dynamic_Sky_C_Update_Replicated_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Clouds
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Static_Clouds()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Clouds");
		
		AUltra_Dynamic_Sky_C_Update_Static_Clouds_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnRep_Replicated Time of Day
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::OnRep_Replicated_Time_of_Day()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnRep_Replicated Time of Day");
		
		AUltra_Dynamic_Sky_C_OnRep_Replicated_Time_of_Day_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Date and Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   Current_Date_and_Time                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Get_Current_Date_and_Time(struct FDateTime* Current_Date_and_Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Date and Time");
		
		AUltra_Dynamic_Sky_C_Get_Current_Date_and_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Current_Date_and_Time != nullptr)
			*Current_Date_and_Time = params.Current_Date_and_Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Daylight Savings Time
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Check_for_Daylight_Savings_Time()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Daylight Savings Time");
		
		AUltra_Dynamic_Sky_C_Check_for_Daylight_Savings_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Day
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Increment_Day()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Day");
		
		AUltra_Dynamic_Sky_C_Increment_Day_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Valid Day
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Force_Valid_Day()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Valid Day");
		
		AUltra_Dynamic_Sky_C_Force_Valid_Day_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Approximate Real Sun Moon and Stars
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Month                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Day                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Year                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time_of_Day                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time_Zone                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Only_Calculate_Sun                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Sun_Vector                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Moon_Vector                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Real_Phase                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Phase_Alignment                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Celestial_Orbit                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Celestial_Yaw                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Approximate_Real_Sun_Moon_and_Stars(int32_t Month, int32_t Day, int32_t Year, float Time_of_Day, float Time_Zone, bool Only_Calculate_Sun, struct FVector* Sun_Vector, struct FVector* Moon_Vector, float* Real_Phase, struct FVector* Phase_Alignment, float* Celestial_Orbit, struct FLinearColor* Celestial_Yaw)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Approximate Real Sun Moon and Stars");
		
		AUltra_Dynamic_Sky_C_Approximate_Real_Sun_Moon_and_Stars_Params params {};
		params.Month = Month;
		params.Day = Day;
		params.Year = Year;
		params.Time_of_Day = Time_of_Day;
		params.Time_Zone = Time_Zone;
		params.Only_Calculate_Sun = Only_Calculate_Sun;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sun_Vector != nullptr)
			*Sun_Vector = params.Sun_Vector;
		if (Moon_Vector != nullptr)
			*Moon_Vector = params.Moon_Vector;
		if (Real_Phase != nullptr)
			*Real_Phase = params.Real_Phase;
		if (Phase_Alignment != nullptr)
			*Phase_Alignment = params.Phase_Alignment;
		if (Celestial_Orbit != nullptr)
			*Celestial_Orbit = params.Celestial_Orbit;
		if (Celestial_Yaw != nullptr)
			*Celestial_Yaw = params.Celestial_Yaw;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Date and Time
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FDateTime                                   Date_Time                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Set_Date_and_Time(const struct FDateTime& Date_Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Date and Time");
		
		AUltra_Dynamic_Sky_C_Set_Date_and_Time_Params params {};
		params.Date_Time = Date_Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Directional Lights
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Move_Static_Lights                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Sky_C::Update_Directional_Lights(bool Move_Static_Lights)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Directional Lights");
		
		AUltra_Dynamic_Sky_C_Update_Directional_Lights_Params params {};
		params.Move_Static_Lights = Move_Static_Lights;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Recapture_SkyLight
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Recapture_SkyLight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Recapture_SkyLight");
		
		AUltra_Dynamic_Sky_C_Recapture_SkyLight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Change Settings Based on Platform and Scalability
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Change_Settings_Based_on_Platform_and_Scalability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Change Settings Based on Platform and Scalability");
		
		AUltra_Dynamic_Sky_C_Change_Settings_Based_on_Platform_and_Scalability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Variables Controlled by Weather
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Variables_Controlled_by_Weather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Variables Controlled by Weather");
		
		AUltra_Dynamic_Sky_C_Update_Variables_Controlled_by_Weather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construction Script Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Run_By_Counterpart                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Sky_C::Construction_Script_Function(bool Run_By_Counterpart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construction Script Function");
		
		AUltra_Dynamic_Sky_C_Construction_Script_Function_Params params {};
		params.Run_By_Counterpart = Run_By_Counterpart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cloud Timing
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Set_Cloud_Timing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cloud Timing");
		
		AUltra_Dynamic_Sky_C_Set_Cloud_Timing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Variables
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Static_Variables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Variables");
		
		AUltra_Dynamic_Sky_C_Update_Static_Variables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Time of Day using Time Code
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimecode                                   Time_Code                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Set_Time_of_Day_using_Time_Code(const struct FTimecode& Time_Code)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Time of Day using Time Code");
		
		AUltra_Dynamic_Sky_C_Set_Time_of_Day_using_Time_Code_Params params {};
		params.Time_Code = Time_Code;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Time of Day in Real Time Format
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTimecode                                   Time                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::Get_Time_of_Day_in_Real_Time_Format(struct FTimecode* Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Time of Day in Real Time Format");
		
		AUltra_Dynamic_Sky_C_Get_Time_of_Day_in_Real_Time_Format_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Time != nullptr)
			*Time = params.Time;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Active Variables
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Active_Variables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Active Variables");
		
		AUltra_Dynamic_Sky_C_Update_Active_Variables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Sun and Moon Root Rotation
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Set_Sun_and_Moon_Root_Rotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Sun and Moon Root Rotation");
		
		AUltra_Dynamic_Sky_C_Set_Sun_and_Moon_Root_Rotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UserConstructionScript");
		
		AUltra_Dynamic_Sky_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveTick");
		
		AUltra_Dynamic_Sky_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveBeginPlay");
		
		AUltra_Dynamic_Sky_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Day Ended
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Day_Ended()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Day Ended");
		
		AUltra_Dynamic_Sky_C_Day_Ended_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lights
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Lights()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lights");
		
		AUltra_Dynamic_Sky_C_Update_Lights_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Inside Cloud Fog
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Restart_Inside_Cloud_Fog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Inside Cloud Fog");
		
		AUltra_Dynamic_Sky_C_Restart_Inside_Cloud_Fog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated ToD
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Update_Replicated_ToD()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated ToD");
		
		AUltra_Dynamic_Sky_C_Update_Replicated_ToD_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ExecuteUbergraph_Ultra_Dynamic_Sky
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Sky_C::ExecuteUbergraph_Ultra_Dynamic_Sky(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ExecuteUbergraph_Ultra_Dynamic_Sky");
		
		AUltra_Dynamic_Sky_C_ExecuteUbergraph_Ultra_Dynamic_Sky_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Evening__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Evening__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Evening__DelegateSignature");
		
		AUltra_Dynamic_Sky_C_Evening__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Midnight__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Midnight__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Midnight__DelegateSignature");
		
		AUltra_Dynamic_Sky_C_Midnight__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Sunrise__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise__DelegateSignature");
		
		AUltra_Dynamic_Sky_C_Sunrise__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunset__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Sky_C::Sunset__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunset__DelegateSignature");
		
		AUltra_Dynamic_Sky_C_Sunset__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUltra_Dynamic_Sky_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUltra_Dynamic_Sky_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C");
		return ptr;
	}

}


