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
	 * 		Name   -> PredefinedFunction UAgarthaEffectUIData_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgarthaEffectUIData_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass AgarthaEffectUIData.AgarthaEffectUIData_C");
		return ptr;
	}

}


