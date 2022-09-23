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
	 * Function BP_Gada.BP_Gada_C.Get Limb Contact Sphere
	 */
	struct ABP_Gada_C_Get_Limb_Contact_Sphere_Params
	{
	public:
		class USphereComponent*                                    Sphere;                                                  // 0x0000(0x0008)  (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function BP_Gada.BP_Gada_C.ReceiveBeginPlay
	 */
	struct ABP_Gada_C_ReceiveBeginPlay_Params
	{	};

	/**
	 * Function BP_Gada.BP_Gada_C.Update Mesh
	 */
	struct ABP_Gada_C_Update_Mesh_Params
	{	};

	/**
	 * Function BP_Gada.BP_Gada_C.ExecuteUbergraph_BP_Gada
	 */
	struct ABP_Gada_C_ExecuteUbergraph_BP_Gada_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
