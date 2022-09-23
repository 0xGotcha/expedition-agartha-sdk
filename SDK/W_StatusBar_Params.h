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
	 * Function W_StatusBar.W_StatusBar_C.Construct
	 */
	struct UW_StatusBar_C_Construct_Params
	{	};

	/**
	 * Function W_StatusBar.W_StatusBar_C.Populate
	 */
	struct UW_StatusBar_C_Populate_Params
	{	};

	/**
	 * Function W_StatusBar.W_StatusBar_C.Effect Expired
	 */
	struct UW_StatusBar_C_Effect_Expired_Params
	{
	public:
		struct FActiveGameplayEffectHandle                         Effect_Handle;                                           // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
		class UW_StatusItem_C*                                     Status_Item;                                             // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_StatusBar.W_StatusBar_C.Refresh Effects
	 */
	struct UW_StatusBar_C_Refresh_Effects_Params
	{	};

	/**
	 * Function W_StatusBar.W_StatusBar_C.ExecuteUbergraph_W_StatusBar
	 */
	struct UW_StatusBar_C_ExecuteUbergraph_W_StatusBar_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GAQ0[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
