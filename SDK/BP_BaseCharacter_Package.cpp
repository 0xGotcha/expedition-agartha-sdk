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
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Requires Hold To Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Requires_Hold_To_Interact(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Requires Hold To Interact");
		
		ABP_BaseCharacter_C_Requires_Hold_To_Interact_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Hold Time Multiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Multiplier                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Hold_Time_Multiplier(float* Multiplier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Hold Time Multiplier");
		
		ABP_BaseCharacter_C_Hold_Time_Multiplier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Multiplier != nullptr)
			*Multiplier = params.Multiplier;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Action Verb
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Result                                                     (Parm, OutParm)
	 */
	void ABP_BaseCharacter_C::Action_Verb(class FText* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Action Verb");
		
		ABP_BaseCharacter_C_Action_Verb_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Friendly Fire
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 * 		bool                                               Friendly                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Friendly_Fire(const struct FHitResult& Hit, bool* Friendly)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Friendly Fire");
		
		ABP_BaseCharacter_C_Friendly_Fire_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Friendly != nullptr)
			*Friendly = params.Friendly;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Effect To Apply On Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Event_Tag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Effect                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Effect_To_Apply_On_Event(const struct FGameplayTag& Event_Tag, class UClass** Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Effect To Apply On Event");
		
		ABP_BaseCharacter_C_Effect_To_Apply_On_Event_Params params {};
		params.Event_Tag = Event_Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Effect != nullptr)
			*Effect = params.Effect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.GetPlayerStatsScreenCameraTransform
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  CameraTransform                                            (Parm, OutParm, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::GetPlayerStatsScreenCameraTransform(struct FTransform* CameraTransform)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.GetPlayerStatsScreenCameraTransform");
		
		ABP_BaseCharacter_C_GetPlayerStatsScreenCameraTransform_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (CameraTransform != nullptr)
			*CameraTransform = params.CameraTransform;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.HasWidgetsOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsOpen                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::HasWidgetsOpen(bool* IsOpen)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.HasWidgetsOpen");
		
		ABP_BaseCharacter_C_HasWidgetsOpen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (IsOpen != nullptr)
			*IsOpen = params.IsOpen;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_bIsHolding
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::OnRep_bIsHolding()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_bIsHolding");
		
		ABP_BaseCharacter_C_OnRep_bIsHolding_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Hold Time
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::OnRep_Hold_Time()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Hold Time");
		
		ABP_BaseCharacter_C_OnRep_Hold_Time_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Interactable Actors
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::OnRep_Interactable_Actors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Interactable Actors");
		
		ABP_BaseCharacter_C_OnRep_Interactable_Actors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Weapon Sweep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Weapon_Component                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  Hit_Result                                                 (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BaseCharacter_C::Weapon_Sweep(class UStaticMeshComponent* Weapon_Component, bool* Result, struct FHitResult* Hit_Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Weapon Sweep");
		
		ABP_BaseCharacter_C_Weapon_Sweep_Params params {};
		params.Weapon_Component = Weapon_Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (Hit_Result != nullptr)
			*Hit_Result = params.Hit_Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Process Last Connected Hit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FAttackSweepResultStruct                    Sweep_Result                                               (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	 * 		class ACombatEntity*                               Hit_Entity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Process_Last_Connected_Hit(const struct FAttackSweepResultStruct& Sweep_Result, class ACombatEntity** Hit_Entity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Process Last Connected Hit");
		
		ABP_BaseCharacter_C_Process_Last_Connected_Hit_Params params {};
		params.Sweep_Result = Sweep_Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Hit_Entity != nullptr)
			*Hit_Entity = params.Hit_Entity;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Sweep Result
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::OnRep_Sweep_Result()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Sweep Result");
		
		ABP_BaseCharacter_C_OnRep_Sweep_Result_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.BP_BaseCharacter_AutoGenFunc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffect                       Effect                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               bMatches                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::BP_BaseCharacter_AutoGenFunc(const struct FActiveGameplayEffect& Effect, bool* bMatches)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_BaseCharacter_AutoGenFunc");
		
		ABP_BaseCharacter_C_BP_BaseCharacter_AutoGenFunc_Params params {};
		params.Effect = Effect;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (bMatches != nullptr)
			*bMatches = params.bMatches;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Try Consume Slot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Slot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Try_Consume_Slot(int32_t Slot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Try Consume Slot");
		
		ABP_BaseCharacter_C_Try_Consume_Slot_Params params {};
		params.Slot = Slot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Add Threat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Combat_Entity                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Add_Threat(class AActor* Combat_Entity)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Add Threat");
		
		ABP_BaseCharacter_C_Add_Threat_Params params {};
		params.Combat_Entity = Combat_Entity;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Set Threat Level
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Threat_Level                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Set_Threat_Level(int32_t Threat_Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Threat Level");
		
		ABP_BaseCharacter_C_Set_Threat_Level_Params params {};
		params.Threat_Level = Threat_Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Threat Level Assesment
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Threat_Level_Assesment()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Threat Level Assesment");
		
		ABP_BaseCharacter_C_Threat_Level_Assesment_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Find Lookat Entity
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Find_Lookat_Entity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Find Lookat Entity");
		
		ABP_BaseCharacter_C_Find_Lookat_Entity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Hit Reaction Type
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::OnRep_Hit_Reaction_Type()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Hit Reaction Type");
		
		ABP_BaseCharacter_C_OnRep_Hit_Reaction_Type_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Get Montage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FPP                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		EWeaponType                                        Weapon_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMontageType                                       Montage_Type                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EDirection                                         Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            Index                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UAnimMontage*                                Montage                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Get_Montage(bool FPP, EWeaponType Weapon_Type, EMontageType Montage_Type, EDirection Direction, int32_t Index, class UAnimMontage** Montage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Get Montage");
		
		ABP_BaseCharacter_C_Get_Montage_Params params {};
		params.FPP = FPP;
		params.Weapon_Type = Weapon_Type;
		params.Montage_Type = Montage_Type;
		params.Direction = Direction;
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Montage != nullptr)
			*Montage = params.Montage;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Load Animation Data
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Load_Animation_Data()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Load Animation Data");
		
		ABP_BaseCharacter_C_Load_Animation_Data_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_3PPSkelWeaponMesh
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::OnRep_3PPSkelWeaponMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_3PPSkelWeaponMesh");
		
		ABP_BaseCharacter_C_OnRep_3PPSkelWeaponMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update FPP Visibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponType                                        Weapon_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Update_FPP_Visibility(EWeaponType Weapon_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update FPP Visibility");
		
		ABP_BaseCharacter_C_Update_FPP_Visibility_Params params {};
		params.Weapon_Type = Weapon_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Bolt Attachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponType                                        Weapon_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Update_Bolt_Attachment(EWeaponType Weapon_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Bolt Attachment");
		
		ABP_BaseCharacter_C_Update_Bolt_Attachment_Params params {};
		params.Weapon_Type = Weapon_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Weapon Attachment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponType                                        Weapon_Type                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Update_Weapon_Attachment(EWeaponType Weapon_Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Weapon Attachment");
		
		ABP_BaseCharacter_C_Update_Weapon_Attachment_Params params {};
		params.Weapon_Type = Weapon_Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Attach Weapons
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Primary_Socket                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Secondary_Socket                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        Offhand_Socket                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               Use_Shield_Correction_Socket                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Attach_Weapons(const class FName& Primary_Socket, const class FName& Secondary_Socket, const class FName& Offhand_Socket, bool Use_Shield_Correction_Socket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Attach Weapons");
		
		ABP_BaseCharacter_C_Attach_Weapons_Params params {};
		params.Primary_Socket = Primary_Socket;
		params.Secondary_Socket = Secondary_Socket;
		params.Offhand_Socket = Offhand_Socket;
		params.Use_Shield_Correction_Socket = Use_Shield_Correction_Socket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Randomize Appearance
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Randomize_Appearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Randomize Appearance");
		
		ABP_BaseCharacter_C_Randomize_Appearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Continue Rebuild Mesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBody                              Body_Data                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Reinit_Pose                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		TArray<class USkeletalMesh*>                       PP_Meshes                                                  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		TArray<class USkeletalMesh*>                       FPP_Meshes                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Continue_Rebuild_Mesh(const struct FCharacterBody& Body_Data, bool Reinit_Pose, TArray<class USkeletalMesh*>* PP_Meshes, TArray<class USkeletalMesh*>* FPP_Meshes, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Continue Rebuild Mesh");
		
		ABP_BaseCharacter_C_Continue_Rebuild_Mesh_Params params {};
		params.Body_Data = Body_Data;
		params.Reinit_Pose = Reinit_Pose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PP_Meshes != nullptr)
			*PP_Meshes = params.PP_Meshes;
		if (FPP_Meshes != nullptr)
			*FPP_Meshes = params.FPP_Meshes;
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Start Rebuild Mesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBody                              Body_Data                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Reinit_Pose                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Start_Rebuild_Mesh(const struct FCharacterBody& Body_Data, bool Reinit_Pose, bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Start Rebuild Mesh");
		
		ABP_BaseCharacter_C_Start_Rebuild_Mesh_Params params {};
		params.Body_Data = Body_Data;
		params.Reinit_Pose = Reinit_Pose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Is Bot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Result                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Is_Bot(bool* Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Is Bot");
		
		ABP_BaseCharacter_C_Is_Bot_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Get Sweep Location
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Get_Sweep_Location(struct FVector* Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Get Sweep Location");
		
		ABP_BaseCharacter_C_Get_Sweep_Location_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Location != nullptr)
			*Location = params.Location;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Get Limb Contact Sphere
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USphereComponent*                            Sphere                                                     (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Get_Limb_Contact_Sphere(class USphereComponent** Sphere)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Get Limb Contact Sphere");
		
		ABP_BaseCharacter_C_Get_Limb_Contact_Sphere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Sphere != nullptr)
			*Sphere = params.Sphere;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Get Current Weapon Component
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UStaticMeshComponent*                        Current_Weapon_Component                                   (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Get_Current_Weapon_Component(class UStaticMeshComponent** Current_Weapon_Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Get Current Weapon Component");
		
		ABP_BaseCharacter_C_Get_Current_Weapon_Component_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Current_Weapon_Component != nullptr)
			*Current_Weapon_Component = params.Current_Weapon_Component;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Timeline_0__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__FinishedFunc");
		
		ABP_BaseCharacter_C_Timeline_0__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Timeline_0__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__UpdateFunc");
		
		ABP_BaseCharacter_C_Timeline_0__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_1__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Timeline_1__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_1__FinishedFunc");
		
		ABP_BaseCharacter_C_Timeline_1__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_1__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Timeline_1__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_1__UpdateFunc");
		
		ABP_BaseCharacter_C_Timeline_1__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_2__FinishedFunc
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Timeline_2__FinishedFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_2__FinishedFunc");
		
		ABP_BaseCharacter_C_Timeline_2__FinishedFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_2__UpdateFunc
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Timeline_2__UpdateFunc()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_2__UpdateFunc");
		
		ABP_BaseCharacter_C_Timeline_2__UpdateFunc_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_A92FE2BD4D172BAAB133D6871AB74689
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_A92FE2BD4D172BAAB133D6871AB74689(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_A92FE2BD4D172BAAB133D6871AB74689");
		
		ABP_BaseCharacter_C_OnLoaded_A92FE2BD4D172BAAB133D6871AB74689_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_22B0F30545EF6C738D4319B2C138011B
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_22B0F30545EF6C738D4319B2C138011B(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_22B0F30545EF6C738D4319B2C138011B");
		
		ABP_BaseCharacter_C_OnLoaded_22B0F30545EF6C738D4319B2C138011B_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_BF0A223941DBD59ABA7068A7E418D995
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_BF0A223941DBD59ABA7068A7E418D995(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_BF0A223941DBD59ABA7068A7E418D995");
		
		ABP_BaseCharacter_C_OnLoaded_BF0A223941DBD59ABA7068A7E418D995_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_8B8587F946192BCD278979960BEFB147
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_8B8587F946192BCD278979960BEFB147(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_8B8587F946192BCD278979960BEFB147");
		
		ABP_BaseCharacter_C_OnLoaded_8B8587F946192BCD278979960BEFB147_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_A00CADA4402D183EEEDF02A935192E00
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_A00CADA4402D183EEEDF02A935192E00(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_A00CADA4402D183EEEDF02A935192E00");
		
		ABP_BaseCharacter_C_OnLoaded_A00CADA4402D183EEEDF02A935192E00_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_430382134F6DF4B9D06473A1E95400E7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_430382134F6DF4B9D06473A1E95400E7(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_430382134F6DF4B9D06473A1E95400E7");
		
		ABP_BaseCharacter_C_OnLoaded_430382134F6DF4B9D06473A1E95400E7_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_D09413F244239B83EE5AFB8E226DF5B7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_D09413F244239B83EE5AFB8E226DF5B7(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_D09413F244239B83EE5AFB8E226DF5B7");
		
		ABP_BaseCharacter_C_OnLoaded_D09413F244239B83EE5AFB8E226DF5B7_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_B29015E74891700F1FEEC183F8AFDE92
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_B29015E74891700F1FEEC183F8AFDE92(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_B29015E74891700F1FEEC183F8AFDE92");
		
		ABP_BaseCharacter_C_OnLoaded_B29015E74891700F1FEEC183F8AFDE92_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_2C4272DE47A6FD9ECC0C64BB17D74657
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_2C4272DE47A6FD9ECC0C64BB17D74657(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_2C4272DE47A6FD9ECC0C64BB17D74657");
		
		ABP_BaseCharacter_C_OnLoaded_2C4272DE47A6FD9ECC0C64BB17D74657_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_807B864043149E0EB9268F8E77E58EE2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_807B864043149E0EB9268F8E77E58EE2(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_807B864043149E0EB9268F8E77E58EE2");
		
		ABP_BaseCharacter_C_OnLoaded_807B864043149E0EB9268F8E77E58EE2_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_226E736E4410AE38B8EE5194C8F35B55
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Loaded                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnLoaded_226E736E4410AE38B8EE5194C8F35B55(class UObject* Loaded)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_226E736E4410AE38B8EE5194C8F35B55");
		
		ABP_BaseCharacter_C_OnLoaded_226E736E4410AE38B8EE5194C8F35B55_Params params {};
		params.Loaded = Loaded;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnNotifyEnd_9ABF55794D3B7A6F2F7C16801BE560A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnNotifyEnd_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnNotifyEnd_9ABF55794D3B7A6F2F7C16801BE560A9");
		
		ABP_BaseCharacter_C_OnNotifyEnd_9ABF55794D3B7A6F2F7C16801BE560A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnNotifyBegin_9ABF55794D3B7A6F2F7C16801BE560A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnNotifyBegin_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnNotifyBegin_9ABF55794D3B7A6F2F7C16801BE560A9");
		
		ABP_BaseCharacter_C_OnNotifyBegin_9ABF55794D3B7A6F2F7C16801BE560A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnInterrupted_9ABF55794D3B7A6F2F7C16801BE560A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnInterrupted_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnInterrupted_9ABF55794D3B7A6F2F7C16801BE560A9");
		
		ABP_BaseCharacter_C_OnInterrupted_9ABF55794D3B7A6F2F7C16801BE560A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnBlendOut_9ABF55794D3B7A6F2F7C16801BE560A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnBlendOut_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnBlendOut_9ABF55794D3B7A6F2F7C16801BE560A9");
		
		ABP_BaseCharacter_C_OnBlendOut_9ABF55794D3B7A6F2F7C16801BE560A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnCompleted_9ABF55794D3B7A6F2F7C16801BE560A9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NotifyName                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnCompleted_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCompleted_9ABF55794D3B7A6F2F7C16801BE560A9");
		
		ABP_BaseCharacter_C_OnCompleted_9ABF55794D3B7A6F2F7C16801BE560A9_Params params {};
		params.NotifyName = NotifyName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_J_K2Node_InputKeyEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_J_K2Node_InputKeyEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_J_K2Node_InputKeyEvent_5");
		
		ABP_BaseCharacter_C_InpActEvt_J_K2Node_InputKeyEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_N_K2Node_InputKeyEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_N_K2Node_InputKeyEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_N_K2Node_InputKeyEvent_4");
		
		ABP_BaseCharacter_C_InpActEvt_N_K2Node_InputKeyEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Q_K2Node_InputKeyEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_Q_K2Node_InputKeyEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Q_K2Node_InputKeyEvent_3");
		
		ABP_BaseCharacter_C_InpActEvt_Q_K2Node_InputKeyEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Pause_K2Node_InputActionEvent_12
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_Pause_K2Node_InputActionEvent_12(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Pause_K2Node_InputActionEvent_12");
		
		ABP_BaseCharacter_C_InpActEvt_Pause_K2Node_InputActionEvent_12_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_StartTyping_K2Node_InputActionEvent_11
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_StartTyping_K2Node_InputActionEvent_11(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_StartTyping_K2Node_InputActionEvent_11");
		
		ABP_BaseCharacter_C_InpActEvt_StartTyping_K2Node_InputActionEvent_11_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_M_K2Node_InputKeyEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_M_K2Node_InputKeyEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_M_K2Node_InputKeyEvent_2");
		
		ABP_BaseCharacter_C_InpActEvt_M_K2Node_InputKeyEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Inventory_K2Node_InputActionEvent_10
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_Inventory_K2Node_InputActionEvent_10(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Inventory_K2Node_InputActionEvent_10");
		
		ABP_BaseCharacter_C_InpActEvt_Inventory_K2Node_InputActionEvent_10_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_MercAction_K2Node_InputActionEvent_9
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_MercAction_K2Node_InputActionEvent_9(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_MercAction_K2Node_InputActionEvent_9");
		
		ABP_BaseCharacter_C_InpActEvt_MercAction_K2Node_InputActionEvent_9_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item1_K2Node_InputActionEvent_8
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_Item1_K2Node_InputActionEvent_8(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item1_K2Node_InputActionEvent_8");
		
		ABP_BaseCharacter_C_InpActEvt_Item1_K2Node_InputActionEvent_8_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item2_K2Node_InputActionEvent_7
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_Item2_K2Node_InputActionEvent_7(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item2_K2Node_InputActionEvent_7");
		
		ABP_BaseCharacter_C_InpActEvt_Item2_K2Node_InputActionEvent_7_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item3_K2Node_InputActionEvent_6
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_Item3_K2Node_InputActionEvent_6(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item3_K2Node_InputActionEvent_6");
		
		ABP_BaseCharacter_C_InpActEvt_Item3_K2Node_InputActionEvent_6_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item4_K2Node_InputActionEvent_5
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_Item4_K2Node_InputActionEvent_5(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item4_K2Node_InputActionEvent_5");
		
		ABP_BaseCharacter_C_InpActEvt_Item4_K2Node_InputActionEvent_5_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_PrimaryWeapon_K2Node_InputActionEvent_4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_PrimaryWeapon_K2Node_InputActionEvent_4(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_PrimaryWeapon_K2Node_InputActionEvent_4");
		
		ABP_BaseCharacter_C_InpActEvt_PrimaryWeapon_K2Node_InputActionEvent_4_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_SecondaryWeapon_K2Node_InputActionEvent_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_SecondaryWeapon_K2Node_InputActionEvent_3(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_SecondaryWeapon_K2Node_InputActionEvent_3");
		
		ABP_BaseCharacter_C_InpActEvt_SecondaryWeapon_K2Node_InputActionEvent_3_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Shield_K2Node_InputActionEvent_2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_Shield_K2Node_InputActionEvent_2(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Shield_K2Node_InputActionEvent_2");
		
		ABP_BaseCharacter_C_InpActEvt_Shield_K2Node_InputActionEvent_2_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_HideHUD_K2Node_InputActionEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_HideHUD_K2Node_InputActionEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_HideHUD_K2Node_InputActionEvent_1");
		
		ABP_BaseCharacter_C_InpActEvt_HideHUD_K2Node_InputActionEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Backslash_K2Node_InputKeyEvent_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FKey                                        Key                                                        (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpActEvt_Backslash_K2Node_InputKeyEvent_1(const struct FKey& Key)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Backslash_K2Node_InputKeyEvent_1");
		
		ABP_BaseCharacter_C_InpActEvt_Backslash_K2Node_InputKeyEvent_1_Params params {};
		params.Key = Key;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Set Inventory Tick Interval
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Tick_Interval                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Set_Inventory_Tick_Interval(float Tick_Interval)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Set Inventory Tick Interval");
		
		ABP_BaseCharacter_C_Set_Inventory_Tick_Interval_Params params {};
		params.Tick_Interval = Tick_Interval;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Interact
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ABP_BaseCharacter_C*                         Instigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Interact(class ABP_BaseCharacter_C* Instigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Interact");
		
		ABP_BaseCharacter_C_Interact_Params params {};
		params.Instigator = Instigator;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Switch Exhausted PP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Switch_Exhausted_PP(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Switch Exhausted PP");
		
		ABP_BaseCharacter_C_Switch_Exhausted_PP_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Switch Wounded PP
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Switch_Wounded_PP(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Switch Wounded PP");
		
		ABP_BaseCharacter_C_Switch_Wounded_PP_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Switch Lantern
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Enable                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Switch_Lantern(bool Enable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Switch Lantern");
		
		ABP_BaseCharacter_C_Switch_Lantern_Params params {};
		params.Enable = Enable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Launch Hold Timer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Hold_Time                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Launch_Hold_Timer(float Hold_Time)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Launch Hold Timer");
		
		ABP_BaseCharacter_C_Launch_Hold_Timer_Params params {};
		params.Hold_Time = Hold_Time;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Hold Timer
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Stop_Hold_Timer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Hold Timer");
		
		ABP_BaseCharacter_C_Stop_Hold_Timer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bFromSweep                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FHitResult                                  SweepResult                                                (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BaseCharacter_C::BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature");
		
		ABP_BaseCharacter_C_BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		params.bFromSweep = bFromSweep;
		params.SweepResult = SweepResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         OverlappedComponent                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      OtherActor                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            OtherBodyIndex                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature");
		
		ABP_BaseCharacter_C_BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params params {};
		params.OverlappedComponent = OverlappedComponent;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.OtherBodyIndex = OtherBodyIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Interaction Sweep
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Interaction_Sweep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Interaction Sweep");
		
		ABP_BaseCharacter_C_Interaction_Sweep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Server Update Interactable Actors
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_BaseCharacter_C::Server_Update_Interactable_Actors(TArray<class AActor*> Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server Update Interactable Actors");
		
		ABP_BaseCharacter_C_Server_Update_Interactable_Actors_Params params {};
		params.Actors = Actors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Fire Niagara
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraSystem*                              Niagara_System                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Fire_Niagara(class UNiagaraSystem* Niagara_System, const struct FVector& Location, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Fire Niagara");
		
		ABP_BaseCharacter_C_Fire_Niagara_Params params {};
		params.Niagara_System = Niagara_System;
		params.Location = Location;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast Fire Niagara
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNiagaraSystem*                              Niagara_System                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Location                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Direction                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Multicast_Fire_Niagara(class UNiagaraSystem* Niagara_System, const struct FVector& Location, const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast Fire Niagara");
		
		ABP_BaseCharacter_C_Multicast_Fire_Niagara_Params params {};
		params.Niagara_System = Niagara_System;
		params.Location = Location;
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Block
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Update_Block()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Block");
		
		ABP_BaseCharacter_C_Update_Block_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Async Load Modules
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PP_Count                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            FPP_Count                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FCharacterBody                              Body_Data                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		bool                                               Reinit_Pose                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void ABP_BaseCharacter_C::Async_Load_Modules(int32_t PP_Count, int32_t FPP_Count, const struct FCharacterBody& Body_Data, bool Reinit_Pose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Async Load Modules");
		
		ABP_BaseCharacter_C_Async_Load_Modules_Params params {};
		params.PP_Count = PP_Count;
		params.FPP_Count = FPP_Count;
		params.Body_Data = Body_Data;
		params.Reinit_Pose = Reinit_Pose;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Check Load Status
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Check_Load_Status()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Check Load Status");
		
		ABP_BaseCharacter_C_Check_Load_Status_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Weapons
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Update_Weapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Weapons");
		
		ABP_BaseCharacter_C_Update_Weapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Server Update Weapons
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Server_Update_Weapons()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server Update Weapons");
		
		ABP_BaseCharacter_C_Server_Update_Weapons_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Check If Weapons Updated Properly
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Check_If_Weapons_Updated_Properly()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Check If Weapons Updated Properly");
		
		ABP_BaseCharacter_C_Check_If_Weapons_Updated_Properly_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Play FPP Montage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAnimMontage*                                Montage                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Play_Rate                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Play_FPP_Montage(class UAnimMontage* Montage, float Play_Rate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Play FPP Montage");
		
		ABP_BaseCharacter_C_Play_FPP_Montage_Params params {};
		params.Montage = Montage;
		params.Play_Rate = Play_Rate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Remove FPP for Bots
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Remove_FPP_for_Bots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Remove FPP for Bots");
		
		ABP_BaseCharacter_C_Remove_FPP_for_Bots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Setup FPP
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Setup_FPP()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Setup FPP");
		
		ABP_BaseCharacter_C_Setup_FPP_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Cancel FPP Montage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              BlendOut                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Cancel_FPP_Montage(float BlendOut)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Cancel FPP Montage");
		
		ABP_BaseCharacter_C_Cancel_FPP_Montage_Params params {};
		params.BlendOut = BlendOut;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Attack Sweep Loop
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Attack_Sweep_Loop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Attack Sweep Loop");
		
		ABP_BaseCharacter_C_Attack_Sweep_Loop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Start Attack Sweep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ELimb                                              Limb_Contact_Sphere                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Start_Attack_Sweep(ELimb Limb_Contact_Sphere)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Start Attack Sweep");
		
		ABP_BaseCharacter_C_Start_Attack_Sweep_Params params {};
		params.Limb_Contact_Sphere = Limb_Contact_Sphere;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.End Attack Sweep
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::End_Attack_Sweep()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.End Attack Sweep");
		
		ABP_BaseCharacter_C_End_Attack_Sweep_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveBeginPlay");
		
		ABP_BaseCharacter_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182");
		
		ABP_BaseCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193");
		
		ABP_BaseCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35");
		
		ABP_BaseCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_63
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_63(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_63");
		
		ABP_BaseCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_63_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpAxisEvt_Turn_K2Node_InputAxisEvent_158(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158");
		
		ABP_BaseCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_158_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              AxisValue                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::InpAxisEvt_LookUp_K2Node_InputAxisEvent_173(float AxisValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173");
		
		ABP_BaseCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_173_Params params {};
		params.AxisValue = AxisValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              DeltaSeconds                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::ReceiveTick(float DeltaSeconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick");
		
		ABP_BaseCharacter_C_ReceiveTick_Params params {};
		params.DeltaSeconds = DeltaSeconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Break Sprint
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Break_Sprint()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Break Sprint");
		
		ABP_BaseCharacter_C_Break_Sprint_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Server Set Cosmetics
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Server_Set_Cosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server Set Cosmetics");
		
		ABP_BaseCharacter_C_Server_Set_Cosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast Set Cosmetics
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Multicast_Set_Cosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast Set Cosmetics");
		
		ABP_BaseCharacter_C_Multicast_Set_Cosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnCreateMercenary
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::OnCreateMercenary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCreateMercenary");
		
		ABP_BaseCharacter_C_OnCreateMercenary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.StartExtractingCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ExtractPosition                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::StartExtractingCountdown(const struct FVector& ExtractPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.StartExtractingCountdown");
		
		ABP_BaseCharacter_C_StartExtractingCountdown_Params params {};
		params.ExtractPosition = ExtractPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Close Inventory
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Close_Inventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Close Inventory");
		
		ABP_BaseCharacter_C_Close_Inventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Open Inventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Loot                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Open_Inventory(class UInventoryComponent* Loot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Open Inventory");
		
		ABP_BaseCharacter_C_Open_Inventory_Params params {};
		params.Loot = Loot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnContainerOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Container                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnContainerOpen(class UInventoryComponent* Container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnContainerOpen");
		
		ABP_BaseCharacter_C_OnContainerOpen_Params params {};
		params.Container = Container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnLanded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	 */
	void ABP_BaseCharacter_C::OnLanded(const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnLanded");
		
		ABP_BaseCharacter_C_OnLanded_Params params {};
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EMovementMode                                      PrevMovementMode                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		EMovementMode                                      NewMovementMode                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      PrevCustomMode                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		unsigned char                                      NewCustomMode                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged");
		
		ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params params {};
		params.PrevMovementMode = PrevMovementMode;
		params.NewMovementMode = NewMovementMode;
		params.PrevCustomMode = PrevCustomMode;
		params.NewCustomMode = NewCustomMode;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.On Armor Updated
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::On_Armor_Updated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On Armor Updated");
		
		ABP_BaseCharacter_C_On_Armor_Updated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.On Character Looks Updated
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::On_Character_Looks_Updated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.On Character Looks Updated");
		
		ABP_BaseCharacter_C_On_Character_Looks_Updated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Mesh
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Update_Mesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Mesh");
		
		ABP_BaseCharacter_C_Update_Mesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Player Appearance Loaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Character                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Player_Appearance_Loaded(class AProjectAgarthaCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Player Appearance Loaded");
		
		ABP_BaseCharacter_C_Player_Appearance_Loaded_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast Update Mesh
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Multicast_Update_Mesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast Update Mesh");
		
		ABP_BaseCharacter_C_Multicast_Update_Mesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.RandomizeCustomization
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::RandomizeCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.RandomizeCustomization");
		
		ABP_BaseCharacter_C_RandomizeCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Portrait
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Update_Portrait()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Portrait");
		
		ABP_BaseCharacter_C_Update_Portrait_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Rebuild Finished
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Rebuild_Finished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Rebuild Finished");
		
		ABP_BaseCharacter_C_Rebuild_Finished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnNPCDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNPCComponent*                               NPCComponent                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        QuestToFinish                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class FName                                        QuestToPropose                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		TArray<struct FNPCQuestProgressCondition>          Conditions                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	 */
	void ABP_BaseCharacter_C::OnNPCDialog(class UNPCComponent* NPCComponent, const class FName& QuestToFinish, const class FName& QuestToPropose, TArray<struct FNPCQuestProgressCondition> Conditions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnNPCDialog");
		
		ABP_BaseCharacter_C_OnNPCDialog_Params params {};
		params.NPCComponent = NPCComponent;
		params.QuestToFinish = QuestToFinish;
		params.QuestToPropose = QuestToPropose;
		params.Conditions = Conditions;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.FinishExtractingCountdown
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::FinishExtractingCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.FinishExtractingCountdown");
		
		ABP_BaseCharacter_C_FinishExtractingCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Capsule
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Update_Capsule()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Capsule");
		
		ABP_BaseCharacter_C_Update_Capsule_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Draw Blood
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Draw_Blood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Draw Blood");
		
		ABP_BaseCharacter_C_Draw_Blood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Blood
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Update_Blood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Blood");
		
		ABP_BaseCharacter_C_Update_Blood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Decay Blood
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Decay_Blood()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Decay Blood");
		
		ABP_BaseCharacter_C_Decay_Blood_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateInventoryEvent_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::UpdateInventoryEvent_Event_1(class UInventoryComponent* Inventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateInventoryEvent_Event_1");
		
		ABP_BaseCharacter_C_UpdateInventoryEvent_Event_1_Params params {};
		params.Inventory = Inventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnInventoryContentsChanged_Event_1
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         UpdatedInventory                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnInventoryContentsChanged_Event_1(class UInventoryComponent* UpdatedInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnInventoryContentsChanged_Event_1");
		
		ABP_BaseCharacter_C_OnInventoryContentsChanged_Event_1_Params params {};
		params.UpdatedInventory = UpdatedInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Float Damage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Damage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               bLocked                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 * 		struct FGameplayTag                                HitMarkerTag                                               (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Float_Damage(float Damage, bool bLocked, const struct FGameplayTag& HitMarkerTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Float Damage");
		
		ABP_BaseCharacter_C_Float_Damage_Params params {};
		params.Damage = Damage;
		params.bLocked = bLocked;
		params.HitMarkerTag = HitMarkerTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Server Set Crossbow Position
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Xbow_Firing_Position                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Server_Set_Crossbow_Position(const struct FVector& Xbow_Firing_Position)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server Set Crossbow Position");
		
		ABP_BaseCharacter_C_Server_Set_Crossbow_Position_Params params {};
		params.Xbow_Firing_Position = Xbow_Firing_Position;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Movement Stats
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Update_Movement_Stats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Movement Stats");
		
		ABP_BaseCharacter_C_Update_Movement_Stats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftTableOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCraftingComponent*                          CraftTable                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::OnCraftTableOpen(class UCraftingComponent* CraftTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftTableOpen");
		
		ABP_BaseCharacter_C_OnCraftTableOpen_Params params {};
		params.CraftTable = CraftTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.CloseCraftTable
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::CloseCraftTable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.CloseCraftTable");
		
		ABP_BaseCharacter_C_CloseCraftTable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.BP_ReconnectedBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::BP_ReconnectedBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_ReconnectedBeginPlay");
		
		ABP_BaseCharacter_C_BP_ReconnectedBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Reset Everything
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Reset_Everything()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Reset Everything");
		
		ABP_BaseCharacter_C_Reset_Everything_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Update Cosmetics
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Update_Cosmetics()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Update Cosmetics");
		
		ABP_BaseCharacter_C_Update_Cosmetics_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Character Setup
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Character_Setup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Character Setup");
		
		ABP_BaseCharacter_C_Character_Setup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Hit Indicator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Impact_Location                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FVector                                     Instigator_Location                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Hit_Indicator(const struct FVector& Impact_Location, const struct FVector& Instigator_Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Hit Indicator");
		
		ABP_BaseCharacter_C_Hit_Indicator_Params params {};
		params.Impact_Location = Impact_Location;
		params.Instigator_Location = Instigator_Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.NPCQuestNotEnoughSpaceToReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::NPCQuestNotEnoughSpaceToReward(const class FName& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.NPCQuestNotEnoughSpaceToReward");
		
		ABP_BaseCharacter_C_NPCQuestNotEnoughSpaceToReward_Params params {};
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.BP_OnRaidTimerUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinutesRemaining                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::BP_OnRaidTimerUpdated(int32_t MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.BP_OnRaidTimerUpdated");
		
		ABP_BaseCharacter_C_BP_OnRaidTimerUpdated_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.ClosePauseScreen
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::ClosePauseScreen()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ClosePauseScreen");
		
		ABP_BaseCharacter_C_ClosePauseScreen_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Get User Settings
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Get_User_Settings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Get User Settings");
		
		ABP_BaseCharacter_C_Get_User_Settings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Server Sweep Check Type
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Server_Sweep_Check_Type()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Server Sweep Check Type");
		
		ABP_BaseCharacter_C_Server_Sweep_Check_Type_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Owner Sweep Check Type
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Owner_Sweep_Check_Type()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Owner Sweep Check Type");
		
		ABP_BaseCharacter_C_Owner_Sweep_Check_Type_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Ally Check
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Ally_Check()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Ally Check");
		
		ABP_BaseCharacter_C_Ally_Check_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Play Emote
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FEmote                                      Emote                                                      (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Play_Emote(const struct FEmote& Emote)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Play Emote");
		
		ABP_BaseCharacter_C_Play_Emote_Params params {};
		params.Emote = Emote;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Enter Emote Camera
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Enter_Emote_Camera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Enter Emote Camera");
		
		ABP_BaseCharacter_C_Enter_Emote_Camera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Exit Emote Camera
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Exit_Emote_Camera()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Exit Emote Camera");
		
		ABP_BaseCharacter_C_Exit_Emote_Camera_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Emote
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Stop_Emote()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Emote");
		
		ABP_BaseCharacter_C_Stop_Emote_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnEndCrouch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              HalfHeightAdjust                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              ScaledHalfHeightAdjust                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnEndCrouch");
		
		ABP_BaseCharacter_C_K2_OnEndCrouch_Params params {};
		params.HalfHeightAdjust = HalfHeightAdjust;
		params.ScaledHalfHeightAdjust = ScaledHalfHeightAdjust;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Setup UI
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Setup_UI()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Setup UI");
		
		ABP_BaseCharacter_C_Setup_UI_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.PlayEmoteByRowName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::PlayEmoteByRowName(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.PlayEmoteByRowName");
		
		ABP_BaseCharacter_C_PlayEmoteByRowName_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::ExecuteUbergraph_BP_BaseCharacter(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter");
		
		ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.OnStashOpened__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::OnStashOpened__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.OnStashOpened__DelegateSignature");
		
		ABP_BaseCharacter_C_OnStashOpened__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Interactable Actors Changed__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Interactable_Actors_Changed__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Interactable Actors Changed__DelegateSignature");
		
		ABP_BaseCharacter_C_Interactable_Actors_Changed__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Inventory Updated__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Inventory_Updated__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Inventory Updated__DelegateSignature");
		
		ABP_BaseCharacter_C_Inventory_Updated__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Mesh Rebuilt__DelegateSignature
	 * 		Flags  -> ()
	 */
	void ABP_BaseCharacter_C::Mesh_Rebuilt__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Mesh Rebuilt__DelegateSignature");
		
		ABP_BaseCharacter_C_Mesh_Rebuilt__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_BaseCharacter.BP_BaseCharacter_C.Threat Level Changed__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Old_Threat_Level                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Threat_Level                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_BaseCharacter_C::Threat_Level_Changed__DelegateSignature(int32_t Old_Threat_Level, int32_t New_Threat_Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_BaseCharacter.BP_BaseCharacter_C.Threat Level Changed__DelegateSignature");
		
		ABP_BaseCharacter_C_Threat_Level_Changed__DelegateSignature_Params params {};
		params.Old_Threat_Level = Old_Threat_Level;
		params.New_Threat_Level = New_Threat_Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_BaseCharacter_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_BaseCharacter_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C");
		return ptr;
	}

}


