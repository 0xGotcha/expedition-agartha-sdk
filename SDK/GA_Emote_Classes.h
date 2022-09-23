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
	 * BlueprintGeneratedClass GA_Emote.GA_Emote_C
	 * Size -> 0x0019 (FullSize[0x0411] - InheritedSize[0x03F8])
	 */
	class UGA_Emote_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        Emote_Montage;                                           // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class ABP_BaseCharacter_C*                                 Character;                                               // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EWeaponType                                                Weapon_Type;                                             // 0x0410(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnCancelled_D996D15743A7A070EF824FBF9620C314();
		void OnInterrupted_D996D15743A7A070EF824FBF9620C314();
		void OnBlendOut_D996D15743A7A070EF824FBF9620C314();
		void OnCompleted_D996D15743A7A070EF824FBF9620C314();
		void OnVelocityChange_41EFB53142584ED653BF669711CEC5B8(const struct FVector& Velocity, bool Turning);
		void K2_OnEndAbility(bool bWasCancelled);
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void ExecuteUbergraph_GA_Emote(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
