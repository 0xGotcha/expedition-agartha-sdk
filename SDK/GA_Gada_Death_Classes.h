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
	 * BlueprintGeneratedClass GA_Gada_Death.GA_Gada_Death_C
	 * Size -> 0x0024 (FullSize[0x043D] - InheritedSize[0x0419])
	 */
	class UGA_Gada_Death_C : public UGA_AbstractAttack_C
	{
	public:
		unsigned char                                              UnknownData_DM3E[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       Heavy_Attack;                                            // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_K0M5[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    Combo_Index;                                             // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Combo_Window_Open;                                       // 0x043C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnCancelled_87A34D8F45F4423E0F3652BE9DCB8387();
		void OnInterrupted_87A34D8F45F4423E0F3652BE9DCB8387();
		void OnBlendOut_87A34D8F45F4423E0F3652BE9DCB8387();
		void OnCompleted_87A34D8F45F4423E0F3652BE9DCB8387();
		void OnFinish_78B3A7214BF214808E543FB05871F671();
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void ExecuteUbergraph_GA_Gada_Death(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
