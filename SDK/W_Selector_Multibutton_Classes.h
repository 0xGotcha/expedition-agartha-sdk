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
	 * WidgetBlueprintGeneratedClass W_Selector_Multibutton.W_Selector_Multibutton_C
	 * Size -> 0x0628 (FullSize[0x0888] - InheritedSize[0x0260])
	 */
	class UW_Selector_Multibutton_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UHorizontalBox*                                      ButtonContainer;                                         // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<class FText>                                        Selector_Options;                                        // 0x0270(0x0010) Edit, BlueprintVisible, ExposeOnSpawn
		int32_t                                                    Selected_Index;                                          // 0x0280(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash
		unsigned char                                              UnknownData_JQPF[0x4];                                   // 0x0284(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FButtonStyle                                        Button_Style;                                            // 0x0288(0x0278) Edit, BlueprintVisible, ExposeOnSpawn
		struct FButtonStyle                                        Selected_Button_Style;                                   // 0x0500(0x0278) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateFontInfo                                      Font;                                                    // 0x0778(0x0058) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateFontInfo                                      Selected_Font;                                           // 0x07D0(0x0058) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateColor                                         Font_Color_And_Opacity;                                  // 0x0828(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateColor                                         Selected_Font_Color_And_Opacity;                         // 0x0850(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             SelectedIndexChanged;                                    // 0x0878(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void PreConstruct(bool IsDesignTime);
		void OnSelectorClick(class UW_Button_C* Button);
		void Populate();
		void Set_Selected_Index(int32_t Selected_Index);
		void ExecuteUbergraph_W_Selector_Multibutton(int32_t EntryPoint);
		void SelectedIndexChanged__DelegateSignature(class UW_Selector_Multibutton_C* Selector, int32_t New_Index);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
