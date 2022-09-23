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
	 * 		Name   -> Function W_StatusBar.W_StatusBar_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_StatusBar_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusBar.W_StatusBar_C.Construct");
		
		UW_StatusBar_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusBar.W_StatusBar_C.Populate
	 * 		Flags  -> ()
	 */
	void UW_StatusBar_C::Populate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusBar.W_StatusBar_C.Populate");
		
		UW_StatusBar_C_Populate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusBar.W_StatusBar_C.Effect Expired
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 Effect_Handle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_StatusItem_C*                             Status_Item                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StatusBar_C::Effect_Expired(const struct FActiveGameplayEffectHandle& Effect_Handle, class UW_StatusItem_C* Status_Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusBar.W_StatusBar_C.Effect Expired");
		
		UW_StatusBar_C_Effect_Expired_Params params {};
		params.Effect_Handle = Effect_Handle;
		params.Status_Item = Status_Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusBar.W_StatusBar_C.Refresh Effects
	 * 		Flags  -> ()
	 */
	void UW_StatusBar_C::Refresh_Effects()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusBar.W_StatusBar_C.Refresh Effects");
		
		UW_StatusBar_C_Refresh_Effects_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusBar.W_StatusBar_C.ExecuteUbergraph_W_StatusBar
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StatusBar_C::ExecuteUbergraph_W_StatusBar(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusBar.W_StatusBar_C.ExecuteUbergraph_W_StatusBar");
		
		UW_StatusBar_C_ExecuteUbergraph_W_StatusBar_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_StatusBar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_StatusBar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_StatusBar.W_StatusBar_C");
		return ptr;
	}

}


