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
	 * WidgetBlueprintGeneratedClass W_KeyMapping.W_KeyMapping_C
	 * Size -> 0x004A (FullSize[0x02AA] - InheritedSize[0x0260])
	 */
	class UW_KeyMapping_C : public UUserWidget
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0260(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UVerticalBox*                                        ActionMappingsList;                                      // 0x0268(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                         ApplyButton;                                             // 0x0270(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UTextBlock*                                          ConflictMessage;                                         // 0x0278(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		class UW_Button_C*                                         ResetButton;                                             // 0x0280(0x0008) BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash
		TArray<struct FInputChord>                                 ForbiddenKeys;                                           // 0x0288(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class FScriptMulticastDelegate                             Key_Selection_State_Changed;                             // 0x0298(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable
		bool                                                       Dirty;                                                   // 0x02A8(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Conflicted;                                              // 0x02A9(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Construct();
		void Selector_State_Changed(class UW_KeyMappingEntry_C* Selector, bool Selecting);
		void New_Key_Selected(class UW_KeyMappingEntry_C* Selector, const class FName& Action_Name, const struct FInputChord& New_Key);
		void BndEvt__W_KeyMapping_ResetButton_K2Node_ComponentBoundEvent_0_OnClicked__DelegateSignature(class UW_Button_C* Button);
		void BndEvt__W_KeyMapping_ApplyButton_K2Node_ComponentBoundEvent_1_OnClicked__DelegateSignature(class UW_Button_C* Button);
		void Repopulate_Mapping_List();
		void Save_Bindings();
		void ExecuteUbergraph_W_KeyMapping(int32_t EntryPoint);
		void Key_Selection_State_Changed__DelegateSignature(bool Selecting);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
