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
	 * UserDefinedStruct TacticalMenuItem.TacticalMenuItem
	 * Size -> 0x0058
	 */
	struct FTacticalMenuItem
	{
	public:
		int32_t                                                    Index_9_2F754B274BEDF1876F75558E5FCEFE9A;                // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_RS36[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Icon_3_0172116143913F1F5CDD458528608763[0x28];           // 0x0008(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                Description_6_72E72BBC4A0D996B7CE5B5990F14C5E2;          // 0x0030(0x0018) Edit, BlueprintVisible
		class UDataTable*                                          ChildTable_12_2DBB0CFD47ABC8CF9E7D7899CF60A505;          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		ETacticalCommand                                           Command_15_E4C2494C4EB537878DA09BB4EB8F541E;             // 0x0050(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Emote_19_220FB62F407F685CBB879F9ACED120D8;               // 0x0051(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4V63[0x2];                                   // 0x0052(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OptionalFloat_22_C1E7ECF7423F20503AE07BB4E8DD3050;       // 0x0054(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
