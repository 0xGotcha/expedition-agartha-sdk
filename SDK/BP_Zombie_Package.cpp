/**
 * Name: Agartha
 * Version: 1
 */

#include "pch.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Zombie.BP_Zombie_C.Effect To Apply On Event
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGameplayTag                                Event_Tag                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	 * 		class UClass*                                      Effect                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Zombie_C::Effect_To_Apply_On_Event(const struct FGameplayTag& Event_Tag, class UClass** Effect)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Zombie.BP_Zombie_C.Effect To Apply On Event");
		
		ABP_Zombie_C_Effect_To_Apply_On_Event_Params params {};
		params.Event_Tag = Event_Tag;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (Effect != nullptr)
			*Effect = params.Effect;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Zombie.BP_Zombie_C.Randomize Appearance
	 * 		Flags  -> ()
	 */
	void ABP_Zombie_C::Randomize_Appearance()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Zombie.BP_Zombie_C.Randomize Appearance");
		
		ABP_Zombie_C_Randomize_Appearance_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Zombie.BP_Zombie_C.ReceiveBeginPlay
	 * 		Flags  -> ()
	 */
	void ABP_Zombie_C::ReceiveBeginPlay()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Zombie.BP_Zombie_C.ReceiveBeginPlay");
		
		ABP_Zombie_C_ReceiveBeginPlay_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function BP_Zombie.BP_Zombie_C.ExecuteUbergraph_BP_Zombie
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABP_Zombie_C::ExecuteUbergraph_BP_Zombie(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Zombie.BP_Zombie_C.ExecuteUbergraph_BP_Zombie");
		
		ABP_Zombie_C_ExecuteUbergraph_BP_Zombie_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Zombie_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Zombie_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BP_Zombie.BP_Zombie_C");
		return ptr;
	}

}


