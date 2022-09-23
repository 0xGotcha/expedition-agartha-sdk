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
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.Direction From Hit Result
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		class AActor*                                      Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Including_Back                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EDirection                                         Direction                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_HitReact_C::Direction_From_Hit_Result(const struct FHitResult& Hit, class AActor* Instigator, bool Including_Back, EDirection* Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.Direction From Hit Result");
		
		UGA_HitReact_C_Direction_From_Hit_Result_Params params {};
		params.Hit = Hit;
		params.Instigator = Instigator;
		params.Including_Back = Including_Back;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Direction != nullptr)
			*Direction = params.Direction;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.OnCancelled_062D5C734CE0692C196CF1A2A3F2AF24
	 * 		Flags  -> ()
	 */
	void UGA_HitReact_C::OnCancelled_062D5C734CE0692C196CF1A2A3F2AF24()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.OnCancelled_062D5C734CE0692C196CF1A2A3F2AF24");
		
		UGA_HitReact_C_OnCancelled_062D5C734CE0692C196CF1A2A3F2AF24_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.OnInterrupted_062D5C734CE0692C196CF1A2A3F2AF24
	 * 		Flags  -> ()
	 */
	void UGA_HitReact_C::OnInterrupted_062D5C734CE0692C196CF1A2A3F2AF24()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.OnInterrupted_062D5C734CE0692C196CF1A2A3F2AF24");
		
		UGA_HitReact_C_OnInterrupted_062D5C734CE0692C196CF1A2A3F2AF24_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.OnBlendOut_062D5C734CE0692C196CF1A2A3F2AF24
	 * 		Flags  -> ()
	 */
	void UGA_HitReact_C::OnBlendOut_062D5C734CE0692C196CF1A2A3F2AF24()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.OnBlendOut_062D5C734CE0692C196CF1A2A3F2AF24");
		
		UGA_HitReact_C_OnBlendOut_062D5C734CE0692C196CF1A2A3F2AF24_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.OnCompleted_062D5C734CE0692C196CF1A2A3F2AF24
	 * 		Flags  -> ()
	 */
	void UGA_HitReact_C::OnCompleted_062D5C734CE0692C196CF1A2A3F2AF24()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.OnCompleted_062D5C734CE0692C196CF1A2A3F2AF24");
		
		UGA_HitReact_C_OnCompleted_062D5C734CE0692C196CF1A2A3F2AF24_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.K2_OnEndAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bWasCancelled                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UGA_HitReact_C::K2_OnEndAbility(bool bWasCancelled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.K2_OnEndAbility");
		
		UGA_HitReact_C_K2_OnEndAbility_Params params {};
		params.bWasCancelled = bWasCancelled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.Apply Damage
	 * 		Flags  -> ()
	 */
	void UGA_HitReact_C::Apply_Damage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.Apply Damage");
		
		UGA_HitReact_C_Apply_Damage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.Play Montages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                PP_Montage_To_Play                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                FPP_Montage_To_Play                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_BaseCharacter_C*                         Avatar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_HitReact_C::Play_Montages(class UAnimMontage* PP_Montage_To_Play, class UAnimMontage* FPP_Montage_To_Play, class ABP_BaseCharacter_C* Avatar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.Play Montages");
		
		UGA_HitReact_C_Play_Montages_Params params {};
		params.PP_Montage_To_Play = PP_Montage_To_Play;
		params.FPP_Montage_To_Play = FPP_Montage_To_Play;
		params.Avatar = Avatar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.Multicast Play Montages
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                PP_Montage                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                FPP_Montage                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class ABP_BaseCharacter_C*                         Avatar                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_HitReact_C::Multicast_Play_Montages(class UAnimMontage* PP_Montage, class UAnimMontage* FPP_Montage, class ABP_BaseCharacter_C* Avatar)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.Multicast Play Montages");
		
		UGA_HitReact_C_Multicast_Play_Montages_Params params {};
		params.PP_Montage = PP_Montage;
		params.FPP_Montage = FPP_Montage;
		params.Avatar = Avatar;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.K2_ActivateAbilityFromEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayEventData                          EventData                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void UGA_HitReact_C::K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.K2_ActivateAbilityFromEvent");
		
		UGA_HitReact_C_K2_ActivateAbilityFromEvent_Params params {};
		params.EventData = EventData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.Damage Armor
	 * 		Flags  -> ()
	 */
	void UGA_HitReact_C::Damage_Armor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.Damage Armor");
		
		UGA_HitReact_C_Damage_Armor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.Damage Weapon or Shield On Block or Parry
	 * 		Flags  -> ()
	 */
	void UGA_HitReact_C::Damage_Weapon_or_Shield_On_Block_or_Parry()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.Damage Weapon or Shield On Block or Parry");
		
		UGA_HitReact_C_Damage_Weapon_or_Shield_On_Block_or_Parry_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.Damage Attacker Weapon
	 * 		Flags  -> ()
	 */
	void UGA_HitReact_C::Damage_Attacker_Weapon()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.Damage Attacker Weapon");
		
		UGA_HitReact_C_Damage_Attacker_Weapon_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function GA_HitReact.GA_HitReact_C.ExecuteUbergraph_GA_HitReact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UGA_HitReact_C::ExecuteUbergraph_GA_HitReact(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function GA_HitReact.GA_HitReact_C.ExecuteUbergraph_GA_HitReact");
		
		UGA_HitReact_C_ExecuteUbergraph_GA_HitReact_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGA_HitReact_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGA_HitReact_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass GA_HitReact.GA_HitReact_C");
		return ptr;
	}

}


