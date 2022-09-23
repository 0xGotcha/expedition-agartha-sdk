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
	// # Structs
	// --------------------------------------------------
	/**
	 * Function W_StatusItem.W_StatusItem_C.OnLoaded_6603235F4549A02ECBBDD38F5EE11FBD
	 */
	struct UW_StatusItem_C_OnLoaded_6603235F4549A02ECBBDD38F5EE11FBD_Params
	{
	public:
		class UObject*                                             Loaded;                                                  // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StatusItem.W_StatusItem_C.Update Duration Remaining
	 */
	struct UW_StatusItem_C_Update_Duration_Remaining_Params
	{	};

	/**
	 * Function W_StatusItem.W_StatusItem_C.Update Stacks
	 */
	struct UW_StatusItem_C_Update_Stacks_Params
	{	};

	/**
	 * Function W_StatusItem.W_StatusItem_C.Construct
	 */
	struct UW_StatusItem_C_Construct_Params
	{	};

	/**
	 * Function W_StatusItem.W_StatusItem_C.Update Mag
	 */
	struct UW_StatusItem_C_Update_Mag_Params
	{	};

	/**
	 * Function W_StatusItem.W_StatusItem_C.ExecuteUbergraph_W_StatusItem
	 */
	struct UW_StatusItem_C_ExecuteUbergraph_W_StatusItem_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CHVK[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

	/**
	 * Function W_StatusItem.W_StatusItem_C.Effect Expired__DelegateSignature
	 */
	struct UW_StatusItem_C_Effect_Expired__DelegateSignature_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Effect_Handle;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UW_StatusItem_C*                                     Status_Item;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
