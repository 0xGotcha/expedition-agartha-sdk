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
	 * BlueprintGeneratedClass GA_Sprint.GA_Sprint_C
	 * Size -> 0x0030 (FullSize[0x0428] - InheritedSize[0x03F8])
	 */
	class UGA_Sprint_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_BaseCharacter_C*                                 Avatar_Character;                                        // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask*                                        Velocity_Task;                                           // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask*                                        Input_Task;                                              // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask*                                        Stamina_Task;                                            // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         Stamina_Drain_Effect;                                    // 0x0420(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void OnChange_643EA0F74C7ED963AAADF5A6390AFA51(bool bMatchesComparison, float CurrentValue);
		void OnRelease_713CE67340C7F62BFBE6C0871A53E2F2(float TimeHeld);
		void OnVelocityChange_C380735C469843B389062192615878C9(const struct FVector& Velocity, bool Turning);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void On_Start();
		void ExecuteUbergraph_GA_Sprint(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
