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
	 * 		Name   -> PredefinedFunction UGE_ToxicityBuildup30_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_ToxicityBuildup30_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_ToxicityBuildup30.GE_ToxicityBuildup30_C");
		return ptr;
	}

}


