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
	 * UserDefinedStruct AttackSweepResultStruct.AttackSweepResultStruct
	 * Size -> 0x0099
	 */
	struct FAttackSweepResultStruct
	{
	public:
		struct FHitResult                                          HitResult_2_E26144E5437C4C74FE432099F068F60D;            // 0x0000(0x008C) Edit, BlueprintVisible, IsPlainOldData, NoDestructor, ContainsInstancedReference
		unsigned char                                              UnknownData_SNK6[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     InstigatorComponent_5_D2545CE44EA786B791C880BFC85BB811;  // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       IsGuardBreak_7_AAF15A4B4D3D258F2AC0D2B7870C6EF9;         // 0x0098(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
