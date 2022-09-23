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
	 * Class SKModularPlugin.AnimInstance_Detached
	 * Size -> 0x0098 (FullSize[0x0350] - InheritedSize[0x02B8])
	 */
	class UAnimInstance_Detached : public UAnimInstance
	{
	public:
		unsigned char                                              UnknownData_KSAW[0x8];                                   // 0x02B8(0x0008) Fix Super Size
		TMap<class FName, struct FAngularLinearVelocityStruct>     BodiesVelocity;                                          // 0x02C0(0x0050) NativeAccessSpecifierPublic
		struct FPoseSnapshot                                       Detached_Snapshot;                                       // 0x0310(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6G77[0x8];                                   // 0x0348(0x0008) MISSED OFFSET (PADDING)

	public:
		void EnablePhysicsToComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class SKModularPlugin.SKModularComponent
	 * Size -> 0x0010 (FullSize[0x00C0] - InheritedSize[0x00B0])
	 */
	class USKModularComponent : public UActorComponent
	{
	public:
		TArray<struct FSkeletalMeshComponentManagerList>           ComponentsInfos;                                         // 0x00B0(0x0010) ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		int32_t SetCurrentParams(const struct FSkeletalMeshMergeParams& MergeParams, class USkeletalMeshComponent* Target, struct FSkeletalMeshMergeParams* OutParams);
		bool RemoveSkeletalMesh(class USkeletalMesh* Skeletal, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget);
		bool RemoveMultipleSkeletalMeshes(TArray<class USkeletalMesh*> Skeletals, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget);
		bool MergeSkeletalMeshesComp(const struct FSkeletalMeshMergeParams& MergeParams, bool FreezeCloths, class USkeletalMeshComponent* Target);
		bool MergeSkeletalMeshesAndApplyToComponent(const struct FSkeletalMeshMergeParams& MergeParams, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget);
		int32_t GetTargetIndexList(class USkeletalMeshComponent* Target);
		struct FSkeletalMeshMergeParams GetCurrentMeshParams(class USkeletalMeshComponent* Target, bool* Found);
		bool AddSkeletalMesh(class USkeletalMesh* NewSkeletal, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget);
		bool AddMultipleSkeletalMeshes(TArray<class USkeletalMesh*> NewSkeletals, bool FreezeCloths, class USkeletalMeshComponent* SkeletalMeshCompTarget);
		static UClass* StaticClass();
	};

	/**
	 * Class SKModularPlugin.SKModularFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USKModularFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class UPhysicsAsset* RemovePhysAssetsBelowMultiple(class UObject* WorldContextObject, class UPhysicsAsset* MainPhysAsset, class USkeletalMesh* MeshRef, TArray<class FName> BoneNames, bool IncludeParents);
		class UPhysicsAsset* RemovePhysAssetsBelow(class UObject* WorldContextObject, class UPhysicsAsset* MainPhysAsset, class USkeletalMesh* MeshRef, const class FName& BoneName, bool IncludeParent);
		class UPhysicsAsset* RemovePhysAssetsBefore(class UObject* WorldContextObject, class UPhysicsAsset* MainPhysAsset, class USkeletalMesh* MeshRef, const class FName& BoneName, bool IncludeChild);
		class USkeletalMesh* MergeSkeletalMeshes(class UObject* WorldContextObject, const struct FSkeletalMeshMergeParams& MergeParams, bool IncludeCloths, TArray<class USkeletalMesh*>* ClothSimulatedMeshes);
		class UPhysicsAsset* MergePhysicsAssetsFromSkeletals(class UObject* WorldContextObject, TArray<class USkeletalMesh*> SkeletalMeshes);
		class UPhysicsAsset* MergePhysicsAssets(class UObject* WorldContextObject, TArray<class UPhysicsAsset*> PhysAssets);
		struct FSkeletalMeshMergeParams MakeSkeletalMeshMergeParams(TArray<class USkeletalMesh*> SkeletalMeshesList, TArray<struct FSkeletalMeshMergeFreeSectionMapping> SectionMappings, TArray<struct FSkelMeshMergeUVTransformMapping> UVTransformsPerMesh, int32_t RemoveTopLODs, bool bUseCpuAccess, bool bUpdateSkeletonBefore, class UPhysicsAsset* MeshPhysAssetOverride, class USkeleton* SkeletonOverride);
		class UPhysicsAsset* ClonePhysicsAsset(class UObject* WorldContextObject, class UPhysicsAsset* PhysicsAssetToClone);
		static UClass* StaticClass();
	};

	/**
	 * Class SKModularPlugin.SKModularGoreComponent
	 * Size -> 0x0130 (FullSize[0x01F0] - InheritedSize[0x00C0])
	 */
	class USKModularGoreComponent : public USKModularComponent
	{
	public:
		TMap<class FName, struct FModularComponentGoreParams>      GoreMap;                                                 // 0x00C0(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		TMap<class FName, struct FModularComponentGoreParams>      AdditionalGoreMap;                                       // 0x0110(0x0050) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                DetachedCollisionProfileName;                            // 0x0160(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UPhysicsAsset*                                       DefaultPhysicsAssetGore;                                 // 0x0168(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeleton*                                           SkeletonOverride;                                        // 0x0170(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DetachedAnimInstance;                                    // 0x0178(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                CurrentRootName;                                         // 0x0180(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeletalMeshComponent*                              TargetGore;                                              // 0x0188(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        BrokenList;                                              // 0x0190(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TMap<class FName, class USkeletalMeshComponent*>           DetachedSKComps;                                         // 0x01A0(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		void SetSkeletalMeshTarget(class USkeletalMeshComponent* SkeletalMeshCompTarget, bool FreezeCloths);
		void RestoreSingleBone(const class FName& Bone, bool FreezeCloths);
		void RestoreMultipleBones(TArray<class FName> Bones, bool FreezeCloths);
		void RestoreModel(bool FreezeCloths);
		void RestoreBonesBelow(const class FName& Bone, bool FreezeCloths);
		bool RemoveSkeletalMeshFromGore(class USkeletalMesh* Skeletal, bool FreezeCloths);
		bool RemoveMultipleSkeletalMeshesFromGore(TArray<class USkeletalMesh*> Skeletals, bool FreezeCloths);
		bool MergeAndApplySkeletalToTarget(bool FreezeCloths);
		class USkeletalMeshComponent* CreateSkeletalMeshComponentDetached(const class FName& Bone, class USkeletalMeshComponent* ParentComp, bool FreezeCloths, class USkeletalMeshComponent* AlternativeMeshComp);
		void BreakBone(const class FName& Bone, bool FreezeCloths, class USkeletalMeshComponent* AlternativeMeshComp);
		bool AddSkeletalMeshToGore(class USkeletalMesh* NewSkeletal, bool FreezeCloths, const class FName& AssignedBone, bool AfterBreaking);
		bool AddMultipleSkeletalMeshesToGore(TArray<struct FModularComponentGoreBoneModels> NewSkeletals, bool FreezeCloths, bool AfterBreaking);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
