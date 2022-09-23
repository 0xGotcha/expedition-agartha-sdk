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
	 * 		Name   -> Function W_TutorialText.W_TutorialText_C.DisplayTutorialText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        InText                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		int32_t                                            TutorialIndex                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TutorialText_C::DisplayTutorialText(const class FText& InText, int32_t TutorialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialText.W_TutorialText_C.DisplayTutorialText");
		
		UW_TutorialText_C_DisplayTutorialText_Params params {};
		params.InText = InText;
		params.TutorialIndex = TutorialIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialText.W_TutorialText_C.RemoveTutorialText
	 * 		Flags  -> ()
	 */
	void UW_TutorialText_C::RemoveTutorialText()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialText.W_TutorialText_C.RemoveTutorialText");
		
		UW_TutorialText_C_RemoveTutorialText_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialText.W_TutorialText_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_TutorialText_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialText.W_TutorialText_C.Construct");
		
		UW_TutorialText_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TutorialText.W_TutorialText_C.ExecuteUbergraph_W_TutorialText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TutorialText_C::ExecuteUbergraph_W_TutorialText(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TutorialText.W_TutorialText_C.ExecuteUbergraph_W_TutorialText");
		
		UW_TutorialText_C_ExecuteUbergraph_W_TutorialText_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_TutorialText_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_TutorialText_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TutorialText.W_TutorialText_C");
		return ptr;
	}

}


