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
	 * 		Name   -> PredefinedFunction UHitDamageStructure_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHitDamageStructure_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass HitDamageStructure.HitDamageStructure_C");
		return ptr;
	}

}


