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
	 * 		Name   -> PredefinedFunction UGE_OvereatBuildup40_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_OvereatBuildup40_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_OvereatBuildup40.GE_OvereatBuildup40_C");
		return ptr;
	}

}


