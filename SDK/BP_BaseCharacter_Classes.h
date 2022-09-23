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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_BaseCharacter.BP_BaseCharacter_C
	 * Size -> 0x0998 (FullSize[0x1358] - InheritedSize[0x09C0])
	 */
	class ABP_BaseCharacter_C : public AProjectAgarthaCharacter
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x09C0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class USkeletalMeshComponent*                              TempMesh;                                                // 0x09C8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     PlayerStatsScreenCameraTrans;                            // 0x09D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Head;                                                    // 0x09D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PPBlack;                                                 // 0x09E0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PPWounded;                                               // 0x09E8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPostProcessComponent*                               PPExhaustion;                                            // 0x09F0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBoxComponent*                                       PPVolume;                                                // 0x09F8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UPointLightComponent*                                PointLight;                                              // 0x0A00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Lantern;                                                 // 0x0A08(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCapsuleComponent*                                   InteractionTest;                                         // 0x0A10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_MusicComponent_C*                                BP_MusicComponent;                                       // 0x0A18(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    CameraOcclusionTest;                                     // 0x0A20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                Bolt;                                                    // 0x0A28(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FPP_Bolt;                                                // 0x0A30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FPP_SecondaryWeapon;                                     // 0x0A38(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              SkeletalItem;                                            // 0x0A40(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                OffhandItem;                                             // 0x0A48(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                SecondaryWeapon;                                         // 0x0A50(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                PrimaryWeapon;                                           // 0x0A58(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FPP_Legs;                                                // 0x0A60(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USKModularComponent*                                 SKModular;                                               // 0x0A68(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_CharacterModular_C*                              BP_CharacterModular;                                     // 0x0A70(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    FPPCamera;                                               // 0x0A78(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 CameraLag;                                               // 0x0A80(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FPP_PrimaryWeapon;                                       // 0x0A88(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UStaticMeshComponent*                                FPP_OffhandItem;                                         // 0x0A90(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FPP_SkeletalItem;                                        // 0x0A98(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FPP_Hands;                                               // 0x0AA0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     FPPRigScene;                                             // 0x0AA8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 RigLag;                                                  // 0x0AB0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_ArmorComponent_C*                                BP_ArmorComponent;                                       // 0x0AB8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UWidgetComponent*                                    PlayerOverheadWidget;                                    // 0x0AC0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USpringArmComponent*                                 SpringArm1;                                              // 0x0AC8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USkeletalMeshComponent*                              FPP_Root;                                                // 0x0AD0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    LF;                                                      // 0x0AD8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    RF;                                                      // 0x0AE0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UBP_WeaponComponent_C*                               BP_WeaponComponent;                                      // 0x0AE8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    LH;                                                      // 0x0AF0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USphereComponent*                                    RH;                                                      // 0x0AF8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UCameraComponent*                                    PPCamera;                                                // 0x0B00(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Timeline_2__1__0__993697054503DE9D5B665C96024EE381;      // 0x0B08(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_2__Direction_993697054503DE9D5B665C96024EE381;  // 0x0B0C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_R8AN[0x3];                                   // 0x0B0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_3;                                              // 0x0B10(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_1_Weight_2A1759934895712125F990BB5858C773;      // 0x0B18(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_1__Direction_2A1759934895712125F990BB5858C773;  // 0x0B1C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_VD2C[0x3];                                   // 0x0B1D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_2;                                              // 0x0B20(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		float                                                      Timeline_0_Weight_B5959B44445D1DF1DC5133B440794E54;      // 0x0B28(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		ETimelineDirection                                         Timeline_0__Direction_B5959B44445D1DF1DC5133B440794E54;  // 0x0B2C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TSDG[0x3];                                   // 0x0B2D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTimelineComponent*                                  Timeline_1;                                              // 0x0B30(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class USkeletalMeshComponent*                              Xbow;                                                    // 0x0B38(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       InventoryUp;                                             // 0x0B40(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       CraftingUp;                                              // 0x0B41(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZXHK[0x6];                                   // 0x0B42(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UUI_Crosshair_C*                                     Crosshair;                                               // 0x0B48(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      AngularVelocity;                                         // 0x0B50(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHitResult                                          Last_Connected_Hit;                                      // 0x0B54(0x008C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
		EDrawDebugTrace                                            Draw_Debug_Type;                                         // 0x0BE0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       FPP_Camera_Occluded;                                     // 0x0BE1(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_8Y5P[0x2];                                   // 0x0BE2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LookupValue;                                             // 0x0BE4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      TurnValue;                                               // 0x0BE8(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Previous_Sweep_Location;                                 // 0x0BEC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x0BF8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UUserWidget*                                         PlayerInventoryUI;                                       // 0x0C00(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        Current_FPP_Montage;                                     // 0x0C08(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Turn_Speed;                                              // 0x0C10(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Tracing_Jump_Landing;                                    // 0x0C14(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Is_Landing;                                              // 0x0C15(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_W28X[0x2];                                   // 0x0C16(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Jump_Land_Length;                                        // 0x0C18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Landing_Velocity;                                        // 0x0C1C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Exhausted;                                               // 0x0C20(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HTZK[0x7];                                   // 0x0C21(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UObject*                                             RadialMenu;                                              // 0x0C28(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Rebuild_Pending;                                         // 0x0C30(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Boosted;                                                 // 0x0C31(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Primary_Is_Xbow;                                         // 0x0C32(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper
		unsigned char                                              UnknownData_CZC6[0x5];                                   // 0x0C33(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USkeletalMesh*                                       PPSkelWeaponMesh;                                        // 0x0C38(0x0008) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		TMap<EWeaponType, struct FWeaponAnimsStruct>               PP_Anims;                                                // 0x0C40(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		TMap<EWeaponType, struct FWeaponAnimsStruct>               FPP_Anims;                                               // 0x0C90(0x0050) Edit, BlueprintVisible, DisableEditOnInstance
		struct FCharacterBody                                      Preset_Body_Data;                                        // 0x0CE0(0x0060) Edit, BlueprintVisible
		bool                                                       Override_Body_Data;                                      // 0x0D40(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TSGX[0x7];                                   // 0x0D41(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Portrait_Timer;                                          // 0x0D48(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UTextureRenderTarget2D*                              Portrait_RT;                                             // 0x0D50(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayEventData                                  Hit_Payload;                                             // 0x0D58(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance
		struct FVector                                             Look_At_Location;                                        // 0x0E08(0x000C) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Threat_Assesment_Radius;                                 // 0x0E14(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Threat_Level;                                            // 0x0E18(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_W3OG[0x4];                                   // 0x0E1C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             Threat_Level_Changed;                                    // 0x0E20(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		int32_t                                                    Combo_Index;                                             // 0x0E30(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         Boost;                                                   // 0x0E34(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4GTN[0x4];                                   // 0x0E3C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USkeletalMesh*>                               PP_Meshes;                                               // 0x0E40(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class USkeletalMesh*>                               FPP_Meshes;                                              // 0x0E50(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    PP_Meshes_To_Load_Count;                                 // 0x0E60(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    FPP_Meshes_To_Load_Count;                                // 0x0E64(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FCharacterBody                                      Body_Data_For_Current_Rebuild;                           // 0x0E68(0x0060) Edit, BlueprintVisible, DisableEditOnInstance
		bool                                                       Should_Reinit_Pose_On_Current_Rebuild;                   // 0x0EC8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_QIZT[0x7];                                   // 0x0EC9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ACombatEntity*>                               Threat_Pool;                                             // 0x0ED0(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		struct FActiveGameplayEffectHandle                         CheatStamina;                                            // 0x0EE0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		bool                                                       Rebuild_Ongoing;                                         // 0x0EE8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_TBRT[0x3];                                   // 0x0EE9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Last_Connected_Hit_Impact_Distance;                      // 0x0EEC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FHitResult                                          Hit_Candidate;                                           // 0x0EF0(0x008C) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference
		bool                                                       Wounded;                                                 // 0x0F7C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D115[0x3];                                   // 0x0F7D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Body_Blood;                                              // 0x0F80(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Blood_Stains;                                            // 0x0F84(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Naked_Turn_Speed;                                        // 0x0F88(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_5V0B[0x4];                                   // 0x0F8C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_PortraitCamera_C*                                PortraitCameraActor;                                     // 0x0F90(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             Mesh_Rebuilt;                                            // 0x0F98(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		class FScriptMulticastDelegate                             Inventory_Updated;                                       // 0x0FA8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		struct FActiveGameplayEffectHandle                         CheatHealth;                                             // 0x0FB8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         CheatFood;                                               // 0x0FC0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      LookAtAlpha;                                             // 0x0FC8(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FVector                                             Xbow_Firing_Position;                                    // 0x0FCC(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMultiFrameAsyncTask*                                Task;                                                    // 0x0FD8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              PP_Meshes_To_Load[0x10];                                 // 0x0FE0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              FPP_Meshes_To_Load[0x10];                                // 0x0FF0(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class UUserWidget*                                         CraftingUI;                                              // 0x1000(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Threat_Level_Timer;                                      // 0x1008(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Decay_Blood_Timer;                                       // 0x1010(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Lookat_Timer;                                            // 0x1018(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Update_Movement_Stats_Timer;                             // 0x1020(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FRotator                                            Previous_Sweep_Rotation;                                 // 0x1028(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FYWH[0x4];                                   // 0x1034(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAttackSweepResultStruct                            Sweep_Result;                                            // 0x1038(0x00A0) Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash
		class ABP_BaseCharacter_C*                                 Combat_Entity_Hit;                                       // 0x10D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilitySystemComponent*                             GAS_Comp;                                                // 0x10E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UItem*                                               Weapon;                                                  // 0x10E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTagContainer                               DamageTypeTags;                                          // 0x10F0(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayTagContainer                               DamageTags;                                              // 0x1110(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		struct FTimerHandle                                        Interaction_Trace_Timer;                                 // 0x1130(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<class AActor*>                                      Interactable_Actors;                                     // 0x1138(0x0010) Edit, BlueprintVisible, Net, DisableEditOnTemplate, DisableEditOnInstance, RepNotify
		class FScriptMulticastDelegate                             Interactable_Actors_Changed;                             // 0x1148(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		float                                                      Hold_Time;                                               // 0x1158(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash
		bool                                                       bIsHolding;                                              // 0x115C(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor
		unsigned char                                              UnknownData_0G6S[0x3];                                   // 0x115D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          PP_Anims_Table;                                          // 0x1160(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UDataTable*                                          FPP_Anims_Table;                                         // 0x1168(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDirection                                                 Direction_Of_Last_Received_Hit;                          // 0x1170(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Ragdolling;                                              // 0x1171(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4K5D[0x6];                                   // 0x1172(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        Cosmetics_Timer;                                         // 0x1178(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		float                                                      Threat_Value;                                            // 0x1180(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_799C[0x4];                                   // 0x1184(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESpeciesModuleType>                                 Armor_Covered_Modules;                                   // 0x1188(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAudioComponent*                                     EarRinging;                                              // 0x1198(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UMaterialInstanceDynamic*                            DamageIndicationMat;                                     // 0x11A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UW_PauseScreen_C*                                    PauseUI;                                                 // 0x11A8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       PauseUp;                                                 // 0x11B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_VOQ3[0x3];                                   // 0x11B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Field_Of_View;                                           // 0x11B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UCustomUserSettings_C*                               User_Settings;                                           // 0x11B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ESweepCheckType                                            SweepCheckType;                                          // 0x11C0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UQRT[0x3];                                   // 0x11C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Min_Fall_Damage_Velocity;                                // 0x11C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Max_Fall_Damage_Velocity;                                // 0x11C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_JRDB[0x4];                                   // 0x11CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UW_TutorialText_C*                                   TutorialTextWidget;                                      // 0x11D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class FScriptMulticastDelegate                             OnStashOpened;                                           // 0x11D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		ELimb                                                      Limb_Contact_Sphere;                                     // 0x11E8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_UKGA[0x3];                                   // 0x11E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Mouse_Speed;                                             // 0x11EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Ally_Check_Timer;                                        // 0x11F0(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FTimerHandle                                        Interaction_Sweep_Timer;                                 // 0x11F8(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UW_ChatScreen_C*                                     PlayerChatBox;                                           // 0x1200(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      ExtractionStart;                                         // 0x1208(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_43KN[0x4];                                   // 0x120C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              HeadModule[0x28];                                        // 0x1210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class USkeletalMesh*                                       HeadMesh;                                                // 0x1238(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class FName                                                Head_Bone_Name;                                          // 0x1240(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Unblockable;                                             // 0x1248(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Mouse_Smoothing;                                         // 0x1249(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_ZD65[0x6];                                   // 0x124A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FKey                                                HotbarKeyPressed;                                        // 0x1250(0x0018) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash
		struct FGameplayEventData                                  WeaponSwitchPayload;                                     // 0x1268(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance, UObjectWrapper
		class UNiagaraSystem*                                      Default_Blood_System;                                    // 0x1318(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FEmote>                                      Emotes;                                                  // 0x1320(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UOneFrameTask_C*                                     Attack_Sweep_Task;                                       // 0x1330(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Staggered_When_Kicked;                                   // 0x1338(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Disable_Lookat;                                          // 0x1339(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_2ZZ6[0x2];                                   // 0x133A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MouseY;                                                  // 0x133C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class ACombatEntity*>                               Combat_Entitites_Hit_In_Sweep;                           // 0x1340(0x0010) Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance
		class ACombatEntity*                                       Hit_Entity;                                              // 0x1350(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void Requires_Hold_To_Interact(bool* Result);
		void Hold_Time_Multiplier(float* Multiplier);
		void Action_Verb(class FText* Result);
		void Friendly_Fire(const struct FHitResult& Hit, bool* Friendly);
		void Effect_To_Apply_On_Event(const struct FGameplayTag& Event_Tag, class UClass** Effect);
		void GetPlayerStatsScreenCameraTransform(struct FTransform* CameraTransform);
		void HasWidgetsOpen(bool* IsOpen);
		void OnRep_bIsHolding();
		void OnRep_Hold_Time();
		void OnRep_Interactable_Actors();
		void Weapon_Sweep(class UStaticMeshComponent* Weapon_Component, bool* Result, struct FHitResult* Hit_Result);
		void Process_Last_Connected_Hit(const struct FAttackSweepResultStruct& Sweep_Result, class ACombatEntity** Hit_Entity);
		void OnRep_Sweep_Result();
		void BP_BaseCharacter_AutoGenFunc(const struct FActiveGameplayEffect& Effect, bool* bMatches);
		void Try_Consume_Slot(int32_t Slot);
		void Add_Threat(class AActor* Combat_Entity);
		void Set_Threat_Level(int32_t Threat_Level);
		void Threat_Level_Assesment();
		void Find_Lookat_Entity();
		void OnRep_Hit_Reaction_Type();
		void Get_Montage(bool FPP, EWeaponType Weapon_Type, EMontageType Montage_Type, EDirection Direction, int32_t Index, class UAnimMontage** Montage);
		void Load_Animation_Data();
		void OnRep_3PPSkelWeaponMesh();
		void Update_FPP_Visibility(EWeaponType Weapon_Type);
		void Update_Bolt_Attachment(EWeaponType Weapon_Type);
		void Update_Weapon_Attachment(EWeaponType Weapon_Type);
		void Attach_Weapons(const class FName& Primary_Socket, const class FName& Secondary_Socket, const class FName& Offhand_Socket, bool Use_Shield_Correction_Socket);
		void Randomize_Appearance();
		void Continue_Rebuild_Mesh(const struct FCharacterBody& Body_Data, bool Reinit_Pose, TArray<class USkeletalMesh*>* PP_Meshes, TArray<class USkeletalMesh*>* FPP_Meshes, bool* Result);
		void Start_Rebuild_Mesh(const struct FCharacterBody& Body_Data, bool Reinit_Pose, bool* Result);
		void Is_Bot(bool* Result);
		void Get_Sweep_Location(struct FVector* Location);
		void Get_Limb_Contact_Sphere(class USphereComponent** Sphere);
		void Get_Current_Weapon_Component(class UStaticMeshComponent** Current_Weapon_Component);
		void Timeline_0__FinishedFunc();
		void Timeline_0__UpdateFunc();
		void Timeline_1__FinishedFunc();
		void Timeline_1__UpdateFunc();
		void Timeline_2__FinishedFunc();
		void Timeline_2__UpdateFunc();
		void OnLoaded_A92FE2BD4D172BAAB133D6871AB74689(class UObject* Loaded);
		void OnLoaded_22B0F30545EF6C738D4319B2C138011B(class UObject* Loaded);
		void OnLoaded_BF0A223941DBD59ABA7068A7E418D995(class UObject* Loaded);
		void OnLoaded_8B8587F946192BCD278979960BEFB147(class UObject* Loaded);
		void OnLoaded_A00CADA4402D183EEEDF02A935192E00(class UObject* Loaded);
		void OnLoaded_430382134F6DF4B9D06473A1E95400E7(class UObject* Loaded);
		void OnLoaded_D09413F244239B83EE5AFB8E226DF5B7(class UObject* Loaded);
		void OnLoaded_B29015E74891700F1FEEC183F8AFDE92(class UObject* Loaded);
		void OnLoaded_2C4272DE47A6FD9ECC0C64BB17D74657(class UObject* Loaded);
		void OnLoaded_807B864043149E0EB9268F8E77E58EE2(class UObject* Loaded);
		void OnLoaded_226E736E4410AE38B8EE5194C8F35B55(class UObject* Loaded);
		void OnNotifyEnd_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName);
		void OnNotifyBegin_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName);
		void OnInterrupted_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName);
		void OnBlendOut_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName);
		void OnCompleted_9ABF55794D3B7A6F2F7C16801BE560A9(const class FName& NotifyName);
		void InpActEvt_J_K2Node_InputKeyEvent_5(const struct FKey& Key);
		void InpActEvt_N_K2Node_InputKeyEvent_4(const struct FKey& Key);
		void InpActEvt_Q_K2Node_InputKeyEvent_3(const struct FKey& Key);
		void InpActEvt_Pause_K2Node_InputActionEvent_12(const struct FKey& Key);
		void InpActEvt_StartTyping_K2Node_InputActionEvent_11(const struct FKey& Key);
		void InpActEvt_M_K2Node_InputKeyEvent_2(const struct FKey& Key);
		void InpActEvt_Inventory_K2Node_InputActionEvent_10(const struct FKey& Key);
		void InpActEvt_MercAction_K2Node_InputActionEvent_9(const struct FKey& Key);
		void InpActEvt_Item1_K2Node_InputActionEvent_8(const struct FKey& Key);
		void InpActEvt_Item2_K2Node_InputActionEvent_7(const struct FKey& Key);
		void InpActEvt_Item3_K2Node_InputActionEvent_6(const struct FKey& Key);
		void InpActEvt_Item4_K2Node_InputActionEvent_5(const struct FKey& Key);
		void InpActEvt_PrimaryWeapon_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_SecondaryWeapon_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_Shield_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_HideHUD_K2Node_InputActionEvent_1(const struct FKey& Key);
		void InpActEvt_Backslash_K2Node_InputKeyEvent_1(const struct FKey& Key);
		void Set_Inventory_Tick_Interval(float Tick_Interval);
		void Interact(class ABP_BaseCharacter_C* Instigator);
		void Switch_Exhausted_PP(bool Enable);
		void Switch_Wounded_PP(bool Enable);
		void Switch_Lantern(bool Enable);
		void Launch_Hold_Timer(float Hold_Time);
		void Stop_Hold_Timer();
		void BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, const struct FHitResult& SweepResult);
		void BndEvt__BP_BaseCharacter_InteractionTest_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex);
		void Interaction_Sweep();
		void Server_Update_Interactable_Actors(TArray<class AActor*> Actors);
		void Fire_Niagara(class UNiagaraSystem* Niagara_System, const struct FVector& Location, const struct FVector& Direction);
		void Multicast_Fire_Niagara(class UNiagaraSystem* Niagara_System, const struct FVector& Location, const struct FVector& Direction);
		void Update_Block();
		void Async_Load_Modules(int32_t PP_Count, int32_t FPP_Count, const struct FCharacterBody& Body_Data, bool Reinit_Pose);
		void Check_Load_Status();
		void Update_Weapons();
		void Server_Update_Weapons();
		void Check_If_Weapons_Updated_Properly();
		void Play_FPP_Montage(class UAnimMontage* Montage, float Play_Rate);
		void Remove_FPP_for_Bots();
		void Setup_FPP();
		void Cancel_FPP_Montage(float BlendOut);
		void Attack_Sweep_Loop();
		void Start_Attack_Sweep(ELimb Limb_Contact_Sphere);
		void End_Attack_Sweep();
		void ReceiveBeginPlay();
		void InpAxisEvt_MoveForward_K2Node_InputAxisEvent_182(float AxisValue);
		void InpAxisEvt_MoveRight_K2Node_InputAxisEvent_193(float AxisValue);
		void InpAxisEvt_TurnRate_K2Node_InputAxisEvent_35(float AxisValue);
		void InpAxisEvt_LookUpRate_K2Node_InputAxisEvent_63(float AxisValue);
		void InpAxisEvt_Turn_K2Node_InputAxisEvent_158(float AxisValue);
		void InpAxisEvt_LookUp_K2Node_InputAxisEvent_173(float AxisValue);
		void ReceiveTick(float DeltaSeconds);
		void Break_Sprint();
		void Server_Set_Cosmetics();
		void Multicast_Set_Cosmetics();
		void OnCreateMercenary();
		void StartExtractingCountdown(const struct FVector& ExtractPosition);
		void Close_Inventory();
		void Open_Inventory(class UInventoryComponent* Loot);
		void OnContainerOpen(class UInventoryComponent* Container);
		void OnLanded(const struct FHitResult& Hit);
		void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, unsigned char PrevCustomMode, unsigned char NewCustomMode);
		void On_Armor_Updated();
		void On_Character_Looks_Updated();
		void Update_Mesh();
		void Player_Appearance_Loaded(class AProjectAgarthaCharacter* Character);
		void Multicast_Update_Mesh();
		void RandomizeCustomization();
		void Update_Portrait();
		void Rebuild_Finished();
		void OnNPCDialog(class UNPCComponent* NPCComponent, const class FName& QuestToFinish, const class FName& QuestToPropose, TArray<struct FNPCQuestProgressCondition> Conditions);
		void FinishExtractingCountdown();
		void Update_Capsule();
		void Draw_Blood();
		void Update_Blood();
		void Decay_Blood();
		void UpdateInventoryEvent_Event_1(class UInventoryComponent* Inventory);
		void OnInventoryContentsChanged_Event_1(class UInventoryComponent* UpdatedInventory);
		void Float_Damage(float Damage, bool bLocked, const struct FGameplayTag& HitMarkerTag);
		void Server_Set_Crossbow_Position(const struct FVector& Xbow_Firing_Position);
		void Update_Movement_Stats();
		void OnCraftTableOpen(class UCraftingComponent* CraftTable);
		void CloseCraftTable();
		void BP_ReconnectedBeginPlay();
		void Reset_Everything();
		void Update_Cosmetics();
		void Character_Setup();
		void Hit_Indicator(const struct FVector& Impact_Location, const struct FVector& Instigator_Location);
		void NPCQuestNotEnoughSpaceToReward(const class FName& QuestName);
		void BP_OnRaidTimerUpdated(int32_t MinutesRemaining);
		void ClosePauseScreen();
		void Get_User_Settings();
		void Server_Sweep_Check_Type();
		void Owner_Sweep_Check_Type();
		void Ally_Check();
		void Play_Emote(const struct FEmote& Emote);
		void Enter_Emote_Camera();
		void Exit_Emote_Camera();
		void Stop_Emote();
		void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
		void Setup_UI();
		void PlayEmoteByRowName(const class FName& RowName);
		void ExecuteUbergraph_BP_BaseCharacter(int32_t EntryPoint);
		void OnStashOpened__DelegateSignature();
		void Interactable_Actors_Changed__DelegateSignature();
		void Inventory_Updated__DelegateSignature();
		void Mesh_Rebuilt__DelegateSignature();
		void Threat_Level_Changed__DelegateSignature(int32_t Old_Threat_Level, int32_t New_Threat_Level);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
