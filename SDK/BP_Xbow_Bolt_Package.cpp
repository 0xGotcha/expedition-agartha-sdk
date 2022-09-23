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
	 * 		Name   -> Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.OnRep_Stopped
	 * 		Flags  -> ()
	 */
	void ABP_Xbow_Bolt_C::OnRep_Stopped()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.OnRep_Stopped");
		
		ABP_Xbow_Bolt_C_OnRep_Stopped_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Xbow_Bolt_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.ReceiveBeginPlay");
		
		ABP_Xbow_Bolt_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Xbow_Bolt_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.ReceiveTick");
		
		ABP_Xbow_Bolt_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.Stop Audio
	 * 		Flags  -> ()
	 */
	void ABP_Xbow_Bolt_C::Stop_Audio()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.Stop Audio");
		
		ABP_Xbow_Bolt_C_Stop_Audio_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.Play Audio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USoundBase*                                  Sound                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Xbow_Bolt_C::Play_Audio(class USoundBase* Sound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.Play Audio");
		
		ABP_Xbow_Bolt_C_Play_Audio_Params params {};
		params.Sound = Sound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.Set Bolt To Hit Location
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Hit_Location                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Xbow_Bolt_C::Set_Bolt_To_Hit_Location(const struct FVector& Hit_Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.Set Bolt To Hit Location");
		
		ABP_Xbow_Bolt_C_Set_Bolt_To_Hit_Location_Params params {};
		params.Hit_Location = Hit_Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.ExecuteUbergraph_BP_Xbow_Bolt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Xbow_Bolt_C::ExecuteUbergraph_BP_Xbow_Bolt(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Xbow_Bolt.BP_Xbow_Bolt_C.ExecuteUbergraph_BP_Xbow_Bolt");
		
		ABP_Xbow_Bolt_C_ExecuteUbergraph_BP_Xbow_Bolt_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Xbow_Bolt_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Xbow_Bolt_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Xbow_Bolt.BP_Xbow_Bolt_C");
		return ptr;
	}

}


