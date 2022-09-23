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
	 * Enum AsyncLoadingScreen.ELoadingWidgetType
	 */
	enum class ELoadingWidgetType : uint8_t
	{
		LWT_Horizontal = 0,
		LWT_Vertical   = 1,
		LWT_MAX        = 2
	};

	/**
	 * Enum AsyncLoadingScreen.ELoadingIconType
	 */
	enum class ELoadingIconType : uint8_t
	{
		LIT_Throbber         = 0,
		LIT_CircularThrobber = 1,
		LIT_ImageSequence    = 2,
		LIT_MAX              = 3
	};

	/**
	 * Enum AsyncLoadingScreen.EAsyncLoadingScreenLayout
	 */
	enum class EAsyncLoadingScreenLayout : uint8_t
	{
		ALSL_Classic     = 0,
		ALSL_Center      = 1,
		ALSL_Letterbox   = 2,
		ALSL_Sidebar     = 3,
		ALSL_DualSidebar = 4,
		ALSL_MAX         = 5
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct AsyncLoadingScreen.TextAppearance
	 * Size -> 0x00A0
	 */
	struct FTextAppearance
	{
	public:
		struct FSlateColor                                         ColorAndOpacity;                                         // 0x0000(0x0028) Edit, BlueprintVisible, Config, NativeAccessSpecifierPublic
		struct FSlateFontInfo                                      Font;                                                    // 0x0028(0x0058) Edit, BlueprintVisible, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           ShadowOffset;                                            // 0x0080(0x0008) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        ShadowColorAndOpacity;                                   // 0x0088(0x0010) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ETextJustify                                               Justification;                                           // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3QBQ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.WidgetAlignment
	 * Size -> 0x0002
	 */
	struct FWidgetAlignment
	{
	public:
		EHorizontalAlignment                                       HorizontalAlignment;                                     // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.LoadingCompleteTextSettings
	 * Size -> 0x00D8
	 */
	struct FLoadingCompleteTextSettings
	{
	public:
		class FText                                                LoadingCompleteText;                                     // 0x0000(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTextAppearance                                     Appearance;                                              // 0x0018(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWidgetAlignment                                    Alignment;                                               // 0x00B8(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_M7LD[0x2];                                   // 0x00BA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x00BC(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bFadeInOutAnim;                                          // 0x00CC(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U2X1[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AnimationSpeed;                                          // 0x00D0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KUC3[0x4];                                   // 0x00D4(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.BackgroundSettings
	 * Size -> 0x0038
	 */
	struct FBackgroundSettings
	{
	public:
		TArray<struct FSoftObjectPath>                             Images;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		EStretch                                                   ImageStretch;                                            // 0x0010(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JSTV[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             Padding;                                                 // 0x0014(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FLinearColor                                        BackgroundColor;                                         // 0x0024(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetDisplayBackgroundManually;                           // 0x0034(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6M3O[0x3];                                   // 0x0035(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.TipSettings
	 * Size -> 0x00B8
	 */
	struct FTipSettings
	{
	public:
		TArray<class FText>                                        TipText;                                                 // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FTextAppearance                                     Appearance;                                              // 0x0010(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      TipWrapAt;                                               // 0x00B0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetDisplayTipTextManually;                              // 0x00B4(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5FOK[0x3];                                   // 0x00B5(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.ThrobberSettings
	 * Size -> 0x0090
	 */
	struct FThrobberSettings
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateHorizontally;                                    // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateVertically;                                      // 0x0005(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAnimateOpacity;                                         // 0x0006(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YYH5[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Image;                                                   // 0x0008(0x0088) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.CircularThrobberSettings
	 * Size -> 0x0098
	 */
	struct FCircularThrobberSettings
	{
	public:
		int32_t                                                    NumberOfPieces;                                          // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Period;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFYO[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         Image;                                                   // 0x0010(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.ImageSequenceSettings
	 * Size -> 0x0020
	 */
	struct FImageSequenceSettings
	{
	public:
		TArray<class UTexture2D*>                                  Images;                                                  // 0x0000(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		struct FVector2D                                           Scale;                                                   // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Interval;                                                // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayReverse;                                            // 0x001C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_59HG[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.LoadingWidgetSettings
	 * Size -> 0x0230
	 */
	struct FLoadingWidgetSettings
	{
	public:
		ELoadingIconType                                           LoadingIconType;                                         // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ELoadingWidgetType                                         LoadingWidgetType;                                       // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFX2[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector2D                                           TransformTranslation;                                    // 0x0004(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TransformScale;                                          // 0x000C(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector2D                                           TransformPivot;                                          // 0x0014(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FDJB[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                LoadingText;                                             // 0x0020(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		bool                                                       bLoadingTextRightPosition;                               // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bLoadingTextTopPosition;                                 // 0x0039(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4EDW[0x6];                                   // 0x003A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTextAppearance                                     Appearance;                                              // 0x0040(0x00A0) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FThrobberSettings                                   ThrobberSettings;                                        // 0x00E0(0x0090) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FCircularThrobberSettings                           CircularThrobberSettings;                                // 0x0170(0x0098) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FImageSequenceSettings                              ImageSequenceSettings;                                   // 0x0208(0x0020) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FWidgetAlignment                                    TextAlignment;                                           // 0x0228(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWidgetAlignment                                    LoadingIconAlignment;                                    // 0x022A(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Space;                                                   // 0x022C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.ALoadingScreenSettings
	 * Size -> 0x0428
	 */
	struct FALoadingScreenSettings
	{
	public:
		float                                                      MinimumLoadingScreenDisplayTime;                         // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAutoCompleteWhenLoadingCompletes;                       // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMoviesAreSkippable;                                     // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWaitForManualStop;                                      // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowInEarlyStartup;                                    // 0x0007(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowEngineTick;                                        // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMoviePlaybackType                                         PlaybackType;                                            // 0x0009(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2RS2[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FString>                                      MoviePaths;                                              // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       bShuffle;                                                // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSetDisplayMovieIndexManually;                           // 0x0021(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowWidgetOverlay;                                      // 0x0022(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bShowLoadingCompleteText;                                // 0x0023(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PAPG[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FLoadingCompleteTextSettings                        LoadingCompleteTextSettings;                             // 0x0028(0x00D8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FBackgroundSettings                                 Background;                                              // 0x0100(0x0038) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FTipSettings                                        TipWidget;                                               // 0x0138(0x00B8) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FLoadingWidgetSettings                              LoadingWidget;                                           // 0x01F0(0x0230) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		EAsyncLoadingScreenLayout                                  Layout;                                                  // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P9NQ[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.ClassicLayoutSettings
	 * Size -> 0x00A8
	 */
	struct FClassicLayoutSettings
	{
	public:
		bool                                                       bIsWidgetAtBottom;                                       // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLoadingWidgetAtLeft;                                  // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DIL7[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Space;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWidgetAlignment                                    TipAlignment;                                            // 0x0008(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       BorderHorizontalAlignment;                               // 0x000A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AEWD[0x1];                                   // 0x000B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             BorderPadding;                                           // 0x000C(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_N6GV[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BorderBackground;                                        // 0x0020(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.CenterLayoutSettings
	 * Size -> 0x00A0
	 */
	struct FCenterLayoutSettings
	{
	public:
		bool                                                       bIsTipAtBottom;                                          // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWidgetAlignment                                    TipAlignment;                                            // 0x0001(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       BorderHorizontalAlignment;                               // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BorderVerticalOffset;                                    // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             BorderPadding;                                           // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BorderBackground;                                        // 0x0018(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.LetterboxLayoutSettings
	 * Size -> 0x0138
	 */
	struct FLetterboxLayoutSettings
	{
	public:
		bool                                                       bIsLoadingWidgetAtTop;                                   // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWidgetAlignment                                    TipAlignment;                                            // 0x0001(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWidgetAlignment                                    LoadingWidgetAlignment;                                  // 0x0003(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       TopBorderHorizontalAlignment;                            // 0x0005(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EHorizontalAlignment                                       BottomBorderHorizontalAlignment;                         // 0x0006(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7RQ6[0x1];                                   // 0x0007(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             TopBorderPadding;                                        // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             BottomBorderPadding;                                     // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         TopBorderBackground;                                     // 0x0028(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         BottomBorderBackground;                                  // 0x00B0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.SidebarLayoutSettings
	 * Size -> 0x00B0
	 */
	struct FSidebarLayoutSettings
	{
	public:
		bool                                                       bIsWidgetAtRight;                                        // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLoadingWidgetAtTop;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2YGE[0x2];                                   // 0x0002(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Space;                                                   // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         VerticalAlignment;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FWidgetAlignment                                    LoadingWidgetAlignment;                                  // 0x0009(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		struct FWidgetAlignment                                    TipAlignment;                                            // 0x000B(0x0002) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		EVerticalAlignment                                         BorderVerticalAlignment;                                 // 0x000D(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VPY1[0x2];                                   // 0x000E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BorderHorizontalOffset;                                  // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FMargin                                             BorderPadding;                                           // 0x0014(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8YPW[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSlateBrush                                         BorderBackground;                                        // 0x0028(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct AsyncLoadingScreen.DualSidebarLayoutSettings
	 * Size -> 0x0138
	 */
	struct FDualSidebarLayoutSettings
	{
	public:
		bool                                                       bIsLoadingWidgetAtRight;                                 // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         LeftVerticalAlignment;                                   // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         RightVerticalAlignment;                                  // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         LeftBorderVerticalAlignment;                             // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EVerticalAlignment                                         RightBorderVerticalAlignment;                            // 0x0004(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_1HET[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FMargin                                             LeftBorderPadding;                                       // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FMargin                                             RightBorderPadding;                                      // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FSlateBrush                                         LeftBorderBackground;                                    // 0x0028(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		struct FSlateBrush                                         RightBorderBackground;                                   // 0x00B0(0x0088) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
