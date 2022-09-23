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
	 * 		Name   -> Function W_PlayerHUD_HitMarkers.W_PlayerHUD_HitMarkers_C.StartHitmarker
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     In_Brush_Image                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerHUD_HitMarkers_C::StartHitmarker(class UObject* In_Brush_Image)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_HitMarkers.W_PlayerHUD_HitMarkers_C.StartHitmarker");
		
		UW_PlayerHUD_HitMarkers_C_StartHitmarker_Params params {};
		params.In_Brush_Image = In_Brush_Image;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_PlayerHUD_HitMarkers.W_PlayerHUD_HitMarkers_C.ExecuteUbergraph_W_PlayerHUD_HitMarkers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_PlayerHUD_HitMarkers_C::ExecuteUbergraph_W_PlayerHUD_HitMarkers(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_PlayerHUD_HitMarkers.W_PlayerHUD_HitMarkers_C.ExecuteUbergraph_W_PlayerHUD_HitMarkers");
		
		UW_PlayerHUD_HitMarkers_C_ExecuteUbergraph_W_PlayerHUD_HitMarkers_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_PlayerHUD_HitMarkers_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_PlayerHUD_HitMarkers_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_PlayerHUD_HitMarkers.W_PlayerHUD_HitMarkers_C");
		return ptr;
	}

}


