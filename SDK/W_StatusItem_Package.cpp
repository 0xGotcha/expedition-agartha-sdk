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
	 * 		Name   -> Function W_StatusItem.W_StatusItem_C.OnLoaded_6603235F4549A02ECBBDD38F5EE11FBD
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StatusItem_C::OnLoaded_6603235F4549A02ECBBDD38F5EE11FBD(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusItem.W_StatusItem_C.OnLoaded_6603235F4549A02ECBBDD38F5EE11FBD");
		
		UW_StatusItem_C_OnLoaded_6603235F4549A02ECBBDD38F5EE11FBD_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusItem.W_StatusItem_C.Update Duration Remaining
	 * 		Flags  -> ()
	 */
	void UW_StatusItem_C::Update_Duration_Remaining()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusItem.W_StatusItem_C.Update Duration Remaining");
		
		UW_StatusItem_C_Update_Duration_Remaining_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusItem.W_StatusItem_C.Update Stacks
	 * 		Flags  -> ()
	 */
	void UW_StatusItem_C::Update_Stacks()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusItem.W_StatusItem_C.Update Stacks");
		
		UW_StatusItem_C_Update_Stacks_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusItem.W_StatusItem_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_StatusItem_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusItem.W_StatusItem_C.Construct");
		
		UW_StatusItem_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusItem.W_StatusItem_C.Update Mag
	 * 		Flags  -> ()
	 */
	void UW_StatusItem_C::Update_Mag()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusItem.W_StatusItem_C.Update Mag");
		
		UW_StatusItem_C_Update_Mag_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusItem.W_StatusItem_C.ExecuteUbergraph_W_StatusItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StatusItem_C::ExecuteUbergraph_W_StatusItem(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusItem.W_StatusItem_C.ExecuteUbergraph_W_StatusItem");
		
		UW_StatusItem_C_ExecuteUbergraph_W_StatusItem_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_StatusItem.W_StatusItem_C.Effect Expired__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 Effect_Handle                                              (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UW_StatusItem_C*                             Status_Item                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_StatusItem_C::Effect_Expired__DelegateSignature(const struct FActiveGameplayEffectHandle& Effect_Handle, class UW_StatusItem_C* Status_Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_StatusItem.W_StatusItem_C.Effect Expired__DelegateSignature");
		
		UW_StatusItem_C_Effect_Expired__DelegateSignature_Params params {};
		params.Effect_Handle = Effect_Handle;
		params.Status_Item = Status_Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_StatusItem_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_StatusItem_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_StatusItem.W_StatusItem_C");
		return ptr;
	}

}


