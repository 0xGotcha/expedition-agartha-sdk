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
	 * BlueprintGeneratedClass BP_ArmorComponent.BP_ArmorComponent_C
	 * Size -> 0x0018 (FullSize[0x00C8] - InheritedSize[0x00B0])
	 */
	class UBP_ArmorComponent_C : public UCharacterArmorComponent
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x00B0(0x0008) ZeroConstructor, Transient, DuplicateTransient
		class FScriptMulticastDelegate                             Armor_Updated;                                           // 0x00B8(0x0010) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable

	public:
		void OnArmorUpdate();
		void OnUnequipArmor(ECharacterModuleType Module, TArray<ECharacterModuleType> ShowModules);
		void OnEquipArmor(ECharacterModuleType Module, TArray<ECharacterModuleType> HideModules, int32_t BodyType, const struct FItemTable& ItemData);
		void ExecuteUbergraph_BP_ArmorComponent(int32_t EntryPoint);
		void Armor_Updated__DelegateSignature();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
