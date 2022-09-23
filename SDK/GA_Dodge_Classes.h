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
	 * BlueprintGeneratedClass GA_Dodge.GA_Dodge_C
	 * Size -> 0x0035 (FullSize[0x042D] - InheritedSize[0x03F8])
	 */
	class UGA_Dodge_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_BaseCharacter_C*                                 Avatar_Character;                                        // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_PlayMontageAndWait*                     Montage_Task;                                            // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UATCustomWaitVelocityChange*                         Velocity_Task;                                           // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask*                                        Input_Task;                                              // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		struct FVector                                             Velocity;                                                // 0x0420(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		EDirection                                                 Direction;                                               // 0x042C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void OnCancelled_9A04E09140318BF4BFCB229F6C3DEE39();
		void OnInterrupted_9A04E09140318BF4BFCB229F6C3DEE39();
		void OnBlendOut_9A04E09140318BF4BFCB229F6C3DEE39();
		void OnCompleted_9A04E09140318BF4BFCB229F6C3DEE39();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void On_Start();
		void ExecuteUbergraph_GA_Dodge(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
