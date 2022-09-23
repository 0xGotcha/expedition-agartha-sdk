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
	 * 		Name   -> Function GA_Emote.GA_Emote_C.OnCancelled_D996D15743A7A070EF824FBF9620C314
	 * 		Flags  -> ()
	 */
	void UGA_Emote_C::OnCancelled_D996D15743A7A070EF824FBF9620C314()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote.GA_Emote_C.OnCancelled_D996D15743A7A070EF824FBF9620C314");
		
		UGA_Emote_C_OnCancelled_D996D15743A7A070EF824FBF9620C314_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Emote.GA_Emote_C.OnInterrupted_D996D15743A7A070EF824FBF9620C314
	 * 		Flags  -> ()
	 */
	void UGA_Emote_C::OnInterrupted_D996D15743A7A070EF824FBF9620C314()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote.GA_Emote_C.OnInterrupted_D996D15743A7A070EF824FBF9620C314");
		
		UGA_Emote_C_OnInterrupted_D996D15743A7A070EF824FBF9620C314_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Emote.GA_Emote_C.OnBlendOut_D996D15743A7A070EF824FBF9620C314
	 * 		Flags  -> ()
	 */
	void UGA_Emote_C::OnBlendOut_D996D15743A7A070EF824FBF9620C314()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote.GA_Emote_C.OnBlendOut_D996D15743A7A070EF824FBF9620C314");
		
		UGA_Emote_C_OnBlendOut_D996D15743A7A070EF824FBF9620C314_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Emote.GA_Emote_C.OnCompleted_D996D15743A7A070EF824FBF9620C314
	 * 		Flags  -> ()
	 */
	void UGA_Emote_C::OnCompleted_D996D15743A7A070EF824FBF9620C314()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote.GA_Emote_C.OnCompleted_D996D15743A7A070EF824FBF9620C314");
		
		UGA_Emote_C_OnCompleted_D996D15743A7A070EF824FBF9620C314_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Emote.GA_Emote_C.OnVelocityChange_41EFB53142584ED653BF669711CEC5B8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Velocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Turning                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_C::OnVelocityChange_41EFB53142584ED653BF669711CEC5B8(const struct FVector& Velocity, bool Turning)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote.GA_Emote_C.OnVelocityChange_41EFB53142584ED653BF669711CEC5B8");
		
		UGA_Emote_C_OnVelocityChange_41EFB53142584ED653BF669711CEC5B8_Params params {};
		params.Velocity = Velocity;
		params.Turning = Turning;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Emote.GA_Emote_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_Emote_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote.GA_Emote_C.K2_OnEndAbility");
		
		UGA_Emote_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Emote.GA_Emote_C.K2_ActivateAbilityFromEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_Emote_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote.GA_Emote_C.K2_ActivateAbilityFromEvent");
		
		UGA_Emote_C_K2_ActivateAbilityFromEvent_Params params {};
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_Emote.GA_Emote_C.ExecuteUbergraph_GA_Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_Emote_C::ExecuteUbergraph_GA_Emote(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_Emote.GA_Emote_C.ExecuteUbergraph_GA_Emote");
		
		UGA_Emote_C_ExecuteUbergraph_GA_Emote_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_Emote_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_Emote_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_Emote.GA_Emote_C");
		return ptr;
	}

}


