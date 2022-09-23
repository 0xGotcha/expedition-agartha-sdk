/**
 * Name: Agartha
 * Version: 1
 */

#include "../SDK.hpp"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgarthaEffectUIData_cpp.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgarthaEffectUIData_cpp::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.AgarthaEffectUIData_cpp");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgarthaGlobals.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgarthaGlobals::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.AgarthaGlobals");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.WithEditor
	 * 		Flags  -> ()
	 */
	bool UAgarthaPlayfabFunctionLibrary::WithEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.WithEditor");
		
		UAgarthaPlayfabFunctionLibrary_WithEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.UsePlayFab
	 * 		Flags  -> ()
	 */
	bool UAgarthaPlayfabFunctionLibrary::UsePlayFab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.UsePlayFab");
		
		UAgarthaPlayfabFunctionLibrary_UsePlayFab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.IsSteamLoginEnable
	 * 		Flags  -> ()
	 */
	bool UAgarthaPlayfabFunctionLibrary::IsSteamLoginEnable()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.IsSteamLoginEnable");
		
		UAgarthaPlayfabFunctionLibrary_IsSteamLoginEnable_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.GetSteamLoginAuthToken
	 * 		Flags  -> ()
	 */
	class FString UAgarthaPlayfabFunctionLibrary::GetSteamLoginAuthToken()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.AgarthaPlayfabFunctionLibrary.GetSteamLoginAuthToken");
		
		UAgarthaPlayfabFunctionLibrary_GetSteamLoginAuthToken_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgarthaPlayfabFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgarthaPlayfabFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.AgarthaPlayfabFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.AgathaPlayfabUtils.LoginWithSteam
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CreateAccount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               LoggedInCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAgathaPlayfabUtils::LoginWithSteam(bool CreateAccount, bool LoggedInCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.AgathaPlayfabUtils.LoginWithSteam");
		
		UAgathaPlayfabUtils_LoginWithSteam_Params params {};
		params.CreateAccount = CreateAccount;
		params.LoggedInCheck = LoggedInCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.AgathaPlayfabUtils.LoginWithCustomID
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      CustomID                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CreateAccount                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               LoggedInCheck                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UAgathaPlayfabUtils::LoginWithCustomID(const class FString& CustomID, bool CreateAccount, bool LoggedInCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.AgathaPlayfabUtils.LoginWithCustomID");
		
		UAgathaPlayfabUtils_LoginWithCustomID_Params params {};
		params.CustomID = CustomID;
		params.CreateAccount = CreateAccount;
		params.LoggedInCheck = LoggedInCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.AgathaPlayfabUtils.IsClientLoggedIn
	 * 		Flags  -> ()
	 */
	bool UAgathaPlayfabUtils::IsClientLoggedIn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.AgathaPlayfabUtils.IsClientLoggedIn");
		
		UAgathaPlayfabUtils_IsClientLoggedIn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAgathaPlayfabUtils.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAgathaPlayfabUtils::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.AgathaPlayfabUtils");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ArmorNoiseComponent.NotifyNearbyBots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              OverrideDistance                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArmorNoiseComponent::NotifyNearbyBots(float OverrideDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ArmorNoiseComponent.NotifyNearbyBots");
		
		UArmorNoiseComponent_NotifyNearbyBots_Params params {};
		params.OverrideDistance = OverrideDistance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ArmorNoiseComponent.MakeNoise
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EArmorNoise                                        NoiseLine                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArmorNoiseComponent::MakeNoise(EArmorNoise NoiseLine, bool bIsPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ArmorNoiseComponent.MakeNoise");
		
		UArmorNoiseComponent_MakeNoise_Params params {};
		params.NoiseLine = NoiseLine;
		params.bIsPriority = bIsPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ArmorNoiseComponent.LoadNoises
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      ArmorWeight                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UArmorNoiseComponent::LoadNoises(unsigned char ArmorWeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ArmorNoiseComponent.LoadNoises");
		
		UArmorNoiseComponent_LoadNoises_Params params {};
		params.ArmorWeight = ArmorWeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UArmorNoiseComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UArmorNoiseComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ArmorNoiseComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ATCustomWaitVelocityChange.CreateWaitVelocityChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayAbility*                            OwningAbility                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DotThreshold                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              MagnitudeThreshold                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReportZeroVelocity                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              NearZeroThreshold                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UATCustomWaitVelocityChange* UATCustomWaitVelocityChange::CreateWaitVelocityChange(class UGameplayAbility* OwningAbility, float DotThreshold, float MagnitudeThreshold, bool ReportZeroVelocity, float NearZeroThreshold)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ATCustomWaitVelocityChange.CreateWaitVelocityChange");
		
		UATCustomWaitVelocityChange_CreateWaitVelocityChange_Params params {};
		params.OwningAbility = OwningAbility;
		params.DotThreshold = DotThreshold;
		params.MagnitudeThreshold = MagnitudeThreshold;
		params.ReportZeroVelocity = ReportZeroVelocity;
		params.NearZeroThreshold = NearZeroThreshold;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UATCustomWaitVelocityChange.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UATCustomWaitVelocityChange::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ATCustomWaitVelocityChange");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.UpdateAchievement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EAchievement                                       Achievement                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Progress                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::UpdateAchievement(EAchievement Achievement, float Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.UpdateAchievement");
		
		UBinarySerializer_UpdateAchievement_Params params {};
		params.Achievement = Achievement;
		params.Progress = Progress;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.SaveSessionToFileAsGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RaidURL                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UProjectAgarthaGameInstance*                 GameInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::SaveSessionToFileAsGameInstance(const class FString& RaidURL, class UProjectAgarthaGameInstance* GameInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.SaveSessionToFileAsGameInstance");
		
		UBinarySerializer_SaveSessionToFileAsGameInstance_Params params {};
		params.RaidURL = RaidURL;
		params.GameInstance = GameInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.SaveSessionToFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RaidURL                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::SaveSessionToFile(const class FString& RaidURL, class AActor* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.SaveSessionToFile");
		
		UBinarySerializer_SaveSessionToFile_Params params {};
		params.RaidURL = RaidURL;
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.SaveNPCsStateToPlayfab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCharacterNPCsComponent*                     CharacterNPCsComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::SaveNPCsStateToPlayfab(class AProjectAgarthaCharacter* Pawn, class UCharacterNPCsComponent* CharacterNPCsComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.SaveNPCsStateToPlayfab");
		
		UBinarySerializer_SaveNPCsStateToPlayfab_Params params {};
		params.Pawn = Pawn;
		params.CharacterNPCsComponent = CharacterNPCsComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.SaveInventoryToPlayfabAsFreebooter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForgetRaid                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::SaveInventoryToPlayfabAsFreebooter(class ACombatEntity* Pawn, bool bForgetRaid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.SaveInventoryToPlayfabAsFreebooter");
		
		UBinarySerializer_SaveInventoryToPlayfabAsFreebooter_Params params {};
		params.Pawn = Pawn;
		params.bForgetRaid = bForgetRaid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.SaveInventoryToPlayfab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForgetRaid                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::SaveInventoryToPlayfab(class ACombatEntity* Pawn, bool bForgetRaid)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.SaveInventoryToPlayfab");
		
		UBinarySerializer_SaveInventoryToPlayfab_Params params {};
		params.Pawn = Pawn;
		params.bForgetRaid = bForgetRaid;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.SaveAppearanceToPlayfab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCharacterModularComponent*                  ModularComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::SaveAppearanceToPlayfab(class AProjectAgarthaCharacter* Pawn, class UCharacterModularComponent* ModularComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.SaveAppearanceToPlayfab");
		
		UBinarySerializer_SaveAppearanceToPlayfab_Params params {};
		params.Pawn = Pawn;
		params.ModularComponent = ModularComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.LogEvent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAnalyticEvent                                     EventType                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalKey                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OptionalValue                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::LogEvent(class ACombatEntity* Pawn, EAnalyticEvent EventType, const class FString& OptionalKey, const class FString& OptionalValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.LogEvent");
		
		UBinarySerializer_LogEvent_Params params {};
		params.Pawn = Pawn;
		params.EventType = EventType;
		params.OptionalKey = OptionalKey;
		params.OptionalValue = OptionalValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.LoadSessionFromFileAsGameInstance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProjectAgarthaGameInstance*                 GameInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::LoadSessionFromFileAsGameInstance(class UProjectAgarthaGameInstance* GameInstance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.LoadSessionFromFileAsGameInstance");
		
		UBinarySerializer_LoadSessionFromFileAsGameInstance_Params params {};
		params.GameInstance = GameInstance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.LoadSessionFromFile
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      WorldContext                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::LoadSessionFromFile(class AActor* WorldContext)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.LoadSessionFromFile");
		
		UBinarySerializer_LoadSessionFromFile_Params params {};
		params.WorldContext = WorldContext;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.LoadNPCsStateFromPlayfab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCharacterNPCsComponent*                     CharacterNPCsComponent                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::LoadNPCsStateFromPlayfab(class AProjectAgarthaCharacter* Pawn, class UCharacterNPCsComponent* CharacterNPCsComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.LoadNPCsStateFromPlayfab");
		
		UBinarySerializer_LoadNPCsStateFromPlayfab_Params params {};
		params.Pawn = Pawn;
		params.CharacterNPCsComponent = CharacterNPCsComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.LoadInventoryFromPlayfab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::LoadInventoryFromPlayfab(class ACombatEntity* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.LoadInventoryFromPlayfab");
		
		UBinarySerializer_LoadInventoryFromPlayfab_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.LoadAppearanceFromPlayfabForCreator
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      BackendID                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AProjectAgarthaCharacter*                    CharacterActor                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::LoadAppearanceFromPlayfabForCreator(const class FString& BackendID, class AProjectAgarthaCharacter* CharacterActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.LoadAppearanceFromPlayfabForCreator");
		
		UBinarySerializer_LoadAppearanceFromPlayfabForCreator_Params params {};
		params.BackendID = BackendID;
		params.CharacterActor = CharacterActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.LoadAppearanceFromPlayfab
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UCharacterModularComponent*                  ModularComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::LoadAppearanceFromPlayfab(class AProjectAgarthaCharacter* Pawn, class UCharacterModularComponent* ModularComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.LoadAppearanceFromPlayfab");
		
		UBinarySerializer_LoadAppearanceFromPlayfab_Params params {};
		params.Pawn = Pawn;
		params.ModularComponent = ModularComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BinarySerializer.Authorize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Token                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PartyString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UBinarySerializer::Authorize(class AProjectAgarthaCharacter* Pawn, const class FString& Token, const class FString& PartyString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BinarySerializer.Authorize");
		
		UBinarySerializer_Authorize_Params params {};
		params.Pawn = Pawn;
		params.Token = Token;
		params.PartyString = PartyString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBinarySerializer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBinarySerializer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.BinarySerializer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBlockedDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBlockedDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.BlockedDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBodyDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBodyDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.BodyDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnSpawnTick
	 * 		Flags  -> ()
	 */
	void ABotSpawnNode::OnSpawnTick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnSpawnTick");
		
		ABotSpawnNode_OnSpawnTick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnSpawnNewZombieBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BotLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBoxComponent*                               ComponentSpawnedFrom                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnSpawnNewZombieBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnSpawnNewZombieBegin");
		
		ABotSpawnNode_OnSpawnNewZombieBegin_Params params {};
		params.BotLocation = BotLocation;
		params.ComponentSpawnedFrom = ComponentSpawnedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnSpawnNewRabbitBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BotLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBoxComponent*                               ComponentSpawnedFrom                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnSpawnNewRabbitBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnSpawnNewRabbitBegin");
		
		ABotSpawnNode_OnSpawnNewRabbitBegin_Params params {};
		params.BotLocation = BotLocation;
		params.ComponentSpawnedFrom = ComponentSpawnedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnSpawnNewGoatBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BotLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBoxComponent*                               ComponentSpawnedFrom                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnSpawnNewGoatBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnSpawnNewGoatBegin");
		
		ABotSpawnNode_OnSpawnNewGoatBegin_Params params {};
		params.BotLocation = BotLocation;
		params.ComponentSpawnedFrom = ComponentSpawnedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnSpawnNewCorruptZombieBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BotLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBoxComponent*                               ComponentSpawnedFrom                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnSpawnNewCorruptZombieBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnSpawnNewCorruptZombieBegin");
		
		ABotSpawnNode_OnSpawnNewCorruptZombieBegin_Params params {};
		params.BotLocation = BotLocation;
		params.ComponentSpawnedFrom = ComponentSpawnedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnSpawnNewBotEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               NewBot                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBoxComponent*                               ComponentSpawnedFrom                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnSpawnNewBotEnd(class ACombatEntity* NewBot, class UBoxComponent* ComponentSpawnedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnSpawnNewBotEnd");
		
		ABotSpawnNode_OnSpawnNewBotEnd_Params params {};
		params.NewBot = NewBot;
		params.ComponentSpawnedFrom = ComponentSpawnedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnSpawnNewBotBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BotLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBoxComponent*                               ComponentSpawnedFrom                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnSpawnNewBotBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnSpawnNewBotBegin");
		
		ABotSpawnNode_OnSpawnNewBotBegin_Params params {};
		params.BotLocation = BotLocation;
		params.ComponentSpawnedFrom = ComponentSpawnedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnSpawnNewBoarBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BotLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBoxComponent*                               ComponentSpawnedFrom                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnSpawnNewBoarBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnSpawnNewBoarBegin");
		
		ABotSpawnNode_OnSpawnNewBoarBegin_Params params {};
		params.BotLocation = BotLocation;
		params.ComponentSpawnedFrom = ComponentSpawnedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnSpawnNewAsuraBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     BotLocation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UBoxComponent*                               ComponentSpawnedFrom                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnSpawnNewAsuraBegin(const struct FVector& BotLocation, class UBoxComponent* ComponentSpawnedFrom)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnSpawnNewAsuraBegin");
		
		ABotSpawnNode_OnSpawnNewAsuraBegin_Params params {};
		params.BotLocation = BotLocation;
		params.ComponentSpawnedFrom = ComponentSpawnedFrom;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnOverlapEnd
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnOverlapEnd");
		
		ABotSpawnNode_OnOverlapEnd_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.OnOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.OnOverlapBegin");
		
		ABotSpawnNode_OnOverlapBegin_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.BotSpawnNode.Async_FindBotLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FScriptDelegate                              Out                                                        (Parm, ZeroConstructor, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          BadTransforms                                              (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FTransform                                  NodeOrigin                                                 (Parm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Components                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TMap<class UBoxComponent*, int32_t>                AsyncSpawnCount                                            (Parm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void ABotSpawnNode::Async_FindBotLocation(const class FScriptDelegate& Out, TArray<struct FTransform> BadTransforms, const struct FTransform& NodeOrigin, class UWorld* World, TArray<struct FTransform> Components, TMap<class UBoxComponent*, int32_t> AsyncSpawnCount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.BotSpawnNode.Async_FindBotLocation");
		
		ABotSpawnNode_Async_FindBotLocation_Params params {};
		params.Out = Out;
		params.BadTransforms = BadTransforms;
		params.NodeOrigin = NodeOrigin;
		params.World = World;
		params.Components = Components;
		params.AsyncSpawnCount = AsyncSpawnCount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABotSpawnNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABotSpawnNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.BotSpawnNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACameraFreePawn.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACameraFreePawn::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CameraFreePawn");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterArmorComponent.OnUnequipArmor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterModuleType                               Module                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ECharacterModuleType>                       ShowModules                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCharacterArmorComponent::OnUnequipArmor(ECharacterModuleType Module, TArray<ECharacterModuleType> ShowModules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterArmorComponent.OnUnequipArmor");
		
		UCharacterArmorComponent_OnUnequipArmor_Params params {};
		params.Module = Module;
		params.ShowModules = ShowModules;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterArmorComponent.OnEquipArmor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterModuleType                               Module                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<ECharacterModuleType>                       HideModules                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            BodyType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FItemTable                                  ItemData                                                   (Parm, NativeAccessSpecifierPublic)
	 */
	void UCharacterArmorComponent::OnEquipArmor(ECharacterModuleType Module, TArray<ECharacterModuleType> HideModules, int32_t BodyType, const struct FItemTable& ItemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterArmorComponent.OnEquipArmor");
		
		UCharacterArmorComponent_OnEquipArmor_Params params {};
		params.Module = Module;
		params.HideModules = HideModules;
		params.BodyType = BodyType;
		params.ItemData = ItemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterArmorComponent.OnArmorUpdate
	 * 		Flags  -> ()
	 */
	void UCharacterArmorComponent::OnArmorUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterArmorComponent.OnArmorUpdate");
		
		UCharacterArmorComponent_OnArmorUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterArmorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterArmorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CharacterArmorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterBase.OnRep_Death
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACharacterBase::OnRep_Death(bool OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterBase.OnRep_Death");
		
		ACharacterBase_OnRep_Death_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterBase.OnDeathCharacter
	 * 		Flags  -> ()
	 */
	void ACharacterBase::OnDeathCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterBase.OnDeathCharacter");
		
		ACharacterBase_OnDeathCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterBase.On_Death
	 * 		Flags  -> ()
	 */
	void ACharacterBase::On_Death()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterBase.On_Death");
		
		ACharacterBase_On_Death_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterBase.GiveGameplayAbility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      AbilityToGive                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACharacterBase::GiveGameplayAbility(class UClass* AbilityToGive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterBase.GiveGameplayAbility");
		
		ACharacterBase_GiveGameplayAbility_Params params {};
		params.AbilityToGive = AbilityToGive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterBase.BP_PlayerDied
	 * 		Flags  -> ()
	 */
	void ACharacterBase::BP_PlayerDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterBase.BP_PlayerDied");
		
		ACharacterBase_BP_PlayerDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACharacterBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACharacterBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CharacterBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterHistoryComponent.TrackStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerStat                                        Stat                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Amount                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterHistoryComponent::TrackStat(EPlayerStat Stat, int32_t Amount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterHistoryComponent.TrackStat");
		
		UCharacterHistoryComponent_TrackStat_Params params {};
		params.Stat = Stat;
		params.Amount = Amount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterHistoryComponent.GetStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPlayerStat                                        Stat                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UCharacterHistoryComponent::GetStat(EPlayerStat Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterHistoryComponent.GetStat");
		
		UCharacterHistoryComponent_GetStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterHistoryComponent.GetSessionStats
	 * 		Flags  -> ()
	 */
	struct FPlayerStats UCharacterHistoryComponent::GetSessionStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterHistoryComponent.GetSessionStats");
		
		UCharacterHistoryComponent_GetSessionStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterHistoryComponent.GetHistoryOfKills
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKillHistory>                        Kills                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCharacterHistoryComponent::GetHistoryOfKills(TArray<struct FKillHistory>* Kills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterHistoryComponent.GetHistoryOfKills");
		
		UCharacterHistoryComponent_GetHistoryOfKills_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Kills != nullptr)
			*Kills = params.Kills;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterHistoryComponent.GetArchivedStats
	 * 		Flags  -> ()
	 */
	struct FPlayerStats UCharacterHistoryComponent::GetArchivedStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterHistoryComponent.GetArchivedStats");
		
		UCharacterHistoryComponent_GetArchivedStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterHistoryComponent.Client_StatsChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PlayerKills                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NPCKills                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Networth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterHistoryComponent::Client_StatsChange(int32_t PlayerKills, int32_t NPCKills, int32_t Networth)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterHistoryComponent.Client_StatsChange");
		
		UCharacterHistoryComponent_Client_StatsChange_Params params {};
		params.PlayerKills = PlayerKills;
		params.NPCKills = NPCKills;
		params.Networth = Networth;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterHistoryComponent.Client_KillerSet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Name                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FDamageHistory>                      historyDamage                                              (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKillHistory>                        historyKills                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCharacterHistoryComponent::Client_KillerSet(const class FName& Name, TArray<struct FDamageHistory> historyDamage, TArray<struct FKillHistory> historyKills)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterHistoryComponent.Client_KillerSet");
		
		UCharacterHistoryComponent_Client_KillerSet_Params params {};
		params.Name = Name;
		params.historyDamage = historyDamage;
		params.historyKills = historyKills;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterHistoryComponent.ArchiveStats
	 * 		Flags  -> ()
	 */
	void UCharacterHistoryComponent::ArchiveStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterHistoryComponent.ArchiveStats");
		
		UCharacterHistoryComponent_ArchiveStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterHistoryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterHistoryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CharacterHistoryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterModularComponent.UpdateCharacterMesh
	 * 		Flags  -> ()
	 */
	void UCharacterModularComponent::UpdateCharacterMesh()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterModularComponent.UpdateCharacterMesh");
		
		UCharacterModularComponent_UpdateCharacterMesh_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterModularComponent.SetCharacterBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBody                              CharacterNewBody                                           (Parm, NativeAccessSpecifierPublic)
	 */
	bool UCharacterModularComponent::SetCharacterBody(const struct FCharacterBody& CharacterNewBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterModularComponent.SetCharacterBody");
		
		UCharacterModularComponent_SetCharacterBody_Params params {};
		params.CharacterNewBody = CharacterNewBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterModularComponent.GetCharacterBody
	 * 		Flags  -> ()
	 */
	struct FCharacterBody UCharacterModularComponent::GetCharacterBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterModularComponent.GetCharacterBody");
		
		UCharacterModularComponent_GetCharacterBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterModularComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterModularComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CharacterModularComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.UpdateQuestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCharacterNPCsComponent::UpdateQuestState(const class FName& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.UpdateQuestState");
		
		UCharacterNPCsComponent_UpdateQuestState_Params params {};
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.Server_FirstTalkFinished
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNPCComponent*                               NPCComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterNPCsComponent::Server_FirstTalkFinished(class UNPCComponent* NPCComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.Server_FirstTalkFinished");
		
		UCharacterNPCsComponent_Server_FirstTalkFinished_Params params {};
		params.NPCComponent = NPCComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.Server_FinishQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNPCComponent*                               NPCComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterNPCsComponent::Server_FinishQuest(class UNPCComponent* NPCComponent, const class FName& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.Server_FinishQuest");
		
		UCharacterNPCsComponent_Server_FinishQuest_Params params {};
		params.NPCComponent = NPCComponent;
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.Server_ClearQuests
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ResetMerchants                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterNPCsComponent::Server_ClearQuests(bool ResetMerchants)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.Server_ClearQuests");
		
		UCharacterNPCsComponent_Server_ClearQuests_Params params {};
		params.ResetMerchants = ResetMerchants;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.OverlappedQuestPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestPoint                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UCharacterNPCsComponent::OverlappedQuestPoint(const class FName& QuestPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.OverlappedQuestPoint");
		
		UCharacterNPCsComponent_OverlappedQuestPoint_Params params {};
		params.QuestPoint = QuestPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.OnRep_NPCLevels
	 * 		Flags  -> ()
	 */
	void UCharacterNPCsComponent::OnRep_NPCLevels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.OnRep_NPCLevels");
		
		UCharacterNPCsComponent_OnRep_NPCLevels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.NPCQuestProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FProjectAgartha_FNPCQuestProgress           Progress                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UCharacterNPCsComponent::NPCQuestProgress(const class FName& QuestName, struct FProjectAgartha_FNPCQuestProgress* Progress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.NPCQuestProgress");
		
		UCharacterNPCsComponent_NPCQuestProgress_Params params {};
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Progress != nullptr)
			*Progress = params.Progress;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.GetQuestState
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	EQuestProgressType UCharacterNPCsComponent::GetQuestState(const class FName& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.GetQuestState");
		
		UCharacterNPCsComponent_GetQuestState_Params params {};
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.GetQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuestTable                                 QuestRow                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UCharacterNPCsComponent::GetQuestInfo(const class FName& QuestName, struct FQuestTable* QuestRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.GetQuestInfo");
		
		UCharacterNPCsComponent_GetQuestInfo_Params params {};
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestRow != nullptr)
			*QuestRow = params.QuestRow;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.GetItemInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemRowName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FItemTable                                  ItemRow                                                    (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UCharacterNPCsComponent::GetItemInfo(const class FName& ItemRowName, struct FItemTable* ItemRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.GetItemInfo");
		
		UCharacterNPCsComponent_GetItemInfo_Params params {};
		params.ItemRowName = ItemRowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemRow != nullptr)
			*ItemRow = params.ItemRow;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.FindNPCQuestInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NPCName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FProjectAgartha_FNPCQuestProgress           QuestProgress                                              (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	int32_t UCharacterNPCsComponent::FindNPCQuestInProgress(const class FName& NPCName, const class FName& QuestName, struct FProjectAgartha_FNPCQuestProgress* QuestProgress)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.FindNPCQuestInProgress");
		
		UCharacterNPCsComponent_FindNPCQuestInProgress_Params params {};
		params.NPCName = NPCName;
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestProgress != nullptr)
			*QuestProgress = params.QuestProgress;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.FindNPCLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NPCName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FNPCLevel                                   NPCLevel                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UCharacterNPCsComponent::FindNPCLevel(const class FName& NPCName, struct FNPCLevel* NPCLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.FindNPCLevel");
		
		UCharacterNPCsComponent_FindNPCLevel_Params params {};
		params.NPCName = NPCName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NPCLevel != nullptr)
			*NPCLevel = params.NPCLevel;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.FindItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        ItemName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FQuestItemsStat>                     ItemStats                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCharacterNPCsComponent::FindItems(const class FName& ItemName, TArray<struct FQuestItemsStat> ItemStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.FindItems");
		
		UCharacterNPCsComponent_FindItems_Params params {};
		params.ItemName = ItemName;
		params.ItemStats = ItemStats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.EventQuestResult
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestActionResult                                 Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterNPCsComponent::EventQuestResult(EQuestActionResult Result, const class FName& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.EventQuestResult");
		
		UCharacterNPCsComponent_EventQuestResult_Params params {};
		params.Result = Result;
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.Client_Quest_Result
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EQuestActionResult                                 Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterNPCsComponent::Client_Quest_Result(EQuestActionResult Result, const class FName& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.Client_Quest_Result");
		
		UCharacterNPCsComponent_Client_Quest_Result_Params params {};
		params.Result = Result;
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterNPCsComponent.ClearQuests
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               ResetMerchants                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCharacterNPCsComponent::ClearQuests(bool ResetMerchants)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterNPCsComponent.ClearQuests");
		
		UCharacterNPCsComponent_ClearQuests_Params params {};
		params.ResetMerchants = ResetMerchants;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterNPCsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterNPCsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CharacterNPCsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterTravelingComponent.OnRep_SpawnGroup
	 * 		Flags  -> ()
	 */
	void UCharacterTravelingComponent::OnRep_SpawnGroup()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterTravelingComponent.OnRep_SpawnGroup");
		
		UCharacterTravelingComponent_OnRep_SpawnGroup_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterTravelingComponent.MoveToSpawn
	 * 		Flags  -> ()
	 */
	void UCharacterTravelingComponent::MoveToSpawn()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterTravelingComponent.MoveToSpawn");
		
		UCharacterTravelingComponent_MoveToSpawn_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterTravelingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterTravelingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CharacterTravelingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CharacterWeaponsComponent.OnWeaponUpdate
	 * 		Flags  -> ()
	 */
	void UCharacterWeaponsComponent::OnWeaponUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CharacterWeaponsComponent.OnWeaponUpdate");
		
		UCharacterWeaponsComponent_OnWeaponUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCharacterWeaponsComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCharacterWeaponsComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CharacterWeaponsComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ChatSubsystem.SendMessage_3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChatChannel                                       _Channel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      _Name                                                      (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      _Message                                                   (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatSubsystem::SendMessage_3(EChatChannel _Channel, const class FString& _Name, const class FString& _Message)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ChatSubsystem.SendMessage_3");
		
		UChatSubsystem_SendMessage_3_Params params {};
		params._Channel = _Channel;
		params._Name = _Name;
		params._Message = _Message;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ChatSubsystem.SendMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChatLine                                   ChatLine                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChatSubsystem::SendMessage(const struct FChatLine& ChatLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ChatSubsystem.SendMessage");
		
		UChatSubsystem_SendMessage_Params params {};
		params.ChatLine = ChatLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ChatSubsystem.ReceivedMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChatLine                                   ChatLine                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UChatSubsystem::ReceivedMessage(const struct FChatLine& ChatLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ChatSubsystem.ReceivedMessage");
		
		UChatSubsystem_ReceivedMessage_Params params {};
		params.ChatLine = ChatLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ChatSubsystem.MuteChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChatChannel                                       Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMuted                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UChatSubsystem::MuteChannel(EChatChannel Channel, bool bMuted)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ChatSubsystem.MuteChannel");
		
		UChatSubsystem_MuteChannel_Params params {};
		params.Channel = Channel;
		params.bMuted = bMuted;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ChatSubsystem.GetAllLinesFromChannel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EChatChannel                                       Channel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FChatLine> UChatSubsystem::GetAllLinesFromChannel(EChatChannel Channel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ChatSubsystem.GetAllLinesFromChannel");
		
		UChatSubsystem_GetAllLinesFromChannel_Params params {};
		params.Channel = Channel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ChatSubsystem.FormatLine
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChatLine                                   ChatLine                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FString UChatSubsystem::FormatLine(const struct FChatLine& ChatLine)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ChatSubsystem.FormatLine");
		
		UChatSubsystem_FormatLine_Params params {};
		params.ChatLine = ChatLine;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UChatSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UChatSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ChatSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PlayerCharacter.InitializeAbilityBindings
	 * 		Flags  -> ()
	 */
	void APlayerCharacter::InitializeAbilityBindings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PlayerCharacter.InitializeAbilityBindings");
		
		APlayerCharacter_InitializeAbilityBindings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.PlayerCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.UpdateStanceAndType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponType                                        NewWeaponType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::UpdateStanceAndType(EWeaponType NewWeaponType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.UpdateStanceAndType");
		
		ACombatEntity_UpdateStanceAndType_Params params {};
		params.NewWeaponType = NewWeaponType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.UpdateExtractionBasedOnParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bMoveToSpawnWhenComplete                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::UpdateExtractionBasedOnParty(bool bMoveToSpawnWhenComplete)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.UpdateExtractionBasedOnParty");
		
		ACombatEntity_UpdateExtractionBasedOnParty_Params params {};
		params.bMoveToSpawnWhenComplete = bMoveToSpawnWhenComplete;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.TryPerformJump
	 * 		Flags  -> ()
	 */
	void ACombatEntity::TryPerformJump()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.TryPerformJump");
		
		ACombatEntity_TryPerformJump_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.SetStance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterStance                                   CStance                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::SetStance(ECharacterStance CStance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.SetStance");
		
		ACombatEntity_SetStance_Params params {};
		params.CStance = CStance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_UseActionInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         ActionInventory                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_UseActionInventory(class UInventoryComponent* ActionInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_UseActionInventory");
		
		ACombatEntity_Server_UseActionInventory_Params params {};
		params.ActionInventory = ActionInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_UseAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Begin                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_UseAction(const struct FVector& Begin, const struct FVector& End)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_UseAction");
		
		ACombatEntity_Server_UseAction_Params params {};
		params.Begin = Begin;
		params.End = End;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_UpdateStash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       StashItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_UpdateStash(class UItem* StashItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_UpdateStash");
		
		ACombatEntity_Server_UpdateStash_Params params {};
		params.StashItem = StashItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_Sheathe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFighting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_Sheathe(bool bIsFighting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_Sheathe");
		
		ACombatEntity_Server_Sheathe_Params params {};
		params.bIsFighting = bIsFighting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_PlaceInWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWorld*                                      World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_PlaceInWorld(class UItem* Target, class UWorld* World, const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_PlaceInWorld");
		
		ACombatEntity_Server_PlaceInWorld_Params params {};
		params.Target = Target;
		params.World = World;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_PlaceInContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemActor*                                  TargetItemActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_PlaceInContainer(class UItem* TargetItem, class AItemActor* TargetItemActor, class UItem* TargetContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_PlaceInContainer");
		
		ACombatEntity_Server_PlaceInContainer_Params params {};
		params.TargetItem = TargetItem;
		params.TargetItemActor = TargetItemActor;
		params.TargetContainer = TargetContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_OnWeaponComponentStanceChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFighting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponType                                        Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_OnWeaponComponentStanceChange(bool bIsFighting, EWeaponType Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_OnWeaponComponentStanceChange");
		
		ACombatEntity_Server_OnWeaponComponentStanceChange_Params params {};
		params.bIsFighting = bIsFighting;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_OnWeaponComponentEquipmentChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      ItemLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_OnWeaponComponentEquipmentChange(class UItem* NewItem, EquipmentType ItemLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_OnWeaponComponentEquipmentChange");
		
		ACombatEntity_Server_OnWeaponComponentEquipmentChange_Params params {};
		params.NewItem = NewItem;
		params.ItemLocation = ItemLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_OnSheatheAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFighting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponType                                        Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_OnSheatheAction(bool bIsFighting, EWeaponType Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_OnSheatheAction");
		
		ACombatEntity_Server_OnSheatheAction_Params params {};
		params.bIsFighting = bIsFighting;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_OnServerKick
	 * 		Flags  -> ()
	 */
	void ACombatEntity::Server_OnServerKick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_OnServerKick");
		
		ACombatEntity_Server_OnServerKick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_OnArmorComponentEquipmentChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       PrevItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      ItemLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_OnArmorComponentEquipmentChange(class UItem* NewItem, class UItem* PrevItem, EquipmentType ItemLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_OnArmorComponentEquipmentChange");
		
		ACombatEntity_Server_OnArmorComponentEquipmentChange_Params params {};
		params.NewItem = NewItem;
		params.PrevItem = PrevItem;
		params.ItemLocation = ItemLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Server_CraftRecipeOnTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRecipeTable                                Recipe                                                     (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               Requirements                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UCraftingComponent*                          CraftTable                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Repeats                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Server_CraftRecipeOnTable(const struct FRecipeTable& Recipe, TArray<class UItem*> Requirements, class UCraftingComponent* CraftTable, int32_t Repeats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Server_CraftRecipeOnTable");
		
		ACombatEntity_Server_CraftRecipeOnTable_Params params {};
		params.Recipe = Recipe;
		params.Requirements = Requirements;
		params.CraftTable = CraftTable;
		params.Repeats = Repeats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.SaveInventory
	 * 		Flags  -> ()
	 */
	void ACombatEntity::SaveInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.SaveInventory");
		
		ACombatEntity_SaveInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.ReplicateStashDelayed
	 * 		Flags  -> ()
	 */
	void ACombatEntity::ReplicateStashDelayed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.ReplicateStashDelayed");
		
		ACombatEntity_ReplicateStashDelayed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.RemoveStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemStats                                  NewStats                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Durability                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::RemoveStats(struct FItemStats* NewStats, unsigned char Durability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.RemoveStats");
		
		ACombatEntity_RemoveStats_Params params {};
		params.Durability = Durability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewStats != nullptr)
			*NewStats = params.NewStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.RemoveAbilities
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponType                                        MoveSet                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::RemoveAbilities(EWeaponType MoveSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.RemoveAbilities");
		
		ACombatEntity_RemoveAbilities_Params params {};
		params.MoveSet = MoveSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.RaycastFromPlayerController
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Start                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACombatEntity::RaycastFromPlayerController(struct FVector* Start, struct FVector* End, float Distance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.RaycastFromPlayerController");
		
		ACombatEntity_RaycastFromPlayerController_Params params {};
		params.Distance = Distance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Start != nullptr)
			*Start = params.Start;
		if (End != nullptr)
			*End = params.End;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.PlayEmoteByRowName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::PlayEmoteByRowName(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.PlayEmoteByRowName");
		
		ACombatEntity_PlayEmoteByRowName_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.PickUp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AItemActor*                                  Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACombatEntity::PickUp(class AItemActor* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.PickUp");
		
		ACombatEntity_PickUp_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.PerformLightAttack
	 * 		Flags  -> ()
	 */
	void ACombatEntity::PerformLightAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.PerformLightAttack");
		
		ACombatEntity_PerformLightAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.PerformKick
	 * 		Flags  -> ()
	 */
	void ACombatEntity::PerformKick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.PerformKick");
		
		ACombatEntity_PerformKick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.PerformHeavyAttack
	 * 		Flags  -> ()
	 */
	void ACombatEntity::PerformHeavyAttack()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.PerformHeavyAttack");
		
		ACombatEntity_PerformHeavyAttack_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.PerformDodge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::PerformDodge(unsigned char Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.PerformDodge");
		
		ACombatEntity_PerformDodge_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnWeaponComponentEquipmentChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      ItemLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACombatEntity::OnWeaponComponentEquipmentChange(class UItem* NewItem, EquipmentType ItemLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnWeaponComponentEquipmentChange");
		
		ACombatEntity_OnWeaponComponentEquipmentChange_Params params {};
		params.NewItem = NewItem;
		params.ItemLocation = ItemLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnUse
	 * 		Flags  -> ()
	 */
	void ACombatEntity::OnUse()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnUse");
		
		ACombatEntity_OnUse_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnStanceChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFighting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnStanceChange(bool bIsFighting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnStanceChange");
		
		ACombatEntity_OnStanceChange_Params params {};
		params.bIsFighting = bIsFighting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnSheatheUnsheathe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFighting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponType                                        Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnSheatheUnsheathe(bool bIsFighting, EWeaponType Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnSheatheUnsheathe");
		
		ACombatEntity_OnSheatheUnsheathe_Params params {};
		params.bIsFighting = bIsFighting;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnRep_Stance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterStance                                   OldValue                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnRep_Stance(ECharacterStance OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnRep_Stance");
		
		ACombatEntity_OnRep_Stance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnRep_Party
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      OldValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnRep_Party(unsigned char OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnRep_Party");
		
		ACombatEntity_OnRep_Party_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnRep_OnInventoryUpdate
	 * 		Flags  -> ()
	 */
	void ACombatEntity::OnRep_OnInventoryUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnRep_OnInventoryUpdate");
		
		ACombatEntity_OnRep_OnInventoryUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnNPCDialog
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNPCComponent*                               NPCComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestToFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestToPropose                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FNPCQuestProgressCondition>          Conditions                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnNPCDialog(class UNPCComponent* NPCComponent, const class FName& QuestToFinish, const class FName& QuestToPropose, TArray<struct FNPCQuestProgressCondition> Conditions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnNPCDialog");
		
		ACombatEntity_OnNPCDialog_Params params {};
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
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnInventoryLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnInventoryLoaded(class ACombatEntity* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnInventoryLoaded");
		
		ACombatEntity_OnInventoryLoaded_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnEquipmentChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       PrevItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      ItemLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnEquipmentChange(class UItem* NewItem, class UItem* PrevItem, EquipmentType ItemLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnEquipmentChange");
		
		ACombatEntity_OnEquipmentChange_Params params {};
		params.NewItem = NewItem;
		params.PrevItem = PrevItem;
		params.ItemLocation = ItemLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnCraftTableOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCraftingComponent*                          CraftTable                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnCraftTableOpen(class UCraftingComponent* CraftTable)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnCraftTableOpen");
		
		ACombatEntity_OnCraftTableOpen_Params params {};
		params.CraftTable = CraftTable;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnContainerOpen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Container                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnContainerOpen(class UInventoryComponent* Container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnContainerOpen");
		
		ACombatEntity_OnContainerOpen_Params params {};
		params.Container = Container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.OnArmorComponentEquipmentChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       PrevItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      ItemLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::OnArmorComponentEquipmentChange(class UItem* NewItem, class UItem* PrevItem, EquipmentType ItemLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.OnArmorComponentEquipmentChange");
		
		ACombatEntity_OnArmorComponentEquipmentChange_Params params {};
		params.NewItem = NewItem;
		params.PrevItem = PrevItem;
		params.ItemLocation = ItemLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.NPCQuestNotEnoughSpaceToReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::NPCQuestNotEnoughSpaceToReward(const class FName& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.NPCQuestNotEnoughSpaceToReward");
		
		ACombatEntity_NPCQuestNotEnoughSpaceToReward_Params params {};
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Multicast_UpdateStash
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       StashItem                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Multicast_UpdateStash(class UItem* StashItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Multicast_UpdateStash");
		
		ACombatEntity_Multicast_UpdateStash_Params params {};
		params.StashItem = StashItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Multicast_PlaySound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              VolumeMultiplier                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              PitchMultiplier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USoundAttenuation*                           Attenuation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCancelLastSound                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Multicast_PlaySound(float VolumeMultiplier, float PitchMultiplier, class USoundAttenuation* Attenuation, bool bCancelLastSound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Multicast_PlaySound");
		
		ACombatEntity_Multicast_PlaySound_Params params {};
		params.VolumeMultiplier = VolumeMultiplier;
		params.PitchMultiplier = PitchMultiplier;
		params.Attenuation = Attenuation;
		params.bCancelLastSound = bCancelLastSound;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Multicast_OnWeaponComponentStanceChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFighting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponType                                        Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Multicast_OnWeaponComponentStanceChange(bool bIsFighting, EWeaponType Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Multicast_OnWeaponComponentStanceChange");
		
		ACombatEntity_Multicast_OnWeaponComponentStanceChange_Params params {};
		params.bIsFighting = bIsFighting;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Multicast_OnWeaponComponentEquipmentChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      ItemLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Multicast_OnWeaponComponentEquipmentChange(class UItem* NewItem, EquipmentType ItemLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Multicast_OnWeaponComponentEquipmentChange");
		
		ACombatEntity_Multicast_OnWeaponComponentEquipmentChange_Params params {};
		params.NewItem = NewItem;
		params.ItemLocation = ItemLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Multicast_OnSheatheAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsFighting                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EWeaponType                                        Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Multicast_OnSheatheAction(bool IsFighting, EWeaponType Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Multicast_OnSheatheAction");
		
		ACombatEntity_Multicast_OnSheatheAction_Params params {};
		params.IsFighting = IsFighting;
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Multicast_OnArmorComponentEquipmentChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       PrevItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      ItemLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Multicast_OnArmorComponentEquipmentChange(class UItem* NewItem, class UItem* PrevItem, EquipmentType ItemLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Multicast_OnArmorComponentEquipmentChange");
		
		ACombatEntity_Multicast_OnArmorComponentEquipmentChange_Params params {};
		params.NewItem = NewItem;
		params.PrevItem = PrevItem;
		params.ItemLocation = ItemLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.IsUniqueBehaviorActive
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EUniqueBehavior                                    Behaviors                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACombatEntity::IsUniqueBehaviorActive(EUniqueBehavior Behaviors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.IsUniqueBehaviorActive");
		
		ACombatEntity_IsUniqueBehaviorActive_Params params {};
		params.Behaviors = Behaviors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.GetWeaponType
	 * 		Flags  -> ()
	 */
	EWeaponType ACombatEntity::GetWeaponType()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.GetWeaponType");
		
		ACombatEntity_GetWeaponType_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.GetDropPosition
	 * 		Flags  -> ()
	 */
	struct FVector ACombatEntity::GetDropPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.GetDropPosition");
		
		ACombatEntity_GetDropPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.FindItemObject
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AItemActor* ACombatEntity::FindItemObject(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.FindItemObject");
		
		ACombatEntity_FindItemObject_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.FindItemContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AItemContainer* ACombatEntity::FindItemContainer(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.FindItemContainer");
		
		ACombatEntity_FindItemContainer_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.FindCorpse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UInventoryComponent* ACombatEntity::FindCorpse(const struct FVector& Direction)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.FindCorpse");
		
		ACombatEntity_FindCorpse_Params params {};
		params.Direction = Direction;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.ConsumeStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECombatAction                                      Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::ConsumeStamina(ECombatAction Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.ConsumeStamina");
		
		ACombatEntity_ConsumeStamina_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Client_UseActionCrafting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCraftingComponent*                          ContainerResult                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Client_UseActionCrafting(class UCraftingComponent* ContainerResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Client_UseActionCrafting");
		
		ACombatEntity_Client_UseActionCrafting_Params params {};
		params.ContainerResult = ContainerResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Client_UseAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         ContainerResult                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Client_UseAction(class UInventoryComponent* ContainerResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Client_UseAction");
		
		ACombatEntity_Client_UseAction_Params params {};
		params.ContainerResult = ContainerResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Client_OnWeaponComponentEquipmentChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       NewItem                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      ItemLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Client_OnWeaponComponentEquipmentChange(class UItem* NewItem, EquipmentType ItemLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Client_OnWeaponComponentEquipmentChange");
		
		ACombatEntity_Client_OnWeaponComponentEquipmentChange_Params params {};
		params.NewItem = NewItem;
		params.ItemLocation = ItemLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Client_OnServerKick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Client_OnServerKick(const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Client_OnServerKick");
		
		ACombatEntity_Client_OnServerKick_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Client_OnFullyLoaded
	 * 		Flags  -> ()
	 */
	void ACombatEntity::Client_OnFullyLoaded()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Client_OnFullyLoaded");
		
		ACombatEntity_Client_OnFullyLoaded_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Client_OnCraftRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCraftingComponent*                          CraftTable                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCraftWasSuccess                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECraftResult                                       Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Client_OnCraftRecipe(class UCraftingComponent* CraftTable, bool bCraftWasSuccess, ECraftResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Client_OnCraftRecipe");
		
		ACombatEntity_Client_OnCraftRecipe_Params params {};
		params.CraftTable = CraftTable;
		params.bCraftWasSuccess = bCraftWasSuccess;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Client_NPCQuestNotEnoughSpaceToReward
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Client_NPCQuestNotEnoughSpaceToReward(const class FName& QuestName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Client_NPCQuestNotEnoughSpaceToReward");
		
		ACombatEntity_Client_NPCQuestNotEnoughSpaceToReward_Params params {};
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.Client_NPCAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNPCComponent*                               NPCComponent                                               (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestToFinish                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestToPropose                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FNPCQuestProgressCondition>          Conditions                                                 (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::Client_NPCAction(class UNPCComponent* NPCComponent, const class FName& QuestToFinish, const class FName& QuestToPropose, TArray<struct FNPCQuestProgressCondition> Conditions)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.Client_NPCAction");
		
		ACombatEntity_Client_NPCAction_Params params {};
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
	 * 		Name   -> Function ProjectAgartha.CombatEntity.CheckRetaliation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      DamageCauser                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::CheckRetaliation(class AActor* DamageCauser)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.CheckRetaliation");
		
		ACombatEntity_CheckRetaliation_Params params {};
		params.DamageCauser = DamageCauser;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.CanAffordStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECombatAction                                      Action                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ACombatEntity::CanAffordStamina(ECombatAction Action)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.CanAffordStamina");
		
		ACombatEntity_CanAffordStamina_Params params {};
		params.Action = Action;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.BP_ReconnectedBeginPlay
	 * 		Flags  -> ()
	 */
	void ACombatEntity::BP_ReconnectedBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.BP_ReconnectedBeginPlay");
		
		ACombatEntity_BP_ReconnectedBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.BP_OnRep_OnEnraged
	 * 		Flags  -> ()
	 */
	void ACombatEntity::BP_OnRep_OnEnraged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.BP_OnRep_OnEnraged");
		
		ACombatEntity_BP_OnRep_OnEnraged_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.AddStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemStats                                  NewStats                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Durability                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::AddStats(struct FItemStats* NewStats, unsigned char Durability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.AddStats");
		
		ACombatEntity_AddStats_Params params {};
		params.Durability = Durability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewStats != nullptr)
			*NewStats = params.NewStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CombatEntity.AddAbilities
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponType                                        MoveSet                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ACombatEntity::AddAbilities(EWeaponType MoveSet)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CombatEntity.AddAbilities");
		
		ACombatEntity_AddAbilities_Params params {};
		params.MoveSet = MoveSet;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ACombatEntity.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ACombatEntity::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CombatEntity");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.ReturnCraftReqsToInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCraftingComponent::ReturnCraftReqsToInventory(class ACombatEntity* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.ReturnCraftReqsToInventory");
		
		UCraftingComponent_ReturnCraftReqsToInventory_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.GetStationRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCraftingComponent::GetStationRank(class ACombatEntity* Player)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.GetStationRank");
		
		UCraftingComponent_GetStationRank_Params params {};
		params.Player = Player;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.GetMaxAmountOfRepeats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRecipeTable                                Recipe                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               Container                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCraftingComponent::GetMaxAmountOfRepeats(const struct FRecipeTable& Recipe, TArray<class UItem*> Container)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.GetMaxAmountOfRepeats");
		
		UCraftingComponent_GetMaxAmountOfRepeats_Params params {};
		params.Recipe = Recipe;
		params.Container = Container;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.GetItemsByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               ItemsFound                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               ContainerToSearch                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UCraftingComponent::GetItemsByIndex(int32_t ItemIndex, TArray<class UItem*>* ItemsFound, TArray<class UItem*>* ContainerToSearch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.GetItemsByIndex");
		
		UCraftingComponent_GetItemsByIndex_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsFound != nullptr)
			*ItemsFound = params.ItemsFound;
		if (ContainerToSearch != nullptr)
			*ContainerToSearch = params.ContainerToSearch;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.GetEmptyCraftingSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<int32_t>                                    _collisionGrid                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		struct FIntPoint                                   _itemScale                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _gridSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntPoint UCraftingComponent::GetEmptyCraftingSlot(TArray<int32_t> _collisionGrid, const struct FIntPoint& _itemScale, int32_t _gridSize)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.GetEmptyCraftingSlot");
		
		UCraftingComponent_GetEmptyCraftingSlot_Params params {};
		params._collisionGrid = _collisionGrid;
		params._itemScale = _itemScale;
		params._gridSize = _gridSize;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.GetCraftOutputItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRecipeTable                                Recipe                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               Requirements                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         _inventoryComponent                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class UItem*> UCraftingComponent::GetCraftOutputItems(const struct FRecipeTable& Recipe, TArray<class UItem*> Requirements, class UInventoryComponent* _inventoryComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.GetCraftOutputItems");
		
		UCraftingComponent_GetCraftOutputItems_Params params {};
		params.Recipe = Recipe;
		params.Requirements = Requirements;
		params._inventoryComponent = _inventoryComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.GetAmountOfItemsByType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      ItemType                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               ContainerToSearch                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCraftingComponent::GetAmountOfItemsByType(EquipmentType ItemType, TArray<class UItem*>* ContainerToSearch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.GetAmountOfItemsByType");
		
		UCraftingComponent_GetAmountOfItemsByType_Params params {};
		params.ItemType = ItemType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContainerToSearch != nullptr)
			*ContainerToSearch = params.ContainerToSearch;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.GetAmountOfItemsByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               ContainerToSearch                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	int32_t UCraftingComponent::GetAmountOfItemsByIndex(int32_t ItemIndex, TArray<class UItem*>* ContainerToSearch)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.GetAmountOfItemsByIndex");
		
		UCraftingComponent_GetAmountOfItemsByIndex_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContainerToSearch != nullptr)
			*ContainerToSearch = params.ContainerToSearch;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.GetAllValidRecipes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               _useStationLevel                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<struct FRecipeTable> UCraftingComponent::GetAllValidRecipes(class ACombatEntity* Player, bool _useStationLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.GetAllValidRecipes");
		
		UCraftingComponent_GetAllValidRecipes_Params params {};
		params.Player = Player;
		params._useStationLevel = _useStationLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.CraftRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FRecipeTable                                Recipe                                                     (Parm, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               Requirements                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class ACombatEntity*                               Player                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Repeat                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCraftingComponent::CraftRecipe(const struct FRecipeTable& Recipe, TArray<class UItem*> Requirements, class ACombatEntity* Player, int32_t Repeat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.CraftRecipe");
		
		UCraftingComponent_CraftRecipe_Params params {};
		params.Recipe = Recipe;
		params.Requirements = Requirements;
		params.Player = Player;
		params.Repeat = Repeat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.Client_OnCraftRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCraftWasSuccess                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECraftResult                                       Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCraftingComponent::Client_OnCraftRecipe(bool bCraftWasSuccess, ECraftResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.Client_OnCraftRecipe");
		
		UCraftingComponent_Client_OnCraftRecipe_Params params {};
		params.bCraftWasSuccess = bCraftWasSuccess;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.Client_GetStationRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      ContainerWidth                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ContainerHeight                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCraftingComponent::Client_GetStationRank(unsigned char ContainerWidth, unsigned char ContainerHeight, unsigned char Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.Client_GetStationRank");
		
		UCraftingComponent_Client_GetStationRank_Params params {};
		params.ContainerWidth = ContainerWidth;
		params.ContainerHeight = ContainerHeight;
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CraftingComponent.BP_OnCraftRecipe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bCraftWasSuccess                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ECraftResult                                       Result                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCraftingComponent::BP_OnCraftRecipe(bool bCraftWasSuccess, ECraftResult Result)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CraftingComponent.BP_OnCraftRecipe");
		
		UCraftingComponent_BP_OnCraftRecipe_Params params {};
		params.bCraftWasSuccess = bCraftWasSuccess;
		params.Result = Result;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCraftingComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCraftingComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CraftingComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomAbilitySystemComponent.RemoveGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::RemoveGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomAbilitySystemComponent.RemoveGameplayCueLocal");
		
		UCustomAbilitySystemComponent_RemoveGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomAbilitySystemComponent.GetActiveGameplayEffectUIData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FActiveGameplayEffectHandle                 ActiveHandle                                               (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UGameplayEffectUIData* UCustomAbilitySystemComponent::GetActiveGameplayEffectUIData(const struct FActiveGameplayEffectHandle& ActiveHandle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomAbilitySystemComponent.GetActiveGameplayEffectUIData");
		
		UCustomAbilitySystemComponent_GetActiveGameplayEffectUIData_Params params {};
		params.ActiveHandle = ActiveHandle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomAbilitySystemComponent.ExecuteGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::ExecuteGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomAbilitySystemComponent.ExecuteGameplayCueLocal");
		
		UCustomAbilitySystemComponent_ExecuteGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomAbilitySystemComponent.CancelAbilitiesWithTags
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTagContainer                       WithTags                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::CancelAbilitiesWithTags(const struct FGameplayTagContainer& WithTags)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomAbilitySystemComponent.CancelAbilitiesWithTags");
		
		UCustomAbilitySystemComponent_CancelAbilitiesWithTags_Params params {};
		params.WithTags = WithTags;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomAbilitySystemComponent.AddGameplayCueLocal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                GameplayCueTag                                             (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayCueParameters                      GameplayCueParameters                                      (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void UCustomAbilitySystemComponent::AddGameplayCueLocal(const struct FGameplayTag& GameplayCueTag, const struct FGameplayCueParameters& GameplayCueParameters)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomAbilitySystemComponent.AddGameplayCueLocal");
		
		UCustomAbilitySystemComponent_AddGameplayCueLocal_Params params {};
		params.GameplayCueTag = GameplayCueTag;
		params.GameplayCueParameters = GameplayCueParameters;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomAbilitySystemComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomAbilitySystemComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CustomAbilitySystemComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomEngineSubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomEngineSubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CustomEngineSubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomGameplayAbility.SetAbilityLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Level                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::SetAbilityLevel(int32_t Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomGameplayAbility.SetAbilityLevel");
		
		UCustomGameplayAbility_SetAbilityLevel_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomGameplayAbility.GetModifiedAbilityStrength
	 * 		Flags  -> ()
	 */
	float UCustomGameplayAbility::GetModifiedAbilityStrength()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomGameplayAbility.GetModifiedAbilityStrength");
		
		UCustomGameplayAbility_GetModifiedAbilityStrength_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomGameplayAbility.ApplySetByCallerGameplayEffect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      GameplayEffect                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EffectLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayTag                                SetByCallerTag                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              SetByCallerAmount                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::ApplySetByCallerGameplayEffect(class AActor* Target, class UClass* GameplayEffect, float EffectLevel, const struct FGameplayTag& SetByCallerTag, float SetByCallerAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomGameplayAbility.ApplySetByCallerGameplayEffect");
		
		UCustomGameplayAbility_ApplySetByCallerGameplayEffect_Params params {};
		params.Target = Target;
		params.GameplayEffect = GameplayEffect;
		params.EffectLevel = EffectLevel;
		params.SetByCallerTag = SetByCallerTag;
		params.SetByCallerAmount = SetByCallerAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomGameplayAbility.ApplyGameplayEffectToTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      EffectToAdd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EffectLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::ApplyGameplayEffectToTarget(class UClass* EffectToAdd, class AActor* Target, float EffectLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomGameplayAbility.ApplyGameplayEffectToTarget");
		
		UCustomGameplayAbility_ApplyGameplayEffectToTarget_Params params {};
		params.EffectToAdd = EffectToAdd;
		params.Target = Target;
		params.EffectLevel = EffectLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomGameplayAbility.ApplyGameplayEffectToOwner
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UClass*                                      EffectToAdd                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              EffectLevel                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::ApplyGameplayEffectToOwner(class UClass* EffectToAdd, float EffectLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomGameplayAbility.ApplyGameplayEffectToOwner");
		
		UCustomGameplayAbility_ApplyGameplayEffectToOwner_Params params {};
		params.EffectToAdd = EffectToAdd;
		params.EffectLevel = EffectLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.CustomGameplayAbility.AddAsyncTaskToPool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UGameplayTask*                               Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UCustomGameplayAbility::AddAsyncTaskToPool(class UGameplayTask* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.CustomGameplayAbility.AddAsyncTaskToPool");
		
		UCustomGameplayAbility_AddAsyncTaskToPool_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UCustomGameplayAbility.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UCustomGameplayAbility::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.CustomGameplayAbility");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADeathController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADeathController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.DeathController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_TurnSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_TurnSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_TurnSpeed");
		
		UEquipmentAttributeSet_OnRep_TurnSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_StunResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_StunResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_StunResistance");
		
		UEquipmentAttributeSet_OnRep_StunResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_StaminaUsageMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_StaminaUsageMultiplier(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_StaminaUsageMultiplier");
		
		UEquipmentAttributeSet_OnRep_StaminaUsageMultiplier_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_ProjectileDamageReduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_ProjectileDamageReduction(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_ProjectileDamageReduction");
		
		UEquipmentAttributeSet_OnRep_ProjectileDamageReduction_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_MoveSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_MoveSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_MoveSpeed");
		
		UEquipmentAttributeSet_OnRep_MoveSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_LootSpeedMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_LootSpeedMultiplier(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_LootSpeedMultiplier");
		
		UEquipmentAttributeSet_OnRep_LootSpeedMultiplier_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_KickStaminaPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_KickStaminaPercentage(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_KickStaminaPercentage");
		
		UEquipmentAttributeSet_OnRep_KickStaminaPercentage_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_KickDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_KickDamage(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_KickDamage");
		
		UEquipmentAttributeSet_OnRep_KickDamage_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_JumpHeightMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_JumpHeightMultiplier(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_JumpHeightMultiplier");
		
		UEquipmentAttributeSet_OnRep_JumpHeightMultiplier_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_FistStaminaPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_FistStaminaPercentage(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_FistStaminaPercentage");
		
		UEquipmentAttributeSet_OnRep_FistStaminaPercentage_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_FistDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_FistDamage(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_FistDamage");
		
		UEquipmentAttributeSet_OnRep_FistDamage_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_FallDamageReduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_FallDamageReduction(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_FallDamageReduction");
		
		UEquipmentAttributeSet_OnRep_FallDamageReduction_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_DodgeSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_DodgeSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_DodgeSpeed");
		
		UEquipmentAttributeSet_OnRep_DodgeSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_DamageReduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_DamageReduction(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_DamageReduction");
		
		UEquipmentAttributeSet_OnRep_DamageReduction_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_CriticalDamageReduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_CriticalDamageReduction(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_CriticalDamageReduction");
		
		UEquipmentAttributeSet_OnRep_CriticalDamageReduction_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_CriticalDamageMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_CriticalDamageMultiplier(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_CriticalDamageMultiplier");
		
		UEquipmentAttributeSet_OnRep_CriticalDamageMultiplier_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_BreakBoneMagnitude
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_BreakBoneMagnitude(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_BreakBoneMagnitude");
		
		UEquipmentAttributeSet_OnRep_BreakBoneMagnitude_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_BluntDamageReduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_BluntDamageReduction(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_BluntDamageReduction");
		
		UEquipmentAttributeSet_OnRep_BluntDamageReduction_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_BlockDamageTaken
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_BlockDamageTaken(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_BlockDamageTaken");
		
		UEquipmentAttributeSet_OnRep_BlockDamageTaken_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_BlockDamageDealt
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_BlockDamageDealt(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_BlockDamageDealt");
		
		UEquipmentAttributeSet_OnRep_BlockDamageDealt_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_BleedResistance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_BleedResistance(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_BleedResistance");
		
		UEquipmentAttributeSet_OnRep_BleedResistance_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_BleedMagnitude
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_BleedMagnitude(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_BleedMagnitude");
		
		UEquipmentAttributeSet_OnRep_BleedMagnitude_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_BladeDamageReduction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_BladeDamageReduction(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_BladeDamageReduction");
		
		UEquipmentAttributeSet_OnRep_BladeDamageReduction_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_BaseDamage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_BaseDamage(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_BaseDamage");
		
		UEquipmentAttributeSet_OnRep_BaseDamage_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_AttackSpeedMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_AttackSpeedMultiplier(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_AttackSpeedMultiplier");
		
		UEquipmentAttributeSet_OnRep_AttackSpeedMultiplier_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.EquipmentAttributeSet.OnRep_ArmorWeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UEquipmentAttributeSet::OnRep_ArmorWeight(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.EquipmentAttributeSet.OnRep_ArmorWeight");
		
		UEquipmentAttributeSet_OnRep_ArmorWeight_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UEquipmentAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UEquipmentAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.EquipmentAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ExtractionPoint.SetPCVisibility
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Visible                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AExtractionPoint::SetPCVisibility(bool Visible)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ExtractionPoint.SetPCVisibility");
		
		AExtractionPoint_SetPCVisibility_Params params {};
		params.Visible = Visible;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ExtractionPoint.isCharacterAllowedToBeExtracted
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AExtractionPoint::isCharacterAllowedToBeExtracted(class AActor* Actor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ExtractionPoint.isCharacterAllowedToBeExtracted");
		
		AExtractionPoint_isCharacterAllowedToBeExtracted_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AExtractionPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AExtractionPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ExtractionPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.FoodAttributeSet.OnRep_PotionToxicity
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFoodAttributeSet::OnRep_PotionToxicity(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.FoodAttributeSet.OnRep_PotionToxicity");
		
		UFoodAttributeSet_OnRep_PotionToxicity_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.FoodAttributeSet.OnRep_MaximumFood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFoodAttributeSet::OnRep_MaximumFood(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.FoodAttributeSet.OnRep_MaximumFood");
		
		UFoodAttributeSet_OnRep_MaximumFood_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.FoodAttributeSet.OnRep_FoodRegeneration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFoodAttributeSet::OnRep_FoodRegeneration(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.FoodAttributeSet.OnRep_FoodRegeneration");
		
		UFoodAttributeSet_OnRep_FoodRegeneration_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.FoodAttributeSet.OnRep_FoodFullness
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFoodAttributeSet::OnRep_FoodFullness(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.FoodAttributeSet.OnRep_FoodFullness");
		
		UFoodAttributeSet_OnRep_FoodFullness_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.FoodAttributeSet.OnRep_FoodDrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFoodAttributeSet::OnRep_FoodDrain(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.FoodAttributeSet.OnRep_FoodDrain");
		
		UFoodAttributeSet_OnRep_FoodDrain_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.FoodAttributeSet.OnRep_CurrentFood
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UFoodAttributeSet::OnRep_CurrentFood(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.FoodAttributeSet.OnRep_CurrentFood");
		
		UFoodAttributeSet_OnRep_CurrentFood_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFoodAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFoodAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.FoodAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GASBlueprintFunctionLibrary.TryGetAttributeValueFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FGameplayAttribute                          Attribute                                                  (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EAttributeSearchType                               SearchType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ValueFound                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UGASBlueprintFunctionLibrary::TryGetAttributeValueFromActor(class AActor* Actor, const struct FGameplayAttribute& Attribute, EAttributeSearchType SearchType, bool* ValueFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GASBlueprintFunctionLibrary.TryGetAttributeValueFromActor");
		
		UGASBlueprintFunctionLibrary_TryGetAttributeValueFromActor_Params params {};
		params.Actor = Actor;
		params.Attribute = Attribute;
		params.SearchType = SearchType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ValueFound != nullptr)
			*ValueFound = params.ValueFound;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GASBlueprintFunctionLibrary.TryGetAbilitySystemComponentFromActor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      Actor                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               WasFound                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UAbilitySystemComponent* UGASBlueprintFunctionLibrary::TryGetAbilitySystemComponentFromActor(class AActor* Actor, bool* WasFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GASBlueprintFunctionLibrary.TryGetAbilitySystemComponentFromActor");
		
		UGASBlueprintFunctionLibrary_TryGetAbilitySystemComponentFromActor_Params params {};
		params.Actor = Actor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (WasFound != nullptr)
			*WasFound = params.WasFound;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGASBlueprintFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGASBlueprintFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.GASBlueprintFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.UpdateSegments
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            _segments                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericRadialMenuWidget::UpdateSegments(int32_t _segments)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.UpdateSegments");
		
		UGenericRadialMenuWidget_UpdateSegments_Params params {};
		params._segments = _segments;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.UpdateMaterialVisuals
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::UpdateMaterialVisuals()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.UpdateMaterialVisuals");
		
		UGenericRadialMenuWidget_UpdateMaterialVisuals_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.UpdateMaterials
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::UpdateMaterials()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.UpdateMaterials");
		
		UGenericRadialMenuWidget_UpdateMaterials_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.UpdateInput
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::UpdateInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.UpdateInput");
		
		UGenericRadialMenuWidget_UpdateInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.UpdateDirectionWithMouseCursor
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::UpdateDirectionWithMouseCursor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.UpdateDirectionWithMouseCursor");
		
		UGenericRadialMenuWidget_UpdateDirectionWithMouseCursor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.UpdateDirectionWithJoystick
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::UpdateDirectionWithJoystick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.UpdateDirectionWithJoystick");
		
		UGenericRadialMenuWidget_UpdateDirectionWithJoystick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.UpdateChildPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            _index                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericRadialMenuWidget::UpdateChildPosition(int32_t _index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.UpdateChildPosition");
		
		UGenericRadialMenuWidget_UpdateChildPosition_Params params {};
		params._index = _index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.SetInputDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   _input                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericRadialMenuWidget::SetInputDirection(const struct FVector2D& _input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.SetInputDirection");
		
		UGenericRadialMenuWidget_SetInputDirection_Params params {};
		params._input = _input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.SetIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            _index                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericRadialMenuWidget::SetIndex(int32_t _index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.SetIndex");
		
		UGenericRadialMenuWidget_SetIndex_Params params {};
		params._index = _index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.SetInDeadzone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               _inDeadzone                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericRadialMenuWidget::SetInDeadzone(bool _inDeadzone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.SetInDeadzone");
		
		UGenericRadialMenuWidget_SetInDeadzone_Params params {};
		params._inDeadzone = _inDeadzone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.SetCPPReferences
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::SetCPPReferences()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.SetCPPReferences");
		
		UGenericRadialMenuWidget_SetCPPReferences_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.SelectButtonPressed
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::SelectButtonPressed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.SelectButtonPressed");
		
		UGenericRadialMenuWidget_SelectButtonPressed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.RemoveQuickCommandAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            _index                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericRadialMenuWidget::RemoveQuickCommandAtIndex(int32_t _index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.RemoveQuickCommandAtIndex");
		
		UGenericRadialMenuWidget_RemoveQuickCommandAtIndex_Params params {};
		params._index = _index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.RemoveLabelAtIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            _index                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericRadialMenuWidget::RemoveLabelAtIndex(int32_t _index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.RemoveLabelAtIndex");
		
		UGenericRadialMenuWidget_RemoveLabelAtIndex_Params params {};
		params._index = _index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.RemoveChildWidgetFromRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 _widget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGenericRadialMenuWidget::RemoveChildWidgetFromRadialMenu(class UUserWidget* _widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.RemoveChildWidgetFromRadialMenu");
		
		UGenericRadialMenuWidget_RemoveChildWidgetFromRadialMenu_Params params {};
		params._widget = _widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.RemoveChildIndexFromRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            _indexToRemove                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGenericRadialMenuWidget::RemoveChildIndexFromRadialMenu(int32_t _indexToRemove)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.RemoveChildIndexFromRadialMenu");
		
		UGenericRadialMenuWidget_RemoveChildIndexFromRadialMenu_Params params {};
		params._indexToRemove = _indexToRemove;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.RegisterPlayerInput
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           _controller                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGenericRadialMenuWidget::RegisterPlayerInput(class APlayerController* _controller)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.RegisterPlayerInput");
		
		UGenericRadialMenuWidget_RegisterPlayerInput_Params params {};
		params._controller = _controller;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.FixMainRotation
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::FixMainRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.FixMainRotation");
		
		UGenericRadialMenuWidget_FixMainRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.FixInputRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector2D                                   _input                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D UGenericRadialMenuWidget::FixInputRotation(const struct FVector2D& _input)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.FixInputRotation");
		
		UGenericRadialMenuWidget_FixInputRotation_Params params {};
		params._input = _input;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.ClearChildren
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::ClearChildren()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.ClearChildren");
		
		UGenericRadialMenuWidget_ClearChildren_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.CenterMousePosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            _playerIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericRadialMenuWidget::CenterMousePosition(int32_t _playerIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.CenterMousePosition");
		
		UGenericRadialMenuWidget_CenterMousePosition_Params params {};
		params._playerIndex = _playerIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.AutoRegisterToInput
	 * 		Flags  -> ()
	 */
	void UGenericRadialMenuWidget::AutoRegisterToInput()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.AutoRegisterToInput");
		
		UGenericRadialMenuWidget_AutoRegisterToInput_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.AttachQuickCommandToChild
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 _child                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        _quickCommandKey                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenericRadialMenuWidget::AttachQuickCommandToChild(class UUserWidget* _child, const struct FKey& _quickCommandKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.AttachQuickCommandToChild");
		
		UGenericRadialMenuWidget_AttachQuickCommandToChild_Params params {};
		params._child = _child;
		params._quickCommandKey = _quickCommandKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.AddChildToRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 _widget                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGenericRadialMenuWidget::AddChildToRadialMenu(class UUserWidget* _widget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.AddChildToRadialMenu");
		
		UGenericRadialMenuWidget_AddChildToRadialMenu_Params params {};
		params._widget = _widget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.AddChildAndLabelToRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 _child                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 _label                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGenericRadialMenuWidget::AddChildAndLabelToRadialMenu(class UUserWidget* _child, class UUserWidget* _label)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.AddChildAndLabelToRadialMenu");
		
		UGenericRadialMenuWidget_AddChildAndLabelToRadialMenu_Params params {};
		params._child = _child;
		params._label = _label;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.GenericRadialMenuWidget.AddChildAndLabelAndQuickCommandToRadialMenu
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UUserWidget*                                 _child                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UUserWidget*                                 _label                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FKey                                        _quickCommandKey                                           (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UGenericRadialMenuWidget::AddChildAndLabelAndQuickCommandToRadialMenu(class UUserWidget* _child, class UUserWidget* _label, const struct FKey& _quickCommandKey)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.GenericRadialMenuWidget.AddChildAndLabelAndQuickCommandToRadialMenu");
		
		UGenericRadialMenuWidget_AddChildAndLabelAndQuickCommandToRadialMenu_Params params {};
		params._child = _child;
		params._label = _label;
		params._quickCommandKey = _quickCommandKey;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenericRadialMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenericRadialMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.GenericRadialMenuWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.HealthAttributeSet.OnRep_MaximumHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHealthAttributeSet::OnRep_MaximumHealth(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.HealthAttributeSet.OnRep_MaximumHealth");
		
		UHealthAttributeSet_OnRep_MaximumHealth_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.HealthAttributeSet.OnRep_HealthRegeneration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHealthAttributeSet::OnRep_HealthRegeneration(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.HealthAttributeSet.OnRep_HealthRegeneration");
		
		UHealthAttributeSet_OnRep_HealthRegeneration_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.HealthAttributeSet.OnRep_CurrentHealth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHealthAttributeSet::OnRep_CurrentHealth(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.HealthAttributeSet.OnRep_CurrentHealth");
		
		UHealthAttributeSet_OnRep_CurrentHealth_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.HealthAttributeSet.OnRep_BloodLoss
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UHealthAttributeSet::OnRep_BloodLoss(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.HealthAttributeSet.OnRep_BloodLoss");
		
		UHealthAttributeSet_OnRep_BloodLoss_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UHealthAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UHealthAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.HealthAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.UnequipSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         SourceComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetPositionX                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetPositionY                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bBlockRequest                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::UnequipSlot(EquipmentType SlotID, class UItem* TargetContainer, class UInventoryComponent* SourceComponent, int32_t TargetPositionX, int32_t TargetPositionY, bool bBlockRequest)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.UnequipSlot");
		
		UInventoryComponent_UnequipSlot_Params params {};
		params.SlotID = SlotID;
		params.TargetContainer = TargetContainer;
		params.SourceComponent = SourceComponent;
		params.TargetPositionX = TargetPositionX;
		params.TargetPositionY = TargetPositionY;
		params.bBlockRequest = bBlockRequest;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.UnequipConsumableIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::UnequipConsumableIndex(int32_t SlotID, const struct FIntVector& TargetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.UnequipConsumableIndex");
		
		UInventoryComponent_UnequipConsumableIndex_Params params {};
		params.SlotID = SlotID;
		params.TargetPosition = TargetPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.UnequipConsumable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::UnequipConsumable(class UItem* Item, const struct FIntVector& TargetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.UnequipConsumable");
		
		UInventoryComponent_UnequipConsumable_Params params {};
		params.Item = Item;
		params.TargetPosition = TargetPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.TimeoutAwaitingPlacement
	 * 		Flags  -> ()
	 */
	void UInventoryComponent::TimeoutAwaitingPlacement()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.TimeoutAwaitingPlacement");
		
		UInventoryComponent_TimeoutAwaitingPlacement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.SortItemsTier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::SortItemsTier(bool CalledByServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.SortItemsTier");
		
		UInventoryComponent_SortItemsTier_Params params {};
		params.CalledByServer = CalledByServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.SortItemsPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::SortItemsPrice(bool CalledByServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.SortItemsPrice");
		
		UInventoryComponent_SortItemsPrice_Params params {};
		params.CalledByServer = CalledByServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.SortContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESortStyle                                         Sort                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::SortContainer(class UItem* TargetContainer, ESortStyle Sort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.SortContainer");
		
		UInventoryComponent_SortContainer_Params params {};
		params.TargetContainer = TargetContainer;
		params.Sort = Sort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.SmartSplitStackableItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnResult                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UItem* UInventoryComponent::SmartSplitStackableItem(class UItem* Source, int32_t Num, bool CalledByServer, bool ReturnResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.SmartSplitStackableItem");
		
		UInventoryComponent_SmartSplitStackableItem_Params params {};
		params.Source = Source;
		params.Num = Num;
		params.CalledByServer = CalledByServer;
		params.ReturnResult = ReturnResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.SmartEquipInSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnResult                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UItem* UInventoryComponent::SmartEquipInSlot(class UItem* Item, bool ReturnResult)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.SmartEquipInSlot");
		
		UInventoryComponent_SmartEquipInSlot_Params params {};
		params.Item = Item;
		params.ReturnResult = ReturnResult;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.SmartEquipInConsumables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::SmartEquipInConsumables(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.SmartEquipInConsumables");
		
		UInventoryComponent_SmartEquipInConsumables_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.SmartChooseAmmo
	 * 		Flags  -> ()
	 */
	class UItem* UInventoryComponent::SmartChooseAmmo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.SmartChooseAmmo");
		
		UInventoryComponent_SmartChooseAmmo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.SetItemContainerDimensions
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewWidth                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      NewHeight                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::SetItemContainerDimensions(class UItem* Item, unsigned char NewWidth, unsigned char NewHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.SetItemContainerDimensions");
		
		UInventoryComponent_SetItemContainerDimensions_Params params {};
		params.Item = Item;
		params.NewWidth = NewWidth;
		params.NewHeight = NewHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_UnequipEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         SourceComponent                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_UnequipEquipment(EquipmentType SlotID, class UItem* TargetContainer, class UInventoryComponent* SourceComponent, const struct FIntVector& TargetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_UnequipEquipment");
		
		UInventoryComponent_Server_UnequipEquipment_Params params {};
		params.SlotID = SlotID;
		params.TargetContainer = TargetContainer;
		params.SourceComponent = SourceComponent;
		params.TargetPosition = TargetPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_UnequipConsumable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_UnequipConsumable(int32_t SlotID, const struct FIntVector& TargetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_UnequipConsumable");
		
		UInventoryComponent_Server_UnequipConsumable_Params params {};
		params.SlotID = SlotID;
		params.TargetPosition = TargetPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_TrySplitStackedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumToSplit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_TrySplitStackedItem(class UItem* Source, int32_t NumToSplit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_TrySplitStackedItem");
		
		UInventoryComponent_Server_TrySplitStackedItem_Params params {};
		params.Source = Source;
		params.NumToSplit = NumToSplit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_ToggleInsurance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldBeInsured                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_ToggleInsurance(class UItem* TargetItem, bool bShouldBeInsured)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_ToggleInsurance");
		
		UInventoryComponent_Server_ToggleInsurance_Params params {};
		params.TargetItem = TargetItem;
		params.bShouldBeInsured = bShouldBeInsured;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_SortItemsTier
	 * 		Flags  -> ()
	 */
	void UInventoryComponent::Server_SortItemsTier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_SortItemsTier");
		
		UInventoryComponent_Server_SortItemsTier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_SortItemsPrice
	 * 		Flags  -> ()
	 */
	void UInventoryComponent::Server_SortItemsPrice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_SortItemsPrice");
		
		UInventoryComponent_Server_SortItemsPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_SortActualPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESortStyle                                         Sort                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_SortActualPosition(class UItem* TargetContainer, ESortStyle Sort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_SortActualPosition");
		
		UInventoryComponent_Server_SortActualPosition_Params params {};
		params.TargetContainer = TargetContainer;
		params.Sort = Sort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_RequestExtraData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         Inventory                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_RequestExtraData(class UInventoryComponent* Inventory, class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_RequestExtraData");
		
		UInventoryComponent_Server_RequestExtraData_Params params {};
		params.Inventory = Inventory;
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_PayInsurance
	 * 		Flags  -> ()
	 */
	void UInventoryComponent::Server_PayInsurance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_PayInsurance");
		
		UInventoryComponent_Server_PayInsurance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_Item_UpdatePlacement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      RotationDiv                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_Item_UpdatePlacement(class UItem* Target, unsigned char X, unsigned char Y, unsigned char RotationDiv)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_Item_UpdatePlacement");
		
		UInventoryComponent_Server_Item_UpdatePlacement_Params params {};
		params.Target = Target;
		params.X = X;
		params.Y = Y;
		params.RotationDiv = RotationDiv;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_Item_Split
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Num                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_Item_Split(class UItem* Source, int32_t Num)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_Item_Split");
		
		UInventoryComponent_Server_Item_Split_Params params {};
		params.Source = Source;
		params.Num = Num;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_Item_RemoveUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       Upgrade                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_Item_RemoveUpgrade(class UItem* TargetItem, class UItem* Upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_Item_RemoveUpgrade");
		
		UInventoryComponent_Server_Item_RemoveUpgrade_Params params {};
		params.TargetItem = TargetItem;
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_Item_PlaceInWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_Item_PlaceInWorld(class UItem* TargetItem, const struct FVector& WorldPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_Item_PlaceInWorld");
		
		UInventoryComponent_Server_Item_PlaceInWorld_Params params {};
		params.TargetItem = TargetItem;
		params.WorldPosition = WorldPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_Item_PlaceInContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnResult                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_Item_PlaceInContainer(class UItem* TargetItem, class UItem* TargetContainer, const struct FIntVector& TargetPosition, bool ReturnResult, int32_t TargetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_Item_PlaceInContainer");
		
		UInventoryComponent_Server_Item_PlaceInContainer_Params params {};
		params.TargetItem = TargetItem;
		params.TargetContainer = TargetContainer;
		params.TargetPosition = TargetPosition;
		params.ReturnResult = ReturnResult;
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_Item_MergeInto
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       Destination                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_Item_MergeInto(class UItem* Source, class UItem* Destination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_Item_MergeInto");
		
		UInventoryComponent_Server_Item_MergeInto_Params params {};
		params.Source = Source;
		params.Destination = Destination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_Item_AddUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       Upgrade                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_Item_AddUpgrade(class UItem* TargetItem, class UItem* Upgrade)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_Item_AddUpgrade");
		
		UInventoryComponent_Server_Item_AddUpgrade_Params params {};
		params.TargetItem = TargetItem;
		params.Upgrade = Upgrade;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_InventoryItem_Place_Trade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         TargetInventory                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         SourceInventory                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_InventoryItem_Place_Trade(class UItem* TargetItem, class UItem* TargetContainer, class UInventoryComponent* TargetInventory, class UInventoryComponent* SourceInventory, const struct FIntVector& TargetPosition, int32_t TargetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_InventoryItem_Place_Trade");
		
		UInventoryComponent_Server_InventoryItem_Place_Trade_Params params {};
		params.TargetItem = TargetItem;
		params.TargetContainer = TargetContainer;
		params.TargetInventory = TargetInventory;
		params.SourceInventory = SourceInventory;
		params.TargetPosition = TargetPosition;
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_InventoryItem_Equip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         TargetInventory                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         SourceInventory                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_InventoryItem_Equip(class UItem* TargetItem, EquipmentType SlotID, class UInventoryComponent* TargetInventory, class UInventoryComponent* SourceInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_InventoryItem_Equip");
		
		UInventoryComponent_Server_InventoryItem_Equip_Params params {};
		params.TargetItem = TargetItem;
		params.SlotID = SlotID;
		params.TargetInventory = TargetInventory;
		params.SourceInventory = SourceInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_EquipEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnResult                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         EquipComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_EquipEquipment(class UItem* Item, EquipmentType SlotID, bool ReturnResult, class UInventoryComponent* EquipComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_EquipEquipment");
		
		UInventoryComponent_Server_EquipEquipment_Params params {};
		params.Item = Item;
		params.SlotID = SlotID;
		params.ReturnResult = ReturnResult;
		params.EquipComponent = EquipComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_EquipConsumable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_EquipConsumable(class UItem* Item, int32_t SlotID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_EquipConsumable");
		
		UInventoryComponent_Server_EquipConsumable_Params params {};
		params.Item = Item;
		params.SlotID = SlotID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Server_AssignCustomName
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FText                                        NewCustomName                                              (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Server_AssignCustomName(class UItem* Item, const class FText& NewCustomName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Server_AssignCustomName");
		
		UInventoryComponent_Server_AssignCustomName_Params params {};
		params.Item = Item;
		params.NewCustomName = NewCustomName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.SendStatsToGAS
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemStats                                  PassiveStats                                               (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::SendStatsToGAS(const struct FItemStats& PassiveStats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.SendStatsToGAS");
		
		UInventoryComponent_SendStatsToGAS_Params params {};
		params.PassiveStats = PassiveStats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.RollDropTable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::RollDropTable(const class FName& RowName, class UItem* TargetContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.RollDropTable");
		
		UInventoryComponent_RollDropTable_Params params {};
		params.RowName = RowName;
		params.TargetContainer = TargetContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.RemoveItemUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BaseItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       Upgrade                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::RemoveItemUpgrade(class UItem* BaseItem, class UItem* Upgrade, bool CalledByServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.RemoveItemUpgrade");
		
		UInventoryComponent_RemoveItemUpgrade_Params params {};
		params.BaseItem = BaseItem;
		params.Upgrade = Upgrade;
		params.CalledByServer = CalledByServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.PositionItemInContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BaseItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      RotationDiv                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::PositionItemInContainer(class UItem* BaseItem, unsigned char X, unsigned char Y, unsigned char RotationDiv, bool CalledByServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.PositionItemInContainer");
		
		UInventoryComponent_PositionItemInContainer_Params params {};
		params.BaseItem = BaseItem;
		params.X = X;
		params.Y = Y;
		params.RotationDiv = RotationDiv;
		params.CalledByServer = CalledByServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.PlaceItemInWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     WorldPosition                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::PlaceItemInWorld(class UItem* TargetItem, const struct FVector& WorldPosition, bool CalledByServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.PlaceItemInWorld");
		
		UInventoryComponent_PlaceItemInWorld_Params params {};
		params.TargetItem = TargetItem;
		params.WorldPosition = WorldPosition;
		params.CalledByServer = CalledByServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.PlaceItemInContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnResult                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::PlaceItemInContainer(class UItem* TargetItem, class UItem* TargetContainer, const struct FIntVector& TargetPosition, bool CalledByServer, bool ReturnResult, int32_t TargetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.PlaceItemInContainer");
		
		UInventoryComponent_PlaceItemInContainer_Params params {};
		params.TargetItem = TargetItem;
		params.TargetContainer = TargetContainer;
		params.TargetPosition = TargetPosition;
		params.CalledByServer = CalledByServer;
		params.ReturnResult = ReturnResult;
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.OnWeaponChange
	 * 		Flags  -> ()
	 */
	void UInventoryComponent::OnWeaponChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.OnWeaponChange");
		
		UInventoryComponent_OnWeaponChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.OnRep_OnResourcesUpdate
	 * 		Flags  -> ()
	 */
	void UInventoryComponent::OnRep_OnResourcesUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.OnRep_OnResourcesUpdate");
		
		UInventoryComponent_OnRep_OnResourcesUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.OnRep_OnInventoryUpdate
	 * 		Flags  -> ()
	 */
	void UInventoryComponent::OnRep_OnInventoryUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.OnRep_OnInventoryUpdate");
		
		UInventoryComponent_OnRep_OnInventoryUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.OnRep_OnEquipmentUpdate
	 * 		Flags  -> ()
	 */
	void UInventoryComponent::OnRep_OnEquipmentUpdate()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.OnRep_OnEquipmentUpdate");
		
		UInventoryComponent_OnRep_OnEquipmentUpdate_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.LoadInventory
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UDataTable*                                  InventoryTable                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UDataTable*                                  ItemsTable                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              DurabilityPercent                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::LoadInventory(class UDataTable* InventoryTable, class UDataTable* ItemsTable, float DurabilityPercent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.LoadInventory");
		
		UInventoryComponent_LoadInventory_Params params {};
		params.InventoryTable = InventoryTable;
		params.ItemsTable = ItemsTable;
		params.DurabilityPercent = DurabilityPercent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.IsShop
	 * 		Flags  -> ()
	 */
	bool UInventoryComponent::IsShop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.IsShop");
		
		UInventoryComponent_IsShop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.InventoryItemPlace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         TargetInventory                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         SourceInventory                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TargetRotation                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::InventoryItemPlace(class UItem* TargetItem, class UItem* TargetContainer, class UInventoryComponent* TargetInventory, class UInventoryComponent* SourceInventory, const struct FIntVector& TargetPosition, int32_t TargetRotation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.InventoryItemPlace");
		
		UInventoryComponent_InventoryItemPlace_Params params {};
		params.TargetItem = TargetItem;
		params.TargetContainer = TargetContainer;
		params.TargetInventory = TargetInventory;
		params.SourceInventory = SourceInventory;
		params.TargetPosition = TargetPosition;
		params.TargetRotation = TargetRotation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.InventoryItemEquip
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         TargetInventory                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         SourceInventory                                            (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::InventoryItemEquip(class UItem* TargetItem, EquipmentType SlotID, class UInventoryComponent* TargetInventory, class UInventoryComponent* SourceInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.InventoryItemEquip");
		
		UInventoryComponent_InventoryItemEquip_Params params {};
		params.TargetItem = TargetItem;
		params.SlotID = SlotID;
		params.TargetInventory = TargetInventory;
		params.SourceInventory = SourceInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetTotalWorthOfContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryComponent::GetTotalWorthOfContainer(class UItem* TargetContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetTotalWorthOfContainer");
		
		UInventoryComponent_GetTotalWorthOfContainer_Params params {};
		params.TargetContainer = TargetContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetStatsWithUpgrades
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FItemStats UInventoryComponent::GetStatsWithUpgrades(class UItem* TargetItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetStatsWithUpgrades");
		
		UInventoryComponent_GetStatsWithUpgrades_Params params {};
		params.TargetItem = TargetItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetRootItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItem*>                               Items                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         ShopClientInventory                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::GetRootItems(TArray<class UItem*>* Items, class UInventoryComponent* ShopClientInventory)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetRootItems");
		
		UInventoryComponent_GetRootItems_Params params {};
		params.ShopClientInventory = ShopClientInventory;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetResourceSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UItem* UInventoryComponent::GetResourceSlot(int32_t SlotID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetResourceSlot");
		
		UInventoryComponent_GetResourceSlot_Params params {};
		params.SlotID = SlotID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetOwningCombatEntity
	 * 		Flags  -> ()
	 */
	class ACombatEntity* UInventoryComponent::GetOwningCombatEntity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetOwningCombatEntity");
		
		UInventoryComponent_GetOwningCombatEntity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetMaxCapacity
	 * 		Flags  -> ()
	 */
	int32_t UInventoryComponent::GetMaxCapacity()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetMaxCapacity");
		
		UInventoryComponent_GetMaxCapacity_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetItemTransformedWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BaseItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char UInventoryComponent::GetItemTransformedWidth(class UItem* BaseItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetItemTransformedWidth");
		
		UInventoryComponent_GetItemTransformedWidth_Params params {};
		params.BaseItem = BaseItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetItemTransformedShopPrice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BaseItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryComponent::GetItemTransformedShopPrice(class UItem* BaseItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetItemTransformedShopPrice");
		
		UInventoryComponent_GetItemTransformedShopPrice_Params params {};
		params.BaseItem = BaseItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetItemTransformedHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BaseItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	unsigned char UInventoryComponent::GetItemTransformedHeight(class UItem* BaseItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetItemTransformedHeight");
		
		UInventoryComponent_GetItemTransformedHeight_Params params {};
		params.BaseItem = BaseItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetItemsInsideContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryComponent::GetItemsInsideContainer(class UItem* TargetContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetItemsInsideContainer");
		
		UInventoryComponent_GetItemsInsideContainer_Params params {};
		params.TargetContainer = TargetContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetItemSharedData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BaseItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FItemTable UInventoryComponent::GetItemSharedData(class UItem* BaseItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetItemSharedData");
		
		UInventoryComponent_GetItemSharedData_Params params {};
		params.BaseItem = BaseItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetItemsByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               ItemsFound                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::GetItemsByIndex(int32_t ItemIndex, TArray<class UItem*>* ItemsFound, class UItem* TargetContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetItemsByIndex");
		
		UInventoryComponent_GetItemsByIndex_Params params {};
		params.ItemIndex = ItemIndex;
		params.TargetContainer = TargetContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsFound != nullptr)
			*ItemsFound = params.ItemsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetItemsByClass
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      EquipClass                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               ItemsFound                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::GetItemsByClass(EquipmentType EquipClass, TArray<class UItem*>* ItemsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetItemsByClass");
		
		UInventoryComponent_GetItemsByClass_Params params {};
		params.EquipClass = EquipClass;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsFound != nullptr)
			*ItemsFound = params.ItemsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               ItemsFound                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::GetItems(const class FName& RowName, TArray<class UItem*>* ItemsFound)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetItems");
		
		UInventoryComponent_GetItems_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemsFound != nullptr)
			*ItemsFound = params.ItemsFound;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetInventoryContainerSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      ContainerWidth                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ContainerHeight                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::GetInventoryContainerSize(unsigned char* ContainerWidth, unsigned char* ContainerHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetInventoryContainerSize");
		
		UInventoryComponent_GetInventoryContainerSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContainerWidth != nullptr)
			*ContainerWidth = params.ContainerWidth;
		if (ContainerHeight != nullptr)
			*ContainerHeight = params.ContainerHeight;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetInventory
	 * 		Flags  -> ()
	 */
	class UItem* UInventoryComponent::GetInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetInventory");
		
		UInventoryComponent_GetInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetEquipmentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UItem* UInventoryComponent::GetEquipmentSlot(EquipmentType SlotID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetEquipmentSlot");
		
		UInventoryComponent_GetEquipmentSlot_Params params {};
		params.SlotID = SlotID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetDurabilityMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Durability                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UInventoryComponent::GetDurabilityMultiplier(unsigned char Durability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetDurabilityMultiplier");
		
		UInventoryComponent_GetDurabilityMultiplier_Params params {};
		params.Durability = Durability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetAmountOfItemsByIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryComponent::GetAmountOfItemsByIndex(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetAmountOfItemsByIndex");
		
		UInventoryComponent_GetAmountOfItemsByIndex_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.GetAllItemsOwnedByComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       ComponentRoot                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               AllItems                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::GetAllItemsOwnedByComponent(class UItem* ComponentRoot, TArray<class UItem*>* AllItems)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.GetAllItemsOwnedByComponent");
		
		UInventoryComponent_GetAllItemsOwnedByComponent_Params params {};
		params.ComponentRoot = ComponentRoot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (AllItems != nullptr)
			*AllItems = params.AllItems;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.FindSameItemInContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UItem* UInventoryComponent::FindSameItemInContainer(class UItem* TargetItem, class UItem* TargetContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.FindSameItemInContainer");
		
		UInventoryComponent_FindSameItemInContainer_Params params {};
		params.TargetItem = TargetItem;
		params.TargetContainer = TargetContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.FindItemSpaceInContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FIntVector UInventoryComponent::FindItemSpaceInContainer(class UItem* TargetItem, class UItem* TargetContainer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.FindItemSpaceInContainer");
		
		UInventoryComponent_FindItemSpaceInContainer_Params params {};
		params.TargetItem = TargetItem;
		params.TargetContainer = TargetContainer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.FindItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UInventoryComponent::FindItems(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.FindItems");
		
		UInventoryComponent_FindItems_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.FilterRootItems
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class UItem*>                               Items                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		class FString                                      SearchFilter                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::FilterRootItems(TArray<class UItem*>* Items, const class FString& SearchFilter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.FilterRootItems");
		
		UInventoryComponent_FilterRootItems_Params params {};
		params.SearchFilter = SearchFilter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Items != nullptr)
			*Items = params.Items;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.EquipInSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               ReturnResult                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         EquipComponent                                             (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UItem* UInventoryComponent::EquipInSlot(class UItem* Item, EquipmentType SlotID, bool ReturnResult, class UInventoryComponent* EquipComponent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.EquipInSlot");
		
		UInventoryComponent_EquipInSlot_Params params {};
		params.Item = Item;
		params.SlotID = SlotID;
		params.ReturnResult = ReturnResult;
		params.EquipComponent = EquipComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.EquipInConsumables
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::EquipInConsumables(class UItem* Item, int32_t SlotID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.EquipInConsumables");
		
		UInventoryComponent_EquipInConsumables_Params params {};
		params.Item = Item;
		params.SlotID = SlotID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.DamageEquipmentSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      DamageAmount                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::DamageEquipmentSlot(EquipmentType SlotID, unsigned char DamageAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.DamageEquipmentSlot");
		
		UInventoryComponent_DamageEquipmentSlot_Params params {};
		params.SlotID = SlotID;
		params.DamageAmount = DamageAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.CreateItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        RowName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UItem* UInventoryComponent::CreateItem(const class FName& RowName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.CreateItem");
		
		UInventoryComponent_CreateItem_Params params {};
		params.RowName = RowName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Client_SortRenderPosition
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ESortStyle                                         Sort                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Client_SortRenderPosition(class UItem* TargetContainer, ESortStyle Sort)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Client_SortRenderPosition");
		
		UInventoryComponent_Client_SortRenderPosition_Params params {};
		params.TargetContainer = TargetContainer;
		params.Sort = Sort;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Client_ServerFinishedRotation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       _item                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Client_ServerFinishedRotation(class UItem* _item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Client_ServerFinishedRotation");
		
		UInventoryComponent_Client_ServerFinishedRotation_Params params {};
		params._item = _item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Client_OnExtraDataReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FItemExtraData>                      ExtraDataArray                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Client_OnExtraDataReceived(TArray<struct FItemExtraData> ExtraDataArray)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Client_OnExtraDataReceived");
		
		UInventoryComponent_Client_OnExtraDataReceived_Params params {};
		params.ExtraDataArray = ExtraDataArray;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Client_InventoryItem_Move_Result
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EInventoryItemMoveResult                           InventoryItemMoveResult                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UInventoryComponent*                         SourceInventoryToUpdate                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       SourceItemToUpdate                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Client_InventoryItem_Move_Result(EInventoryItemMoveResult InventoryItemMoveResult, class UInventoryComponent* SourceInventoryToUpdate, class UItem* SourceItemToUpdate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Client_InventoryItem_Move_Result");
		
		UInventoryComponent_Client_InventoryItem_Move_Result_Params params {};
		params.InventoryItemMoveResult = InventoryItemMoveResult;
		params.SourceInventoryToUpdate = SourceInventoryToUpdate;
		params.SourceItemToUpdate = SourceItemToUpdate;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Client_InsuranceResponse
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bInsurancePaymentSuccess                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       InsuredItem                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Client_InsuranceResponse(bool bInsurancePaymentSuccess, class UItem* InsuredItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Client_InsuranceResponse");
		
		UInventoryComponent_Client_InsuranceResponse_Params params {};
		params.bInsurancePaymentSuccess = bInsurancePaymentSuccess;
		params.InsuredItem = InsuredItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.Client_EquipEquipment
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EquipmentType                                      SlotID                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::Client_EquipEquipment(class UItem* Item, EquipmentType SlotID)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.Client_EquipEquipment");
		
		UInventoryComponent_Client_EquipEquipment_Params params {};
		params.Item = Item;
		params.SlotID = SlotID;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.CleanComponentOfItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Item                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::CleanComponentOfItem(class UItem* Item)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.CleanComponentOfItem");
		
		UInventoryComponent_CleanComponentOfItem_Params params {};
		params.Item = Item;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.CheckOnlyItemContainerCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	ECollisonInventoryResult UInventoryComponent::CheckOnlyItemContainerCollision(class UItem* TargetItem, class UItem* TargetContainer, const struct FIntVector& TargetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.CheckOnlyItemContainerCollision");
		
		UInventoryComponent_CheckOnlyItemContainerCollision_Params params {};
		params.TargetItem = TargetItem;
		params.TargetContainer = TargetContainer;
		params.TargetPosition = TargetPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.CheckItemContainerCollisionForItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UItem* UInventoryComponent::CheckItemContainerCollisionForItem(class UItem* TargetItem, class UItem* TargetContainer, const struct FIntVector& TargetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.CheckItemContainerCollisionForItem");
		
		UInventoryComponent_CheckItemContainerCollisionForItem_Params params {};
		params.TargetItem = TargetItem;
		params.TargetContainer = TargetContainer;
		params.TargetPosition = TargetPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.CheckContainerEnoughSpaceSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemWidth                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::CheckContainerEnoughSpaceSize(class UItem* TargetContainer, int32_t ItemWidth, int32_t ItemHeight)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.CheckContainerEnoughSpaceSize");
		
		UInventoryComponent_CheckContainerEnoughSpaceSize_Params params {};
		params.TargetContainer = TargetContainer;
		params.ItemWidth = ItemWidth;
		params.ItemHeight = ItemHeight;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.CheckContainerEnoughSpace
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UItem*>                               Items                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::CheckContainerEnoughSpace(class UItem* TargetContainer, TArray<class UItem*> Items)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.CheckContainerEnoughSpace");
		
		UInventoryComponent_CheckContainerEnoughSpace_Params params {};
		params.TargetContainer = TargetContainer;
		params.Items = Items;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.ChangeItemStack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Change                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::ChangeItemStack(class UItem* TargetItem, int32_t Change)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.ChangeItemStack");
		
		UInventoryComponent_ChangeItemStack_Params params {};
		params.TargetItem = TargetItem;
		params.Change = Change;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.BP_ToggleInsurance
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bShouldBeInsured                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::BP_ToggleInsurance(class UItem* TargetItem, bool bShouldBeInsured)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.BP_ToggleInsurance");
		
		UInventoryComponent_BP_ToggleInsurance_Params params {};
		params.TargetItem = TargetItem;
		params.bShouldBeInsured = bShouldBeInsured;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.BP_PayInsurance
	 * 		Flags  -> ()
	 */
	void UInventoryComponent::BP_PayInsurance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.BP_PayInsurance");
		
		UInventoryComponent_BP_PayInsurance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.AsyncTrySplitStackedItem
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Source                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumToSplit                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UInventoryComponent::AsyncTrySplitStackedItem(class UItem* Source, int32_t NumToSplit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.AsyncTrySplitStackedItem");
		
		UInventoryComponent_AsyncTrySplitStackedItem_Params params {};
		params.Source = Source;
		params.NumToSplit = NumToSplit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.InventoryComponent.AddItemUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       BaseItem                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       Upgrade                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UInventoryComponent::AddItemUpgrade(class UItem* BaseItem, class UItem* Upgrade, bool CalledByServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.InventoryComponent.AddItemUpgrade");
		
		UInventoryComponent_AddItemUpgrade_Params params {};
		params.BaseItem = BaseItem;
		params.Upgrade = Upgrade;
		params.CalledByServer = CalledByServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UInventoryComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UInventoryComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.InventoryComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialInput.GetQuickCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                _acceptedKeys                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKey>                                _hitKeys                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void URadialInput::GetQuickCommand(TArray<struct FKey> _acceptedKeys, TArray<struct FKey>* _hitKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialInput.GetQuickCommand");
		
		URadialInput_GetQuickCommand_Params params {};
		params._acceptedKeys = _acceptedKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_hitKeys != nullptr)
			*_hitKeys = params._hitKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialInput.GetJoystickDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoystickType                                      _joystick                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D URadialInput::GetJoystickDirection(EJoystickType _joystick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialInput.GetJoystickDirection");
		
		URadialInput_GetJoystickDirection_Params params {};
		params._joystick = _joystick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialInput.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialInput::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.RadialInput");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialSlot.OnUnhighlight
	 * 		Flags  -> ()
	 */
	void URadialSlot::OnUnhighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialSlot.OnUnhighlight");
		
		URadialSlot_OnUnhighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialSlot.OnSelected
	 * 		Flags  -> ()
	 */
	void URadialSlot::OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialSlot.OnSelected");
		
		URadialSlot_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialSlot.OnHighlight
	 * 		Flags  -> ()
	 */
	void URadialSlot::OnHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialSlot.OnHighlight");
		
		URadialSlot_OnHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialSlot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialSlot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.RadialSlot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.SumStats
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemStats                                  Result                                                     (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		struct FItemStats                                  NewStats                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      TestDurability                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UItem::SumStats(struct FItemStats* Result, struct FItemStats* NewStats, unsigned char TestDurability)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.SumStats");
		
		UItem_SumStats_Params params {};
		params.TestDurability = TestDurability;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Result != nullptr)
			*Result = params.Result;
		if (NewStats != nullptr)
			*NewStats = params.NewStats;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.Rollback
	 * 		Flags  -> ()
	 */
	void UItem::Rollback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.Rollback");
		
		UItem_Rollback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.PlaceInContainer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UItem::PlaceInContainer(class UItem* TargetContainer, const struct FIntVector& TargetPosition, bool CalledByServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.PlaceInContainer");
		
		UItem_PlaceInContainer_Params params {};
		params.TargetContainer = TargetContainer;
		params.TargetPosition = TargetPosition;
		params.CalledByServer = CalledByServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_Upgrades
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_Upgrades()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_Upgrades");
		
		UItem_OnRep_Upgrades_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_StackSize
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_StackSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_StackSize");
		
		UItem_OnRep_StackSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_ServiceFlags
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_ServiceFlags()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_ServiceFlags");
		
		UItem_OnRep_ServiceFlags_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_Rotation
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_Rotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_Rotation");
		
		UItem_OnRep_Rotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_ReplicateIndex
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_ReplicateIndex()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_ReplicateIndex");
		
		UItem_OnRep_ReplicateIndex_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_Quality
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_Quality()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_Quality");
		
		UItem_OnRep_Quality_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_Position
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_Position()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_Position");
		
		UItem_OnRep_Position_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_OwnerContainer
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_OwnerContainer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_OwnerContainer");
		
		UItem_OnRep_OwnerContainer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_IsInsured
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               OldValue                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UItem::OnRep_IsInsured(bool OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_IsInsured");
		
		UItem_OnRep_IsInsured_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_Durability
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_Durability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_Durability");
		
		UItem_OnRep_Durability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnRep_Container
	 * 		Flags  -> ()
	 */
	void UItem::OnRep_Container()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnRep_Container");
		
		UItem_OnRep_Container_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.OnDestroyed
	 * 		Flags  -> ()
	 */
	void UItem::OnDestroyed()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.OnDestroyed");
		
		UItem_OnDestroyed_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.Init
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemTable                                  ItemTemplate                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UItem::Init(struct FItemTable* ItemTemplate)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.Init");
		
		UItem_Init_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ItemTemplate != nullptr)
			*ItemTemplate = params.ItemTemplate;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetTransformedWidth
	 * 		Flags  -> ()
	 */
	unsigned char UItem::GetTransformedWidth()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetTransformedWidth");
		
		UItem_GetTransformedWidth_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetTransformedStats
	 * 		Flags  -> ()
	 */
	struct FItemStats UItem::GetTransformedStats()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetTransformedStats");
		
		UItem_GetTransformedStats_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetTransformedShopPrice
	 * 		Flags  -> ()
	 */
	int32_t UItem::GetTransformedShopPrice()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetTransformedShopPrice");
		
		UItem_GetTransformedShopPrice_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetTransformedHeight
	 * 		Flags  -> ()
	 */
	unsigned char UItem::GetTransformedHeight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetTransformedHeight");
		
		UItem_GetTransformedHeight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetStackSize
	 * 		Flags  -> ()
	 */
	int32_t UItem::GetStackSize()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetStackSize");
		
		UItem_GetStackSize_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetSharedData
	 * 		Flags  -> ()
	 */
	struct FItemTable UItem::GetSharedData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetSharedData");
		
		UItem_GetSharedData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetRotation
	 * 		Flags  -> ()
	 */
	int32_t UItem::GetRotation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetRotation");
		
		UItem_GetRotation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetPosition
	 * 		Flags  -> ()
	 */
	struct FIntVector UItem::GetPosition()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetPosition");
		
		UItem_GetPosition_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetOwningActor
	 * 		Flags  -> ()
	 */
	class AActor* UItem::GetOwningActor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetOwningActor");
		
		UItem_GetOwningActor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetItemStat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemStatType                                      Stat                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UItem::GetItemStat(EItemStatType Stat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetItemStat");
		
		UItem_GetItemStat_Params params {};
		params.Stat = Stat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GetDurability
	 * 		Flags  -> ()
	 */
	unsigned char UItem::GetDurability()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GetDurability");
		
		UItem_GetDurability_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.GenerateDescription
	 * 		Flags  -> ()
	 */
	class FText UItem::GenerateDescription()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.GenerateDescription");
		
		UItem_GenerateDescription_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.Destroy
	 * 		Flags  -> ()
	 */
	void UItem::Destroy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.Destroy");
		
		UItem_Destroy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.Copy
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       _base                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UItem*                                       _target                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UItem::Copy(class UItem* _base, class UItem* _target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.Copy");
		
		UItem_Copy_Params params {};
		params._base = _base;
		params._target = _target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.Client_OnServerRequestRollback
	 * 		Flags  -> ()
	 */
	void UItem::Client_OnServerRequestRollback()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.Client_OnServerRequestRollback");
		
		UItem_Client_OnServerRequestRollback_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.CheckContainerCollision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       TargetContainer                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  TargetPosition                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UItem::CheckContainerCollision(class UItem* TargetContainer, const struct FIntVector& TargetPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.CheckContainerCollision");
		
		UItem_CheckContainerCollision_Params params {};
		params.TargetContainer = TargetContainer;
		params.TargetPosition = TargetPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.Item.AddUpgrade
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       Upgrade                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               CalledByServer                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UItem::AddUpgrade(class UItem* Upgrade, bool CalledByServer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.Item.AddUpgrade");
		
		UItem_AddUpgrade_Params params {};
		params.Upgrade = Upgrade;
		params.CalledByServer = CalledByServer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.Item");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AItemActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AItemActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ItemActor");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ItemContainer.OnInventoryPlaced
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UItem*                                       PlacedItem                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AItemContainer::OnInventoryPlaced(class UItem* PlacedItem)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ItemContainer.OnInventoryPlaced");
		
		AItemContainer_OnInventoryPlaced_Params params {};
		params.PlacedItem = PlacedItem;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ItemContainer.OnInventoryEmptied
	 * 		Flags  -> ()
	 */
	void AItemContainer::OnInventoryEmptied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ItemContainer.OnInventoryEmptied");
		
		AItemContainer_OnInventoryEmptied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ItemContainer.OnCheckVisibilityWhitelist
	 * 		Flags  -> ()
	 */
	void AItemContainer::OnCheckVisibilityWhitelist()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ItemContainer.OnCheckVisibilityWhitelist");
		
		AItemContainer_OnCheckVisibilityWhitelist_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ItemContainer.OnCheckRelevancy
	 * 		Flags  -> ()
	 */
	void AItemContainer::OnCheckRelevancy()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ItemContainer.OnCheckRelevancy");
		
		AItemContainer_OnCheckRelevancy_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ItemContainer.BP_OnInventoryEmptied
	 * 		Flags  -> ()
	 */
	void AItemContainer::BP_OnInventoryEmptied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ItemContainer.BP_OnInventoryEmptied");
		
		AItemContainer_BP_OnInventoryEmptied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AItemContainer.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AItemContainer::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ItemContainer");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemSlotWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemSlotWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ItemSlotWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ItemWidget.UpdateSize_cpp
	 * 		Flags  -> ()
	 */
	void UItemWidget::UpdateSize_cpp()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ItemWidget.UpdateSize_cpp");
		
		UItemWidget_UpdateSize_cpp_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UItemWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UItemWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ItemWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UKickDamageType.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UKickDamageType::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.KickDamageType");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.SayVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotVoice                                          Voice                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASimpleBot::SayVoice(EBotVoice Voice, bool bIsPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.SayVoice");
		
		ASimpleBot_SayVoice_Params params {};
		params.Voice = Voice;
		params.bIsPriority = bIsPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.PlaceUpgradesOnGear
	 * 		Flags  -> ()
	 */
	void ASimpleBot::PlaceUpgradesOnGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.PlaceUpgradesOnGear");
		
		ASimpleBot_PlaceUpgradesOnGear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.PerformAttack
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EBotInput                                          AttackStyle                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASimpleBot::PerformAttack(EBotInput AttackStyle)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.PerformAttack");
		
		ASimpleBot_PerformAttack_Params params {};
		params.AttackStyle = AttackStyle;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.OnDecision_SeesTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               MyPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Dist                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Delta                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASimpleBot::OnDecision_SeesTarget(class ACombatEntity* MyPawn, float Dist, const struct FVector& Delta)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.OnDecision_SeesTarget");
		
		ASimpleBot_OnDecision_SeesTarget_Params params {};
		params.MyPawn = MyPawn;
		params.Dist = Dist;
		params.Delta = Delta;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.OnDecision_NoTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               MyPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASimpleBot::OnDecision_NoTarget(class ACombatEntity* MyPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.OnDecision_NoTarget");
		
		ASimpleBot_OnDecision_NoTarget_Params params {};
		params.MyPawn = MyPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.OnDecision_LostTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               MyPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ASimpleBot::OnDecision_LostTarget(class ACombatEntity* MyPawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.OnDecision_LostTarget");
		
		ASimpleBot_OnDecision_LostTarget_Params params {};
		params.MyPawn = MyPawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.OnDeath
	 * 		Flags  -> ()
	 */
	void ASimpleBot::OnDeath()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.OnDeath");
		
		ASimpleBot_OnDeath_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.MoveSomewhere
	 * 		Flags  -> ()
	 */
	void ASimpleBot::MoveSomewhere()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.MoveSomewhere");
		
		ASimpleBot_MoveSomewhere_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.ManageGear
	 * 		Flags  -> ()
	 */
	void ASimpleBot::ManageGear()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.ManageGear");
		
		ASimpleBot_ManageGear_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.LateEquipInventory
	 * 		Flags  -> ()
	 */
	void ASimpleBot::LateEquipInventory()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.LateEquipInventory");
		
		ASimpleBot_LateEquipInventory_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.HasBehavior
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               MyPawn                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EBotBehavior                                       Behavior                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASimpleBot::HasBehavior(class ACombatEntity* MyPawn, EBotBehavior Behavior)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.HasBehavior");
		
		ASimpleBot_HasBehavior_Params params {};
		params.MyPawn = MyPawn;
		params.Behavior = Behavior;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.ConsumeItemOfType
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASimpleBot::ConsumeItemOfType(EquipmentType Type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.ConsumeItemOfType");
		
		ASimpleBot_ConsumeItemOfType_Params params {};
		params.Type = Type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.ConsumeItemOfIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemIndex                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ASimpleBot::ConsumeItemOfIndex(int32_t ItemIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.ConsumeItemOfIndex");
		
		ASimpleBot_ConsumeItemOfIndex_Params params {};
		params.ItemIndex = ItemIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.AttemptToggleBlock
	 * 		Flags  -> ()
	 */
	void ASimpleBot::AttemptToggleBlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.AttemptToggleBlock");
		
		ASimpleBot_AttemptToggleBlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.SimpleBot.AttemptCombo
	 * 		Flags  -> ()
	 */
	void ASimpleBot::AttemptCombo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.SimpleBot.AttemptCombo");
		
		ASimpleBot_AttemptCombo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ASimpleBot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ASimpleBot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.SimpleBot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.LeaderBot.DetermineCommonTarget
	 * 		Flags  -> ()
	 */
	void ALeaderBot::DetermineCommonTarget()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.LeaderBot.DetermineCommonTarget");
		
		ALeaderBot_DetermineCommonTarget_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.LeaderBot.DetermineCommonGoal
	 * 		Flags  -> ()
	 */
	void ALeaderBot::DetermineCommonGoal()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.LeaderBot.DetermineCommonGoal");
		
		ALeaderBot_DetermineCommonGoal_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.LeaderBot.AddTeamMembers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaxAmount                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ALeaderBot::AddTeamMembers(int32_t MaxAmount)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.LeaderBot.AddTeamMembers");
		
		ALeaderBot_AddTeamMembers_Params params {};
		params.MaxAmount = MaxAmount;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ALeaderBot.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ALeaderBot::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.LeaderBot");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.MovementAttributeSet.OnRep_SprintMultiplier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovementAttributeSet::OnRep_SprintMultiplier(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.MovementAttributeSet.OnRep_SprintMultiplier");
		
		UMovementAttributeSet_OnRep_SprintMultiplier_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.MovementAttributeSet.OnRep_SpeedModifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovementAttributeSet::OnRep_SpeedModifier(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.MovementAttributeSet.OnRep_SpeedModifier");
		
		UMovementAttributeSet_OnRep_SpeedModifier_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.MovementAttributeSet.OnRep_MinSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovementAttributeSet::OnRep_MinSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.MovementAttributeSet.OnRep_MinSpeed");
		
		UMovementAttributeSet_OnRep_MinSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.MovementAttributeSet.OnRep_MaxSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovementAttributeSet::OnRep_MaxSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.MovementAttributeSet.OnRep_MaxSpeed");
		
		UMovementAttributeSet_OnRep_MaxSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.MovementAttributeSet.OnRep_CurrentSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovementAttributeSet::OnRep_CurrentSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.MovementAttributeSet.OnRep_CurrentSpeed");
		
		UMovementAttributeSet_OnRep_CurrentSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.MovementAttributeSet.OnRep_BrokenBones
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovementAttributeSet::OnRep_BrokenBones(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.MovementAttributeSet.OnRep_BrokenBones");
		
		UMovementAttributeSet_OnRep_BrokenBones_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.MovementAttributeSet.OnRep_BaseSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UMovementAttributeSet::OnRep_BaseSpeed(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.MovementAttributeSet.OnRep_BaseSpeed");
		
		UMovementAttributeSet_OnRep_BaseSpeed_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMovementAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMovementAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.MovementAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.NPCComponent.UpdateVisibility
	 * 		Flags  -> ()
	 */
	void UNPCComponent::UpdateVisibility()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.NPCComponent.UpdateVisibility");
		
		UNPCComponent_UpdateVisibility_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.NPCComponent.IsReadyForQuestProposal
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterNPCsComponent*                     PlayerNPCComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestNameToPropose                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNPCComponent::IsReadyForQuestProposal(class UCharacterNPCsComponent* PlayerNPCComponent, class FName* QuestNameToPropose)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.NPCComponent.IsReadyForQuestProposal");
		
		UNPCComponent_IsReadyForQuestProposal_Params params {};
		params.PlayerNPCComponent = PlayerNPCComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestNameToPropose != nullptr)
			*QuestNameToPropose = params.QuestNameToPropose;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.NPCComponent.IsPlayerFinishedQuest
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterNPCsComponent*                     PlayerNPCComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestNameFinished                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNPCComponent::IsPlayerFinishedQuest(class UCharacterNPCsComponent* PlayerNPCComponent, class FName* QuestNameFinished)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.NPCComponent.IsPlayerFinishedQuest");
		
		UNPCComponent_IsPlayerFinishedQuest_Params params {};
		params.PlayerNPCComponent = PlayerNPCComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestNameFinished != nullptr)
			*QuestNameFinished = params.QuestNameFinished;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.NPCComponent.IsNPCReadyForQuestAction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UCharacterNPCsComponent*                     PlayerNPCComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestNameFinished                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        QuestNameToPropose                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NotEnoughSpace                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UNPCComponent::IsNPCReadyForQuestAction(class UCharacterNPCsComponent* PlayerNPCComponent, class FName* QuestNameFinished, class FName* QuestNameToPropose, bool* NotEnoughSpace)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.NPCComponent.IsNPCReadyForQuestAction");
		
		UNPCComponent_IsNPCReadyForQuestAction_Params params {};
		params.PlayerNPCComponent = PlayerNPCComponent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestNameFinished != nullptr)
			*QuestNameFinished = params.QuestNameFinished;
		if (QuestNameToPropose != nullptr)
			*QuestNameToPropose = params.QuestNameToPropose;
		if (NotEnoughSpace != nullptr)
			*NotEnoughSpace = params.NotEnoughSpace;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.NPCComponent.GetTierNext
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNPCLevel                                   Level                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UNPCComponent::GetTierNext(const struct FNPCLevel& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.NPCComponent.GetTierNext");
		
		UNPCComponent_GetTierNext_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.NPCComponent.GetTierExperience
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TierLevel                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UNPCComponent::GetTierExperience(int32_t TierLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.NPCComponent.GetTierExperience");
		
		UNPCComponent_GetTierExperience_Params params {};
		params.TierLevel = TierLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.NPCComponent.GetTierCurrent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FNPCLevel                                   Level                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UNPCComponent::GetTierCurrent(const struct FNPCLevel& Level)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.NPCComponent.GetTierCurrent");
		
		UNPCComponent_GetTierCurrent_Params params {};
		params.Level = Level;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.NPCComponent.GetQuestInfo
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        QuestName                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FQuestTable                                 QuestRow                                                   (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	bool UNPCComponent::GetQuestInfo(const class FName& QuestName, struct FQuestTable* QuestRow)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.NPCComponent.GetQuestInfo");
		
		UNPCComponent_GetQuestInfo_Params params {};
		params.QuestName = QuestName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (QuestRow != nullptr)
			*QuestRow = params.QuestRow;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNPCComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNPCComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.NPCComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.NPCQuestPoint.OverlapQuestPointByPlayer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    PlayerCharacter                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ANPCQuestPoint::OverlapQuestPointByPlayer(class AProjectAgarthaCharacter* PlayerCharacter)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.NPCQuestPoint.OverlapQuestPointByPlayer");
		
		ANPCQuestPoint_OverlapQuestPointByPlayer_Params params {};
		params.PlayerCharacter = PlayerCharacter;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ANPCQuestPoint.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ANPCQuestPoint::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.NPCQuestPoint");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.SetPartyTicket
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Ticket                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartySubsystem::SetPartyTicket(const class FString& Ticket)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.SetPartyTicket");
		
		UPartySubsystem_SetPartyTicket_Params params {};
		params.Ticket = Ticket;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.SetPartyIdentifier
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Identifier                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartySubsystem::SetPartyIdentifier(const class FString& Identifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.SetPartyIdentifier");
		
		UPartySubsystem_SetPartyIdentifier_Params params {};
		params.Identifier = Identifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.SendSubsystemMemberData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EPartyReadyStatus                                  MyReadyState                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartySubsystem::SendSubsystemMemberData(EPartyReadyStatus MyReadyState)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.SendSubsystemMemberData");
		
		UPartySubsystem_SendSubsystemMemberData_Params params {};
		params.MyReadyState = MyReadyState;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.SendSubsystemLobbyData
	 * 		Flags  -> ()
	 */
	void UPartySubsystem::SendSubsystemLobbyData()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.SendSubsystemLobbyData");
		
		UPartySubsystem_SendSubsystemLobbyData_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.SendSubsystemDiscoverability
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsPublic                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsSolo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartySubsystem::SendSubsystemDiscoverability(bool bIsPublic, bool bIsSolo)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.SendSubsystemDiscoverability");
		
		UPartySubsystem_SendSubsystemDiscoverability_Params params {};
		params.bIsPublic = bIsPublic;
		params.bIsSolo = bIsSolo;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.SendSubsystemAdvertisement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      AdvertisementString                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartySubsystem::SendSubsystemAdvertisement(const class FString& AdvertisementString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.SendSubsystemAdvertisement");
		
		UPartySubsystem_SendSubsystemAdvertisement_Params params {};
		params.AdvertisementString = AdvertisementString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.RefreshPartyList
	 * 		Flags  -> ()
	 */
	void UPartySubsystem::RefreshPartyList()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.RefreshPartyList");
		
		UPartySubsystem_RefreshPartyList_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.OpenInviteMenu
	 * 		Flags  -> ()
	 */
	void UPartySubsystem::OpenInviteMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.OpenInviteMenu");
		
		UPartySubsystem_OpenInviteMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.OnLevelChange
	 * 		Flags  -> ()
	 */
	void UPartySubsystem::OnLevelChange()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.OnLevelChange");
		
		UPartySubsystem_OnLevelChange_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.MatchLeadersServer
	 * 		Flags  -> ()
	 */
	void UPartySubsystem::MatchLeadersServer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.MatchLeadersServer");
		
		UPartySubsystem_MatchLeadersServer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.KickFromParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartySubsystem::KickFromParty(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.KickFromParty");
		
		UPartySubsystem_KickFromParty_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.JoinParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            PartyBrowserIndex                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartySubsystem::JoinParty(int32_t PartyBrowserIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.JoinParty");
		
		UPartySubsystem_JoinParty_Params params {};
		params.PartyBrowserIndex = PartyBrowserIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.GetPartyTicketURL
	 * 		Flags  -> ()
	 */
	class FString UPartySubsystem::GetPartyTicketURL()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.GetPartyTicketURL");
		
		UPartySubsystem_GetPartyTicketURL_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.GetPartyTicket
	 * 		Flags  -> ()
	 */
	class FString UPartySubsystem::GetPartyTicket()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.GetPartyTicket");
		
		UPartySubsystem_GetPartyTicket_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.GetPartyMember
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Index                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FPartyMember UPartySubsystem::GetPartyMember(int32_t Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.GetPartyMember");
		
		UPartySubsystem_GetPartyMember_Params params {};
		params.Index = Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.GetPartyIdentifier
	 * 		Flags  -> ()
	 */
	class FString UPartySubsystem::GetPartyIdentifier()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.GetPartyIdentifier");
		
		UPartySubsystem_GetPartyIdentifier_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.GetParty
	 * 		Flags  -> ()
	 */
	void UPartySubsystem::GetParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.GetParty");
		
		UPartySubsystem_GetParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.GetMyPartyState
	 * 		Flags  -> ()
	 */
	struct FPartyMember UPartySubsystem::GetMyPartyState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.GetMyPartyState");
		
		UPartySubsystem_GetMyPartyState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.GetIsPartyLeader
	 * 		Flags  -> ()
	 */
	bool UPartySubsystem::GetIsPartyLeader()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.GetIsPartyLeader");
		
		UPartySubsystem_GetIsPartyLeader_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.GetIsInParty
	 * 		Flags  -> ()
	 */
	bool UPartySubsystem::GetIsInParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.GetIsInParty");
		
		UPartySubsystem_GetIsInParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.EnableJoinInProgress
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPartySubsystem::EnableJoinInProgress(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.EnableJoinInProgress");
		
		UPartySubsystem_EnableJoinInProgress_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.CreateTicketAsParty
	 * 		Flags  -> ()
	 */
	void UPartySubsystem::CreateTicketAsParty()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.CreateTicketAsParty");
		
		UPartySubsystem_CreateTicketAsParty_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.ConvertBrowserPartyToText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FBrowserParty                               Party                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class FText UPartySubsystem::ConvertBrowserPartyToText(const struct FBrowserParty& Party)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.ConvertBrowserPartyToText");
		
		UPartySubsystem_ConvertBrowserPartyToText_Params params {};
		params.Party = Party;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.CanStartMatchmakerWithMercs
	 * 		Flags  -> ()
	 */
	bool UPartySubsystem::CanStartMatchmakerWithMercs()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.CanStartMatchmakerWithMercs");
		
		UPartySubsystem_CanStartMatchmakerWithMercs_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.PartySubsystem.CanStartMatchmaker
	 * 		Flags  -> ()
	 */
	bool UPartySubsystem::CanStartMatchmaker()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.PartySubsystem.CanStartMatchmaker");
		
		UPartySubsystem_CanStartMatchmaker_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPartySubsystem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPartySubsystem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.PartySubsystem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction APlayerStateBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* APlayerStateBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.PlayerStateBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Timer_PartyStringUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              AllPartyActors                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Timer_PartyStringUpdated(TArray<class AActor*> AllPartyActors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Timer_PartyStringUpdated");
		
		AProjectAgarthaCharacter_Timer_PartyStringUpdated_Params params {};
		params.AllPartyActors = AllPartyActors;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.StartExtractingCountdown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ExtractPosition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::StartExtractingCountdown(const struct FVector& ExtractPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.StartExtractingCountdown");
		
		AProjectAgarthaCharacter_StartExtractingCountdown_Params params {};
		params.ExtractPosition = ExtractPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.ServerPredictsExtractionFinish
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::ServerPredictsExtractionFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.ServerPredictsExtractionFinish");
		
		AProjectAgarthaCharacter_ServerPredictsExtractionFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercViewDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACombatEntity*                               CommandedBot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_UpdateMercViewDirection(const struct FVector& Direction, class ACombatEntity* CommandedBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercViewDirection");
		
		AProjectAgarthaCharacter_Server_UpdateMercViewDirection_Params params {};
		params.Direction = Direction;
		params.CommandedBot = CommandedBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               TargetToAttack                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACombatEntity*                               CommandedBot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_UpdateMercTarget(class ACombatEntity* TargetToAttack, class ACombatEntity* CommandedBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercTarget");
		
		AProjectAgarthaCharacter_Server_UpdateMercTarget_Params params {};
		params.TargetToAttack = TargetToAttack;
		params.CommandedBot = CommandedBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACombatEntity*                               CommandedBot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_UpdateMercLocation(const struct FVector& Location, class ACombatEntity* CommandedBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercLocation");
		
		AProjectAgarthaCharacter_Server_UpdateMercLocation_Params params {};
		params.Location = Location;
		params.CommandedBot = CommandedBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercFollow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Direction                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Distance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACombatEntity*                               CommandedBot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_UpdateMercFollow(int32_t Direction, float Distance, class ACombatEntity* CommandedBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercFollow");
		
		AProjectAgarthaCharacter_Server_UpdateMercFollow_Params params {};
		params.Direction = Direction;
		params.Distance = Distance;
		params.CommandedBot = CommandedBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercAggression
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsAggressive                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class ACombatEntity*                               CommandedBot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_UpdateMercAggression(bool bIsAggressive, class ACombatEntity* CommandedBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercAggression");
		
		AProjectAgarthaCharacter_Server_UpdateMercAggression_Params params {};
		params.bIsAggressive = bIsAggressive;
		params.CommandedBot = CommandedBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercAfkMode
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::Server_UpdateMercAfkMode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_UpdateMercAfkMode");
		
		AProjectAgarthaCharacter_Server_UpdateMercAfkMode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_StartExtracting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ExtractPosition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_StartExtracting(const struct FVector& ExtractPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_StartExtracting");
		
		AProjectAgarthaCharacter_Server_StartExtracting_Params params {};
		params.ExtractPosition = ExtractPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBody                              Body                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_SetCharacter(const struct FCharacterBody& Body)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_SetCharacter");
		
		AProjectAgarthaCharacter_Server_SetCharacter_Params params {};
		params.Body = Body;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_RequestUnstick
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::Server_RequestUnstick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_RequestUnstick");
		
		AProjectAgarthaCharacter_Server_RequestUnstick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_PartyStringUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PartyString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_PartyStringUpdated(const class FString& PartyString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_PartyStringUpdated");
		
		AProjectAgarthaCharacter_Server_PartyStringUpdated_Params params {};
		params.PartyString = PartyString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_OnWeaponChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Weapon                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_OnWeaponChange(int32_t Weapon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_OnWeaponChange");
		
		AProjectAgarthaCharacter_Server_OnWeaponChange_Params params {};
		params.Weapon = Weapon;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_OnCreateMercenary
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::Server_OnCreateMercenary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_OnCreateMercenary");
		
		AProjectAgarthaCharacter_Server_OnCreateMercenary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_Heartbeat
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::Server_Heartbeat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_Heartbeat");
		
		AProjectAgarthaCharacter_Server_Heartbeat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_Chat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChatLine                                   Line                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_Chat(const struct FChatLine& Line)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_Chat");
		
		AProjectAgarthaCharacter_Server_Chat_Params params {};
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Server_AssignPartyString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PartyString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Token                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bNewFreebooter                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      VersionString                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      PartySize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      OurConnection                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Server_AssignPartyString(const class FString& PartyString, const class FString& Token, bool bNewFreebooter, const class FString& VersionString, unsigned char PartySize, const class FString& OurConnection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Server_AssignPartyString");
		
		AProjectAgarthaCharacter_Server_AssignPartyString_Params params {};
		params.PartyString = PartyString;
		params.Token = Token;
		params.bNewFreebooter = bNewFreebooter;
		params.VersionString = VersionString;
		params.PartySize = PartySize;
		params.OurConnection = OurConnection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.SaveInventoryToPlayfab
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::SaveInventoryToPlayfab()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.SaveInventoryToPlayfab");
		
		AProjectAgarthaCharacter_SaveInventoryToPlayfab_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.SaveAppearance
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::SaveAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.SaveAppearance");
		
		AProjectAgarthaCharacter_SaveAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.RequestUnstick
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::RequestUnstick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.RequestUnstick");
		
		AProjectAgarthaCharacter_RequestUnstick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.RandomizeCustomization
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::RandomizeCustomization()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.RandomizeCustomization");
		
		AProjectAgarthaCharacter_RandomizeCustomization_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.OpenRadialMenu
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::OpenRadialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.OpenRadialMenu");
		
		AProjectAgarthaCharacter_OpenRadialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.OnUnstick
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::OnUnstick()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.OnUnstick");
		
		AProjectAgarthaCharacter_OnUnstick_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.OnPlayfabLoginSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayFabId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayFabTicket                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NewlyCreated                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::OnPlayfabLoginSuccess(const class FString& PlayFabId, const class FString& PlayFabTicket, bool NewlyCreated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.OnPlayfabLoginSuccess");
		
		AProjectAgarthaCharacter_OnPlayfabLoginSuccess_Params params {};
		params.PlayFabId = PlayFabId;
		params.PlayFabTicket = PlayFabTicket;
		params.NewlyCreated = NewlyCreated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.OnPlayerAppearanceLoaded
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Pawn                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::OnPlayerAppearanceLoaded(class AProjectAgarthaCharacter* Pawn)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.OnPlayerAppearanceLoaded");
		
		AProjectAgarthaCharacter_OnPlayerAppearanceLoaded_Params params {};
		params.Pawn = Pawn;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.OnMercSetLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               CommandedBot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::OnMercSetLocation(class ACombatEntity* CommandedBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.OnMercSetLocation");
		
		AProjectAgarthaCharacter_OnMercSetLocation_Params params {};
		params.CommandedBot = CommandedBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.OnMercFindTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               CommandedBot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::OnMercFindTarget(class ACombatEntity* CommandedBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.OnMercFindTarget");
		
		AProjectAgarthaCharacter_OnMercFindTarget_Params params {};
		params.CommandedBot = CommandedBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.OnMercAggressionChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class ACombatEntity*                               CommandedBot                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::OnMercAggressionChange(class ACombatEntity* CommandedBot)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.OnMercAggressionChange");
		
		AProjectAgarthaCharacter_OnMercAggressionChange_Params params {};
		params.CommandedBot = CommandedBot;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.OnCreateMercenary
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::OnCreateMercenary()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.OnCreateMercenary");
		
		AProjectAgarthaCharacter_OnCreateMercenary_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.NotifyOnUpdateMerc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ACombatEntity*>                       AffectedBots                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsAggressive                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFighting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFollowing                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GoalLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::NotifyOnUpdateMerc(TArray<class ACombatEntity*> AffectedBots, bool bIsAggressive, bool bIsFighting, bool bIsFollowing, class AActor* Target, const struct FVector& GoalLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.NotifyOnUpdateMerc");
		
		AProjectAgarthaCharacter_NotifyOnUpdateMerc_Params params {};
		params.AffectedBots = AffectedBots;
		params.bIsAggressive = bIsAggressive;
		params.bIsFighting = bIsFighting;
		params.bIsFollowing = bIsFollowing;
		params.Target = Target;
		params.GoalLocation = GoalLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Multicast_SetCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FCharacterBody                              Body                                                       (Parm, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Multicast_SetCharacter(const struct FCharacterBody& Body)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Multicast_SetCharacter");
		
		AProjectAgarthaCharacter_Multicast_SetCharacter_Params params {};
		params.Body = Body;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.LoadAuthorizedCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PartyString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      NewBackendID                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Username                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::LoadAuthorizedCharacter(const class FString& PartyString, const class FString& NewBackendID, const class FString& Username)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.LoadAuthorizedCharacter");
		
		AProjectAgarthaCharacter_LoadAuthorizedCharacter_Params params {};
		params.PartyString = PartyString;
		params.NewBackendID = NewBackendID;
		params.Username = Username;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.LoadAppearance
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::LoadAppearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.LoadAppearance");
		
		AProjectAgarthaCharacter_LoadAppearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.IsAccountFlagged
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Bitmask                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AProjectAgarthaCharacter::IsAccountFlagged(int32_t Bitmask)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.IsAccountFlagged");
		
		AProjectAgarthaCharacter_IsAccountFlagged_Params params {};
		params.Bitmask = Bitmask;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.GiveSelfDeathController
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::GiveSelfDeathController()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.GiveSelfDeathController");
		
		AProjectAgarthaCharacter_GiveSelfDeathController_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.GetRandomSurroundingLocation
	 * 		Flags  -> ()
	 */
	struct FVector AProjectAgarthaCharacter::GetRandomSurroundingLocation()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.GetRandomSurroundingLocation");
		
		AProjectAgarthaCharacter_GetRandomSurroundingLocation_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.FlagAccount
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Bitmask                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::FlagAccount(int32_t Bitmask, bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.FlagAccount");
		
		AProjectAgarthaCharacter_FlagAccount_Params params {};
		params.Bitmask = Bitmask;
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.FinishExtractingCountdown
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::FinishExtractingCountdown()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.FinishExtractingCountdown");
		
		AProjectAgarthaCharacter_FinishExtractingCountdown_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.ExitUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::ExitUI(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.ExitUI");
		
		AProjectAgarthaCharacter_ExitUI_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.ExecuteTacticalOperation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ETacticalCommand                                   TacticalCommand                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              OptionalFloatData                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::ExecuteTacticalOperation(ETacticalCommand TacticalCommand, float OptionalFloatData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.ExecuteTacticalOperation");
		
		AProjectAgarthaCharacter_ExecuteTacticalOperation_Params params {};
		params.TacticalCommand = TacticalCommand;
		params.OptionalFloatData = OptionalFloatData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.EnterUI
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UWidget*                                     WidgetToFocus                                              (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsUIAndGame                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMouseLockMode                                     InMouseLockMode                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bHideMouseCursor                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bAllowPlayerMovement                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::EnterUI(class APlayerController* PlayerController, class UWidget* WidgetToFocus, bool bIsUIAndGame, EMouseLockMode InMouseLockMode, bool bHideMouseCursor, bool bAllowPlayerMovement)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.EnterUI");
		
		AProjectAgarthaCharacter_EnterUI_Params params {};
		params.PlayerController = PlayerController;
		params.WidgetToFocus = WidgetToFocus;
		params.bIsUIAndGame = bIsUIAndGame;
		params.InMouseLockMode = InMouseLockMode;
		params.bHideMouseCursor = bHideMouseCursor;
		params.bAllowPlayerMovement = bAllowPlayerMovement;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.CloseRadialMenu
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::CloseRadialMenu()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.CloseRadialMenu");
		
		AProjectAgarthaCharacter_CloseRadialMenu_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.ClientSendCommandsPostLogin
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::ClientSendCommandsPostLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.ClientSendCommandsPostLogin");
		
		AProjectAgarthaCharacter_ClientSendCommandsPostLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_StartExtracting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     ExtractPosition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_StartExtracting(const struct FVector& ExtractPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_StartExtracting");
		
		AProjectAgarthaCharacter_Client_StartExtracting_Params params {};
		params.ExtractPosition = ExtractPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_ReconnectedBeginPlay
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::Client_ReconnectedBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_ReconnectedBeginPlay");
		
		AProjectAgarthaCharacter_Client_ReconnectedBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_PlayerDied
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::Client_PlayerDied()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_PlayerDied");
		
		AProjectAgarthaCharacter_Client_PlayerDied_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_PartyStringUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class AActor*>                              AllPartyActors                                             (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      LatestPartyValue                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_PartyStringUpdated(TArray<class AActor*> AllPartyActors, unsigned char LatestPartyValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_PartyStringUpdated");
		
		AProjectAgarthaCharacter_Client_PartyStringUpdated_Params params {};
		params.AllPartyActors = AllPartyActors;
		params.LatestPartyValue = LatestPartyValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnUpdateMerc
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class ACombatEntity*>                       AffectedBots                                               (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsAggressive                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFighting                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsFollowing                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      Target                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     GoalLocation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_OnUpdateMerc(TArray<class ACombatEntity*> AffectedBots, bool bIsAggressive, bool bIsFighting, bool bIsFollowing, class AActor* Target, const struct FVector& GoalLocation)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnUpdateMerc");
		
		AProjectAgarthaCharacter_Client_OnUpdateMerc_Params params {};
		params.AffectedBots = AffectedBots;
		params.bIsAggressive = bIsAggressive;
		params.bIsFighting = bIsFighting;
		params.bIsFollowing = bIsFollowing;
		params.Target = Target;
		params.GoalLocation = GoalLocation;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnSpectatorCameraRequested
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_OnSpectatorCameraRequested(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnSpectatorCameraRequested");
		
		AProjectAgarthaCharacter_Client_OnSpectatorCameraRequested_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnRaidTimerUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinutesRemaining                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_OnRaidTimerUpdated(int32_t MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnRaidTimerUpdated");
		
		AProjectAgarthaCharacter_Client_OnRaidTimerUpdated_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnInsuranceArrived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UProjectAgarthaGameInstance*                 GameInstance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemsPlaced                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemsInQueue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_OnInsuranceArrived(class UProjectAgarthaGameInstance* GameInstance, int32_t ItemsPlaced, int32_t ItemsInQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnInsuranceArrived");
		
		AProjectAgarthaCharacter_Client_OnInsuranceArrived_Params params {};
		params.GameInstance = GameInstance;
		params.ItemsPlaced = ItemsPlaced;
		params.ItemsInQueue = ItemsInQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnAuthorizationAccepted
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::Client_OnAuthorizationAccepted()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_OnAuthorizationAccepted");
		
		AProjectAgarthaCharacter_Client_OnAuthorizationAccepted_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_LoadCharacter
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::Client_LoadCharacter()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_LoadCharacter");
		
		AProjectAgarthaCharacter_Client_LoadCharacter_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_GetStationRank
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      AlchemyLv                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            AlchemyExp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      ArtificerLv                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ArtificerExp                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      CookingLv                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            CookingExp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		unsigned char                                      UpgradeLv                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            UpgradeExp                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_GetStationRank(unsigned char AlchemyLv, int32_t AlchemyExp, unsigned char ArtificerLv, int32_t ArtificerExp, unsigned char CookingLv, int32_t CookingExp, unsigned char UpgradeLv, int32_t UpgradeExp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_GetStationRank");
		
		AProjectAgarthaCharacter_Client_GetStationRank_Params params {};
		params.AlchemyLv = AlchemyLv;
		params.AlchemyExp = AlchemyExp;
		params.ArtificerLv = ArtificerLv;
		params.ArtificerExp = ArtificerExp;
		params.CookingLv = CookingLv;
		params.CookingExp = CookingExp;
		params.UpgradeLv = UpgradeLv;
		params.UpgradeExp = UpgradeExp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_ForceOpenLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        NewLevel                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_ForceOpenLevel(const class FName& NewLevel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_ForceOpenLevel");
		
		AProjectAgarthaCharacter_Client_ForceOpenLevel_Params params {};
		params.NewLevel = NewLevel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_ForceOpenIp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NewConnection                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_ForceOpenIp(const class FString& NewConnection)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_ForceOpenIp");
		
		AProjectAgarthaCharacter_Client_ForceOpenIp_Params params {};
		params.NewConnection = NewConnection;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_FinishExtracting
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaCharacter::Client_FinishExtracting()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_FinishExtracting");
		
		AProjectAgarthaCharacter_Client_FinishExtracting_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.Client_Chat
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChatLine                                   Line                                                       (ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::Client_Chat(const struct FChatLine& Line)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.Client_Chat");
		
		AProjectAgarthaCharacter_Client_Chat_Params params {};
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.BP_SpectatorCamera
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bEnabled                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::BP_SpectatorCamera(bool bEnabled)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.BP_SpectatorCamera");
		
		AProjectAgarthaCharacter_BP_SpectatorCamera_Params params {};
		params.bEnabled = bEnabled;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.BP_OnRaidTimerUpdated
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinutesRemaining                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::BP_OnRaidTimerUpdated(int32_t MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.BP_OnRaidTimerUpdated");
		
		AProjectAgarthaCharacter_BP_OnRaidTimerUpdated_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaCharacter.ApplyChangesMercenary
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Merc                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaCharacter::ApplyChangesMercenary(class AProjectAgarthaCharacter* Merc)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaCharacter.ApplyChangesMercenary");
		
		AProjectAgarthaCharacter_ApplyChangesMercenary_Params params {};
		params.Merc = Merc;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectAgarthaCharacter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectAgarthaCharacter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ProjectAgarthaCharacter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.SpawnLootbag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class AActor* UProjectAgarthaGameInstance::SpawnLootbag(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.SpawnLootbag");
		
		UProjectAgarthaGameInstance_SpawnLootbag_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.SetSpecialMessage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FText                                        Message                                                    (Parm, NativeAccessSpecifierPublic)
	 * 		float                                              CountdownTime                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::SetSpecialMessage(const class FText& Message, float CountdownTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.SetSpecialMessage");
		
		UProjectAgarthaGameInstance_SetSpecialMessage_Params params {};
		params.Message = Message;
		params.CountdownTime = CountdownTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.RequestStartMatch
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               bIsFreebooterMode                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERaidMap                                           Destination                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::RequestStartMatch(bool bIsFreebooterMode, ERaidMap Destination)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.RequestStartMatch");
		
		UProjectAgarthaGameInstance_RequestStartMatch_Params params {};
		params.bIsFreebooterMode = bIsFreebooterMode;
		params.Destination = Destination;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.RequestNews
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::RequestNews()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.RequestNews");
		
		UProjectAgarthaGameInstance_RequestNews_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.RequestJoinBoat
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::RequestJoinBoat()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.RequestJoinBoat");
		
		UProjectAgarthaGameInstance_RequestJoinBoat_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.RequestGetMatchInfo
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::RequestGetMatchInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.RequestGetMatchInfo");
		
		UProjectAgarthaGameInstance_RequestGetMatchInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.RequestCancelMatch
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::RequestCancelMatch()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.RequestCancelMatch");
		
		UProjectAgarthaGameInstance_RequestCancelMatch_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.ReadTutorial
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TutorialIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::ReadTutorial(int32_t TutorialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.ReadTutorial");
		
		UProjectAgarthaGameInstance_ReadTutorial_Params params {};
		params.TutorialIndex = TutorialIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.PlayFabDeleteUser
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::PlayFabDeleteUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.PlayFabDeleteUser");
		
		UProjectAgarthaGameInstance_PlayFabDeleteUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.PlayFabDeleteAllUser
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::PlayFabDeleteAllUser()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.PlayFabDeleteAllUser");
		
		UProjectAgarthaGameInstance_PlayFabDeleteAllUser_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OpenLevelWithLoadingScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LevelScreenName                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETravelingType                                     whereToTravel                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProjectAgarthaGameInstance::OpenLevelWithLoadingScreen(const class FName& LevelScreenName, ETravelingType whereToTravel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OpenLevelWithLoadingScreen");
		
		UProjectAgarthaGameInstance_OpenLevelWithLoadingScreen_Params params {};
		params.LevelScreenName = LevelScreenName;
		params.whereToTravel = whereToTravel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnPlayfabLoginSuccess
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      PlayFabId                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      PlayFabTicket                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               NewlyCreated                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::OnPlayfabLoginSuccess(const class FString& PlayFabId, const class FString& PlayFabTicket, bool NewlyCreated)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnPlayfabLoginSuccess");
		
		UProjectAgarthaGameInstance_OnPlayfabLoginSuccess_Params params {};
		params.PlayFabId = PlayFabId;
		params.PlayFabTicket = PlayFabTicket;
		params.NewlyCreated = NewlyCreated;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnPlayfabLoginFailed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      ErrorName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      ErrorMessage                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::OnPlayfabLoginFailed(const class FString& ErrorName, const class FString& ErrorMessage)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnPlayfabLoginFailed");
		
		UProjectAgarthaGameInstance_OnPlayfabLoginFailed_Params params {};
		params.ErrorName = ErrorName;
		params.ErrorMessage = ErrorMessage;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnOldRaidFound
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      RaidURL                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::OnOldRaidFound(const class FString& RaidURL)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnOldRaidFound");
		
		UProjectAgarthaGameInstance_OnOldRaidFound_Params params {};
		params.RaidURL = RaidURL;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnMatchPendingTimeUpdated
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::OnMatchPendingTimeUpdated()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnMatchPendingTimeUpdated");
		
		UProjectAgarthaGameInstance_OnMatchPendingTimeUpdated_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnLevelChangeShip
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::OnLevelChangeShip()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnLevelChangeShip");
		
		UProjectAgarthaGameInstance_OnLevelChangeShip_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnLevelChangeRaid
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::OnLevelChangeRaid()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnLevelChangeRaid");
		
		UProjectAgarthaGameInstance_OnLevelChangeRaid_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnLevelChange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      LevelName                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::OnLevelChange(const class FString& LevelName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnLevelChange");
		
		UProjectAgarthaGameInstance_OnLevelChange_Params params {};
		params.LevelName = LevelName;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnKickedFromServer
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Reason                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::OnKickedFromServer(const class FString& Reason)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnKickedFromServer");
		
		UProjectAgarthaGameInstance_OnKickedFromServer_Params params {};
		params.Reason = Reason;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnCreateMatchmakerForLevel
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::OnCreateMatchmakerForLevel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnCreateMatchmakerForLevel");
		
		UProjectAgarthaGameInstance_OnCreateMatchmakerForLevel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.OnCancelMatchmakingFromCode
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::OnCancelMatchmakingFromCode()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.OnCancelMatchmakingFromCode");
		
		UProjectAgarthaGameInstance_OnCancelMatchmakingFromCode_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.Multicast_OnTimerUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinutesRemaining                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::Multicast_OnTimerUpdate(int32_t MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.Multicast_OnTimerUpdate");
		
		UProjectAgarthaGameInstance_Multicast_OnTimerUpdate_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.GetWasTutorialViewed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            TutorialIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProjectAgarthaGameInstance::GetWasTutorialViewed(int32_t TutorialIndex)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.GetWasTutorialViewed");
		
		UProjectAgarthaGameInstance_GetWasTutorialViewed_Params params {};
		params.TutorialIndex = TutorialIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.GetUsername
	 * 		Flags  -> ()
	 */
	class FString UProjectAgarthaGameInstance::GetUsername()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.GetUsername");
		
		UProjectAgarthaGameInstance_GetUsername_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.GetStatEffectReadable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemStatType                                      _itemStat                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProjectAgarthaGameInstance::GetStatEffectReadable(EItemStatType _itemStat)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.GetStatEffectReadable");
		
		UProjectAgarthaGameInstance_GetStatEffectReadable_Params params {};
		params._itemStat = _itemStat;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.GetPossibleLocalText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LocalTextTag                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProjectAgarthaGameInstance::GetPossibleLocalText(const class FName& LocalTextTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.GetPossibleLocalText");
		
		UProjectAgarthaGameInstance_GetPossibleLocalText_Params params {};
		params.LocalTextTag = LocalTextTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.GetPlayfabIDFromMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      K                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProjectAgarthaGameInstance::GetPlayfabIDFromMap(const class FString& K)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.GetPlayfabIDFromMap");
		
		UProjectAgarthaGameInstance_GetPlayfabIDFromMap_Params params {};
		params.K = K;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.GetMatchPendingTimeAsString
	 * 		Flags  -> ()
	 */
	class FString UProjectAgarthaGameInstance::GetMatchPendingTimeAsString()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.GetMatchPendingTimeAsString");
		
		UProjectAgarthaGameInstance_GetMatchPendingTimeAsString_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.GetLocalText
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        LocalTextTag                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UProjectAgarthaGameInstance::GetLocalText(const class FName& LocalTextTag)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.GetLocalText");
		
		UProjectAgarthaGameInstance_GetLocalText_Params params {};
		params.LocalTextTag = LocalTextTag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.GetIsShipHub
	 * 		Flags  -> ()
	 */
	bool UProjectAgarthaGameInstance::GetIsShipHub()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.GetIsShipHub");
		
		UProjectAgarthaGameInstance_GetIsShipHub_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.GetAllEntitiesInParty
	 * 		Flags  -> ()
	 * Parameters:
	 * 		unsigned char                                      Party                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AProjectAgarthaCharacter*                    Ignore                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	TArray<class AActor*> UProjectAgarthaGameInstance::GetAllEntitiesInParty(unsigned char Party, class AProjectAgarthaCharacter* Ignore)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.GetAllEntitiesInParty");
		
		UProjectAgarthaGameInstance_GetAllEntitiesInParty_Params params {};
		params.Party = Party;
		params.Ignore = Ignore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.DetectKickReason
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::DetectKickReason()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.DetectKickReason");
		
		UProjectAgarthaGameInstance_DetectKickReason_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.BPOnPlayfabLoginSuccess
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::BPOnPlayfabLoginSuccess()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.BPOnPlayfabLoginSuccess");
		
		UProjectAgarthaGameInstance_BPOnPlayfabLoginSuccess_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.BPOnLoadCharacter
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaCharacter*                    Character                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::BPOnLoadCharacter(class AProjectAgarthaCharacter* Character)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.BPOnLoadCharacter");
		
		UProjectAgarthaGameInstance_BPOnLoadCharacter_Params params {};
		params.Character = Character;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.BP_SpawnLootbag
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::BP_SpawnLootbag(const struct FVector& Location)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.BP_SpawnLootbag");
		
		UProjectAgarthaGameInstance_BP_SpawnLootbag_Params params {};
		params.Location = Location;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.BP_OnTimerUpdate
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MinutesRemaining                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::BP_OnTimerUpdate(int32_t MinutesRemaining)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.BP_OnTimerUpdate");
		
		UProjectAgarthaGameInstance_BP_OnTimerUpdate_Params params {};
		params.MinutesRemaining = MinutesRemaining;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.BP_OnInsuranceArrived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            ItemsPlaced                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ItemsInQueue                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UProjectAgarthaGameInstance::BP_OnInsuranceArrived(int32_t ItemsPlaced, int32_t ItemsInQueue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.BP_OnInsuranceArrived");
		
		UProjectAgarthaGameInstance_BP_OnInsuranceArrived_Params params {};
		params.ItemsPlaced = ItemsPlaced;
		params.ItemsInQueue = ItemsInQueue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.AttemptPlayfabLogin
	 * 		Flags  -> ()
	 */
	void UProjectAgarthaGameInstance::AttemptPlayfabLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.AttemptPlayfabLogin");
		
		UProjectAgarthaGameInstance_AttemptPlayfabLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.AreMapConditionsMet
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UInventoryComponent*                         InventoryToCheck                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ERaidMap                                           MapToCheck                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProjectAgarthaGameInstance::AreMapConditionsMet(class UInventoryComponent* InventoryToCheck, ERaidMap MapToCheck)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.AreMapConditionsMet");
		
		UProjectAgarthaGameInstance_AreMapConditionsMet_Params params {};
		params.InventoryToCheck = InventoryToCheck;
		params.MapToCheck = MapToCheck;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameInstance.AddPlayfabIDToMap
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      K                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      V                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UProjectAgarthaGameInstance::AddPlayfabIDToMap(const class FString& K, const class FString& V)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameInstance.AddPlayfabIDToMap");
		
		UProjectAgarthaGameInstance_AddPlayfabIDToMap_Params params {};
		params.K = K;
		params.V = V;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UProjectAgarthaGameInstance.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UProjectAgarthaGameInstance::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ProjectAgarthaGameInstance");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameMode.StartPlayerExtraction
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AProjectAgarthaPlayerController*             AgarthaPC                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ExtractPosition                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool AProjectAgarthaGameMode::StartPlayerExtraction(class AProjectAgarthaPlayerController* AgarthaPC, const struct FVector& ExtractPosition)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameMode.StartPlayerExtraction");
		
		AProjectAgarthaGameMode_StartPlayerExtraction_Params params {};
		params.AgarthaPC = AgarthaPC;
		params.ExtractPosition = ExtractPosition;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaGameMode.OnInactivityEnd
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaGameMode::OnInactivityEnd()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaGameMode.OnInactivityEnd");
		
		AProjectAgarthaGameMode_OnInactivityEnd_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectAgarthaGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectAgarthaGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ProjectAgarthaGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectAgarthaHUD.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectAgarthaHUD::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ProjectAgarthaHUD");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaPlayerController.HighlightNPC
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UNPCComponent*                               NPC                                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaPlayerController::HighlightNPC(class UNPCComponent* NPC)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaPlayerController.HighlightNPC");
		
		AProjectAgarthaPlayerController_HighlightNPC_Params params {};
		params.NPC = NPC;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaPlayerController.GetQuickCommand
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FKey>                                _acceptedKeys                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FKey>                                _hitKeys                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaPlayerController::GetQuickCommand(TArray<struct FKey> _acceptedKeys, TArray<struct FKey>* _hitKeys)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaPlayerController.GetQuickCommand");
		
		AProjectAgarthaPlayerController_GetQuickCommand_Params params {};
		params._acceptedKeys = _acceptedKeys;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (_hitKeys != nullptr)
			*_hitKeys = params._hitKeys;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaPlayerController.GetJoystickDirection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EJoystickType                                      _joystick                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FVector2D AProjectAgarthaPlayerController::GetJoystickDirection(EJoystickType _joystick)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaPlayerController.GetJoystickDirection");
		
		AProjectAgarthaPlayerController_GetJoystickDirection_Params params {};
		params._joystick = _joystick;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaPlayerController.GetHiddenActors
	 * 		Flags  -> ()
	 */
	TArray<class AActor*> AProjectAgarthaPlayerController::GetHiddenActors()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaPlayerController.GetHiddenActors");
		
		AProjectAgarthaPlayerController_GetHiddenActors_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaPlayerController.ForceClientToLogin
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaPlayerController::ForceClientToLogin()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaPlayerController.ForceClientToLogin");
		
		AProjectAgarthaPlayerController_ForceClientToLogin_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaPlayerController.ForceBeginPlay
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaPlayerController::ForceBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaPlayerController.ForceBeginPlay");
		
		AProjectAgarthaPlayerController_ForceBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaPlayerController.Client_PostLogin_NoSession
	 * 		Flags  -> ()
	 */
	void AProjectAgarthaPlayerController::Client_PostLogin_NoSession()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaPlayerController.Client_PostLogin_NoSession");
		
		AProjectAgarthaPlayerController_Client_PostLogin_NoSession_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaPlayerController.Client_PostLogin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      NetIdString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaPlayerController::Client_PostLogin(const class FString& NetIdString)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaPlayerController.Client_PostLogin");
		
		AProjectAgarthaPlayerController_Client_PostLogin_Params params {};
		params.NetIdString = NetIdString;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectAgarthaPlayerController.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectAgarthaPlayerController::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ProjectAgarthaPlayerController");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectAgarthaPlayerState.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectAgarthaPlayerState::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ProjectAgarthaPlayerState");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.ProjectAgarthaProjectile.OnHit
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UPrimitiveComponent*                         HitComp                                                    (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPrimitiveComponent*                         OtherComp                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     NormalImpulse                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  Hit                                                        (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	void AProjectAgarthaProjectile::OnHit(class UPrimitiveComponent* HitComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, const struct FVector& NormalImpulse, const struct FHitResult& Hit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.ProjectAgarthaProjectile.OnHit");
		
		AProjectAgarthaProjectile_OnHit_Params params {};
		params.HitComp = HitComp;
		params.OtherActor = OtherActor;
		params.OtherComp = OtherComp;
		params.NormalImpulse = NormalImpulse;
		params.Hit = Hit;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AProjectAgarthaProjectile.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AProjectAgarthaProjectile::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ProjectAgarthaProjectile");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialBaseMenuItem.OnUnhighlight
	 * 		Flags  -> ()
	 */
	void URadialBaseMenuItem::OnUnhighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialBaseMenuItem.OnUnhighlight");
		
		URadialBaseMenuItem_OnUnhighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialBaseMenuItem.OnSelected
	 * 		Flags  -> ()
	 */
	void URadialBaseMenuItem::OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialBaseMenuItem.OnSelected");
		
		URadialBaseMenuItem_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialBaseMenuItem.OnHighlight
	 * 		Flags  -> ()
	 */
	void URadialBaseMenuItem::OnHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialBaseMenuItem.OnHighlight");
		
		URadialBaseMenuItem_OnHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialBaseMenuItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialBaseMenuItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.RadialBaseMenuItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialIndividualCommandMenuItem.OnUnhighlight
	 * 		Flags  -> ()
	 */
	void URadialIndividualCommandMenuItem::OnUnhighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialIndividualCommandMenuItem.OnUnhighlight");
		
		URadialIndividualCommandMenuItem_OnUnhighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialIndividualCommandMenuItem.OnSelected
	 * 		Flags  -> ()
	 */
	void URadialIndividualCommandMenuItem::OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialIndividualCommandMenuItem.OnSelected");
		
		URadialIndividualCommandMenuItem_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialIndividualCommandMenuItem.OnHighlight
	 * 		Flags  -> ()
	 */
	void URadialIndividualCommandMenuItem::OnHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialIndividualCommandMenuItem.OnHighlight");
		
		URadialIndividualCommandMenuItem_OnHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialIndividualCommandMenuItem.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialIndividualCommandMenuItem::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.RadialIndividualCommandMenuItem");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialLabel.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialLabel::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.RadialLabel");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialTacticalCommandWidget.OnUnhighlight
	 * 		Flags  -> ()
	 */
	void URadialTacticalCommandWidget::OnUnhighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialTacticalCommandWidget.OnUnhighlight");
		
		URadialTacticalCommandWidget_OnUnhighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialTacticalCommandWidget.OnSelected
	 * 		Flags  -> ()
	 */
	void URadialTacticalCommandWidget::OnSelected()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialTacticalCommandWidget.OnSelected");
		
		URadialTacticalCommandWidget_OnSelected_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.RadialTacticalCommandWidget.OnHighlight
	 * 		Flags  -> ()
	 */
	void URadialTacticalCommandWidget::OnHighlight()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.RadialTacticalCommandWidget.OnHighlight");
		
		URadialTacticalCommandWidget_OnHighlight_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction URadialTacticalCommandWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* URadialTacticalCommandWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.RadialTacticalCommandWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShopComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShopComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.ShopComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.StaminaAttributeSet.OnRep_StaminaRegeneration
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStaminaAttributeSet::OnRep_StaminaRegeneration(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.StaminaAttributeSet.OnRep_StaminaRegeneration");
		
		UStaminaAttributeSet_OnRep_StaminaRegeneration_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.StaminaAttributeSet.OnRep_StaminaDrain
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStaminaAttributeSet::OnRep_StaminaDrain(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.StaminaAttributeSet.OnRep_StaminaDrain");
		
		UStaminaAttributeSet_OnRep_StaminaDrain_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.StaminaAttributeSet.OnRep_MaximumStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStaminaAttributeSet::OnRep_MaximumStamina(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.StaminaAttributeSet.OnRep_MaximumStamina");
		
		UStaminaAttributeSet_OnRep_MaximumStamina_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.StaminaAttributeSet.OnRep_CurrentStamina
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayAttributeData                      OldValue                                                   (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UStaminaAttributeSet::OnRep_CurrentStamina(const struct FGameplayAttributeData& OldValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.StaminaAttributeSet.OnRep_CurrentStamina");
		
		UStaminaAttributeSet_OnRep_CurrentStamina_Params params {};
		params.OldValue = OldValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UStaminaAttributeSet.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UStaminaAttributeSet::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.StaminaAttributeSet");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTacticalRadialMenuWidget.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTacticalRadialMenuWidget::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.TacticalRadialMenuWidget");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.TravelingGameMode.TravelNextLevel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class APlayerController*                           PlayerController                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool ATravelingGameMode::TravelNextLevel(class APlayerController* PlayerController)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.TravelingGameMode.TravelNextLevel");
		
		ATravelingGameMode_TravelNextLevel_Params params {};
		params.PlayerController = PlayerController;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.TravelingGameMode.LoadStreamLevelFinished
	 * 		Flags  -> ()
	 */
	void ATravelingGameMode::LoadStreamLevelFinished()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.TravelingGameMode.LoadStreamLevelFinished");
		
		ATravelingGameMode_LoadStreamLevelFinished_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATravelingGameMode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATravelingGameMode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.TravelingGameMode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.TutorialBox.OnOverlapBegin
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class AActor*                                      OverlappedActor                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AActor*                                      OtherActor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ATutorialBox::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.TutorialBox.OnOverlapBegin");
		
		ATutorialBox_OnOverlapBegin_Params params {};
		params.OverlappedActor = OverlappedActor;
		params.OtherActor = OtherActor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ATutorialBox.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ATutorialBox::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.TutorialBox");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.RectsMerge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FVector4>                            Rects                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UUtilityBlueprintFunctionLib::RectsMerge(TArray<struct FVector4>* Rects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.RectsMerge");
		
		UUtilityBlueprintFunctionLib_RectsMerge_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Rects != nullptr)
			*Rects = params.Rects;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.RectsCommonPart
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    Rect1                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Rect2                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    RectCommon                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtilityBlueprintFunctionLib::RectsCommonPart(const struct FVector4& Rect1, const struct FVector4& Rect2, struct FVector4* RectCommon)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.RectsCommonPart");
		
		UUtilityBlueprintFunctionLib_RectsCommonPart_Params params {};
		params.Rect1 = Rect1;
		params.Rect2 = Rect2;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RectCommon != nullptr)
			*RectCommon = params.RectCommon;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.RectMerge
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    RectParent                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    RectChild                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtilityBlueprintFunctionLib::RectMerge(struct FVector4* RectParent, const struct FVector4& RectChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.RectMerge");
		
		UUtilityBlueprintFunctionLib_RectMerge_Params params {};
		params.RectChild = RectChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (RectParent != nullptr)
			*RectParent = params.RectParent;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.RectInsideRect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    RectParent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    RectChild                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtilityBlueprintFunctionLib::RectInsideRect(const struct FVector4& RectParent, const struct FVector4& RectChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.RectInsideRect");
		
		UUtilityBlueprintFunctionLib_RectInsideRect_Params params {};
		params.RectParent = RectParent;
		params.RectChild = RectChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.RectCutRect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    RectParent                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    RectScissor                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector4>                            ContainerRects                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	bool UUtilityBlueprintFunctionLib::RectCutRect(const struct FVector4& RectParent, const struct FVector4& RectScissor, TArray<struct FVector4>* ContainerRects)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.RectCutRect");
		
		UUtilityBlueprintFunctionLib_RectCutRect_Params params {};
		params.RectParent = RectParent;
		params.RectScissor = RectScissor;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ContainerRects != nullptr)
			*ContainerRects = params.ContainerRects;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.RectContactRect
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector4                                    Rect1                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector4                                    Rect2                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Tolerance                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtilityBlueprintFunctionLib::RectContactRect(const struct FVector4& Rect1, const struct FVector4& Rect2, float Tolerance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.RectContactRect");
		
		UUtilityBlueprintFunctionLib_RectContactRect_Params params {};
		params.Rect1 = Rect1;
		params.Rect2 = Rect2;
		params.Tolerance = Tolerance;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.IsWeapon
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      _type                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtilityBlueprintFunctionLib::IsWeapon(EquipmentType _type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.IsWeapon");
		
		UUtilityBlueprintFunctionLib_IsWeapon_Params params {};
		params._type = _type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.IsEditor
	 * 		Flags  -> ()
	 */
	bool UUtilityBlueprintFunctionLib::IsEditor()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.IsEditor");
		
		UUtilityBlueprintFunctionLib_IsEditor_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.IsConsumable
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      _type                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtilityBlueprintFunctionLib::IsConsumable(EquipmentType _type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.IsConsumable");
		
		UUtilityBlueprintFunctionLib_IsConsumable_Params params {};
		params._type = _type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.IsArmor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EquipmentType                                      _type                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UUtilityBlueprintFunctionLib::IsArmor(EquipmentType _type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.IsArmor");
		
		UUtilityBlueprintFunctionLib_IsArmor_Params params {};
		params._type = _type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.GetStatTypeFormatting
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EItemStatType                                      _itemStat                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              _val                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUtilityBlueprintFunctionLib::GetStatTypeFormatting(EItemStatType _itemStat, float _val)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.GetStatTypeFormatting");
		
		UUtilityBlueprintFunctionLib_GetStatTypeFormatting_Params params {};
		params._itemStat = _itemStat;
		params._val = _val;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.GetStatEffects
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FItemStats                                  _stats                                                     (Parm, NativeAccessSpecifierPublic)
	 */
	TMap<EItemStatType, float> UUtilityBlueprintFunctionLib::GetStatEffects(const struct FItemStats& _stats)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.GetStatEffects");
		
		UUtilityBlueprintFunctionLib_GetStatEffects_Params params {};
		params._stats = _stats;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.GetDefaultAttackSpeed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		EWeaponType                                        _type                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UUtilityBlueprintFunctionLib::GetDefaultAttackSpeed(EWeaponType _type)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.GetDefaultAttackSpeed");
		
		UUtilityBlueprintFunctionLib_GetDefaultAttackSpeed_Params params {};
		params._type = _type;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.FormatDecimalPrecision
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              _val                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            _precision                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUtilityBlueprintFunctionLib::FormatDecimalPrecision(float _val, int32_t _precision)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.FormatDecimalPrecision");
		
		UUtilityBlueprintFunctionLib_FormatDecimalPrecision_Params params {};
		params._val = _val;
		params._precision = _precision;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.UtilityBlueprintFunctionLib.FormatAsPercentage
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              _val                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               _plusIfPositive                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class FString UUtilityBlueprintFunctionLib::FormatAsPercentage(float _val, bool _plusIfPositive)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.UtilityBlueprintFunctionLib.FormatAsPercentage");
		
		UUtilityBlueprintFunctionLib_FormatAsPercentage_Params params {};
		params._val = _val;
		params._plusIfPositive = _plusIfPositive;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUtilityBlueprintFunctionLib.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUtilityBlueprintFunctionLib::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.UtilityBlueprintFunctionLib");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVariancePlayerStart.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVariancePlayerStart::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.VariancePlayerStart");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.VoiceComponent.SayVoice
	 * 		Flags  -> ()
	 * Parameters:
	 * 		ECharacterVoice                                    VoiceLine                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bIsPriority                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoiceComponent::SayVoice(ECharacterVoice VoiceLine, bool bIsPriority)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.VoiceComponent.SayVoice");
		
		UVoiceComponent_SayVoice_Params params {};
		params.VoiceLine = VoiceLine;
		params.bIsPriority = bIsPriority;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.VoiceComponent.NotifyNearbyBots
	 * 		Flags  -> ()
	 */
	void UVoiceComponent::NotifyNearbyBots()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.VoiceComponent.NotifyNearbyBots");
		
		UVoiceComponent_NotifyNearbyBots_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function ProjectAgartha.VoiceComponent.LoadVoices
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        VoiceIdentifier                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UVoiceComponent::LoadVoices(const class FName& VoiceIdentifier)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ProjectAgartha.VoiceComponent.LoadVoices");
		
		UVoiceComponent_LoadVoices_Params params {};
		params.VoiceIdentifier = VoiceIdentifier;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVoiceComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVoiceComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ProjectAgartha.VoiceComponent");
		return ptr;
	}

}


