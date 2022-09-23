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
	 * Class OVRLipSync.OVRLipSyncActorComponentBase
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UOVRLipSyncActorComponentBase : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnVisemesReady;                                          // 0x00B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7TEO[0x18];                                  // 0x00C0(0x0018) MISSED OFFSET (PADDING)

	public:
		TArray<float> GetVisemes();
		TArray<class FString> GetVisemeNames();
		float GetLaughterScore();
		void AssignVisemesToMorphTargets(class USkeletalMeshComponent* Mesh, TArray<class FString> MorphTargetNames);
		static UClass* StaticClass();
	};

	/**
	 * Class OVRLipSync.OVRLipSyncFrameSequence
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UOVRLipSyncFrameSequence : public UObject
	{
	public:
		TArray<struct FOVRLipSyncFrame>                            FrameSequence;                                           // 0x0028(0x0010) ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class OVRLipSync.OVRLipSyncActorComponent
	 * Size -> 0x0038 (FullSize[0x0110] - InheritedSize[0x00D8])
	 */
	class UOVRLipSyncActorComponent : public UOVRLipSyncActorComponentBase
	{
	public:
		int32_t                                                    SampleRate;                                              // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BufferSize;                                              // 0x00DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EOVRLipSyncProviderKind                                    ProviderKind;                                            // 0x00E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       EnableHardwareAcceleration;                              // 0x00E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FB5B[0x2E];                                  // 0x00E2(0x002E) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void Start();
		void PermissionCallback(TArray<class FString> Permissions, TArray<bool> GrantResults);
		void OnVoiceCaptureTimer();
		void FeedAudio(TArray<unsigned char> AudioData);
		static UClass* StaticClass();
	};

	/**
	 * Class OVRLipSync.OVRLipSyncPlaybackActorComponent
	 * Size -> 0x0020 (FullSize[0x00F8] - InheritedSize[0x00D8])
	 */
	class UOVRLipSyncPlaybackActorComponent : public UOVRLipSyncActorComponentBase
	{
	public:
		class UOVRLipSyncFrameSequence*                            Sequence;                                                // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAudioComponent*                                     AudioComponent;                                          // 0x00E0(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99ZQ[0x10];                                  // 0x00E8(0x0010) MISSED OFFSET (PADDING)

	public:
		void Stop();
		void Start(class UAudioComponent* InAudioComponent, class UOVRLipSyncFrameSequence* InSequence);
		void SetPlaybackSequence(class UOVRLipSyncFrameSequence* InSequence);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
