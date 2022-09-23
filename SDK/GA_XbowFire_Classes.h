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
	 * BlueprintGeneratedClass GA_XbowFire.GA_XbowFire_C
	 * Size -> 0x0069 (FullSize[0x0461] - InheritedSize[0x03F8])
	 */
	class UGA_XbowFire_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_BaseCharacter_C*                                 Avatar_Character;                                        // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_PlayMontageAndWait*                     Anim_Task;                                               // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Stagger_Task;                                   // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Sheathe_Task;                                   // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitAbilityActivate*                    Wait_For_Sprint_Task;                                    // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayTagRemoved*                 Wait_For_Sprint_End_Task;                                // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EDrawDebugTrace                                            Draw_Debug_Type;                                         // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_4RPC[0x7];                                   // 0x0431(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Reload_End_Task;                                // 0x0438(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Dodge_Task;                                     // 0x0440(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       ReloadEndReached;                                        // 0x0448(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_FB7Y[0x3];                                   // 0x0449(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             Firing_Location;                                         // 0x044C(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UItem*                                               Ammo;                                                    // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       HideBolts;                                               // 0x0460(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnCancelled_83D9F99544F0EAB1564E64ADC59B831D();
		void OnInterrupted_83D9F99544F0EAB1564E64ADC59B831D();
		void OnBlendOut_83D9F99544F0EAB1564E64ADC59B831D();
		void OnCompleted_83D9F99544F0EAB1564E64ADC59B831D();
		void OnCancelled_5A2A964741C4254F0EBEEBB074B9466D();
		void OnInterrupted_5A2A964741C4254F0EBEEBB074B9466D();
		void OnBlendOut_5A2A964741C4254F0EBEEBB074B9466D();
		void OnCompleted_5A2A964741C4254F0EBEEBB074B9466D();
		void EventReceived_17F686784A0DDE7F66C84B90C654D5CD(const struct FGameplayEventData& Payload);
		void OnCancelled_4F7079FA4A80FFC9AB5E2997AF2FA650();
		void OnInterrupted_4F7079FA4A80FFC9AB5E2997AF2FA650();
		void OnBlendOut_4F7079FA4A80FFC9AB5E2997AF2FA650();
		void OnCompleted_4F7079FA4A80FFC9AB5E2997AF2FA650();
		void OnCancelled_D80F435B42C59F94D8BEC4BFCB6E0281();
		void OnInterrupted_D80F435B42C59F94D8BEC4BFCB6E0281();
		void OnBlendOut_D80F435B42C59F94D8BEC4BFCB6E0281();
		void OnCompleted_D80F435B42C59F94D8BEC4BFCB6E0281();
		void EventReceived_46F995B745ADBDAA96555EBBE9884286(const struct FGameplayEventData& Payload);
		void EventReceived_7D79E13B4035701F22BBC8BDA58971A2(const struct FGameplayEventData& Payload);
		void EventReceived_4DCDED0F4E3F3337488A86A728C9ED78(const struct FGameplayEventData& Payload);
		void OnActivate_5B5C2E754E3EDDA38198F7B4DB92F984(class UGameplayAbility* ActivatedAbility);
		void EventReceived_FA8302134EBD902871576CBCD5853E03(const struct FGameplayEventData& Payload);
		void EventReceived_BEAEFFEE44C88331BFE153BED3166D57(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void Stop_Xbows();
		void Reload_Phase();
		void Fire_Bolt();
		void ExecuteUbergraph_GA_XbowFire(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
