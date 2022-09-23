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
	 * BlueprintGeneratedClass GA_ZombieKnockdown2.GA_ZombieKnockdown2_C
	 * Size -> 0x0044 (FullSize[0x043C] - InheritedSize[0x03F8])
	 */
	class UGA_ZombieKnockdown2_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAbilityTask_PlayMontageAndWait*                     Anim_Task;                                               // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UAnimMontage*>                                Death_Anims;                                             // 0x0410(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAnimMontage*                                        Montage_to_Play;                                         // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Ragdoll_Task;                                   // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             World_Direction;                                         // 0x0430(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnCancelled_9E8C91D84E93A634452566AAE11B4790();
		void OnInterrupted_9E8C91D84E93A634452566AAE11B4790();
		void OnBlendOut_9E8C91D84E93A634452566AAE11B4790();
		void OnCompleted_9E8C91D84E93A634452566AAE11B4790();
		void EventReceived_1E4AB1774C630350C881738A522ED336(const struct FGameplayEventData& Payload);
		void OnFinish_426FAC4F49876B388256E79DFBDB74E1();
		void OnFinish_08A3CCA24CE4A881E19704B07A1182EA();
		void OnFinish_10EA67164BBE2F3672D299B287183DA3();
		void OnFinish_1B284A6944C5C65EA5D5DB857148C1FA();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void Multicast_Play_Montages(class UAnimMontage* PP_Montage, class UAnimMontage* FPP_Montage, class ABP_BaseCharacter_C* Avatar);
		void Play_Montages(class UAnimMontage* PP_Montage_To_Play, class UAnimMontage* FPP_Montage_To_Play, class ABP_BaseCharacter_C* Avatar);
		void Go_Ragdoll(class ABP_BaseCharacter_C* Avatar);
		void Multicast_Ragdoll(class ABP_BaseCharacter_C* Avatar);
		void Stop_Ragdoll(class ABP_BaseCharacter_C* Avatar);
		void Multicast_Stop_Ragdoll(class ABP_BaseCharacter_C* Avatar);
		void ExecuteUbergraph_GA_ZombieKnockdown2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
