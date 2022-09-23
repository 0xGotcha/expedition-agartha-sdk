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
	// # Classes
	// --------------------------------------------------
	/**
	 * BlueprintGeneratedClass BP_ModularCharacterTest.BP_ModularCharacterTest_C
	 * Size -> 0x0042 (FullSize[0x139A] - InheritedSize[0x1358])
	 */
	class ABP_ModularCharacterTest_C : public ABP_BaseCharacter_C
	{
	public:
		struct FPointerToUberGraphFrame                            UberGraphFrame;                                          // 0x1358(0x0008) ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper
		class UVoipAudioComponent*                                 VoipLocal;                                               // 0x1360(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UVoipAudioComponent*                                 VoipParty;                                               // 0x1368(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UVoipManagerComponent*                               VoipManager;                                             // 0x1370(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UCharacterHistoryComponent*                          CharacterHistory;                                        // 0x1378(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UBP_CharacterNPCComponent_C*                         BP_CharacterNPCComponent;                                // 0x1380(0x0008) BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		bool                                                       bPushToTalk;                                             // 0x1388(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		bool                                                       bUsePushToTalk;                                          // 0x1389(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor
		bool                                                       UseRadio;                                                // 0x138A(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_4ABS[0x1];                                   // 0x138B(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      VolumeMultiplier;                                        // 0x138C(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      RecievedAudioLevel;                                      // 0x1390(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MicrophoneLevel;                                         // 0x1394(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              VoiceTick;                                               // 0x1398(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		bool                                                       Spectating;                                              // 0x1399(0x0001) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor

	public:
		void LoadAudioCaptureDevice();
		void InpActEvt_VoiceChat_K2Node_InputActionEvent_4(const struct FKey& Key);
		void InpActEvt_VoiceChat_K2Node_InputActionEvent_3(const struct FKey& Key);
		void InpActEvt_VoiceChatParty_K2Node_InputActionEvent_2(const struct FKey& Key);
		void InpActEvt_VoiceChatParty_K2Node_InputActionEvent_1(const struct FKey& Key);
		void BP_PlayerDied();
		void SRV_SendVoiceData(TArray<unsigned char> CompressedVoiceData, bool bUseRadio);
		void BndEvt__VoipManager_K2Node_ComponentBoundEvent_1_VoiceGenerated__DelegateSignature(TArray<unsigned char> VoiceData, float MicLevel);
		void ReceivePossessed(class AController* NewController);
		void Client_Possessed();
		void BndEvt__BP_ModularCharacterTest_VoipParty_K2Node_ComponentBoundEvent_7_OnSynthEnvelopeValue__DelegateSignature(float EnvelopeValue);
		void BndEvt__BP_ModularCharacterTest_VoipAudio_K2Node_ComponentBoundEvent_0_OnSynthEnvelopeValue__DelegateSignature(float EnvelopeValue);
		void Client_ReceiveVoiceData(class ABP_ModularCharacterTest_C* Player, TArray<unsigned char> Voice, bool Use_Radio);
		void ReceiveTick(float DeltaSeconds);
		void BP_SpectatorCamera(bool bEnabled);
		void InpAxisEvt_Vertical_K2Node_InputAxisEvent_3(float AxisValue);
		void Get_User_Settings();
		void ExecuteUbergraph_BP_ModularCharacterTest(int32_t EntryPoint);
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
