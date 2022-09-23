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
	 * BlueprintGeneratedClass GA_SheatheUnsheathe.GA_SheatheUnsheathe_C
	 * Size -> 0x00E8 (FullSize[0x04E0] - InheritedSize[0x03F8])
	 */
	class UGA_SheatheUnsheathe_C : public UCustomGameplayAbility
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x03F8(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UAnimMontage*                                        PP_Montage;                                              // 0x0400(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAnimMontage*                                        FPP_Montage;                                             // 0x0408(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UAbilityTask_PlayMontageAndWait*                     Anim_Task;                                               // 0x0410(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UAbilityTask_WaitGameplayEvent*                      Wait_Task;                                               // 0x0418(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EWeaponType                                                Weapon_Type_To_Equip;                                    // 0x0420(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_PCN1[0x7];                                   // 0x0421(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayEventData                                  Event_Data;                                              // 0x0428(0x00B0) Edit, BlueprintVisible, DisableEditOnInstance
		class ABP_BaseCharacter_C*                                 Character;                                               // 0x04D8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, struct FGameplayTagContainer* RelevantTags);
		void OnCancelled_F18A5AB54C944BD8EABE3DB3424614CE();
		void OnInterrupted_F18A5AB54C944BD8EABE3DB3424614CE();
		void OnBlendOut_F18A5AB54C944BD8EABE3DB3424614CE();
		void OnCompleted_F18A5AB54C944BD8EABE3DB3424614CE();
		void OnCancelled_D9A64E7041F226349F9D68B3ADAEE06F();
		void OnInterrupted_D9A64E7041F226349F9D68B3ADAEE06F();
		void OnBlendOut_D9A64E7041F226349F9D68B3ADAEE06F();
		void OnCompleted_D9A64E7041F226349F9D68B3ADAEE06F();
		void EventReceived_048CA3CF48FB79A849F8A796EAA9ED14(const struct FGameplayEventData& Payload);
		void EventReceived_FB3668DE494044FF4D52DB82B03653A9(const struct FGameplayEventData& Payload);
		void EventReceived_FC3D490E403E6EB1B0759AAF43F8EDCF(const struct FGameplayEventData& Payload);
		void EventReceived_FC9655F649AFBC5DC73DCDA4F9807AE0(const struct FGameplayEventData& Payload);
		void EventReceived_442C4DE946563B42EA7C778250B22A34(const struct FGameplayEventData& Payload);
		void EventReceived_538F7B0B4F60120D485FAB97DE934D2F(const struct FGameplayEventData& Payload);
		void EventReceived_2F0316CD4DD13C9E0C8CD299CE8DB89E(const struct FGameplayEventData& Payload);
		void EventReceived_25EDE76541BDB9CFBEBC65A7549845C3(const struct FGameplayEventData& Payload);
		void EventReceived_6BD0338042F89525D9F85BA0454BDCB7(const struct FGameplayEventData& Payload);
		void OnCancelled_D21237974BA97FC81AAB6EAB35A56695();
		void OnInterrupted_D21237974BA97FC81AAB6EAB35A56695();
		void OnBlendOut_D21237974BA97FC81AAB6EAB35A56695();
		void OnCompleted_D21237974BA97FC81AAB6EAB35A56695();
		void OnCancelled_9A92F6DE4CF309E62D84C5B36B8BD1F4();
		void OnInterrupted_9A92F6DE4CF309E62D84C5B36B8BD1F4();
		void OnBlendOut_9A92F6DE4CF309E62D84C5B36B8BD1F4();
		void OnCompleted_9A92F6DE4CF309E62D84C5B36B8BD1F4();
		void EventReceived_E26303E940B02991FFB572B4EC5F1048(const struct FGameplayEventData& Payload);
		void EventReceived_6AB2EF43434917E3FCA38FBB71810E43(const struct FGameplayEventData& Payload);
		void K2_OnEndAbility(bool bWasCancelled);
		void Equip();
		void Unequip();
		void Equip_Primary();
		void Equip_Secondary();
		void K2_ActivateAbilityFromEvent(const struct FGameplayEventData& EventData);
		void Switch_Shield_On();
		void ExecuteUbergraph_GA_SheatheUnsheathe(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
