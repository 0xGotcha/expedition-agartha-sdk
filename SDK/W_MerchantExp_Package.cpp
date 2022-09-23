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
	 * 		Name   -> Function W_MerchantExp.W_MerchantExp_C.GetProgressSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Size                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_MerchantExp_C::GetProgressSize(float* Size)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MerchantExp.W_MerchantExp_C.GetProgressSize");
		
		UW_MerchantExp_C_GetProgressSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Size != nullptr)
			*Size = params.Size;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MerchantExp.W_MerchantExp_C.Update
	 * 		Flags  -> ()
	 */
	void UW_MerchantExp_C::Update()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MerchantExp.W_MerchantExp_C.Update");
		
		UW_MerchantExp_C_Update_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_MerchantExp.W_MerchantExp_C.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         PlayerInventory                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UInventoryComponent*                         ShopInventory                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UW_MerchantExp_C::Init(class UInventoryComponent* PlayerInventory, class UInventoryComponent* ShopInventory, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_MerchantExp.W_MerchantExp_C.Init");
		
		UW_MerchantExp_C_Init_Params params {};
		params.PlayerInventory = PlayerInventory;
		params.ShopInventory = ShopInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_MerchantExp_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_MerchantExp_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_MerchantExp.W_MerchantExp_C");
		return ptr;
	}

}


