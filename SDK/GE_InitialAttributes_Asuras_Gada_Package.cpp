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
	 * 		Name   -> PredefinedFunction UGE_InitialAttributes_Asuras_Gada_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGE_InitialAttributes_Asuras_Gada_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GE_InitialAttributes_Asuras_Gada.GE_InitialAttributes_Asuras_Gada_C");
		return ptr;
	}

}


