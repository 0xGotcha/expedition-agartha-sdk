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
	 * ScriptStruct SKModularPlugin.AngularLinearVelocityStruct
	 * Size -> 0x0018
	 */
	struct FAngularLinearVelocityStruct
	{
	public:
		struct FVector                                             LinearVelocity;                                          // 0x0000(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             AngularVelocityDegree;                                   // 0x000C(0x000C) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SKModularPlugin.SkeletalMeshMergeFreeSectionMapping
	 * Size -> 0x0010
	 */
	struct FSkeletalMeshMergeFreeSectionMapping
	{
	public:
		TArray<int32_t>                                            SectionIDs;                                              // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SKModularPlugin.SkelMeshMergeUVTransform
	 * Size -> 0x0010
	 */
	struct FSkelMeshMergeUVTransform
	{
	public:
		TArray<struct FTransform>                                  UVTransforms;                                            // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SKModularPlugin.SkelMeshMergeUVTransformMapping
	 * Size -> 0x0010
	 */
	struct FSkelMeshMergeUVTransformMapping
	{
	public:
		TArray<struct FSkelMeshMergeUVTransform>                   UVTransformsPerMesh;                                     // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SKModularPlugin.SkeletalMeshMergeParams
	 * Size -> 0x0048
	 */
	struct FSkeletalMeshMergeParams
	{
	public:
		TArray<class USkeletalMesh*>                               SkeletalMeshesList;                                      // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSkeletalMeshMergeFreeSectionMapping>        SectionMappings;                                         // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FSkelMeshMergeUVTransformMapping>            UVTransformsPerMesh;                                     // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RemoveTopLODs;                                           // 0x0030(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCpuAccess;                                           // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateSkeletonBefore;                                   // 0x0035(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2A02[0x2];                                   // 0x0036(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPhysicsAsset*                                       MeshPhysAssetOverride;                                   // 0x0038(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USkeleton*                                           SkeletonOverride;                                        // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SKModularPlugin.SkeletalMeshComponentManagerList
	 * Size -> 0x0060
	 */
	struct FSkeletalMeshComponentManagerList
	{
	public:
		class FName                                                SkeletalComponentName;                                   // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USkeletalMeshComponent*>                      AttachedCloths;                                          // 0x0008(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FSkeletalMeshMergeParams                            CurrentParams;                                           // 0x0018(0x0048) NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SKModularPlugin.ModularComponentGoreParams
	 * Size -> 0x0020
	 */
	struct FModularComponentGoreParams
	{
	public:
		TArray<class USkeletalMesh*>                               ModelsForBone;                                           // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class USkeletalMesh*>                               ModelsForBoneAfterBreaking;                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct SKModularPlugin.ModularComponentGoreBoneModels
	 * Size -> 0x0018
	 */
	struct FModularComponentGoreBoneModels
	{
	public:
		class FName                                                TargetBone;                                              // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class USkeletalMesh*>                               Models;                                                  // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
