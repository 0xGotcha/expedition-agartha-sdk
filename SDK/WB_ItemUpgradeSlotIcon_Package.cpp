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
	 * 		Name   -> Function WB_ItemUpgradeSlotIcon.WB_ItemUpgradeSlotIcon_C.SetSlotFilled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               isFilled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UWB_ItemUpgradeSlotIcon_C::SetSlotFilled(bool isFilled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function WB_ItemUpgradeSlotIcon.WB_ItemUpgradeSlotIcon_C.SetSlotFilled");
		
		UWB_ItemUpgradeSlotIcon_C_SetSlotFilled_Params params {};
		params.isFilled = isFilled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UWB_ItemUpgradeSlotIcon_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UWB_ItemUpgradeSlotIcon_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WB_ItemUpgradeSlotIcon.WB_ItemUpgradeSlotIcon_C");
		return ptr;
	}

}


