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
	 * 		Name   -> PredefinedFunction UGE_Speed_Aim_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Speed_Aim_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Speed_Aim.GE_Speed_Aim_C");
		return ptr;
	}

}


