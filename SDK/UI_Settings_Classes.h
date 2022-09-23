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
	// # Classes
	// --------------------------------------------------
	/**
	 * WidgetBlueprintGeneratedClass UI_Settings.UI_Settings_C
	 * Size -> 0x01D8 (FullSize[0x0438] - InheritedSize[0x0260])
	 */
	class UUI_Settings_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UW_Selector_Multibutton_C*                           AmbientOcclusionSelector;                                // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           AntialiasingSelector;                                    // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                         ApplyButton;                                             // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Audio;                                                   // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                         AutodetectButton;                                        // 0x0288(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UImage*                                              BlackBackdrop;                                           // 0x0290(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UExpandableArea*                                     DetailedSettings;                                        // 0x0298(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Display;                                                 // 0x02A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     DLSSSelector;                                            // 0x02A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           EffectsSelector;                                         // 0x02B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             FoVSlider;                                               // 0x02B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          FoVValue;                                                // 0x02C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           FPSCapSelector;                                          // 0x02C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UVerticalBox*                                        Graphics;                                                // 0x02D0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           GrassSelector;                                           // 0x02D8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     LanguageSelector;                                        // 0x02E0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             MasterSlider;                                            // 0x02E8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MasterValue;                                             // 0x02F0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           MotionBlurSelector;                                      // 0x02F8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           MouseSmoothingSelector;                                  // 0x0300(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             MouseSpeedSlider;                                        // 0x0308(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MouseSpeedValue;                                         // 0x0310(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           MouseYSelector;                                          // 0x0318(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             MusicSlider;                                             // 0x0320(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          MusicValue;                                              // 0x0328(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           PostprocessingSelector;                                  // 0x0330(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           QualitySelector;                                         // 0x0338(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             ResolutionScaleSlider;                                   // 0x0340(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ResolutionScaleValue;                                    // 0x0348(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     ResolutionSelector;                                      // 0x0350(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UWidgetSwitcher*                                     SettingsContainer;                                       // 0x0358(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           ShadingSelector;                                         // 0x0360(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           ShadowsSelector;                                         // 0x0368(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             SoundsSlider;                                            // 0x0370(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          SoundsValue;                                             // 0x0378(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           TabSwitch;                                               // 0x0380(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           TextureSelector;                                         // 0x0388(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           ViewDistanceSelector;                                    // 0x0390(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           VoiceChatSelector;                                       // 0x0398(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             VoicesSlider;                                            // 0x03A0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          VoicesValue;                                             // 0x03A8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Selector_Multibutton_C*                           VSyncSelector;                                           // 0x03B0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class USlider*                                             WeatherSlider;                                           // 0x03B8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          WeatherValue;                                            // 0x03C0(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UComboBoxString*                                     WindowModeSelector;                                      // 0x03C8(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class FScriptMulticastDelegate                             SettingsClose;                                           // 0x03D0(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Settings;                                                // 0x03E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_N6MA[0x7];                                   // 0x03E1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FIntPoint>                                   Resolutions;                                             // 0x03E8(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		EWindowMode                                                Selected_Window_Mode;                                    // 0x03F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_9F50[0x3];                                   // 0x03F9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FIntPoint                                           Selected_Resolution;                                     // 0x03FC(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MVRS[0x4];                                   // 0x0404(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCustomUserSettings_C*                               User_Settings;                                           // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<class FString>                                      LocalizedCultures;                                       // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    CurrCultureIndex;                                        // 0x0420(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_LVY3[0x4];                                   // 0x0424(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FText>                                        LocWindowModes;                                          // 0x0428(0x0010) Edit, BlueprintVisible, DisableEditOnInstance

	public:
		void TryResetWindowModes();
		void PreConstruct(bool IsDesignTime);
		void Construct();
		void BndEvt__UI_Settings_TabSwitch_K2Node_ComponentBoundEvent_0_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_Button_C* Button);
		void Setup_Panels();
		void BndEvt__UI_Settings_WindowModeSelector_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__UI_Settings_ResolutionSelector_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__UI_Settings_FPSCapSelector_K2Node_ComponentBoundEvent_4_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_FoVSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void Update_Resolutions();
		void Get_User_Settings();
		void BndEvt__UI_Settings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__UI_Settings_ViewDistanceSelector_K2Node_ComponentBoundEvent_7_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_AntialiasingSelector_K2Node_ComponentBoundEvent_8_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_PostprocessingSelector_K2Node_ComponentBoundEvent_9_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_ShadowsSelector_K2Node_ComponentBoundEvent_10_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_TextureSelector_K2Node_ComponentBoundEvent_11_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_EffectsSelector_K2Node_ComponentBoundEvent_12_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_GrassSelector_K2Node_ComponentBoundEvent_13_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_ShadingSelector_K2Node_ComponentBoundEvent_14_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_QualitySelector_K2Node_ComponentBoundEvent_15_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_AutodetectButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__UI_Settings_DLSSSelector_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void BndEvt__UI_Settings_MotionBlurSelector_K2Node_ComponentBoundEvent_18_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_AmbientOcclusionSelector_K2Node_ComponentBoundEvent_19_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_MasterSlider_K2Node_ComponentBoundEvent_20_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__UI_Settings_MusicSlider_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__UI_Settings_SoundsSlider_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__UI_Settings_WeatherSlider_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__UI_Settings_VoicesSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__UI_Settings_VSyncSelector_K2Node_ComponentBoundEvent_25_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_MouseSpeedSlider_K2Node_ComponentBoundEvent_26_OnFloatValueChangedEvent__DelegateSignature(float Value);
		void BndEvt__UI_Settings_LanguageSelector_K2Node_ComponentBoundEvent_27_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType);
		void RepopulateLanguageSelector();
		void BndEvt__UI_Settings_MouseSmoothingSelector_K2Node_ComponentBoundEvent_28_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void Key_Mapping_Selection_State_Changed(bool Selecting);
		void BndEvt__UI_Settings_MouseYSelector_K2Node_ComponentBoundEvent_29_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void BndEvt__UI_Settings_VoiceChatSelector_K2Node_ComponentBoundEvent_30_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		void ExecuteUbergraph_UI_Settings(int32_t EntryPoint);
		void SettingsClose__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
