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
	 * 		Name   -> PredefinedFunction UGE_Stun_Kick_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_Stun_Kick_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_Stun_Kick.GE_Stun_Kick_C");
		return ptr;
	}

}


