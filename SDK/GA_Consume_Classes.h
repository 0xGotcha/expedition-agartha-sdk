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
	 * BlueprintGeneratedClass GA_Consume.GA_Consume_C
	 * Size -> 0x0054 (FullSize[0x044C] - InheritedSize[0x03F8])
	 */
	class UGA_Consume_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_BaseCharacter_C*                                 Character;                                               // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilityTask_PlayMontageAndWait*                     Anim_Task;                                               // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FGameplayEffectSpecHandle>                   Effects_To_Apply;                                        // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UItem*                                               Consumable;                                              // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FGameplayTagContainer                               Effects_With_Tags_To_Remove;                             // 0x0428(0x0020) Edit, BlueprintVisible, DisableEditOnInstance
		int32_t                                                    Stacks_Of_Effects_To_Remove;                             // 0x0448(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnCancelled_FF330F76448C382EEACCAF9759E3A7C0();
		void OnInterrupted_FF330F76448C382EEACCAF9759E3A7C0();
		void OnBlendOut_FF330F76448C382EEACCAF9759E3A7C0();
		void OnCompleted_FF330F76448C382EEACCAF9759E3A7C0();
		void OnCancelled_0AE1996B4A551D00FECE4B9F82CF998C();
		void OnInterrupted_0AE1996B4A551D00FECE4B9F82CF998C();
		void OnBlendOut_0AE1996B4A551D00FECE4B9F82CF998C();
		void OnCompleted_0AE1996B4A551D00FECE4B9F82CF998C();
		void OnCancelled_51EFCA7649E23121595FCCBB985C6D74();
		void OnInterrupted_51EFCA7649E23121595FCCBB985C6D74();
		void OnBlendOut_51EFCA7649E23121595FCCBB985C6D74();
		void OnCompleted_51EFCA7649E23121595FCCBB985C6D74();
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void ExecuteUbergraph_GA_Consume(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
