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
	 * BlueprintGeneratedClass GA_ZombieAttack.GA_ZombieAttack_C
	 * Size -> 0x0077 (FullSize[0x0490] - InheritedSize[0x0419])
	 */
	class UGA_ZombieAttack_C : public UGA_AbstractAttack_C
	{
	public:
		unsigned char                                              UnknownData_JO5T[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<class UAnimMontage*>                                Combo_Montages;                                          // 0x0430(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		TArray<class UAnimMontage*>                                Combo_Cancel_Montages;                                   // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Hit_Block_Task;                                 // 0x0450(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Hit_Parry_Task;                                 // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Damage_Task;                                    // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class AActor*                                              Target;                                                  // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilityTask_PlayMontageAndWait*                     Anim_Task;                                               // 0x0470(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         Charge_Effect;                                           // 0x0478(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAbilityTask_WaitDelay*                              Wait_To_Release_Task;                                    // 0x0480(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitDelay*                              Wait_To_Fail_Heavy_Task;                                 // 0x0488(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void EventReceived_BF05C3D94EFC6AABE1A20496CF60B7D8(const struct FGameplayEventData& Payload);
		void EventReceived_94607F0949290434CDBA518A4E9CFDFC(const struct FGameplayEventData& Payload);
		void EventReceived_F5319D1349AB16C42A06FFB12C1B4BD5(const struct FGameplayEventData& Payload);
		void OnCancelled_5ABCDF8A43C75EBC60B8A9A88499B0CF();
		void OnInterrupted_5ABCDF8A43C75EBC60B8A9A88499B0CF();
		void OnBlendOut_5ABCDF8A43C75EBC60B8A9A88499B0CF();
		void OnCompleted_5ABCDF8A43C75EBC60B8A9A88499B0CF();
		void OnCancelled_4F2BB68049790F16282FCF95B91A598B();
		void OnInterrupted_4F2BB68049790F16282FCF95B91A598B();
		void OnBlendOut_4F2BB68049790F16282FCF95B91A598B();
		void OnCompleted_4F2BB68049790F16282FCF95B91A598B();
		void OnCancelled_AE23F94C402AD9B75997C3A94BBF2496();
		void OnInterrupted_AE23F94C402AD9B75997C3A94BBF2496();
		void OnBlendOut_AE23F94C402AD9B75997C3A94BBF2496();
		void OnCompleted_AE23F94C402AD9B75997C3A94BBF2496();
		void OnFinish_E5A17C274AE37DDBF395C39702220D58();
		void OnCancelled_35F82D93495C154A0E0BE29B95F4A56A();
		void OnInterrupted_35F82D93495C154A0E0BE29B95F4A56A();
		void OnBlendOut_35F82D93495C154A0E0BE29B95F4A56A();
		void OnCompleted_35F82D93495C154A0E0BE29B95F4A56A();
		void OnFinish_0EFD929040E8B066013702BBF47DE5EC();
		void EventReceived_3710E133432F1D9F2067B085326FF1CA(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void Add_Knockback(float Radius);
		void ExecuteUbergraph_GA_ZombieAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
