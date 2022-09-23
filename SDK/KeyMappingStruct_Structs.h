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
	 * UserDefinedStruct KeyMappingStruct.KeyMappingStruct
	 * Size -> 0x0044
	 */
	struct FKeyMappingStruct
	{
	public:
		class FText                                                MappingDisplayName_2_7E995F854ECA3C262C35F890CB68EABA;   // 0x0000(0x0018) Edit, BlueprintVisible
		bool                                                       Axis_5_C4D3C6514AC60429EE29FF96F3D1B1E5;                 // 0x0018(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_HG0O[0x3];                                   // 0x0019(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AxisMultiplier_16_0FD53FF8489B82452BC339BA03C296D4;      // 0x001C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInputChord                                         DefaultKey_9_73BB1E884199711911045C8A01D1E449;           // 0x0020(0x0020) Edit, BlueprintVisible, HasGetValueTypeHash
		int32_t                                                    Group_13_C3D32E0E47C2963A3E326FB9E8490A1F;               // 0x0040(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
