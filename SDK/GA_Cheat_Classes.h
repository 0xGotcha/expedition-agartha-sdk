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
	 * BlueprintGeneratedClass GA_Cheat.GA_Cheat_C
	 * Size -> 0x0028 (FullSize[0x0420] - InheritedSize[0x03F8])
	 */
	class UGA_Cheat_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FActiveGameplayEffectHandle                         MaxSpeed;                                                // 0x0400(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         MaxHealth;                                               // 0x0408(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         MaxStamina;                                              // 0x0410(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		struct FActiveGameplayEffectHandle                         MaxFood;                                                 // 0x0418(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash

	public:
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void ExecuteUbergraph_GA_Cheat(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
