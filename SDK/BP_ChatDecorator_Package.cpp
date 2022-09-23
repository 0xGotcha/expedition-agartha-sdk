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
	 * 		Name   -> PredefinedFunction UBP_ChatDecorator_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBP_ChatDecorator_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_ChatDecorator.BP_ChatDecorator_C");
		return ptr;
	}

}


