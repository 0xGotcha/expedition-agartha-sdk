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
	 * 		Name   -> PredefinedFunction UGE_ToxicityBuildup50_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_ToxicityBuildup50_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_ToxicityBuildup50.GE_ToxicityBuildup50_C");
		return ptr;
	}

}


