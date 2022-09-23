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
	 * BlueprintGeneratedClass GA_GeneralAttack.GA_GeneralAttack_C
	 * Size -> 0x0057 (FullSize[0x0470] - InheritedSize[0x0419])
	 */
	class UGA_GeneralAttack_C : public UGA_AbstractAttack_C
	{
	public:
		unsigned char                                              UnknownData_GN4J[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       Heavy_Attack;                                            // 0x0430(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_D35Y[0x3];                                   // 0x0431(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Heavy_Release_Time;                                      // 0x0434(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Combo_Index;                                             // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		int32_t                                                    Max_Combo_Index;                                         // 0x043C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Combo_Window_Open;                                       // 0x0440(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_U2IZ[0x7];                                   // 0x0441(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Dodge_Task;                                     // 0x0448(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         Heavy_Stamina_Drain;                                     // 0x0450(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		class UAbilityTask_WaitDelay*                              Wait_Delay;                                              // 0x0458(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Hit_Block_Task;                                 // 0x0460(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_For_Hit_Parry_Task;                                 // 0x0468(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OnCancelled_8FA473A1490CED469FE3FB800F4EF5DF();
		void OnInterrupted_8FA473A1490CED469FE3FB800F4EF5DF();
		void OnBlendOut_8FA473A1490CED469FE3FB800F4EF5DF();
		void OnCompleted_8FA473A1490CED469FE3FB800F4EF5DF();
		void EventReceived_F030D83945408555F140FAAB1B0F4077(const struct FGameplayEventData& Payload);
		void EventReceived_4FD158B64BB9671B0D63B0A51637BBB6(const struct FGameplayEventData& Payload);
		void OnPress_234FAFD64D30BFDAACB9A39F59956217(float TimeWaited);
		void OnRelease_7FF26A904C1E61D77E0FCCAD5D30C157(float TimeHeld);
		void OnCancelled_1C22BC484305A049B89318A252A5CD3C();
		void OnInterrupted_1C22BC484305A049B89318A252A5CD3C();
		void OnBlendOut_1C22BC484305A049B89318A252A5CD3C();
		void OnCompleted_1C22BC484305A049B89318A252A5CD3C();
		void OnCancelled_8762B4D84AF6B00C94B6878FD9193F16();
		void OnInterrupted_8762B4D84AF6B00C94B6878FD9193F16();
		void OnBlendOut_8762B4D84AF6B00C94B6878FD9193F16();
		void OnCompleted_8762B4D84AF6B00C94B6878FD9193F16();
		void EventReceived_531D384540E9F4A9BF7991A29BE940C4(const struct FGameplayEventData& Payload);
		void EventReceived_DB5E5ACB46ADAA7832A0A3A6523B41A0(const struct FGameplayEventData& Payload);
		void EventReceived_681186514339C9A51176828C531DDF30(const struct FGameplayEventData& Payload);
		void EventReceived_7A0EF9254CFB28696AB40F8812C8D4B1(const struct FGameplayEventData& Payload);
		void EventReceived_E7D3235D466711D53A26AAB2D3D23862(const struct FGameplayEventData& Payload);
		void OnCancelled_6EF3D80A47F4A8829194C6AD538EA1CD();
		void OnInterrupted_6EF3D80A47F4A8829194C6AD538EA1CD();
		void OnBlendOut_6EF3D80A47F4A8829194C6AD538EA1CD();
		void OnCompleted_6EF3D80A47F4A8829194C6AD538EA1CD();
		void EventReceived_FF9D13B343C8E251E5AD4AB4326F3B5D(const struct FGameplayEventData& Payload);
		void OnFinish_68807AD74442D08350F34A9A1903EF3F();
		void OnFinish_07890DB84E23E51936B0FFA93EC8567B();
		void OnFinish_B455DF75483D5CD82FC45CA8C93E81F1();
		void EventReceived_5C12FC484D5A896981A7C39873CEBCF5(const struct FGameplayEventData& Payload);
		void EventReceived_D22F24A54F9F2EEECE0A74ACB169EE65(const struct FGameplayEventData& Payload);
		void EventReceived_0B3CFAD0422A05FB0DD6519E5369C551(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void Next_Attack();
		void K2_OnEndAbility(bool bWasCancelled);
		void Release_Heavy();
		void ExecuteUbergraph_GA_GeneralAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
