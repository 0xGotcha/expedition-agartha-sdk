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
	 * 		Name   -> Function W_TooltipUpgrade.W_TooltipUpgrade_C.SetSlotInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isFilled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		class FText                                        FilledText                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_TooltipUpgrade_C::SetSlotInfo(bool isFilled, const class FText& FilledText)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TooltipUpgrade.W_TooltipUpgrade_C.SetSlotInfo");
		
		UW_TooltipUpgrade_C_SetSlotInfo_Params params {};
		params.isFilled = isFilled;
		params.FilledText = FilledText;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_TooltipUpgrade_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_TooltipUpgrade_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TooltipUpgrade.W_TooltipUpgrade_C");
		return ptr;
	}

}


