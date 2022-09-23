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
	 * BlueprintGeneratedClass BP_Zombie.BP_Zombie_C
	 * Size -> 0x0010 (FullSize[0x1370] - InheritedSize[0x1360])
	 */
	class ABP_Zombie_C : public ABP_BaseBot_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1360(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UCharacterHistoryComponent*                          CharacterHistory;                                        // 0x1368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		void Effect_To_Apply_On_Event(const struct FGameplayTag& Event_Tag, class UClass** Effect);
		void Randomize_Appearance();
		void ReceiveBeginPlay();
		void ExecuteUbergraph_BP_Zombie(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
