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
	 * 		Name   -> Function BP_PortraitCamera.BP_PortraitCamera_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_PortraitCamera_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PortraitCamera.BP_PortraitCamera_C.ReceiveBeginPlay");
		
		ABP_PortraitCamera_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PortraitCamera.BP_PortraitCamera_C.Update Portrait
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh_Component                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PortraitCamera_C::Update_Portrait(class USkeletalMeshComponent* Mesh_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PortraitCamera.BP_PortraitCamera_C.Update Portrait");
		
		ABP_PortraitCamera_C_Update_Portrait_Params params {};
		params.Mesh_Component = Mesh_Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_PortraitCamera.BP_PortraitCamera_C.ExecuteUbergraph_BP_PortraitCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_PortraitCamera_C::ExecuteUbergraph_BP_PortraitCamera(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_PortraitCamera.BP_PortraitCamera_C.ExecuteUbergraph_BP_PortraitCamera");
		
		ABP_PortraitCamera_C_ExecuteUbergraph_BP_PortraitCamera_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_PortraitCamera_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_PortraitCamera_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_PortraitCamera.BP_PortraitCamera_C");
		return ptr;
	}

}


