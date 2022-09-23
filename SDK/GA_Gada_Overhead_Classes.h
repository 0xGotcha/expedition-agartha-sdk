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
	 * BlueprintGeneratedClass GA_Gada_Overhead.GA_Gada_Overhead_C
	 * Size -> 0x0025 (FullSize[0x043E] - InheritedSize[0x0419])
	 */
	class UGA_Gada_Overhead_C : public UGA_AbstractAttack_C
	{
	public:
		unsigned char                                              UnknownData_POKO[0x7];                                   // 0x0419(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0420(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		bool                                                       Heavy_Attack;                                            // 0x0428(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_V0B4[0x7];                                   // 0x0429(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ABP_BaseCharacter_C*                                 Avatar;                                                  // 0x0430(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		int32_t                                                    Combo_Index;                                             // 0x0438(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Combo_Window_Open;                                       // 0x043C(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       FollowUp;                                                // 0x043D(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void OnCancelled_5FF0F6294B8CDB78710E969CC93FA7C4();
		void OnInterrupted_5FF0F6294B8CDB78710E969CC93FA7C4();
		void OnBlendOut_5FF0F6294B8CDB78710E969CC93FA7C4();
		void OnCompleted_5FF0F6294B8CDB78710E969CC93FA7C4();
		void OnCancelled_6E37375E47F54634250095BBE31827E8();
		void OnInterrupted_6E37375E47F54634250095BBE31827E8();
		void OnBlendOut_6E37375E47F54634250095BBE31827E8();
		void OnCompleted_6E37375E47F54634250095BBE31827E8();
		void EventReceived_CA198FD94DC9BD5035AF428DFC4C9D55(const struct FGameplayEventData& Payload);
		void EventReceived_0911B90D410B67ACC0287BA4B6B75511(const struct FGameplayEventData& Payload);
		void OnCancelled_F01DD1CB4919A14964D61CAF2574E11B();
		void OnInterrupted_F01DD1CB4919A14964D61CAF2574E11B();
		void OnBlendOut_F01DD1CB4919A14964D61CAF2574E11B();
		void OnCompleted_F01DD1CB4919A14964D61CAF2574E11B();
		void EventReceived_18B6340F41FB99497315BDB30FCFB7FE(const struct FGameplayEventData& Payload);
		void K2_ActivateAbility();
		void K2_OnEndAbility(bool bWasCancelled);
		void Add_Knockback(float Radius);
		void ExecuteUbergraph_GA_Gada_Overhead(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
