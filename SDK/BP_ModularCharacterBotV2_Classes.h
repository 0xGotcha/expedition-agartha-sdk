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
	 * BlueprintGeneratedClass BP_ModularCharacterBotV2.BP_ModularCharacterBotV2_C
	 * Size -> 0x0018 (FullSize[0x1378] - InheritedSize[0x1360])
	 */
	class ABP_ModularCharacterBotV2_C : public ABP_BaseBot_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UCharacterHistoryComponent*                          CharacterHistory;                                        // 0x1368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCharacterModularComponent*                          CharacterModular;                                        // 0x1370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_ModularCharacterBotV2(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
