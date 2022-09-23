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
	 * Enum MovieRenderPipelineCore.FCPXMLExportDataSource
	 */
	enum class EFCPXMLExportDataSource : uint8_t
	{
		FCPXMLExportDataSource_OutputMetadata             = 0,
		FCPXMLExportDataSource_SequenceData               = 1,
		FCPXMLExportDataSource_FCPXMLExportDataSource_MAX = 2
	};

	/**
	 * Enum MovieRenderPipelineCore.EMoviePipelineTextureStreamingMethod
	 */
	enum class EMoviePipelineTextureStreamingMethod : uint8_t
	{
		None      = 0,
		Disabled  = 1,
		FullyLoad = 2,
		MAX       = 3
	};

	/**
	 * Enum MovieRenderPipelineCore.EMoviePipelineShutterTiming
	 */
	enum class EMoviePipelineShutterTiming : uint8_t
	{
		FrameOpen   = 0,
		FrameCenter = 1,
		FrameClose  = 2,
		MAX         = 3
	};

	/**
	 * Enum MovieRenderPipelineCore.EMovieRenderShotState
	 */
	enum class EMovieRenderShotState : uint8_t
	{
		Uninitialized = 0,
		WarmingUp     = 1,
		MotionBlur    = 2,
		Rendering     = 3,
		Finished      = 4,
		MAX           = 5
	};

	/**
	 * Enum MovieRenderPipelineCore.EMovieRenderPipelineState
	 */
	enum class EMovieRenderPipelineState : uint8_t
	{
		Uninitialized   = 0,
		ProducingFrames = 1,
		Finalize        = 2,
		Export          = 3,
		Finished        = 4,
		MAX             = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineCameraCutInfo
	 * Size -> 0x00B8
	 */
	struct FMoviePipelineCameraCutInfo
	{
	public:
		unsigned char                                              UnknownData_6NG5[0xB8];                                  // 0x0000(0x00B8) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MovieRenderPipelineCore.MoviePipelineSegmentWorkMetrics
	 * Size -> 0x0028
	 */
	struct FMoviePipelineSegmentWorkMetrics
	{
	public:
		class FString                                              SegmentName;                                             // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputFrameIndex;                                        // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalOutputFrameCount;                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputSubSampleIndex;                                    // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalSubSampleCount;                                     // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    EngineWarmUpFrameIndex;                                  // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TotalEngineWarmUpFrameCount;                             // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
