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
	 * Class EasyVoiceChat.VoiceFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UVoiceFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		TArray<class APawn*> GetAllPawnsFromState(class UObject* WorldContextObject, class APawn* CurrentPlayer, float Distance);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyVoiceChat.VoipAudioComponent
	 * Size -> 0x0020 (FullSize[0x0740] - InheritedSize[0x0720])
	 */
	class UVoipAudioComponent : public UVoipListenerSynthComponent
	{
	public:
		unsigned char                                              UnknownData_YFT6[0x20];                                  // 0x0720(0x0020) MISSED OFFSET (PADDING)

	public:
		void PlayVoiceData(TArray<unsigned char> CompressedVoiceData);
		static UClass* StaticClass();
	};

	/**
	 * Class EasyVoiceChat.VoipManagerComponent
	 * Size -> 0x00D8 (FullSize[0x0188] - InheritedSize[0x00B0])
	 */
	class UVoipManagerComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             VoiceGenerated;                                          // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PlayerTalking;                                           // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             PlayerStopTalking;                                       // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHKT[0x8C];                                  // 0x00E0(0x008C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      StopTalkingThreshold;                                    // 0x016C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoSetConsoleVariables;                                // 0x0170(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ERCQ[0x3];                                   // 0x0171(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SilenceDetectionThreshold;                               // 0x0174(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NoiseGateThreshold;                                      // 0x0178(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      VoiceBufferDelay;                                        // 0x017C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_08ZG[0x8];                                   // 0x0180(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnVoiceGeneratedBP(TArray<unsigned char> VoiceBuffer, float MicLevel);
		void OnPlayerStopTalking();
		void OnPlayerStartTalking();
		bool InitVoice(class AController* Controller);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
