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
	 * 		Name   -> PredefinedFunction UGE_ImmunityToBleed_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_ImmunityToBleed_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_ImmunityToBleed.GE_ImmunityToBleed_C");
		return ptr;
	}

}


