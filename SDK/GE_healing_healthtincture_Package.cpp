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
	 * 		Name   -> PredefinedFunction UGE_healing_healthtincture_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_healing_healthtincture_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_healing_healthtincture.GE_healing_healthtincture_C");
		return ptr;
	}

}


