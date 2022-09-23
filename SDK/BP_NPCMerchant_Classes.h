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
	 * BlueprintGeneratedClass BP_NPCMerchant.BP_NPCMerchant_C
	 * Size -> 0x0020 (FullSize[0x1380] - InheritedSize[0x1360])
	 */
	class ABP_NPCMerchant_C : public ABP_BaseBot_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UBP_NPCMerchantComponent_C*                          BP_NPCMerchantComponent;                                 // 0x1368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UShopComponent*                                      Shop;                                                    // 0x1370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class UAnimSequence*                                       Default_Animation;                                       // 0x1378(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash

	public:
		void Hold_Time_Multiplier(float* Multiplier);
		void Action_Verb(class FText* Result);
		void Requires_Hold_To_Interact(bool* Result);
		void ReceiveBeginPlay();
		void Rebuild_Finished();
		void ExecuteUbergraph_BP_NPCMerchant(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
