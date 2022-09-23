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
	 * Function OVRLipSync.OVRLipSyncActorComponentBase.GetVisemes
	 */
	struct UOVRLipSyncActorComponentBase_GetVisemes_Params
	{
	public:
		TArray<float>                                              ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OVRLipSync.OVRLipSyncActorComponentBase.GetVisemeNames
	 */
	struct UOVRLipSyncActorComponentBase_GetVisemeNames_Params
	{
	public:
		TArray<class FString>                                      ReturnValue;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OVRLipSync.OVRLipSyncActorComponentBase.GetLaughterScore
	 */
	struct UOVRLipSyncActorComponentBase_GetLaughterScore_Params
	{
	public:
		float                                                      ReturnValue;                                             // 0x0000(0x0004)  (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OVRLipSync.OVRLipSyncActorComponentBase.AssignVisemesToMorphTargets
	 */
	struct UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh;                                                    // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		TArray<class FString>                                      MorphTargetNames;                                        // 0x0008(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OVRLipSync.OVRLipSyncActorComponent.Stop
	 */
	struct UOVRLipSyncActorComponent_Stop_Params
	{	};

	/**
	 * Function OVRLipSync.OVRLipSyncActorComponent.Start
	 */
	struct UOVRLipSyncActorComponent_Start_Params
	{	};

	/**
	 * Function OVRLipSync.OVRLipSyncActorComponent.PermissionCallback
	 */
	struct UOVRLipSyncActorComponent_PermissionCallback_Params
	{
	public:
		TArray<class FString>                                      Permissions;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		TArray<bool>                                               GrantResults;                                            // 0x0010(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OVRLipSync.OVRLipSyncActorComponent.OnVoiceCaptureTimer
	 */
	struct UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Params
	{	};

	/**
	 * Function OVRLipSync.OVRLipSyncActorComponent.FeedAudio
	 */
	struct UOVRLipSyncActorComponent_FeedAudio_Params
	{
	public:
		TArray<unsigned char>                                      AudioData;                                               // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OVRLipSync.OVRLipSyncPlaybackActorComponent.Stop
	 */
	struct UOVRLipSyncPlaybackActorComponent_Stop_Params
	{	};

	/**
	 * Function OVRLipSync.OVRLipSyncPlaybackActorComponent.Start
	 */
	struct UOVRLipSyncPlaybackActorComponent_Start_Params
	{
	public:
		class UAudioComponent*                                     InAudioComponent;                                        // 0x0000(0x0008)  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class UOVRLipSyncFrameSequence*                            InSequence;                                              // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function OVRLipSync.OVRLipSyncPlaybackActorComponent.SetPlaybackSequence
	 */
	struct UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Params
	{
	public:
		class UOVRLipSyncFrameSequence*                            InSequence;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
