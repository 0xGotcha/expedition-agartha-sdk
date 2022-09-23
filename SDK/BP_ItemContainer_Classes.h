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
	 * BlueprintGeneratedClass BP_ItemContainer.BP_ItemContainer_C
	 * Size -> 0x0060 (FullSize[0x0328] - InheritedSize[0x02C8])
	 */
	class ABP_ItemContainer_C : public AItemContainer
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x02C8(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class UStaticMeshComponent*                                StaticMesh;                                              // 0x02D0(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		class USceneComponent*                                     DefaultSceneRoot;                                        // 0x02D8(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash
		float                                                      Hold_Time;                                               // 0x02E0(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_7Y8V[0x4];                                   // 0x02E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                ActionVerb;                                              // 0x02E8(0x0018) Edit, BlueprintVisible, DisableEditOnInstance
		unsigned char                                              Interaction_Sound[0x28];                                 // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty

	public:
		void Requires_Hold_To_Interact(bool* Result);
		void Hold_Time_Multiplier(float* Multiplier);
		void Action_Verb(class FText* Result);
		void UserConstructionScript();
		void Interact(class ABP_BaseCharacter_C* Instigator);
		void ReceiveBeginPlay();
		void BP_OnInventoryEmptied();
		void Stop_Custom_Depth();
		void Multicast_Stop_Custom_Depth();
		void Contents_Changed(class UInventoryComponent* UpdatedInventory);
		void Set_Inventory_Tick_Interval(float Tick_Interval);
		void ExecuteUbergraph_BP_ItemContainer(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
