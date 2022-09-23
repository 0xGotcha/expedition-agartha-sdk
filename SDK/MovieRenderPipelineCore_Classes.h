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
	 * Class MovieRenderPipelineCore.MoviePipeline
	 * Size -> 0x0270 (FullSize[0x0298] - InheritedSize[0x0028])
	 */
	class UMoviePipeline : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnMoviePipelineFinishedDelegate;                         // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UMoviePipelineCustomTimeStep*                        CustomTimeStep;                                          // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FCYS[0x10];                                  // 0x0040(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UEngineCustomTimeStep*                               CachedPrevCustomTimeStep;                                // 0x0050(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULevelSequence*                                      TargetSequence;                                          // 0x0058(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ALevelSequenceActor*                                 LevelSequenceActor;                                      // 0x0060(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMovieRenderDebugWidget*                             DebugWidget;                                             // 0x0068(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTexture*                                            PreviewTexture;                                          // 0x0070(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AACT[0x1D8];                                 // 0x0078(0x01D8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              DebugWidgetClass;                                        // 0x0250(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMoviePipelineExecutorJob*                           CurrentJob;                                              // 0x0258(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ND6T[0x38];                                  // 0x0260(0x0038) MISSED OFFSET (PADDING)

	public:
		void Shutdown(bool bError);
		void RequestShutdown(bool bIsError);
		void OnMoviePipelineFinishedImpl();
		bool IsShutdownRequested();
		void Initialize(class UMoviePipelineExecutorJob* InJob);
		class UTexture* GetPreviewTexture();
		class UMoviePipelineMasterConfig* GetPipelineMasterConfig();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineCustomTimeStep
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
	{
	public:
		unsigned char                                              UnknownData_TN0D[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineSetting
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	class UMoviePipelineSetting : public UObject
	{
	public:
		TWeakObjectPtr<class UMoviePipeline>                       CachedPipeline;                                          // 0x0028(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnabled;                                                // 0x0030(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FNGO[0x17];                                  // 0x0031(0x0017) MISSED OFFSET (PADDING)

	public:
		void BuildNewProcessCommandLine(class FString* InOutUnrealURLParams, class FString* InOutCommandLineArgs);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineAntiAliasingSetting
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
	{
	public:
		int32_t                                                    SpatialSampleCount;                                      // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TemporalSampleCount;                                     // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideAntiAliasing;                                   // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EAntiAliasingMethod                                        AntiAliasingMethod;                                      // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CR8V[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    RenderWarmUpCount;                                       // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCameraCutForWarmUp;                                  // 0x0058(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YV6P[0x3];                                   // 0x0059(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    EngineWarmUpCount;                                       // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRenderWarmUpFrames;                                     // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5CD6[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob);
		int32_t ResolveVersionNumber(class UMoviePipeline* InMoviePipeline);
		EMovieRenderPipelineState GetPipelineState(class UMoviePipeline* InPipeline);
		void GetOverallSegmentCounts(class UMoviePipeline* InMoviePipeline, int32_t* OutCurrentIndex, int32_t* OutTotalCount);
		void GetOverallOutputFrames(class UMoviePipeline* InMoviePipeline, int32_t* OutCurrentIndex, int32_t* OutTotalCount);
		struct FTimecode GetMasterTimecode(class UMoviePipeline* InMoviePipeline);
		struct FFrameNumber GetMasterFrameNumber(class UMoviePipeline* InMoviePipeline);
		class FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);
		class FText GetJobName(class UMoviePipeline* InMoviePipeline);
		struct FDateTime GetJobInitializationTime(class UMoviePipeline* InMoviePipeline);
		class FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);
		bool GetEstimatedTimeRemaining(class UMoviePipeline* InPipeline, struct FTimespan* OutEstimate);
		struct FTimecode GetCurrentShotTimecode(class UMoviePipeline* InMoviePipeline);
		struct FFrameNumber GetCurrentShotFrameNumber(class UMoviePipeline* InMoviePipeline);
		struct FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(class UMoviePipeline* InMoviePipeline);
		EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);
		void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, class FText* OutOuterName, class FText* OutInnerName);
		float GetCompletionPercentage(class UMoviePipeline* InPipeline);
		class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineCameraSetting
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UMoviePipelineCameraSetting : public UMoviePipelineSetting
	{
	public:
		EMoviePipelineShutterTiming                                ShutterTiming;                                           // 0x0048(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFH7[0x7];                                   // 0x0049(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineColorSetting
	 * Size -> 0x0068 (FullSize[0x00B0] - InheritedSize[0x0048])
	 */
	class UMoviePipelineColorSetting : public UMoviePipelineSetting
	{
	public:
		struct FOpenColorIODisplayConfiguration                    OCIOConfiguration;                                       // 0x0048(0x0060) Edit, BlueprintVisible, AdvancedDisplay, NativeAccessSpecifierPublic
		bool                                                       bDisableToneCurve;                                       // 0x00A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M4DI[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineConfigBase
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UMoviePipelineConfigBase : public UObject
	{
	public:
		class FString                                              DisplayName;                                             // 0x0028(0x0010) ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMoviePipelineSetting*>                       Settings;                                                // 0x0038(0x0010) Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_94XG[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (PADDING)

	public:
		void RemoveSetting(class UMoviePipelineSetting* InSetting);
		TArray<class UMoviePipelineSetting*> GetUserSettings();
		TArray<class UMoviePipelineSetting*> FindSettingsByClass(class UClass* InClass, bool bIncludeDisabledSettings);
		class UMoviePipelineSetting* FindSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);
		class UMoviePipelineSetting* FindOrAddSettingByClass(class UClass* InClass, bool bIncludeDisabledSettings);
		void CopyFrom(class UMoviePipelineConfigBase* InConfig);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineExecutorBase
	 * Size -> 0x00E0 (FullSize[0x0108] - InheritedSize[0x0028])
	 */
	class UMoviePipelineExecutorBase : public UObject
	{
	public:
		class FScriptMulticastDelegate                             OnExecutorFinishedDelegate;                              // 0x0028(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JALW[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnExecutorErroredDelegate;                               // 0x0050(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EKG6[0x20];                                  // 0x0060(0x0020) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             SocketMessageRecievedDelegate;                           // 0x0080(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class FScriptMulticastDelegate                             HTTPResponseRecievedDelegate;                            // 0x0090(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, Protected, NativeAccessSpecifierProtected
		class UClass*                                              DebugWidgetClass;                                        // 0x00A0(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              UserData;                                                // 0x00A8(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              TargetPipelineClass;                                     // 0x00B8(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_DS14[0x48];                                  // 0x00C0(0x0048) MISSED OFFSET (PADDING)

	public:
		void SetStatusProgress(float InProgress);
		void SetStatusMessage(const class FString& InStatus);
		void SetMoviePipelineClass(class UClass* InPipelineClass);
		bool SendSocketMessage(const class FString& InMessage);
		int32_t SendHTTPRequest(const class FString& InURL, const class FString& InVerb, const class FString& InMessage, TMap<class FString, class FString> InHeaders);
		void OnExecutorFinishedImpl();
		void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, const class FText& ErrorReason);
		void OnBeginFrame();
		bool IsSocketConnected();
		bool IsRendering();
		float GetStatusProgress();
		class FString GetStatusMessage();
		void Execute(class UMoviePipelineQueue* InPipelineQueue);
		void DisconnectSocket();
		bool ConnectSocket(const class FString& InHostName, int32_t InPort);
		void CancelCurrentJob();
		void CancelAllJobs();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineOutputBase
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMoviePipelineOutputBase : public UMoviePipelineSetting
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineFCPXMLExporter
	 * Size -> 0x0038 (FullSize[0x0080] - InheritedSize[0x0048])
	 */
	class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
	{
	public:
		unsigned char                                              UnknownData_PI7O[0x8];                                   // 0x0048(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              FileNameFormat;                                          // 0x0050(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFCPXMLExportDataSource                                    DataSource;                                              // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5SQ3[0x1F];                                  // 0x0061(0x001F) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineGameMode
	 * Size -> 0x0000 (FullSize[0x02C0] - InheritedSize[0x02C0])
	 */
	class AMoviePipelineGameMode : public AGameModeBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineGameOverrideSetting
	 * Size -> 0x00B8 (FullSize[0x0100] - InheritedSize[0x0048])
	 */
	class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
	{
	public:
		class UClass*                                              GameModeOverride;                                        // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCinematicQualitySettings;                               // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoviePipelineTextureStreamingMethod                       TextureStreaming;                                        // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseLODZero;                                             // 0x0052(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDisableHLODs;                                           // 0x0053(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseHighQualityShadows;                                  // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WRCN[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShadowDistanceScale;                                     // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ShadowRadiusThreshold;                                   // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideViewDistanceScale;                              // 0x0060(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WI1M[0x3];                                   // 0x0061(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ViewDistanceScale;                                       // 0x0064(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6AT8[0x98];                                  // 0x0068(0x0098) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineHighResSetting
	 * Size -> 0x0020 (FullSize[0x0068] - InheritedSize[0x0048])
	 */
	class UMoviePipelineHighResSetting : public UMoviePipelineSetting
	{
	public:
		int32_t                                                    TileCount;                                               // 0x0048(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TextureSharpnessBias;                                    // 0x004C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OverlapRatio;                                            // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideSubSurfaceScattering;                           // 0x0054(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W6C4[0x3];                                   // 0x0055(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BurleySampleCount;                                       // 0x0058(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWriteAllSamples;                                        // 0x005C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DMQY[0xB];                                   // 0x005D(0x000B) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineLinearExecutorBase
	 * Size -> 0x0028 (FullSize[0x0130] - InheritedSize[0x0108])
	 */
	class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
	{
	public:
		class UMoviePipelineQueue*                                 Queue;                                                   // 0x0108(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMoviePipeline*                                      ActiveMoviePipeline;                                     // 0x0110(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_WNWW[0x18];                                  // 0x0118(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineInProcessExecutor
	 * Size -> 0x0038 (FullSize[0x0168] - InheritedSize[0x0130])
	 */
	class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
	{
	public:
		bool                                                       bUseCurrentLevel;                                        // 0x0130(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NLH7[0x37];                                  // 0x0131(0x0037) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineInProcessExecutorSettings
	 * Size -> 0x0030 (FullSize[0x0068] - InheritedSize[0x0038])
	 */
	class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
	{
	public:
		bool                                                       bCloseEditor;                                            // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9YFC[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              AdditionalCommandLineArguments;                          // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InheritedCommandLineArguments;                           // 0x0050(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    InitialDelayFrameCount;                                  // 0x0060(0x0004) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R3XF[0x4];                                   // 0x0064(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineMasterConfig
	 * Size -> 0x0068 (FullSize[0x00B8] - InheritedSize[0x0050])
	 */
	class UMoviePipelineMasterConfig : public UMoviePipelineConfigBase
	{
	public:
		TMap<class FString, class UMoviePipelineShotConfig*>       PerShotConfigMapping;                                    // 0x0050(0x0050) ExportObject, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UMoviePipelineOutputSetting*                         OutputSetting;                                           // 0x00A0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UMoviePipelineSetting*>                       TransientSettings;                                       // 0x00A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate

	public:
		void InitializeTransientSettings();
		TArray<class UMoviePipelineSetting*> GetTransientSettings();
		struct FFrameRate GetEffectiveFrameRate(class ULevelSequence* InSequence);
		TArray<class UMoviePipelineSetting*> GetAllSettings(bool bIncludeDisabledSettings, bool bIncludeTransientSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineOutputSetting
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UMoviePipelineOutputSetting : public UMoviePipelineSetting
	{
	public:
		struct FDirectoryPath                                      OutputDirectory;                                         // 0x0048(0x0010) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		class FString                                              FileNameFormat;                                          // 0x0058(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FIntPoint                                           OutputResolution;                                        // 0x0068(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomFrameRate;                                     // 0x0070(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8GCW[0x3];                                   // 0x0071(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FFrameRate                                          OutputFrameRate;                                         // 0x0074(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZYH0[0x4];                                   // 0x007C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bOverrideExistingOutput;                                 // 0x0080(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8V2B[0x3];                                   // 0x0081(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    HandleFrameCount;                                        // 0x0084(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    OutputFrameStep;                                         // 0x0088(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseCustomPlaybackRange;                                 // 0x008C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PP0R[0x3];                                   // 0x008D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    CustomStartFrame;                                        // 0x0090(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CustomEndFrame;                                          // 0x0094(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    VersionNumber;                                           // 0x0098(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoVersion;                                            // 0x009C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6LQ[0x3];                                   // 0x009D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ZeroPadFrameNumbers;                                     // 0x00A0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    FrameNumberOffset;                                       // 0x00A4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelinePythonHostExecutor
	 * Size -> 0x0018 (FullSize[0x0120] - InheritedSize[0x0108])
	 */
	class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
	{
	public:
		class UClass*                                              ExecutorClass;                                           // 0x0108(0x0008) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMoviePipelineQueue*                                 PipelineQueue;                                           // 0x0110(0x0008) BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UWorld*                                              LastLoadedWorld;                                         // 0x0118(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void OnMapLoad(class UWorld* InWorld);
		class UWorld* GetLastLoadedWorld();
		void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineExecutorShot
	 * Size -> 0x0158 (FullSize[0x0180] - InheritedSize[0x0028])
	 */
	class UMoviePipelineExecutorShot : public UObject
	{
	public:
		bool                                                       bEnabled;                                                // 0x0028(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1BK[0x7];                                   // 0x0029(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     InnerPathKey;                                            // 0x0030(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     OuterPathKey;                                            // 0x0048(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              OuterName;                                               // 0x0060(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              InnerName;                                               // 0x0070(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_QT7W[0xB8];                                  // 0x0080(0x00B8) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Progress;                                                // 0x0138(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_O4EX[0x4];                                   // 0x013C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StatusMessage;                                           // 0x0140(0x0010) ZeroConstructor, Transient, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UMoviePipelineShotConfig*                            ShotOverrideConfig;                                      // 0x0150(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              ShotOverridePresetOrigin[0x28];                          // 0x0158(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void SetStatusProgress(float InProgress);
		void SetStatusMessage(const class FString& InStatus);
		void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
		void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
		float GetStatusProgress();
		class FString GetStatusMessage();
		class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
		class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
		class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(class UClass* InConfigType);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineExecutorJob
	 * Size -> 0x00B8 (FullSize[0x00E0] - InheritedSize[0x0028])
	 */
	class UMoviePipelineExecutorJob : public UObject
	{
	public:
		class FString                                              JobName;                                                 // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Sequence;                                                // 0x0038(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FSoftObjectPath                                     Map;                                                     // 0x0050(0x0018) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Author;                                                  // 0x0068(0x0010) Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMoviePipelineExecutorShot*>                  ShotInfo;                                                // 0x0078(0x0010) BlueprintVisible, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FString                                              UserData;                                                // 0x0088(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              StatusMessage;                                           // 0x0098(0x0010) ZeroConstructor, Transient, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      StatusProgress;                                          // 0x00A8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bIsConsumed;                                             // 0x00AC(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_CRDY[0x3];                                   // 0x00AD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UMoviePipelineMasterConfig*                          Configuration;                                           // 0x00B0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              PresetOrigin[0x28];                                      // 0x00B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void SetStatusProgress(float InProgress);
		void SetStatusMessage(const class FString& InStatus);
		void SetSequence(const struct FSoftObjectPath& InSequence);
		void SetPresetOrigin(class UMoviePipelineMasterConfig* InPreset);
		void SetConsumed(bool bInConsumed);
		void SetConfiguration(class UMoviePipelineMasterConfig* InPreset);
		void OnDuplicated();
		bool IsConsumed();
		float GetStatusProgress();
		class FString GetStatusMessage();
		class UMoviePipelineMasterConfig* GetPresetOrigin();
		class UMoviePipelineMasterConfig* GetConfiguration();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineQueue
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UMoviePipelineQueue : public UObject
	{
	public:
		TArray<class UMoviePipelineExecutorJob*>                   Jobs;                                                    // 0x0028(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5RC9[0x8];                                   // 0x0038(0x0008) MISSED OFFSET (PADDING)

	public:
		TArray<class UMoviePipelineExecutorJob*> GetJobs();
		class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
		void DeleteJob(class UMoviePipelineExecutorJob* InJob);
		void CopyFrom(class UMoviePipelineQueue* InQueue);
		class UMoviePipelineExecutorJob* AllocateNewJob(class UClass* InJobType);
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineQueueEngineSubsystem
	 * Size -> 0x0010 (FullSize[0x0040] - InheritedSize[0x0030])
	 */
	class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
	{
	public:
		class UMoviePipelineExecutorBase*                          ActiveExecutor;                                          // 0x0030(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UMoviePipelineQueue*                                 CurrentQueue;                                            // 0x0038(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
		class UMoviePipelineExecutorBase* RenderQueueWithExecutor(class UClass* InExecutorType);
		bool IsRendering();
		class UMoviePipelineQueue* GetQueue();
		class UMoviePipelineExecutorBase* GetActiveExecutor();
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineRenderPass
	 * Size -> 0x0000 (FullSize[0x0048] - InheritedSize[0x0048])
	 */
	class UMoviePipelineRenderPass : public UMoviePipelineSetting
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineShotConfig
	 * Size -> 0x0000 (FullSize[0x0050] - InheritedSize[0x0050])
	 */
	class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MoviePipelineVideoOutputBase
	 * Size -> 0x0040 (FullSize[0x0088] - InheritedSize[0x0048])
	 */
	class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
	{
	public:
		unsigned char                                              UnknownData_XN38[0x40];                                  // 0x0048(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class MovieRenderPipelineCore.MovieRenderDebugWidget
	 * Size -> 0x0000 (FullSize[0x0260] - InheritedSize[0x0260])
	 */
	class UMovieRenderDebugWidget : public UUserWidget
	{
	public:
		void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
