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
	 * Class MultiTask2.MultiTaskBase
	 * Size -> 0x0074 (FullSize[0x009C] - InheritedSize[0x0028])
	 */
	class UMultiTaskBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_2B1G[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bIsTickable;                                             // 0x0030(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTickableInEditor;                                     // 0x0031(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsTickableWhenPaused;                                   // 0x0032(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9CB5[0x69];                                  // 0x0033(0x0069) Fix size for supers

	public:
		void OnComplete();
		void OnCancel();
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.ThreadTaskBase
	 * Size -> 0x0024 (FullSize[0x00C0] - InheritedSize[0x009C])
	 */
	class UThreadTaskBase : public UMultiTaskBase
	{
	public:
		unsigned char                                              UnknownData_4QV6[0x4];                                   // 0x009C(0x0004) Fix Super Size
		class UMultiTaskThreadPool*                                ThreadPool;                                              // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BBME[0x18];                                  // 0x00A8(0x0018) MISSED OFFSET (PADDING)

	public:
		void WaitToFinish();
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiThreadTask
	 * Size -> 0x0018 (FullSize[0x00D8] - InheritedSize[0x00C0])
	 */
	class UMultiThreadTask : public UThreadTaskBase
	{
	public:
		unsigned char                                              UnknownData_C6XS[0x18];                                  // 0x00C0(0x0018) Fix size for supers

	public:
		void TaskBody();
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.DelaunayTriangulation2DTask
	 * Size -> 0x0028 (FullSize[0x0100] - InheritedSize[0x00D8])
	 */
	class UDelaunayTriangulation2DTask : public UMultiThreadTask
	{
	public:
		unsigned char                                              UnknownData_M2G5[0x8];                                   // 0x00D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_7SPS[0x20];                                  // 0x00E0(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.FileToPixelDataTask
	 * Size -> 0x0038 (FullSize[0x0110] - InheritedSize[0x00D8])
	 */
	class UFileToPixelDataTask : public UMultiThreadTask
	{
	public:
		unsigned char                                              UnknownData_HVUO[0x8];                                   // 0x00D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_RQ14[0x30];                                  // 0x00E0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.GenerateMarchingCubesTask
	 * Size -> 0x03C8 (FullSize[0x04A0] - InheritedSize[0x00D8])
	 */
	class UGenerateMarchingCubesTask : public UMultiThreadTask
	{
	public:
		unsigned char                                              UnknownData_VWUM[0x4];                                   // 0x00D8(0x0004) Fix Super Size
		struct FMarchingCubesSettings                              Settings;                                                // 0x00DC(0x0024) Edit, BlueprintVisible, BlueprintReadOnly, Transient, NoDestructor, NativeAccessSpecifierPublic
		struct FIntVector                                          ChunkSlot;                                               // 0x0100(0x000C) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4N2Y[0x394];                                 // 0x010C(0x0394) MISSED OFFSET (PADDING)

	public:
		void ConstructDensityPoint(const struct FIntVector& VoxelCoordinates, struct FMarchingCubesDensityPoint* DensityPoint);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiFrameAsyncTask
	 * Size -> 0x0024 (FullSize[0x00C0] - InheritedSize[0x009C])
	 */
	class UMultiFrameAsyncTask : public UMultiTaskBase
	{
	public:
		float                                                      Delay;                                                   // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QN2W[0x20];                                  // 0x00A0(0x0020) MISSED OFFSET (PADDING)

	public:
		void TaskBody();
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiFrameLoop1DTask
	 * Size -> 0x0034 (FullSize[0x00D0] - InheritedSize[0x009C])
	 */
	class UMultiFrameLoop1DTask : public UMultiTaskBase
	{
	public:
		int32_t                                                    IterationsPerTick;                                       // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delay;                                                   // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GIHF[0x2C];                                  // 0x00A4(0x002C) MISSED OFFSET (PADDING)

	public:
		void TaskBody(int32_t X);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiFrameLoop2DTask
	 * Size -> 0x0034 (FullSize[0x00D0] - InheritedSize[0x009C])
	 */
	class UMultiFrameLoop2DTask : public UMultiTaskBase
	{
	public:
		int32_t                                                    YSize;                                                   // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IterationsPerTick;                                       // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delay;                                                   // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6VRN[0x28];                                  // 0x00A8(0x0028) MISSED OFFSET (PADDING)

	public:
		void TaskBody(int32_t X, int32_t Y);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiFrameLoop3DTask
	 * Size -> 0x0044 (FullSize[0x00E0] - InheritedSize[0x009C])
	 */
	class UMultiFrameLoop3DTask : public UMultiTaskBase
	{
	public:
		int32_t                                                    YSize;                                                   // 0x009C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ZSize;                                                   // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    IterationsPerTick;                                       // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Delay;                                                   // 0x00A8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9192[0x34];                                  // 0x00AC(0x0034) MISSED OFFSET (PADDING)

	public:
		void TaskBody(int32_t X, int32_t Y, int32_t Z);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiFrameTaskLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMultiFrameTaskLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void DoLoop3DTask(class UObject* WorldContextObject, EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, class UClass* Class, int32_t* X, int32_t* Y, int32_t* Z, class UMultiFrameLoop3DTask** Task, int32_t XSize, int32_t YSize, int32_t ZSize, int32_t IterationsPerTick, float Delay);
		void DoLoop2DTask(class UObject* WorldContextObject, EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, class UClass* Class, int32_t* X, int32_t* Y, class UMultiFrameLoop2DTask** Task, int32_t XSize, int32_t YSize, int32_t IterationsPerTick, float Delay);
		void DoLoop1DTask(class UObject* WorldContextObject, EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, class UClass* Class, int32_t* X, class UMultiFrameLoop1DTask** Task, int32_t XSize, int32_t IterationsPerTick, float Delay);
		void DoAsyncTask(class UObject* WorldContextObject, EMultiTask2BranchesNoCompleteWithBody* Out, const struct FLatentActionInfo& LatentInfo, class UClass* Class, class UMultiFrameAsyncTask** Task, int32_t IterationsPerTick, float Delay);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiTask2TraceLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMultiTask2TraceLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool SphereTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool SphereTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool SphereTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool SphereTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool SphereTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool SphereTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool LineTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool LineTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool LineTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool LineTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool LineTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool LineTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool CapsuleTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool CapsuleTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool CapsuleTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool CapsuleTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool CapsuleTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool CapsuleTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool BoxTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool BoxTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool BoxTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit);
		bool BoxTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool BoxTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		bool BoxTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiTask2UtilitiesLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMultiTask2UtilitiesLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateNavigationData(class UActorComponent* Component);
		bool UpdateInstancePhysicsBody(class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t InstanceIndex, bool bTeleport);
		void SetMaximumLoopIterations(int32_t MaximumLoopIterations);
		bool SegmentTriangleIntersection(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& A, const struct FVector& B, const struct FVector& C, struct FVector* OutIntersectPoint, struct FVector* OutTriangleNormal);
		void ResetRunaway();
		void RemoveFromRoot(class UObject* Object);
		int32_t MixThreeIntegers(int32_t Integer1, int32_t Integer2, int32_t Integer3);
		bool IsRunning(class UMultiTaskBase* Task);
		bool IsCanceled(class UMultiTaskBase* Task);
		float GetTriangleAreaSize(const struct FVector& A, const struct FVector& B, const struct FVector& C);
		void GetRandomScale(const struct FVector& Min, const struct FVector& Max, EMultiTask2ScaleType Type, const struct FRandomStream& RandomStream, struct FVector* Scale);
		void GetRandomPointInTriangle(const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FRandomStream& RandomStream, struct FVector* OutPoint);
		class UObject* GetContextWorld(class UObject* WorldContextObject);
		void Cancel(class UMultiTaskBase* Task);
		void AddToRoot(class UObject* Object);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiTask2VoxelLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMultiTask2VoxelLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void VoxelCoordinatesToLocalLocation(const struct FVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue);
		int32_t VoxelCoordinatesToLinearIndex(const struct FIntVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings);
		void LinearIndexToVoxelCoordinates(int32_t LinearIndex, const struct FMarchingCubesSettings& Settings, struct FIntVector* VoxelCoordinates);
		bool IsInRange(const struct FIntVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings);
		void GetVoxelCoordinatesInRadius(const struct FTransform& GeometryTransform, const struct FVector& BrushLocation, const struct FVector& Radius, const struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* ReturnValue);
		void GetVoxelCoordinatesAtLocation(const struct FTransform& GeometryTransform, const struct FVector& Location, const struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue);
		int32_t GetVerticeCount_VoxelData(const struct FMarchingCubesData& VoxelData);
		bool GetVertice_VoxelData(const struct FMarchingCubesData& VoxelData, int32_t VerticeIndex, struct FVector* OutValue);
		int32_t GetTriangleCount_VoxelData(const struct FMarchingCubesData& VoxelData);
		bool GetTriangle_VoxelData(const struct FMarchingCubesData& VoxelData, int32_t TriangleIndex, int32_t* A, int32_t* B, int32_t* C);
		void GetRelevantSlots(const struct FIntVector& RootSlot, int32_t Radius, TArray<struct FIntVector> ExistingChunks, const struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* NewSlots, TArray<struct FIntVector>* OldRelevantSlots);
		bool GetNeighbor(const struct FIntVector& VoxelCoordinates, const struct FIntVector& Direction, const struct FMarchingCubesSettings& Settings, struct FIntVector* Neighbor);
		void GetLocationFromChunkSlot(const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue);
		void GetChunkSlotFromLocation(const struct FVector& Location, const struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue);
		void DoGenerateMarchingCubesTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* Class, const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, EMarchingCubesAlgorithm Algorithm, bool bForceManifold, bool bUseSharedPoints, class UGenerateMarchingCubesTask** Task, struct FMarchingCubesData* VoxelData, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoConvertVoxelDataToMeshDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* Class, const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, EMarchingCubesNormal NormalType, bool bUseFlatShading, struct FMarchingCubesData* VoxelData, TArray<struct FMarchingCubesSimplifierSettings> SimplifierSettings, class UGenerateMarchingCubesTask** Task, TArray<struct FMarchingCubesMeshData>* MeshData, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiTaskMutex
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMultiTaskMutex : public UObject
	{
	public:
		unsigned char                                              UnknownData_CW70[0x28];                                  // 0x0028(0x0028) MISSED OFFSET (PADDING)

	public:
		void Unlock();
		bool TryLock();
		void Lock();
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiTaskThreadPool
	 * Size -> 0x0010 (FullSize[0x0038] - InheritedSize[0x0028])
	 */
	class UMultiTaskThreadPool : public UObject
	{
	public:
		unsigned char                                              UnknownData_M49R[0x10];                                  // 0x0028(0x0010) MISSED OFFSET (PADDING)

	public:
		int32_t GetThreadsNum();
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.MultiThreadTaskLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMultiThreadTaskLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void Sleep(float Seconds);
		bool IsInGameThread();
		int32_t GetNumberOfCoresIncludingHyperthreads();
		int32_t GetNumberOfCores();
		void DoUpdateInstances4(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector4> customData, int32_t Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoUpdateInstances3(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector> customData, int32_t Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoUpdateInstances2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector2D> customData, int32_t Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoUpdateInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t StartIndex, TArray<struct FTransform> Transforms, TArray<float> customData, int32_t Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoSpawnInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, TArray<struct FTransform> Transforms, int32_t Chunks, bool bWorldSpace, bool bCreatePhysicsBodies, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, TArray<int32_t>* NewInstances, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoSingleThreadTask2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMultiThreadTask** Task, EMultiTask2BranchesWithBody* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoSingleThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* Class, class UMultiThreadTask** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoMultiThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* Class, int32_t Count, TArray<class UMultiThreadTask*>* Tasks, EMultiTask2BranchesNoCancel* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoDelaunayTriangulation2D(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FVector2D>* Points, class UMultiTaskBase** Task, TArray<struct FMultiTask2Delaunay2DTriangle>* Triangles, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DestroyThreadPoolImmediately(class UMultiTaskThreadPool* ThreadPool);
		class UMultiTaskThreadPool* CreateThreadPool(class UObject* WorldContextObject, int32_t NumQueuedThreads, int32_t StackSize, EMultiTaskThreadPriority ThreadPriority, const class FString& Name);
		class UMultiTaskMutex* CreateMutex(class UObject* WorldContextObject);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.PixelReaderLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UPixelReaderLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void SetsRGB(struct FPixelData* PixelData, bool NewValue);
		void SetSize(struct FPixelData* PixelData, int32_t Width, int32_t Height);
		bool SetPixel(struct FPixelData* PixelData, const struct FIntPoint& Coordinates, const struct FColor& Pixel);
		bool IsPixelDataValid(const struct FPixelData& PixelData);
		int32_t GetWidth(const struct FPixelData& PixelData);
		bool GetPixel(const struct FPixelData& PixelData, const struct FIntPoint& Coordinates, struct FColor* Pixel);
		int32_t GetHeight(const struct FPixelData& PixelData);
		void DoReadUrlToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EMultiTask2Branches* Out, const class FString& URL, float Timeout, struct FPixelData* PixelData, class UMultiTaskBase** Task, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoReadPixelsTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EMultiTask2BranchesNoCancel* Out, class UTexture* Texture, struct FPixelData* PixelData);
		void DoReadFileToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EMultiTask2BranchesNoCancel* Out, const class FString& File, struct FPixelData* PixelData, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		void DoPixelDataDitheringTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EMultiTask2Branches* Out, const struct FPixelData& PixelData, int32_t Scale, struct FPixelData* OutPixelData, class UMultiTaskBase** Task, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool);
		class UTexture2D* CreateTextureFromPixelData(class UObject* Outer, const struct FPixelData& PixelData);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.PixelReaderTask
	 * Size -> 0x0038 (FullSize[0x0110] - InheritedSize[0x00D8])
	 */
	class UPixelReaderTask : public UMultiThreadTask
	{
	public:
		class UTexture*                                            TextureObj;                                              // 0x00D8(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FPixelData                                          PixelData;                                               // 0x00E0(0x0028) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Z4ZJ[0x8];                                   // 0x0108(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.SetDitheringTask
	 * Size -> 0x0038 (FullSize[0x0110] - InheritedSize[0x00D8])
	 */
	class USetDitheringTask : public UMultiThreadTask
	{
	public:
		unsigned char                                              UnknownData_SG7X[0x8];                                   // 0x00D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_I3AT[0x30];                                  // 0x00E0(0x0030) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.SpawnInstancesTask
	 * Size -> 0x0108 (FullSize[0x01E0] - InheritedSize[0x00D8])
	 */
	class USpawnInstancesTask : public UMultiThreadTask
	{
	public:
		unsigned char                                              UnknownData_BH32[0x8];                                   // 0x00D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_Z3MA[0x100];                                 // 0x00E0(0x0100) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.SyncUtilitiesLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USyncUtilitiesLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void ThreadSafeIntegerSetThreadSafeInteger(struct FThreadSafeInteger* A, const struct FThreadSafeInteger& B);
		void ThreadSafeIntegerSetInteger(struct FThreadSafeInteger* A, int32_t B);
		void ThreadSafeIntegerIncrement(struct FThreadSafeInteger* ThreadSafeInteger);
		bool ThreadSafeIntegerEqualsThreadSafeInteger(const struct FThreadSafeInteger& A, const struct FThreadSafeInteger& B);
		bool ThreadSafeIntegerEqualsInt32(const struct FThreadSafeInteger& A, int32_t B);
		void ThreadSafeIntegerDecrement(struct FThreadSafeInteger* ThreadSafeInteger);
		void ThreadSafeBooleanSetThreadSafeBoolean(struct FThreadSafeBoolean* A, const struct FThreadSafeBoolean& B);
		void ThreadSafeBooleanSetBoolean(struct FThreadSafeBoolean* A, bool B);
		bool ThreadSafeBooleanEqualsThreadSafeBoolean(const struct FThreadSafeBoolean& A, const struct FThreadSafeBoolean& B);
		bool ThreadSafeBooleanEqualsBoolean(const struct FThreadSafeBoolean& A, bool B);
		class FString Conv_ThreadSafeIntegerToString(const struct FThreadSafeInteger& ThreadSafeInteger);
		int32_t Conv_ThreadSafeIntegerToInt32(const struct FThreadSafeInteger& ThreadSafeInteger);
		class FString Conv_ThreadSafeBooleanToString(const struct FThreadSafeBoolean& ThreadSafeBoolean);
		bool Conv_ThreadSafeBooleanToBool(const struct FThreadSafeBoolean& ThreadSafeBoolean);
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.UpdateInstancesTask
	 * Size -> 0x0148 (FullSize[0x0220] - InheritedSize[0x00D8])
	 */
	class UUpdateInstancesTask : public UMultiThreadTask
	{
	public:
		unsigned char                                              UnknownData_6QPJ[0x8];                                   // 0x00D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_WO23[0x140];                                 // 0x00E0(0x0140) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MultiTask2.UrlToPixelDataTask
	 * Size -> 0x0058 (FullSize[0x0130] - InheritedSize[0x00D8])
	 */
	class UUrlToPixelDataTask : public UMultiThreadTask
	{
	public:
		unsigned char                                              UnknownData_K47R[0x8];                                   // 0x00D8(0x0008) Fix Super Size
		unsigned char                                              UnknownData_TVGN[0x50];                                  // 0x00E0(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
