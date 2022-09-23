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
	 * 		Name   -> Function SKModularPlugin.AnimInstance_Detached.EnablePhysicsToComponent
	 * 		Flags  -> ()
	 */
	void UAnimInstance_Detached::EnablePhysicsToComponent()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.AnimInstance_Detached.EnablePhysicsToComponent");
		
		UAnimInstance_Detached_EnablePhysicsToComponent_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UAnimInstance_Detached.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UAnimInstance_Detached::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SKModularPlugin.AnimInstance_Detached");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularComponent.SetCurrentParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSkeletalMeshMergeParams                    MergeParams                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSkeletalMeshMergeParams                    OutParams                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	int32_t USKModularComponent::SetCurrentParams(const struct FSkeletalMeshMergeParams& MergeParams, class USkeletalMeshComponent* Target, struct FSkeletalMeshMergeParams* OutParams)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularComponent.SetCurrentParams");
		
		USKModularComponent_SetCurrentParams_Params params {};
		params.MergeParams = MergeParams;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutParams != nullptr)
			*OutParams = params.OutParams;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularComponent.RemoveSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               Skeletal                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      SkeletalMeshCompTarget                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularComponent::RemoveSkeletalMesh(class USkeletalMesh* Skeletal, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularComponent.RemoveSkeletalMesh");
		
		USKModularComponent_RemoveSkeletalMesh_Params params {};
		params.Skeletal = Skeletal;
		params.FreezeCloths = FreezeCloths;
		params.SkeletalMeshCompTarget = SkeletalMeshCompTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularComponent.RemoveMultipleSkeletalMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMesh*>                       Skeletals                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      SkeletalMeshCompTarget                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularComponent::RemoveMultipleSkeletalMeshes(TArray<class USkeletalMesh*> Skeletals, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularComponent.RemoveMultipleSkeletalMeshes");
		
		USKModularComponent_RemoveMultipleSkeletalMeshes_Params params {};
		params.Skeletals = Skeletals;
		params.FreezeCloths = FreezeCloths;
		params.SkeletalMeshCompTarget = SkeletalMeshCompTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularComponent.MergeSkeletalMeshesComp
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSkeletalMeshMergeParams                    MergeParams                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularComponent::MergeSkeletalMeshesComp(const struct FSkeletalMeshMergeParams& MergeParams, bool FreezeCloths, class USkeletalMeshComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularComponent.MergeSkeletalMeshesComp");
		
		USKModularComponent_MergeSkeletalMeshesComp_Params params {};
		params.MergeParams = MergeParams;
		params.FreezeCloths = FreezeCloths;
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularComponent.MergeSkeletalMeshesAndApplyToComponent
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FSkeletalMeshMergeParams                    MergeParams                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      SkeletalMeshCompTarget                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularComponent::MergeSkeletalMeshesAndApplyToComponent(const struct FSkeletalMeshMergeParams& MergeParams, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularComponent.MergeSkeletalMeshesAndApplyToComponent");
		
		USKModularComponent_MergeSkeletalMeshesAndApplyToComponent_Params params {};
		params.MergeParams = MergeParams;
		params.FreezeCloths = FreezeCloths;
		params.SkeletalMeshCompTarget = SkeletalMeshCompTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularComponent.GetTargetIndexList
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t USKModularComponent::GetTargetIndexList(class USkeletalMeshComponent* Target)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularComponent.GetTargetIndexList");
		
		USKModularComponent_GetTargetIndexList_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularComponent.GetCurrentMeshParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      Target                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               Found                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSkeletalMeshMergeParams USKModularComponent::GetCurrentMeshParams(class USkeletalMeshComponent* Target, bool* Found)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularComponent.GetCurrentMeshParams");
		
		USKModularComponent_GetCurrentMeshParams_Params params {};
		params.Target = Target;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Found != nullptr)
			*Found = params.Found;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularComponent.AddSkeletalMesh
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewSkeletal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      SkeletalMeshCompTarget                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularComponent::AddSkeletalMesh(class USkeletalMesh* NewSkeletal, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularComponent.AddSkeletalMesh");
		
		USKModularComponent_AddSkeletalMesh_Params params {};
		params.NewSkeletal = NewSkeletal;
		params.FreezeCloths = FreezeCloths;
		params.SkeletalMeshCompTarget = SkeletalMeshCompTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularComponent.AddMultipleSkeletalMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMesh*>                       NewSkeletals                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      SkeletalMeshCompTarget                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularComponent::AddMultipleSkeletalMeshes(TArray<class USkeletalMesh*> NewSkeletals, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularComponent.AddMultipleSkeletalMeshes");
		
		USKModularComponent_AddMultipleSkeletalMeshes_Params params {};
		params.NewSkeletals = NewSkeletals;
		params.FreezeCloths = FreezeCloths;
		params.SkeletalMeshCompTarget = SkeletalMeshCompTarget;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USKModularComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USKModularComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SKModularPlugin.SKModularComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularFunctionLibrary.RemovePhysAssetsBelowMultiple
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPhysicsAsset*                               MainPhysAsset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               MeshRef                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class FName>                                BoneNames                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeParents                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhysicsAsset* USKModularFunctionLibrary::RemovePhysAssetsBelowMultiple(class UObject* WorldContextObject, class UPhysicsAsset* MainPhysAsset, class USkeletalMesh* MeshRef, TArray<class FName> BoneNames, bool IncludeParents)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularFunctionLibrary.RemovePhysAssetsBelowMultiple");
		
		USKModularFunctionLibrary_RemovePhysAssetsBelowMultiple_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MainPhysAsset = MainPhysAsset;
		params.MeshRef = MeshRef;
		params.BoneNames = BoneNames;
		params.IncludeParents = IncludeParents;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularFunctionLibrary.RemovePhysAssetsBelow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPhysicsAsset*                               MainPhysAsset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               MeshRef                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeParent                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhysicsAsset* USKModularFunctionLibrary::RemovePhysAssetsBelow(class UObject* WorldContextObject, class UPhysicsAsset* MainPhysAsset, class USkeletalMesh* MeshRef, const class FName& BoneName, bool IncludeParent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularFunctionLibrary.RemovePhysAssetsBelow");
		
		USKModularFunctionLibrary_RemovePhysAssetsBelow_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MainPhysAsset = MainPhysAsset;
		params.MeshRef = MeshRef;
		params.BoneName = BoneName;
		params.IncludeParent = IncludeParent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularFunctionLibrary.RemovePhysAssetsBefore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPhysicsAsset*                               MainPhysAsset                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMesh*                               MeshRef                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        BoneName                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeChild                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhysicsAsset* USKModularFunctionLibrary::RemovePhysAssetsBefore(class UObject* WorldContextObject, class UPhysicsAsset* MainPhysAsset, class USkeletalMesh* MeshRef, const class FName& BoneName, bool IncludeChild)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularFunctionLibrary.RemovePhysAssetsBefore");
		
		USKModularFunctionLibrary_RemovePhysAssetsBefore_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MainPhysAsset = MainPhysAsset;
		params.MeshRef = MeshRef;
		params.BoneName = BoneName;
		params.IncludeChild = IncludeChild;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularFunctionLibrary.MergeSkeletalMeshes
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FSkeletalMeshMergeParams                    MergeParams                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               IncludeCloths                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class USkeletalMesh*>                       ClothSimulatedMeshes                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class USkeletalMesh* USKModularFunctionLibrary::MergeSkeletalMeshes(class UObject* WorldContextObject, const struct FSkeletalMeshMergeParams& MergeParams, bool IncludeCloths, TArray<class USkeletalMesh*>* ClothSimulatedMeshes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularFunctionLibrary.MergeSkeletalMeshes");
		
		USKModularFunctionLibrary_MergeSkeletalMeshes_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.MergeParams = MergeParams;
		params.IncludeCloths = IncludeCloths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ClothSimulatedMeshes != nullptr)
			*ClothSimulatedMeshes = params.ClothSimulatedMeshes;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularFunctionLibrary.MergePhysicsAssetsFromSkeletals
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class USkeletalMesh*>                       SkeletalMeshes                                             (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UPhysicsAsset* USKModularFunctionLibrary::MergePhysicsAssetsFromSkeletals(class UObject* WorldContextObject, TArray<class USkeletalMesh*> SkeletalMeshes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularFunctionLibrary.MergePhysicsAssetsFromSkeletals");
		
		USKModularFunctionLibrary_MergePhysicsAssetsFromSkeletals_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.SkeletalMeshes = SkeletalMeshes;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularFunctionLibrary.MergePhysicsAssets
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UPhysicsAsset*>                       PhysAssets                                                 (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	class UPhysicsAsset* USKModularFunctionLibrary::MergePhysicsAssets(class UObject* WorldContextObject, TArray<class UPhysicsAsset*> PhysAssets)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularFunctionLibrary.MergePhysicsAssets");
		
		USKModularFunctionLibrary_MergePhysicsAssets_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PhysAssets = PhysAssets;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularFunctionLibrary.MakeSkeletalMeshMergeParams
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMesh*>                       SkeletalMeshesList                                         (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSkeletalMeshMergeFreeSectionMapping> SectionMappings                                            (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FSkelMeshMergeUVTransformMapping>    UVTransformsPerMesh                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            RemoveTopLODs                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseCpuAccess                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdateSkeletonBefore                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPhysicsAsset*                               MeshPhysAssetOverride                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeleton*                                   SkeletonOverride                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	struct FSkeletalMeshMergeParams USKModularFunctionLibrary::MakeSkeletalMeshMergeParams(TArray<class USkeletalMesh*> SkeletalMeshesList, TArray<struct FSkeletalMeshMergeFreeSectionMapping> SectionMappings, TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh, int32_t RemoveTopLODs, bool bUseCpuAccess, bool bUpdateSkeletonBefore, class UPhysicsAsset* MeshPhysAssetOverride, class USkeleton* SkeletonOverride)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularFunctionLibrary.MakeSkeletalMeshMergeParams");
		
		USKModularFunctionLibrary_MakeSkeletalMeshMergeParams_Params params {};
		params.SkeletalMeshesList = SkeletalMeshesList;
		params.SectionMappings = SectionMappings;
		params.UVTransformsPerMesh = UVTransformsPerMesh;
		params.RemoveTopLODs = RemoveTopLODs;
		params.bUseCpuAccess = bUseCpuAccess;
		params.bUpdateSkeletonBefore = bUpdateSkeletonBefore;
		params.MeshPhysAssetOverride = MeshPhysAssetOverride;
		params.SkeletonOverride = SkeletonOverride;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularFunctionLibrary.ClonePhysicsAsset
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UPhysicsAsset*                               PhysicsAssetToClone                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UPhysicsAsset* USKModularFunctionLibrary::ClonePhysicsAsset(class UObject* WorldContextObject, class UPhysicsAsset* PhysicsAssetToClone)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularFunctionLibrary.ClonePhysicsAsset");
		
		USKModularFunctionLibrary_ClonePhysicsAsset_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.PhysicsAssetToClone = PhysicsAssetToClone;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USKModularFunctionLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USKModularFunctionLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SKModularPlugin.SKModularFunctionLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.SetSkeletalMeshTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMeshComponent*                      SkeletalMeshCompTarget                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USKModularGoreComponent::SetSkeletalMeshTarget(class USkeletalMeshComponent* SkeletalMeshCompTarget, bool FreezeCloths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.SetSkeletalMeshTarget");
		
		USKModularGoreComponent_SetSkeletalMeshTarget_Params params {};
		params.SkeletalMeshCompTarget = SkeletalMeshCompTarget;
		params.FreezeCloths = FreezeCloths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.RestoreSingleBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USKModularGoreComponent::RestoreSingleBone(const class FName& Bone, bool FreezeCloths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.RestoreSingleBone");
		
		USKModularGoreComponent_RestoreSingleBone_Params params {};
		params.Bone = Bone;
		params.FreezeCloths = FreezeCloths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.RestoreMultipleBones
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class FName>                                Bones                                                      (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USKModularGoreComponent::RestoreMultipleBones(TArray<class FName> Bones, bool FreezeCloths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.RestoreMultipleBones");
		
		USKModularGoreComponent_RestoreMultipleBones_Params params {};
		params.Bones = Bones;
		params.FreezeCloths = FreezeCloths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.RestoreModel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USKModularGoreComponent::RestoreModel(bool FreezeCloths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.RestoreModel");
		
		USKModularGoreComponent_RestoreModel_Params params {};
		params.FreezeCloths = FreezeCloths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.RestoreBonesBelow
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USKModularGoreComponent::RestoreBonesBelow(const class FName& Bone, bool FreezeCloths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.RestoreBonesBelow");
		
		USKModularGoreComponent_RestoreBonesBelow_Params params {};
		params.Bone = Bone;
		params.FreezeCloths = FreezeCloths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.RemoveSkeletalMeshFromGore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               Skeletal                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularGoreComponent::RemoveSkeletalMeshFromGore(class USkeletalMesh* Skeletal, bool FreezeCloths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.RemoveSkeletalMeshFromGore");
		
		USKModularGoreComponent_RemoveSkeletalMeshFromGore_Params params {};
		params.Skeletal = Skeletal;
		params.FreezeCloths = FreezeCloths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.RemoveMultipleSkeletalMeshesFromGore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<class USkeletalMesh*>                       Skeletals                                                  (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularGoreComponent::RemoveMultipleSkeletalMeshesFromGore(TArray<class USkeletalMesh*> Skeletals, bool FreezeCloths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.RemoveMultipleSkeletalMeshesFromGore");
		
		USKModularGoreComponent_RemoveMultipleSkeletalMeshesFromGore_Params params {};
		params.Skeletals = Skeletals;
		params.FreezeCloths = FreezeCloths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.MergeAndApplySkeletalToTarget
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularGoreComponent::MergeAndApplySkeletalToTarget(bool FreezeCloths)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.MergeAndApplySkeletalToTarget");
		
		USKModularGoreComponent_MergeAndApplySkeletalToTarget_Params params {};
		params.FreezeCloths = FreezeCloths;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.CreateSkeletalMeshComponentDetached
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      ParentComp                                                 (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      AlternativeMeshComp                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class USkeletalMeshComponent* USKModularGoreComponent::CreateSkeletalMeshComponentDetached(const class FName& Bone, class USkeletalMeshComponent* ParentComp, bool FreezeCloths, class USkeletalMeshComponent* AlternativeMeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.CreateSkeletalMeshComponentDetached");
		
		USKModularGoreComponent_CreateSkeletalMeshComponentDetached_Params params {};
		params.Bone = Bone;
		params.ParentComp = ParentComp;
		params.FreezeCloths = FreezeCloths;
		params.AlternativeMeshComp = AlternativeMeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.BreakBone
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FName                                        Bone                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class USkeletalMeshComponent*                      AlternativeMeshComp                                        (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USKModularGoreComponent::BreakBone(const class FName& Bone, bool FreezeCloths, class USkeletalMeshComponent* AlternativeMeshComp)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.BreakBone");
		
		USKModularGoreComponent_BreakBone_Params params {};
		params.Bone = Bone;
		params.FreezeCloths = FreezeCloths;
		params.AlternativeMeshComp = AlternativeMeshComp;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.AddSkeletalMeshToGore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class USkeletalMesh*                               NewSkeletal                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        AssignedBone                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AfterBreaking                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularGoreComponent::AddSkeletalMeshToGore(class USkeletalMesh* NewSkeletal, bool FreezeCloths, const class FName& AssignedBone, bool AfterBreaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.AddSkeletalMeshToGore");
		
		USKModularGoreComponent_AddSkeletalMeshToGore_Params params {};
		params.NewSkeletal = NewSkeletal;
		params.FreezeCloths = FreezeCloths;
		params.AssignedBone = AssignedBone;
		params.AfterBreaking = AfterBreaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function SKModularPlugin.SKModularGoreComponent.AddMultipleSkeletalMeshesToGore
	 * 		Flags  -> ()
	 * Parameters:
	 * 		TArray<struct FModularComponentGoreBoneModels>     NewSkeletals                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		bool                                               FreezeCloths                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               AfterBreaking                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USKModularGoreComponent::AddMultipleSkeletalMeshesToGore(TArray<struct FModularComponentGoreBoneModels> NewSkeletals, bool FreezeCloths, bool AfterBreaking)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function SKModularPlugin.SKModularGoreComponent.AddMultipleSkeletalMeshesToGore");
		
		USKModularGoreComponent_AddMultipleSkeletalMeshesToGore_Params params {};
		params.NewSkeletals = NewSkeletals;
		params.FreezeCloths = FreezeCloths;
		params.AfterBreaking = AfterBreaking;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USKModularGoreComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USKModularGoreComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class SKModularPlugin.SKModularGoreComponent");
		return ptr;
	}

}


