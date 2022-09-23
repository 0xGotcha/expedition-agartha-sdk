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
	 * 		Name   -> Function W_TacticalKey.W_TacticalKey_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_TacticalKey_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TacticalKey.W_TacticalKey_C.Construct");
		
		UW_TacticalKey_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_TacticalKey.W_TacticalKey_C.ExecuteUbergraph_W_TacticalKey
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_TacticalKey_C::ExecuteUbergraph_W_TacticalKey(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_TacticalKey.W_TacticalKey_C.ExecuteUbergraph_W_TacticalKey");
		
		UW_TacticalKey_C_ExecuteUbergraph_W_TacticalKey_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_TacticalKey_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_TacticalKey_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_TacticalKey.W_TacticalKey_C");
		return ptr;
	}

}


