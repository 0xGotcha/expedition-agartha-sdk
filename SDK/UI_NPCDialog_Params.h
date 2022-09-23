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
	 * Function UI_NPCDialog.UI_NPCDialog_C.EnableCharacterMovement
	 */
	struct UUI_NPCDialog_C_EnableCharacterMovement_Params
	{
	public:
		class UCharacterNPCsComponent*                             CharNPCComponent;                                        // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NPCDialog.UI_NPCDialog_C.SetQuestReward
	 */
	struct UUI_NPCDialog_C_SetQuestReward_Params
	{
	public:
		struct FQuestTable                                         QuestRow;                                                // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_NPCDialog.UI_NPCDialog_C.SetQuestConditions
	 */
	struct UUI_NPCDialog_C_SetQuestConditions_Params
	{
	public:
		struct FQuestTable                                         QuestRow;                                                // 0x0000(0x00D0)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function UI_NPCDialog.UI_NPCDialog_C.OnLoaded_29D690EC45D4B1CFAB8229AA1A9E8FE8
	 */
	struct UUI_NPCDialog_C_OnLoaded_29D690EC45D4B1CFAB8229AA1A9E8FE8_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_NPCDialog.UI_NPCDialog_C.Construct
	 */
	struct UUI_NPCDialog_C_Construct_Params
	{	};

	/**
	 * Function UI_NPCDialog.UI_NPCDialog_C.BndEvt__UI_NPCDialog_Finish_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_NPCDialog_C_BndEvt__UI_NPCDialog_Finish_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_NPCDialog.UI_NPCDialog_C.BndEvt__UI_NPCDialog_FirstDialogAccept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
	 */
	struct UUI_NPCDialog_C_BndEvt__UI_NPCDialog_FirstDialogAccept_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature_Params
	{	};

	/**
	 * Function UI_NPCDialog.UI_NPCDialog_C.OnNPCRepWaitFinished
	 */
	struct UUI_NPCDialog_C_OnNPCRepWaitFinished_Params
	{	};

	/**
	 * Function UI_NPCDialog.UI_NPCDialog_C.ExecuteUbergraph_UI_NPCDialog
	 */
	struct UUI_NPCDialog_C_ExecuteUbergraph_UI_NPCDialog_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_F60D[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
