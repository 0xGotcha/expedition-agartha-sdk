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
	 * BlueprintGeneratedClass GA_HitReact.GA_HitReact_C
	 * Size -> 0x0129 (FullSize[0x0521] - InheritedSize[0x03F8])
	 */
	class UGA_HitReact_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_PlayMontageAndWait*                     Anim_Task;                                               // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAnimMontage*                                        Montage_to_Play;                                         // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        FPP_Montage_To_Play;                                     // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameplayTag>                                Abilities_To_Cancel;                                     // 0x0420(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_BaseCharacter_C*                                 Instigator;                                              // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        Event_Tag;                                               // 0x0438(0x0008) Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash
		TArray<struct FGameplayEffectSpecHandle>                   Effects_To_Apply;                                        // 0x0440(0x0010) Edit, BlueprintVisible, DisableEditOnInstance
		struct FGameplayEventData                                  Payload;                                                 // 0x0450(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance
		float                                                      Received_Damage;                                         // 0x0500(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Received_Stamina_Damage;                                 // 0x0504(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Weapon_Damage_Reduction;                                 // 0x0508(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      General_Damage_Reduction;                                // 0x050C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Applied_Damage;                                          // 0x0510(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Applied_Stamina_Damage;                                  // 0x0514(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      Block_Damage;                                            // 0x0518(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       bCriticalHit;                                            // 0x051C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bFallDamage;                                             // 0x051D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Shouldn_t_Play_Montages;                                 // 0x051E(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       Should_Knockdown_If_Capable;                             // 0x051F(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       No_Flinch;                                               // 0x0520(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void Direction_From_Hit_Result(const struct FHitResult& Hit, class AActor* Instigator, bool Including_Back, EDirection* Direction);
		void OnCancelled_062D5C734CE0692C196CF1A2A3F2AF24();
		void OnInterrupted_062D5C734CE0692C196CF1A2A3F2AF24();
		void OnBlendOut_062D5C734CE0692C196CF1A2A3F2AF24();
		void OnCompleted_062D5C734CE0692C196CF1A2A3F2AF24();
		void K2_OnEndAbility(bool bWasCancelled);
		void Apply_Damage();
		void Play_Montages(class UAnimMontage* PP_Montage_To_Play, class UAnimMontage* FPP_Montage_To_Play, class ABP_BaseCharacter_C* Avatar);
		void Multicast_Play_Montages(class UAnimMontage* PP_Montage, class UAnimMontage* FPP_Montage, class ABP_BaseCharacter_C* Avatar);
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void Damage_Armor();
		void Damage_Weapon_or_Shield_On_Block_or_Parry();
		void Damage_Attacker_Weapon();
		void ExecuteUbergraph_GA_HitReact(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
