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
	 * 		Name   -> Function MultiTask2.MultiTaskBase.OnComplete
	 * 		Flags  -> ()
	 */
	void UMultiTaskBase::OnComplete()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTaskBase.OnComplete");
		
		UMultiTaskBase_OnComplete_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTaskBase.OnCancel
	 * 		Flags  -> ()
	 */
	void UMultiTaskBase::OnCancel()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTaskBase.OnCancel");
		
		UMultiTaskBase_OnCancel_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiTaskBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiTaskBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiTaskBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.ThreadTaskBase.WaitToFinish
	 * 		Flags  -> ()
	 */
	void UThreadTaskBase::WaitToFinish()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.ThreadTaskBase.WaitToFinish");
		
		UThreadTaskBase_WaitToFinish_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UThreadTaskBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UThreadTaskBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.ThreadTaskBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTask.TaskBody
	 * 		Flags  -> ()
	 */
	void UMultiThreadTask::TaskBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTask.TaskBody");
		
		UMultiThreadTask_TaskBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiThreadTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiThreadTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiThreadTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UDelaunayTriangulation2DTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDelaunayTriangulation2DTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.DelaunayTriangulation2DTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UFileToPixelDataTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UFileToPixelDataTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.FileToPixelDataTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.GenerateMarchingCubesTask.ConstructDensityPoint
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  VoxelCoordinates                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesDensityPoint                  DensityPoint                                               (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UGenerateMarchingCubesTask::ConstructDensityPoint(const struct FIntVector& VoxelCoordinates, struct FMarchingCubesDensityPoint* DensityPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.GenerateMarchingCubesTask.ConstructDensityPoint");
		
		UGenerateMarchingCubesTask_ConstructDensityPoint_Params params {};
		params.VoxelCoordinates = VoxelCoordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (DensityPoint != nullptr)
			*DensityPoint = params.DensityPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UGenerateMarchingCubesTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UGenerateMarchingCubesTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.GenerateMarchingCubesTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiFrameAsyncTask.TaskBody
	 * 		Flags  -> ()
	 */
	void UMultiFrameAsyncTask::TaskBody()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiFrameAsyncTask.TaskBody");
		
		UMultiFrameAsyncTask_TaskBody_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiFrameAsyncTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiFrameAsyncTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiFrameAsyncTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiFrameLoop1DTask.TaskBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiFrameLoop1DTask::TaskBody(int32_t X)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiFrameLoop1DTask.TaskBody");
		
		UMultiFrameLoop1DTask_TaskBody_Params params {};
		params.X = X;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiFrameLoop1DTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiFrameLoop1DTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiFrameLoop1DTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiFrameLoop2DTask.TaskBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiFrameLoop2DTask::TaskBody(int32_t X, int32_t Y)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiFrameLoop2DTask.TaskBody");
		
		UMultiFrameLoop2DTask_TaskBody_Params params {};
		params.X = X;
		params.Y = Y;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiFrameLoop2DTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiFrameLoop2DTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiFrameLoop2DTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiFrameLoop3DTask.TaskBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Z                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiFrameLoop3DTask::TaskBody(int32_t X, int32_t Y, int32_t Z)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiFrameLoop3DTask.TaskBody");
		
		UMultiFrameLoop3DTask_TaskBody_Params params {};
		params.X = X;
		params.Y = Y;
		params.Z = Z;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiFrameLoop3DTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiFrameLoop3DTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiFrameLoop3DTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiFrameTaskLibrary.DoLoop3DTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2BranchesWithBody                        Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Z                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiFrameLoop3DTask*                       Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            XSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            YSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            ZSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IterationsPerTick                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiFrameTaskLibrary::DoLoop3DTask(class UObject* WorldContextObject, EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, class UClass* Class, int32_t* X, int32_t* Y, int32_t* Z, class UMultiFrameLoop3DTask** Task, int32_t XSize, int32_t YSize, int32_t ZSize, int32_t IterationsPerTick, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiFrameTaskLibrary.DoLoop3DTask");
		
		UMultiFrameTaskLibrary_DoLoop3DTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Class = Class;
		params.XSize = XSize;
		params.YSize = YSize;
		params.ZSize = ZSize;
		params.IterationsPerTick = IterationsPerTick;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		if (Z != nullptr)
			*Z = params.Z;
		if (Task != nullptr)
			*Task = params.Task;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiFrameTaskLibrary.DoLoop2DTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2BranchesWithBody                        Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiFrameLoop2DTask*                       Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            XSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            YSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IterationsPerTick                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiFrameTaskLibrary::DoLoop2DTask(class UObject* WorldContextObject, EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, class UClass* Class, int32_t* X, int32_t* Y, class UMultiFrameLoop2DTask** Task, int32_t XSize, int32_t YSize, int32_t IterationsPerTick, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiFrameTaskLibrary.DoLoop2DTask");
		
		UMultiFrameTaskLibrary_DoLoop2DTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Class = Class;
		params.XSize = XSize;
		params.YSize = YSize;
		params.IterationsPerTick = IterationsPerTick;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (X != nullptr)
			*X = params.X;
		if (Y != nullptr)
			*Y = params.Y;
		if (Task != nullptr)
			*Task = params.Task;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiFrameTaskLibrary.DoLoop1DTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2BranchesWithBody                        Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiFrameLoop1DTask*                       Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            XSize                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IterationsPerTick                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiFrameTaskLibrary::DoLoop1DTask(class UObject* WorldContextObject, EMultiTask2BranchesWithBody* Out, const struct FLatentActionInfo& LatentInfo, class UClass* Class, int32_t* X, class UMultiFrameLoop1DTask** Task, int32_t XSize, int32_t IterationsPerTick, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiFrameTaskLibrary.DoLoop1DTask");
		
		UMultiFrameTaskLibrary_DoLoop1DTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Class = Class;
		params.XSize = XSize;
		params.IterationsPerTick = IterationsPerTick;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (X != nullptr)
			*X = params.X;
		if (Task != nullptr)
			*Task = params.Task;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiFrameTaskLibrary.DoAsyncTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2BranchesNoCompleteWithBody              Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiFrameAsyncTask*                        Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            IterationsPerTick                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Delay                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiFrameTaskLibrary::DoAsyncTask(class UObject* WorldContextObject, EMultiTask2BranchesNoCompleteWithBody* Out, const struct FLatentActionInfo& LatentInfo, class UClass* Class, class UMultiFrameAsyncTask** Task, int32_t IterationsPerTick, float Delay)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiFrameTaskLibrary.DoAsyncTask");
		
		UMultiFrameTaskLibrary_DoAsyncTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Class = Class;
		params.IterationsPerTick = IterationsPerTick;
		params.Delay = Delay;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (Task != nullptr)
			*Task = params.Task;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiFrameTaskLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiFrameTaskLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiFrameTaskLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::SphereTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleThreadSafe");
		
		UMultiTask2TraceLibrary_SphereTraceSingleThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleForObjectsThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::SphereTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleForObjectsThreadSafe");
		
		UMultiTask2TraceLibrary_SphereTraceSingleForObjectsThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleByProfileThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ProfileName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::SphereTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceSingleByProfileThreadSafe");
		
		UMultiTask2TraceLibrary_SphereTraceSingleByProfileThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.ProfileName = ProfileName;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::SphereTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiThreadSafe");
		
		UMultiTask2TraceLibrary_SphereTraceMultiThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiForObjectsThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::SphereTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiForObjectsThreadSafe");
		
		UMultiTask2TraceLibrary_SphereTraceMultiForObjectsThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiByProfileThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ProfileName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::SphereTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.SphereTraceMultiByProfileThreadSafe");
		
		UMultiTask2TraceLibrary_SphereTraceMultiByProfileThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.ProfileName = ProfileName;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::LineTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleThreadSafe");
		
		UMultiTask2TraceLibrary_LineTraceSingleThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleForObjectsThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::LineTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleForObjectsThreadSafe");
		
		UMultiTask2TraceLibrary_LineTraceSingleForObjectsThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleByProfileThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ProfileName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::LineTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.LineTraceSingleByProfileThreadSafe");
		
		UMultiTask2TraceLibrary_LineTraceSingleByProfileThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.ProfileName = ProfileName;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::LineTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiThreadSafe");
		
		UMultiTask2TraceLibrary_LineTraceMultiThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiForObjectsThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::LineTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiForObjectsThreadSafe");
		
		UMultiTask2TraceLibrary_LineTraceMultiForObjectsThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiByProfileThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ProfileName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::LineTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.LineTraceMultiByProfileThreadSafe");
		
		UMultiTask2TraceLibrary_LineTraceMultiByProfileThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.ProfileName = ProfileName;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::CapsuleTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleThreadSafe");
		
		UMultiTask2TraceLibrary_CapsuleTraceSingleThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.HalfHeight = HalfHeight;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleForObjectsThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::CapsuleTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleForObjectsThreadSafe");
		
		UMultiTask2TraceLibrary_CapsuleTraceSingleForObjectsThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.HalfHeight = HalfHeight;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleByProfileThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ProfileName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::CapsuleTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceSingleByProfileThreadSafe");
		
		UMultiTask2TraceLibrary_CapsuleTraceSingleByProfileThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.HalfHeight = HalfHeight;
		params.ProfileName = ProfileName;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::CapsuleTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiThreadSafe");
		
		UMultiTask2TraceLibrary_CapsuleTraceMultiThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.HalfHeight = HalfHeight;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiForObjectsThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::CapsuleTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiForObjectsThreadSafe");
		
		UMultiTask2TraceLibrary_CapsuleTraceMultiForObjectsThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.HalfHeight = HalfHeight;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiByProfileThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              HalfHeight                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FName                                        ProfileName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::CapsuleTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, float Radius, float HalfHeight, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.CapsuleTraceMultiByProfileThreadSafe");
		
		UMultiTask2TraceLibrary_CapsuleTraceMultiByProfileThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.Radius = Radius;
		params.HalfHeight = HalfHeight;
		params.ProfileName = ProfileName;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HalfSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::BoxTraceSingleThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleThreadSafe");
		
		UMultiTask2TraceLibrary_BoxTraceSingleThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.HalfSize = HalfSize;
		params.Orientation = Orientation;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleForObjectsThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HalfSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::BoxTraceSingleForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleForObjectsThreadSafe");
		
		UMultiTask2TraceLibrary_BoxTraceSingleForObjectsThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.HalfSize = HalfSize;
		params.Orientation = Orientation;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleByProfileThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HalfSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        ProfileName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::BoxTraceSingleByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, struct FHitResult* OutHit)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceSingleByProfileThreadSafe");
		
		UMultiTask2TraceLibrary_BoxTraceSingleByProfileThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.HalfSize = HalfSize;
		params.Orientation = Orientation;
		params.ProfileName = ProfileName;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHit != nullptr)
			*OutHit = params.OutHit;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HalfSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		ETraceTypeQuery                                    TraceChannel                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::BoxTraceMultiThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, ETraceTypeQuery TraceChannel, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiThreadSafe");
		
		UMultiTask2TraceLibrary_BoxTraceMultiThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.HalfSize = HalfSize;
		params.Orientation = Orientation;
		params.TraceChannel = TraceChannel;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiForObjectsThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HalfSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<EObjectTypeQuery>                           ObjectTypes                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::BoxTraceMultiForObjectsThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, TArray<EObjectTypeQuery> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiForObjectsThreadSafe");
		
		UMultiTask2TraceLibrary_BoxTraceMultiForObjectsThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.HalfSize = HalfSize;
		params.Orientation = Orientation;
		params.ObjectTypes = ObjectTypes;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiByProfileThreadSafe
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     World                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     HalfSize                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRotator                                    Orientation                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class FName                                        ProfileName                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTraceComplex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              ActorsToIgnore                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FHitResult>                          OutHits                                                    (Parm, OutParm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2TraceLibrary::BoxTraceMultiByProfileThreadSafe(class UObject* World, const struct FVector& Start, const struct FVector& End, const struct FVector& HalfSize, const struct FRotator& Orientation, const class FName& ProfileName, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TArray<struct FHitResult>* OutHits)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2TraceLibrary.BoxTraceMultiByProfileThreadSafe");
		
		UMultiTask2TraceLibrary_BoxTraceMultiByProfileThreadSafe_Params params {};
		params.World = World;
		params.Start = Start;
		params.End = End;
		params.HalfSize = HalfSize;
		params.Orientation = Orientation;
		params.ProfileName = ProfileName;
		params.bTraceComplex = bTraceComplex;
		params.ActorsToIgnore = ActorsToIgnore;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutHits != nullptr)
			*OutHits = params.OutHits;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiTask2TraceLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiTask2TraceLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiTask2TraceLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateNavigationData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UActorComponent*                             Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2UtilitiesLibrary::UpdateNavigationData(class UActorComponent* Component)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateNavigationData");
		
		UMultiTask2UtilitiesLibrary_UpdateNavigationData_Params params {};
		params.Component = Component;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateInstancePhysicsBody
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UHierarchicalInstancedStaticMeshComponent*   HISM                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            InstanceIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2UtilitiesLibrary::UpdateInstancePhysicsBody(class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t InstanceIndex, bool bTeleport)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.UpdateInstancePhysicsBody");
		
		UMultiTask2UtilitiesLibrary_UpdateInstancePhysicsBody_Params params {};
		params.HISM = HISM;
		params.InstanceIndex = InstanceIndex;
		params.bTeleport = bTeleport;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.SetMaximumLoopIterations
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            MaximumLoopIterations                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2UtilitiesLibrary::SetMaximumLoopIterations(int32_t MaximumLoopIterations)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.SetMaximumLoopIterations");
		
		UMultiTask2UtilitiesLibrary_SetMaximumLoopIterations_Params params {};
		params.MaximumLoopIterations = MaximumLoopIterations;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.SegmentTriangleIntersection
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     StartPoint                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     EndPoint                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     A                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     C                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutIntersectPoint                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutTriangleNormal                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2UtilitiesLibrary::SegmentTriangleIntersection(const struct FVector& StartPoint, const struct FVector& EndPoint, const struct FVector& A, const struct FVector& B, const struct FVector& C, struct FVector* OutIntersectPoint, struct FVector* OutTriangleNormal)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.SegmentTriangleIntersection");
		
		UMultiTask2UtilitiesLibrary_SegmentTriangleIntersection_Params params {};
		params.StartPoint = StartPoint;
		params.EndPoint = EndPoint;
		params.A = A;
		params.B = B;
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutIntersectPoint != nullptr)
			*OutIntersectPoint = params.OutIntersectPoint;
		if (OutTriangleNormal != nullptr)
			*OutTriangleNormal = params.OutTriangleNormal;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.ResetRunaway
	 * 		Flags  -> ()
	 */
	void UMultiTask2UtilitiesLibrary::ResetRunaway()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.ResetRunaway");
		
		UMultiTask2UtilitiesLibrary_ResetRunaway_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.RemoveFromRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2UtilitiesLibrary::RemoveFromRoot(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.RemoveFromRoot");
		
		UMultiTask2UtilitiesLibrary_RemoveFromRoot_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.MixThreeIntegers
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            Integer1                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Integer2                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Integer3                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	int32_t UMultiTask2UtilitiesLibrary::MixThreeIntegers(int32_t Integer1, int32_t Integer2, int32_t Integer3)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.MixThreeIntegers");
		
		UMultiTask2UtilitiesLibrary_MixThreeIntegers_Params params {};
		params.Integer1 = Integer1;
		params.Integer2 = Integer2;
		params.Integer3 = Integer3;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.IsRunning
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2UtilitiesLibrary::IsRunning(class UMultiTaskBase* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.IsRunning");
		
		UMultiTask2UtilitiesLibrary_IsRunning_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.IsCanceled
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2UtilitiesLibrary::IsCanceled(class UMultiTaskBase* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.IsCanceled");
		
		UMultiTask2UtilitiesLibrary_IsCanceled_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.GetTriangleAreaSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     A                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     C                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	float UMultiTask2UtilitiesLibrary::GetTriangleAreaSize(const struct FVector& A, const struct FVector& B, const struct FVector& C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.GetTriangleAreaSize");
		
		UMultiTask2UtilitiesLibrary_GetTriangleAreaSize_Params params {};
		params.A = A;
		params.B = B;
		params.C = C;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomScale
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Min                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Max                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2ScaleType                               Type                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRandomStream                               RandomStream                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Scale                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2UtilitiesLibrary::GetRandomScale(const struct FVector& Min, const struct FVector& Max, EMultiTask2ScaleType Type, const struct FRandomStream& RandomStream, struct FVector* Scale)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomScale");
		
		UMultiTask2UtilitiesLibrary_GetRandomScale_Params params {};
		params.Min = Min;
		params.Max = Max;
		params.Type = Type;
		params.RandomStream = RandomStream;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Scale != nullptr)
			*Scale = params.Scale;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomPointInTriangle
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     A                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     C                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FRandomStream                               RandomStream                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutPoint                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2UtilitiesLibrary::GetRandomPointInTriangle(const struct FVector& A, const struct FVector& B, const struct FVector& C, const struct FRandomStream& RandomStream, struct FVector* OutPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.GetRandomPointInTriangle");
		
		UMultiTask2UtilitiesLibrary_GetRandomPointInTriangle_Params params {};
		params.A = A;
		params.B = B;
		params.C = C;
		params.RandomStream = RandomStream;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutPoint != nullptr)
			*OutPoint = params.OutPoint;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.GetContextWorld
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UObject* UMultiTask2UtilitiesLibrary::GetContextWorld(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.GetContextWorld");
		
		UMultiTask2UtilitiesLibrary_GetContextWorld_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.Cancel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2UtilitiesLibrary::Cancel(class UMultiTaskBase* Task)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.Cancel");
		
		UMultiTask2UtilitiesLibrary_Cancel_Params params {};
		params.Task = Task;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2UtilitiesLibrary.AddToRoot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Object                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2UtilitiesLibrary::AddToRoot(class UObject* Object)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2UtilitiesLibrary.AddToRoot");
		
		UMultiTask2UtilitiesLibrary_AddToRoot_Params params {};
		params.Object = Object;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiTask2UtilitiesLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiTask2UtilitiesLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiTask2UtilitiesLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLocalLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     VoxelCoordinates                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2VoxelLibrary::VoxelCoordinatesToLocalLocation(const struct FVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLocalLocation");
		
		UMultiTask2VoxelLibrary_VoxelCoordinatesToLocalLocation_Params params {};
		params.VoxelCoordinates = VoxelCoordinates;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLinearIndex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  VoxelCoordinates                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t UMultiTask2VoxelLibrary::VoxelCoordinatesToLinearIndex(const struct FIntVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.VoxelCoordinatesToLinearIndex");
		
		UMultiTask2VoxelLibrary_VoxelCoordinatesToLinearIndex_Params params {};
		params.VoxelCoordinates = VoxelCoordinates;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.LinearIndexToVoxelCoordinates
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            LinearIndex                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  VoxelCoordinates                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2VoxelLibrary::LinearIndexToVoxelCoordinates(int32_t LinearIndex, const struct FMarchingCubesSettings& Settings, struct FIntVector* VoxelCoordinates)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.LinearIndexToVoxelCoordinates");
		
		UMultiTask2VoxelLibrary_LinearIndexToVoxelCoordinates_Params params {};
		params.LinearIndex = LinearIndex;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VoxelCoordinates != nullptr)
			*VoxelCoordinates = params.VoxelCoordinates;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.IsInRange
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  VoxelCoordinates                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2VoxelLibrary::IsInRange(const struct FIntVector& VoxelCoordinates, const struct FMarchingCubesSettings& Settings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.IsInRange");
		
		UMultiTask2VoxelLibrary_IsInRange_Params params {};
		params.VoxelCoordinates = VoxelCoordinates;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesInRadius
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  GeometryTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     BrushLocation                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Radius                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FIntVector>                          ReturnValue                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2VoxelLibrary::GetVoxelCoordinatesInRadius(const struct FTransform& GeometryTransform, const struct FVector& BrushLocation, const struct FVector& Radius, const struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesInRadius");
		
		UMultiTask2VoxelLibrary_GetVoxelCoordinatesInRadius_Params params {};
		params.GeometryTransform = GeometryTransform;
		params.BrushLocation = BrushLocation;
		params.Radius = Radius;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesAtLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FTransform                                  GeometryTransform                                          (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2VoxelLibrary::GetVoxelCoordinatesAtLocation(const struct FTransform& GeometryTransform, const struct FVector& Location, const struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetVoxelCoordinatesAtLocation");
		
		UMultiTask2VoxelLibrary_GetVoxelCoordinatesAtLocation_Params params {};
		params.GeometryTransform = GeometryTransform;
		params.Location = Location;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetVerticeCount_VoxelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMarchingCubesData                          VoxelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UMultiTask2VoxelLibrary::GetVerticeCount_VoxelData(const struct FMarchingCubesData& VoxelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetVerticeCount_VoxelData");
		
		UMultiTask2VoxelLibrary_GetVerticeCount_VoxelData_Params params {};
		params.VoxelData = VoxelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetVertice_VoxelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMarchingCubesData                          VoxelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            VerticeIndex                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     OutValue                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2VoxelLibrary::GetVertice_VoxelData(const struct FMarchingCubesData& VoxelData, int32_t VerticeIndex, struct FVector* OutValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetVertice_VoxelData");
		
		UMultiTask2VoxelLibrary_GetVertice_VoxelData_Params params {};
		params.VoxelData = VoxelData;
		params.VerticeIndex = VerticeIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (OutValue != nullptr)
			*OutValue = params.OutValue;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetTriangleCount_VoxelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMarchingCubesData                          VoxelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UMultiTask2VoxelLibrary::GetTriangleCount_VoxelData(const struct FMarchingCubesData& VoxelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetTriangleCount_VoxelData");
		
		UMultiTask2VoxelLibrary_GetTriangleCount_VoxelData_Params params {};
		params.VoxelData = VoxelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetTriangle_VoxelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FMarchingCubesData                          VoxelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            TriangleIndex                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            A                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            C                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2VoxelLibrary::GetTriangle_VoxelData(const struct FMarchingCubesData& VoxelData, int32_t TriangleIndex, int32_t* A, int32_t* B, int32_t* C)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetTriangle_VoxelData");
		
		UMultiTask2VoxelLibrary_GetTriangle_VoxelData_Params params {};
		params.VoxelData = VoxelData;
		params.TriangleIndex = TriangleIndex;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (A != nullptr)
			*A = params.A;
		if (B != nullptr)
			*B = params.B;
		if (C != nullptr)
			*C = params.C;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetRelevantSlots
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  RootSlot                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Radius                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FIntVector>                          ExistingChunks                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FIntVector>                          NewSlots                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FIntVector>                          OldRelevantSlots                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2VoxelLibrary::GetRelevantSlots(const struct FIntVector& RootSlot, int32_t Radius, TArray<struct FIntVector> ExistingChunks, const struct FMarchingCubesSettings& Settings, TArray<struct FIntVector>* NewSlots, TArray<struct FIntVector>* OldRelevantSlots)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetRelevantSlots");
		
		UMultiTask2VoxelLibrary_GetRelevantSlots_Params params {};
		params.RootSlot = RootSlot;
		params.Radius = Radius;
		params.ExistingChunks = ExistingChunks;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (NewSlots != nullptr)
			*NewSlots = params.NewSlots;
		if (OldRelevantSlots != nullptr)
			*OldRelevantSlots = params.OldRelevantSlots;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetNeighbor
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  VoxelCoordinates                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Direction                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  Neighbor                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UMultiTask2VoxelLibrary::GetNeighbor(const struct FIntVector& VoxelCoordinates, const struct FIntVector& Direction, const struct FMarchingCubesSettings& Settings, struct FIntVector* Neighbor)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetNeighbor");
		
		UMultiTask2VoxelLibrary_GetNeighbor_Params params {};
		params.VoxelCoordinates = VoxelCoordinates;
		params.Direction = Direction;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Neighbor != nullptr)
			*Neighbor = params.Neighbor;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetLocationFromChunkSlot
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FIntVector                                  ChunkSlot                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2VoxelLibrary::GetLocationFromChunkSlot(const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, struct FVector* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetLocationFromChunkSlot");
		
		UMultiTask2VoxelLibrary_GetLocationFromChunkSlot_Params params {};
		params.ChunkSlot = ChunkSlot;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.GetChunkSlotFromLocation
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FVector                                     Location                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2VoxelLibrary::GetChunkSlotFromLocation(const struct FVector& Location, const struct FMarchingCubesSettings& Settings, struct FIntVector* ReturnValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.GetChunkSlotFromLocation");
		
		UMultiTask2VoxelLibrary_GetChunkSlotFromLocation_Params params {};
		params.Location = Location;
		params.Settings = Settings;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ReturnValue != nullptr)
			*ReturnValue = params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.DoGenerateMarchingCubesTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  ChunkSlot                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMarchingCubesAlgorithm                            Algorithm                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bForceManifold                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseSharedPoints                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UGenerateMarchingCubesTask*                  Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesData                          VoxelData                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2VoxelLibrary::DoGenerateMarchingCubesTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* Class, const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, EMarchingCubesAlgorithm Algorithm, bool bForceManifold, bool bUseSharedPoints, class UGenerateMarchingCubesTask** Task, struct FMarchingCubesData* VoxelData, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.DoGenerateMarchingCubesTask");
		
		UMultiTask2VoxelLibrary_DoGenerateMarchingCubesTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Class = Class;
		params.ChunkSlot = ChunkSlot;
		params.Settings = Settings;
		params.Algorithm = Algorithm;
		params.bForceManifold = bForceManifold;
		params.bUseSharedPoints = bUseSharedPoints;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Task != nullptr)
			*Task = params.Task;
		if (VoxelData != nullptr)
			*VoxelData = params.VoxelData;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTask2VoxelLibrary.DoConvertVoxelDataToMeshDataTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FIntVector                                  ChunkSlot                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesSettings                      Settings                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMarchingCubesNormal                               NormalType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUseFlatShading                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FMarchingCubesData                          VoxelData                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMarchingCubesSimplifierSettings>    SimplifierSettings                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UGenerateMarchingCubesTask*                  Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMarchingCubesMeshData>              MeshData                                                   (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiTask2VoxelLibrary::DoConvertVoxelDataToMeshDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* Class, const struct FIntVector& ChunkSlot, const struct FMarchingCubesSettings& Settings, EMarchingCubesNormal NormalType, bool bUseFlatShading, struct FMarchingCubesData* VoxelData, TArray<struct FMarchingCubesSimplifierSettings> SimplifierSettings, class UGenerateMarchingCubesTask** Task, TArray<struct FMarchingCubesMeshData>* MeshData, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTask2VoxelLibrary.DoConvertVoxelDataToMeshDataTask");
		
		UMultiTask2VoxelLibrary_DoConvertVoxelDataToMeshDataTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Class = Class;
		params.ChunkSlot = ChunkSlot;
		params.Settings = Settings;
		params.NormalType = NormalType;
		params.bUseFlatShading = bUseFlatShading;
		params.SimplifierSettings = SimplifierSettings;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VoxelData != nullptr)
			*VoxelData = params.VoxelData;
		if (Task != nullptr)
			*Task = params.Task;
		if (MeshData != nullptr)
			*MeshData = params.MeshData;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiTask2VoxelLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiTask2VoxelLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiTask2VoxelLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTaskMutex.Unlock
	 * 		Flags  -> ()
	 */
	void UMultiTaskMutex::Unlock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTaskMutex.Unlock");
		
		UMultiTaskMutex_Unlock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTaskMutex.TryLock
	 * 		Flags  -> ()
	 */
	bool UMultiTaskMutex::TryLock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTaskMutex.TryLock");
		
		UMultiTaskMutex_TryLock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTaskMutex.Lock
	 * 		Flags  -> ()
	 */
	void UMultiTaskMutex::Lock()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTaskMutex.Lock");
		
		UMultiTaskMutex_Lock_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiTaskMutex.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiTaskMutex::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiTaskMutex");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiTaskThreadPool.GetThreadsNum
	 * 		Flags  -> ()
	 */
	int32_t UMultiTaskThreadPool::GetThreadsNum()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiTaskThreadPool.GetThreadsNum");
		
		UMultiTaskThreadPool_GetThreadsNum_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiTaskThreadPool.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiTaskThreadPool::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiTaskThreadPool");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.Sleep
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Seconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::Sleep(float Seconds)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.Sleep");
		
		UMultiThreadTaskLibrary_Sleep_Params params {};
		params.Seconds = Seconds;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.IsInGameThread
	 * 		Flags  -> ()
	 */
	bool UMultiThreadTaskLibrary::IsInGameThread()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.IsInGameThread");
		
		UMultiThreadTaskLibrary_IsInGameThread_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCoresIncludingHyperthreads
	 * 		Flags  -> ()
	 */
	int32_t UMultiThreadTaskLibrary::GetNumberOfCoresIncludingHyperthreads()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCoresIncludingHyperthreads");
		
		UMultiThreadTaskLibrary_GetNumberOfCoresIncludingHyperthreads_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCores
	 * 		Flags  -> ()
	 */
	int32_t UMultiThreadTaskLibrary::GetNumberOfCores()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.GetNumberOfCores");
		
		UMultiThreadTaskLibrary_GetNumberOfCores_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances4
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UHierarchicalInstancedStaticMeshComponent*   HISM                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Transforms                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector4>                            customData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Chunks                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdatePhysicsBodies                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateInternalDataCopies                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DoUpdateInstances4(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector4> customData, int32_t Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances4");
		
		UMultiThreadTaskLibrary_DoUpdateInstances4_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.HISM = HISM;
		params.StartIndex = StartIndex;
		params.Transforms = Transforms;
		params.customData = customData;
		params.Chunks = Chunks;
		params.bWorldSpace = bWorldSpace;
		params.bTeleport = bTeleport;
		params.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
		params.bMarkRenderStateDirty = bMarkRenderStateDirty;
		params.bCreateInternalDataCopies = bCreateInternalDataCopies;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Task != nullptr)
			*Task = params.Task;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances3
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UHierarchicalInstancedStaticMeshComponent*   HISM                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Transforms                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector>                             customData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Chunks                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdatePhysicsBodies                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateInternalDataCopies                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DoUpdateInstances3(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector> customData, int32_t Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances3");
		
		UMultiThreadTaskLibrary_DoUpdateInstances3_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.HISM = HISM;
		params.StartIndex = StartIndex;
		params.Transforms = Transforms;
		params.customData = customData;
		params.Chunks = Chunks;
		params.bWorldSpace = bWorldSpace;
		params.bTeleport = bTeleport;
		params.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
		params.bMarkRenderStateDirty = bMarkRenderStateDirty;
		params.bCreateInternalDataCopies = bCreateInternalDataCopies;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Task != nullptr)
			*Task = params.Task;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UHierarchicalInstancedStaticMeshComponent*   HISM                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Transforms                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           customData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Chunks                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdatePhysicsBodies                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateInternalDataCopies                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DoUpdateInstances2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t StartIndex, TArray<struct FTransform> Transforms, TArray<struct FVector2D> customData, int32_t Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances2");
		
		UMultiThreadTaskLibrary_DoUpdateInstances2_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.HISM = HISM;
		params.StartIndex = StartIndex;
		params.Transforms = Transforms;
		params.customData = customData;
		params.Chunks = Chunks;
		params.bWorldSpace = bWorldSpace;
		params.bTeleport = bTeleport;
		params.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
		params.bMarkRenderStateDirty = bMarkRenderStateDirty;
		params.bCreateInternalDataCopies = bCreateInternalDataCopies;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Task != nullptr)
			*Task = params.Task;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UHierarchicalInstancedStaticMeshComponent*   HISM                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StartIndex                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Transforms                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		TArray<float>                                      customData                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Chunks                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bTeleport                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bUpdatePhysicsBodies                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bMarkRenderStateDirty                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateInternalDataCopies                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DoUpdateInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, int32_t StartIndex, TArray<struct FTransform> Transforms, TArray<float> customData, int32_t Chunks, bool bWorldSpace, bool bTeleport, bool bUpdatePhysicsBodies, bool bMarkRenderStateDirty, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DoUpdateInstances");
		
		UMultiThreadTaskLibrary_DoUpdateInstances_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.HISM = HISM;
		params.StartIndex = StartIndex;
		params.Transforms = Transforms;
		params.customData = customData;
		params.Chunks = Chunks;
		params.bWorldSpace = bWorldSpace;
		params.bTeleport = bTeleport;
		params.bUpdatePhysicsBodies = bUpdatePhysicsBodies;
		params.bMarkRenderStateDirty = bMarkRenderStateDirty;
		params.bCreateInternalDataCopies = bCreateInternalDataCopies;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Task != nullptr)
			*Task = params.Task;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DoSpawnInstances
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UHierarchicalInstancedStaticMeshComponent*   HISM                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FTransform>                          Transforms                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Chunks                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bWorldSpace                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreatePhysicsBodies                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		bool                                               bCreateInternalDataCopies                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<int32_t>                                    NewInstances                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DoSpawnInstances(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UHierarchicalInstancedStaticMeshComponent* HISM, TArray<struct FTransform> Transforms, int32_t Chunks, bool bWorldSpace, bool bCreatePhysicsBodies, bool bCreateInternalDataCopies, class UMultiTaskBase** Task, TArray<int32_t>* NewInstances, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DoSpawnInstances");
		
		UMultiThreadTaskLibrary_DoSpawnInstances_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.HISM = HISM;
		params.Transforms = Transforms;
		params.Chunks = Chunks;
		params.bWorldSpace = bWorldSpace;
		params.bCreatePhysicsBodies = bCreatePhysicsBodies;
		params.bCreateInternalDataCopies = bCreateInternalDataCopies;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Task != nullptr)
			*Task = params.Task;
		if (NewInstances != nullptr)
			*NewInstances = params.NewInstances;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask2
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UMultiThreadTask*                            Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2BranchesWithBody                        Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DoSingleThreadTask2(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UMultiThreadTask** Task, EMultiTask2BranchesWithBody* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask2");
		
		UMultiThreadTaskLibrary_DoSingleThreadTask2_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Task != nullptr)
			*Task = params.Task;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiThreadTask*                            Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DoSingleThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* Class, class UMultiThreadTask** Task, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DoSingleThreadTask");
		
		UMultiThreadTaskLibrary_DoSingleThreadTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Class = Class;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Task != nullptr)
			*Task = params.Task;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DoMultiThreadTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Count                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class UMultiThreadTask*>                    Tasks                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMultiTask2BranchesNoCancel                        Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DoMultiThreadTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UClass* Class, int32_t Count, TArray<class UMultiThreadTask*>* Tasks, EMultiTask2BranchesNoCancel* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DoMultiThreadTask");
		
		UMultiThreadTaskLibrary_DoMultiThreadTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Class = Class;
		params.Count = Count;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Tasks != nullptr)
			*Tasks = params.Tasks;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DoDelaunayTriangulation2D
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		TArray<struct FVector2D>                           Points                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<struct FMultiTask2Delaunay2DTriangle>       Triangles                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DoDelaunayTriangulation2D(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, TArray<struct FVector2D>* Points, class UMultiTaskBase** Task, TArray<struct FMultiTask2Delaunay2DTriangle>* Triangles, EMultiTask2Branches* Out, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DoDelaunayTriangulation2D");
		
		UMultiThreadTaskLibrary_DoDelaunayTriangulation2D_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Points != nullptr)
			*Points = params.Points;
		if (Task != nullptr)
			*Task = params.Task;
		if (Triangles != nullptr)
			*Triangles = params.Triangles;
		if (Out != nullptr)
			*Out = params.Out;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.DestroyThreadPoolImmediately
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UMultiThreadTaskLibrary::DestroyThreadPoolImmediately(class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.DestroyThreadPoolImmediately");
		
		UMultiThreadTaskLibrary_DestroyThreadPoolImmediately_Params params {};
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.CreateThreadPool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            NumQueuedThreads                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            StackSize                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		EMultiTaskThreadPriority                           ThreadPriority                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      Name                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMultiTaskThreadPool* UMultiThreadTaskLibrary::CreateThreadPool(class UObject* WorldContextObject, int32_t NumQueuedThreads, int32_t StackSize, EMultiTaskThreadPriority ThreadPriority, const class FString& Name)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.CreateThreadPool");
		
		UMultiThreadTaskLibrary_CreateThreadPool_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.NumQueuedThreads = NumQueuedThreads;
		params.StackSize = StackSize;
		params.ThreadPriority = ThreadPriority;
		params.Name = Name;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.MultiThreadTaskLibrary.CreateMutex
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	class UMultiTaskMutex* UMultiThreadTaskLibrary::CreateMutex(class UObject* WorldContextObject)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.MultiThreadTaskLibrary.CreateMutex");
		
		UMultiThreadTaskLibrary_CreateMutex_Params params {};
		params.WorldContextObject = WorldContextObject;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UMultiThreadTaskLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UMultiThreadTaskLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.MultiThreadTaskLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.SetsRGB
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPixelData                                  PixelData                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		bool                                               NewValue                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPixelReaderLibrary::SetsRGB(struct FPixelData* PixelData, bool NewValue)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.SetsRGB");
		
		UPixelReaderLibrary_SetsRGB_Params params {};
		params.NewValue = NewValue;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PixelData != nullptr)
			*PixelData = params.PixelData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.SetSize
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPixelData                                  PixelData                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPixelReaderLibrary::SetSize(struct FPixelData* PixelData, int32_t Width, int32_t Height)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.SetSize");
		
		UPixelReaderLibrary_SetSize_Params params {};
		params.Width = Width;
		params.Height = Height;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PixelData != nullptr)
			*PixelData = params.PixelData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.SetPixel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPixelData                                  PixelData                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FIntPoint                                   Coordinates                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Pixel                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPixelReaderLibrary::SetPixel(struct FPixelData* PixelData, const struct FIntPoint& Coordinates, const struct FColor& Pixel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.SetPixel");
		
		UPixelReaderLibrary_SetPixel_Params params {};
		params.Coordinates = Coordinates;
		params.Pixel = Pixel;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (PixelData != nullptr)
			*PixelData = params.PixelData;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.IsPixelDataValid
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPixelData                                  PixelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	bool UPixelReaderLibrary::IsPixelDataValid(const struct FPixelData& PixelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.IsPixelDataValid");
		
		UPixelReaderLibrary_IsPixelDataValid_Params params {};
		params.PixelData = PixelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.GetWidth
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPixelData                                  PixelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UPixelReaderLibrary::GetWidth(const struct FPixelData& PixelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.GetWidth");
		
		UPixelReaderLibrary_GetWidth_Params params {};
		params.PixelData = PixelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.GetPixel
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPixelData                                  PixelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		struct FIntPoint                                   Coordinates                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FColor                                      Pixel                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool UPixelReaderLibrary::GetPixel(const struct FPixelData& PixelData, const struct FIntPoint& Coordinates, struct FColor* Pixel)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.GetPixel");
		
		UPixelReaderLibrary_GetPixel_Params params {};
		params.PixelData = PixelData;
		params.Coordinates = Coordinates;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Pixel != nullptr)
			*Pixel = params.Pixel;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.GetHeight
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FPixelData                                  PixelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	int32_t UPixelReaderLibrary::GetHeight(const struct FPixelData& PixelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.GetHeight");
		
		UPixelReaderLibrary_GetHeight_Params params {};
		params.PixelData = PixelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.DoReadUrlToPixelDataTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      URL                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              Timeout                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPixelData                                  PixelData                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPixelReaderLibrary::DoReadUrlToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EMultiTask2Branches* Out, const class FString& URL, float Timeout, struct FPixelData* PixelData, class UMultiTaskBase** Task, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.DoReadUrlToPixelDataTask");
		
		UPixelReaderLibrary_DoReadUrlToPixelDataTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.URL = URL;
		params.Timeout = Timeout;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (PixelData != nullptr)
			*PixelData = params.PixelData;
		if (Task != nullptr)
			*Task = params.Task;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.DoReadPixelsTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMultiTask2BranchesNoCancel                        Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPixelData                                  PixelData                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 */
	void UPixelReaderLibrary::DoReadPixelsTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EMultiTask2BranchesNoCancel* Out, class UTexture* Texture, struct FPixelData* PixelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.DoReadPixelsTask");
		
		UPixelReaderLibrary_DoReadPixelsTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.Texture = Texture;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (PixelData != nullptr)
			*PixelData = params.PixelData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.DoReadFileToPixelDataTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMultiTask2BranchesNoCancel                        Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class FString                                      File                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPixelData                                  PixelData                                                  (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPixelReaderLibrary::DoReadFileToPixelDataTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EMultiTask2BranchesNoCancel* Out, const class FString& File, struct FPixelData* PixelData, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.DoReadFileToPixelDataTask");
		
		UPixelReaderLibrary_DoReadFileToPixelDataTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.File = File;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (PixelData != nullptr)
			*PixelData = params.PixelData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.DoPixelDataDitheringTask
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     WorldContextObject                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FLatentActionInfo                           LatentInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		EMultiTask2Branches                                Out                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPixelData                                  PixelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 * 		int32_t                                            Scale                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPixelData                                  OutPixelData                                               (Parm, OutParm, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskBase*                              Task                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		ETaskExecutionType                                 ExecutionType                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class UMultiTaskThreadPool*                        ThreadPool                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void UPixelReaderLibrary::DoPixelDataDitheringTask(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, EMultiTask2Branches* Out, const struct FPixelData& PixelData, int32_t Scale, struct FPixelData* OutPixelData, class UMultiTaskBase** Task, ETaskExecutionType ExecutionType, class UMultiTaskThreadPool* ThreadPool)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.DoPixelDataDitheringTask");
		
		UPixelReaderLibrary_DoPixelDataDitheringTask_Params params {};
		params.WorldContextObject = WorldContextObject;
		params.LatentInfo = LatentInfo;
		params.PixelData = PixelData;
		params.Scale = Scale;
		params.ExecutionType = ExecutionType;
		params.ThreadPool = ThreadPool;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Out != nullptr)
			*Out = params.Out;
		if (OutPixelData != nullptr)
			*OutPixelData = params.OutPixelData;
		if (Task != nullptr)
			*Task = params.Task;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.PixelReaderLibrary.CreateTextureFromPixelData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UObject*                                     Outer                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FPixelData                                  PixelData                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	class UTexture2D* UPixelReaderLibrary::CreateTextureFromPixelData(class UObject* Outer, const struct FPixelData& PixelData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.PixelReaderLibrary.CreateTextureFromPixelData");
		
		UPixelReaderLibrary_CreateTextureFromPixelData_Params params {};
		params.Outer = Outer;
		params.PixelData = PixelData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPixelReaderLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPixelReaderLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.PixelReaderLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UPixelReaderTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UPixelReaderTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.PixelReaderTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USetDitheringTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USetDitheringTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.SetDitheringTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USpawnInstancesTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USpawnInstancesTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.SpawnInstancesTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetThreadSafeInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeInteger                          A                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FThreadSafeInteger                          B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USyncUtilitiesLibrary::ThreadSafeIntegerSetThreadSafeInteger(struct FThreadSafeInteger* A, const struct FThreadSafeInteger& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetThreadSafeInteger");
		
		USyncUtilitiesLibrary_ThreadSafeIntegerSetThreadSafeInteger_Params params {};
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (A != nullptr)
			*A = params.A;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeInteger                          A                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USyncUtilitiesLibrary::ThreadSafeIntegerSetInteger(struct FThreadSafeInteger* A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerSetInteger");
		
		USyncUtilitiesLibrary_ThreadSafeIntegerSetInteger_Params params {};
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (A != nullptr)
			*A = params.A;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerIncrement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeInteger                          ThreadSafeInteger                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USyncUtilitiesLibrary::ThreadSafeIntegerIncrement(struct FThreadSafeInteger* ThreadSafeInteger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerIncrement");
		
		USyncUtilitiesLibrary_ThreadSafeIntegerIncrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ThreadSafeInteger != nullptr)
			*ThreadSafeInteger = params.ThreadSafeInteger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsThreadSafeInteger
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeInteger                          A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FThreadSafeInteger                          B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USyncUtilitiesLibrary::ThreadSafeIntegerEqualsThreadSafeInteger(const struct FThreadSafeInteger& A, const struct FThreadSafeInteger& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsThreadSafeInteger");
		
		USyncUtilitiesLibrary_ThreadSafeIntegerEqualsThreadSafeInteger_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsInt32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeInteger                          A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		int32_t                                            B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USyncUtilitiesLibrary::ThreadSafeIntegerEqualsInt32(const struct FThreadSafeInteger& A, int32_t B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerEqualsInt32");
		
		USyncUtilitiesLibrary_ThreadSafeIntegerEqualsInt32_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerDecrement
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeInteger                          ThreadSafeInteger                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USyncUtilitiesLibrary::ThreadSafeIntegerDecrement(struct FThreadSafeInteger* ThreadSafeInteger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeIntegerDecrement");
		
		USyncUtilitiesLibrary_ThreadSafeIntegerDecrement_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (ThreadSafeInteger != nullptr)
			*ThreadSafeInteger = params.ThreadSafeInteger;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetThreadSafeBoolean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeBoolean                          A                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FThreadSafeBoolean                          B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	void USyncUtilitiesLibrary::ThreadSafeBooleanSetThreadSafeBoolean(struct FThreadSafeBoolean* A, const struct FThreadSafeBoolean& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetThreadSafeBoolean");
		
		USyncUtilitiesLibrary_ThreadSafeBooleanSetThreadSafeBoolean_Params params {};
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (A != nullptr)
			*A = params.A;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetBoolean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeBoolean                          A                                                          (Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               B                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void USyncUtilitiesLibrary::ThreadSafeBooleanSetBoolean(struct FThreadSafeBoolean* A, bool B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanSetBoolean");
		
		USyncUtilitiesLibrary_ThreadSafeBooleanSetBoolean_Params params {};
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (A != nullptr)
			*A = params.A;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsThreadSafeBoolean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeBoolean                          A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		struct FThreadSafeBoolean                          B                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USyncUtilitiesLibrary::ThreadSafeBooleanEqualsThreadSafeBoolean(const struct FThreadSafeBoolean& A, const struct FThreadSafeBoolean& B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsThreadSafeBoolean");
		
		USyncUtilitiesLibrary_ThreadSafeBooleanEqualsThreadSafeBoolean_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsBoolean
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeBoolean                          A                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 * 		bool                                               B                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	bool USyncUtilitiesLibrary::ThreadSafeBooleanEqualsBoolean(const struct FThreadSafeBoolean& A, bool B)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.ThreadSafeBooleanEqualsBoolean");
		
		USyncUtilitiesLibrary_ThreadSafeBooleanEqualsBoolean_Params params {};
		params.A = A;
		params.B = B;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeInteger                          ThreadSafeInteger                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString USyncUtilitiesLibrary::Conv_ThreadSafeIntegerToString(const struct FThreadSafeInteger& ThreadSafeInteger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToString");
		
		USyncUtilitiesLibrary_Conv_ThreadSafeIntegerToString_Params params {};
		params.ThreadSafeInteger = ThreadSafeInteger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToInt32
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeInteger                          ThreadSafeInteger                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	int32_t USyncUtilitiesLibrary::Conv_ThreadSafeIntegerToInt32(const struct FThreadSafeInteger& ThreadSafeInteger)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeIntegerToInt32");
		
		USyncUtilitiesLibrary_Conv_ThreadSafeIntegerToInt32_Params params {};
		params.ThreadSafeInteger = ThreadSafeInteger;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToString
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeBoolean                          ThreadSafeBoolean                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	class FString USyncUtilitiesLibrary::Conv_ThreadSafeBooleanToString(const struct FThreadSafeBoolean& ThreadSafeBoolean)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToString");
		
		USyncUtilitiesLibrary_Conv_ThreadSafeBooleanToString_Params params {};
		params.ThreadSafeBoolean = ThreadSafeBoolean;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToBool
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FThreadSafeBoolean                          ThreadSafeBoolean                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	 */
	bool USyncUtilitiesLibrary::Conv_ThreadSafeBooleanToBool(const struct FThreadSafeBoolean& ThreadSafeBoolean)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function MultiTask2.SyncUtilitiesLibrary.Conv_ThreadSafeBooleanToBool");
		
		USyncUtilitiesLibrary_Conv_ThreadSafeBooleanToBool_Params params {};
		params.ThreadSafeBoolean = ThreadSafeBoolean;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction USyncUtilitiesLibrary.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* USyncUtilitiesLibrary::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.SyncUtilitiesLibrary");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUpdateInstancesTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUpdateInstancesTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.UpdateInstancesTask");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUrlToPixelDataTask.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUrlToPixelDataTask::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class MultiTask2.UrlToPixelDataTask");
		return ptr;
	}

}


