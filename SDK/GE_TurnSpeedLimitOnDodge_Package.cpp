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
	 * 		Name   -> PredefinedFunction UGE_TurnSpeedLimitOnDodge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_TurnSpeedLimitOnDodge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_TurnSpeedLimitOnDodge.GE_TurnSpeedLimitOnDodge_C");
		return ptr;
	}

}


