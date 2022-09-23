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
	 * Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.WithEditor
	 */
	struct UAgarthaPlayfabFunctionLibrary_WithEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.UsePlayFab
	 */
	struct UAgarthaPlayfabFunctionLibrary_UsePlayFab_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.IsSteamLoginEnable
	 */
	struct UAgarthaPlayfabFunctionLibrary_IsSteamLoginEnable_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.GetSteamLoginAuthToken
	 */
	struct UAgarthaPlayfabFunctionLibrary_GetSteamLoginAuthToken_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.AgathaPlayfabUtils.LoginWithSteam
	 */
	struct UAgathaPlayfabUtils_LoginWithSteam_Params
	{
	public:
		bool                                                       CreateAccount;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       LoggedInCheck;                                           // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.AgathaPlayfabUtils.LoginWithCustomID
	 */
	struct UAgathaPlayfabUtils_LoginWithCustomID_Params
	{
	public:
		class FString                                              CustomID;                                                // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CreateAccount;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       LoggedInCheck;                                           // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0012(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.AgathaPlayfabUtils.IsClientLoggedIn
	 */
	struct UAgathaPlayfabUtils_IsClientLoggedIn_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ArmorNoiseComponent.NotifyNearbyBots
	 */
	struct UArmorNoiseComponent_NotifyNearbyBots_Params
	{
	public:
		float                                                      OverrideDistance;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ArmorNoiseComponent.MakeNoise
	 */
	struct UArmorNoiseComponent_MakeNoise_Params
	{
	public:
		EArmorNoise                                                NoiseLine;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsPriority;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ArmorNoiseComponent.LoadNoises
	 */
	struct UArmorNoiseComponent_LoadNoises_Params
	{
	public:
		unsigned char                                              ArmorWeight;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ATCustomWaitVelocityChange.CreateWaitVelocityChange
	 */
	struct UATCustomWaitVelocityChange_CreateWaitVelocityChange_Params
	{
	public:
		class UGameplayAbility*                                    OwningAbility;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DotThreshold;                                            // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      MagnitudeThreshold;                                      // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReportZeroVelocity;                                      // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6CS5[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      NearZeroThreshold;                                       // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UATCustomWaitVelocityChange*                         ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.UpdateAchievement
	 */
	struct UBinarySerializer_UpdateAchievement_Params
	{
	public:
		EAchievement                                               Achievement;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_CVKF[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      Progress;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.SaveSessionToFileAsGameInstance
	 */
	struct UBinarySerializer_SaveSessionToFileAsGameInstance_Params
	{
	public:
		class FString                                              RaidURL;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UProjectAgarthaGameInstance*                         GameInstance;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.SaveSessionToFile
	 */
	struct UBinarySerializer_SaveSessionToFile_Params
	{
	public:
		class FString                                              RaidURL;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              WorldContext;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.SaveNPCsStateToPlayfab
	 */
	struct UBinarySerializer_SaveNPCsStateToPlayfab_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCharacterNPCsComponent*                             CharacterNPCsComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.SaveInventoryToPlayfabAsFreebooter
	 */
	struct UBinarySerializer_SaveInventoryToPlayfabAsFreebooter_Params
	{
	public:
		class ACombatEntity*                                       Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForgetRaid;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.SaveInventoryToPlayfab
	 */
	struct UBinarySerializer_SaveInventoryToPlayfab_Params
	{
	public:
		class ACombatEntity*                                       Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bForgetRaid;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.SaveAppearanceToPlayfab
	 */
	struct UBinarySerializer_SaveAppearanceToPlayfab_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCharacterModularComponent*                          ModularComponent;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.LogEvent
	 */
	struct UBinarySerializer_LogEvent_Params
	{
	public:
		class ACombatEntity*                                       Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAnalyticEvent                                             EventType;                                               // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_R91F[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OptionalKey;                                             // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              OptionalValue;                                           // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.LoadSessionFromFileAsGameInstance
	 */
	struct UBinarySerializer_LoadSessionFromFileAsGameInstance_Params
	{
	public:
		class UProjectAgarthaGameInstance*                         GameInstance;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.LoadSessionFromFile
	 */
	struct UBinarySerializer_LoadSessionFromFile_Params
	{
	public:
		class AActor*                                              WorldContext;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.LoadNPCsStateFromPlayfab
	 */
	struct UBinarySerializer_LoadNPCsStateFromPlayfab_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCharacterNPCsComponent*                             CharacterNPCsComponent;                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.LoadInventoryFromPlayfab
	 */
	struct UBinarySerializer_LoadInventoryFromPlayfab_Params
	{
	public:
		class ACombatEntity*                                       Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.LoadAppearanceFromPlayfabForCreator
	 */
	struct UBinarySerializer_LoadAppearanceFromPlayfabForCreator_Params
	{
	public:
		class FString                                              BackendID;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AProjectAgarthaCharacter*                            CharacterActor;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.LoadAppearanceFromPlayfab
	 */
	struct UBinarySerializer_LoadAppearanceFromPlayfab_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UCharacterModularComponent*                          ModularComponent;                                        // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BinarySerializer.Authorize
	 */
	struct UBinarySerializer_Authorize_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Token;                                                   // 0x0008(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PartyString;                                             // 0x0018(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnSpawnTick
	 */
	struct ABotSpawnNode_OnSpawnTick_Params
	{	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnSpawnNewZombieBegin
	 */
	struct ABotSpawnNode_OnSpawnNewZombieBegin_Params
	{
	public:
		struct FVector                                             BotLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_U3N9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBoxComponent*                                       ComponentSpawnedFrom;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnSpawnNewRabbitBegin
	 */
	struct ABotSpawnNode_OnSpawnNewRabbitBegin_Params
	{
	public:
		struct FVector                                             BotLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_APR2[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBoxComponent*                                       ComponentSpawnedFrom;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnSpawnNewGoatBegin
	 */
	struct ABotSpawnNode_OnSpawnNewGoatBegin_Params
	{
	public:
		struct FVector                                             BotLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_26IK[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBoxComponent*                                       ComponentSpawnedFrom;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnSpawnNewCorruptZombieBegin
	 */
	struct ABotSpawnNode_OnSpawnNewCorruptZombieBegin_Params
	{
	public:
		struct FVector                                             BotLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9432[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBoxComponent*                                       ComponentSpawnedFrom;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnSpawnNewBotEnd
	 */
	struct ABotSpawnNode_OnSpawnNewBotEnd_Params
	{
	public:
		class ACombatEntity*                                       NewBot;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UBoxComponent*                                       ComponentSpawnedFrom;                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnSpawnNewBotBegin
	 */
	struct ABotSpawnNode_OnSpawnNewBotBegin_Params
	{
	public:
		struct FVector                                             BotLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M09S[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBoxComponent*                                       ComponentSpawnedFrom;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnSpawnNewBoarBegin
	 */
	struct ABotSpawnNode_OnSpawnNewBoarBegin_Params
	{
	public:
		struct FVector                                             BotLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V8BM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBoxComponent*                                       ComponentSpawnedFrom;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnSpawnNewAsuraBegin
	 */
	struct ABotSpawnNode_OnSpawnNewAsuraBegin_Params
	{
	public:
		struct FVector                                             BotLocation;                                             // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_V78U[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBoxComponent*                                       ComponentSpawnedFrom;                                    // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnOverlapEnd
	 */
	struct ABotSpawnNode_OnOverlapEnd_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.OnOverlapBegin
	 */
	struct ABotSpawnNode_OnOverlapBegin_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.BotSpawnNode.Async_FindBotLocation
	 */
	struct ABotSpawnNode_Async_FindBotLocation_Params
	{
	public:
		class FScriptDelegate                                      Out;                                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  BadTransforms;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FTransform                                          NodeOrigin;                                              // 0x0020(0x0030)  (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
		class UWorld*                                              World;                                                   // 0x0050(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FTransform>                                  Components;                                              // 0x0058(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		TMap<class UBoxComponent*, int32_t>                        AsyncSpawnCount;                                         // 0x0068(0x0050)  (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterArmorComponent.OnUnequipArmor
	 */
	struct UCharacterArmorComponent_OnUnequipArmor_Params
	{
	public:
		ECharacterModuleType                                       Module;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_25S3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<ECharacterModuleType>                               ShowModules;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterArmorComponent.OnEquipArmor
	 */
	struct UCharacterArmorComponent_OnEquipArmor_Params
	{
	public:
		ECharacterModuleType                                       Module;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QPVU[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<ECharacterModuleType>                               HideModules;                                             // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		int32_t                                                    BodyType;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZD5L[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemTable                                          ItemData;                                                // 0x0020(0x02A0)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterArmorComponent.OnArmorUpdate
	 */
	struct UCharacterArmorComponent_OnArmorUpdate_Params
	{	};

	/**
	 * Function ProjectAgartha.CharacterBase.OnRep_Death
	 */
	struct ACharacterBase_OnRep_Death_Params
	{
	public:
		bool                                                       OldValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterBase.OnDeathCharacter
	 */
	struct ACharacterBase_OnDeathCharacter_Params
	{	};

	/**
	 * Function ProjectAgartha.CharacterBase.On_Death
	 */
	struct ACharacterBase_On_Death_Params
	{	};

	/**
	 * Function ProjectAgartha.CharacterBase.GiveGameplayAbility
	 */
	struct ACharacterBase_GiveGameplayAbility_Params
	{
	public:
		class UClass*                                              AbilityToGive;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterBase.BP_PlayerDied
	 */
	struct ACharacterBase_BP_PlayerDied_Params
	{	};

	/**
	 * Function ProjectAgartha.CharacterHistoryComponent.TrackStat
	 */
	struct UCharacterHistoryComponent_TrackStat_Params
	{
	public:
		EPlayerStat                                                Stat;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_I0PB[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Amount;                                                  // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterHistoryComponent.GetStat
	 */
	struct UCharacterHistoryComponent_GetStat_Params
	{
	public:
		EPlayerStat                                                Stat;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_XP7E[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterHistoryComponent.GetSessionStats
	 */
	struct UCharacterHistoryComponent_GetSessionStats_Params
	{
	public:
		struct FPlayerStats                                        ReturnValue;                                             // 0x0000(0x004C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterHistoryComponent.GetHistoryOfKills
	 */
	struct UCharacterHistoryComponent_GetHistoryOfKills_Params
	{
	public:
		TArray<struct FKillHistory>                                Kills;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterHistoryComponent.GetArchivedStats
	 */
	struct UCharacterHistoryComponent_GetArchivedStats_Params
	{
	public:
		struct FPlayerStats                                        ReturnValue;                                             // 0x0000(0x004C)  (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterHistoryComponent.Client_StatsChange
	 */
	struct UCharacterHistoryComponent_Client_StatsChange_Params
	{
	public:
		int32_t                                                    PlayerKills;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NPCKills;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Networth;                                                // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterHistoryComponent.Client_KillerSet
	 */
	struct UCharacterHistoryComponent_Client_KillerSet_Params
	{
	public:
		class FName                                                Name;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FDamageHistory>                              historyDamage;                                           // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FKillHistory>                                historyKills;                                            // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterHistoryComponent.ArchiveStats
	 */
	struct UCharacterHistoryComponent_ArchiveStats_Params
	{	};

	/**
	 * Function ProjectAgartha.CharacterModularComponent.UpdateCharacterMesh
	 */
	struct UCharacterModularComponent_UpdateCharacterMesh_Params
	{	};

	/**
	 * Function ProjectAgartha.CharacterModularComponent.SetCharacterBody
	 */
	struct UCharacterModularComponent_SetCharacterBody_Params
	{
	public:
		struct FCharacterBody                                      CharacterNewBody;                                        // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0060(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterModularComponent.GetCharacterBody
	 */
	struct UCharacterModularComponent_GetCharacterBody_Params
	{
	public:
		struct FCharacterBody                                      ReturnValue;                                             // 0x0000(0x0060)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.UpdateQuestState
	 */
	struct UCharacterNPCsComponent_UpdateQuestState_Params
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.Server_FirstTalkFinished
	 */
	struct UCharacterNPCsComponent_Server_FirstTalkFinished_Params
	{
	public:
		class UNPCComponent*                                       NPCComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.Server_FinishQuest
	 */
	struct UCharacterNPCsComponent_Server_FinishQuest_Params
	{
	public:
		class UNPCComponent*                                       NPCComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.Server_ClearQuests
	 */
	struct UCharacterNPCsComponent_Server_ClearQuests_Params
	{
	public:
		bool                                                       ResetMerchants;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.OverlappedQuestPoint
	 */
	struct UCharacterNPCsComponent_OverlappedQuestPoint_Params
	{
	public:
		class FName                                                QuestPoint;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.OnRep_NPCLevels
	 */
	struct UCharacterNPCsComponent_OnRep_NPCLevels_Params
	{	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.NPCQuestProgress
	 */
	struct UCharacterNPCsComponent_NPCQuestProgress_Params
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FProjectAgartha_FNPCQuestProgress                   Progress;                                                // 0x0008(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.GetQuestState
	 */
	struct UCharacterNPCsComponent_GetQuestState_Params
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EQuestProgressType                                         ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.GetQuestInfo
	 */
	struct UCharacterNPCsComponent_GetQuestInfo_Params
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuestTable                                         QuestRow;                                                // 0x0008(0x00D0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.GetItemInfo
	 */
	struct UCharacterNPCsComponent_GetItemInfo_Params
	{
	public:
		class FName                                                ItemRowName;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G427[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemTable                                          ItemRow;                                                 // 0x0010(0x02A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x02B0(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.FindNPCQuestInProgress
	 */
	struct UCharacterNPCsComponent_FindNPCQuestInProgress_Params
	{
	public:
		class FName                                                NPCName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestName;                                               // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FProjectAgartha_FNPCQuestProgress                   QuestProgress;                                           // 0x0010(0x0020)  (Parm, OutParm, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0030(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.FindNPCLevel
	 */
	struct UCharacterNPCsComponent_FindNPCLevel_Params
	{
	public:
		class FName                                                NPCName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FNPCLevel                                           NPCLevel;                                                // 0x0008(0x0010)  (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.FindItems
	 */
	struct UCharacterNPCsComponent_FindItems_Params
	{
	public:
		class FName                                                ItemName;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FQuestItemsStat>                             ItemStats;                                               // 0x0008(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.EventQuestResult
	 */
	struct UCharacterNPCsComponent_EventQuestResult_Params
	{
	public:
		EQuestActionResult                                         Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IFHI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                QuestName;                                               // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.Client_Quest_Result
	 */
	struct UCharacterNPCsComponent_Client_Quest_Result_Params
	{
	public:
		EQuestActionResult                                         Result;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MGQX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FName                                                QuestName;                                               // 0x0004(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterNPCsComponent.ClearQuests
	 */
	struct UCharacterNPCsComponent_ClearQuests_Params
	{
	public:
		bool                                                       ResetMerchants;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CharacterTravelingComponent.OnRep_SpawnGroup
	 */
	struct UCharacterTravelingComponent_OnRep_SpawnGroup_Params
	{	};

	/**
	 * Function ProjectAgartha.CharacterTravelingComponent.MoveToSpawn
	 */
	struct UCharacterTravelingComponent_MoveToSpawn_Params
	{	};

	/**
	 * Function ProjectAgartha.CharacterWeaponsComponent.OnWeaponUpdate
	 */
	struct UCharacterWeaponsComponent_OnWeaponUpdate_Params
	{	};

	/**
	 * Function ProjectAgartha.ChatSubsystem.SendMessage_3
	 */
	struct UChatSubsystem_SendMessage_3_Params
	{
	public:
		EChatChannel                                               _Channel;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3PQ7[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              _Name;                                                   // 0x0008(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              _Message;                                                // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ChatSubsystem.SendMessage
	 */
	struct UChatSubsystem_SendMessage_Params
	{
	public:
		struct FChatLine                                           ChatLine;                                                // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ChatSubsystem.ReceivedMessage
	 */
	struct UChatSubsystem_ReceivedMessage_Params
	{
	public:
		struct FChatLine                                           ChatLine;                                                // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ChatSubsystem.MuteChannel
	 */
	struct UChatSubsystem_MuteChannel_Params
	{
	public:
		EChatChannel                                               Channel;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bMuted;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ChatSubsystem.GetAllLinesFromChannel
	 */
	struct UChatSubsystem_GetAllLinesFromChannel_Params
	{
	public:
		EChatChannel                                               Channel;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LE8G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FChatLine>                                   ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ChatSubsystem.FormatLine
	 */
	struct UChatSubsystem_FormatLine_Params
	{
	public:
		struct FChatLine                                           ChatLine;                                                // 0x0000(0x0028)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0028(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PlayerCharacter.InitializeAbilityBindings
	 */
	struct APlayerCharacter_InitializeAbilityBindings_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.UpdateStanceAndType
	 */
	struct ACombatEntity_UpdateStanceAndType_Params
	{
	public:
		EWeaponType                                                NewWeaponType;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.UpdateExtractionBasedOnParty
	 */
	struct ACombatEntity_UpdateExtractionBasedOnParty_Params
	{
	public:
		bool                                                       bMoveToSpawnWhenComplete;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.TryPerformJump
	 */
	struct ACombatEntity_TryPerformJump_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.SetStance
	 */
	struct ACombatEntity_SetStance_Params
	{
	public:
		ECharacterStance                                           CStance;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_UseActionInventory
	 */
	struct ACombatEntity_Server_UseActionInventory_Params
	{
	public:
		class UInventoryComponent*                                 ActionInventory;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_UseAction
	 */
	struct ACombatEntity_Server_UseAction_Params
	{
	public:
		struct FVector                                             Begin;                                                   // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_UpdateStash
	 */
	struct ACombatEntity_Server_UpdateStash_Params
	{
	public:
		class UItem*                                               StashItem;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_Sheathe
	 */
	struct ACombatEntity_Server_Sheathe_Params
	{
	public:
		bool                                                       bIsFighting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_PlaceInWorld
	 */
	struct ACombatEntity_Server_PlaceInWorld_Params
	{
	public:
		class UItem*                                               Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWorld*                                              World;                                                   // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldPosition;                                           // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_PlaceInContainer
	 */
	struct ACombatEntity_Server_PlaceInContainer_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AItemActor*                                          TargetItemActor;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_OnWeaponComponentStanceChange
	 */
	struct ACombatEntity_Server_OnWeaponComponentStanceChange_Params
	{
	public:
		bool                                                       bIsFighting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponType                                                Weapon;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_OnWeaponComponentEquipmentChange
	 */
	struct ACombatEntity_Server_OnWeaponComponentEquipmentChange_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              ItemLocation;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_OnSheatheAction
	 */
	struct ACombatEntity_Server_OnSheatheAction_Params
	{
	public:
		bool                                                       bIsFighting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponType                                                Weapon;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_OnServerKick
	 */
	struct ACombatEntity_Server_OnServerKick_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_OnArmorComponentEquipmentChange
	 */
	struct ACombatEntity_Server_OnArmorComponentEquipmentChange_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               PrevItem;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              ItemLocation;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Server_CraftRecipeOnTable
	 */
	struct ACombatEntity_Server_CraftRecipeOnTable_Params
	{
	public:
		struct FRecipeTable                                        Recipe;                                                  // 0x0000(0x0048)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       Requirements;                                            // 0x0048(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		class UCraftingComponent*                                  CraftTable;                                              // 0x0058(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Repeats;                                                 // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.SaveInventory
	 */
	struct ACombatEntity_SaveInventory_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.ReplicateStashDelayed
	 */
	struct ACombatEntity_ReplicateStashDelayed_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.RemoveStats
	 */
	struct ACombatEntity_RemoveStats_Params
	{
	public:
		struct FItemStats                                          NewStats;                                                // 0x0000(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		unsigned char                                              Durability;                                              // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.RemoveAbilities
	 */
	struct ACombatEntity_RemoveAbilities_Params
	{
	public:
		EWeaponType                                                MoveSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.RaycastFromPlayerController
	 */
	struct ACombatEntity_RaycastFromPlayerController_Params
	{
	public:
		struct FVector                                             Start;                                                   // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             End;                                                     // 0x000C(0x000C)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.PlayEmoteByRowName
	 */
	struct ACombatEntity_PlayEmoteByRowName_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.PickUp
	 */
	struct ACombatEntity_PickUp_Params
	{
	public:
		class AItemActor*                                          Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.PerformLightAttack
	 */
	struct ACombatEntity_PerformLightAttack_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.PerformKick
	 */
	struct ACombatEntity_PerformKick_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.PerformHeavyAttack
	 */
	struct ACombatEntity_PerformHeavyAttack_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.PerformDodge
	 */
	struct ACombatEntity_PerformDodge_Params
	{
	public:
		unsigned char                                              Direction;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnWeaponComponentEquipmentChange
	 */
	struct ACombatEntity_OnWeaponComponentEquipmentChange_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              ItemLocation;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnUse
	 */
	struct ACombatEntity_OnUse_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnStanceChange
	 */
	struct ACombatEntity_OnStanceChange_Params
	{
	public:
		bool                                                       bIsFighting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnSheatheUnsheathe
	 */
	struct ACombatEntity_OnSheatheUnsheathe_Params
	{
	public:
		bool                                                       bIsFighting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponType                                                Weapon;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnRep_Stance
	 */
	struct ACombatEntity_OnRep_Stance_Params
	{
	public:
		ECharacterStance                                           OldValue;                                                // 0x0000(0x0001)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnRep_Party
	 */
	struct ACombatEntity_OnRep_Party_Params
	{
	public:
		unsigned char                                              OldValue;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnRep_OnInventoryUpdate
	 */
	struct ACombatEntity_OnRep_OnInventoryUpdate_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnNPCDialog
	 */
	struct ACombatEntity_OnNPCDialog_Params
	{
	public:
		class UNPCComponent*                                       NPCComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestToFinish;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestToPropose;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FNPCQuestProgressCondition>                  Conditions;                                              // 0x0018(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnInventoryLoaded
	 */
	struct ACombatEntity_OnInventoryLoaded_Params
	{
	public:
		class ACombatEntity*                                       Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnEquipmentChange
	 */
	struct ACombatEntity_OnEquipmentChange_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               PrevItem;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              ItemLocation;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnCraftTableOpen
	 */
	struct ACombatEntity_OnCraftTableOpen_Params
	{
	public:
		class UCraftingComponent*                                  CraftTable;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnContainerOpen
	 */
	struct ACombatEntity_OnContainerOpen_Params
	{
	public:
		class UInventoryComponent*                                 Container;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.OnArmorComponentEquipmentChange
	 */
	struct ACombatEntity_OnArmorComponentEquipmentChange_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               PrevItem;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              ItemLocation;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.NPCQuestNotEnoughSpaceToReward
	 */
	struct ACombatEntity_NPCQuestNotEnoughSpaceToReward_Params
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Multicast_UpdateStash
	 */
	struct ACombatEntity_Multicast_UpdateStash_Params
	{
	public:
		class UItem*                                               StashItem;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Multicast_PlaySound
	 */
	struct ACombatEntity_Multicast_PlaySound_Params
	{
	public:
		unsigned char                                              UnknownData_HMNP[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      VolumeMultiplier;                                        // 0x0028(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      PitchMultiplier;                                         // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class USoundAttenuation*                                   Attenuation;                                             // 0x0030(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCancelLastSound;                                        // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Multicast_OnWeaponComponentStanceChange
	 */
	struct ACombatEntity_Multicast_OnWeaponComponentStanceChange_Params
	{
	public:
		bool                                                       bIsFighting;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponType                                                Weapon;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Multicast_OnWeaponComponentEquipmentChange
	 */
	struct ACombatEntity_Multicast_OnWeaponComponentEquipmentChange_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              ItemLocation;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Multicast_OnSheatheAction
	 */
	struct ACombatEntity_Multicast_OnSheatheAction_Params
	{
	public:
		bool                                                       IsFighting;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EWeaponType                                                Weapon;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Multicast_OnArmorComponentEquipmentChange
	 */
	struct ACombatEntity_Multicast_OnArmorComponentEquipmentChange_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               PrevItem;                                                // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              ItemLocation;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.IsUniqueBehaviorActive
	 */
	struct ACombatEntity_IsUniqueBehaviorActive_Params
	{
	public:
		EUniqueBehavior                                            Behaviors;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.GetWeaponType
	 */
	struct ACombatEntity_GetWeaponType_Params
	{
	public:
		EWeaponType                                                ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.GetDropPosition
	 */
	struct ACombatEntity_GetDropPosition_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.FindItemObject
	 */
	struct ACombatEntity_FindItemObject_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_0TV9[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AItemActor*                                          ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.FindItemContainer
	 */
	struct ACombatEntity_FindItemContainer_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_8FBS[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AItemContainer*                                      ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.FindCorpse
	 */
	struct ACombatEntity_FindCorpse_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5J7G[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryComponent*                                 ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.ConsumeStamina
	 */
	struct ACombatEntity_ConsumeStamina_Params
	{
	public:
		ECombatAction                                              Action;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Client_UseActionCrafting
	 */
	struct ACombatEntity_Client_UseActionCrafting_Params
	{
	public:
		class UCraftingComponent*                                  ContainerResult;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Client_UseAction
	 */
	struct ACombatEntity_Client_UseAction_Params
	{
	public:
		class UInventoryComponent*                                 ContainerResult;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Client_OnWeaponComponentEquipmentChange
	 */
	struct ACombatEntity_Client_OnWeaponComponentEquipmentChange_Params
	{
	public:
		class UItem*                                               NewItem;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              ItemLocation;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Client_OnServerKick
	 */
	struct ACombatEntity_Client_OnServerKick_Params
	{
	public:
		class FString                                              Reason;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Client_OnFullyLoaded
	 */
	struct ACombatEntity_Client_OnFullyLoaded_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.Client_OnCraftRecipe
	 */
	struct ACombatEntity_Client_OnCraftRecipe_Params
	{
	public:
		class UCraftingComponent*                                  CraftTable;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bCraftWasSuccess;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECraftResult                                               Result;                                                  // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Client_NPCQuestNotEnoughSpaceToReward
	 */
	struct ACombatEntity_Client_NPCQuestNotEnoughSpaceToReward_Params
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.Client_NPCAction
	 */
	struct ACombatEntity_Client_NPCAction_Params
	{
	public:
		class UNPCComponent*                                       NPCComponent;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestToFinish;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestToPropose;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FNPCQuestProgressCondition>                  Conditions;                                              // 0x0018(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.CheckRetaliation
	 */
	struct ACombatEntity_CheckRetaliation_Params
	{
	public:
		class AActor*                                              DamageCauser;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.CanAffordStamina
	 */
	struct ACombatEntity_CanAffordStamina_Params
	{
	public:
		ECombatAction                                              Action;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.BP_ReconnectedBeginPlay
	 */
	struct ACombatEntity_BP_ReconnectedBeginPlay_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.BP_OnRep_OnEnraged
	 */
	struct ACombatEntity_BP_OnRep_OnEnraged_Params
	{	};

	/**
	 * Function ProjectAgartha.CombatEntity.AddStats
	 */
	struct ACombatEntity_AddStats_Params
	{
	public:
		struct FItemStats                                          NewStats;                                                // 0x0000(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		unsigned char                                              Durability;                                              // 0x00A0(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CombatEntity.AddAbilities
	 */
	struct ACombatEntity_AddAbilities_Params
	{
	public:
		EWeaponType                                                MoveSet;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.ReturnCraftReqsToInventory
	 */
	struct UCraftingComponent_ReturnCraftReqsToInventory_Params
	{
	public:
		class ACombatEntity*                                       Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.GetStationRank
	 */
	struct UCraftingComponent_GetStationRank_Params
	{
	public:
		class ACombatEntity*                                       Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.GetMaxAmountOfRepeats
	 */
	struct UCraftingComponent_GetMaxAmountOfRepeats_Params
	{
	public:
		struct FRecipeTable                                        Recipe;                                                  // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       Container;                                               // 0x0048(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0058(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.GetItemsByIndex
	 */
	struct UCraftingComponent_GetItemsByIndex_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_DMK4[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UItem*>                                       ItemsFound;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       ContainerToSearch;                                       // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.GetEmptyCraftingSlot
	 */
	struct UCraftingComponent_GetEmptyCraftingSlot_Params
	{
	public:
		TArray<int32_t>                                            _collisionGrid;                                          // 0x0000(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		struct FIntPoint                                           _itemScale;                                              // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    _gridSize;                                               // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntPoint                                           ReturnValue;                                             // 0x001C(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.GetCraftOutputItems
	 */
	struct UCraftingComponent_GetCraftOutputItems_Params
	{
	public:
		struct FRecipeTable                                        Recipe;                                                  // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       Requirements;                                            // 0x0048(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 _inventoryComponent;                                     // 0x0058(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       ReturnValue;                                             // 0x0060(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.GetAmountOfItemsByType
	 */
	struct UCraftingComponent_GetAmountOfItemsByType_Params
	{
	public:
		EquipmentType                                              ItemType;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_04HS[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UItem*>                                       ContainerToSearch;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.GetAmountOfItemsByIndex
	 */
	struct UCraftingComponent_GetAmountOfItemsByIndex_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_Q8KA[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UItem*>                                       ContainerToSearch;                                       // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0018(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.GetAllValidRecipes
	 */
	struct UCraftingComponent_GetAllValidRecipes_Params
	{
	public:
		class ACombatEntity*                                       Player;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       _useStationLevel;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YM3E[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<struct FRecipeTable>                                ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.CraftRecipe
	 */
	struct UCraftingComponent_CraftRecipe_Params
	{
	public:
		struct FRecipeTable                                        Recipe;                                                  // 0x0000(0x0048)  (Parm, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       Requirements;                                            // 0x0048(0x0010)  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
		class ACombatEntity*                                       Player;                                                  // 0x0058(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Repeat;                                                  // 0x0060(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.Client_OnCraftRecipe
	 */
	struct UCraftingComponent_Client_OnCraftRecipe_Params
	{
	public:
		bool                                                       bCraftWasSuccess;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECraftResult                                               Result;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.Client_GetStationRank
	 */
	struct UCraftingComponent_Client_GetStationRank_Params
	{
	public:
		unsigned char                                              ContainerWidth;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ContainerHeight;                                         // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Level;                                                   // 0x0002(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CraftingComponent.BP_OnCraftRecipe
	 */
	struct UCraftingComponent_BP_OnCraftRecipe_Params
	{
	public:
		bool                                                       bCraftWasSuccess;                                        // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECraftResult                                               Result;                                                  // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomAbilitySystemComponent.RemoveGameplayCueLocal
	 */
	struct UCustomAbilitySystemComponent_RemoveGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomAbilitySystemComponent.GetActiveGameplayEffectUIData
	 */
	struct UCustomAbilitySystemComponent_GetActiveGameplayEffectUIData_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         ActiveHandle;                                            // 0x0000(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UGameplayEffectUIData*                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomAbilitySystemComponent.ExecuteGameplayCueLocal
	 */
	struct UCustomAbilitySystemComponent_ExecuteGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomAbilitySystemComponent.CancelAbilitiesWithTags
	 */
	struct UCustomAbilitySystemComponent_CancelAbilitiesWithTags_Params
	{
	public:
		struct FGameplayTagContainer                               WithTags;                                                // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomAbilitySystemComponent.AddGameplayCueLocal
	 */
	struct UCustomAbilitySystemComponent_AddGameplayCueLocal_Params
	{
	public:
		struct FGameplayTag                                        GameplayCueTag;                                          // 0x0000(0x0008)  (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayCueParameters                              GameplayCueParameters;                                   // 0x0008(0x00B8)  (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomGameplayAbility.SetAbilityLevel
	 */
	struct UCustomGameplayAbility_SetAbilityLevel_Params
	{
	public:
		int32_t                                                    Level;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomGameplayAbility.GetModifiedAbilityStrength
	 */
	struct UCustomGameplayAbility_GetModifiedAbilityStrength_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomGameplayAbility.ApplySetByCallerGameplayEffect
	 */
	struct UCustomGameplayAbility_ApplySetByCallerGameplayEffect_Params
	{
	public:
		class AActor*                                              Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UClass*                                              GameplayEffect;                                          // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EffectLevel;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayTag                                        SetByCallerTag;                                          // 0x0014(0x0008)  (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      SetByCallerAmount;                                       // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomGameplayAbility.ApplyGameplayEffectToTarget
	 */
	struct UCustomGameplayAbility_ApplyGameplayEffectToTarget_Params
	{
	public:
		class UClass*                                              EffectToAdd;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              Target;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EffectLevel;                                             // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomGameplayAbility.ApplyGameplayEffectToOwner
	 */
	struct UCustomGameplayAbility_ApplyGameplayEffectToOwner_Params
	{
	public:
		class UClass*                                              EffectToAdd;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      EffectLevel;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.CustomGameplayAbility.AddAsyncTaskToPool
	 */
	struct UCustomGameplayAbility_AddAsyncTaskToPool_Params
	{
	public:
		class UGameplayTask*                                       Task;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_TurnSpeed
	 */
	struct UEquipmentAttributeSet_OnRep_TurnSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_StunResistance
	 */
	struct UEquipmentAttributeSet_OnRep_StunResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_StaminaUsageMultiplier
	 */
	struct UEquipmentAttributeSet_OnRep_StaminaUsageMultiplier_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_ProjectileDamageReduction
	 */
	struct UEquipmentAttributeSet_OnRep_ProjectileDamageReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_MoveSpeed
	 */
	struct UEquipmentAttributeSet_OnRep_MoveSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_LootSpeedMultiplier
	 */
	struct UEquipmentAttributeSet_OnRep_LootSpeedMultiplier_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_KickStaminaPercentage
	 */
	struct UEquipmentAttributeSet_OnRep_KickStaminaPercentage_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_KickDamage
	 */
	struct UEquipmentAttributeSet_OnRep_KickDamage_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_JumpHeightMultiplier
	 */
	struct UEquipmentAttributeSet_OnRep_JumpHeightMultiplier_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_FistStaminaPercentage
	 */
	struct UEquipmentAttributeSet_OnRep_FistStaminaPercentage_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_FistDamage
	 */
	struct UEquipmentAttributeSet_OnRep_FistDamage_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_FallDamageReduction
	 */
	struct UEquipmentAttributeSet_OnRep_FallDamageReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_DodgeSpeed
	 */
	struct UEquipmentAttributeSet_OnRep_DodgeSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_DamageReduction
	 */
	struct UEquipmentAttributeSet_OnRep_DamageReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_CriticalDamageReduction
	 */
	struct UEquipmentAttributeSet_OnRep_CriticalDamageReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_CriticalDamageMultiplier
	 */
	struct UEquipmentAttributeSet_OnRep_CriticalDamageMultiplier_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_BreakBoneMagnitude
	 */
	struct UEquipmentAttributeSet_OnRep_BreakBoneMagnitude_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_BluntDamageReduction
	 */
	struct UEquipmentAttributeSet_OnRep_BluntDamageReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_BlockDamageTaken
	 */
	struct UEquipmentAttributeSet_OnRep_BlockDamageTaken_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_BlockDamageDealt
	 */
	struct UEquipmentAttributeSet_OnRep_BlockDamageDealt_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_BleedResistance
	 */
	struct UEquipmentAttributeSet_OnRep_BleedResistance_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_BleedMagnitude
	 */
	struct UEquipmentAttributeSet_OnRep_BleedMagnitude_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_BladeDamageReduction
	 */
	struct UEquipmentAttributeSet_OnRep_BladeDamageReduction_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_BaseDamage
	 */
	struct UEquipmentAttributeSet_OnRep_BaseDamage_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_AttackSpeedMultiplier
	 */
	struct UEquipmentAttributeSet_OnRep_AttackSpeedMultiplier_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.EquipmentAttributeSet.OnRep_ArmorWeight
	 */
	struct UEquipmentAttributeSet_OnRep_ArmorWeight_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ExtractionPoint.SetPCVisibility
	 */
	struct AExtractionPoint_SetPCVisibility_Params
	{
	public:
		bool                                                       Visible;                                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ExtractionPoint.isCharacterAllowedToBeExtracted
	 */
	struct AExtractionPoint_isCharacterAllowedToBeExtracted_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.FoodAttributeSet.OnRep_PotionToxicity
	 */
	struct UFoodAttributeSet_OnRep_PotionToxicity_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.FoodAttributeSet.OnRep_MaximumFood
	 */
	struct UFoodAttributeSet_OnRep_MaximumFood_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.FoodAttributeSet.OnRep_FoodRegeneration
	 */
	struct UFoodAttributeSet_OnRep_FoodRegeneration_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.FoodAttributeSet.OnRep_FoodFullness
	 */
	struct UFoodAttributeSet_OnRep_FoodFullness_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.FoodAttributeSet.OnRep_FoodDrain
	 */
	struct UFoodAttributeSet_OnRep_FoodDrain_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.FoodAttributeSet.OnRep_CurrentFood
	 */
	struct UFoodAttributeSet_OnRep_CurrentFood_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GASBlueprintFunctionLibrary.TryGetAttributeValueFromActor
	 */
	struct UGASBlueprintFunctionLibrary_TryGetAttributeValueFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FGameplayAttribute                                  Attribute;                                               // 0x0008(0x0038)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EAttributeSearchType                                       SearchType;                                              // 0x0040(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ValueFound;                                              // 0x0041(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_B201[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0044(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GASBlueprintFunctionLibrary.TryGetAbilitySystemComponentFromActor
	 */
	struct UGASBlueprintFunctionLibrary_TryGetAbilitySystemComponentFromActor_Params
	{
	public:
		class AActor*                                              Actor;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       WasFound;                                                // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_1KKY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAbilitySystemComponent*                             ReturnValue;                                             // 0x0010(0x0008)  (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.UpdateSegments
	 */
	struct UGenericRadialMenuWidget_UpdateSegments_Params
	{
	public:
		int32_t                                                    _segments;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.UpdateMaterialVisuals
	 */
	struct UGenericRadialMenuWidget_UpdateMaterialVisuals_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.UpdateMaterials
	 */
	struct UGenericRadialMenuWidget_UpdateMaterials_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.UpdateInput
	 */
	struct UGenericRadialMenuWidget_UpdateInput_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.UpdateDirectionWithMouseCursor
	 */
	struct UGenericRadialMenuWidget_UpdateDirectionWithMouseCursor_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.UpdateDirectionWithJoystick
	 */
	struct UGenericRadialMenuWidget_UpdateDirectionWithJoystick_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.UpdateChildPosition
	 */
	struct UGenericRadialMenuWidget_UpdateChildPosition_Params
	{
	public:
		int32_t                                                    _index;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.SetInputDirection
	 */
	struct UGenericRadialMenuWidget_SetInputDirection_Params
	{
	public:
		struct FVector2D                                           _input;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.SetIndex
	 */
	struct UGenericRadialMenuWidget_SetIndex_Params
	{
	public:
		int32_t                                                    _index;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.SetInDeadzone
	 */
	struct UGenericRadialMenuWidget_SetInDeadzone_Params
	{
	public:
		bool                                                       _inDeadzone;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.SetCPPReferences
	 */
	struct UGenericRadialMenuWidget_SetCPPReferences_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.SelectButtonPressed
	 */
	struct UGenericRadialMenuWidget_SelectButtonPressed_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.RemoveQuickCommandAtIndex
	 */
	struct UGenericRadialMenuWidget_RemoveQuickCommandAtIndex_Params
	{
	public:
		int32_t                                                    _index;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.RemoveLabelAtIndex
	 */
	struct UGenericRadialMenuWidget_RemoveLabelAtIndex_Params
	{
	public:
		int32_t                                                    _index;                                                  // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.RemoveChildWidgetFromRadialMenu
	 */
	struct UGenericRadialMenuWidget_RemoveChildWidgetFromRadialMenu_Params
	{
	public:
		class UUserWidget*                                         _widget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.RemoveChildIndexFromRadialMenu
	 */
	struct UGenericRadialMenuWidget_RemoveChildIndexFromRadialMenu_Params
	{
	public:
		int32_t                                                    _indexToRemove;                                          // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.RegisterPlayerInput
	 */
	struct UGenericRadialMenuWidget_RegisterPlayerInput_Params
	{
	public:
		class APlayerController*                                   _controller;                                             // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.FixMainRotation
	 */
	struct UGenericRadialMenuWidget_FixMainRotation_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.FixInputRotation
	 */
	struct UGenericRadialMenuWidget_FixInputRotation_Params
	{
	public:
		struct FVector2D                                           _input;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector2D                                           ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.ClearChildren
	 */
	struct UGenericRadialMenuWidget_ClearChildren_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.CenterMousePosition
	 */
	struct UGenericRadialMenuWidget_CenterMousePosition_Params
	{
	public:
		int32_t                                                    _playerIndex;                                            // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.AutoRegisterToInput
	 */
	struct UGenericRadialMenuWidget_AutoRegisterToInput_Params
	{	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.AttachQuickCommandToChild
	 */
	struct UGenericRadialMenuWidget_AttachQuickCommandToChild_Params
	{
	public:
		class UUserWidget*                                         _child;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                _quickCommandKey;                                        // 0x0008(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.AddChildToRadialMenu
	 */
	struct UGenericRadialMenuWidget_AddChildToRadialMenu_Params
	{
	public:
		class UUserWidget*                                         _widget;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.AddChildAndLabelToRadialMenu
	 */
	struct UGenericRadialMenuWidget_AddChildAndLabelToRadialMenu_Params
	{
	public:
		class UUserWidget*                                         _child;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         _label;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.GenericRadialMenuWidget.AddChildAndLabelAndQuickCommandToRadialMenu
	 */
	struct UGenericRadialMenuWidget_AddChildAndLabelAndQuickCommandToRadialMenu_Params
	{
	public:
		class UUserWidget*                                         _child;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UUserWidget*                                         _label;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FKey                                                _quickCommandKey;                                        // 0x0010(0x0018)  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0028(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.HealthAttributeSet.OnRep_MaximumHealth
	 */
	struct UHealthAttributeSet_OnRep_MaximumHealth_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.HealthAttributeSet.OnRep_HealthRegeneration
	 */
	struct UHealthAttributeSet_OnRep_HealthRegeneration_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.HealthAttributeSet.OnRep_CurrentHealth
	 */
	struct UHealthAttributeSet_OnRep_CurrentHealth_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.HealthAttributeSet.OnRep_BloodLoss
	 */
	struct UHealthAttributeSet_OnRep_BloodLoss_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.UnequipSlot
	 */
	struct UInventoryComponent_UnequipSlot_Params
	{
	public:
		EquipmentType                                              SlotID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TRPL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 SourceComponent;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TargetPositionX;                                         // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TargetPositionY;                                         // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bBlockRequest;                                           // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0021(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.UnequipConsumableIndex
	 */
	struct UInventoryComponent_UnequipConsumableIndex_Params
	{
	public:
		int32_t                                                    SlotID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.UnequipConsumable
	 */
	struct UInventoryComponent_UnequipConsumable_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.TimeoutAwaitingPlacement
	 */
	struct UInventoryComponent_TimeoutAwaitingPlacement_Params
	{	};

	/**
	 * Function ProjectAgartha.InventoryComponent.SortItemsTier
	 */
	struct UInventoryComponent_SortItemsTier_Params
	{
	public:
		bool                                                       CalledByServer;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.SortItemsPrice
	 */
	struct UInventoryComponent_SortItemsPrice_Params
	{
	public:
		bool                                                       CalledByServer;                                          // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.SortContainer
	 */
	struct UInventoryComponent_SortContainer_Params
	{
	public:
		class UItem*                                               TargetContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESortStyle                                                 Sort;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.SmartSplitStackableItem
	 */
	struct UInventoryComponent_SmartSplitStackableItem_Params
	{
	public:
		class UItem*                                               Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Num;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CalledByServer;                                          // 0x000C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnResult;                                            // 0x000D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_5HAN[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.SmartEquipInSlot
	 */
	struct UInventoryComponent_SmartEquipInSlot_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnResult;                                            // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_9C8S[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.SmartEquipInConsumables
	 */
	struct UInventoryComponent_SmartEquipInConsumables_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.SmartChooseAmmo
	 */
	struct UInventoryComponent_SmartChooseAmmo_Params
	{
	public:
		class UItem*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.SetItemContainerDimensions
	 */
	struct UInventoryComponent_SetItemContainerDimensions_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewWidth;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              NewHeight;                                               // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_UnequipEquipment
	 */
	struct UInventoryComponent_Server_UnequipEquipment_Params
	{
	public:
		EquipmentType                                              SlotID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_G6N6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 SourceComponent;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_UnequipConsumable
	 */
	struct UInventoryComponent_Server_UnequipConsumable_Params
	{
	public:
		int32_t                                                    SlotID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0004(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_TrySplitStackedItem
	 */
	struct UInventoryComponent_Server_TrySplitStackedItem_Params
	{
	public:
		class UItem*                                               Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumToSplit;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_ToggleInsurance
	 */
	struct UInventoryComponent_Server_ToggleInsurance_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldBeInsured;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_SortItemsTier
	 */
	struct UInventoryComponent_Server_SortItemsTier_Params
	{	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_SortItemsPrice
	 */
	struct UInventoryComponent_Server_SortItemsPrice_Params
	{	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_SortActualPosition
	 */
	struct UInventoryComponent_Server_SortActualPosition_Params
	{
	public:
		class UItem*                                               TargetContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESortStyle                                                 Sort;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_RequestExtraData
	 */
	struct UInventoryComponent_Server_RequestExtraData_Params
	{
	public:
		class UInventoryComponent*                                 Inventory;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               Item;                                                    // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_PayInsurance
	 */
	struct UInventoryComponent_Server_PayInsurance_Params
	{	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_Item_UpdatePlacement
	 */
	struct UInventoryComponent_Server_Item_UpdatePlacement_Params
	{
	public:
		class UItem*                                               Target;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              X;                                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Y;                                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              RotationDiv;                                             // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_Item_Split
	 */
	struct UInventoryComponent_Server_Item_Split_Params
	{
	public:
		class UItem*                                               Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Num;                                                     // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_Item_RemoveUpgrade
	 */
	struct UInventoryComponent_Server_Item_RemoveUpgrade_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               Upgrade;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_Item_PlaceInWorld
	 */
	struct UInventoryComponent_Server_Item_PlaceInWorld_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldPosition;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_Item_PlaceInContainer
	 */
	struct UInventoryComponent_Server_Item_PlaceInContainer_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnResult;                                            // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_57EV[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TargetRotation;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_Item_MergeInto
	 */
	struct UInventoryComponent_Server_Item_MergeInto_Params
	{
	public:
		class UItem*                                               Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               Destination;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_Item_AddUpgrade
	 */
	struct UInventoryComponent_Server_Item_AddUpgrade_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               Upgrade;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_InventoryItem_Place_Trade
	 */
	struct UInventoryComponent_Server_InventoryItem_Place_Trade_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 TargetInventory;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 SourceInventory;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TargetRotation;                                          // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_InventoryItem_Equip
	 */
	struct UInventoryComponent_Server_InventoryItem_Equip_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              SlotID;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TNLM[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryComponent*                                 TargetInventory;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 SourceInventory;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_EquipEquipment
	 */
	struct UInventoryComponent_Server_EquipEquipment_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              SlotID;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnResult;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2VWM[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryComponent*                                 EquipComponent;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_EquipConsumable
	 */
	struct UInventoryComponent_Server_EquipConsumable_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SlotID;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Server_AssignCustomName
	 */
	struct UInventoryComponent_Server_AssignCustomName_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FText                                                NewCustomName;                                           // 0x0008(0x0018)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.SendStatsToGAS
	 */
	struct UInventoryComponent_SendStatsToGAS_Params
	{
	public:
		struct FItemStats                                          PassiveStats;                                            // 0x0000(0x00A0)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.RollDropTable
	 */
	struct UInventoryComponent_RollDropTable_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.RemoveItemUpgrade
	 */
	struct UInventoryComponent_RemoveItemUpgrade_Params
	{
	public:
		class UItem*                                               BaseItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               Upgrade;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CalledByServer;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.PositionItemInContainer
	 */
	struct UInventoryComponent_PositionItemInContainer_Params
	{
	public:
		class UItem*                                               BaseItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              X;                                                       // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              Y;                                                       // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              RotationDiv;                                             // 0x000A(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CalledByServer;                                          // 0x000B(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.PlaceItemInWorld
	 */
	struct UInventoryComponent_PlaceItemInWorld_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             WorldPosition;                                           // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CalledByServer;                                          // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.PlaceItemInContainer
	 */
	struct UInventoryComponent_PlaceItemInContainer_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CalledByServer;                                          // 0x001C(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnResult;                                            // 0x001D(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EOIH[0x2];                                   // 0x001E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    TargetRotation;                                          // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.OnWeaponChange
	 */
	struct UInventoryComponent_OnWeaponChange_Params
	{	};

	/**
	 * Function ProjectAgartha.InventoryComponent.OnRep_OnResourcesUpdate
	 */
	struct UInventoryComponent_OnRep_OnResourcesUpdate_Params
	{	};

	/**
	 * Function ProjectAgartha.InventoryComponent.OnRep_OnInventoryUpdate
	 */
	struct UInventoryComponent_OnRep_OnInventoryUpdate_Params
	{	};

	/**
	 * Function ProjectAgartha.InventoryComponent.OnRep_OnEquipmentUpdate
	 */
	struct UInventoryComponent_OnRep_OnEquipmentUpdate_Params
	{	};

	/**
	 * Function ProjectAgartha.InventoryComponent.LoadInventory
	 */
	struct UInventoryComponent_LoadInventory_Params
	{
	public:
		class UDataTable*                                          InventoryTable;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UDataTable*                                          ItemsTable;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      DurabilityPercent;                                       // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.IsShop
	 */
	struct UInventoryComponent_IsShop_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.InventoryItemPlace
	 */
	struct UInventoryComponent_InventoryItemPlace_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 TargetInventory;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 SourceInventory;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    TargetRotation;                                          // 0x002C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.InventoryItemEquip
	 */
	struct UInventoryComponent_InventoryItemEquip_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              SlotID;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LYSY[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryComponent*                                 TargetInventory;                                         // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 SourceInventory;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetTotalWorthOfContainer
	 */
	struct UInventoryComponent_GetTotalWorthOfContainer_Params
	{
	public:
		class UItem*                                               TargetContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetStatsWithUpgrades
	 */
	struct UInventoryComponent_GetStatsWithUpgrades_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FItemStats                                          ReturnValue;                                             // 0x0008(0x00A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetRootItems
	 */
	struct UInventoryComponent_GetRootItems_Params
	{
	public:
		TArray<class UItem*>                                       Items;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UInventoryComponent*                                 ShopClientInventory;                                     // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetResourceSlot
	 */
	struct UInventoryComponent_GetResourceSlot_Params
	{
	public:
		int32_t                                                    SlotID;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_25JC[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetOwningCombatEntity
	 */
	struct UInventoryComponent_GetOwningCombatEntity_Params
	{
	public:
		class ACombatEntity*                                       ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetMaxCapacity
	 */
	struct UInventoryComponent_GetMaxCapacity_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetItemTransformedWidth
	 */
	struct UInventoryComponent_GetItemTransformedWidth_Params
	{
	public:
		class UItem*                                               BaseItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetItemTransformedShopPrice
	 */
	struct UInventoryComponent_GetItemTransformedShopPrice_Params
	{
	public:
		class UItem*                                               BaseItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetItemTransformedHeight
	 */
	struct UInventoryComponent_GetItemTransformedHeight_Params
	{
	public:
		class UItem*                                               BaseItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetItemsInsideContainer
	 */
	struct UInventoryComponent_GetItemsInsideContainer_Params
	{
	public:
		class UItem*                                               TargetContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetItemSharedData
	 */
	struct UInventoryComponent_GetItemSharedData_Params
	{
	public:
		class UItem*                                               BaseItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_3JM7[0x8];                                   // 0x0008(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemTable                                          ReturnValue;                                             // 0x0010(0x02A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetItemsByIndex
	 */
	struct UInventoryComponent_GetItemsByIndex_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_BCV3[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UItem*>                                       ItemsFound;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetItemsByClass
	 */
	struct UInventoryComponent_GetItemsByClass_Params
	{
	public:
		EquipmentType                                              EquipClass;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_QYMW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class UItem*>                                       ItemsFound;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetItems
	 */
	struct UInventoryComponent_GetItems_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       ItemsFound;                                              // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetInventoryContainerSize
	 */
	struct UInventoryComponent_GetInventoryContainerSize_Params
	{
	public:
		unsigned char                                              ContainerWidth;                                          // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ContainerHeight;                                         // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0002(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetInventory
	 */
	struct UInventoryComponent_GetInventory_Params
	{
	public:
		class UItem*                                               ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetEquipmentSlot
	 */
	struct UInventoryComponent_GetEquipmentSlot_Params
	{
	public:
		EquipmentType                                              SlotID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WN5Z[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetDurabilityMultiplier
	 */
	struct UInventoryComponent_GetDurabilityMultiplier_Params
	{
	public:
		unsigned char                                              Durability;                                              // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NASX[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetAmountOfItemsByIndex
	 */
	struct UInventoryComponent_GetAmountOfItemsByIndex_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.GetAllItemsOwnedByComponent
	 */
	struct UInventoryComponent_GetAllItemsOwnedByComponent_Params
	{
	public:
		class UItem*                                               ComponentRoot;                                           // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       AllItems;                                                // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.FindSameItemInContainer
	 */
	struct UInventoryComponent_FindSameItemInContainer_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.FindItemSpaceInContainer
	 */
	struct UInventoryComponent_FindItemSpaceInContainer_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          ReturnValue;                                             // 0x0010(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.FindItems
	 */
	struct UInventoryComponent_FindItems_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0008(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.FilterRootItems
	 */
	struct UInventoryComponent_FilterRootItems_Params
	{
	public:
		TArray<class UItem*>                                       Items;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		class FString                                              SearchFilter;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.EquipInSlot
	 */
	struct UInventoryComponent_EquipInSlot_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              SlotID;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnResult;                                            // 0x0009(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_E1WD[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryComponent*                                 EquipComponent;                                          // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               ReturnValue;                                             // 0x0018(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.EquipInConsumables
	 */
	struct UInventoryComponent_EquipInConsumables_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    SlotID;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x000C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.DamageEquipmentSlot
	 */
	struct UInventoryComponent_DamageEquipmentSlot_Params
	{
	public:
		EquipmentType                                              SlotID;                                                  // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              DamageAmount;                                            // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.CreateItem
	 */
	struct UInventoryComponent_CreateItem_Params
	{
	public:
		class FName                                                RowName;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               ReturnValue;                                             // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Client_SortRenderPosition
	 */
	struct UInventoryComponent_Client_SortRenderPosition_Params
	{
	public:
		class UItem*                                               TargetContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ESortStyle                                                 Sort;                                                    // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Client_ServerFinishedRotation
	 */
	struct UInventoryComponent_Client_ServerFinishedRotation_Params
	{
	public:
		class UItem*                                               _item;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Client_OnExtraDataReceived
	 */
	struct UInventoryComponent_Client_OnExtraDataReceived_Params
	{
	public:
		TArray<struct FItemExtraData>                              ExtraDataArray;                                          // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Client_InventoryItem_Move_Result
	 */
	struct UInventoryComponent_Client_InventoryItem_Move_Result_Params
	{
	public:
		EInventoryItemMoveResult                                   InventoryItemMoveResult;                                 // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7T5G[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UInventoryComponent*                                 SourceInventoryToUpdate;                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               SourceItemToUpdate;                                      // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Client_InsuranceResponse
	 */
	struct UInventoryComponent_Client_InsuranceResponse_Params
	{
	public:
		bool                                                       bInsurancePaymentSuccess;                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_WVDA[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               InsuredItem;                                             // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.Client_EquipEquipment
	 */
	struct UInventoryComponent_Client_EquipEquipment_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EquipmentType                                              SlotID;                                                  // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.CleanComponentOfItem
	 */
	struct UInventoryComponent_CleanComponentOfItem_Params
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.CheckOnlyItemContainerCollision
	 */
	struct UInventoryComponent_CheckOnlyItemContainerCollision_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ECollisonInventoryResult                                   ReturnValue;                                             // 0x001C(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.CheckItemContainerCollisionForItem
	 */
	struct UInventoryComponent_CheckItemContainerCollisionForItem_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               TargetContainer;                                         // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0010(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_RAGG[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UItem*                                               ReturnValue;                                             // 0x0020(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.CheckContainerEnoughSpaceSize
	 */
	struct UInventoryComponent_CheckContainerEnoughSpaceSize_Params
	{
	public:
		class UItem*                                               TargetContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ItemWidth;                                               // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ItemHeight;                                              // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.CheckContainerEnoughSpace
	 */
	struct UInventoryComponent_CheckContainerEnoughSpace_Params
	{
	public:
		class UItem*                                               TargetContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class UItem*>                                       Items;                                                   // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.ChangeItemStack
	 */
	struct UInventoryComponent_ChangeItemStack_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    Change;                                                  // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.BP_ToggleInsurance
	 */
	struct UInventoryComponent_BP_ToggleInsurance_Params
	{
	public:
		class UItem*                                               TargetItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bShouldBeInsured;                                        // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.BP_PayInsurance
	 */
	struct UInventoryComponent_BP_PayInsurance_Params
	{	};

	/**
	 * Function ProjectAgartha.InventoryComponent.AsyncTrySplitStackedItem
	 */
	struct UInventoryComponent_AsyncTrySplitStackedItem_Params
	{
	public:
		class UItem*                                               Source;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    NumToSplit;                                              // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.InventoryComponent.AddItemUpgrade
	 */
	struct UInventoryComponent_AddItemUpgrade_Params
	{
	public:
		class UItem*                                               BaseItem;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               Upgrade;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CalledByServer;                                          // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0011(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.RadialInput.GetQuickCommand
	 */
	struct URadialInput_GetQuickCommand_Params
	{
	public:
		TArray<struct FKey>                                        _acceptedKeys;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FKey>                                        _hitKeys;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.RadialInput.GetJoystickDirection
	 */
	struct URadialInput_GetJoystickDirection_Params
	{
	public:
		EJoystickType                                              _joystick;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_69FI[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.RadialSlot.OnUnhighlight
	 */
	struct URadialSlot_OnUnhighlight_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialSlot.OnSelected
	 */
	struct URadialSlot_OnSelected_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialSlot.OnHighlight
	 */
	struct URadialSlot_OnHighlight_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.SumStats
	 */
	struct UItem_SumStats_Params
	{
	public:
		struct FItemStats                                          Result;                                                  // 0x0000(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		struct FItemStats                                          NewStats;                                                // 0x00A0(0x00A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		unsigned char                                              TestDurability;                                          // 0x0140(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.Rollback
	 */
	struct UItem_Rollback_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.PlaceInContainer
	 */
	struct UItem_PlaceInContainer_Params
	{
	public:
		class UItem*                                               TargetContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CalledByServer;                                          // 0x0014(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0015(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.OnRep_Upgrades
	 */
	struct UItem_OnRep_Upgrades_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnRep_StackSize
	 */
	struct UItem_OnRep_StackSize_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnRep_ServiceFlags
	 */
	struct UItem_OnRep_ServiceFlags_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnRep_Rotation
	 */
	struct UItem_OnRep_Rotation_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnRep_ReplicateIndex
	 */
	struct UItem_OnRep_ReplicateIndex_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnRep_Quality
	 */
	struct UItem_OnRep_Quality_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnRep_Position
	 */
	struct UItem_OnRep_Position_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnRep_OwnerContainer
	 */
	struct UItem_OnRep_OwnerContainer_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnRep_IsInsured
	 */
	struct UItem_OnRep_IsInsured_Params
	{
	public:
		bool                                                       OldValue;                                                // 0x0000(0x0001)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.OnRep_Durability
	 */
	struct UItem_OnRep_Durability_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnRep_Container
	 */
	struct UItem_OnRep_Container_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.OnDestroyed
	 */
	struct UItem_OnDestroyed_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.Init
	 */
	struct UItem_Init_Params
	{
	public:
		struct FItemTable                                          ItemTemplate;                                            // 0x0000(0x02A0)  (Parm, OutParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetTransformedWidth
	 */
	struct UItem_GetTransformedWidth_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetTransformedStats
	 */
	struct UItem_GetTransformedStats_Params
	{
	public:
		struct FItemStats                                          ReturnValue;                                             // 0x0000(0x00A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetTransformedShopPrice
	 */
	struct UItem_GetTransformedShopPrice_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetTransformedHeight
	 */
	struct UItem_GetTransformedHeight_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetStackSize
	 */
	struct UItem_GetStackSize_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetSharedData
	 */
	struct UItem_GetSharedData_Params
	{
	public:
		struct FItemTable                                          ReturnValue;                                             // 0x0000(0x02A0)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetRotation
	 */
	struct UItem_GetRotation_Params
	{
	public:
		int32_t                                                    ReturnValue;                                             // 0x0000(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetPosition
	 */
	struct UItem_GetPosition_Params
	{
	public:
		struct FIntVector                                          ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetOwningActor
	 */
	struct UItem_GetOwningActor_Params
	{
	public:
		class AActor*                                              ReturnValue;                                             // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetItemStat
	 */
	struct UItem_GetItemStat_Params
	{
	public:
		EItemStatType                                              Stat;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_7QWU[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GetDurability
	 */
	struct UItem_GetDurability_Params
	{
	public:
		unsigned char                                              ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.GenerateDescription
	 */
	struct UItem_GenerateDescription_Params
	{
	public:
		class FText                                                ReturnValue;                                             // 0x0000(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.Destroy
	 */
	struct UItem_Destroy_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.Copy
	 */
	struct UItem_Copy_Params
	{
	public:
		class UItem*                                               _base;                                                   // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UItem*                                               _target;                                                 // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.Client_OnServerRequestRollback
	 */
	struct UItem_Client_OnServerRequestRollback_Params
	{	};

	/**
	 * Function ProjectAgartha.Item.CheckContainerCollision
	 */
	struct UItem_CheckContainerCollision_Params
	{
	public:
		class UItem*                                               TargetContainer;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FIntVector                                          TargetPosition;                                          // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.Item.AddUpgrade
	 */
	struct UItem_AddUpgrade_Params
	{
	public:
		class UItem*                                               Upgrade;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       CalledByServer;                                          // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ItemContainer.OnInventoryPlaced
	 */
	struct AItemContainer_OnInventoryPlaced_Params
	{
	public:
		class UItem*                                               PlacedItem;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ItemContainer.OnInventoryEmptied
	 */
	struct AItemContainer_OnInventoryEmptied_Params
	{	};

	/**
	 * Function ProjectAgartha.ItemContainer.OnCheckVisibilityWhitelist
	 */
	struct AItemContainer_OnCheckVisibilityWhitelist_Params
	{	};

	/**
	 * Function ProjectAgartha.ItemContainer.OnCheckRelevancy
	 */
	struct AItemContainer_OnCheckRelevancy_Params
	{	};

	/**
	 * Function ProjectAgartha.ItemContainer.BP_OnInventoryEmptied
	 */
	struct AItemContainer_BP_OnInventoryEmptied_Params
	{	};

	/**
	 * Function ProjectAgartha.ItemWidget.UpdateSize_cpp
	 */
	struct UItemWidget_UpdateSize_cpp_Params
	{	};

	/**
	 * Function ProjectAgartha.SimpleBot.SayVoice
	 */
	struct ASimpleBot_SayVoice_Params
	{
	public:
		EBotVoice                                                  Voice;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsPriority;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.SimpleBot.PlaceUpgradesOnGear
	 */
	struct ASimpleBot_PlaceUpgradesOnGear_Params
	{	};

	/**
	 * Function ProjectAgartha.SimpleBot.PerformAttack
	 */
	struct ASimpleBot_PerformAttack_Params
	{
	public:
		EBotInput                                                  AttackStyle;                                             // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.SimpleBot.OnDecision_SeesTarget
	 */
	struct ASimpleBot_OnDecision_SeesTarget_Params
	{
	public:
		class ACombatEntity*                                       MyPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Dist;                                                    // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             Delta;                                                   // 0x000C(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.SimpleBot.OnDecision_NoTarget
	 */
	struct ASimpleBot_OnDecision_NoTarget_Params
	{
	public:
		class ACombatEntity*                                       MyPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.SimpleBot.OnDecision_LostTarget
	 */
	struct ASimpleBot_OnDecision_LostTarget_Params
	{
	public:
		class ACombatEntity*                                       MyPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.SimpleBot.OnDeath
	 */
	struct ASimpleBot_OnDeath_Params
	{	};

	/**
	 * Function ProjectAgartha.SimpleBot.MoveSomewhere
	 */
	struct ASimpleBot_MoveSomewhere_Params
	{	};

	/**
	 * Function ProjectAgartha.SimpleBot.ManageGear
	 */
	struct ASimpleBot_ManageGear_Params
	{	};

	/**
	 * Function ProjectAgartha.SimpleBot.LateEquipInventory
	 */
	struct ASimpleBot_LateEquipInventory_Params
	{	};

	/**
	 * Function ProjectAgartha.SimpleBot.HasBehavior
	 */
	struct ASimpleBot_HasBehavior_Params
	{
	public:
		class ACombatEntity*                                       MyPawn;                                                  // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EBotBehavior                                               Behavior;                                                // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.SimpleBot.ConsumeItemOfType
	 */
	struct ASimpleBot_ConsumeItemOfType_Params
	{
	public:
		EquipmentType                                              Type;                                                    // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.SimpleBot.ConsumeItemOfIndex
	 */
	struct ASimpleBot_ConsumeItemOfIndex_Params
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.SimpleBot.AttemptToggleBlock
	 */
	struct ASimpleBot_AttemptToggleBlock_Params
	{	};

	/**
	 * Function ProjectAgartha.SimpleBot.AttemptCombo
	 */
	struct ASimpleBot_AttemptCombo_Params
	{	};

	/**
	 * Function ProjectAgartha.LeaderBot.DetermineCommonTarget
	 */
	struct ALeaderBot_DetermineCommonTarget_Params
	{	};

	/**
	 * Function ProjectAgartha.LeaderBot.DetermineCommonGoal
	 */
	struct ALeaderBot_DetermineCommonGoal_Params
	{	};

	/**
	 * Function ProjectAgartha.LeaderBot.AddTeamMembers
	 */
	struct ALeaderBot_AddTeamMembers_Params
	{
	public:
		int32_t                                                    MaxAmount;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.MovementAttributeSet.OnRep_SprintMultiplier
	 */
	struct UMovementAttributeSet_OnRep_SprintMultiplier_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.MovementAttributeSet.OnRep_SpeedModifier
	 */
	struct UMovementAttributeSet_OnRep_SpeedModifier_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.MovementAttributeSet.OnRep_MinSpeed
	 */
	struct UMovementAttributeSet_OnRep_MinSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.MovementAttributeSet.OnRep_MaxSpeed
	 */
	struct UMovementAttributeSet_OnRep_MaxSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.MovementAttributeSet.OnRep_CurrentSpeed
	 */
	struct UMovementAttributeSet_OnRep_CurrentSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.MovementAttributeSet.OnRep_BrokenBones
	 */
	struct UMovementAttributeSet_OnRep_BrokenBones_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.MovementAttributeSet.OnRep_BaseSpeed
	 */
	struct UMovementAttributeSet_OnRep_BaseSpeed_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.NPCComponent.UpdateVisibility
	 */
	struct UNPCComponent_UpdateVisibility_Params
	{	};

	/**
	 * Function ProjectAgartha.NPCComponent.IsReadyForQuestProposal
	 */
	struct UNPCComponent_IsReadyForQuestProposal_Params
	{
	public:
		class UCharacterNPCsComponent*                             PlayerNPCComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestNameToPropose;                                      // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.NPCComponent.IsPlayerFinishedQuest
	 */
	struct UNPCComponent_IsPlayerFinishedQuest_Params
	{
	public:
		class UCharacterNPCsComponent*                             PlayerNPCComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestNameFinished;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0010(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.NPCComponent.IsNPCReadyForQuestAction
	 */
	struct UNPCComponent_IsNPCReadyForQuestAction_Params
	{
	public:
		class UCharacterNPCsComponent*                             PlayerNPCComponent;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestNameFinished;                                       // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FName                                                QuestNameToPropose;                                      // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NotEnoughSpace;                                          // 0x0018(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0019(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.NPCComponent.GetTierNext
	 */
	struct UNPCComponent_GetTierNext_Params
	{
	public:
		struct FNPCLevel                                           Level;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.NPCComponent.GetTierExperience
	 */
	struct UNPCComponent_GetTierExperience_Params
	{
	public:
		int32_t                                                    TierLevel;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.NPCComponent.GetTierCurrent
	 */
	struct UNPCComponent_GetTierCurrent_Params
	{
	public:
		struct FNPCLevel                                           Level;                                                   // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
		int32_t                                                    ReturnValue;                                             // 0x0010(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.NPCComponent.GetQuestInfo
	 */
	struct UNPCComponent_GetQuestInfo_Params
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FQuestTable                                         QuestRow;                                                // 0x0008(0x00D0)  (Parm, OutParm, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x00D8(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.NPCQuestPoint.OverlapQuestPointByPlayer
	 */
	struct ANPCQuestPoint_OverlapQuestPointByPlayer_Params
	{
	public:
		class AProjectAgarthaCharacter*                            PlayerCharacter;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.SetPartyTicket
	 */
	struct UPartySubsystem_SetPartyTicket_Params
	{
	public:
		class FString                                              Ticket;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.SetPartyIdentifier
	 */
	struct UPartySubsystem_SetPartyIdentifier_Params
	{
	public:
		class FString                                              Identifier;                                              // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.SendSubsystemMemberData
	 */
	struct UPartySubsystem_SendSubsystemMemberData_Params
	{
	public:
		EPartyReadyStatus                                          MyReadyState;                                            // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.SendSubsystemLobbyData
	 */
	struct UPartySubsystem_SendSubsystemLobbyData_Params
	{	};

	/**
	 * Function ProjectAgartha.PartySubsystem.SendSubsystemDiscoverability
	 */
	struct UPartySubsystem_SendSubsystemDiscoverability_Params
	{
	public:
		bool                                                       bIsPublic;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsSolo;                                                 // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.SendSubsystemAdvertisement
	 */
	struct UPartySubsystem_SendSubsystemAdvertisement_Params
	{
	public:
		class FString                                              AdvertisementString;                                     // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.RefreshPartyList
	 */
	struct UPartySubsystem_RefreshPartyList_Params
	{	};

	/**
	 * Function ProjectAgartha.PartySubsystem.OpenInviteMenu
	 */
	struct UPartySubsystem_OpenInviteMenu_Params
	{	};

	/**
	 * Function ProjectAgartha.PartySubsystem.OnLevelChange
	 */
	struct UPartySubsystem_OnLevelChange_Params
	{	};

	/**
	 * Function ProjectAgartha.PartySubsystem.MatchLeadersServer
	 */
	struct UPartySubsystem_MatchLeadersServer_Params
	{	};

	/**
	 * Function ProjectAgartha.PartySubsystem.KickFromParty
	 */
	struct UPartySubsystem_KickFromParty_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.JoinParty
	 */
	struct UPartySubsystem_JoinParty_Params
	{
	public:
		int32_t                                                    PartyBrowserIndex;                                       // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.GetPartyTicketURL
	 */
	struct UPartySubsystem_GetPartyTicketURL_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.GetPartyTicket
	 */
	struct UPartySubsystem_GetPartyTicket_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.GetPartyMember
	 */
	struct UPartySubsystem_GetPartyMember_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_W12B[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FPartyMember                                        ReturnValue;                                             // 0x0008(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.GetPartyIdentifier
	 */
	struct UPartySubsystem_GetPartyIdentifier_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.GetParty
	 */
	struct UPartySubsystem_GetParty_Params
	{	};

	/**
	 * Function ProjectAgartha.PartySubsystem.GetMyPartyState
	 */
	struct UPartySubsystem_GetMyPartyState_Params
	{
	public:
		struct FPartyMember                                        ReturnValue;                                             // 0x0000(0x0030)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.GetIsPartyLeader
	 */
	struct UPartySubsystem_GetIsPartyLeader_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.GetIsInParty
	 */
	struct UPartySubsystem_GetIsInParty_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.EnableJoinInProgress
	 */
	struct UPartySubsystem_EnableJoinInProgress_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.CreateTicketAsParty
	 */
	struct UPartySubsystem_CreateTicketAsParty_Params
	{	};

	/**
	 * Function ProjectAgartha.PartySubsystem.ConvertBrowserPartyToText
	 */
	struct UPartySubsystem_ConvertBrowserPartyToText_Params
	{
	public:
		struct FBrowserParty                                       Party;                                                   // 0x0000(0x0020)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
		class FText                                                ReturnValue;                                             // 0x0020(0x0018)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.CanStartMatchmakerWithMercs
	 */
	struct UPartySubsystem_CanStartMatchmakerWithMercs_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.PartySubsystem.CanStartMatchmaker
	 */
	struct UPartySubsystem_CanStartMatchmaker_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Timer_PartyStringUpdated
	 */
	struct AProjectAgarthaCharacter_Timer_PartyStringUpdated_Params
	{
	public:
		TArray<class AActor*>                                      AllPartyActors;                                          // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.StartExtractingCountdown
	 */
	struct AProjectAgarthaCharacter_StartExtractingCountdown_Params
	{
	public:
		struct FVector                                             ExtractPosition;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.ServerPredictsExtractionFinish
	 */
	struct AProjectAgarthaCharacter_ServerPredictsExtractionFinish_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercViewDirection
	 */
	struct AProjectAgarthaCharacter_Server_UpdateMercViewDirection_Params
	{
	public:
		struct FVector                                             Direction;                                               // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4DTM[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACombatEntity*                                       CommandedBot;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercTarget
	 */
	struct AProjectAgarthaCharacter_Server_UpdateMercTarget_Params
	{
	public:
		class ACombatEntity*                                       TargetToAttack;                                          // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACombatEntity*                                       CommandedBot;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercLocation
	 */
	struct AProjectAgarthaCharacter_Server_UpdateMercLocation_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_YY74[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACombatEntity*                                       CommandedBot;                                            // 0x0010(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercFollow
	 */
	struct AProjectAgarthaCharacter_Server_UpdateMercFollow_Params
	{
	public:
		int32_t                                                    Direction;                                               // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class ACombatEntity*                                       CommandedBot;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercAggression
	 */
	struct AProjectAgarthaCharacter_Server_UpdateMercAggression_Params
	{
	public:
		bool                                                       bIsAggressive;                                           // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_EIAR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class ACombatEntity*                                       CommandedBot;                                            // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercAfkMode
	 */
	struct AProjectAgarthaCharacter_Server_UpdateMercAfkMode_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_StartExtracting
	 */
	struct AProjectAgarthaCharacter_Server_StartExtracting_Params
	{
	public:
		struct FVector                                             ExtractPosition;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_SetCharacter
	 */
	struct AProjectAgarthaCharacter_Server_SetCharacter_Params
	{
	public:
		struct FCharacterBody                                      Body;                                                    // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_RequestUnstick
	 */
	struct AProjectAgarthaCharacter_Server_RequestUnstick_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_PartyStringUpdated
	 */
	struct AProjectAgarthaCharacter_Server_PartyStringUpdated_Params
	{
	public:
		class FString                                              PartyString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_OnWeaponChange
	 */
	struct AProjectAgarthaCharacter_Server_OnWeaponChange_Params
	{
	public:
		int32_t                                                    Weapon;                                                  // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_OnCreateMercenary
	 */
	struct AProjectAgarthaCharacter_Server_OnCreateMercenary_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_Heartbeat
	 */
	struct AProjectAgarthaCharacter_Server_Heartbeat_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_Chat
	 */
	struct AProjectAgarthaCharacter_Server_Chat_Params
	{
	public:
		struct FChatLine                                           Line;                                                    // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Server_AssignPartyString
	 */
	struct AProjectAgarthaCharacter_Server_AssignPartyString_Params
	{
	public:
		class FString                                              PartyString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Token;                                                   // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bNewFreebooter;                                          // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_6W64[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              VersionString;                                           // 0x0028(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              PartySize;                                               // 0x0038(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_4J7C[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              OurConnection;                                           // 0x0040(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.SaveInventoryToPlayfab
	 */
	struct AProjectAgarthaCharacter_SaveInventoryToPlayfab_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.SaveAppearance
	 */
	struct AProjectAgarthaCharacter_SaveAppearance_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.RequestUnstick
	 */
	struct AProjectAgarthaCharacter_RequestUnstick_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.RandomizeCustomization
	 */
	struct AProjectAgarthaCharacter_RandomizeCustomization_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.OpenRadialMenu
	 */
	struct AProjectAgarthaCharacter_OpenRadialMenu_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.OnUnstick
	 */
	struct AProjectAgarthaCharacter_OnUnstick_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.OnPlayfabLoginSuccess
	 */
	struct AProjectAgarthaCharacter_OnPlayfabLoginSuccess_Params
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayFabTicket;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NewlyCreated;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.OnPlayerAppearanceLoaded
	 */
	struct AProjectAgarthaCharacter_OnPlayerAppearanceLoaded_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Pawn;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.OnMercSetLocation
	 */
	struct AProjectAgarthaCharacter_OnMercSetLocation_Params
	{
	public:
		class ACombatEntity*                                       CommandedBot;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.OnMercFindTarget
	 */
	struct AProjectAgarthaCharacter_OnMercFindTarget_Params
	{
	public:
		class ACombatEntity*                                       CommandedBot;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.OnMercAggressionChange
	 */
	struct AProjectAgarthaCharacter_OnMercAggressionChange_Params
	{
	public:
		class ACombatEntity*                                       CommandedBot;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.OnCreateMercenary
	 */
	struct AProjectAgarthaCharacter_OnCreateMercenary_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.NotifyOnUpdateMerc
	 */
	struct AProjectAgarthaCharacter_NotifyOnUpdateMerc_Params
	{
	public:
		TArray<class ACombatEntity*>                               AffectedBots;                                            // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bIsAggressive;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsFighting;                                             // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsFollowing;                                            // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_IFMP[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Target;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             GoalLocation;                                            // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Multicast_SetCharacter
	 */
	struct AProjectAgarthaCharacter_Multicast_SetCharacter_Params
	{
	public:
		struct FCharacterBody                                      Body;                                                    // 0x0000(0x0060)  (Parm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.LoadAuthorizedCharacter
	 */
	struct AProjectAgarthaCharacter_LoadAuthorizedCharacter_Params
	{
	public:
		class FString                                              PartyString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              NewBackendID;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              Username;                                                // 0x0020(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.LoadAppearance
	 */
	struct AProjectAgarthaCharacter_LoadAppearance_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.IsAccountFlagged
	 */
	struct AProjectAgarthaCharacter_IsAccountFlagged_Params
	{
	public:
		int32_t                                                    Bitmask;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.GiveSelfDeathController
	 */
	struct AProjectAgarthaCharacter_GiveSelfDeathController_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.GetRandomSurroundingLocation
	 */
	struct AProjectAgarthaCharacter_GetRandomSurroundingLocation_Params
	{
	public:
		struct FVector                                             ReturnValue;                                             // 0x0000(0x000C)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.FlagAccount
	 */
	struct AProjectAgarthaCharacter_FlagAccount_Params
	{
	public:
		int32_t                                                    Bitmask;                                                 // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bEnabled;                                                // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.FinishExtractingCountdown
	 */
	struct AProjectAgarthaCharacter_FinishExtractingCountdown_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.ExitUI
	 */
	struct AProjectAgarthaCharacter_ExitUI_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.ExecuteTacticalOperation
	 */
	struct AProjectAgarthaCharacter_ExecuteTacticalOperation_Params
	{
	public:
		ETacticalCommand                                           TacticalCommand;                                         // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_A6MR[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      OptionalFloatData;                                       // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.EnterUI
	 */
	struct AProjectAgarthaCharacter_EnterUI_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UWidget*                                             WidgetToFocus;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsUIAndGame;                                            // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		EMouseLockMode                                             InMouseLockMode;                                         // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bHideMouseCursor;                                        // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bAllowPlayerMovement;                                    // 0x0013(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.CloseRadialMenu
	 */
	struct AProjectAgarthaCharacter_CloseRadialMenu_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.ClientSendCommandsPostLogin
	 */
	struct AProjectAgarthaCharacter_ClientSendCommandsPostLogin_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_StartExtracting
	 */
	struct AProjectAgarthaCharacter_Client_StartExtracting_Params
	{
	public:
		struct FVector                                             ExtractPosition;                                         // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_ReconnectedBeginPlay
	 */
	struct AProjectAgarthaCharacter_Client_ReconnectedBeginPlay_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_PlayerDied
	 */
	struct AProjectAgarthaCharacter_Client_PlayerDied_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_PartyStringUpdated
	 */
	struct AProjectAgarthaCharacter_Client_PartyStringUpdated_Params
	{
	public:
		TArray<class AActor*>                                      AllPartyActors;                                          // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		unsigned char                                              LatestPartyValue;                                        // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnUpdateMerc
	 */
	struct AProjectAgarthaCharacter_Client_OnUpdateMerc_Params
	{
	public:
		TArray<class ACombatEntity*>                               AffectedBots;                                            // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		bool                                                       bIsAggressive;                                           // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsFighting;                                             // 0x0011(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsFollowing;                                            // 0x0012(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_TYIW[0x5];                                   // 0x0013(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              Target;                                                  // 0x0018(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             GoalLocation;                                            // 0x0020(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnSpectatorCameraRequested
	 */
	struct AProjectAgarthaCharacter_Client_OnSpectatorCameraRequested_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnRaidTimerUpdated
	 */
	struct AProjectAgarthaCharacter_Client_OnRaidTimerUpdated_Params
	{
	public:
		int32_t                                                    MinutesRemaining;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnInsuranceArrived
	 */
	struct AProjectAgarthaCharacter_Client_OnInsuranceArrived_Params
	{
	public:
		class UProjectAgarthaGameInstance*                         GameInstance;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ItemsPlaced;                                             // 0x0008(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ItemsInQueue;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnAuthorizationAccepted
	 */
	struct AProjectAgarthaCharacter_Client_OnAuthorizationAccepted_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_LoadCharacter
	 */
	struct AProjectAgarthaCharacter_Client_LoadCharacter_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_GetStationRank
	 */
	struct AProjectAgarthaCharacter_Client_GetStationRank_Params
	{
	public:
		unsigned char                                              AlchemyLv;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_MCNV[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    AlchemyExp;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              ArtificerLv;                                             // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_M31C[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    ArtificerExp;                                            // 0x000C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              CookingLv;                                               // 0x0010(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_C38R[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    CookingExp;                                              // 0x0014(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UpgradeLv;                                               // 0x0018(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_2C3R[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    UpgradeExp;                                              // 0x001C(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_ForceOpenLevel
	 */
	struct AProjectAgarthaCharacter_Client_ForceOpenLevel_Params
	{
	public:
		class FName                                                NewLevel;                                                // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_ForceOpenIp
	 */
	struct AProjectAgarthaCharacter_Client_ForceOpenIp_Params
	{
	public:
		class FString                                              NewConnection;                                           // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_FinishExtracting
	 */
	struct AProjectAgarthaCharacter_Client_FinishExtracting_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.Client_Chat
	 */
	struct AProjectAgarthaCharacter_Client_Chat_Params
	{
	public:
		struct FChatLine                                           Line;                                                    // 0x0000(0x0028)  (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.BP_SpectatorCamera
	 */
	struct AProjectAgarthaCharacter_BP_SpectatorCamera_Params
	{
	public:
		bool                                                       bEnabled;                                                // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.BP_OnRaidTimerUpdated
	 */
	struct AProjectAgarthaCharacter_BP_OnRaidTimerUpdated_Params
	{
	public:
		int32_t                                                    MinutesRemaining;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaCharacter.ApplyChangesMercenary
	 */
	struct AProjectAgarthaCharacter_ApplyChangesMercenary_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Merc;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.SpawnLootbag
	 */
	struct UProjectAgarthaGameInstance_SpawnLootbag_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_824F[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AActor*                                              ReturnValue;                                             // 0x0010(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.SetSpecialMessage
	 */
	struct UProjectAgarthaGameInstance_SetSpecialMessage_Params
	{
	public:
		class FText                                                Message;                                                 // 0x0000(0x0018)  (Parm, NativeAccessSpecifierPublic)
		float                                                      CountdownTime;                                           // 0x0018(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.RequestStartMatch
	 */
	struct UProjectAgarthaGameInstance_RequestStartMatch_Params
	{
	public:
		bool                                                       bIsFreebooterMode;                                       // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERaidMap                                                   Destination;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.RequestNews
	 */
	struct UProjectAgarthaGameInstance_RequestNews_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.RequestJoinBoat
	 */
	struct UProjectAgarthaGameInstance_RequestJoinBoat_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.RequestGetMatchInfo
	 */
	struct UProjectAgarthaGameInstance_RequestGetMatchInfo_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.RequestCancelMatch
	 */
	struct UProjectAgarthaGameInstance_RequestCancelMatch_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.ReadTutorial
	 */
	struct UProjectAgarthaGameInstance_ReadTutorial_Params
	{
	public:
		int32_t                                                    TutorialIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.PlayFabDeleteUser
	 */
	struct UProjectAgarthaGameInstance_PlayFabDeleteUser_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.PlayFabDeleteAllUser
	 */
	struct UProjectAgarthaGameInstance_PlayFabDeleteAllUser_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OpenLevelWithLoadingScreen
	 */
	struct UProjectAgarthaGameInstance_OpenLevelWithLoadingScreen_Params
	{
	public:
		class FName                                                LevelScreenName;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ETravelingType                                             whereToTravel;                                           // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnPlayfabLoginSuccess
	 */
	struct UProjectAgarthaGameInstance_OnPlayfabLoginSuccess_Params
	{
	public:
		class FString                                              PlayFabId;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              PlayFabTicket;                                           // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       NewlyCreated;                                            // 0x0020(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnPlayfabLoginFailed
	 */
	struct UProjectAgarthaGameInstance_OnPlayfabLoginFailed_Params
	{
	public:
		class FString                                              ErrorName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ErrorMessage;                                            // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnOldRaidFound
	 */
	struct UProjectAgarthaGameInstance_OnOldRaidFound_Params
	{
	public:
		class FString                                              RaidURL;                                                 // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnMatchPendingTimeUpdated
	 */
	struct UProjectAgarthaGameInstance_OnMatchPendingTimeUpdated_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnLevelChangeShip
	 */
	struct UProjectAgarthaGameInstance_OnLevelChangeShip_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnLevelChangeRaid
	 */
	struct UProjectAgarthaGameInstance_OnLevelChangeRaid_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnLevelChange
	 */
	struct UProjectAgarthaGameInstance_OnLevelChange_Params
	{
	public:
		class FString                                              LevelName;                                               // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnKickedFromServer
	 */
	struct UProjectAgarthaGameInstance_OnKickedFromServer_Params
	{
	public:
		class FString                                              Reason;                                                  // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnCreateMatchmakerForLevel
	 */
	struct UProjectAgarthaGameInstance_OnCreateMatchmakerForLevel_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.OnCancelMatchmakingFromCode
	 */
	struct UProjectAgarthaGameInstance_OnCancelMatchmakingFromCode_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.Multicast_OnTimerUpdate
	 */
	struct UProjectAgarthaGameInstance_Multicast_OnTimerUpdate_Params
	{
	public:
		int32_t                                                    MinutesRemaining;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.GetWasTutorialViewed
	 */
	struct UProjectAgarthaGameInstance_GetWasTutorialViewed_Params
	{
	public:
		int32_t                                                    TutorialIndex;                                           // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0004(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.GetUsername
	 */
	struct UProjectAgarthaGameInstance_GetUsername_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.GetStatEffectReadable
	 */
	struct UProjectAgarthaGameInstance_GetStatEffectReadable_Params
	{
	public:
		EItemStatType                                              _itemStat;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_ZIFN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.GetPossibleLocalText
	 */
	struct UProjectAgarthaGameInstance_GetPossibleLocalText_Params
	{
	public:
		class FName                                                LocalTextTag;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.GetPlayfabIDFromMap
	 */
	struct UProjectAgarthaGameInstance_GetPlayfabIDFromMap_Params
	{
	public:
		class FString                                              K;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.GetMatchPendingTimeAsString
	 */
	struct UProjectAgarthaGameInstance_GetMatchPendingTimeAsString_Params
	{
	public:
		class FString                                              ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.GetLocalText
	 */
	struct UProjectAgarthaGameInstance_GetLocalText_Params
	{
	public:
		class FName                                                LocalTextTag;                                            // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.GetIsShipHub
	 */
	struct UProjectAgarthaGameInstance_GetIsShipHub_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.GetAllEntitiesInParty
	 */
	struct UProjectAgarthaGameInstance_GetAllEntitiesInParty_Params
	{
	public:
		unsigned char                                              Party;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_35Y2[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class AProjectAgarthaCharacter*                            Ignore;                                                  // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.DetectKickReason
	 */
	struct UProjectAgarthaGameInstance_DetectKickReason_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.BPOnPlayfabLoginSuccess
	 */
	struct UProjectAgarthaGameInstance_BPOnPlayfabLoginSuccess_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.BPOnLoadCharacter
	 */
	struct UProjectAgarthaGameInstance_BPOnLoadCharacter_Params
	{
	public:
		class AProjectAgarthaCharacter*                            Character;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.BP_SpawnLootbag
	 */
	struct UProjectAgarthaGameInstance_BP_SpawnLootbag_Params
	{
	public:
		struct FVector                                             Location;                                                // 0x0000(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.BP_OnTimerUpdate
	 */
	struct UProjectAgarthaGameInstance_BP_OnTimerUpdate_Params
	{
	public:
		int32_t                                                    MinutesRemaining;                                        // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.BP_OnInsuranceArrived
	 */
	struct UProjectAgarthaGameInstance_BP_OnInsuranceArrived_Params
	{
	public:
		int32_t                                                    ItemsPlaced;                                             // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    ItemsInQueue;                                            // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.AttemptPlayfabLogin
	 */
	struct UProjectAgarthaGameInstance_AttemptPlayfabLogin_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.AreMapConditionsMet
	 */
	struct UProjectAgarthaGameInstance_AreMapConditionsMet_Params
	{
	public:
		class UInventoryComponent*                                 InventoryToCheck;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		ERaidMap                                                   MapToCheck;                                              // 0x0008(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0009(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameInstance.AddPlayfabIDToMap
	 */
	struct UProjectAgarthaGameInstance_AddPlayfabIDToMap_Params
	{
	public:
		class FString                                              K;                                                       // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              V;                                                       // 0x0010(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameMode.StartPlayerExtraction
	 */
	struct AProjectAgarthaGameMode_StartPlayerExtraction_Params
	{
	public:
		class AProjectAgarthaPlayerController*                     AgarthaPC;                                               // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             ExtractPosition;                                         // 0x0008(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0014(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaGameMode.OnInactivityEnd
	 */
	struct AProjectAgarthaGameMode_OnInactivityEnd_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaPlayerController.HighlightNPC
	 */
	struct AProjectAgarthaPlayerController_HighlightNPC_Params
	{
	public:
		class UNPCComponent*                                       NPC;                                                     // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaPlayerController.GetQuickCommand
	 */
	struct AProjectAgarthaPlayerController_GetQuickCommand_Params
	{
	public:
		TArray<struct FKey>                                        _acceptedKeys;                                           // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<struct FKey>                                        _hitKeys;                                                // 0x0010(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaPlayerController.GetJoystickDirection
	 */
	struct AProjectAgarthaPlayerController_GetJoystickDirection_Params
	{
	public:
		EJoystickType                                              _joystick;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_NT1U[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FVector2D                                           ReturnValue;                                             // 0x0004(0x0008)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaPlayerController.GetHiddenActors
	 */
	struct AProjectAgarthaPlayerController_GetHiddenActors_Params
	{
	public:
		TArray<class AActor*>                                      ReturnValue;                                             // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaPlayerController.ForceClientToLogin
	 */
	struct AProjectAgarthaPlayerController_ForceClientToLogin_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaPlayerController.ForceBeginPlay
	 */
	struct AProjectAgarthaPlayerController_ForceBeginPlay_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaPlayerController.Client_PostLogin_NoSession
	 */
	struct AProjectAgarthaPlayerController_Client_PostLogin_NoSession_Params
	{	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaPlayerController.Client_PostLogin
	 */
	struct AProjectAgarthaPlayerController_Client_PostLogin_Params
	{
	public:
		class FString                                              NetIdString;                                             // 0x0000(0x0010)  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.ProjectAgarthaProjectile.OnHit
	 */
	struct AProjectAgarthaProjectile_OnHit_Params
	{
	public:
		class UPrimitiveComponent*                                 HitComp;                                                 // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UPrimitiveComponent*                                 OtherComp;                                               // 0x0010(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector                                             NormalImpulse;                                           // 0x0018(0x000C)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FHitResult                                          Hit;                                                     // 0x0024(0x008C)  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.RadialBaseMenuItem.OnUnhighlight
	 */
	struct URadialBaseMenuItem_OnUnhighlight_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialBaseMenuItem.OnSelected
	 */
	struct URadialBaseMenuItem_OnSelected_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialBaseMenuItem.OnHighlight
	 */
	struct URadialBaseMenuItem_OnHighlight_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialIndividualCommandMenuItem.OnUnhighlight
	 */
	struct URadialIndividualCommandMenuItem_OnUnhighlight_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialIndividualCommandMenuItem.OnSelected
	 */
	struct URadialIndividualCommandMenuItem_OnSelected_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialIndividualCommandMenuItem.OnHighlight
	 */
	struct URadialIndividualCommandMenuItem_OnHighlight_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialTacticalCommandWidget.OnUnhighlight
	 */
	struct URadialTacticalCommandWidget_OnUnhighlight_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialTacticalCommandWidget.OnSelected
	 */
	struct URadialTacticalCommandWidget_OnSelected_Params
	{	};

	/**
	 * Function ProjectAgartha.RadialTacticalCommandWidget.OnHighlight
	 */
	struct URadialTacticalCommandWidget_OnHighlight_Params
	{	};

	/**
	 * Function ProjectAgartha.StaminaAttributeSet.OnRep_StaminaRegeneration
	 */
	struct UStaminaAttributeSet_OnRep_StaminaRegeneration_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.StaminaAttributeSet.OnRep_StaminaDrain
	 */
	struct UStaminaAttributeSet_OnRep_StaminaDrain_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.StaminaAttributeSet.OnRep_MaximumStamina
	 */
	struct UStaminaAttributeSet_OnRep_MaximumStamina_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.StaminaAttributeSet.OnRep_CurrentStamina
	 */
	struct UStaminaAttributeSet_OnRep_CurrentStamina_Params
	{
	public:
		struct FGameplayAttributeData                              OldValue;                                                // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.TravelingGameMode.TravelNextLevel
	 */
	struct ATravelingGameMode_TravelNextLevel_Params
	{
	public:
		class APlayerController*                                   PlayerController;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.TravelingGameMode.LoadStreamLevelFinished
	 */
	struct ATravelingGameMode_LoadStreamLevelFinished_Params
	{	};

	/**
	 * Function ProjectAgartha.TutorialBox.OnOverlapBegin
	 */
	struct ATutorialBox_OnOverlapBegin_Params
	{
	public:
		class AActor*                                              OverlappedActor;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class AActor*                                              OtherActor;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.RectsMerge
	 */
	struct UUtilityBlueprintFunctionLib_RectsMerge_Params
	{
	public:
		TArray<struct FVector4>                                    Rects;                                                   // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.RectsCommonPart
	 */
	struct UUtilityBlueprintFunctionLib_RectsCommonPart_Params
	{
	public:
		struct FVector4                                            Rect1;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            Rect2;                                                   // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            RectCommon;                                              // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.RectMerge
	 */
	struct UUtilityBlueprintFunctionLib_RectMerge_Params
	{
	public:
		struct FVector4                                            RectParent;                                              // 0x0000(0x0010)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            RectChild;                                               // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.RectInsideRect
	 */
	struct UUtilityBlueprintFunctionLib_RectInsideRect_Params
	{
	public:
		struct FVector4                                            RectParent;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            RectChild;                                               // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0020(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.RectCutRect
	 */
	struct UUtilityBlueprintFunctionLib_RectCutRect_Params
	{
	public:
		struct FVector4                                            RectParent;                                              // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            RectScissor;                                             // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<struct FVector4>                                    ContainerRects;                                          // 0x0020(0x0010)  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0030(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.RectContactRect
	 */
	struct UUtilityBlueprintFunctionLib_RectContactRect_Params
	{
	public:
		struct FVector4                                            Rect1;                                                   // 0x0000(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		struct FVector4                                            Rect2;                                                   // 0x0010(0x0010)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Tolerance;                                               // 0x0020(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0024(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.IsWeapon
	 */
	struct UUtilityBlueprintFunctionLib_IsWeapon_Params
	{
	public:
		EquipmentType                                              _type;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.IsEditor
	 */
	struct UUtilityBlueprintFunctionLib_IsEditor_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.IsConsumable
	 */
	struct UUtilityBlueprintFunctionLib_IsConsumable_Params
	{
	public:
		EquipmentType                                              _type;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.IsArmor
	 */
	struct UUtilityBlueprintFunctionLib_IsArmor_Params
	{
	public:
		EquipmentType                                              _type;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0001(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.GetStatTypeFormatting
	 */
	struct UUtilityBlueprintFunctionLib_GetStatTypeFormatting_Params
	{
	public:
		EItemStatType                                              _itemStat;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_PD6H[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      _val;                                                    // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.GetStatEffects
	 */
	struct UUtilityBlueprintFunctionLib_GetStatEffects_Params
	{
	public:
		struct FItemStats                                          _stats;                                                  // 0x0000(0x00A0)  (Parm, NativeAccessSpecifierPublic)
		TMap<EItemStatType, float>                                 ReturnValue;                                             // 0x00A0(0x0050)  (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.GetDefaultAttackSpeed
	 */
	struct UUtilityBlueprintFunctionLib_GetDefaultAttackSpeed_Params
	{
	public:
		EWeaponType                                                _type;                                                   // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_T487[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		float                                                      ReturnValue;                                             // 0x0004(0x0004)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.FormatDecimalPrecision
	 */
	struct UUtilityBlueprintFunctionLib_FormatDecimalPrecision_Params
	{
	public:
		float                                                      _val;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		int32_t                                                    _precision;                                              // 0x0004(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.UtilityBlueprintFunctionLib.FormatAsPercentage
	 */
	struct UUtilityBlueprintFunctionLib_FormatAsPercentage_Params
	{
	public:
		float                                                      _val;                                                    // 0x0000(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       _plusIfPositive;                                         // 0x0004(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_N6K1[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class FString                                              ReturnValue;                                             // 0x0008(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.VoiceComponent.SayVoice
	 */
	struct UVoiceComponent_SayVoice_Params
	{
	public:
		ECharacterVoice                                            VoiceLine;                                               // 0x0000(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       bIsPriority;                                             // 0x0001(0x0001)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function ProjectAgartha.VoiceComponent.NotifyNearbyBots
	 */
	struct UVoiceComponent_NotifyNearbyBots_Params
	{	};

	/**
	 * Function ProjectAgartha.VoiceComponent.LoadVoices
	 */
	struct UVoiceComponent_LoadVoices_Params
	{
	public:
		class FName                                                VoiceIdentifier;                                         // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
