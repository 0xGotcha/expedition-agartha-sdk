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
	 * Function W_ChatScreen.W_ChatScreen_C.OnKeyDown
	 */
	struct UW_ChatScreen_C_OnKeyDown_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		struct FKeyEvent                                           InKeyEvent;                                              // 0x0038(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm)
		struct FEventReply                                         ReturnValue;                                             // 0x0070(0x00B8)  (Parm, OutParm, ReturnParm)
	};

	/**
	 * Function W_ChatScreen.W_ChatScreen_C.ExitChattingState
	 */
	struct UW_ChatScreen_C_ExitChattingState_Params
	{	};

	/**
	 * Function W_ChatScreen.W_ChatScreen_C.EnterChattingState
	 */
	struct UW_ChatScreen_C_EnterChattingState_Params
	{	};

	/**
	 * Function W_ChatScreen.W_ChatScreen_C.MakeChatWindowVisible
	 */
	struct UW_ChatScreen_C_MakeChatWindowVisible_Params
	{	};

	/**
	 * Function W_ChatScreen.W_ChatScreen_C.Tick
	 */
	struct UW_ChatScreen_C_Tick_Params
	{
	public:
		struct FGeometry                                           MyGeometry;                                              // 0x0000(0x0038)  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
		float                                                      InDeltaTime;                                             // 0x0038(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_ChatScreen.W_ChatScreen_C.Construct
	 */
	struct UW_ChatScreen_C_Construct_Params
	{	};

	/**
	 * Function W_ChatScreen.W_ChatScreen_C.NewMessageReceived
	 */
	struct UW_ChatScreen_C_NewMessageReceived_Params
	{
	public:
		struct FChatLine                                           Line;                                                    // 0x0000(0x0028)  (BlueprintVisible, BlueprintReadOnly, Parm)
	};

	/**
	 * Function W_ChatScreen.W_ChatScreen_C.FakeSendMessage
	 */
	struct UW_ChatScreen_C_FakeSendMessage_Params
	{	};

	/**
	 * Function W_ChatScreen.W_ChatScreen_C.ExecuteUbergraph_W_ChatScreen
	 */
	struct UW_ChatScreen_C_ExecuteUbergraph_W_ChatScreen_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
