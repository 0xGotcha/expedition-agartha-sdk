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
	 * Function UI_Tactical.UI_Tactical_C.OnKeyDown
	 */
	struct UUI_Tactical_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.OnMouseButtonDown
	 */
	struct UUI_Tactical_C_OnMouseButtonDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FPointerEvent                                       MouseEvent;                                              // 0x0038(0x0070)  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		struct FEventReply                                         ReturnValue;                                             // 0x00A8(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Construct
	 */
	struct UUI_Tactical_C_Construct_Params
	{	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Tick
	 */
	struct UUI_Tactical_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Destruct
	 */
	struct UUI_Tactical_C_Destruct_Params
	{	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Reset Mouse Position
	 */
	struct UUI_Tactical_C_Reset_Mouse_Position_Params
	{	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Setup Wheel
	 */
	struct UUI_Tactical_C_Setup_Wheel_Params
	{	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Left Click Registered
	 */
	struct UUI_Tactical_C_Left_Click_Registered_Params
	{	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Right Click Registered
	 */
	struct UUI_Tactical_C_Right_Click_Registered_Params
	{	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Setup Input
	 */
	struct UUI_Tactical_C_Setup_Input_Params
	{	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Validate Key Index
	 */
	struct UUI_Tactical_C_Validate_Key_Index_Params
	{
	public:
		int32_t                                                    Index;                                                   // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.Update Input Key Labels
	 */
	struct UUI_Tactical_C_Update_Input_Key_Labels_Params
	{	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.OnFocusLost
	 */
	struct UUI_Tactical_C_OnFocusLost_Params
	{
	public:
		struct FFocusEvent                                         InFocusEvent;                                            // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	};

	/**
	 * Function UI_Tactical.UI_Tactical_C.ExecuteUbergraph_UI_Tactical
	 */
	struct UUI_Tactical_C_ExecuteUbergraph_UI_Tactical_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
