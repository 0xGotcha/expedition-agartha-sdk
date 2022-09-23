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
	 * Function EasyVoiceChat.VoiceFunctionLibrary.GetAllPawnsFromState
	 */
	struct UVoiceFunctionLibrary_GetAllPawnsFromState_Params
	{
	public:
		class UObject*                                             WorldContextObject;                                      // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		class APawn*                                               CurrentPlayer;                                           // 0x0008(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		float                                                      Distance;                                                // 0x0010(0x0004)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		unsigned char                                              UnknownData_LOJZ[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		TArray<class APawn*>                                       ReturnValue;                                             // 0x0018(0x0010)  (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyVoiceChat.VoipAudioComponent.PlayVoiceData
	 */
	struct UVoipAudioComponent_PlayVoiceData_Params
	{
	public:
		TArray<unsigned char>                                      CompressedVoiceData;                                     // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyVoiceChat.VoipManagerComponent.OnVoiceGeneratedBP
	 */
	struct UVoipManagerComponent_OnVoiceGeneratedBP_Params
	{
	public:
		TArray<unsigned char>                                      VoiceBuffer;                                             // 0x0000(0x0010)  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
		float                                                      MicLevel;                                                // 0x0010(0x0004)  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

	/**
	 * Function EasyVoiceChat.VoipManagerComponent.OnPlayerStopTalking
	 */
	struct UVoipManagerComponent_OnPlayerStopTalking_Params
	{	};

	/**
	 * Function EasyVoiceChat.VoipManagerComponent.OnPlayerStartTalking
	 */
	struct UVoipManagerComponent_OnPlayerStartTalking_Params
	{	};

	/**
	 * Function EasyVoiceChat.VoipManagerComponent.InitVoice
	 */
	struct UVoipManagerComponent_InitVoice_Params
	{
	public:
		class AController*                                         Controller;                                              // 0x0000(0x0008)  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
		bool                                                       ReturnValue;                                             // 0x0008(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
