﻿#pragma once

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
	 * Function W_Message.W_Message_C.Construct
	 */
	struct UW_Message_C_Construct_Params
	{	};

	/**
	 * Function W_Message.W_Message_C.Anim Finished
	 */
	struct UW_Message_C_Anim_Finished_Params
	{	};

	/**
	 * Function W_Message.W_Message_C.ExecuteUbergraph_W_Message
	 */
	struct UW_Message_C_ExecuteUbergraph_W_Message_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
