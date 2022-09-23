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
	 * WidgetBlueprintGeneratedClass W_Button.W_Button_C
	 * Size -> 0x0338 (FullSize[0x0598] - InheritedSize[0x0260])
	 */
	class UW_Button_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UTextBlock*                                          ButtonTitle;                                             // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UButton*                                             TheButton;                                               // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		struct FButtonStyle                                        Style;                                                   // 0x0278(0x0278) Edit, BlueprintVisible, ExposeOnSpawn
		struct FSlateFontInfo                                      Font;                                                    // 0x04F0(0x0058) Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash
		struct FSlateColor                                         FontColorAndOpacity;                                     // 0x0548(0x0028) Edit, BlueprintVisible, ExposeOnSpawn
		class FText                                                Title;                                                   // 0x0570(0x0018) Edit, BlueprintVisible, ExposeOnSpawn
		class FScriptMulticastDelegate                             OnClicked;                                               // 0x0588(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void PreConstruct(bool IsDesignTime);
		void BndEvt__W_Button_TheButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
		void ExecuteUbergraph_W_Button(int32_t EntryPoint);
		void OnClicked__DelegateSignature(class UW_Button_C* Button);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
