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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum MultiTask2.EMarchingCubesNormal
	 */
	enum class EMarchingCubesNormal : uint8_t
	{
		GradientAdvanced = 0,
		GradientBasic    = 1,
		Triangle         = 2,
		MAX              = 3
	};

	/**
	 * Enum MultiTask2.EMarchingCubesSimplifierType
	 */
	enum class EMarchingCubesSimplifierType : uint8_t
	{
		Vertex   = 0,
		Triangle = 1,
		MAX      = 2
	};

	/**
	 * Enum MultiTask2.EMarchingCubesSimplifierMethod
	 */
	enum class EMarchingCubesSimplifierMethod : uint8_t
	{
		QEM                = 0,
		VolumePreservation = 1,
		MAX                = 2
	};

	/**
	 * Enum MultiTask2.EMarchingCubesAlgorithm
	 */
	enum class EMarchingCubesAlgorithm : uint8_t
	{
		Simple       = 0,
		Dual         = 1,
		Tetrahedrons = 2,
		MAX          = 3
	};

	/**
	 * Enum MultiTask2.EMultiTask2ScaleType
	 */
	enum class EMultiTask2ScaleType : uint8_t
	{
		Uniform = 0,
		Free    = 1,
		LockXY  = 2,
		LockXZ  = 3,
		LockYZ  = 4,
		MAX     = 5
	};

	/**
	 * Enum MultiTask2.ERuntimeStaticMeshCollisionType
	 */
	enum class ERuntimeStaticMeshCollisionType : uint8_t
	{
		None   = 0,
		Simple = 1,
		Convex = 2,
		MAX    = 3
	};

	/**
	 * Enum MultiTask2.EMultiTask2BranchesNoCompleteWithBody
	 */
	enum class EMultiTask2BranchesNoCompleteWithBody : uint8_t
	{
		OnStart    = 0,
		OnTaskBody = 1,
		OnCanceled = 2,
		MAX        = 3
	};

	/**
	 * Enum MultiTask2.EMultiTask2BranchesNoComplete
	 */
	enum class EMultiTask2BranchesNoComplete : uint8_t
	{
		OnStart    = 0,
		OnCanceled = 1,
		MAX        = 2
	};

	/**
	 * Enum MultiTask2.EMultiTask2BranchesNoCancel
	 */
	enum class EMultiTask2BranchesNoCancel : uint8_t
	{
		OnStart     = 0,
		OnCompleted = 1,
		MAX         = 2
	};

	/**
	 * Enum MultiTask2.EMultiTask2BranchesWithBody
	 */
	enum class EMultiTask2BranchesWithBody : uint8_t
	{
		OnStart     = 0,
		OnTaskBody  = 1,
		OnCompleted = 2,
		OnCanceled  = 3,
		MAX         = 4
	};

	/**
	 * Enum MultiTask2.EMultiTask2Branches
	 */
	enum class EMultiTask2Branches : uint8_t
	{
		OnStart     = 0,
		OnCompleted = 1,
		OnCanceled  = 2,
		MAX         = 3
	};

	/**
	 * Enum MultiTask2.EMultiTaskThreadPriority
	 */
	enum class EMultiTaskThreadPriority : uint8_t
	{
		Normal              = 0,
		AboveNormal         = 1,
		BelowNormal         = 2,
		Highest             = 3,
		Lowest              = 4,
		SlightlyBelowNormal = 5,
		TimeCritical        = 6,
		MAX                 = 7
	};

	/**
	 * Enum MultiTask2.ETaskExecutionType
	 */
	enum class ETaskExecutionType : uint8_t
	{
		TaskGraph  = 0,
		Thread     = 1,
		ThreadPool = 2,
		MAX        = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MultiTask2.MarchingCubesSettings
	 * Size -> 0x0024
	 */
	struct FMarchingCubesSettings
	{
	public:
		struct FIntVector                                          Units;                                                   // 0x0000(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Resolution;                                              // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ISOLevel;                                                // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInverted;                                               // 0x0014(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_57H6[0x3];                                   // 0x0015(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntVector                                          WorldSize;                                               // 0x0018(0x000C) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MultiTask2.PixelData
	 * Size -> 0x0028
	 */
	struct FPixelData
	{
	public:
		unsigned char                                              UnknownData_06OK[0x28];                                  // 0x0000(0x0028) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MultiTask2.MultiTask2Delaunay2DTriangle
	 * Size -> 0x000C
	 */
	struct FMultiTask2Delaunay2DTriangle
	{
	public:
		int32_t                                                    A;                                                       // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    B;                                                       // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    C;                                                       // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MultiTask2.MarchingCubesMeshData
	 * Size -> 0x0060
	 */
	struct FMarchingCubesMeshData
	{
	public:
		TArray<struct FVector>                                     Positions;                                               // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            Indices;                                                 // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector>                                     Normals;                                                 // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FVector2D>                                   UVs;                                                     // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                Colors;                                                  // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FProcMeshTangent>                            Tangents;                                                // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MultiTask2.MarchingCubesSimplifierSettings
	 * Size -> 0x0008
	 */
	struct FMarchingCubesSimplifierSettings
	{
	public:
		float                                                      Quality;                                                 // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMarchingCubesSimplifierMethod                             Method;                                                  // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMarchingCubesSimplifierType                               TargetType;                                              // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForcePreserveBoundaryShape;                             // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1CAX[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MultiTask2.MarchingCubesData
	 * Size -> 0x0260
	 */
	struct FMarchingCubesData
	{
	public:
		unsigned char                                              UnknownData_VBB5[0x260];                                 // 0x0000(0x0260) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MultiTask2.MarchingCubesDensityPoint
	 * Size -> 0x0014
	 */
	struct FMarchingCubesDensityPoint
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        Color;                                                   // 0x0004(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MultiTask2.ThreadSafeInteger
	 * Size -> 0x0004
	 */
	struct FThreadSafeInteger
	{
	public:
		unsigned char                                              UnknownData_5T0K[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MultiTask2.ThreadSafeBoolean
	 * Size -> 0x0004
	 */
	struct FThreadSafeBoolean
	{
	public:
		unsigned char                                              UnknownData_KMZJ[0x4];                                   // 0x0000(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
