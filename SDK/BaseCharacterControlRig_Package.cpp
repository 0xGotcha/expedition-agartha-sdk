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
	 * 		Name   -> PredefinedFunction UBaseCharacterControlRig_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBaseCharacterControlRig_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("ControlRigBlueprintGeneratedClass BaseCharacterControlRig.BaseCharacterControlRig_C");
		return ptr;
	}

}


