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
	 * 		Name   -> Function BP_PlayerStatsScreenCam.BP_PlayerStatsScreenCam_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PlayerStatsScreenCam_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsScreenCam.BP_PlayerStatsScreenCam_C.ReceiveBeginPlay");
		
		ABP_PlayerStatsScreenCam_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerStatsScreenCam.BP_PlayerStatsScreenCam_C.StartCapturing
	 * 		Flags  -> ()
	 */
	void ABP_PlayerStatsScreenCam_C::StartCapturing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsScreenCam.BP_PlayerStatsScreenCam_C.StartCapturing");
		
		ABP_PlayerStatsScreenCam_C_StartCapturing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerStatsScreenCam.BP_PlayerStatsScreenCam_C.StopCapturing
	 * 		Flags  -> ()
	 */
	void ABP_PlayerStatsScreenCam_C::StopCapturing()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsScreenCam.BP_PlayerStatsScreenCam_C.StopCapturing");
		
		ABP_PlayerStatsScreenCam_C_StopCapturing_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PlayerStatsScreenCam.BP_PlayerStatsScreenCam_C.ExecuteUbergraph_BP_PlayerStatsScreenCam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PlayerStatsScreenCam_C::ExecuteUbergraph_BP_PlayerStatsScreenCam(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PlayerStatsScreenCam.BP_PlayerStatsScreenCam_C.ExecuteUbergraph_BP_PlayerStatsScreenCam");
		
		ABP_PlayerStatsScreenCam_C_ExecuteUbergraph_BP_PlayerStatsScreenCam_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PlayerStatsScreenCam_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PlayerStatsScreenCam_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PlayerStatsScreenCam.BP_PlayerStatsScreenCam_C");
		return ptr;
	}

}


