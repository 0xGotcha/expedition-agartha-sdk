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
	 * 		Name   -> PredefinedFunction UGE_water_healingFlask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_water_healingFlask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_water_healingFlask.GE_water_healingFlask_C");
		return ptr;
	}

}


