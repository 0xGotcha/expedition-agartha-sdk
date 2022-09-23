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
	 * Function BP_PortraitCamera.BP_PortraitCamera_C.ReceiveBeginPlay
	 */
	struct ABP_PortraitCamera_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_PortraitCamera.BP_PortraitCamera_C.Update Portrait
	 */
	struct ABP_PortraitCamera_C_Update_Portrait_Params
	{
	public:
		class USkeletalMeshComponent*                              Mesh_Component;                                          // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_PortraitCamera.BP_PortraitCamera_C.ExecuteUbergraph_BP_PortraitCamera
	 */
	struct ABP_PortraitCamera_C_ExecuteUbergraph_BP_PortraitCamera_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
