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
	 * Function W_PlayerHUD_HitMarkers.W_PlayerHUD_HitMarkers_C.StartHitmarker
	 */
	struct UW_PlayerHUD_HitMarkers_C_StartHitmarker_Params
	{
	public:
		class UObject*                                             In_Brush_Image;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_PlayerHUD_HitMarkers.W_PlayerHUD_HitMarkers_C.ExecuteUbergraph_W_PlayerHUD_HitMarkers
	 */
	struct UW_PlayerHUD_HitMarkers_C_ExecuteUbergraph_W_PlayerHUD_HitMarkers_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IUEQ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
