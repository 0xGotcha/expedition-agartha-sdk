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
	 * Enum OVRLipSync.OVRLipSyncProviderKind
	 */
	enum class EOVRLipSyncProviderKind : uint8_t
	{
		OVRLipSyncProviderKind_Original                   = 0,
		OVRLipSyncProviderKind_Enhanced                   = 1,
		OVRLipSyncProviderKind_EnhancedWithLaughter       = 2,
		OVRLipSyncProviderKind_OVRLipSyncProviderKind_MAX = 3
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct OVRLipSync.OVRLipSyncFrame
	 * Size -> 0x0018
	 */
	struct FOVRLipSyncFrame
	{
	public:
		TArray<float>                                              VisemeScores;                                            // 0x0000(0x0010) ZeroConstructor, NativeAccessSpecifierPublic
		float                                                      LaughterScore;                                           // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T0PI[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
