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
	 * BlueprintGeneratedClass IInteractable.IInteractable_C
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UIInteractable_C : public UInterface
	{
	public:
		void Interact(class ABP_BaseCharacter_C* Instigator);
		void Set_Inventory_Tick_Interval(float Tick_Interval);
		void Action_Verb(class FText* Result);
		void Hold_Time_Multiplier(float* Multiplier);
		void Requires_Hold_To_Interact(bool* Result);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
