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
	 * 		Name   -> Function W_ChatTextPiece.W_ChatTextPiece_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ChatTextPiece_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatTextPiece.W_ChatTextPiece_C.Construct");
		
		UW_ChatTextPiece_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ChatTextPiece.W_ChatTextPiece_C.ExecuteUbergraph_W_ChatTextPiece
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ChatTextPiece_C::ExecuteUbergraph_W_ChatTextPiece(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatTextPiece.W_ChatTextPiece_C.ExecuteUbergraph_W_ChatTextPiece");
		
		UW_ChatTextPiece_C_ExecuteUbergraph_W_ChatTextPiece_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ChatTextPiece_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ChatTextPiece_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ChatTextPiece.W_ChatTextPiece_C");
		return ptr;
	}

}


