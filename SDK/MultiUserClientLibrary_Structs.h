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
	 * Enum MultiUserClientLibrary.EMultiUserConnectionStatus
	 */
	enum class EMultiUserConnectionStatus : uint8_t
	{
		Connecting    = 0,
		Connected     = 1,
		Disconnecting = 2,
		Disconnected  = 3,
		MAX           = 4
	};

	/**
	 * Enum MultiUserClientLibrary.EMultiUserSourceValidationMode
	 */
	enum class EMultiUserSourceValidationMode : uint8_t
	{
		Hard            = 0,
		Soft            = 1,
		SoftAutoProceed = 2,
		MAX             = 3
	};

	/**
	 * Enum MultiUserClientLibrary.EMultiUserConnectionError
	 */
	enum class EMultiUserConnectionError : uint8_t
	{
		None                            = 0,
		Canceled                        = 1,
		ConnectionAttemptAborted        = 2,
		ServerNotResponding             = 3,
		ServerError                     = 4,
		WorkspaceValidationUnknown      = 5,
		SourceControlValidationUnknown  = 6,
		SourceControlValidationCanceled = 7,
		SourceControlValidationError    = 8,
		DirtyPackageValidationError     = 9,
		MAX                             = 10
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct MultiUserClientLibrary.MultiUserClientConfig
	 * Size -> 0x0038
	 */
	struct FMultiUserClientConfig
	{
	public:
		class FString                                              DefaultServerURL;                                        // 0x0000(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultSessionName;                                      // 0x0010(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DefaultSessionToRestore;                                 // 0x0020(0x0010) BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMultiUserSourceValidationMode                             ValidationMode;                                          // 0x0030(0x0001) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6ECZ[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct MultiUserClientLibrary.MultiUserConnectionError
	 * Size -> 0x0020
	 */
	struct FMultiUserConnectionError
	{
	public:
		EMultiUserConnectionError                                  ErrorCode;                                               // 0x0000(0x0001) ELEMENT_SIZE_MISMATCH BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NWNJ[0x3];                                   // 0x0001(0x0003) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY
		unsigned char                                              UnknownData_SB3N[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ErrorMessage;                                            // 0x0008(0x0018) BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct MultiUserClientLibrary.MultiUserClientInfo
	 * Size -> 0x0040
	 */
	struct FMultiUserClientInfo
	{
	public:
		struct FGuid                                               ClientEndpointId;                                        // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              DisplayName;                                             // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FLinearColor                                        AvatarColor;                                             // 0x0020(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        Tags;                                                    // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, AdvancedDisplay, NativeAccessSpecifierPublic
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
