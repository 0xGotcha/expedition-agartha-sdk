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
	 * 		Name   -> PredefinedFunction UUIInventoryDragOperation_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUIInventoryDragOperation_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass UIInventoryDragOperation.UIInventoryDragOperation_C");
		return ptr;
	}

}


