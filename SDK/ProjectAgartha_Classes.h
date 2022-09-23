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
	 * Class ProjectAgartha.AgarthaEffectUIData_cpp
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAgarthaEffectUIData_cpp : public UGameplayEffectUIData
	{
	public:
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              Icon[0x28];                                              // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		struct FLinearColor                                        IconTint;                                                // 0x0068(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.AgarthaGlobals
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAgarthaGlobals : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_3AYU[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.AgarthaPlayfabFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAgarthaPlayfabFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool WithEditor();
		bool UsePlayFab();
		bool IsSteamLoginEnable();
		class FString GetSteamLoginAuthToken();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.AgathaPlayfabUtils
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class UAgathaPlayfabUtils : public UObject
	{
	public:
		class FString                                              LastCustomID;                                            // 0x0028(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKNE[0x20];                                  // 0x0038(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayfabLoginSuccess;                                   // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayfabLoginFailed;                                    // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		bool LoginWithSteam(bool CreateAccount, bool LoggedInCheck);
		bool LoginWithCustomID(const class FString& CustomID, bool CreateAccount, bool LoggedInCheck);
		bool IsClientLoggedIn();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ArmorNoiseComponent
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UArmorNoiseComponent : public UActorComponent
	{
	public:
		unsigned char                                              LightArmorThreshold;                                     // 0x00B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MediumArmorThreshold;                                    // 0x00B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              HeavyArmorThreshold;                                     // 0x00B2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PT1I[0x5];                                   // 0x00B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class ASimpleBot*>                                  NearbyBots;                                              // 0x00B8(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             NearbyBotCacheLocation;                                  // 0x00C8(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UGDM[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          ArmorNoiseTablePointer;                                  // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   MyArmorAttenuation;                                      // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1AVZ[0x8];                                   // 0x00E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              MyArmorWeight;                                           // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KI4I[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		void NotifyNearbyBots(float OverrideDistance);
		void MakeNoise(EArmorNoise NoiseLine, bool bIsPriority);
		void LoadNoises(unsigned char ArmorWeight);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ATCustomWaitVelocityChange
	 * Size -> 0x0048 (FullSize[0x00C8] - InheritedSize[0x0080])
	 */
	class UATCustomWaitVelocityChange : public UAbilityTask
	{
	public:
		class FScriptMulticastDelegate                             OnVelocityChange;                                        // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class UMovementComponent*                                  CachedMovementComponent;                                 // 0x0090(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AActor*                                              Avatar;                                                  // 0x0098(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_G267[0x28];                                  // 0x00A0(0x0028) MISSED OFFSET (PADDING)

	public:
		class UATCustomWaitVelocityChange* CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, float DotThreshold, float MagnitudeThreshold, bool ReportZeroVelocity, float NearZeroThreshold);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.BinarySerializer
	 * Size -> 0x00B0 (FullSize[0x00D8] - InheritedSize[0x0028])
	 */
	class UBinarySerializer : public UObject
	{
	public:
		unsigned char                                              UnknownData_5JES[0x20];                                  // 0x0028(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInventoryLoaded;                                       // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAppearanceLoaded;                                      // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnNPCsStateLoaded;                                       // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_L240[0x60];                                  // 0x0078(0x0060) MISSED OFFSET (PADDING)

	public:
		void UpdateAchievement(EAchievement Achievement, float Progress);
		void SaveSessionToFileAsGameInstance(const class FString& RaidURL, class UProjectAgarthaGameInstance* GameInstance);
		void SaveSessionToFile(const class FString& RaidURL, class AActor* WorldContext);
		void SaveNPCsStateToPlayfab(class AProjectAgarthaCharacter* Pawn, class UCharacterNPCsComponent* CharacterNPCsComponent);
		void SaveInventoryToPlayfabAsFreebooter(class ACombatEntity* Pawn, bool bForgetRaid);
		void SaveInventoryToPlayfab(class ACombatEntity* Pawn, bool bForgetRaid);
		void SaveAppearanceToPlayfab(class AProjectAgarthaCharacter* Pawn, class UCharacterModularComponent* ModularComponent);
		void LogEvent(class ACombatEntity* Pawn, EAnalyticEvent EventType, const class FString& OptionalKey, const class FString& OptionalValue);
		void LoadSessionFromFileAsGameInstance(class UProjectAgarthaGameInstance* GameInstance);
		void LoadSessionFromFile(class AActor* WorldContext);
		void LoadNPCsStateFromPlayfab(class AProjectAgarthaCharacter* Pawn, class UCharacterNPCsComponent* CharacterNPCsComponent);
		void LoadInventoryFromPlayfab(class ACombatEntity* Pawn);
		void LoadAppearanceFromPlayfabForCreator(const class FString& BackendID, class AProjectAgarthaCharacter* CharacterActor);
		void LoadAppearanceFromPlayfab(class AProjectAgarthaCharacter* Pawn, class UCharacterModularComponent* ModularComponent);
		void Authorize(class AProjectAgarthaCharacter* Pawn, const class FString& Token, const class FString& PartyString);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.BlockedDamageType
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UBlockedDamageType : public UDamageType
	{
	public:
		bool                                                       bIsHeavyAttack;                                          // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPunch;                                                // 0x0041(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsKick;                                                 // 0x0042(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LL3D[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.BodyDamageType
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UBodyDamageType : public UDamageType
	{
	public:
		bool                                                       bIsHeavyAttack;                                          // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPunch;                                                // 0x0041(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsKick;                                                 // 0x0042(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QAU[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.BotSpawnNode
	 * Size -> 0x0170 (FullSize[0x0398] - InheritedSize[0x0228])
	 */
	class ABotSpawnNode : public ATriggerBox
	{
	public:
		unsigned char                                              UnknownData_CXEP[0x100];                                 // 0x0228(0x0100) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          PremadeBotsTable;                                        // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UDataTable*                                          CorruptedZombieInventory;                                // 0x0330(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        SpawnTick;                                               // 0x0338(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    MaximumEntitiesInWorld;                                  // 0x0340(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumCrowding;                                         // 0x0344(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnCap;                                                // 0x0348(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnPenalty;                                            // 0x034C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnRecovery;                                           // 0x0350(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRandom;                                               // 0x0354(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SPD4[0x3];                                   // 0x0355(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Party;                                                   // 0x0358(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBotStyle                                                  BotType;                                                 // 0x035C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KGW8[0x3];                                   // 0x035D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BeginSpawningCorruptedAt;                                // 0x0360(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DifficultyMinimum;                                       // 0x0364(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DifficultyMaximum;                                       // 0x0365(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityAggressivenessMinimum;                        // 0x0366(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityAggressivenessMaximum;                        // 0x0367(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityCuriousnessMinimum;                           // 0x0368(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityCuriousnessMaximum;                           // 0x0369(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityCowardiceMinimum;                             // 0x036A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityCowardiceMaximum;                             // 0x036B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityAgilityMinimum;                               // 0x036C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityAgilityMaximum;                               // 0x036D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityConfidenceMinimum;                            // 0x036E(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityConfidenceMaximum;                            // 0x036F(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityScavengerMinimum;                             // 0x0370(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              PersonalityScavengerMaximum;                             // 0x0371(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UndeadChance;                                            // 0x0372(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SLVF[0x5];                                   // 0x0373(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        SpawnTable;                                              // 0x0378(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                UniqueSpawn;                                             // 0x0388(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UniqueSpawnIndex;                                        // 0x0390(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HI9I[0x4];                                   // 0x0394(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnSpawnTick();
		void OnSpawnNewZombieBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom);
		void OnSpawnNewRabbitBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom);
		void OnSpawnNewGoatBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom);
		void OnSpawnNewCorruptZombieBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom);
		void OnSpawnNewBotEnd(class ACombatEntity* NewBot, class UBoxComponent* ComponentSpawnedFrom);
		void OnSpawnNewBotBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom);
		void OnSpawnNewBoarBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom);
		void OnSpawnNewAsuraBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom);
		void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
		void Async_FindBotLocation(const class FScriptDelegate& Out, TArray<struct FTransform> BadTransforms, const struct FTransform& NodeOrigin, class UWorld* World, TArray<struct FTransform> Components, TMap<class UBoxComponent*, int32_t> AsyncSpawnCount);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CameraFreePawn
	 * Size -> 0x0008 (FullSize[0x0288] - InheritedSize[0x0280])
	 */
	class ACameraFreePawn : public APawn
	{
	public:
		class UCameraComponent*                                    Camera;                                                  // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CharacterArmorComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UCharacterArmorComponent : public UActorComponent
	{
	public:
		void OnUnequipArmor(ECharacterModuleType Module, TArray<ECharacterModuleType> ShowModules);
		void OnEquipArmor(ECharacterModuleType Module, TArray<ECharacterModuleType> HideModules, int32_t BodyType, const struct FItemTable& ItemData);
		void OnArmorUpdate();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CharacterBase
	 * Size -> 0x0078 (FullSize[0x0530] - InheritedSize[0x04B8])
	 */
	class ACharacterBase : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_UH9L[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		bool                                                       bIsWhitelisted;                                          // 0x04C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HZ91[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      DefaultAbilities;                                        // 0x04C8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      DefaultEffects;                                          // 0x04D8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KVHZ[0x30];                                  // 0x04E8(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAudioComponent*                                     LastSound;                                               // 0x0518(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bIsDead;                                                 // 0x0520(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4649[0xF];                                   // 0x0521(0x000F) MISSED OFFSET (PADDING)

	public:
		void OnRep_Death(bool OldValue);
		void OnDeathCharacter();
		void On_Death();
		void GiveGameplayAbility(class UClass* AbilityToGive);
		void BP_PlayerDied();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CharacterHistoryComponent
	 * Size -> 0x0118 (FullSize[0x01C8] - InheritedSize[0x00B0])
	 */
	class UCharacterHistoryComponent : public UActorComponent
	{
	public:
		TArray<struct FDamageHistory>                              HistoryOfDamage;                                         // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		TArray<struct FKillHistory>                                HistoryOfKills;                                          // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected
		class FName                                                KillerName;                                              // 0x00D0(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A8QW[0x8];                                   // 0x00D8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPlayerStats                                        UnsavedStats;                                            // 0x00E0(0x004C) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPlayerStats                                        SessionStats;                                            // 0x012C(0x004C) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FPlayerStats                                        ArchivedStats;                                           // 0x0178(0x004C) BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bWasTeamkilled;                                          // 0x01C4(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWasBotkilled;                                           // 0x01C5(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_E7HM[0x2];                                   // 0x01C6(0x0002) MISSED OFFSET (PADDING)

	public:
		void TrackStat(EPlayerStat Stat, int32_t Amount);
		int32_t GetStat(EPlayerStat Stat);
		struct FPlayerStats GetSessionStats();
		void GetHistoryOfKills(TArray<struct FKillHistory>* Kills);
		struct FPlayerStats GetArchivedStats();
		void Client_StatsChange(int32_t PlayerKills, int32_t NPCKills, int32_t Networth);
		void Client_KillerSet(const class FName& Name, TArray<struct FDamageHistory> historyDamage, TArray<struct FKillHistory> historyKills);
		void ArchiveStats();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CharacterModularComponent
	 * Size -> 0x0060 (FullSize[0x0110] - InheritedSize[0x00B0])
	 */
	class UCharacterModularComponent : public UActorComponent
	{
	public:
		struct FCharacterBody                                      CharacterBody;                                           // 0x00B0(0x0060) BlueprintVisible, BlueprintReadOnly, Net, Protected, NativeAccessSpecifierProtected

	public:
		void UpdateCharacterMesh();
		bool SetCharacterBody(const struct FCharacterBody& CharacterNewBody);
		struct FCharacterBody GetCharacterBody();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CharacterNPCsComponent
	 * Size -> 0x0050 (FullSize[0x0100] - InheritedSize[0x00B0])
	 */
	class UCharacterNPCsComponent : public UActorComponent
	{
	public:
		class UDataTable*                                          QuestsTable;                                             // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNPCLevel>                                   NPCLevels;                                               // 0x00B8(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
		TArray<struct FProjectAgartha_FNPCQuestProgress>           QuestsProgress;                                          // 0x00C8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5NW[0x4];                                   // 0x00D8(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LastQuestNameFinished;                                   // 0x00DC(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                LastQuestNameToPropose;                                  // 0x00E4(0x0008) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FNPCLevel                                           DefaultLevel;                                            // 0x00EC(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_YPDS[0x4];                                   // 0x00FC(0x0004) MISSED OFFSET (PADDING)

	public:
		bool UpdateQuestState(const class FName& QuestName);
		void Server_FirstTalkFinished(class UNPCComponent* NPCComponent);
		void Server_FinishQuest(class UNPCComponent* NPCComponent, const class FName& QuestName);
		void Server_ClearQuests(bool ResetMerchants);
		bool OverlappedQuestPoint(const class FName& QuestPoint);
		void OnRep_NPCLevels();
		bool NPCQuestProgress(const class FName& QuestName, struct FProjectAgartha_FNPCQuestProgress* Progress);
		EQuestProgressType GetQuestState(const class FName& QuestName);
		bool GetQuestInfo(const class FName& QuestName, struct FQuestTable* QuestRow);
		bool GetItemInfo(const class FName& ItemRowName, struct FItemTable* ItemRow);
		int32_t FindNPCQuestInProgress(const class FName& NPCName, const class FName& QuestName, struct FProjectAgartha_FNPCQuestProgress* QuestProgress);
		bool FindNPCLevel(const class FName& NPCName, struct FNPCLevel* NPCLevel);
		int32_t FindItems(const class FName& ItemName, TArray<struct FQuestItemsStat> ItemStats);
		void EventQuestResult(EQuestActionResult Result, const class FName& QuestName);
		void Client_Quest_Result(EQuestActionResult Result, const class FName& QuestName);
		void ClearQuests(bool ResetMerchants);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CharacterTravelingComponent
	 * Size -> 0x0008 (FullSize[0x00B8] - InheritedSize[0x00B0])
	 */
	class UCharacterTravelingComponent : public UActorComponent
	{
	public:
		int32_t                                                    SpawnGroup;                                              // 0x00B0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnSafePeriod;                                         // 0x00B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnRep_SpawnGroup();
		void MoveToSpawn();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CharacterWeaponsComponent
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UCharacterWeaponsComponent : public UActorComponent
	{
	public:
		void OnWeaponUpdate();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ChatSubsystem
	 * Size -> 0x0030 (FullSize[0x0060] - InheritedSize[0x0030])
	 */
	class UChatSubsystem : public UGameInstanceSubsystem
	{
	public:
		unsigned char                                              UnknownData_VEQZ[0x8];                                   // 0x0030(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnMessageReceived;                                       // 0x0038(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C65K[0x18];                                  // 0x0048(0x0018) MISSED OFFSET (PADDING)

	public:
		void SendMessage_3(EChatChannel _Channel, const class FString& _Name, const class FString& _Message);
		void SendMessage(const struct FChatLine& ChatLine);
		void ReceivedMessage(const struct FChatLine& ChatLine);
		void MuteChannel(EChatChannel Channel, bool bMuted);
		TArray<struct FChatLine> GetAllLinesFromChannel(EChatChannel Channel);
		class FString FormatLine(const struct FChatLine& ChatLine);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.PlayerCharacter
	 * Size -> 0x0000 (FullSize[0x0530] - InheritedSize[0x0530])
	 */
	class APlayerCharacter : public ACharacterBase
	{
	public:
		void InitializeAbilityBindings();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CombatEntity
	 * Size -> 0x0308 (FullSize[0x0838] - InheritedSize[0x0530])
	 */
	class ACombatEntity : public APlayerCharacter
	{
	public:
		class FName                                                EntityName;                                              // 0x0530(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBotStyle                                                  EntityStyle;                                             // 0x0538(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IAW3[0x7];                                   // 0x0539(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItem*                                               InsuranceItem;                                           // 0x0540(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UItem*                                               TempItem;                                                // 0x0548(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              BackendID;                                               // 0x0550(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingAttack;                                          // 0x0560(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsChargingHeavyAttack;                                  // 0x0561(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingHeavyAttack;                                     // 0x0562(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingBlock;                                           // 0x0563(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToBlock;                                           // 0x0564(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToAim;                                             // 0x0565(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsAiming;                                               // 0x0566(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsReloading;                                            // 0x0567(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRangedWeaponLoaded;                                   // 0x0568(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingKick;                                            // 0x0569(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLockedMovement;                                       // 0x056A(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingDodge;                                           // 0x056B(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingSprint;                                          // 0x056C(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToSprint;                                          // 0x056D(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingCrouch;                                          // 0x056E(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWantsToCrouch;                                          // 0x056F(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBotWantsToCombo;                                        // 0x0570(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bBotWantsToHeavy;                                        // 0x0571(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsDoingFlinch;                                          // 0x0572(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WA78[0x1];                                   // 0x0573(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageNormal;                                            // 0x0574(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultFistStaminaPercentage;                            // 0x0578(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DefaultKickStaminaPercentage;                            // 0x057C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageCritical;                                          // 0x0580(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackSpeed;                                             // 0x0584(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageReduction;                                         // 0x0588(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveSpeed;                                               // 0x058C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxHealth;                                               // 0x0590(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxStamina;                                              // 0x0594(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxFood;                                                 // 0x0598(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenHealth;                                             // 0x059C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenStamina;                                            // 0x05A0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      RegenFood;                                               // 0x05A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MinimumDamage;                                           // 0x05A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Health;                                                  // 0x05AC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Stamina;                                                 // 0x05B0(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Food;                                                    // 0x05B4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GuardDirection;                                          // 0x05B8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FollowDistance;                                          // 0x05BC(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsAggressive;                                            // 0x05C0(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsingPrimary;                                         // 0x05C1(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUsingShield;                                          // 0x05C2(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TH9G[0x5];                                   // 0x05C3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              DisplayName;                                             // 0x05C8(0x0010) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ReplicationPunchthrough;                                 // 0x05D8(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSavesDisabledThisSession;                               // 0x05DC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPerformedInitialRaidSave;                               // 0x05DD(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VBG[0x2];                                   // 0x05DE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DamageTakenTime;                                         // 0x05E0(0x0004) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RT6K[0x4];                                   // 0x05E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UVoiceComponent*                                     MyVoiceComponent;                                        // 0x05E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          VoiceTablePointer;                                       // 0x05F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VoiceIdentifier;                                         // 0x05F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   VoiceAttenuation;                                        // 0x0600(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UArmorNoiseComponent*                                MyArmorNoiseComponent;                                   // 0x0608(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ArmorNoiseTablePointer;                                  // 0x0610(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ArmorWeightLevel;                                        // 0x0618(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PCCW[0x7];                                   // 0x0619(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundAttenuation*                                   ArmorNoiseAttenuation;                                   // 0x0620(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      HandAbilities;                                           // 0x0628(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      SwordNoShieldAbilities;                                  // 0x0638(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      SwordWithShieldAbilities;                                // 0x0648(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      LongSwordAbilities;                                      // 0x0658(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      CrossbowAbilities;                                       // 0x0668(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      SecondaryAbilities;                                      // 0x0678(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		class UBinarySerializer*                                   BinaryDataIO;                                            // 0x0688(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YDD9[0x28];                                  // 0x0690(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int64_t                                                    UniqueBehavior;                                          // 0x06B8(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponType                                                WeaponType;                                              // 0x06C0(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZ13[0x3];                                   // 0x06C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseHealth;                                              // 0x06C4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseStamina;                                             // 0x06C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseFood;                                                // 0x06CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseHealthRegen;                                         // 0x06D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseStaminaRegen;                                        // 0x06D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseFoodRegen;                                           // 0x06D8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      DamageReductionCap;                                      // 0x06DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseStaminaAttack;                                       // 0x06E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseStaminaHeavy;                                        // 0x06E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseStaminaBlock;                                        // 0x06E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseStaminaSprint;                                       // 0x06EC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseStaminaDodge;                                        // 0x06F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseStaminaKick;                                         // 0x06F4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BaseStaminaJump;                                         // 0x06F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HFIH[0x4];                                   // 0x06FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGameplayAbilitySpecHandle>                  WeaponTypeAbilityHandles;                                // 0x0700(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected
		ECharacterStance                                           Stance;                                                  // 0x0710(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_Q4IE[0x3];                                   // 0x0711(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StealthBonus;                                            // 0x0714(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanSpawnBotBuddies;                                     // 0x0718(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsRagdoll;                                              // 0x0719(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJZB[0x2];                                   // 0x071A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      DecayReductionPerSecond;                                 // 0x071C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryComponent*                                 Inventory;                                               // 0x0720(0x0008) BlueprintVisible, ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryComponent*                                 Stash;                                                   // 0x0728(0x0008) BlueprintVisible, ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UInventoryComponent*                                 MyDeadInventory;                                         // 0x0730(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UItem*                                               TestSwordItem;                                           // 0x0738(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ItemDataTable;                                           // 0x0740(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          DropDataTable;                                           // 0x0748(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          InitInventoryDataTable;                                  // 0x0750(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UDataTable*>                                  InitFreebooterDataTable;                                 // 0x0758(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       LoadInitInventory;                                       // 0x0768(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFullyLoaded;                                          // 0x0769(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZNHN[0x6];                                   // 0x076A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle;                                             // 0x0770(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        DisconnectTimer;                                         // 0x0778(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FItemStats                                          PassiveStats;                                            // 0x0780(0x00A0) NativeAccessSpecifierPublic
		TArray<struct FItemStats>                                  Effects;                                                 // 0x0820(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              Party;                                                   // 0x0830(0x0001) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEnraged;                                                // 0x0831(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_UDQQ[0x6];                                   // 0x0832(0x0006) Fix size for supers

	public:
		void UpdateStanceAndType(EWeaponType NewWeaponType);
		void UpdateExtractionBasedOnParty(bool bMoveToSpawnWhenComplete);
		void TryPerformJump();
		void SetStance(ECharacterStance CStance);
		void Server_UseActionInventory(class UInventoryComponent* ActionInventory);
		void Server_UseAction(const struct FVector& Begin, const struct FVector& End);
		void Server_UpdateStash(class UItem* StashItem);
		void Server_Sheathe(bool bIsFighting);
		void Server_PlaceInWorld(class UItem* Target, class UWorld* World, const struct FVector& WorldPosition);
		void Server_PlaceInContainer(class UItem* TargetItem, class AItemActor* TargetItemActor, class UItem* TargetContainer);
		void Server_OnWeaponComponentStanceChange(bool bIsFighting, EWeaponType Weapon);
		void Server_OnWeaponComponentEquipmentChange(class UItem* NewItem, EquipmentType ItemLocation);
		void Server_OnSheatheAction(bool bIsFighting, EWeaponType Weapon);
		void Server_OnServerKick();
		void Server_OnArmorComponentEquipmentChange(class UItem* NewItem, class UItem* PrevItem, EquipmentType ItemLocation);
		void Server_CraftRecipeOnTable(const struct FRecipeTable& Recipe, TArray<class UItem*> Requirements, class UCraftingComponent* CraftTable, int32_t Repeats);
		void SaveInventory();
		void ReplicateStashDelayed();
		void RemoveStats(struct FItemStats* NewStats, unsigned char Durability);
		void RemoveAbilities(EWeaponType MoveSet);
		bool RaycastFromPlayerController(struct FVector* Start, struct FVector* End, float Distance);
		void PlayEmoteByRowName(const class FName& RowName);
		bool PickUp(class AItemActor* Item);
		void PerformLightAttack();
		void PerformKick();
		void PerformHeavyAttack();
		void PerformDodge(unsigned char Direction);
		bool OnWeaponComponentEquipmentChange(class UItem* NewItem, EquipmentType ItemLocation);
		void OnUse();
		void OnStanceChange(bool bIsFighting);
		void OnSheatheUnsheathe(bool bIsFighting, EWeaponType Weapon);
		void OnRep_Stance(ECharacterStance OldValue);
		void OnRep_Party(unsigned char OldValue);
		void OnRep_OnInventoryUpdate();
		void OnNPCDialog(class UNPCComponent* NPCComponent, const class FName& QuestToFinish, const class FName& QuestToPropose, TArray<struct FNPCQuestProgressCondition> Conditions);
		void OnInventoryLoaded(class ACombatEntity* Pawn);
		void OnEquipmentChange(class UItem* NewItem, class UItem* PrevItem, EquipmentType ItemLocation);
		void OnCraftTableOpen(class UCraftingComponent* CraftTable);
		void OnContainerOpen(class UInventoryComponent* Container);
		void OnArmorComponentEquipmentChange(class UItem* NewItem, class UItem* PrevItem, EquipmentType ItemLocation);
		void NPCQuestNotEnoughSpaceToReward(const class FName& QuestName);
		void Multicast_UpdateStash(class UItem* StashItem);
		void Multicast_PlaySound(float VolumeMultiplier, float PitchMultiplier, class USoundAttenuation* Attenuation, bool bCancelLastSound);
		void Multicast_OnWeaponComponentStanceChange(bool bIsFighting, EWeaponType Weapon);
		void Multicast_OnWeaponComponentEquipmentChange(class UItem* NewItem, EquipmentType ItemLocation);
		void Multicast_OnSheatheAction(bool IsFighting, EWeaponType Weapon);
		void Multicast_OnArmorComponentEquipmentChange(class UItem* NewItem, class UItem* PrevItem, EquipmentType ItemLocation);
		bool IsUniqueBehaviorActive(EUniqueBehavior Behaviors);
		EWeaponType GetWeaponType();
		struct FVector GetDropPosition();
		class AItemActor* FindItemObject(const struct FVector& Direction);
		class AItemContainer* FindItemContainer(const struct FVector& Direction);
		class UInventoryComponent* FindCorpse(const struct FVector& Direction);
		void ConsumeStamina(ECombatAction Action);
		void Client_UseActionCrafting(class UCraftingComponent* ContainerResult);
		void Client_UseAction(class UInventoryComponent* ContainerResult);
		void Client_OnWeaponComponentEquipmentChange(class UItem* NewItem, EquipmentType ItemLocation);
		void Client_OnServerKick(const class FString& Reason);
		void Client_OnFullyLoaded();
		void Client_OnCraftRecipe(class UCraftingComponent* CraftTable, bool bCraftWasSuccess, ECraftResult Result);
		void Client_NPCQuestNotEnoughSpaceToReward(const class FName& QuestName);
		void Client_NPCAction(class UNPCComponent* NPCComponent, const class FName& QuestToFinish, const class FName& QuestToPropose, TArray<struct FNPCQuestProgressCondition> Conditions);
		void CheckRetaliation(class AActor* DamageCauser);
		bool CanAffordStamina(ECombatAction Action);
		void BP_ReconnectedBeginPlay();
		void BP_OnRep_OnEnraged();
		void AddStats(struct FItemStats* NewStats, unsigned char Durability);
		void AddAbilities(EWeaponType MoveSet);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CraftingComponent
	 * Size -> 0x00A8 (FullSize[0x0158] - InheritedSize[0x00B0])
	 */
	class UCraftingComponent : public UActorComponent
	{
	public:
		class UItem*                                               RootItem;                                                // 0x00B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UItem*>                                       CraftingInputs;                                          // 0x00B8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRecipeTable>                                MyRecipes;                                               // 0x00C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		struct FRecipeTable                                        UpgradeRecipe;                                           // 0x00D8(0x0048) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		EStationType                                               Station;                                                 // 0x0120(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SCTI[0x7];                                   // 0x0121(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          RecipeDataTable;                                         // 0x0128(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ItemDataTable;                                           // 0x0130(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             RecipeCraftedEvent;                                      // 0x0138(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnStationRankRetrieved;                                  // 0x0148(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void ReturnCraftReqsToInventory(class ACombatEntity* Player);
		void GetStationRank(class ACombatEntity* Player);
		int32_t GetMaxAmountOfRepeats(const struct FRecipeTable& Recipe, TArray<class UItem*> Container);
		void GetItemsByIndex(int32_t ItemIndex, TArray<class UItem*>* ItemsFound, TArray<class UItem*>* ContainerToSearch);
		struct FIntPoint GetEmptyCraftingSlot(TArray<int32_t> _collisionGrid, const struct FIntPoint& _itemScale, int32_t _gridSize);
		TArray<class UItem*> GetCraftOutputItems(const struct FRecipeTable& Recipe, TArray<class UItem*> Requirements, class UInventoryComponent* _inventoryComponent);
		int32_t GetAmountOfItemsByType(EquipmentType ItemType, TArray<class UItem*>* ContainerToSearch);
		int32_t GetAmountOfItemsByIndex(int32_t ItemIndex, TArray<class UItem*>* ContainerToSearch);
		TArray<struct FRecipeTable> GetAllValidRecipes(class ACombatEntity* Player, bool _useStationLevel);
		void CraftRecipe(const struct FRecipeTable& Recipe, TArray<class UItem*> Requirements, class ACombatEntity* Player, int32_t Repeat);
		void Client_OnCraftRecipe(bool bCraftWasSuccess, ECraftResult Result);
		void Client_GetStationRank(unsigned char ContainerWidth, unsigned char ContainerHeight, unsigned char Level);
		void BP_OnCraftRecipe(bool bCraftWasSuccess, ECraftResult Result);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CustomAbilitySystemComponent
	 * Size -> 0x0008 (FullSize[0x1310] - InheritedSize[0x1308])
	 */
	class UCustomAbilitySystemComponent : public UAbilitySystemComponent
	{
	public:
		unsigned char                                              UnknownData_VUTP[0x8];                                   // 0x1308(0x0008) MISSED OFFSET (PADDING)

	public:
		void RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		class UGameplayEffectUIData* GetActiveGameplayEffectUIData(const struct FActiveGameplayEffectHandle& ActiveHandle);
		void ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		void CancelAbilitiesWithTags(const struct FGameplayTagContainer& WithTags);
		void AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CustomEngineSubsystem
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UCustomEngineSubsystem : public UEngineSubsystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.CustomGameplayAbility
	 * Size -> 0x0048 (FullSize[0x03F8] - InheritedSize[0x03B0])
	 */
	class UCustomGameplayAbility : public UGameplayAbility
	{
	public:
		EGameplayAbilityBindings                                   InputBinding;                                            // 0x03B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       ActivateAbilityOnGranted;                                // 0x03B1(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SXHT[0x6];                                   // 0x03B2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FScalableFloat                                      BaseAbilityStrength;                                     // 0x03B8(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<struct FAbilityModifierStruct>                      AbilityModifiers;                                        // 0x03D8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class UGameplayTask*>                               TaskPool;                                                // 0x03E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void SetAbilityLevel(int32_t Level);
		float GetModifiedAbilityStrength();
		void ApplySetByCallerGameplayEffect(class AActor* Target, class UClass* GameplayEffect, float EffectLevel, const struct FGameplayTag& SetByCallerTag, float SetByCallerAmount);
		void ApplyGameplayEffectToTarget(class UClass* EffectToAdd, class AActor* Target, float EffectLevel);
		void ApplyGameplayEffectToOwner(class UClass* EffectToAdd, float EffectLevel);
		void AddAsyncTaskToPool(class UGameplayTask* Task);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.DeathController
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class ADeathController : public AAIController
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.EquipmentAttributeSet
	 * Size -> 0x01A0 (FullSize[0x01D0] - InheritedSize[0x0030])
	 */
	class UEquipmentAttributeSet : public UAttributeSet
	{
	public:
		struct FGameplayAttributeData                              BaseDamage;                                              // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              FistDamage;                                              // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              KickDamage;                                              // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              FistStaminaPercentage;                                   // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              KickStaminaPercentage;                                   // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              CriticalDamageMultiplier;                                // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              AttackSpeedMultiplier;                                   // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              LootSpeedMultiplier;                                     // 0x00A0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              StaminaUsageMultiplier;                                  // 0x00B0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              JumpHeightMultiplier;                                    // 0x00C0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              DamageReduction;                                         // 0x00D0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              CriticalDamageReduction;                                 // 0x00E0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ProjectileDamageReduction;                               // 0x00F0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BladeDamageReduction;                                    // 0x0100(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BluntDamageReduction;                                    // 0x0110(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              FallDamageReduction;                                     // 0x0120(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MoveSpeed;                                               // 0x0130(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              TurnSpeed;                                               // 0x0140(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              DodgeSpeed;                                              // 0x0150(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BlockDamageDealt;                                        // 0x0160(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BlockDamageTaken;                                        // 0x0170(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BleedMagnitude;                                          // 0x0180(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BreakBoneMagnitude;                                      // 0x0190(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BleedResistance;                                         // 0x01A0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              StunResistance;                                          // 0x01B0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              ArmorWeight;                                             // 0x01C0(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic

	public:
		void OnRep_TurnSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_StunResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_StaminaUsageMultiplier(const struct FGameplayAttributeData& OldValue);
		void OnRep_ProjectileDamageReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_MoveSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_LootSpeedMultiplier(const struct FGameplayAttributeData& OldValue);
		void OnRep_KickStaminaPercentage(const struct FGameplayAttributeData& OldValue);
		void OnRep_KickDamage(const struct FGameplayAttributeData& OldValue);
		void OnRep_JumpHeightMultiplier(const struct FGameplayAttributeData& OldValue);
		void OnRep_FistStaminaPercentage(const struct FGameplayAttributeData& OldValue);
		void OnRep_FistDamage(const struct FGameplayAttributeData& OldValue);
		void OnRep_FallDamageReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_DodgeSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_DamageReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_CriticalDamageReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_CriticalDamageMultiplier(const struct FGameplayAttributeData& OldValue);
		void OnRep_BreakBoneMagnitude(const struct FGameplayAttributeData& OldValue);
		void OnRep_BluntDamageReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_BlockDamageTaken(const struct FGameplayAttributeData& OldValue);
		void OnRep_BlockDamageDealt(const struct FGameplayAttributeData& OldValue);
		void OnRep_BleedResistance(const struct FGameplayAttributeData& OldValue);
		void OnRep_BleedMagnitude(const struct FGameplayAttributeData& OldValue);
		void OnRep_BladeDamageReduction(const struct FGameplayAttributeData& OldValue);
		void OnRep_BaseDamage(const struct FGameplayAttributeData& OldValue);
		void OnRep_AttackSpeedMultiplier(const struct FGameplayAttributeData& OldValue);
		void OnRep_ArmorWeight(const struct FGameplayAttributeData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ExtractionPoint
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AExtractionPoint : public AActor
	{
	public:
		int32_t                                                    SpawnGroup;                                              // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IgnoreSpawnGroup;                                        // 0x0224(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFKW[0x3];                                   // 0x0225(0x0003) MISSED OFFSET (PADDING)

	public:
		void SetPCVisibility(bool Visible);
		bool isCharacterAllowedToBeExtracted(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.FoodAttributeSet
	 * Size -> 0x0060 (FullSize[0x0090] - InheritedSize[0x0030])
	 */
	class UFoodAttributeSet : public UAttributeSet
	{
	public:
		struct FGameplayAttributeData                              CurrentFood;                                             // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaximumFood;                                             // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              FoodRegeneration;                                        // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              FoodDrain;                                               // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              FoodFullness;                                            // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              PotionToxicity;                                          // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic

	public:
		void OnRep_PotionToxicity(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaximumFood(const struct FGameplayAttributeData& OldValue);
		void OnRep_FoodRegeneration(const struct FGameplayAttributeData& OldValue);
		void OnRep_FoodFullness(const struct FGameplayAttributeData& OldValue);
		void OnRep_FoodDrain(const struct FGameplayAttributeData& OldValue);
		void OnRep_CurrentFood(const struct FGameplayAttributeData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.GASBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGASBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		float TryGetAttributeValueFromActor(class AActor* Actor, const struct FGameplayAttribute& Attribute, EAttributeSearchType SearchType, bool* ValueFound);
		class UAbilitySystemComponent* TryGetAbilitySystemComponentFromActor(class AActor* Actor, bool* WasFound);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.GenericRadialMenuWidget
	 * Size -> 0x01A8 (FullSize[0x0408] - InheritedSize[0x0260])
	 */
	class UGenericRadialMenuWidget : public UUserWidget
	{
	public:
		class UImage*                                              RadiusDebug;                                             // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          DebugLabel;                                              // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UImage*                                              DebugMousePos;                                           // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UScaleBox*                                           RootScaleBoxReference;                                   // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UOverlay*                                            RootOverlayReference;                                    // 0x0280(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UImage*                                              RadialBackgroundReference;                               // 0x0288(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             OnSelectionChanged;                                      // 0x0290(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnEnteredDeadzone;                                       // 0x02A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnExitedDeadzone;                                        // 0x02B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWidgetHighlighted;                                     // 0x02C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWidgetUnhighlighted;                                   // 0x02D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnWidgetSelected;                                        // 0x02E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		int32_t                                                    defaultPlayerIndex;                                      // 0x02F0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       defaultToMouseIfNoJoystick;                              // 0x02F4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       autoCenterMouse;                                         // 0x02F5(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       useCustomInput;                                          // 0x02F6(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       useQuickCommands;                                        // 0x02F7(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FQuickCommand>                               acceptedQuickCommands;                                   // 0x02F8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      joystickDeadzone;                                        // 0x0308(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      mouseDeadzone;                                           // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EJoystickType                                              joystickType;                                            // 0x0310(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       canAcceptInput;                                          // 0x0311(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B6TE[0x2];                                   // 0x0312(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Segments;                                                // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      itemOffsetRadius;                                        // 0x0318(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      labelOffsetRadius;                                       // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       showLabels;                                              // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       allowResizing;                                           // 0x0321(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4777[0x6];                                   // 0x0322(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USoundBase*                                          selectionChangedSound;                                   // 0x0328(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  materialBase;                                            // 0x0330(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       autoRotateForUp;                                         // 0x0338(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       useCustomTexture;                                        // 0x0339(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       useCustomColors;                                         // 0x033A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B74O[0x1];                                   // 0x033B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLinearColor                                        outerLabelRingColor;                                     // 0x033C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        innerRingColor;                                          // 0x034C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        outerRingColor;                                          // 0x035C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ringMainColor;                                           // 0x036C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        unhighlightedColor;                                      // 0x037C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LROD[0x4];                                   // 0x038C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTexture*                                            radialTexture;                                           // 0x0390(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      indexRaw;                                                // 0x0398(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CYM2[0x4];                                   // 0x039C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMaterialInstanceDynamic*                            dynamicMaterial;                                         // 0x03A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       inDeadzone;                                              // 0x03A8(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       useDeadzoneEvents;                                       // 0x03A9(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VVIM[0x6];                                   // 0x03AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class APlayerController*                                   inputController;                                         // 0x03B0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    selectedIndex;                                           // 0x03B8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           currentInput;                                            // 0x03BC(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VYHF[0x4];                                   // 0x03C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGenericRadialMenuWidget*                            previousRadialMenu;                                      // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UUserWidget*>                                 Children;                                                // 0x03D0(0x0010) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UUserWidget*>                                 labels;                                                  // 0x03E0(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FVector2D                                           CustomInput;                                             // 0x03F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<struct FKey>                                        acceptedQuickCommandsKeys;                               // 0x03F8(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		void UpdateSegments(int32_t _segments);
		void UpdateMaterialVisuals();
		void UpdateMaterials();
		void UpdateInput();
		void UpdateDirectionWithMouseCursor();
		void UpdateDirectionWithJoystick();
		void UpdateChildPosition(int32_t _index);
		void SetInputDirection(const struct FVector2D& _input);
		void SetIndex(int32_t _index);
		void SetInDeadzone(bool _inDeadzone);
		void SetCPPReferences();
		void SelectButtonPressed();
		void RemoveQuickCommandAtIndex(int32_t _index);
		void RemoveLabelAtIndex(int32_t _index);
		bool RemoveChildWidgetFromRadialMenu(class UUserWidget* _widget);
		bool RemoveChildIndexFromRadialMenu(int32_t _indexToRemove);
		bool RegisterPlayerInput(class APlayerController* _controller);
		void FixMainRotation();
		struct FVector2D FixInputRotation(const struct FVector2D& _input);
		void ClearChildren();
		void CenterMousePosition(int32_t _playerIndex);
		void AutoRegisterToInput();
		void AttachQuickCommandToChild(class UUserWidget* _child, const struct FKey& _quickCommandKey);
		bool AddChildToRadialMenu(class UUserWidget* _widget);
		bool AddChildAndLabelToRadialMenu(class UUserWidget* _child, class UUserWidget* _label);
		bool AddChildAndLabelAndQuickCommandToRadialMenu(class UUserWidget* _child, class UUserWidget* _label, const struct FKey& _quickCommandKey);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.HealthAttributeSet
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UHealthAttributeSet : public UAttributeSet
	{
	public:
		struct FGameplayAttributeData                              Damage;                                                  // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              Healing;                                                 // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              CurrentHealth;                                           // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaximumHealth;                                           // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              HealthRegeneration;                                      // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BloodLoss;                                               // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUZD[0x8];                                   // 0x0090(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnRep_MaximumHealth(const struct FGameplayAttributeData& OldValue);
		void OnRep_HealthRegeneration(const struct FGameplayAttributeData& OldValue);
		void OnRep_CurrentHealth(const struct FGameplayAttributeData& OldValue);
		void OnRep_BloodLoss(const struct FGameplayAttributeData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.InventoryComponent
	 * Size -> 0x04D0 (FullSize[0x0580] - InheritedSize[0x00B0])
	 */
	class UInventoryComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L6H8[0x8];                                   // 0x00B0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             UpdateInventoryEvent;                                    // 0x00B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             ItemInventoryOperationEvent;                             // 0x00C8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InsuranceResponseEvent;                                  // 0x00D8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryContentsChanged;                              // 0x00E8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnResourceContentsChanged;                               // 0x00F8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnServerRotatedItem;                                     // 0x0108(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInventoryDeleted;                                      // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bIgnoreInventoryEmptiedEvent;                            // 0x0128(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsProcessingInsurance;                                  // 0x0129(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanUseWeapons;                                          // 0x012A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSentDataToGAS;                                          // 0x012B(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ECFB[0x4];                                   // 0x012C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              InteractionSound[0x28];                                  // 0x0130(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		bool                                                       bIsIgnoringOffhand;                                      // 0x0158(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6I5P[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          ItemDataTable;                                           // 0x0160(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          DropDataTable;                                           // 0x0168(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EInventoryType                                             Type;                                                    // 0x0170(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GR3C[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemStats                                          WeaponStats;                                             // 0x0178(0x00A0) NativeAccessSpecifierPublic
		struct FTimerHandle                                        AwaitingPlacementTimer;                                  // 0x0218(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAwaitingPlacementResult;                                // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9O7D[0x2BF];                                 // 0x0221(0x02BF) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItem*                                               RootItem;                                                // 0x04E0(0x0008) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UItem*                                               EquippedItem[0xB];                                       // 0x04E8(0x0058) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UItem*>                                       ResourceItem;                                            // 0x0540(0x0010) Net, ZeroConstructor, RepNotify, NativeAccessSpecifierPublic
		class UItem*                                               SafeItem;                                                // 0x0550(0x0008) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UShopComponent*                                      Shop;                                                    // 0x0558(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ACombatEntity*                                       OwningCombatEntity;                                      // 0x0560(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCharacterNPCsComponent*                             CharNPCsComponent;                                       // 0x0568(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponType                                                PrimaryWeaponType;                                       // 0x0570(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EWeaponType                                                SecondaryWeaponType;                                     // 0x0571(0x0001) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LKEZ[0xE];                                   // 0x0572(0x000E) MISSED OFFSET (PADDING)

	public:
		bool UnequipSlot(EquipmentType SlotID, class UItem* TargetContainer, class UInventoryComponent* SourceComponent, int32_t TargetPositionX, int32_t TargetPositionY, bool bBlockRequest);
		bool UnequipConsumableIndex(int32_t SlotID, const struct FIntVector& TargetPosition);
		bool UnequipConsumable(class UItem* Item, const struct FIntVector& TargetPosition);
		void TimeoutAwaitingPlacement();
		bool SortItemsTier(bool CalledByServer);
		bool SortItemsPrice(bool CalledByServer);
		void SortContainer(class UItem* TargetContainer, ESortStyle Sort);
		class UItem* SmartSplitStackableItem(class UItem* Source, int32_t Num, bool CalledByServer, bool ReturnResult);
		class UItem* SmartEquipInSlot(class UItem* Item, bool ReturnResult);
		bool SmartEquipInConsumables(class UItem* Item);
		class UItem* SmartChooseAmmo();
		void SetItemContainerDimensions(class UItem* Item, unsigned char NewWidth, unsigned char NewHeight);
		void Server_UnequipEquipment(EquipmentType SlotID, class UItem* TargetContainer, class UInventoryComponent* SourceComponent, const struct FIntVector& TargetPosition);
		void Server_UnequipConsumable(int32_t SlotID, const struct FIntVector& TargetPosition);
		void Server_TrySplitStackedItem(class UItem* Source, int32_t NumToSplit);
		void Server_ToggleInsurance(class UItem* TargetItem, bool bShouldBeInsured);
		void Server_SortItemsTier();
		void Server_SortItemsPrice();
		void Server_SortActualPosition(class UItem* TargetContainer, ESortStyle Sort);
		void Server_RequestExtraData(class UInventoryComponent* Inventory, class UItem* Item);
		void Server_PayInsurance();
		void Server_Item_UpdatePlacement(class UItem* Target, unsigned char X, unsigned char Y, unsigned char RotationDiv);
		void Server_Item_Split(class UItem* Source, int32_t Num);
		void Server_Item_RemoveUpgrade(class UItem* TargetItem, class UItem* Upgrade);
		void Server_Item_PlaceInWorld(class UItem* TargetItem, const struct FVector& WorldPosition);
		void Server_Item_PlaceInContainer(class UItem* TargetItem, class UItem* TargetContainer, const struct FIntVector& TargetPosition, bool ReturnResult, int32_t TargetRotation);
		void Server_Item_MergeInto(class UItem* Source, class UItem* Destination);
		void Server_Item_AddUpgrade(class UItem* TargetItem, class UItem* Upgrade);
		void Server_InventoryItem_Place_Trade(class UItem* TargetItem, class UItem* TargetContainer, class UInventoryComponent* TargetInventory, class UInventoryComponent* SourceInventory, const struct FIntVector& TargetPosition, int32_t TargetRotation);
		void Server_InventoryItem_Equip(class UItem* TargetItem, EquipmentType SlotID, class UInventoryComponent* TargetInventory, class UInventoryComponent* SourceInventory);
		void Server_EquipEquipment(class UItem* Item, EquipmentType SlotID, bool ReturnResult, class UInventoryComponent* EquipComponent);
		void Server_EquipConsumable(class UItem* Item, int32_t SlotID);
		void Server_AssignCustomName(class UItem* Item, const class FText& NewCustomName);
		void SendStatsToGAS(const struct FItemStats& PassiveStats);
		bool RollDropTable(const class FName& RowName, class UItem* TargetContainer);
		bool RemoveItemUpgrade(class UItem* BaseItem, class UItem* Upgrade, bool CalledByServer);
		bool PositionItemInContainer(class UItem* BaseItem, unsigned char X, unsigned char Y, unsigned char RotationDiv, bool CalledByServer);
		bool PlaceItemInWorld(class UItem* TargetItem, const struct FVector& WorldPosition, bool CalledByServer);
		bool PlaceItemInContainer(class UItem* TargetItem, class UItem* TargetContainer, const struct FIntVector& TargetPosition, bool CalledByServer, bool ReturnResult, int32_t TargetRotation);
		void OnWeaponChange();
		void OnRep_OnResourcesUpdate();
		void OnRep_OnInventoryUpdate();
		void OnRep_OnEquipmentUpdate();
		bool LoadInventory(class UDataTable* InventoryTable, class UDataTable* ItemsTable, float DurabilityPercent);
		bool IsShop();
		bool InventoryItemPlace(class UItem* TargetItem, class UItem* TargetContainer, class UInventoryComponent* TargetInventory, class UInventoryComponent* SourceInventory, const struct FIntVector& TargetPosition, int32_t TargetRotation);
		bool InventoryItemEquip(class UItem* TargetItem, EquipmentType SlotID, class UInventoryComponent* TargetInventory, class UInventoryComponent* SourceInventory);
		int32_t GetTotalWorthOfContainer(class UItem* TargetContainer);
		struct FItemStats GetStatsWithUpgrades(class UItem* TargetItem);
		bool GetRootItems(TArray<class UItem*>* Items, class UInventoryComponent* ShopClientInventory);
		class UItem* GetResourceSlot(int32_t SlotID);
		class ACombatEntity* GetOwningCombatEntity();
		int32_t GetMaxCapacity();
		unsigned char GetItemTransformedWidth(class UItem* BaseItem);
		int32_t GetItemTransformedShopPrice(class UItem* BaseItem);
		unsigned char GetItemTransformedHeight(class UItem* BaseItem);
		int32_t GetItemsInsideContainer(class UItem* TargetContainer);
		struct FItemTable GetItemSharedData(class UItem* BaseItem);
		void GetItemsByIndex(int32_t ItemIndex, TArray<class UItem*>* ItemsFound, class UItem* TargetContainer);
		void GetItemsByClass(EquipmentType EquipClass, TArray<class UItem*>* ItemsFound);
		void GetItems(const class FName& RowName, TArray<class UItem*>* ItemsFound);
		bool GetInventoryContainerSize(unsigned char* ContainerWidth, unsigned char* ContainerHeight);
		class UItem* GetInventory();
		class UItem* GetEquipmentSlot(EquipmentType SlotID);
		float GetDurabilityMultiplier(unsigned char Durability);
		int32_t GetAmountOfItemsByIndex(int32_t ItemIndex);
		void GetAllItemsOwnedByComponent(class UItem* ComponentRoot, TArray<class UItem*>* AllItems);
		class UItem* FindSameItemInContainer(class UItem* TargetItem, class UItem* TargetContainer);
		struct FIntVector FindItemSpaceInContainer(class UItem* TargetItem, class UItem* TargetContainer);
		int32_t FindItems(const class FName& RowName);
		bool FilterRootItems(TArray<class UItem*>* Items, const class FString& SearchFilter);
		class UItem* EquipInSlot(class UItem* Item, EquipmentType SlotID, bool ReturnResult, class UInventoryComponent* EquipComponent);
		bool EquipInConsumables(class UItem* Item, int32_t SlotID);
		void DamageEquipmentSlot(EquipmentType SlotID, unsigned char DamageAmount);
		class UItem* CreateItem(const class FName& RowName);
		void Client_SortRenderPosition(class UItem* TargetContainer, ESortStyle Sort);
		void Client_ServerFinishedRotation(class UItem* _item);
		void Client_OnExtraDataReceived(TArray<struct FItemExtraData> ExtraDataArray);
		void Client_InventoryItem_Move_Result(EInventoryItemMoveResult InventoryItemMoveResult, class UInventoryComponent* SourceInventoryToUpdate, class UItem* SourceItemToUpdate);
		void Client_InsuranceResponse(bool bInsurancePaymentSuccess, class UItem* InsuredItem);
		void Client_EquipEquipment(class UItem* Item, EquipmentType SlotID);
		void CleanComponentOfItem(class UItem* Item);
		ECollisonInventoryResult CheckOnlyItemContainerCollision(class UItem* TargetItem, class UItem* TargetContainer, const struct FIntVector& TargetPosition);
		class UItem* CheckItemContainerCollisionForItem(class UItem* TargetItem, class UItem* TargetContainer, const struct FIntVector& TargetPosition);
		bool CheckContainerEnoughSpaceSize(class UItem* TargetContainer, int32_t ItemWidth, int32_t ItemHeight);
		bool CheckContainerEnoughSpace(class UItem* TargetContainer, TArray<class UItem*> Items);
		void ChangeItemStack(class UItem* TargetItem, int32_t Change);
		void BP_ToggleInsurance(class UItem* TargetItem, bool bShouldBeInsured);
		void BP_PayInsurance();
		void AsyncTrySplitStackedItem(class UItem* Source, int32_t NumToSplit);
		bool AddItemUpgrade(class UItem* BaseItem, class UItem* Upgrade, bool CalledByServer);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.RadialInput
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URadialInput : public UInterface
	{
	public:
		void GetQuickCommand(TArray<struct FKey> _acceptedKeys, TArray<struct FKey>* _hitKeys);
		struct FVector2D GetJoystickDirection(EJoystickType _joystick);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.RadialSlot
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class URadialSlot : public UInterface
	{
	public:
		void OnUnhighlight();
		void OnSelected();
		void OnHighlight();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.Item
	 * Size -> 0x03F8 (FullSize[0x0420] - InheritedSize[0x0028])
	 */
	class UItem : public UObject
	{
	public:
		unsigned char                                              UnknownData_EUWT[0xA];                                   // 0x0028(0x000A) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPendingDeletion;                                        // 0x0032(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1IOJ[0x5];                                   // 0x0033(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                CustomName;                                              // 0x0038(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bUnhandledContainerChange;                               // 0x0050(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_621F[0x3];                                   // 0x0051(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptDelegate                                      OnInventoryEmptiedEvent;                                 // 0x0054(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnComponentCleanRequestEvent;                            // 0x0064(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		class FScriptDelegate                                      OnInventoryPlacedEvent;                                  // 0x0074(0x0010) ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O58O[0x4];                                   // 0x0084(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInsuranceUpdateEvent;                                  // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YILH[0x8];                                   // 0x0098(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemTable                                          DataRow;                                                 // 0x00A0(0x02A0) NativeAccessSpecifierPublic
		int32_t                                                    ReplicateIndex;                                          // 0x0340(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Rotation;                                                // 0x0344(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              NetRotation;                                             // 0x0348(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Quality;                                                 // 0x0349(0x0001) BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZJN5[0x2];                                   // 0x034A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          Position;                                                // 0x034C(0x000C) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          NetPosition;                                             // 0x0358(0x000C) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntVector                                          OldPosition;                                             // 0x0364(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              AssignedPlayer;                                          // 0x0370(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    StackSize;                                               // 0x0380(0x0004) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Durability;                                              // 0x0384(0x0001) Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ContainerWidth;                                          // 0x0385(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ContainerHeight;                                         // 0x0386(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsInsured;                                              // 0x0387(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ItemDT;                                                  // 0x0388(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UItem*>                                       Container;                                               // 0x0390(0x0010) Edit, BlueprintVisible, ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UItem*>                                       NetContainer;                                            // 0x03A0(0x0010) Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic
		TArray<class UItem*>                                       Upgrades;                                                // 0x03B0(0x0010) BlueprintVisible, Net, ZeroConstructor, Transient, RepNotify, NativeAccessSpecifierPublic
		class UItem*                                               OwnerContainer;                                          // 0x03C0(0x0008) BlueprintVisible, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ServiceFlags;                                            // 0x03C8(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A7Z6[0x57];                                  // 0x03C9(0x0057) MISSED OFFSET (PADDING)

	public:
		void SumStats(struct FItemStats* Result, struct FItemStats* NewStats, unsigned char TestDurability);
		void Rollback();
		bool PlaceInContainer(class UItem* TargetContainer, const struct FIntVector& TargetPosition, bool CalledByServer);
		void OnRep_Upgrades();
		void OnRep_StackSize();
		void OnRep_ServiceFlags();
		void OnRep_Rotation();
		void OnRep_ReplicateIndex();
		void OnRep_Quality();
		void OnRep_Position();
		void OnRep_OwnerContainer();
		void OnRep_IsInsured(bool OldValue);
		void OnRep_Durability();
		void OnRep_Container();
		void OnDestroyed();
		void Init(struct FItemTable* ItemTemplate);
		unsigned char GetTransformedWidth();
		struct FItemStats GetTransformedStats();
		int32_t GetTransformedShopPrice();
		unsigned char GetTransformedHeight();
		int32_t GetStackSize();
		struct FItemTable GetSharedData();
		int32_t GetRotation();
		struct FIntVector GetPosition();
		class AActor* GetOwningActor();
		float GetItemStat(EItemStatType Stat);
		unsigned char GetDurability();
		class FText GenerateDescription();
		void Destroy();
		void Copy(class UItem* _base, class UItem* _target);
		void Client_OnServerRequestRollback();
		bool CheckContainerCollision(class UItem* TargetContainer, const struct FIntVector& TargetPosition);
		bool AddUpgrade(class UItem* Upgrade, bool CalledByServer);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ItemActor
	 * Size -> 0x0088 (FullSize[0x02A8] - InheritedSize[0x0220])
	 */
	class AItemActor : public AActor
	{
	public:
		class UStaticMeshComponent*                                Mesh;                                                    // 0x0220(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              SkeleMesh;                                               // 0x0228(0x0008) ExportObject, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterial*                                           Material;                                                // 0x0230(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMaterialInstanceDynamic*                            dynamicMaterial;                                         // 0x0238(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              MaterialsPtr[0x10];                                      // 0x0240(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              MeshPtr[0x28];                                           // 0x0250(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkeleMeshPtr[0x28];                                      // 0x0278(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UObject*                                             MyIdentity;                                              // 0x02A0(0x0008) Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ItemContainer
	 * Size -> 0x00A8 (FullSize[0x02C8] - InheritedSize[0x0220])
	 */
	class AItemContainer : public AActor
	{
	public:
		bool                                                       bSpawnedLoot;                                            // 0x0220(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_29TP[0x7];                                   // 0x0221(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UInventoryComponent*                                 Inventory;                                               // 0x0228(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Party;                                                   // 0x0230(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6P72[0x3];                                   // 0x0231(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ChanceOfSpawning;                                        // 0x0234(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPlayerStash;                                          // 0x0238(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8AT0[0x3];                                   // 0x0239(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ItemsToAddMin;                                           // 0x023C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemsToAddMax;                                           // 0x0240(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomGoldMin;                                           // 0x0244(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomGoldMax;                                           // 0x0248(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RandomGoldChance;                                        // 0x024C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeInWidth;                                             // 0x0250(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SizeInHeight;                                            // 0x0254(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VisibilityWhitelist;                                     // 0x0258(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ItemInstantlyDeletes;                                    // 0x025C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsWhitelisted;                                          // 0x0260(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDestroysSelfWhenEmpty;                                  // 0x0261(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GKAZ[0x2];                                   // 0x0262(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SpawnWeightForTier1;                                     // 0x0264(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnWeightForTier2;                                     // 0x0268(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnWeightForTier3;                                     // 0x026C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnWeightForTier4;                                     // 0x0270(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnWeightForTier5;                                     // 0x0274(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnWeightForQuality0;                                  // 0x0278(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnWeightForQuality1;                                  // 0x027C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnWeightForQuality2;                                  // 0x0280(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnWeightForQuality3;                                  // 0x0284(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                SpecificDrop;                                            // 0x0288(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ItemDataTable;                                           // 0x0290(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsWeapons;                                          // 0x0298(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsSecondaries;                                      // 0x0299(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsShields;                                          // 0x029A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsHelmets;                                          // 0x029B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsTorsoArmor;                                       // 0x029C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsLegArmor;                                         // 0x029D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsGloves;                                           // 0x029E(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsBoots;                                            // 0x029F(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsShirts;                                           // 0x02A0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsPants;                                            // 0x02A1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsFoods;                                            // 0x02A2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsWater;                                            // 0x02A3(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsHealing;                                          // 0x02A4(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsBuffs;                                            // 0x02A5(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsAmmunition;                                       // 0x02A6(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsResources;                                        // 0x02A7(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsContracts;                                        // 0x02A8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsOils;                                             // 0x02A9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsRunes;                                            // 0x02AA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsSeals;                                            // 0x02AB(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsBackpacks;                                        // 0x02AC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsNotes;                                            // 0x02AD(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsDocuments;                                        // 0x02AE(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUnconditionalRelevancy;                                 // 0x02AF(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RILZ[0x18];                                  // 0x02B0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnInventoryPlaced(class UItem* PlacedItem);
		void OnInventoryEmptied();
		void OnCheckVisibilityWhitelist();
		void OnCheckRelevancy();
		void BP_OnInventoryEmptied();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ItemSlotWidget
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class UItemSlotWidget : public UUserWidget
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ItemWidget
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class UItemWidget : public UUserWidget
	{
	public:
		class UImage*                                              ItemIcon;                                                // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USizeBox*                                            ItemBox;                                                 // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void UpdateSize_cpp();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.KickDamageType
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class UKickDamageType : public UDamageType
	{
	public:
		bool                                                       bIsHeavyAttack;                                          // 0x0040(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsPunch;                                                // 0x0041(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsKick;                                                 // 0x0042(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QY9G[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.SimpleBot
	 * Size -> 0x0318 (FullSize[0x0640] - InheritedSize[0x0328])
	 */
	class ASimpleBot : public AAIController
	{
	public:
		unsigned char                                              UnknownData_S92V[0x8];                                   // 0x0328(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UItem*                                               PriorityConsume;                                         // 0x0330(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PriorityConsumeStack;                                    // 0x0338(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBotDefense                                                BusyWaitDefense;                                         // 0x033C(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBotInput                                                  InputQueue;                                              // 0x033D(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NUIN[0x2];                                   // 0x033E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EscapeTicks;                                             // 0x0340(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6OBL[0x4];                                   // 0x0344(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              Target;                                                  // 0x0348(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      AdjacentTargets;                                         // 0x0350(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              Difficulty;                                              // 0x0360(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EBotGoal                                                   Goal;                                                    // 0x0361(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYT8[0x2];                                   // 0x0362(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             GoalLocation;                                            // 0x0364(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FollowDirection;                                         // 0x0370(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FollowDistance;                                          // 0x0374(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FieldOfView;                                             // 0x0378(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VisionDistance;                                          // 0x037C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      HearingDistance;                                         // 0x0380(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityAggressiveness;                               // 0x0384(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityCuriousness;                                  // 0x0388(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityCowardice;                                    // 0x038C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityAgility;                                      // 0x0390(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityConfidence;                                   // 0x0394(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityScavenger;                                    // 0x0398(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PersonalityMinimumDistance;                              // 0x039C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PersonalityMaximumDistance;                              // 0x03A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PersonalityMeleeRange;                                   // 0x03A4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsMercenary;                                            // 0x03A8(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MSLF[0x3];                                   // 0x03A9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    UpgradePercentHasUpgradeSlot;                            // 0x03AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpgradePercentEnhancedUpgradeSlot;                       // 0x03B0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpgradePercentHasUpgradeItem;                            // 0x03B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    UpgradePercentEnhancedUpgradeItem;                       // 0x03B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      UpgradePercentLeaderMultiplier;                          // 0x03BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLeader;                                               // 0x03C0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUndead;                                               // 0x03C1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JS96[0x2];                                   // 0x03C2(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlockStacks;                                             // 0x03C4(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        CustomizationTimerHandle;                                // 0x03C8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerSprint;                                      // 0x03D0(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagConsume;                                              // 0x03F0(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagDebuffBleed;                                          // 0x03F8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        TagDebuffStun;                                           // 0x0400(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        BlockTimerHandle;                                        // 0x0408(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IJT2[0x60];                                  // 0x0410(0x0060) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               TagContainerAim;                                         // 0x0470(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerAttack;                                      // 0x0490(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerBlock;                                       // 0x04B0(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerCrouch;                                      // 0x04D0(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerDodge;                                       // 0x04F0(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerFire;                                        // 0x0510(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerJump;                                        // 0x0530(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerKick;                                        // 0x0550(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerSheatheUnsheathe;                            // 0x0570(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerGadaBreak;                                   // 0x0590(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerGadaAOE;                                     // 0x05B0(0x0020) NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               TagContainerGadaAttack;                                  // 0x05D0(0x0020) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ICE7[0x30];                                  // 0x05F0(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        TimerHandle;                                             // 0x0620(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        AttackTimerHandle;                                       // 0x0628(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class AActor*>                                      Waypoints;                                               // 0x0630(0x0010) ZeroConstructor, Protected, NativeAccessSpecifierProtected

	public:
		void SayVoice(EBotVoice Voice, bool bIsPriority);
		void PlaceUpgradesOnGear();
		void PerformAttack(EBotInput AttackStyle);
		void OnDecision_SeesTarget(class ACombatEntity* MyPawn, float Dist, const struct FVector& Delta);
		void OnDecision_NoTarget(class ACombatEntity* MyPawn);
		void OnDecision_LostTarget(class ACombatEntity* MyPawn);
		void OnDeath();
		void MoveSomewhere();
		void ManageGear();
		void LateEquipInventory();
		bool HasBehavior(class ACombatEntity* MyPawn, EBotBehavior Behavior);
		bool ConsumeItemOfType(EquipmentType Type);
		bool ConsumeItemOfIndex(int32_t ItemIndex);
		void AttemptToggleBlock();
		void AttemptCombo();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.LeaderBot
	 * Size -> 0x0038 (FullSize[0x0678] - InheritedSize[0x0640])
	 */
	class ALeaderBot : public ASimpleBot
	{
	public:
		unsigned char                                              PartyToLead;                                             // 0x0640(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              MaximumFreeAgents;                                       // 0x0641(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DURW[0x2];                                   // 0x0642(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SizeScale;                                               // 0x0644(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class ASimpleBot*>                                  PartyMembers;                                            // 0x0648(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class ACombatEntity*>                               TargetList;                                              // 0x0658(0x0010) ZeroConstructor, NativeAccessSpecifierPrivate
		struct FTimerHandle                                        Timer;                                                   // 0x0668(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      OrderCooldown;                                           // 0x0670(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DIOC[0x4];                                   // 0x0674(0x0004) MISSED OFFSET (PADDING)

	public:
		void DetermineCommonTarget();
		void DetermineCommonGoal();
		bool AddTeamMembers(int32_t MaxAmount);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.MovementAttributeSet
	 * Size -> 0x0070 (FullSize[0x00A0] - InheritedSize[0x0030])
	 */
	class UMovementAttributeSet : public UAttributeSet
	{
	public:
		struct FGameplayAttributeData                              SpeedModifier;                                           // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BrokenBones;                                             // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              CurrentSpeed;                                            // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              BaseSpeed;                                               // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaxSpeed;                                                // 0x0070(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MinSpeed;                                                // 0x0080(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              SprintMultiplier;                                        // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic

	public:
		void OnRep_SprintMultiplier(const struct FGameplayAttributeData& OldValue);
		void OnRep_SpeedModifier(const struct FGameplayAttributeData& OldValue);
		void OnRep_MinSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaxSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_CurrentSpeed(const struct FGameplayAttributeData& OldValue);
		void OnRep_BrokenBones(const struct FGameplayAttributeData& OldValue);
		void OnRep_BaseSpeed(const struct FGameplayAttributeData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.NPCComponent
	 * Size -> 0x0058 (FullSize[0x0108] - InheritedSize[0x00B0])
	 */
	class UNPCComponent : public UActorComponent
	{
	public:
		class FName                                                NPCName;                                                 // 0x00B0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                FirstTimeDialogText;                                     // 0x00B8(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class USoundCue*                                           FirstTimeDialogSound;                                    // 0x00D0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          QuestsTable;                                             // 0x00D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VisibilityWhitelist;                                     // 0x00E0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QQ5X[0x4];                                   // 0x00E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<int32_t>                                            TierExperienceLevel;                                     // 0x00E8(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      CurrencyToExp;                                           // 0x00F8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PX4M[0xC];                                   // 0x00FC(0x000C) MISSED OFFSET (PADDING)

	public:
		void UpdateVisibility();
		bool IsReadyForQuestProposal(class UCharacterNPCsComponent* PlayerNPCComponent, class FName* QuestNameToPropose);
		bool IsPlayerFinishedQuest(class UCharacterNPCsComponent* PlayerNPCComponent, class FName* QuestNameFinished);
		bool IsNPCReadyForQuestAction(class UCharacterNPCsComponent* PlayerNPCComponent, class FName* QuestNameFinished, class FName* QuestNameToPropose, bool* NotEnoughSpace);
		int32_t GetTierNext(const struct FNPCLevel& Level);
		int32_t GetTierExperience(int32_t TierLevel);
		int32_t GetTierCurrent(const struct FNPCLevel& Level);
		bool GetQuestInfo(const class FName& QuestName, struct FQuestTable* QuestRow);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.NPCQuestPoint
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class ANPCQuestPoint : public AActor
	{
	public:
		class FName                                                PointName;                                               // 0x0220(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OverlapQuestPointByPlayer(class AProjectAgarthaCharacter* PlayerCharacter);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.PartySubsystem
	 * Size -> 0x0328 (FullSize[0x0358] - InheritedSize[0x0030])
	 */
	class UPartySubsystem : public UGameInstanceSubsystem
	{
	public:
		bool                                                       bShouldIgnoreRaid;                                       // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_URAM[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FBrowserParty>                               BrowserParties;                                          // 0x0038(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPartyUpdate;                                           // 0x0048(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBrowserUpdate;                                         // 0x0058(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnIdentifierUpdate;                                      // 0x0068(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FString                                              PlayFabId;                                               // 0x0078(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIgnoreFirstTicket;                                      // 0x0088(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z69O[0x7];                                   // 0x0089(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              IgnoredTicket;                                           // 0x0090(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWaitingOnRequest;                                       // 0x00A0(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPartyVisibleToBrowser;                                  // 0x00A1(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPartyVisibleToFriends;                                  // 0x00A2(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9B2G[0x5];                                   // 0x00A3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PartyAdvertisement;                                      // 0x00A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPartyMember                                        PartyMember[0x3];                                        // 0x00B8(0x0090) NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_X14S[0x128];                                 // 0x0148(0x0128) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PartyUsername;                                           // 0x0270(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		int32_t                                                    PartyLocalIndex;                                         // 0x0280(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CZPL[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint64_t                                                   PartyIdentifier;                                         // 0x0288(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FString                                              PartyTicket;                                             // 0x0290(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZU74[0xB8];                                  // 0x02A0(0x00B8) MISSED OFFSET (PADDING)

	public:
		void SetPartyTicket(const class FString& Ticket);
		void SetPartyIdentifier(const class FString& Identifier);
		void SendSubsystemMemberData(EPartyReadyStatus MyReadyState);
		void SendSubsystemLobbyData();
		void SendSubsystemDiscoverability(bool bIsPublic, bool bIsSolo);
		void SendSubsystemAdvertisement(const class FString& AdvertisementString);
		void RefreshPartyList();
		void OpenInviteMenu();
		void OnLevelChange();
		void MatchLeadersServer();
		void KickFromParty(int32_t Index);
		void JoinParty(int32_t PartyBrowserIndex);
		class FString GetPartyTicketURL();
		class FString GetPartyTicket();
		struct FPartyMember GetPartyMember(int32_t Index);
		class FString GetPartyIdentifier();
		void GetParty();
		struct FPartyMember GetMyPartyState();
		bool GetIsPartyLeader();
		bool GetIsInParty();
		void EnableJoinInProgress(bool bEnabled);
		void CreateTicketAsParty();
		class FText ConvertBrowserPartyToText(const struct FBrowserParty& Party);
		bool CanStartMatchmakerWithMercs();
		bool CanStartMatchmaker();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.PlayerStateBase
	 * Size -> 0x0038 (FullSize[0x0358] - InheritedSize[0x0320])
	 */
	class APlayerStateBase : public APlayerState
	{
	public:
		unsigned char                                              UnknownData_ALP0[0x8];                                   // 0x0320(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomAbilitySystemComponent*                       AbilitySystemComponent;                                  // 0x0328(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UHealthAttributeSet*                                 HealthAttributes;                                        // 0x0330(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UStaminaAttributeSet*                                StaminaAttributes;                                       // 0x0338(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFoodAttributeSet*                                   FoodAttributes;                                          // 0x0340(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UEquipmentAttributeSet*                              EquipmentAttributes;                                     // 0x0348(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMovementAttributeSet*                               MovementAttributes;                                      // 0x0350(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ProjectAgarthaCharacter
	 * Size -> 0x0188 (FullSize[0x09C0] - InheritedSize[0x0838])
	 */
	class AProjectAgarthaCharacter : public ACombatEntity
	{
	public:
		class UDataTable*                                          PremadeBotsTable;                                        // 0x0838(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ACombatEntity*>                               MyFollowers;                                             // 0x0840(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       DoNotLoadInventory;                                      // 0x0850(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_BEFB[0x7];                                   // 0x0851(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCharacterTravelingComponent*                        CharacterTraveling;                                      // 0x0858(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        PartyTimerHandle;                                        // 0x0860(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        IdentityTimerHandle;                                     // 0x0868(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        ExtractTimerHandle;                                      // 0x0870(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        RaidInviteExpirationTimerHandle;                         // 0x0878(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ExtractionStartTime;                                     // 0x0880(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_A5MG[0x30];                                  // 0x0884(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseTurnRate;                                            // 0x08B4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseLookUpRate;                                          // 0x08B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       IsSpawnBot;                                              // 0x08BC(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsFreebooter;                                           // 0x08BD(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SkillLevelAlchemy;                                       // 0x08BE(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RYF8[0x1];                                   // 0x08BF(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SkillExpAlchemy;                                         // 0x08C0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SkillLevelArtificer;                                     // 0x08C4(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QVLT[0x3];                                   // 0x08C5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SkillExpArtificer;                                       // 0x08C8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SkillLevelCooking;                                       // 0x08CC(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RLNQ[0x3];                                   // 0x08CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SkillExpCooking;                                         // 0x08D0(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              SkillLevelUpgrade;                                       // 0x08D4(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ERV9[0x3];                                   // 0x08D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    SkillExpUpgrade;                                         // 0x08D8(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    AccountFlags;                                            // 0x08DC(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtractionDistance;                                      // 0x08E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExtractionTime;                                          // 0x08E4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EExtractionResult                                          ExtractionState;                                         // 0x08E8(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KJN1[0x7];                                   // 0x08E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UTacticalRadialMenuWidget*                           TacticalRadialMenuWidget;                                // 0x08F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       allowMovement;                                           // 0x08F8(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_LVYW[0x7];                                   // 0x08F9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ACombatEntity*                                       CurrCommandedBot;                                        // 0x0900(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GeneralCommandedBotGuardDirection;                       // 0x0908(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GeneralCommandedBotFollowDistance;                       // 0x090C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       GeneralCommandedBotAggressive;                           // 0x0910(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_45CL[0x7];                                   // 0x0911(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FInputInfo>                                  inputInfos;                                              // 0x0918(0x0010) BlueprintVisible, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_06ER[0x50];                                  // 0x0928(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        PartyStringUpdatedTimerHandle;                           // 0x0978(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KRI2[0x10];                                  // 0x0980(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnPlayerAppearanceLoadedDelegate;                        // 0x0990(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPlayerExtractionStateChangedDelegate;                  // 0x09A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		EExtractionResult                                          PreviousExtractionState;                                 // 0x09B0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8EZE[0xF];                                   // 0x09B1(0x000F) MISSED OFFSET (PADDING)

	public:
		void Timer_PartyStringUpdated(TArray<class AActor*> AllPartyActors);
		void StartExtractingCountdown(const struct FVector& ExtractPosition);
		void ServerPredictsExtractionFinish();
		void Server_UpdateMercViewDirection(const struct FVector& Direction, class ACombatEntity* CommandedBot);
		void Server_UpdateMercTarget(class ACombatEntity* TargetToAttack, class ACombatEntity* CommandedBot);
		void Server_UpdateMercLocation(const struct FVector& Location, class ACombatEntity* CommandedBot);
		void Server_UpdateMercFollow(int32_t Direction, float Distance, class ACombatEntity* CommandedBot);
		void Server_UpdateMercAggression(bool bIsAggressive, class ACombatEntity* CommandedBot);
		void Server_UpdateMercAfkMode();
		void Server_StartExtracting(const struct FVector& ExtractPosition);
		void Server_SetCharacter(const struct FCharacterBody& Body);
		void Server_RequestUnstick();
		void Server_PartyStringUpdated(const class FString& PartyString);
		void Server_OnWeaponChange(int32_t Weapon);
		void Server_OnCreateMercenary();
		void Server_Heartbeat();
		void Server_Chat(const struct FChatLine& Line);
		void Server_AssignPartyString(const class FString& PartyString, const class FString& Token, bool bNewFreebooter, const class FString& VersionString, unsigned char PartySize, const class FString& OurConnection);
		void SaveInventoryToPlayfab();
		void SaveAppearance();
		void RequestUnstick();
		void RandomizeCustomization();
		void OpenRadialMenu();
		void OnUnstick();
		void OnPlayfabLoginSuccess(const class FString& PlayFabId, const class FString& PlayFabTicket, bool NewlyCreated);
		void OnPlayerAppearanceLoaded(class AProjectAgarthaCharacter* Pawn);
		void OnMercSetLocation(class ACombatEntity* CommandedBot);
		void OnMercFindTarget(class ACombatEntity* CommandedBot);
		void OnMercAggressionChange(class ACombatEntity* CommandedBot);
		void OnCreateMercenary();
		void NotifyOnUpdateMerc(TArray<class ACombatEntity*> AffectedBots, bool bIsAggressive, bool bIsFighting, bool bIsFollowing, class AActor* Target, const struct FVector& GoalLocation);
		void Multicast_SetCharacter(const struct FCharacterBody& Body);
		void LoadAuthorizedCharacter(const class FString& PartyString, const class FString& NewBackendID, const class FString& Username);
		void LoadAppearance();
		bool IsAccountFlagged(int32_t Bitmask);
		void GiveSelfDeathController();
		struct FVector GetRandomSurroundingLocation();
		void FlagAccount(int32_t Bitmask, bool bEnabled);
		void FinishExtractingCountdown();
		void ExitUI(class APlayerController* PlayerController);
		void ExecuteTacticalOperation(ETacticalCommand TacticalCommand, float OptionalFloatData);
		void EnterUI(class APlayerController* PlayerController, class UWidget* WidgetToFocus, bool bIsUIAndGame, EMouseLockMode InMouseLockMode, bool bHideMouseCursor, bool bAllowPlayerMovement);
		void CloseRadialMenu();
		void ClientSendCommandsPostLogin();
		void Client_StartExtracting(const struct FVector& ExtractPosition);
		void Client_ReconnectedBeginPlay();
		void Client_PlayerDied();
		void Client_PartyStringUpdated(TArray<class AActor*> AllPartyActors, unsigned char LatestPartyValue);
		void Client_OnUpdateMerc(TArray<class ACombatEntity*> AffectedBots, bool bIsAggressive, bool bIsFighting, bool bIsFollowing, class AActor* Target, const struct FVector& GoalLocation);
		void Client_OnSpectatorCameraRequested(bool bEnabled);
		void Client_OnRaidTimerUpdated(int32_t MinutesRemaining);
		void Client_OnInsuranceArrived(class UProjectAgarthaGameInstance* GameInstance, int32_t ItemsPlaced, int32_t ItemsInQueue);
		void Client_OnAuthorizationAccepted();
		void Client_LoadCharacter();
		void Client_GetStationRank(unsigned char AlchemyLv, int32_t AlchemyExp, unsigned char ArtificerLv, int32_t ArtificerExp, unsigned char CookingLv, int32_t CookingExp, unsigned char UpgradeLv, int32_t UpgradeExp);
		void Client_ForceOpenLevel(const class FName& NewLevel);
		void Client_ForceOpenIp(const class FString& NewConnection);
		void Client_FinishExtracting();
		void Client_Chat(const struct FChatLine& Line);
		void BP_SpectatorCamera(bool bEnabled);
		void BP_OnRaidTimerUpdated(int32_t MinutesRemaining);
		void ApplyChangesMercenary(class AProjectAgarthaCharacter* Merc);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ProjectAgarthaGameInstance
	 * Size -> 0x0528 (FullSize[0x06D0] - InheritedSize[0x01A8])
	 */
	class UProjectAgarthaGameInstance : public UGameInstance
	{
	public:
		unsigned char                                              UnknownData_M231[0x10];                                  // 0x01A8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              NetworkVersion;                                          // 0x01B8(0x0010) Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ClientVersion;                                           // 0x01C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              KickReason;                                              // 0x01D8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ServerToConnectTo;                                       // 0x01E8(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MatchPendingTime;                                        // 0x01F8(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchSpecialMessage;                                    // 0x01FC(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8FXR[0x3];                                   // 0x01FD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                PendingMatchSpecialMessage;                              // 0x0200(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       bFreshStart;                                             // 0x0218(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XBHV[0x3];                                   // 0x0219(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BotStartingFrame;                                        // 0x021C(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      CombatEntities;                                          // 0x0220(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      Spectators;                                              // 0x0230(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      ItemActors;                                              // 0x0240(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      Corpses;                                                 // 0x0250(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      Lootbags;                                                // 0x0260(0x0010) BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class AActor*                                              LastLootbagSpawned;                                      // 0x0270(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          ItemDataTable;                                           // 0x0278(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          LocalTextDataTable;                                      // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             TutorialSpawn;                                           // 0x0288(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1T0N[0x4];                                   // 0x0294(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FItemTable>                                  ItemsTier1;                                              // 0x0298(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemTable>                                  ItemsTier2;                                              // 0x02A8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemTable>                                  ItemsTier3;                                              // 0x02B8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemTable>                                  ItemsTier4;                                              // 0x02C8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemTable>                                  ItemsTier5;                                              // 0x02D8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemTable>                                  ItemsUpgradeWeapon;                                      // 0x02E8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FItemTable>                                  ItemsUpgradeArmor;                                       // 0x02F8(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XUR5[0x8];                                   // 0x0308(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemTable                                          MoneyItem;                                               // 0x0310(0x02A0) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TArray<struct FRaidDefinition>                             ServerMapList;                                           // 0x05B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WGWT[0x14];                                  // 0x05C0(0x0014) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsShipHub;                                              // 0x05D4(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bModeLoadedMap;                                          // 0x05D5(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PXUF[0x2];                                   // 0x05D6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        MatchmakingTimer;                                        // 0x05D8(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FTimerHandle                                        JoinPartyTimer;                                          // 0x05E0(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxNumberPlayersInGroup;                                 // 0x05E8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    SpawnGroupRandomness;                                    // 0x05EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SGQR[0x38];                                  // 0x05F0(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              MatchServerURL;                                          // 0x0628(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              ShippingMatchServerURL;                                  // 0x0638(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0DDL[0x10];                                  // 0x0648(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              PlayFabId;                                               // 0x0658(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              PlayfabPassword;                                         // 0x0668(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       PlayfabNewlyCreated;                                     // 0x0678(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZAOT[0x7];                                   // 0x0679(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnGetMatchID;                                            // 0x0680(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnGetTargetGameServerHost;                               // 0x0690(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FText                                                NewsString;                                              // 0x06A0(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UAgathaPlayfabUtils*                                 PFUtils;                                                 // 0x06B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CZTN[0x8];                                   // 0x06C0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bPlayerIsFreebooter;                                     // 0x06C8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMatchPending;                                           // 0x06C9(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZXPC[0x6];                                   // 0x06CA(0x0006) MISSED OFFSET (PADDING)

	public:
		class AActor* SpawnLootbag(const struct FVector& Location);
		void SetSpecialMessage(const class FText& Message, float CountdownTime);
		void RequestStartMatch(bool bIsFreebooterMode, ERaidMap Destination);
		void RequestNews();
		void RequestJoinBoat();
		void RequestGetMatchInfo();
		void RequestCancelMatch();
		void ReadTutorial(int32_t TutorialIndex);
		void PlayFabDeleteUser();
		void PlayFabDeleteAllUser();
		bool OpenLevelWithLoadingScreen(const class FName& LevelScreenName, ETravelingType whereToTravel);
		void OnPlayfabLoginSuccess(const class FString& PlayFabId, const class FString& PlayFabTicket, bool NewlyCreated);
		void OnPlayfabLoginFailed(const class FString& ErrorName, const class FString& ErrorMessage);
		void OnOldRaidFound(const class FString& RaidURL);
		void OnMatchPendingTimeUpdated();
		void OnLevelChangeShip();
		void OnLevelChangeRaid();
		void OnLevelChange(const class FString& LevelName);
		void OnKickedFromServer(const class FString& Reason);
		void OnCreateMatchmakerForLevel();
		void OnCancelMatchmakingFromCode();
		void Multicast_OnTimerUpdate(int32_t MinutesRemaining);
		bool GetWasTutorialViewed(int32_t TutorialIndex);
		class FString GetUsername();
		class FString GetStatEffectReadable(EItemStatType _itemStat);
		class FString GetPossibleLocalText(const class FName& LocalTextTag);
		class FString GetPlayfabIDFromMap(const class FString& K);
		class FString GetMatchPendingTimeAsString();
		class FString GetLocalText(const class FName& LocalTextTag);
		bool GetIsShipHub();
		TArray<class AActor*> GetAllEntitiesInParty(unsigned char Party, class AProjectAgarthaCharacter* Ignore);
		void DetectKickReason();
		void BPOnPlayfabLoginSuccess();
		void BPOnLoadCharacter(class AProjectAgarthaCharacter* Character);
		void BP_SpawnLootbag(const struct FVector& Location);
		void BP_OnTimerUpdate(int32_t MinutesRemaining);
		void BP_OnInsuranceArrived(int32_t ItemsPlaced, int32_t ItemsInQueue);
		void AttemptPlayfabLogin();
		bool AreMapConditionsMet(class UInventoryComponent* InventoryToCheck, ERaidMap MapToCheck);
		bool AddPlayfabIDToMap(const class FString& K, const class FString& V);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ProjectAgarthaGameMode
	 * Size -> 0x00A0 (FullSize[0x0360] - InheritedSize[0x02C0])
	 */
	class AProjectAgarthaGameMode : public AGameModeBase
	{
	public:
		class UDataTable*                                          ItemDataTable;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<class FString, unsigned char>                         PartyMapping;                                            // 0x02C8(0x0050) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      SecondsUntilClose;                                       // 0x0318(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsSinceLastLogin;                                   // 0x031C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SecondsSinceLastActivity;                                // 0x0320(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YQ05[0x4];                                   // 0x0324(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              RaidEndEffect;                                           // 0x0328(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBinarySerializer*                                   BinaryDataIO;                                            // 0x0330(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PlayersInRaid;                                           // 0x0338(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9OEU[0x24];                                  // 0x033C(0x0024) MISSED OFFSET (PADDING)

	public:
		bool StartPlayerExtraction(class AProjectAgarthaPlayerController* AgarthaPC, const struct FVector& ExtractPosition);
		void OnInactivityEnd();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ProjectAgarthaHUD
	 * Size -> 0x0008 (FullSize[0x0318] - InheritedSize[0x0310])
	 */
	class AProjectAgarthaHUD : public AHUD
	{
	public:
		unsigned char                                              UnknownData_U3O9[0x8];                                   // 0x0310(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ProjectAgarthaPlayerController
	 * Size -> 0x0040 (FullSize[0x05B0] - InheritedSize[0x0570])
	 */
	class AProjectAgarthaPlayerController : public APlayerController
	{
	public:
		unsigned char                                              UnknownData_3T57[0x8];                                   // 0x0570(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              SessionIdString;                                         // 0x0578(0x0010) ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		int32_t                                                    RepeatForceBeginPlays;                                   // 0x0588(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_5V94[0x4];                                   // 0x058C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTimerHandle                                        ForceBeginPlayTimerHandle;                               // 0x0590(0x0008) NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FTimerHandle                                        PostLoginRedoTimerHandle;                                // 0x0598(0x0008) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PickDeltaTime;                                           // 0x05A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      PickOffset;                                              // 0x05A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3GP3[0x8];                                   // 0x05A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void HighlightNPC(class UNPCComponent* NPC);
		void GetQuickCommand(TArray<struct FKey> _acceptedKeys, TArray<struct FKey>* _hitKeys);
		struct FVector2D GetJoystickDirection(EJoystickType _joystick);
		TArray<class AActor*> GetHiddenActors();
		void ForceClientToLogin();
		void ForceBeginPlay();
		void Client_PostLogin_NoSession();
		void Client_PostLogin(const class FString& NetIdString);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ProjectAgarthaPlayerState
	 * Size -> 0x0008 (FullSize[0x0360] - InheritedSize[0x0358])
	 */
	class AProjectAgarthaPlayerState : public APlayerStateBase
	{
	public:
		ETravelingType                                             whereToTravel;                                           // 0x0358(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0BN7[0x7];                                   // 0x0359(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ProjectAgarthaProjectile
	 * Size -> 0x0010 (FullSize[0x0230] - InheritedSize[0x0220])
	 */
	class AProjectAgarthaProjectile : public AActor
	{
	public:
		class USphereComponent*                                    CollisionComp;                                           // 0x0220(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UProjectileMovementComponent*                        ProjectileMovement;                                      // 0x0228(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.RadialBaseMenuItem
	 * Size -> 0x0030 (FullSize[0x0290] - InheritedSize[0x0260])
	 */
	class URadialBaseMenuItem : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_G2U4[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              Icon;                                                    // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          textIdentifier;                                          // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGenericRadialMenuWidget*                            menuToShow;                                              // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              menuName;                                                // 0x0280(0x0010) Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnUnhighlight();
		void OnSelected();
		void OnHighlight();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.RadialIndividualCommandMenuItem
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class URadialIndividualCommandMenuItem : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_HUAB[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              Icon;                                                    // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          textIdentifier;                                          // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGenericRadialMenuWidget*                            menuToShow;                                              // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class ACombatEntity*                                       combatEntityToTarget;                                    // 0x0280(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnUnhighlight();
		void OnSelected();
		void OnHighlight();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.RadialLabel
	 * Size -> 0x0008 (FullSize[0x0268] - InheritedSize[0x0260])
	 */
	class URadialLabel : public UUserWidget
	{
	public:
		class UTextBlock*                                          Label;                                                   // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.RadialTacticalCommandWidget
	 * Size -> 0x0028 (FullSize[0x0288] - InheritedSize[0x0260])
	 */
	class URadialTacticalCommandWidget : public UUserWidget
	{
	public:
		unsigned char                                              UnknownData_Q3CA[0x8];                                   // 0x0260(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UImage*                                              Icon;                                                    // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTextBlock*                                          textIdentifier;                                          // 0x0270(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETacticalCommand                                           tacticalCommandToEnact;                                  // 0x0278(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9QCF[0x3];                                   // 0x0279(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    optionalIntData;                                         // 0x027C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OptionalFloatData;                                       // 0x0280(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YKES[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (PADDING)

	public:
		void OnUnhighlight();
		void OnSelected();
		void OnHighlight();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.ShopComponent
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UShopComponent : public UActorComponent
	{
	public:
		int32_t                                                    MoneyItemIndex;                                          // 0x00B0(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SellPriceDrop;                                           // 0x00B4(0x0004) Edit, BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTakesCurrencyFromStash;                                 // 0x00B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAcceptsItemsFromPlayer;                                 // 0x00B9(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAcceptsSalesToPlayer;                                   // 0x00BA(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2QCY[0x5];                                   // 0x00BB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDataTable*                                          ItemDataTable;                                           // 0x00C0(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.StaminaAttributeSet
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UStaminaAttributeSet : public UAttributeSet
	{
	public:
		struct FGameplayAttributeData                              CurrentStamina;                                          // 0x0030(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              MaximumStamina;                                          // 0x0040(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              StaminaRegeneration;                                     // 0x0050(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		struct FGameplayAttributeData                              StaminaDrain;                                            // 0x0060(0x0010) BlueprintVisible, BlueprintReadOnly, Net, RepNotify, NativeAccessSpecifierPublic
		float                                                      ExhaustionMinimumThreshold;                              // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ExhaustionMaximumThreshold;                              // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void OnRep_StaminaRegeneration(const struct FGameplayAttributeData& OldValue);
		void OnRep_StaminaDrain(const struct FGameplayAttributeData& OldValue);
		void OnRep_MaximumStamina(const struct FGameplayAttributeData& OldValue);
		void OnRep_CurrentStamina(const struct FGameplayAttributeData& OldValue);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.TacticalRadialMenuWidget
	 * Size -> 0x0010 (FullSize[0x0270] - InheritedSize[0x0260])
	 */
	class UTacticalRadialMenuWidget : public UUserWidget
	{
	public:
		class UGenericRadialMenuWidget*                            TacticalMenu;                                            // 0x0260(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGenericRadialMenuWidget*                            currDisplayedRadialMenu;                                 // 0x0268(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.TravelingGameMode
	 * Size -> 0x0008 (FullSize[0x02C8] - InheritedSize[0x02C0])
	 */
	class ATravelingGameMode : public AGameModeBase
	{
	public:
		class UDataTable*                                          ItemDataTable;                                           // 0x02C0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		bool TravelNextLevel(class APlayerController* PlayerController);
		void LoadStreamLevelFinished();
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.TutorialBox
	 * Size -> 0x0038 (FullSize[0x0260] - InheritedSize[0x0228])
	 */
	class ATutorialBox : public ATriggerBox
	{
	public:
		class FScriptDelegate                                      OnTutorialTriggeredDelegate;                             // 0x0228(0x0010) BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, NativeAccessSpecifierPublic
		int32_t                                                    MyIndex;                                                 // 0x0238(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Prerequisite;                                            // 0x023C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Message;                                                 // 0x0240(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		bool                                                       IsEnd;                                                   // 0x0258(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZCFD[0x7];                                   // 0x0259(0x0007) MISSED OFFSET (PADDING)

	public:
		void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.UtilityBlueprintFunctionLib
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UUtilityBlueprintFunctionLib : public UBlueprintFunctionLibrary
	{
	public:
		void RectsMerge(TArray<struct FVector4>* Rects);
		bool RectsCommonPart(const struct FVector4& Rect1, const struct FVector4& Rect2, struct FVector4* RectCommon);
		bool RectMerge(struct FVector4* RectParent, const struct FVector4& RectChild);
		bool RectInsideRect(const struct FVector4& RectParent, const struct FVector4& RectChild);
		bool RectCutRect(const struct FVector4& RectParent, const struct FVector4& RectScissor, TArray<struct FVector4>* ContainerRects);
		bool RectContactRect(const struct FVector4& Rect1, const struct FVector4& Rect2, float Tolerance);
		bool IsWeapon(EquipmentType _type);
		bool IsEditor();
		bool IsConsumable(EquipmentType _type);
		bool IsArmor(EquipmentType _type);
		class FString GetStatTypeFormatting(EItemStatType _itemStat, float _val);
		TMap<EItemStatType, float> GetStatEffects(const struct FItemStats& _stats);
		float GetDefaultAttackSpeed(EWeaponType _type);
		class FString FormatDecimalPrecision(float _val, int32_t _precision);
		class FString FormatAsPercentage(float _val, bool _plusIfPositive);
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.VariancePlayerStart
	 * Size -> 0x0008 (FullSize[0x0228] - InheritedSize[0x0220])
	 */
	class AVariancePlayerStart : public AActor
	{
	public:
		int32_t                                                    SpawnGroup;                                              // 0x0220(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SpawnTime;                                               // 0x0224(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class ProjectAgartha.VoiceComponent
	 * Size -> 0x0048 (FullSize[0x00F8] - InheritedSize[0x00B0])
	 */
	class UVoiceComponent : public UActorComponent
	{
	public:
		class UDataTable*                                          VoiceTablePointer;                                       // 0x00B0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USoundAttenuation*                                   MyVoiceAttenuation;                                      // 0x00B8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class ASimpleBot*>                                  NearbyBots;                                              // 0x00C0(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector                                             NearbyBotCacheLocation;                                  // 0x00D0(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PersonalPitch;                                           // 0x00DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XYGY[0x18];                                  // 0x00E0(0x0018) MISSED OFFSET (PADDING)

	public:
		void SayVoice(ECharacterVoice VoiceLine, bool bIsPriority);
		void NotifyNearbyBots();
		void LoadVoices(const class FName& VoiceIdentifier);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
