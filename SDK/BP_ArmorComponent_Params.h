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
	 * Function BP_ArmorComponent.BP_ArmorComponent_C.OnArmorUpdate
	 */
	struct UBP_ArmorComponent_C_OnArmorUpdate_Params
	{	};

	/**
	 * Function BP_ArmorComponent.BP_ArmorComponent_C.OnUnequipArmor
	 */
	struct UBP_ArmorComponent_C_OnUnequipArmor_Params
	{
	public:
		ECharacterModuleType                                       Module;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E7RN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<ECharacterModuleType>                               ShowModules;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	};

	/**
	 * Function BP_ArmorComponent.BP_ArmorComponent_C.OnEquipArmor
	 */
	struct UBP_ArmorComponent_C_OnEquipArmor_Params
	{
	public:
		ECharacterModuleType                                       Module;                                                  // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_SPDK[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<ECharacterModuleType>                               HideModules;                                             // 0x0008(0x0010)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		int32_t                                                    BodyType;                                                // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_6UMQ[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		struct FItemTable                                          ItemData;                                                // 0x0020(0x02A0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function BP_ArmorComponent.BP_ArmorComponent_C.ExecuteUbergraph_BP_ArmorComponent
	 */
	struct UBP_ArmorComponent_C_ExecuteUbergraph_BP_ArmorComponent_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_ArmorComponent.BP_ArmorComponent_C.Armor Updated__DelegateSignature
	 */
	struct UBP_ArmorComponent_C_Armor_Updated__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
