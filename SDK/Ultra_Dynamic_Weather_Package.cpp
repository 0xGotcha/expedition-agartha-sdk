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
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get State for Saving
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          UDW_State                                                  (Parm, OutParm, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Get_State_for_Saving(struct FUDS_and_UDW_State* UDW_State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get State for Saving");
		
		AUltra_Dynamic_Weather_C_Get_State_for_Saving_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (UDW_State != nullptr)
			*UDW_State = params.UDW_State;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Direction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Intended_Cloud_Direction                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Get_Intended_Cloud_Direction(float* Intended_Cloud_Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Direction");
		
		AUltra_Dynamic_Weather_C_Get_Intended_Cloud_Direction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Intended_Cloud_Direction != nullptr)
			*Intended_Cloud_Direction = params.Intended_Cloud_Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Speed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Intended_Cloud_Speed                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Get_Intended_Cloud_Speed(float* Intended_Cloud_Speed)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Speed");
		
		AUltra_Dynamic_Weather_C_Get_Intended_Cloud_Speed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Intended_Cloud_Speed != nullptr)
			*Intended_Cloud_Speed = params.Intended_Cloud_Speed;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Limit Global Weather Intensity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Invert                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Weather_C::Limit_Global_Weather_Intensity(bool Invert)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Limit Global Weather Intensity");
		
		AUltra_Dynamic_Weather_C_Limit_Global_Weather_Intensity_Params params {};
		params.Invert = Invert;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Weather Override Volumes
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Sort_Weather_Override_Volumes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Weather Override Volumes");
		
		AUltra_Dynamic_Weather_C_Sort_Weather_Override_Volumes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Niagara Systems
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Active_Niagara_Systems()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Niagara Systems");
		
		AUltra_Dynamic_Weather_C_Update_Active_Niagara_Systems_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Screen Droplets
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Screen_Droplets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Screen Droplets");
		
		AUltra_Dynamic_Weather_C_Update_Screen_Droplets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Screen Droplets
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Start_Screen_Droplets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Screen Droplets");
		
		AUltra_Dynamic_Weather_C_Start_Screen_Droplets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Trigger Initial Event Dispatchers
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Trigger_Initial_Event_Dispatchers()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Trigger Initial Event Dispatchers");
		
		AUltra_Dynamic_Weather_C_Trigger_Initial_Event_Dispatchers_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for Events to Dispatch
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Check_for_Events_to_Dispatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for Events to Dispatch");
		
		AUltra_Dynamic_Weather_C_Check_for_Events_to_Dispatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Actor for Weather Exposure
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Test_Colliding_Components_Only                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Rain_Exposure                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Snow_Exposure                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Wind_Exposure                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Test_Actor_for_Weather_Exposure(class AActor* Actor, bool Test_Colliding_Components_Only, float* Rain_Exposure, float* Snow_Exposure, float* Wind_Exposure)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Actor for Weather Exposure");
		
		AUltra_Dynamic_Weather_C_Test_Actor_for_Weather_Exposure_Params params {};
		params.Actor = Actor;
		params.Test_Colliding_Components_Only = Test_Colliding_Components_Only;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rain_Exposure != nullptr)
			*Rain_Exposure = params.Rain_Exposure;
		if (Snow_Exposure != nullptr)
			*Snow_Exposure = params.Snow_Exposure;
		if (Wind_Exposure != nullptr)
			*Wind_Exposure = params.Wind_Exposure;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Wind Direction
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Wind_Direction()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Wind Direction");
		
		AUltra_Dynamic_Weather_C_Update_Wind_Direction_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Audio Component Activity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             Tested_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<class UAudioComponent*>                     Affected_Components                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	 * 		float                                              Current_Sound_Intensity                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Start_Randomization                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Update_Audio_Component_Activity(class UAudioComponent* Tested_Component, TArray<class UAudioComponent*>* Affected_Components, float Current_Sound_Intensity, float Start_Randomization)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Audio Component Activity");
		
		AUltra_Dynamic_Weather_C_Update_Audio_Component_Activity_Params params {};
		params.Tested_Component = Tested_Component;
		params.Current_Sound_Intensity = Current_Sound_Intensity;
		params.Start_Randomization = Start_Randomization;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Affected_Components != nullptr)
			*Affected_Components = params.Affected_Components;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Enabled Sound Components
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Enabled_Sound_Components()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Enabled Sound Components");
		
		AUltra_Dynamic_Weather_C_Update_Enabled_Sound_Components_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Post Process Wind Fog
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Post_Process_Wind_Fog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Post Process Wind Fog");
		
		AUltra_Dynamic_Weather_C_Update_Post_Process_Wind_Fog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set up Post Process Wind Fog
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Set_up_Post_Process_Wind_Fog()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set up Post Process Wind Fog");
		
		AUltra_Dynamic_Weather_C_Set_up_Post_Process_Wind_Fog_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Occlusion Profile
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Current_Occlusion_Profile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Occlusion Profile");
		
		AUltra_Dynamic_Weather_C_Update_Current_Occlusion_Profile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Target Occlusion Profile
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Target_Occlusion_Profile()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Target Occlusion Profile");
		
		AUltra_Dynamic_Weather_C_Update_Target_Occlusion_Profile_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update New Settings
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_New_Settings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update New Settings");
		
		AUltra_Dynamic_Weather_C_Update_New_Settings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Lightning Period and Status
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Weather_Intensity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Cloud_Coverage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Snow_Percentage                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Override                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		float                                              Period                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Enabled                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Weather_C::Current_Lightning_Period_and_Status(float Weather_Intensity, float Cloud_Coverage, float Snow_Percentage, bool Override, float* Period, bool* Enabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Lightning Period and Status");
		
		AUltra_Dynamic_Weather_C_Current_Lightning_Period_and_Status_Params params {};
		params.Weather_Intensity = Weather_Intensity;
		params.Cloud_Coverage = Cloud_Coverage;
		params.Snow_Percentage = Snow_Percentage;
		params.Override = Override;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Period != nullptr)
			*Period = params.Period;
		if (Enabled != nullptr)
			*Enabled = params.Enabled;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Weather Preset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDS_WeatherTypes                                  Preset                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Weather_Intensity                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Cloud_Coverage                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Snow                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Wind_Intensity                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Material_Wetness                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Material_Snow                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Get_Weather_Preset(EUDS_WeatherTypes Preset, float* Weather_Intensity, float* Cloud_Coverage, float* Snow, float* Wind_Intensity, float* Material_Wetness, float* Material_Snow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Weather Preset");
		
		AUltra_Dynamic_Weather_C_Get_Weather_Preset_Params params {};
		params.Preset = Preset;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Weather_Intensity != nullptr)
			*Weather_Intensity = params.Weather_Intensity;
		if (Cloud_Coverage != nullptr)
			*Cloud_Coverage = params.Cloud_Coverage;
		if (Snow != nullptr)
			*Snow = params.Snow;
		if (Wind_Intensity != nullptr)
			*Wind_Intensity = params.Wind_Intensity;
		if (Material_Wetness != nullptr)
			*Material_Wetness = params.Material_Wetness;
		if (Material_Snow != nullptr)
			*Material_Snow = params.Material_Snow;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effect Parameters
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Material_Effect_Parameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effect Parameters");
		
		AUltra_Dynamic_Weather_C_Update_Material_Effect_Parameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Limit Current Weather Intensity
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Limit_Current_Weather_Intensity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Limit Current Weather Intensity");
		
		AUltra_Dynamic_Weather_C_Limit_Current_Weather_Intensity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Updated Control Point Location
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Get_Updated_Control_Point_Location()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Updated Control Point Location");
		
		AUltra_Dynamic_Weather_C_Get_Updated_Control_Point_Location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Local Weather
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Local_Weather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Local Weather");
		
		AUltra_Dynamic_Weather_C_Local_Weather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check Point for Puddles or Snow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Ground_Normal                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPhysicalMaterial*                           Physical_Material                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Puddle_Depth                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Snow_Depth                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Check_Point_for_Puddles_or_Snow(const struct FVector& Location, const struct FVector& Ground_Normal, class UPhysicalMaterial* Physical_Material, float* Puddle_Depth, float* Snow_Depth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check Point for Puddles or Snow");
		
		AUltra_Dynamic_Weather_C_Check_Point_for_Puddles_or_Snow_Params params {};
		params.Location = Location;
		params.Ground_Normal = Ground_Normal;
		params.Physical_Material = Physical_Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Puddle_Depth != nullptr)
			*Puddle_Depth = params.Puddle_Depth;
		if (Snow_Depth != nullptr)
			*Snow_Depth = params.Snow_Depth;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Cloud Reference Array
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Create_Cloud_Reference_Array()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Cloud Reference Array");
		
		AUltra_Dynamic_Weather_C_Create_Cloud_Reference_Array_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recycle Render Targets
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Recycle_Render_Targets()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recycle Render Targets");
		
		AUltra_Dynamic_Weather_C_Recycle_Render_Targets_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Puddle Ripples
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_DLWE_Puddle_Ripples()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Puddle Ripples");
		
		AUltra_Dynamic_Weather_C_Update_DLWE_Puddle_Ripples_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Ripple DLWE Puddle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Strength                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Ripple_DLWE_Puddle(const struct FVector& Location, float Size, float Strength)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Ripple DLWE Puddle");
		
		AUltra_Dynamic_Weather_C_Ripple_DLWE_Puddle_Params params {};
		params.Location = Location;
		params.Size = Size;
		params.Strength = Strength;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to change DLWE Mode
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Check_to_change_DLWE_Mode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to change DLWE Mode");
		
		AUltra_Dynamic_Weather_C_Check_to_change_DLWE_Mode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recenter DLWE Render Target
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UTextureRenderTarget2D*                      Render_Target                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		ETextureRenderTargetFormat                         Format                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                Clear_Color                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UMaterialInterface*                          EdgeFade_Material                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Recenter_DLWE_Render_Target(class UTextureRenderTarget2D* Render_Target, ETextureRenderTargetFormat Format, const struct FLinearColor& Clear_Color, class UMaterialInterface* EdgeFade_Material)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recenter DLWE Render Target");
		
		AUltra_Dynamic_Weather_C_Recenter_DLWE_Render_Target_Params params {};
		params.Render_Target = Render_Target;
		params.Format = Format;
		params.Clear_Color = Clear_Color;
		params.EdgeFade_Material = EdgeFade_Material;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Fade DLWE Target Over Time
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Fade_DLWE_Target_Over_Time()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Fade DLWE Target Over Time");
		
		AUltra_Dynamic_Weather_C_Fade_DLWE_Target_Over_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Snow Compressions
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_DLWE_Snow_Compressions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Snow Compressions");
		
		AUltra_Dynamic_Weather_C_Update_DLWE_Snow_Compressions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compress DLWE Snow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Size                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Compress_DLWE_Snow(const struct FVector& Location, float Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compress DLWE Snow");
		
		AUltra_Dynamic_Weather_C_Compress_DLWE_Snow_Params params {};
		params.Location = Location;
		params.Size = Size;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for DLWE Recenter
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Check_for_DLWE_Recenter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for DLWE Recenter");
		
		AUltra_Dynamic_Weather_C_Check_for_DLWE_Recenter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Parameters
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_DLWE_Parameters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Parameters");
		
		AUltra_Dynamic_Weather_C_Update_DLWE_Parameters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Update DLWE Targets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               First_Run                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Weather_C::Update_DLWE_Targets(bool First_Run)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Update DLWE Targets");
		
		AUltra_Dynamic_Weather_C_Update_DLWE_Targets_Params params {};
		params.First_Run = First_Run;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Temperature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Celsius                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Fahrenheit                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Get_Current_Temperature(float* Celsius, float* Fahrenheit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Temperature");
		
		AUltra_Dynamic_Weather_C_Get_Current_Temperature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Celsius != nullptr)
			*Celsius = params.Celsius;
		if (Fahrenheit != nullptr)
			*Fahrenheit = params.Fahrenheit;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Filter Probability Map
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TMap<EUDS_WeatherTypes, float>                     Probability_Map                                            (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		EUDS_WeatherTypes                                  Current_Random_Type                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TMap<EUDS_WeatherTypes, float>                     Filtered_Probability_Map                                   (Parm, OutParm)
	 */
	void AUltra_Dynamic_Weather_C::Filter_Probability_Map(TMap<EUDS_WeatherTypes, float> Probability_Map, EUDS_WeatherTypes Current_Random_Type, TMap<EUDS_WeatherTypes, float>* Filtered_Probability_Map)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Filter Probability Map");
		
		AUltra_Dynamic_Weather_C_Filter_Probability_Map_Params params {};
		params.Probability_Map = Probability_Map;
		params.Current_Random_Type = Current_Random_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Filtered_Probability_Map != nullptr)
			*Filtered_Probability_Map = params.Filtered_Probability_Map;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ConstructionScript_Function
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Run_By_Counterpart                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Weather_C::ConstructionScript_Function(bool Run_By_Counterpart)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ConstructionScript_Function");
		
		AUltra_Dynamic_Weather_C_ConstructionScript_Function_Params params {};
		params.Run_By_Counterpart = Run_By_Counterpart;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Audio Update
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Audio_Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Audio Update");
		
		AUltra_Dynamic_Weather_C_Audio_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Material Effects
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Current_Material_Effects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Material Effects");
		
		AUltra_Dynamic_Weather_C_Update_Current_Material_Effects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Weather Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDS_WeatherTypes                                  Current_Weather_Type                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Get_Current_Weather_Type(EUDS_WeatherTypes* Current_Weather_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Weather Type");
		
		AUltra_Dynamic_Weather_C_Get_Current_Weather_Type_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Current_Weather_Type != nullptr)
			*Current_Weather_Type = params.Current_Weather_Type;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Weather Preset
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Apply_Weather_Preset()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Weather Preset");
		
		AUltra_Dynamic_Weather_C_Apply_Weather_Preset_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Print Current Status To Screen
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Print_Current_Status_To_Screen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Print Current Status To Screen");
		
		AUltra_Dynamic_Weather_C_Print_Current_Status_To_Screen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Static Variables
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Static_Variables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Static Variables");
		
		AUltra_Dynamic_Weather_C_Update_Static_Variables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Variables
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Active_Variables()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Variables");
		
		AUltra_Dynamic_Weather_C_Update_Active_Variables_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.UserConstructionScript
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::UserConstructionScript()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.UserConstructionScript");
		
		AUltra_Dynamic_Weather_C_UserConstructionScript_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Settings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Weather_Intensity                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Cloudiness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Wind_Intensity                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Snow                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time_To_Transition_To_New_Settings                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time_to_Hold_New_Settings                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time_to_Transition_Back_to_Random_Variation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reset_Particle_Emitters                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Weather_C::Change_Weather_Using_Settings(float Weather_Intensity, float Cloudiness, float Wind_Intensity, float Snow, float Time_To_Transition_To_New_Settings, float Time_to_Hold_New_Settings, float Time_to_Transition_Back_to_Random_Variation, bool Reset_Particle_Emitters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Settings");
		
		AUltra_Dynamic_Weather_C_Change_Weather_Using_Settings_Params params {};
		params.Weather_Intensity = Weather_Intensity;
		params.Cloudiness = Cloudiness;
		params.Wind_Intensity = Wind_Intensity;
		params.Snow = Snow;
		params.Time_To_Transition_To_New_Settings = Time_To_Transition_To_New_Settings;
		params.Time_to_Hold_New_Settings = Time_to_Hold_New_Settings;
		params.Time_to_Transition_Back_to_Random_Variation = Time_to_Transition_Back_to_Random_Variation;
		params.Reset_Particle_Emitters = Reset_Particle_Emitters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Type
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDS_WeatherTypes                                  New_Weather_Type                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time_To_Transition_To_New_Settings                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time_to_Hold_New_Settings                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Time_to_Transition_Back_to_Random_Variation                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Reset_Particle_Emitters                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void AUltra_Dynamic_Weather_C::Change_Weather_Using_Type(EUDS_WeatherTypes New_Weather_Type, float Time_To_Transition_To_New_Settings, float Time_to_Hold_New_Settings, float Time_to_Transition_Back_to_Random_Variation, bool Reset_Particle_Emitters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Type");
		
		AUltra_Dynamic_Weather_C_Change_Weather_Using_Type_Params params {};
		params.New_Weather_Type = New_Weather_Type;
		params.Time_To_Transition_To_New_Settings = Time_To_Transition_To_New_Settings;
		params.Time_to_Hold_New_Settings = Time_to_Hold_New_Settings;
		params.Time_to_Transition_Back_to_Random_Variation = Time_to_Transition_Back_to_Random_Variation;
		params.Reset_Particle_Emitters = Reset_Particle_Emitters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Client Weather Change
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Transition_State                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Start_Client_Weather_Change(int32_t Transition_State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Client Weather Change");
		
		AUltra_Dynamic_Weather_C_Start_Client_Weather_Change_Params params {};
		params.Transition_State = Transition_State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Reset All Emitters
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Reset_All_Emitters()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Reset All Emitters");
		
		AUltra_Dynamic_Weather_C_Reset_All_Emitters_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Current Season
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUDS_Season                                        Season                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Set_Current_Season(EUDS_Season Season)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Current Season");
		
		AUltra_Dynamic_Weather_C_Set_Current_Season_Params params {};
		params.Season = Season;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Cloud Coverage from UDS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Cloud_Coverage                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Update_Cloud_Coverage_from_UDS(float Cloud_Coverage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Cloud Coverage from UDS");
		
		AUltra_Dynamic_Weather_C_Update_Cloud_Coverage_from_UDS_Params params {};
		params.Cloud_Coverage = Cloud_Coverage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply State
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FUDS_and_UDW_State                          State                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Apply_State(const struct FUDS_and_UDW_State& State)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply State");
		
		AUltra_Dynamic_Weather_C_Apply_State_Params params {};
		params.State = State;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effects
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Update_Material_Effects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effects");
		
		AUltra_Dynamic_Weather_C_Update_Material_Effects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Timed Override with New Changes
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Timed_Override_with_New_Changes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Timed Override with New Changes");
		
		AUltra_Dynamic_Weather_C_Timed_Override_with_New_Changes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Use_Custom_Lightning_Location                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FVector                                     Custom_Lightning_Location                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Flash_Lightning(float Angle, bool Use_Custom_Lightning_Location, const struct FVector& Custom_Lightning_Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning");
		
		AUltra_Dynamic_Weather_C_Flash_Lightning_Params params {};
		params.Angle = Angle;
		params.Use_Custom_Lightning_Location = Use_Custom_Lightning_Location;
		params.Custom_Lightning_Location = Custom_Lightning_Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.End Lightning Flash
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::End_Lightning_Flash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.End Lightning Flash");
		
		AUltra_Dynamic_Weather_C_End_Lightning_Flash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Tick Lightning Flash
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Tick_Lightning_Flash()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Tick Lightning Flash");
		
		AUltra_Dynamic_Weather_C_Tick_Lightning_Flash_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning Local
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AWeather_Override_Volume_C*                  Volume                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Angle                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::Flash_Lightning_Local(class AWeather_Override_Volume_C* Volume, float Angle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning Local");
		
		AUltra_Dynamic_Weather_C_Flash_Lightning_Local_Params params {};
		params.Volume = Volume;
		params.Angle = Angle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveTick");
		
		AUltra_Dynamic_Weather_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force Tick
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Force_Tick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force Tick");
		
		AUltra_Dynamic_Weather_C_Force_Tick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Initialize_Weather()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather");
		
		AUltra_Dynamic_Weather_C_Initialize_Weather_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveEndPlay
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EEndPlayReason                                     EndPlayReason                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ReceiveEndPlay(EEndPlayReason EndPlayReason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveEndPlay");
		
		AUltra_Dynamic_Weather_C_ReceiveEndPlay_Params params {};
		params.EndPlayReason = EndPlayReason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ExecuteUbergraph_Ultra_Dynamic_Weather
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void AUltra_Dynamic_Weather_C::ExecuteUbergraph_Ultra_Dynamic_Weather(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ExecuteUbergraph_Ultra_Dynamic_Weather");
		
		AUltra_Dynamic_Weather_C_ExecuteUbergraph_Ultra_Dynamic_Weather_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clouds Clearing__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Clouds_Clearing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clouds Clearing__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_Clouds_Clearing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Getting Cloudy__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Getting_Cloudy__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Getting Cloudy__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_Getting_Cloudy__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Snowing__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Finished_Snowing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Snowing__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_Finished_Snowing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Raining__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Finished_Raining__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Raining__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_Finished_Raining__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Snowing__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Started_Snowing__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Snowing__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_Started_Snowing__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Raining__DelegateSignature
	 * 		Flags  -> ()
	 */
	void AUltra_Dynamic_Weather_C::Started_Raining__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Raining__DelegateSignature");
		
		AUltra_Dynamic_Weather_C_Started_Raining__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AUltra_Dynamic_Weather_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AUltra_Dynamic_Weather_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C");
		return ptr;
	}

}


