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
	 * 		Name   -> Function W_KeyMappingDivider.W_KeyMappingDivider_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_KeyMappingDivider_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingDivider.W_KeyMappingDivider_C.Construct");
		
		UW_KeyMappingDivider_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMappingDivider.W_KeyMappingDivider_C.Set Confilicted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Conflicted                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_KeyMappingDivider_C::Set_Confilicted(bool Conflicted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingDivider.W_KeyMappingDivider_C.Set Confilicted");
		
		UW_KeyMappingDivider_C_Set_Confilicted_Params params {};
		params.Conflicted = Conflicted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_KeyMappingDivider.W_KeyMappingDivider_C.ExecuteUbergraph_W_KeyMappingDivider
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_KeyMappingDivider_C::ExecuteUbergraph_W_KeyMappingDivider(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_KeyMappingDivider.W_KeyMappingDivider_C.ExecuteUbergraph_W_KeyMappingDivider");
		
		UW_KeyMappingDivider_C_ExecuteUbergraph_W_KeyMappingDivider_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_KeyMappingDivider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_KeyMappingDivider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_KeyMappingDivider.W_KeyMappingDivider_C");
		return ptr;
	}

}


