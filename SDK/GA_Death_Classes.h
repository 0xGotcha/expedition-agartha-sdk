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
	 * BlueprintGeneratedClass GA_Death.GA_Death_C
	 * Size -> 0x0048 (FullSize[0x0440] - InheritedSize[0x03F8])
	 */
	class UGA_Death_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAbilityTask_PlayMontageAndWait*                     Anim_Task;                                               // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UAnimMontage*>                                Death_Anims;                                             // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAnimMontage*                                        Montage_to_Play;                                         // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Ragdoll_Task;                                   // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitDelay*                              Wait_For_Stop_Ragdoll_Task;                              // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitDelay*                              Async_Task;                                              // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OnCancelled_5F5A3866453AC12E812F009F8BC3ACFA();
		void OnInterrupted_5F5A3866453AC12E812F009F8BC3ACFA();
		void OnBlendOut_5F5A3866453AC12E812F009F8BC3ACFA();
		void OnCompleted_5F5A3866453AC12E812F009F8BC3ACFA();
		void OnFinish_4E558C634F7F250B11DFD8A41D587F6B();
		void EventReceived_736767D846B152DAC4F52281C1A58F5C(const struct FGameplayEventData& Payload);
		void OnFinish_84C979724BAE93065BD5F4AD036807CA();
		void K2_ActivateAbility();
		void Multicast_Play_Montages(class UAnimMontage* PP_Montage, class UAnimMontage* FPP_Montage, class ABP_BaseCharacter_C* Avatar);
		void Play_Montages(class UAnimMontage* PP_Montage_To_Play, class UAnimMontage* FPP_Montage_To_Play, class ABP_BaseCharacter_C* Avatar);
		void Go_Ragdoll(class ABP_BaseCharacter_C* Avatar);
		void Multicast_Ragdoll(class ABP_BaseCharacter_C* Avatar);
		void Stop_Ragdoll(class ABP_BaseCharacter_C* Avatar);
		void Multicast_Stop_Ragdoll(class ABP_BaseCharacter_C* Avatar);
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_GA_Death(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
