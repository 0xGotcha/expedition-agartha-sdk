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
	 * BlueprintGeneratedClass GA_AbstractAttack.GA_AbstractAttack_C
	 * Size -> 0x0021 (FullSize[0x0419] - InheritedSize[0x03F8])
	 */
	class UGA_AbstractAttack_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UAbilityTask_WaitGameplayEvent*                      Window_Open_Task;                                        // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Window_Close_Task;                                       // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         Turn_Speed_Limit;                                        // 0x0410(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		ELimb                                                      Limb_Contact_Sphere;                                     // 0x0418(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void EventReceived_DFDFA43A495D79248276C4A2786DB36D(const struct FGameplayEventData& Payload);
		void EventReceived_A2CCDA9542EFD827F48F46937080F818(const struct FGameplayEventData& Payload);
		void Cleanup_Attack_Sweep_Window_Tasks();
		void Make_Wait_Attack_Sweep_Window();
		void ExecuteUbergraph_GA_AbstractAttack(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
