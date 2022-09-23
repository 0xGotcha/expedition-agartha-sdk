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
	 * Function W_KeyMappingEntry.W_KeyMappingEntry_C.Construct
	 */
	struct UW_KeyMappingEntry_C_Construct_Params
	{	};

	/**
	 * Function W_KeyMappingEntry.W_KeyMappingEntry_C.OnIsSelectingKeyChanged
	 */
	struct UW_KeyMappingEntry_C_OnIsSelectingKeyChanged_Params
	{	};

	/**
	 * Function W_KeyMappingEntry.W_KeyMappingEntry_C.OnKeySelected
	 */
	struct UW_KeyMappingEntry_C_OnKeySelected_Params
	{
	public:
		struct FInputChord                                         SelectedKey;                                             // 0x0000(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_KeyMappingEntry.W_KeyMappingEntry_C.Set Confilicted
	 */
	struct UW_KeyMappingEntry_C_Set_Confilicted_Params
	{
	public:
		bool                                                       Conflicted;                                              // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_KeyMappingEntry.W_KeyMappingEntry_C.ExecuteUbergraph_W_KeyMappingEntry
	 */
	struct UW_KeyMappingEntry_C_ExecuteUbergraph_W_KeyMappingEntry_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_KeyMappingEntry.W_KeyMappingEntry_C.New Key Selected__DelegateSignature
	 */
	struct UW_KeyMappingEntry_C_New_Key_Selected__DelegateSignature_Params
	{
	public:
		class UW_KeyMappingEntry_C*                                Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class FName                                                Action_Name;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		struct FInputChord                                         New_Key;                                                 // 0x0010(0x0020)  (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
	};

	/**
	 * Function W_KeyMappingEntry.W_KeyMappingEntry_C.Key Selector State Changed__DelegateSignature
	 */
	struct UW_KeyMappingEntry_C_Key_Selector_State_Changed__DelegateSignature_Params
	{
	public:
		class UW_KeyMappingEntry_C*                                Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Selecting;                                               // 0x0008(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
