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
	 * BlueprintGeneratedClass GA_Gada_Stomp.GA_Gada_Stomp_C
	 * Size -> 0x0025 (FullSize[0x043E] - InheritedSize[0x0419])
	 */
	class UGA_Gada_Stomp_C : public UGA_AbstractAttack_C
	{
	public:
		unsigned char                                              UnknownData_VY26[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       Heavy_Attack;                                            // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_62EU[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    Combo_Index;                                             // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Combo_Window_Open;                                       // 0x043C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FollowUp;                                                // 0x043D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnCancelled_45CB34A74AC5ED49631359AEB0902C82();
		void OnInterrupted_45CB34A74AC5ED49631359AEB0902C82();
		void OnBlendOut_45CB34A74AC5ED49631359AEB0902C82();
		void OnCompleted_45CB34A74AC5ED49631359AEB0902C82();
		void OnCancelled_8D661A3E4AE203D8C8BE85AD290F137F();
		void OnInterrupted_8D661A3E4AE203D8C8BE85AD290F137F();
		void OnBlendOut_8D661A3E4AE203D8C8BE85AD290F137F();
		void OnCompleted_8D661A3E4AE203D8C8BE85AD290F137F();
		void EventReceived_7DE0A57648B7E98D6B09949FCE25C925(const struct FGameplayEventData& Payload);
		void EventReceived_7C1D63364B86E5399B9E219ED6CE10E6(const struct FGameplayEventData& Payload);
		void OnCancelled_F05D4B5642E367D75635E69671A18194();
		void OnInterrupted_F05D4B5642E367D75635E69671A18194();
		void OnBlendOut_F05D4B5642E367D75635E69671A18194();
		void OnCompleted_F05D4B5642E367D75635E69671A18194();
		void OnCancelled_39F063854D3741509965BDAC48DE8333();
		void OnInterrupted_39F063854D3741509965BDAC48DE8333();
		void OnBlendOut_39F063854D3741509965BDAC48DE8333();
		void OnCompleted_39F063854D3741509965BDAC48DE8333();
		void OnCancelled_EF409AEC4F258CA63808F0994A85CEA1();
		void OnInterrupted_EF409AEC4F258CA63808F0994A85CEA1();
		void OnBlendOut_EF409AEC4F258CA63808F0994A85CEA1();
		void OnCompleted_EF409AEC4F258CA63808F0994A85CEA1();
		void EventReceived_0AC058F2445ED1A30DC99E990D045420(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void Add_Knockback(float Radius);
		void ExecuteUbergraph_GA_Gada_Stomp(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
