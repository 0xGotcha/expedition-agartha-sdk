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
	 * BlueprintGeneratedClass GA_Block.GA_Block_C
	 * Size -> 0x0038 (FullSize[0x0430] - InheritedSize[0x03F8])
	 */
	class UGA_Block_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_BaseCharacter_C*                                 Avatar_Character;                                        // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask*                                        Input_Release_Wait;                                      // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask*                                        Zero_Stamina_Wait;                                       // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Parry_Start_Wait;                                        // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Parry_End_Wait;                                          // 0x0420(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         Parry_Effect;                                            // 0x0428(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnChange_D933C1944C4C0D0F91FD00BDC11C2F22(bool bMatchesComparison, float CurrentValue);
		void EventReceived_2C33CBF247F3F1EBE919938F89995296(const struct FGameplayEventData& Payload);
		void EventReceived_A66AD4AB411CD3849F56D2BBEF9499E4(const struct FGameplayEventData& Payload);
		void OnRelease_D40188364B739515CD31D0B253664B7A(float TimeHeld);
		void EventReceived_6C3BA1FE422D9CA292132AB543A2FBFE(const struct FGameplayEventData& Payload);
		void OnRelease_F452A7214450E0FE3DDBECA7206259C8(float TimeHeld);
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_ActivateAbility();
		void ExecuteUbergraph_GA_Block(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
