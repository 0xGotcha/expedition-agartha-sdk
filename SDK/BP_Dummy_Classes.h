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
	 * BlueprintGeneratedClass BP_Dummy.BP_Dummy_C
	 * Size -> 0x001C (FullSize[0x04D4] - InheritedSize[0x04B8])
	 */
	class ABP_Dummy_C : public ACharacter
	{
	public:
		unsigned char                                              UnknownData_BPAR[0x8];                                   // 0x04B8(0x0008) Fix Super Size
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x04C0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		struct FVector                                             Hit_Force;                                               // 0x04C8(0x000C) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveTick(float DeltaSeconds);
		void Receive_Hit(const struct FHitResult& Hit_Result);
		void ExecuteUbergraph_BP_Dummy(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
