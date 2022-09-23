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
	 * BlueprintGeneratedClass BP_BaseBot.BP_BaseBot_C
	 * Size -> 0x0008 (FullSize[0x1360] - InheritedSize[0x1358])
	 */
	class ABP_BaseBot_C : public ABP_BaseCharacter_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1358(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper

	public:
		void Remove_FPP_for_Bots();
		void ExecuteUbergraph_BP_BaseBot(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
