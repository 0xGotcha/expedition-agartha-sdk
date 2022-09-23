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
	 * 		Name   -> PredefinedFunction UGE_food_cleanWater_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_food_cleanWater_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_food_cleanWater.GE_food_cleanWater_C");
		return ptr;
	}

}


