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
	 * 		Name   -> Function OVRLipSync.OVRLipSyncActorComponentBase.GetVisemes
	 * 		Flags  -> ()
	 */
	TArray<float> UOVRLipSyncActorComponentBase::GetVisemes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncActorComponentBase.GetVisemes");
		
		UOVRLipSyncActorComponentBase_GetVisemes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncActorComponentBase.GetVisemeNames
	 * 		Flags  -> ()
	 */
	TArray<class FString> UOVRLipSyncActorComponentBase::GetVisemeNames()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncActorComponentBase.GetVisemeNames");
		
		UOVRLipSyncActorComponentBase_GetVisemeNames_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncActorComponentBase.GetLaughterScore
	 * 		Flags  -> ()
	 */
	float UOVRLipSyncActorComponentBase::GetLaughterScore()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncActorComponentBase.GetLaughterScore");
		
		UOVRLipSyncActorComponentBase_GetLaughterScore_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncActorComponentBase.AssignVisemesToMorphTargets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Mesh                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FString>                              MorphTargetNames                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOVRLipSyncActorComponentBase::AssignVisemesToMorphTargets(class USkeletalMeshComponent* Mesh, TArray<class FString> MorphTargetNames)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncActorComponentBase.AssignVisemesToMorphTargets");
		
		UOVRLipSyncActorComponentBase_AssignVisemesToMorphTargets_Params params {};
		params.Mesh = Mesh;
		params.MorphTargetNames = MorphTargetNames;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOVRLipSyncActorComponentBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOVRLipSyncActorComponentBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OVRLipSync.OVRLipSyncActorComponentBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOVRLipSyncFrameSequence.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOVRLipSyncFrameSequence::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OVRLipSync.OVRLipSyncFrameSequence");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncActorComponent.Stop
	 * 		Flags  -> ()
	 */
	void UOVRLipSyncActorComponent::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncActorComponent.Stop");
		
		UOVRLipSyncActorComponent_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncActorComponent.Start
	 * 		Flags  -> ()
	 */
	void UOVRLipSyncActorComponent::Start()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncActorComponent.Start");
		
		UOVRLipSyncActorComponent_Start_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncActorComponent.PermissionCallback
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FString>                              Permissions                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<bool>                                       GrantResults                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOVRLipSyncActorComponent::PermissionCallback(TArray<class FString> Permissions, TArray<bool> GrantResults)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncActorComponent.PermissionCallback");
		
		UOVRLipSyncActorComponent_PermissionCallback_Params params {};
		params.Permissions = Permissions;
		params.GrantResults = GrantResults;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncActorComponent.OnVoiceCaptureTimer
	 * 		Flags  -> ()
	 */
	void UOVRLipSyncActorComponent::OnVoiceCaptureTimer()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncActorComponent.OnVoiceCaptureTimer");
		
		UOVRLipSyncActorComponent_OnVoiceCaptureTimer_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncActorComponent.FeedAudio
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<unsigned char>                              AudioData                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void UOVRLipSyncActorComponent::FeedAudio(TArray<unsigned char> AudioData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncActorComponent.FeedAudio");
		
		UOVRLipSyncActorComponent_FeedAudio_Params params {};
		params.AudioData = AudioData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOVRLipSyncActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOVRLipSyncActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OVRLipSync.OVRLipSyncActorComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncPlaybackActorComponent.Stop
	 * 		Flags  -> ()
	 */
	void UOVRLipSyncPlaybackActorComponent::Stop()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncPlaybackActorComponent.Stop");
		
		UOVRLipSyncPlaybackActorComponent_Stop_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncPlaybackActorComponent.Start
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UAudioComponent*                             InAudioComponent                                           (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UOVRLipSyncFrameSequence*                    InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOVRLipSyncPlaybackActorComponent::Start(class UAudioComponent* InAudioComponent, class UOVRLipSyncFrameSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncPlaybackActorComponent.Start");
		
		UOVRLipSyncPlaybackActorComponent_Start_Params params {};
		params.InAudioComponent = InAudioComponent;
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function OVRLipSync.OVRLipSyncPlaybackActorComponent.SetPlaybackSequence
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UOVRLipSyncFrameSequence*                    InSequence                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UOVRLipSyncPlaybackActorComponent::SetPlaybackSequence(class UOVRLipSyncFrameSequence* InSequence)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function OVRLipSync.OVRLipSyncPlaybackActorComponent.SetPlaybackSequence");
		
		UOVRLipSyncPlaybackActorComponent_SetPlaybackSequence_Params params {};
		params.InSequence = InSequence;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UOVRLipSyncPlaybackActorComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UOVRLipSyncPlaybackActorComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class OVRLipSync.OVRLipSyncPlaybackActorComponent");
		return ptr;
	}

}


