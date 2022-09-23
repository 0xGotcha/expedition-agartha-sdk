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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass Ultra_Dynamic_Weather_Interface.Ultra_Dynamic_Weather_Interface_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUltra_Dynamic_Weather_Interface_C : public UInterface
	{
	public:
		void Update_Material_Effects();
		void Apply_State(const struct FUDS_and_UDW_State& State);
		void Get_State_for_Saving(struct FUDS_and_UDW_State* UDW_State);
		void Get_Intended_Cloud_Direction(float* Intended_Cloud_Direction);
		void Get_Intended_Cloud_Speed(float* Intended_Cloud_Speed);
		void Update_Cloud_Coverage_from_UDS(float Cloud_Coverage);
		void Initialize_Weather();
		void Set_Current_Season(EUDS_Season Season);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
