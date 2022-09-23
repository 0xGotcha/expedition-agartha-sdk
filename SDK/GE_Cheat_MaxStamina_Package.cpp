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
	 * 		Name   -> PredefinedFunction UGE_Cheat_MaxStamina_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Cheat_MaxStamina_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Cheat_MaxStamina.GE_Cheat_MaxStamina_C");
		return ptr;
	}

}


