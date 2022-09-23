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
	 * BlueprintGeneratedClass BP_AgarthaPlayerController.BP_AgarthaPlayerController_C
	 * Size -> 0x0010 (FullSize[0x05C0] - InheritedSize[0x05B0])
	 */
	class ABP_AgarthaPlayerController_C : public AProjectAgarthaPlayerController
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x05B0(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UPlayerHUD_C*                                        PlayerHUD;                                               // 0x05B8(0x0008) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		void ReceiveBeginPlay();
		void HighlightNPC(class UNPCComponent* NPC);
		void ReceivePossess(class APawn* PossessedPawn);
		void ExecuteUbergraph_BP_AgarthaPlayerController(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
