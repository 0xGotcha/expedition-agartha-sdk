﻿/**
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
	 * 		Name   -> PredefinedFunction UGE_StaminaCost_Jump_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_StaminaCost_Jump_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_StaminaCost_Jump.GE_StaminaCost_Jump_C");
		return ptr;
	}

}


