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
	 * 		Name   -> PredefinedFunction UOneFrameTask_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOneFrameTask_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass OneFrameTask.OneFrameTask_C");
		return ptr;
	}

}


