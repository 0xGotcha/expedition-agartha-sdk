/**
 * Name: Agartha
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.TryResetWindowModes
	 * 		Flags  -> ()
	 */
	void UUI_Settings_C::TryResetWindowModes()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.TryResetWindowModes");
		
		UUI_Settings_C_TryResetWindowModes_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.PreConstruct
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               IsDesignTime                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_C::PreConstruct(bool IsDesignTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.PreConstruct");
		
		UUI_Settings_C_PreConstruct_Params params {};
		params.IsDesignTime = IsDesignTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.Construct
	 * 		Flags  -> ()
	 */
	void UUI_Settings_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.Construct");
		
		UUI_Settings_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_TabSwitch_K2Node_ComponentBoundEvent_0_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_TabSwitch_K2Node_ComponentBoundEvent_0_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_TabSwitch_K2Node_ComponentBoundEvent_0_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_TabSwitch_K2Node_ComponentBoundEvent_0_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.Setup Panels
	 * 		Flags  -> ()
	 */
	void UUI_Settings_C::Setup_Panels()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.Setup Panels");
		
		UUI_Settings_C_Setup_Panels_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_WindowModeSelector_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_WindowModeSelector_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_WindowModeSelector_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_WindowModeSelector_K2Node_ComponentBoundEvent_2_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ResolutionSelector_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_ResolutionSelector_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ResolutionSelector_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_ResolutionSelector_K2Node_ComponentBoundEvent_3_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_FPSCapSelector_K2Node_ComponentBoundEvent_4_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_FPSCapSelector_K2Node_ComponentBoundEvent_4_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_FPSCapSelector_K2Node_ComponentBoundEvent_4_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_FPSCapSelector_K2Node_ComponentBoundEvent_4_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_FoVSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_FoVSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_FoVSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_FoVSlider_K2Node_ComponentBoundEvent_5_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.Update Resolutions
	 * 		Flags  -> ()
	 */
	void UUI_Settings_C::Update_Resolutions()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.Update Resolutions");
		
		UUI_Settings_C_Update_Resolutions_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.Get User Settings
	 * 		Flags  -> ()
	 */
	void UUI_Settings_C::Get_User_Settings()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.Get User Settings");
		
		UUI_Settings_C_Get_User_Settings_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_ResolutionScaleSlider_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ViewDistanceSelector_K2Node_ComponentBoundEvent_7_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_ViewDistanceSelector_K2Node_ComponentBoundEvent_7_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ViewDistanceSelector_K2Node_ComponentBoundEvent_7_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_ViewDistanceSelector_K2Node_ComponentBoundEvent_7_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_AntialiasingSelector_K2Node_ComponentBoundEvent_8_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_AntialiasingSelector_K2Node_ComponentBoundEvent_8_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_AntialiasingSelector_K2Node_ComponentBoundEvent_8_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_AntialiasingSelector_K2Node_ComponentBoundEvent_8_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_PostprocessingSelector_K2Node_ComponentBoundEvent_9_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_PostprocessingSelector_K2Node_ComponentBoundEvent_9_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_PostprocessingSelector_K2Node_ComponentBoundEvent_9_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_PostprocessingSelector_K2Node_ComponentBoundEvent_9_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ShadowsSelector_K2Node_ComponentBoundEvent_10_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_ShadowsSelector_K2Node_ComponentBoundEvent_10_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ShadowsSelector_K2Node_ComponentBoundEvent_10_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_ShadowsSelector_K2Node_ComponentBoundEvent_10_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_TextureSelector_K2Node_ComponentBoundEvent_11_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_TextureSelector_K2Node_ComponentBoundEvent_11_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_TextureSelector_K2Node_ComponentBoundEvent_11_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_TextureSelector_K2Node_ComponentBoundEvent_11_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_EffectsSelector_K2Node_ComponentBoundEvent_12_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_EffectsSelector_K2Node_ComponentBoundEvent_12_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_EffectsSelector_K2Node_ComponentBoundEvent_12_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_EffectsSelector_K2Node_ComponentBoundEvent_12_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_GrassSelector_K2Node_ComponentBoundEvent_13_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_GrassSelector_K2Node_ComponentBoundEvent_13_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_GrassSelector_K2Node_ComponentBoundEvent_13_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_GrassSelector_K2Node_ComponentBoundEvent_13_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ShadingSelector_K2Node_ComponentBoundEvent_14_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_ShadingSelector_K2Node_ComponentBoundEvent_14_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_ShadingSelector_K2Node_ComponentBoundEvent_14_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_ShadingSelector_K2Node_ComponentBoundEvent_14_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_QualitySelector_K2Node_ComponentBoundEvent_15_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_QualitySelector_K2Node_ComponentBoundEvent_15_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_QualitySelector_K2Node_ComponentBoundEvent_15_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_QualitySelector_K2Node_ComponentBoundEvent_15_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_AutodetectButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Button_C*                                 Button                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_AutodetectButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature(class UW_Button_C* Button)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_AutodetectButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_AutodetectButton_K2Node_ComponentBoundEvent_16_OnClicked__DelegateSignature_Params params {};
		params.Button = Button;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_DLSSSelector_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_DLSSSelector_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_DLSSSelector_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_DLSSSelector_K2Node_ComponentBoundEvent_17_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MotionBlurSelector_K2Node_ComponentBoundEvent_18_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_MotionBlurSelector_K2Node_ComponentBoundEvent_18_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MotionBlurSelector_K2Node_ComponentBoundEvent_18_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_MotionBlurSelector_K2Node_ComponentBoundEvent_18_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_AmbientOcclusionSelector_K2Node_ComponentBoundEvent_19_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_AmbientOcclusionSelector_K2Node_ComponentBoundEvent_19_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_AmbientOcclusionSelector_K2Node_ComponentBoundEvent_19_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_AmbientOcclusionSelector_K2Node_ComponentBoundEvent_19_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MasterSlider_K2Node_ComponentBoundEvent_20_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_MasterSlider_K2Node_ComponentBoundEvent_20_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MasterSlider_K2Node_ComponentBoundEvent_20_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_MasterSlider_K2Node_ComponentBoundEvent_20_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MusicSlider_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_MusicSlider_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MusicSlider_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_MusicSlider_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_SoundsSlider_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_SoundsSlider_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_SoundsSlider_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_SoundsSlider_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_WeatherSlider_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_WeatherSlider_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_WeatherSlider_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_WeatherSlider_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_VoicesSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_VoicesSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_VoicesSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_VoicesSlider_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_VSyncSelector_K2Node_ComponentBoundEvent_25_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_VSyncSelector_K2Node_ComponentBoundEvent_25_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_VSyncSelector_K2Node_ComponentBoundEvent_25_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_VSyncSelector_K2Node_ComponentBoundEvent_25_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MouseSpeedSlider_K2Node_ComponentBoundEvent_26_OnFloatValueChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		float                                              Value                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_MouseSpeedSlider_K2Node_ComponentBoundEvent_26_OnFloatValueChangedEvent__DelegateSignature(float Value)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MouseSpeedSlider_K2Node_ComponentBoundEvent_26_OnFloatValueChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_MouseSpeedSlider_K2Node_ComponentBoundEvent_26_OnFloatValueChangedEvent__DelegateSignature_Params params {};
		params.Value = Value;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_LanguageSelector_K2Node_ComponentBoundEvent_27_OnSelectionChangedEvent__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      SelectedItem                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		ESelectInfo                                        SelectionType                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_LanguageSelector_K2Node_ComponentBoundEvent_27_OnSelectionChangedEvent__DelegateSignature(const class FString& SelectedItem, ESelectInfo SelectionType)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_LanguageSelector_K2Node_ComponentBoundEvent_27_OnSelectionChangedEvent__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_LanguageSelector_K2Node_ComponentBoundEvent_27_OnSelectionChangedEvent__DelegateSignature_Params params {};
		params.SelectedItem = SelectedItem;
		params.SelectionType = SelectionType;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.RepopulateLanguageSelector
	 * 		Flags  -> ()
	 */
	void UUI_Settings_C::RepopulateLanguageSelector()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.RepopulateLanguageSelector");
		
		UUI_Settings_C_RepopulateLanguageSelector_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MouseSmoothingSelector_K2Node_ComponentBoundEvent_28_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_MouseSmoothingSelector_K2Node_ComponentBoundEvent_28_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MouseSmoothingSelector_K2Node_ComponentBoundEvent_28_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_MouseSmoothingSelector_K2Node_ComponentBoundEvent_28_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.Key Mapping Selection State Changed
	 * 		Flags  -> ()
	 * Parameters:
	 * 		bool                                               Selecting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UUI_Settings_C::Key_Mapping_Selection_State_Changed(bool Selecting)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.Key Mapping Selection State Changed");
		
		UUI_Settings_C_Key_Mapping_Selection_State_Changed_Params params {};
		params.Selecting = Selecting;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MouseYSelector_K2Node_ComponentBoundEvent_29_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_MouseYSelector_K2Node_ComponentBoundEvent_29_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_MouseYSelector_K2Node_ComponentBoundEvent_29_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_MouseYSelector_K2Node_ComponentBoundEvent_29_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_VoiceChatSelector_K2Node_ComponentBoundEvent_30_SelectedIndexChanged__DelegateSignature
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class UW_Selector_Multibutton_C*                   Selector                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		int32_t                                            New_Index                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::BndEvt__UI_Settings_VoiceChatSelector_K2Node_ComponentBoundEvent_30_SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.BndEvt__UI_Settings_VoiceChatSelector_K2Node_ComponentBoundEvent_30_SelectedIndexChanged__DelegateSignature");
		
		UUI_Settings_C_BndEvt__UI_Settings_VoiceChatSelector_K2Node_ComponentBoundEvent_30_SelectedIndexChanged__DelegateSignature_Params params {};
		params.Selector = Selector;
		params.New_Index = New_Index;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.ExecuteUbergraph_UI_Settings
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UUI_Settings_C::ExecuteUbergraph_UI_Settings(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.ExecuteUbergraph_UI_Settings");
		
		UUI_Settings_C_ExecuteUbergraph_UI_Settings_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_Settings.UI_Settings_C.SettingsClose__DelegateSignature
	 * 		Flags  -> ()
	 */
	void UUI_Settings_C::SettingsClose__DelegateSignature()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_Settings.UI_Settings_C.SettingsClose__DelegateSignature");
		
		UUI_Settings_C_SettingsClose__DelegateSignature_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_Settings_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_Settings_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_Settings.UI_Settings_C");
		return ptr;
	}

}


