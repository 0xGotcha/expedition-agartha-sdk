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
	 * 		Name   -> PredefinedFunction UGE_ResetStaminaHunger_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_ResetStaminaHunger_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_ResetStaminaHunger.GE_ResetStaminaHunger_C");
		return ptr;
	}

}


