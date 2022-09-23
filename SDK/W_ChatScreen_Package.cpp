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
	 * 		Name   -> Function W_ChatScreen.W_ChatScreen_C.OnKeyDown
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		struct FKeyEvent                                   InKeyEvent                                                 (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	struct FEventReply UW_ChatScreen_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatScreen.W_ChatScreen_C.OnKeyDown");
		
		UW_ChatScreen_C_OnKeyDown_Params params {};
		params.MyGeometry = MyGeometry;
		params.InKeyEvent = InKeyEvent;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		return params.ReturnValue;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ChatScreen.W_ChatScreen_C.ExitChattingState
	 * 		Flags  -> ()
	 */
	void UW_ChatScreen_C::ExitChattingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatScreen.W_ChatScreen_C.ExitChattingState");
		
		UW_ChatScreen_C_ExitChattingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ChatScreen.W_ChatScreen_C.EnterChattingState
	 * 		Flags  -> ()
	 */
	void UW_ChatScreen_C::EnterChattingState()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatScreen.W_ChatScreen_C.EnterChattingState");
		
		UW_ChatScreen_C_EnterChattingState_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ChatScreen.W_ChatScreen_C.MakeChatWindowVisible
	 * 		Flags  -> ()
	 */
	void UW_ChatScreen_C::MakeChatWindowVisible()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatScreen.W_ChatScreen_C.MakeChatWindowVisible");
		
		UW_ChatScreen_C_MakeChatWindowVisible_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ChatScreen.W_ChatScreen_C.Tick
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FGeometry                                   MyGeometry                                                 (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
	 * 		float                                              InDeltaTime                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ChatScreen_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatScreen.W_ChatScreen_C.Tick");
		
		UW_ChatScreen_C_Tick_Params params {};
		params.MyGeometry = MyGeometry;
		params.InDeltaTime = InDeltaTime;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ChatScreen.W_ChatScreen_C.Construct
	 * 		Flags  -> ()
	 */
	void UW_ChatScreen_C::Construct()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatScreen.W_ChatScreen_C.Construct");
		
		UW_ChatScreen_C_Construct_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ChatScreen.W_ChatScreen_C.NewMessageReceived
	 * 		Flags  -> ()
	 * Parameters:
	 * 		struct FChatLine                                   Line                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 */
	void UW_ChatScreen_C::NewMessageReceived(const struct FChatLine& Line)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatScreen.W_ChatScreen_C.NewMessageReceived");
		
		UW_ChatScreen_C_NewMessageReceived_Params params {};
		params.Line = Line;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ChatScreen.W_ChatScreen_C.FakeSendMessage
	 * 		Flags  -> ()
	 */
	void UW_ChatScreen_C::FakeSendMessage()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatScreen.W_ChatScreen_C.FakeSendMessage");
		
		UW_ChatScreen_C_FakeSendMessage_Params params {};
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function W_ChatScreen.W_ChatScreen_C.ExecuteUbergraph_W_ChatScreen
	 * 		Flags  -> ()
	 * Parameters:
	 * 		int32_t                                            EntryPoint                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void UW_ChatScreen_C::ExecuteUbergraph_W_ChatScreen(int32_t EntryPoint)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function W_ChatScreen.W_ChatScreen_C.ExecuteUbergraph_W_ChatScreen");
		
		UW_ChatScreen_C_ExecuteUbergraph_W_ChatScreen_Params params {};
		params.EntryPoint = EntryPoint;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UW_ChatScreen_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UW_ChatScreen_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass W_ChatScreen.W_ChatScreen_C");
		return ptr;
	}

}


