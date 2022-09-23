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
	 * BlueprintGeneratedClass ANS_EventWindow.ANS_EventWindow_C
	 * Size -> 0x0011 (FullSize[0x0041] - InheritedSize[0x0030])
	 */
	class UANS_EventWindow_C : public UAnimNotifyState
	{
	public:
		struct FGameplayTag                                        Start_Tag;                                               // 0x0030(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		struct FGameplayTag                                        End_Tag;                                                 // 0x0038(0x0008) Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash
		ELimb                                                      Limb;                                                    // 0x0040(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
		bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
