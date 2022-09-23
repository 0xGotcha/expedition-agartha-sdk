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
	 * Function UI_Settings.UI_Settings_C.TryResetWindowModes
	 */
	struct UUI_Settings_C_TryResetWindowModes_Params
	{	};

	/**
	 * Function UI_Settings.UI_Settings_C.PreConstruct
	 */
	struct UUI_Settings_C_PreConstruct_Params
	{
	public:
		bool                                                       IsDesignTime;                                            // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.Construct
	 */
	struct UUI_Settings_C_Construct_Params
	{	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_TabSwitch_K2Node_ComponentBoundEvent_0_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_TabSwitch_K2Node_ComponentBoundEvent_0_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.Setup Panels
	 */
	struct UUI_Settings_C_Setup_Panels_Params
	{	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_WindowModeSelector_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_WindowModeSelector_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ResolutionSelector_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_ResolutionSelector_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_FPSCapSelector_K2Node_ComponentBoundEvent_4_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_FPSCapSelector_K2Node_ComponentBoundEvent_4_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_FoVSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_FoVSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.Update Resolutions
	 */
	struct UUI_Settings_C_Update_Resolutions_Params
	{	};

	/**
	 * Function UI_Settings.UI_Settings_C.Get User Settings
	 */
	struct UUI_Settings_C_Get_User_Settings_Params
	{	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ViewDistanceSelector_K2Node_ComponentBoundEvent_7_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_ViewDistanceSelector_K2Node_ComponentBoundEvent_7_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_AntialiasingSelector_K2Node_ComponentBoundEvent_8_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_AntialiasingSelector_K2Node_ComponentBoundEvent_8_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_PostprocessingSelector_K2Node_ComponentBoundEvent_9_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_PostprocessingSelector_K2Node_ComponentBoundEvent_9_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ShadowsSelector_K2Node_ComponentBoundEvent_10_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_ShadowsSelector_K2Node_ComponentBoundEvent_10_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_TextureSelector_K2Node_ComponentBoundEvent_11_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_TextureSelector_K2Node_ComponentBoundEvent_11_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_EffectsSelector_K2Node_ComponentBoundEvent_12_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_EffectsSelector_K2Node_ComponentBoundEvent_12_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_GrassSelector_K2Node_ComponentBoundEvent_13_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_GrassSelector_K2Node_ComponentBoundEvent_13_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ShadingSelector_K2Node_ComponentBoundEvent_14_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_ShadingSelector_K2Node_ComponentBoundEvent_14_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_QualitySelector_K2Node_ComponentBoundEvent_15_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_QualitySelector_K2Node_ComponentBoundEvent_15_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_AutodetectButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_AutodetectButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params
	{
	public:
		class UW_Button_C*                                         Button;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_DLSSSelector_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_DLSSSelector_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MotionBlurSelector_K2Node_ComponentBoundEvent_18_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_MotionBlurSelector_K2Node_ComponentBoundEvent_18_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_AmbientOcclusionSelector_K2Node_ComponentBoundEvent_19_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_AmbientOcclusionSelector_K2Node_ComponentBoundEvent_19_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MasterSlider_K2Node_ComponentBoundEvent_20_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_MasterSlider_K2Node_ComponentBoundEvent_20_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MusicSlider_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_MusicSlider_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_SoundsSlider_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_SoundsSlider_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_WeatherSlider_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_WeatherSlider_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_VoicesSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_VoicesSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_VSyncSelector_K2Node_ComponentBoundEvent_25_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_VSyncSelector_K2Node_ComponentBoundEvent_25_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MouseSpeedSlider_K2Node_ComponentBoundEvent_26_OnFloatValueChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_MouseSpeedSlider_K2Node_ComponentBoundEvent_26_OnFloatValueChangedEvent__DelegateSignature_Params
	{
	public:
		float                                                      Value;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_LanguageSelector_K2Node_ComponentBoundEvent_27_OnSelectionChangedEvent__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_LanguageSelector_K2Node_ComponentBoundEvent_27_OnSelectionChangedEvent__DelegateSignature_Params
	{
	public:
		class FString                                              SelectedItem;                                            // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		ESelectInfo                                                SelectionType;                                           // 0x0010(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.RepopulateLanguageSelector
	 */
	struct UUI_Settings_C_RepopulateLanguageSelector_Params
	{	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MouseSmoothingSelector_K2Node_ComponentBoundEvent_28_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_MouseSmoothingSelector_K2Node_ComponentBoundEvent_28_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.Key Mapping Selection State Changed
	 */
	struct UUI_Settings_C_Key_Mapping_Selection_State_Changed_Params
	{
	public:
		bool                                                       Selecting;                                               // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MouseYSelector_K2Node_ComponentBoundEvent_29_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_MouseYSelector_K2Node_ComponentBoundEvent_29_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_VoiceChatSelector_K2Node_ComponentBoundEvent_30_SelectedIndexChanged__DelegateSignature
	 */
	struct UUI_Settings_C_BndEvt__UI_Settings_VoiceChatSelector_K2Node_ComponentBoundEvent_30_SelectedIndexChanged__DelegateSignature_Params
	{
	public:
		class UW_Selector_Multibutton_C*                           Selector;                                                // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		int32_t                                                    New_Index;                                               // 0x0008(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Settings.UI_Settings_C.ExecuteUbergraph_UI_Settings
	 */
	struct UUI_Settings_C_ExecuteUbergraph_UI_Settings_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_WR0V[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function UI_Settings.UI_Settings_C.SettingsClose__DelegateSignature
	 */
	struct UUI_Settings_C_SettingsClose__DelegateSignature_Params
	{	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
