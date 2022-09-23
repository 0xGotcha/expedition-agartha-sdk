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
	 * BlueprintGeneratedClass BP_CharacterNPCComponent.BP_CharacterNPCComponent_C
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UBP_CharacterNPCComponent_C : public UCharacterNPCsComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x0100(0x0008) ZeroConstructor, Transient, DuplicateTransient

	public:
		void EventQuestResult(EQuestActionResult Result, const class FName& QuestName);
		void ExecuteUbergraph_BP_CharacterNPCComponent(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
