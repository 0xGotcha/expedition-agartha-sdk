#pragma once

/**
 * Name: Agartha
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Requires Hold To Interact
	 */
	struct ABP_BaseCharacter_C_Requires_Hold_To_Interact_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Hold Time Multiplier
	 */
	struct ABP_BaseCharacter_C_Hold_Time_Multiplier_Params
	{
	public:
		float                                                      Multiplier;                                              // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Action Verb
	 */
	struct ABP_BaseCharacter_C_Action_Verb_Params
	{
	public:
		class FText                                                Result;                                                  // 0x0000(0x0018)  (Parm, OutParm)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Friendly Fire
	 */
	struct ABP_BaseCharacter_C_Friendly_Fire_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
		bool                                                       Friendly;                                                // 0x008C(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Effect To Apply On Event
	 */
	struct ABP_BaseCharacter_C_Effect_To_Apply_On_Event_Params
	{
	public:
		struct FGameplayTag                                        Event_Tag;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UClass*                                              Effect;                                                  // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.GetPlayerStatsScreenCameraTransform
	 */
	struct ABP_BaseCharacter_C_GetPlayerStatsScreenCameraTransform_Params
	{
	public:
		struct FTransform                                          CameraTransform;                                         // 0x0000(0x0030)  (Parm, OutParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.HasWidgetsOpen
	 */
	struct ABP_BaseCharacter_C_HasWidgetsOpen_Params
	{
	public:
		bool                                                       IsOpen;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_bIsHolding
	 */
	struct ABP_BaseCharacter_C_OnRep_bIsHolding_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Hold Time
	 */
	struct ABP_BaseCharacter_C_OnRep_Hold_Time_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Interactable Actors
	 */
	struct ABP_BaseCharacter_C_OnRep_Interactable_Actors_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Weapon Sweep
	 */
	struct ABP_BaseCharacter_C_Weapon_Sweep_Params
	{
	public:
		class UStaticMeshComponent*                                Weapon_Component;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Result;                                                  // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_H1VD[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          Hit_Result;                                              // 0x000C(0x008C)  (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Process Last Connected Hit
	 */
	struct ABP_BaseCharacter_C_Process_Last_Connected_Hit_Params
	{
	public:
		struct FAttackSweepResultStruct                            Sweep_Result;                                            // 0x0000(0x00A0)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		class ACombatEntity*                                       Hit_Entity;                                              // 0x00A0(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Sweep Result
	 */
	struct ABP_BaseCharacter_C_OnRep_Sweep_Result_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.BP_BaseCharacter_AutoGenFunc
	 */
	struct ABP_BaseCharacter_C_BP_BaseCharacter_AutoGenFunc_Params
	{
	public:
		struct FActiveGameplayEffect                               Effect;                                                  // 0x0000(0x0368)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       bMatches;                                                // 0x0368(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Try Consume Slot
	 */
	struct ABP_BaseCharacter_C_Try_Consume_Slot_Params
	{
	public:
		int32_t                                                    Slot;                                                    // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SKT2[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Add Threat
	 */
	struct ABP_BaseCharacter_C_Add_Threat_Params
	{
	public:
		class AActor*                                              Combat_Entity;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Set Threat Level
	 */
	struct ABP_BaseCharacter_C_Set_Threat_Level_Params
	{
	public:
		int32_t                                                    Threat_Level;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Threat Level Assesment
	 */
	struct ABP_BaseCharacter_C_Threat_Level_Assesment_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Find Lookat Entity
	 */
	struct ABP_BaseCharacter_C_Find_Lookat_Entity_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_Hit Reaction Type
	 */
	struct ABP_BaseCharacter_C_OnRep_Hit_Reaction_Type_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Get Montage
	 */
	struct ABP_BaseCharacter_C_Get_Montage_Params
	{
	public:
		bool                                                       FPP;                                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		EWeaponType                                                Weapon_Type;                                             // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMontageType                                               Montage_Type;                                            // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EDirection                                                 Direction;                                               // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UAnimMontage*                                        Montage;                                                 // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Load Animation Data
	 */
	struct ABP_BaseCharacter_C_Load_Animation_Data_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnRep_3PPSkelWeaponMesh
	 */
	struct ABP_BaseCharacter_C_OnRep_3PPSkelWeaponMesh_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update FPP Visibility
	 */
	struct ABP_BaseCharacter_C_Update_FPP_Visibility_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Bolt Attachment
	 */
	struct ABP_BaseCharacter_C_Update_Bolt_Attachment_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Weapon Attachment
	 */
	struct ABP_BaseCharacter_C_Update_Weapon_Attachment_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Attach Weapons
	 */
	struct ABP_BaseCharacter_C_Attach_Weapons_Params
	{
	public:
		class FName                                                Primary_Socket;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Secondary_Socket;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Offhand_Socket;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Use_Shield_Correction_Socket;                            // 0x0018(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Randomize Appearance
	 */
	struct ABP_BaseCharacter_C_Randomize_Appearance_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Continue Rebuild Mesh
	 */
	struct ABP_BaseCharacter_C_Continue_Rebuild_Mesh_Params
	{
	public:
		struct FCharacterBody                                      Body_Data;                                               // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Reinit_Pose;                                             // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_9BIY[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class USkeletalMesh*>                               PP_Meshes;                                               // 0x0068(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		TArray<class USkeletalMesh*>                               FPP_Meshes;                                              // 0x0078(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		bool                                                       Result;                                                  // 0x0088(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_C41K[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Start Rebuild Mesh
	 */
	struct ABP_BaseCharacter_C_Start_Rebuild_Mesh_Params
	{
	public:
		struct FCharacterBody                                      Body_Data;                                               // 0x0000(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Reinit_Pose;                                             // 0x0060(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		bool                                                       Result;                                                  // 0x0061(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_AN54[0x6];                                   // 0x0062(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Is Bot
	 */
	struct ABP_BaseCharacter_C_Is_Bot_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_86JJ[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Get Sweep Location
	 */
	struct ABP_BaseCharacter_C_Get_Sweep_Location_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_1SUQ[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Get Limb Contact Sphere
	 */
	struct ABP_BaseCharacter_C_Get_Limb_Contact_Sphere_Params
	{
	public:
		class USphereComponent*                                    Sphere;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Get Current Weapon Component
	 */
	struct ABP_BaseCharacter_C_Get_Current_Weapon_Component_Params
	{
	public:
		class UStaticMeshComponent*                                Current_Weapon_Component;                                // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__FinishedFunc
	 */
	struct ABP_BaseCharacter_C_Timeline_0__FinishedFunc_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_0__UpdateFunc
	 */
	struct ABP_BaseCharacter_C_Timeline_0__UpdateFunc_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_1__FinishedFunc
	 */
	struct ABP_BaseCharacter_C_Timeline_1__FinishedFunc_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_1__UpdateFunc
	 */
	struct ABP_BaseCharacter_C_Timeline_1__UpdateFunc_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_2__FinishedFunc
	 */
	struct ABP_BaseCharacter_C_Timeline_2__FinishedFunc_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Timeline_2__UpdateFunc
	 */
	struct ABP_BaseCharacter_C_Timeline_2__UpdateFunc_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_A92FE2BD4D172BAAB133D6871AB74689
	 */
	struct ABP_BaseCharacter_C_OnLoaded_A92FE2BD4D172BAAB133D6871AB74689_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_22B0F30545EF6C738D4319B2C138011B
	 */
	struct ABP_BaseCharacter_C_OnLoaded_22B0F30545EF6C738D4319B2C138011B_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_BF0A223941DBD59ABA7068A7E418D995
	 */
	struct ABP_BaseCharacter_C_OnLoaded_BF0A223941DBD59ABA7068A7E418D995_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_8B8587F946192BCD278979960BEFB147
	 */
	struct ABP_BaseCharacter_C_OnLoaded_8B8587F946192BCD278979960BEFB147_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_A00CADA4402D183EEEDF02A935192E00
	 */
	struct ABP_BaseCharacter_C_OnLoaded_A00CADA4402D183EEEDF02A935192E00_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_430382134F6DF4B9D06473A1E95400E7
	 */
	struct ABP_BaseCharacter_C_OnLoaded_430382134F6DF4B9D06473A1E95400E7_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_D09413F244239B83EE5AFB8E226DF5B7
	 */
	struct ABP_BaseCharacter_C_OnLoaded_D09413F244239B83EE5AFB8E226DF5B7_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_B29015E74891700F1FEEC183F8AFDE92
	 */
	struct ABP_BaseCharacter_C_OnLoaded_B29015E74891700F1FEEC183F8AFDE92_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_2C4272DE47A6FD9ECC0C64BB17D74657
	 */
	struct ABP_BaseCharacter_C_OnLoaded_2C4272DE47A6FD9ECC0C64BB17D74657_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_807B864043149E0EB9268F8E77E58EE2
	 */
	struct ABP_BaseCharacter_C_OnLoaded_807B864043149E0EB9268F8E77E58EE2_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLoaded_226E736E4410AE38B8EE5194C8F35B55
	 */
	struct ABP_BaseCharacter_C_OnLoaded_226E736E4410AE38B8EE5194C8F35B55_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnNotifyEnd_9ABF55794D3B7A6F2F7C16801BE560A9
	 */
	struct ABP_BaseCharacter_C_OnNotifyEnd_9ABF55794D3B7A6F2F7C16801BE560A9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnNotifyBegin_9ABF55794D3B7A6F2F7C16801BE560A9
	 */
	struct ABP_BaseCharacter_C_OnNotifyBegin_9ABF55794D3B7A6F2F7C16801BE560A9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnInterrupted_9ABF55794D3B7A6F2F7C16801BE560A9
	 */
	struct ABP_BaseCharacter_C_OnInterrupted_9ABF55794D3B7A6F2F7C16801BE560A9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnBlendOut_9ABF55794D3B7A6F2F7C16801BE560A9
	 */
	struct ABP_BaseCharacter_C_OnBlendOut_9ABF55794D3B7A6F2F7C16801BE560A9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnCompleted_9ABF55794D3B7A6F2F7C16801BE560A9
	 */
	struct ABP_BaseCharacter_C_OnCompleted_9ABF55794D3B7A6F2F7C16801BE560A9_Params
	{
	public:
		class FName                                                NotifyName;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_J_K2Node_InputKeyEvent_5
	 */
	struct ABP_BaseCharacter_C_InpActEvt_J_K2Node_InputKeyEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_N_K2Node_InputKeyEvent_4
	 */
	struct ABP_BaseCharacter_C_InpActEvt_N_K2Node_InputKeyEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Q_K2Node_InputKeyEvent_3
	 */
	struct ABP_BaseCharacter_C_InpActEvt_Q_K2Node_InputKeyEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Pause_K2Node_InputActionEvent_12
	 */
	struct ABP_BaseCharacter_C_InpActEvt_Pause_K2Node_InputActionEvent_12_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_StartTyping_K2Node_InputActionEvent_11
	 */
	struct ABP_BaseCharacter_C_InpActEvt_StartTyping_K2Node_InputActionEvent_11_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_M_K2Node_InputKeyEvent_2
	 */
	struct ABP_BaseCharacter_C_InpActEvt_M_K2Node_InputKeyEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Inventory_K2Node_InputActionEvent_10
	 */
	struct ABP_BaseCharacter_C_InpActEvt_Inventory_K2Node_InputActionEvent_10_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_MercAction_K2Node_InputActionEvent_9
	 */
	struct ABP_BaseCharacter_C_InpActEvt_MercAction_K2Node_InputActionEvent_9_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item1_K2Node_InputActionEvent_8
	 */
	struct ABP_BaseCharacter_C_InpActEvt_Item1_K2Node_InputActionEvent_8_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item2_K2Node_InputActionEvent_7
	 */
	struct ABP_BaseCharacter_C_InpActEvt_Item2_K2Node_InputActionEvent_7_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item3_K2Node_InputActionEvent_6
	 */
	struct ABP_BaseCharacter_C_InpActEvt_Item3_K2Node_InputActionEvent_6_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Item4_K2Node_InputActionEvent_5
	 */
	struct ABP_BaseCharacter_C_InpActEvt_Item4_K2Node_InputActionEvent_5_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_PrimaryWeapon_K2Node_InputActionEvent_4
	 */
	struct ABP_BaseCharacter_C_InpActEvt_PrimaryWeapon_K2Node_InputActionEvent_4_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_SecondaryWeapon_K2Node_InputActionEvent_3
	 */
	struct ABP_BaseCharacter_C_InpActEvt_SecondaryWeapon_K2Node_InputActionEvent_3_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Shield_K2Node_InputActionEvent_2
	 */
	struct ABP_BaseCharacter_C_InpActEvt_Shield_K2Node_InputActionEvent_2_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_HideHUD_K2Node_InputActionEvent_1
	 */
	struct ABP_BaseCharacter_C_InpActEvt_HideHUD_K2Node_InputActionEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpActEvt_Backslash_K2Node_InputKeyEvent_1
	 */
	struct ABP_BaseCharacter_C_InpActEvt_Backslash_K2Node_InputKeyEvent_1_Params
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Set Inventory Tick Interval
	 */
	struct ABP_BaseCharacter_C_Set_Inventory_Tick_Interval_Params
	{
	public:
		float                                                      Tick_Interval;                                           // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Interact
	 */
	struct ABP_BaseCharacter_C_Interact_Params
	{
	public:
		class ABP_BaseCharacter_C*                                 Instigator;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Switch Exhausted PP
	 */
	struct ABP_BaseCharacter_C_Switch_Exhausted_PP_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Switch Wounded PP
	 */
	struct ABP_BaseCharacter_C_Switch_Wounded_PP_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Switch Lantern
	 */
	struct ABP_BaseCharacter_C_Switch_Lantern_Params
	{
	public:
		bool                                                       Enable;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Launch Hold Timer
	 */
	struct ABP_BaseCharacter_C_Launch_Hold_Timer_Params
	{
	public:
		float                                                      Hold_Time;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Hold Timer
	 */
	struct ABP_BaseCharacter_C_Stop_Hold_Timer_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
	 */
	struct ABP_BaseCharacter_C_BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bFromSweep;                                              // 0x001C(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_V2XS[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FHitResult                                          SweepResult;                                             // 0x0020(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature
	 */
	struct ABP_BaseCharacter_C_BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature_Params
	{
	public:
		class UPrimitiveComponent*                                 OverlappedComponent;                                     // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    OtherBodyIndex;                                          // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Interaction Sweep
	 */
	struct ABP_BaseCharacter_C_Interaction_Sweep_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Server Update Interactable Actors
	 */
	struct ABP_BaseCharacter_C_Server_Update_Interactable_Actors_Params
	{
	public:
		TArray<class AActor*>                                      Actors;                                                  // 0x0000(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Fire Niagara
	 */
	struct ABP_BaseCharacter_C_Fire_Niagara_Params
	{
	public:
		class UNiagaraSystem*                                      Niagara_System;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast Fire Niagara
	 */
	struct ABP_BaseCharacter_C_Multicast_Fire_Niagara_Params
	{
	public:
		class UNiagaraSystem*                                      Niagara_System;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Location;                                                // 0x0008(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Direction;                                               // 0x0014(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Block
	 */
	struct ABP_BaseCharacter_C_Update_Block_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Async Load Modules
	 */
	struct ABP_BaseCharacter_C_Async_Load_Modules_Params
	{
	public:
		unsigned char                                              UnknownData_U64O[0x10];                                  // 0x0000(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		unsigned char                                              UnknownData_5XSC[0x20];                                  // 0x0000(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    PP_Count;                                                // 0x0020(0x0004)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    FPP_Count;                                               // 0x0024(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FCharacterBody                                      Body_Data;                                               // 0x0028(0x0060)  (BlueprintVisible, BlueprintReadOnly, Parm)
		bool                                                       Reinit_Pose;                                             // 0x0088(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Check Load Status
	 */
	struct ABP_BaseCharacter_C_Check_Load_Status_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Weapons
	 */
	struct ABP_BaseCharacter_C_Update_Weapons_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Server Update Weapons
	 */
	struct ABP_BaseCharacter_C_Server_Update_Weapons_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Check If Weapons Updated Properly
	 */
	struct ABP_BaseCharacter_C_Check_If_Weapons_Updated_Properly_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Play FPP Montage
	 */
	struct ABP_BaseCharacter_C_Play_FPP_Montage_Params
	{
	public:
		class UAnimMontage*                                        Montage;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      Play_Rate;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Remove FPP for Bots
	 */
	struct ABP_BaseCharacter_C_Remove_FPP_for_Bots_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Setup FPP
	 */
	struct ABP_BaseCharacter_C_Setup_FPP_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Cancel FPP Montage
	 */
	struct ABP_BaseCharacter_C_Cancel_FPP_Montage_Params
	{
	public:
		float                                                      BlendOut;                                                // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Attack Sweep Loop
	 */
	struct ABP_BaseCharacter_C_Attack_Sweep_Loop_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Start Attack Sweep
	 */
	struct ABP_BaseCharacter_C_Start_Attack_Sweep_Params
	{
	public:
		ELimb                                                      Limb_Contact_Sphere;                                     // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.End Attack Sweep
	 */
	struct ABP_BaseCharacter_C_End_Attack_Sweep_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveBeginPlay
	 */
	struct ABP_BaseCharacter_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182
	 */
	struct ABP_BaseCharacter_C_InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193
	 */
	struct ABP_BaseCharacter_C_InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35
	 */
	struct ABP_BaseCharacter_C_InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_63
	 */
	struct ABP_BaseCharacter_C_InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_63_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_Turn_K2Node_InputAxisEvent_158
	 */
	struct ABP_BaseCharacter_C_InpAxisEvt_Turn_K2Node_InputAxisEvent_158_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.InpAxisEvt_LookUp_K2Node_InputAxisEvent_173
	 */
	struct ABP_BaseCharacter_C_InpAxisEvt_LookUp_K2Node_InputAxisEvent_173_Params
	{
	public:
		float                                                      AxisValue;                                               // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.ReceiveTick
	 */
	struct ABP_BaseCharacter_C_ReceiveTick_Params
	{
	public:
		float                                                      DeltaSeconds;                                            // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Break Sprint
	 */
	struct ABP_BaseCharacter_C_Break_Sprint_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Server Set Cosmetics
	 */
	struct ABP_BaseCharacter_C_Server_Set_Cosmetics_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast Set Cosmetics
	 */
	struct ABP_BaseCharacter_C_Multicast_Set_Cosmetics_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnCreateMercenary
	 */
	struct ABP_BaseCharacter_C_OnCreateMercenary_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.StartExtractingCountdown
	 */
	struct ABP_BaseCharacter_C_StartExtractingCountdown_Params
	{
	public:
		struct FVector                                             ExtractPosition;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Close Inventory
	 */
	struct ABP_BaseCharacter_C_Close_Inventory_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Open Inventory
	 */
	struct ABP_BaseCharacter_C_Open_Inventory_Params
	{
	public:
		class UInventoryComponent*                                 Loot;                                                    // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnContainerOpen
	 */
	struct ABP_BaseCharacter_C_OnContainerOpen_Params
	{
	public:
		class UInventoryComponent*                                 Container;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnLanded
	 */
	struct ABP_BaseCharacter_C_OnLanded_Params
	{
	public:
		struct FHitResult                                          Hit;                                                     // 0x0000(0x008C)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnMovementModeChanged
	 */
	struct ABP_BaseCharacter_C_K2_OnMovementModeChanged_Params
	{
	public:
		EMovementMode                                              PrevMovementMode;                                        // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		EMovementMode                                              NewMovementMode;                                         // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              PrevCustomMode;                                          // 0x0002(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              NewCustomMode;                                           // 0x0003(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.On Armor Updated
	 */
	struct ABP_BaseCharacter_C_On_Armor_Updated_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.On Character Looks Updated
	 */
	struct ABP_BaseCharacter_C_On_Character_Looks_Updated_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Mesh
	 */
	struct ABP_BaseCharacter_C_Update_Mesh_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Player Appearance Loaded
	 */
	struct ABP_BaseCharacter_C_Player_Appearance_Loaded_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Character;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Multicast Update Mesh
	 */
	struct ABP_BaseCharacter_C_Multicast_Update_Mesh_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.RandomizeCustomization
	 */
	struct ABP_BaseCharacter_C_RandomizeCustomization_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Portrait
	 */
	struct ABP_BaseCharacter_C_Update_Portrait_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Rebuild Finished
	 */
	struct ABP_BaseCharacter_C_Rebuild_Finished_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnNPCDialog
	 */
	struct ABP_BaseCharacter_C_OnNPCDialog_Params
	{
	public:
		class UNPCComponent*                                       NPCComponent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                QuestToFinish;                                           // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                QuestToPropose;                                          // 0x0010(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		TArray<struct FNPCQuestProgressCondition>                  Conditions;                                              // 0x0018(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.FinishExtractingCountdown
	 */
	struct ABP_BaseCharacter_C_FinishExtractingCountdown_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Capsule
	 */
	struct ABP_BaseCharacter_C_Update_Capsule_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Draw Blood
	 */
	struct ABP_BaseCharacter_C_Draw_Blood_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Blood
	 */
	struct ABP_BaseCharacter_C_Update_Blood_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Decay Blood
	 */
	struct ABP_BaseCharacter_C_Decay_Blood_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.UpdateInventoryEvent_Event_1
	 */
	struct ABP_BaseCharacter_C_UpdateInventoryEvent_Event_1_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnInventoryContentsChanged_Event_1
	 */
	struct ABP_BaseCharacter_C_OnInventoryContentsChanged_Event_1_Params
	{
	public:
		class UInventoryComponent*                                 UpdatedInventory;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Float Damage
	 */
	struct ABP_BaseCharacter_C_Float_Damage_Params
	{
	public:
		float                                                      Damage;                                                  // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       bLocked;                                                 // 0x0004(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_KMQY[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FGameplayTag                                        HitMarkerTag;                                            // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Server Set Crossbow Position
	 */
	struct ABP_BaseCharacter_C_Server_Set_Crossbow_Position_Params
	{
	public:
		struct FVector                                             Xbow_Firing_Position;                                    // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Movement Stats
	 */
	struct ABP_BaseCharacter_C_Update_Movement_Stats_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnCraftTableOpen
	 */
	struct ABP_BaseCharacter_C_OnCraftTableOpen_Params
	{
	public:
		class UCraftingComponent*                                  CraftTable;                                              // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.CloseCraftTable
	 */
	struct ABP_BaseCharacter_C_CloseCraftTable_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.BP_ReconnectedBeginPlay
	 */
	struct ABP_BaseCharacter_C_BP_ReconnectedBeginPlay_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Reset Everything
	 */
	struct ABP_BaseCharacter_C_Reset_Everything_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Update Cosmetics
	 */
	struct ABP_BaseCharacter_C_Update_Cosmetics_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Character Setup
	 */
	struct ABP_BaseCharacter_C_Character_Setup_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Hit Indicator
	 */
	struct ABP_BaseCharacter_C_Hit_Indicator_Params
	{
	public:
		struct FVector                                             Impact_Location;                                         // 0x0000(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FVector                                             Instigator_Location;                                     // 0x000C(0x000C)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.NPCQuestNotEnoughSpaceToReward
	 */
	struct ABP_BaseCharacter_C_NPCQuestNotEnoughSpaceToReward_Params
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.BP_OnRaidTimerUpdated
	 */
	struct ABP_BaseCharacter_C_BP_OnRaidTimerUpdated_Params
	{
	public:
		int32_t                                                    MinutesRemaining;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.ClosePauseScreen
	 */
	struct ABP_BaseCharacter_C_ClosePauseScreen_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Get User Settings
	 */
	struct ABP_BaseCharacter_C_Get_User_Settings_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Server Sweep Check Type
	 */
	struct ABP_BaseCharacter_C_Server_Sweep_Check_Type_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Owner Sweep Check Type
	 */
	struct ABP_BaseCharacter_C_Owner_Sweep_Check_Type_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Ally Check
	 */
	struct ABP_BaseCharacter_C_Ally_Check_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Play Emote
	 */
	struct ABP_BaseCharacter_C_Play_Emote_Params
	{
	public:
		struct FEmote                                              Emote;                                                   // 0x0000(0x0048)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Enter Emote Camera
	 */
	struct ABP_BaseCharacter_C_Enter_Emote_Camera_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Exit Emote Camera
	 */
	struct ABP_BaseCharacter_C_Exit_Emote_Camera_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Stop Emote
	 */
	struct ABP_BaseCharacter_C_Stop_Emote_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.K2_OnEndCrouch
	 */
	struct ABP_BaseCharacter_C_K2_OnEndCrouch_Params
	{
	public:
		float                                                      HalfHeightAdjust;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		float                                                      ScaledHalfHeightAdjust;                                  // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Setup UI
	 */
	struct ABP_BaseCharacter_C_Setup_UI_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.PlayEmoteByRowName
	 */
	struct ABP_BaseCharacter_C_PlayEmoteByRowName_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.ExecuteUbergraph_BP_BaseCharacter
	 */
	struct ABP_BaseCharacter_C_ExecuteUbergraph_BP_BaseCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HF04[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.OnStashOpened__DelegateSignature
	 */
	struct ABP_BaseCharacter_C_OnStashOpened__DelegateSignature_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Interactable Actors Changed__DelegateSignature
	 */
	struct ABP_BaseCharacter_C_Interactable_Actors_Changed__DelegateSignature_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Inventory Updated__DelegateSignature
	 */
	struct ABP_BaseCharacter_C_Inventory_Updated__DelegateSignature_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Mesh Rebuilt__DelegateSignature
	 */
	struct ABP_BaseCharacter_C_Mesh_Rebuilt__DelegateSignature_Params
	{	};

	/**
	 * Function BP_BaseCharacter.BP_BaseCharacter_C.Threat Level Changed__DelegateSignature
	 */
	struct ABP_BaseCharacter_C_Threat_Level_Changed__DelegateSignature_Params
	{
	public:
		int32_t                                                    Old_Threat_Level;                                        // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Threat_Level;                                        // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
