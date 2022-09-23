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
	 * 		Name   -> Function W_ItemDescriptionInformation.W_ItemDescriptionInformation_C.SetText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_ItemDescriptionInformation_C::SetText(const class FText& Text)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemDescriptionInformation.W_ItemDescriptionInformation_C.SetText");
		
		UW_ItemDescriptionInformation_C_SetText_Params params {};
		params.Text = Text;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ItemDescriptionInformation.W_ItemDescriptionInformation_C.ExecuteUbergraph_W_ItemDescriptionInformation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ItemDescriptionInformation_C::ExecuteUbergraph_W_ItemDescriptionInformation(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ItemDescriptionInformation.W_ItemDescriptionInformation_C.ExecuteUbergraph_W_ItemDescriptionInformation");
		
		UW_ItemDescriptionInformation_C_ExecuteUbergraph_W_ItemDescriptionInformation_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ItemDescriptionInformation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ItemDescriptionInformation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ItemDescriptionInformation.W_ItemDescriptionInformation_C");
		return ptr;
	}

}


