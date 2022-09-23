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
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Dynamic Sky Light Multiplier
	 */
	struct AUltra_Dynamic_Sky_C_Update_Dynamic_Sky_Light_Multiplier_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Transition Sky Light Intensity
	 */
	struct AUltra_Dynamic_Sky_C_Transition_Sky_Light_Intensity_Params
	{
	public:
		float                                                      New_Sky_Light_Intensity_Multiplier;                      // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Transition_Time;                                         // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lens Flare
	 */
	struct AUltra_Dynamic_Sky_C_Update_Lens_Flare_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Up Lens Flare
	 */
	struct AUltra_Dynamic_Sky_C_Set_Up_Lens_Flare_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Volumetric Mode
	 */
	struct AUltra_Dynamic_Sky_C_Apply_Volumetric_Mode_Params
	{
	public:
		EUDS_VolRT_Mode                                            Mode;                                                    // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Moon Parameters
	 */
	struct AUltra_Dynamic_Sky_C_Update_Moon_Parameters_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise Times
	 */
	struct AUltra_Dynamic_Sky_C_Sunrise_Times_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Apply Saved UDS and UDW State
	 */
	struct AUltra_Dynamic_Sky_C_Apply_Saved_UDS_and_UDW_State_Params
	{
	public:
		struct FUDS_and_UDW_State                                  State;                                                   // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Create UDS and UDW State for Saving
	 */
	struct AUltra_Dynamic_Sky_C_Create_UDS_and_UDW_State_for_Saving_Params
	{
	public:
		struct FUDS_and_UDW_State                                  Packaged_State;                                          // 0x0000(0x00D8)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Current Volumetric Clouds MID
	 */
	struct AUltra_Dynamic_Sky_C_Update_Current_Volumetric_Clouds_MID_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated Time
	 */
	struct AUltra_Dynamic_Sky_C_Update_Replicated_Time_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Clouds
	 */
	struct AUltra_Dynamic_Sky_C_Update_Static_Clouds_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.OnRep_Replicated Time of Day
	 */
	struct AUltra_Dynamic_Sky_C_OnRep_Replicated_Time_of_Day_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Current Date and Time
	 */
	struct AUltra_Dynamic_Sky_C_Get_Current_Date_and_Time_Params
	{
	public:
		struct FDateTime                                           Current_Date_and_Time;                                   // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Check for Daylight Savings Time
	 */
	struct AUltra_Dynamic_Sky_C_Check_for_Daylight_Savings_Time_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Increment Day
	 */
	struct AUltra_Dynamic_Sky_C_Increment_Day_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Force Valid Day
	 */
	struct AUltra_Dynamic_Sky_C_Force_Valid_Day_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Approximate Real Sun Moon and Stars
	 */
	struct AUltra_Dynamic_Sky_C_Approximate_Real_Sun_Moon_and_Stars_Params
	{
	public:
		int32_t                                                    Month;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Day;                                                     // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Year;                                                    // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time_of_Day;                                             // 0x000C(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Time_Zone;                                               // 0x0010(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Only_Calculate_Sun;                                      // 0x0014(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_CAVK[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector                                             Sun_Vector;                                              // 0x0018(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Moon_Vector;                                             // 0x0024(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Real_Phase;                                              // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Phase_Alignment;                                         // 0x0034(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Celestial_Orbit;                                         // 0x0040(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FLinearColor                                        Celestial_Yaw;                                           // 0x0044(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Date and Time
	 */
	struct AUltra_Dynamic_Sky_C_Set_Date_and_Time_Params
	{
	public:
		struct FDateTime                                           Date_Time;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Directional Lights
	 */
	struct AUltra_Dynamic_Sky_C_Update_Directional_Lights_Params
	{
	public:
		bool                                                       Move_Static_Lights;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Recapture_SkyLight
	 */
	struct AUltra_Dynamic_Sky_C_Recapture_SkyLight_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Change Settings Based on Platform and Scalability
	 */
	struct AUltra_Dynamic_Sky_C_Change_Settings_Based_on_Platform_and_Scalability_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Variables Controlled by Weather
	 */
	struct AUltra_Dynamic_Sky_C_Update_Variables_Controlled_by_Weather_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Construction Script Function
	 */
	struct AUltra_Dynamic_Sky_C_Construction_Script_Function_Params
	{
	public:
		bool                                                       Run_By_Counterpart;                                      // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Cloud Timing
	 */
	struct AUltra_Dynamic_Sky_C_Set_Cloud_Timing_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Static Variables
	 */
	struct AUltra_Dynamic_Sky_C_Update_Static_Variables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Time of Day using Time Code
	 */
	struct AUltra_Dynamic_Sky_C_Set_Time_of_Day_using_Time_Code_Params
	{
	public:
		struct FTimecode                                           Time_Code;                                               // 0x0000(0x0014)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Get Time of Day in Real Time Format
	 */
	struct AUltra_Dynamic_Sky_C_Get_Time_of_Day_in_Real_Time_Format_Params
	{
	public:
		struct FTimecode                                           Time;                                                    // 0x0000(0x0014)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Active Variables
	 */
	struct AUltra_Dynamic_Sky_C_Update_Active_Variables_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Set Sun and Moon Root Rotation
	 */
	struct AUltra_Dynamic_Sky_C_Set_Sun_and_Moon_Root_Rotation_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.UserConstructionScript
	 */
	struct AUltra_Dynamic_Sky_C_UserConstructionScript_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveTick
	 */
	struct AUltra_Dynamic_Sky_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ReceiveBeginPlay
	 */
	struct AUltra_Dynamic_Sky_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Day Ended
	 */
	struct AUltra_Dynamic_Sky_C_Day_Ended_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Lights
	 */
	struct AUltra_Dynamic_Sky_C_Update_Lights_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Restart Inside Cloud Fog
	 */
	struct AUltra_Dynamic_Sky_C_Restart_Inside_Cloud_Fog_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Update Replicated ToD
	 */
	struct AUltra_Dynamic_Sky_C_Update_Replicated_ToD_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.ExecuteUbergraph_Ultra_Dynamic_Sky
	 */
	struct AUltra_Dynamic_Sky_C_ExecuteUbergraph_Ultra_Dynamic_Sky_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Evening__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_C_Evening__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Midnight__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_C_Midnight__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunrise__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_C_Sunrise__DelegateSignature_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Sky.Ultra_Dynamic_Sky_C.Sunset__DelegateSignature
	 */
	struct AUltra_Dynamic_Sky_C_Sunset__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
