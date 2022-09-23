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
	 * UserDefinedStruct Emote.Emote
	 * Size -> 0x0048
	 */
	struct FEmote
	{
	public:
		unsigned char                                              Icon_2_38D7D772446C8739874EBF96B2BDB0C6[0x28];           // 0x0000(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class FText                                                Name_5_BD73E08A46518B223D05D79329E72C22;                 // 0x0028(0x0018) Edit, BlueprintVisible
		class UAnimMontage*                                        Montage_8_9EC262854FF61F8DAE31138A20DE1BE1;              // 0x0040(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
