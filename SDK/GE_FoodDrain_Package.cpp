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
	 * 		Name   -> PredefinedFunction UGE_FoodDrain_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_FoodDrain_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_FoodDrain.GE_FoodDrain_C");
		return ptr;
	}

}


