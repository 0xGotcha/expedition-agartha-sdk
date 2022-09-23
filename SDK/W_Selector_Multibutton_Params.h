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
	 * Function W_Selector_Multibutton.W_Selector_Multibutton_C.PreConstruct
	 */
	struct UW_Selector_Multibutton_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function W_Selector_Multibutton.W_Selector_Multibutton_C.OnSelectorClick
	 */
	struct UW_Selector_Multibutton_C_OnSelectorClick_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Selector_Multibutton.W_Selector_Multibutton_C.Populate
	 */
	struct UW_Selector_Multibutton_C_Populate_Params
	{	};

	/**
	 * Function W_Selector_Multibutton.W_Selector_Multibutton_C.Set Selected Index
	 */
	struct UW_Selector_Multibutton_C_Set_Selected_Index_Params
	{
	public:
		int32_t                                                    Selected_Index;                                          // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_Selector_Multibutton.W_Selector_Multibutton_C.ExecuteUbergraph_W_Selector_Multibutton
	 */
	struct UW_Selector_Multibutton_C_ExecuteUbergraph_W_Selector_Multibutton_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_HRM7[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_Selector_Multibutton.W_Selector_Multibutton_C.SelectedIndexChanged__DelegateSignature
	 */
	struct UW_Selector_Multibutton_C_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
