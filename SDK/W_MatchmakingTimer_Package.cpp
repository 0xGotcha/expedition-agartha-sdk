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
	 * 		Name   -> PredefinedFunction UW_MatchmakingTimer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MatchmakingTimer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MatchmakingTimer.W_MatchmakingTimer_C");
		return ptr;
	}

}


