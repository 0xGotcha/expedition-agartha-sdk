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
	 * 		Name   -> PredefinedFunction UGE_Cooldown_Dodge_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Cooldown_Dodge_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Cooldown_Dodge.GE_Cooldown_Dodge_C");
		return ptr;
	}

}


