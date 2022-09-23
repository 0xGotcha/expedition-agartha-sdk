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
	 * BlueprintGeneratedClass GA_Kick.GA_Kick_C
	 * Size -> 0x001F (FullSize[0x0438] - InheritedSize[0x0419])
	 */
	class UGA_Kick_C : public UGA_AbstractAttack_C
	{
	public:
		unsigned char                                              UnknownData_PZWN[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class ABP_BaseCharacter_C*                                 Avatar_Character;                                        // 0x0428(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_PlayMontageAndWait*                     Async_Task;                                              // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void OnCancelled_564373A642421E4DB74C56977AA062B2();
		void OnInterrupted_564373A642421E4DB74C56977AA062B2();
		void OnBlendOut_564373A642421E4DB74C56977AA062B2();
		void OnCompleted_564373A642421E4DB74C56977AA062B2();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_GA_Kick(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
