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
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Material Effects
	 */
	struct UUltra_Dynamic_Weather_Interface_C_Update_Material_Effects_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Apply State
	 */
	struct UUltra_Dynamic_Weather_Interface_C_Apply_State_Params
	{
	public:
		struct FUDS_and_UDW_State                                  State;                                                   // 0x0000(0x00D8)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get State for Saving
	 */
	struct UUltra_Dynamic_Weather_Interface_C_Get_State_for_Saving_Params
	{
	public:
		struct FUDS_and_UDW_State                                  UDW_State;                                               // 0x0000(0x00D8)  (Parm, OutParm, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Direction
	 */
	struct UUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Direction_Params
	{
	public:
		float                                                      Intended_Cloud_Direction;                                // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Get Intended Cloud Speed
	 */
	struct UUltra_Dynamic_Weather_Interface_C_Get_Intended_Cloud_Speed_Params
	{
	public:
		float                                                      Intended_Cloud_Speed;                                    // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Update Cloud Coverage from UDS
	 */
	struct UUltra_Dynamic_Weather_Interface_C_Update_Cloud_Coverage_from_UDS_Params
	{
	public:
		float                                                      Cloud_Coverage;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Initialize Weather
	 */
	struct UUltra_Dynamic_Weather_Interface_C_Initialize_Weather_Params
	{	};

	/**
	 * Function Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C.Set Current Season
	 */
	struct UUltra_Dynamic_Weather_Interface_C_Set_Current_Season_Params
	{
	public:
		EUDS_Season                                                Season;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
