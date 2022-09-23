#pragma once

/**
 * Name: Agartha
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get State for Saving
	 */
	struct AUltra_Dynamic_Weather_C_Get_State_for_Saving_Params
	{
	public:
		struct FUDS_and_UDW_State                                  UDW_State;                                               // 0x0000(0x00D8)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Direction
	 */
	struct AUltra_Dynamic_Weather_C_Get_Intended_Cloud_Direction_Params
	{
	public:
		float                                                      Intended_Cloud_Direction;                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Intended Cloud Speed
	 */
	struct AUltra_Dynamic_Weather_C_Get_Intended_Cloud_Speed_Params
	{
	public:
		float                                                      Intended_Cloud_Speed;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Limit Global Weather Intensity
	 */
	struct AUltra_Dynamic_Weather_C_Limit_Global_Weather_Intensity_Params
	{
	public:
		bool                                                       Invert;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_J0JP[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Sort Weather Override Volumes
	 */
	struct AUltra_Dynamic_Weather_C_Sort_Weather_Override_Volumes_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Niagara Systems
	 */
	struct AUltra_Dynamic_Weather_C_Update_Active_Niagara_Systems_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Screen Droplets
	 */
	struct AUltra_Dynamic_Weather_C_Update_Screen_Droplets_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Screen Droplets
	 */
	struct AUltra_Dynamic_Weather_C_Start_Screen_Droplets_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Trigger Initial Event Dispatchers
	 */
	struct AUltra_Dynamic_Weather_C_Trigger_Initial_Event_Dispatchers_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for Events to Dispatch
	 */
	struct AUltra_Dynamic_Weather_C_Check_for_Events_to_Dispatch_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Test Actor for Weather Exposure
	 */
	struct AUltra_Dynamic_Weather_C_Test_Actor_for_Weather_Exposure_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Test_Colliding_Components_Only;                          // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_334S[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Rain_Exposure;                                           // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Snow_Exposure;                                           // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Wind_Exposure;                                           // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Wind Direction
	 */
	struct AUltra_Dynamic_Weather_C_Update_Wind_Direction_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Audio Component Activity
	 */
	struct AUltra_Dynamic_Weather_C_Update_Audio_Component_Activity_Params
	{
	public:
		class UAudioComponent*                                     Tested_Component;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<class UAudioComponent*>                             Affected_Components;                                     // 0x0008(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
		float                                                      Current_Sound_Intensity;                                 // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Start_Randomization;                                     // 0x001C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Enabled Sound Components
	 */
	struct AUltra_Dynamic_Weather_C_Update_Enabled_Sound_Components_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Post Process Wind Fog
	 */
	struct AUltra_Dynamic_Weather_C_Update_Post_Process_Wind_Fog_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set up Post Process Wind Fog
	 */
	struct AUltra_Dynamic_Weather_C_Set_up_Post_Process_Wind_Fog_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Occlusion Profile
	 */
	struct AUltra_Dynamic_Weather_C_Update_Current_Occlusion_Profile_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Target Occlusion Profile
	 */
	struct AUltra_Dynamic_Weather_C_Update_Target_Occlusion_Profile_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update New Settings
	 */
	struct AUltra_Dynamic_Weather_C_Update_New_Settings_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Current Lightning Period and Status
	 */
	struct AUltra_Dynamic_Weather_C_Current_Lightning_Period_and_Status_Params
	{
	public:
		float                                                      Weather_Intensity;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Cloud_Coverage;                                          // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Snow_Percentage;                                         // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Override;                                                // 0x000C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_6ACH[0x3];                                   // 0x000D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Period;                                                  // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Enabled;                                                 // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Weather Preset
	 */
	struct AUltra_Dynamic_Weather_C_Get_Weather_Preset_Params
	{
	public:
		EUDS_WeatherTypes                                          Preset;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_P3IV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Weather_Intensity;                                       // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Cloud_Coverage;                                          // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Snow;                                                    // 0x000C(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Wind_Intensity;                                          // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Material_Wetness;                                        // 0x0014(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Material_Snow;                                           // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effect Parameters
	 */
	struct AUltra_Dynamic_Weather_C_Update_Material_Effect_Parameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Limit Current Weather Intensity
	 */
	struct AUltra_Dynamic_Weather_C_Limit_Current_Weather_Intensity_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Updated Control Point Location
	 */
	struct AUltra_Dynamic_Weather_C_Get_Updated_Control_Point_Location_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Local Weather
	 */
	struct AUltra_Dynamic_Weather_C_Local_Weather_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check Point for Puddles or Snow
	 */
	struct AUltra_Dynamic_Weather_C_Check_Point_for_Puddles_or_Snow_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Ground_Normal;                                           // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPhysicalMaterial*                                   Physical_Material;                                       // 0x0018(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Puddle_Depth;                                            // 0x0020(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Snow_Depth;                                              // 0x0024(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Create Cloud Reference Array
	 */
	struct AUltra_Dynamic_Weather_C_Create_Cloud_Reference_Array_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recycle Render Targets
	 */
	struct AUltra_Dynamic_Weather_C_Recycle_Render_Targets_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Puddle Ripples
	 */
	struct AUltra_Dynamic_Weather_C_Update_DLWE_Puddle_Ripples_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Ripple DLWE Puddle
	 */
	struct AUltra_Dynamic_Weather_C_Ripple_DLWE_Puddle_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Size;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Strength;                                                // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check to change DLWE Mode
	 */
	struct AUltra_Dynamic_Weather_C_Check_to_change_DLWE_Mode_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Recenter DLWE Render Target
	 */
	struct AUltra_Dynamic_Weather_C_Recenter_DLWE_Render_Target_Params
	{
	public:
		class UTextureRenderTarget2D*                              Render_Target;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		ETextureRenderTargetFormat                                 Format;                                                  // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6JR5[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FLinearColor                                        Clear_Color;                                             // 0x000C(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_QSRQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UMaterialInterface*                                  EdgeFade_Material;                                       // 0x0020(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Fade DLWE Target Over Time
	 */
	struct AUltra_Dynamic_Weather_C_Fade_DLWE_Target_Over_Time_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Snow Compressions
	 */
	struct AUltra_Dynamic_Weather_C_Update_DLWE_Snow_Compressions_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Compress DLWE Snow
	 */
	struct AUltra_Dynamic_Weather_C_Compress_DLWE_Snow_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Size;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Check for DLWE Recenter
	 */
	struct AUltra_Dynamic_Weather_C_Check_for_DLWE_Recenter_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update DLWE Parameters
	 */
	struct AUltra_Dynamic_Weather_C_Update_DLWE_Parameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C. Update DLWE Targets
	 */
	struct AUltra_Dynamic_Weather_C_Update_DLWE_Targets_Params
	{
	public:
		bool                                                       First_Run;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_SYQ7[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Temperature
	 */
	struct AUltra_Dynamic_Weather_C_Get_Current_Temperature_Params
	{
	public:
		float                                                      Celsius;                                                 // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Fahrenheit;                                              // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Filter Probability Map
	 */
	struct AUltra_Dynamic_Weather_C_Filter_Probability_Map_Params
	{
	public:
		TMap<EUDS_WeatherTypes, float>                             Probability_Map;                                         // 0x0000(0x0050)  (BlueprintVisible, BlueprintReadOnly, Parm)
		EUDS_WeatherTypes                                          Current_Random_Type;                                     // 0x0050(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_AX4U[0x7];                                   // 0x0051(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TMap<EUDS_WeatherTypes, float>                             Filtered_Probability_Map;                                // 0x0058(0x0050)  (Parm, OutParm)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ConstructionScript_Function
	 */
	struct AUltra_Dynamic_Weather_C_ConstructionScript_Function_Params
	{
	public:
		bool                                                       Run_By_Counterpart;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Audio Update
	 */
	struct AUltra_Dynamic_Weather_C_Audio_Update_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Current Material Effects
	 */
	struct AUltra_Dynamic_Weather_C_Update_Current_Material_Effects_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Get Current Weather Type
	 */
	struct AUltra_Dynamic_Weather_C_Get_Current_Weather_Type_Params
	{
	public:
		EUDS_WeatherTypes                                          Current_Weather_Type;                                    // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply Weather Preset
	 */
	struct AUltra_Dynamic_Weather_C_Apply_Weather_Preset_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Print Current Status To Screen
	 */
	struct AUltra_Dynamic_Weather_C_Print_Current_Status_To_Screen_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Static Variables
	 */
	struct AUltra_Dynamic_Weather_C_Update_Static_Variables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Active Variables
	 */
	struct AUltra_Dynamic_Weather_C_Update_Active_Variables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.UserConstructionScript
	 */
	struct AUltra_Dynamic_Weather_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Settings
	 */
	struct AUltra_Dynamic_Weather_C_Change_Weather_Using_Settings_Params
	{
	public:
		float                                                      Weather_Intensity;                                       // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Cloudiness;                                              // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Wind_Intensity;                                          // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Snow;                                                    // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time_To_Transition_To_New_Settings;                      // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time_to_Hold_New_Settings;                               // 0x0014(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time_to_Transition_Back_to_Random_Variation;             // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reset_Particle_Emitters;                                 // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Change Weather Using Type
	 */
	struct AUltra_Dynamic_Weather_C_Change_Weather_Using_Type_Params
	{
	public:
		EUDS_WeatherTypes                                          New_Weather_Type;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KSNT[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Time_To_Transition_To_New_Settings;                      // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time_to_Hold_New_Settings;                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time_to_Transition_Back_to_Random_Variation;             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Reset_Particle_Emitters;                                 // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Start Client Weather Change
	 */
	struct AUltra_Dynamic_Weather_C_Start_Client_Weather_Change_Params
	{
	public:
		int32_t                                                    Transition_State;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Reset All Emitters
	 */
	struct AUltra_Dynamic_Weather_C_Reset_All_Emitters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Set Current Season
	 */
	struct AUltra_Dynamic_Weather_C_Set_Current_Season_Params
	{
	public:
		EUDS_Season                                                Season;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Cloud Coverage from UDS
	 */
	struct AUltra_Dynamic_Weather_C_Update_Cloud_Coverage_from_UDS_Params
	{
	public:
		float                                                      Cloud_Coverage;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Apply State
	 */
	struct AUltra_Dynamic_Weather_C_Apply_State_Params
	{
	public:
		struct FUDS_and_UDW_State                                  State;                                                   // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Update Material Effects
	 */
	struct AUltra_Dynamic_Weather_C_Update_Material_Effects_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Timed Override with New Changes
	 */
	struct AUltra_Dynamic_Weather_C_Timed_Override_with_New_Changes_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning
	 */
	struct AUltra_Dynamic_Weather_C_Flash_Lightning_Params
	{
	public:
		float                                                      Angle;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Use_Custom_Lightning_Location;                           // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VYCB[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Custom_Lightning_Location;                               // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.End Lightning Flash
	 */
	struct AUltra_Dynamic_Weather_C_End_Lightning_Flash_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Tick Lightning Flash
	 */
	struct AUltra_Dynamic_Weather_C_Tick_Lightning_Flash_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Flash Lightning Local
	 */
	struct AUltra_Dynamic_Weather_C_Flash_Lightning_Local_Params
	{
	public:
		class AWeather_Override_Volume_C*                          Volume;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Angle;                                                   // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveTick
	 */
	struct AUltra_Dynamic_Weather_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Force Tick
	 */
	struct AUltra_Dynamic_Weather_C_Force_Tick_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Initialize Weather
	 */
	struct AUltra_Dynamic_Weather_C_Initialize_Weather_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ReceiveEndPlay
	 */
	struct AUltra_Dynamic_Weather_C_ReceiveEndPlay_Params
	{
	public:
		EEndPlayReason                                             EndPlayReason;                                           // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.ExecuteUbergraph_Ultra_Dynamic_Weather
	 */
	struct AUltra_Dynamic_Weather_C_ExecuteUbergraph_Ultra_Dynamic_Weather_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Clouds Clearing__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_Clouds_Clearing__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Getting Cloudy__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_Getting_Cloudy__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Snowing__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_Finished_Snowing__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Finished Raining__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_Finished_Raining__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Snowing__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_Started_Snowing__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather.Ultra_Dynamic_Weather_C.Started Raining__DelegateSignature
	 */
	struct AUltra_Dynamic_Weather_C_Started_Raining__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
