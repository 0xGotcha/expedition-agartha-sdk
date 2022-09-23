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
	 * Function W_KeyMapping.W_KeyMapping_C.Construct
	 */
	struct UW_KeyMapping_C_Construct_Params
	{	};

	/**
	 * Function W_KeyMapping.W_KeyMapping_C.Selector State Changed
	 */
	struct UW_KeyMapping_C_Selector_State_Changed_Params
	{
	public:
		class UW_KeyMappingEntry_C*                                Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selecting;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_KeyMapping.W_KeyMapping_C.New Key Selected
	 */
	struct UW_KeyMapping_C_New_Key_Selected_Params
	{
	public:
		class UW_KeyMappingEntry_C*                                Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Action_Name;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInputChord                                         New_Key;                                                 // 0x0010(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_KeyMapping.W_KeyMapping_C.BndEvt__W_KeyMapping_ResetButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature
	 */
	struct UW_KeyMapping_C_BndEvt__W_KeyMapping_ResetButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_KeyMapping.W_KeyMapping_C.BndEvt__W_KeyMapping_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UW_KeyMapping_C_BndEvt__W_KeyMapping_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_KeyMapping.W_KeyMapping_C.Repopulate Mapping List
	 */
	struct UW_KeyMapping_C_Repopulate_Mapping_List_Params
	{	};

	/**
	 * Function W_KeyMapping.W_KeyMapping_C.Save Bindings
	 */
	struct UW_KeyMapping_C_Save_Bindings_Params
	{	};

	/**
	 * Function W_KeyMapping.W_KeyMapping_C.ExecuteUbergraph_W_KeyMapping
	 */
	struct UW_KeyMapping_C_ExecuteUbergraph_W_KeyMapping_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CUL8[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_KeyMapping.W_KeyMapping_C.Key Selection State Changed__DelegateSignature
	 */
	struct UW_KeyMapping_C_Key_Selection_State_Changed__DelegateSignature_Params
	{
	public:
		bool                                                       Selecting;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
