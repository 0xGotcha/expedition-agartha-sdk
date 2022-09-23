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
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.UpperBodyLayer
	 */
	struct UABP_BaseCharacter_C_UpperBodyLayer_Params
	{
	public:
		struct FPoseLink                                           Basic_Loco;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           UpperBodyLayer;                                          // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimGraph
	 */
	struct UABP_BaseCharacter_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Sprint Blendspace
	 */
	struct UABP_BaseCharacter_C_Get_Sprint_Blendspace_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_RKB8[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Aim Offset
	 */
	struct UABP_BaseCharacter_C_Get_Aim_Offset_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_IWEY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAimOffsetBlendSpace1D*                              Aim_Offset;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Locomotion Blendspace
	 */
	struct UABP_BaseCharacter_C_Get_Locomotion_Blendspace_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VA3B[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Idle
	 */
	struct UABP_BaseCharacter_C_Get_Idle_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Exhausted;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_VI0R[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Jump Land
	 */
	struct UABP_BaseCharacter_C_Get_Jump_Land_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_704E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Jump Loop
	 */
	struct UABP_BaseCharacter_C_Get_Jump_Loop_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_8HDR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Jump Start
	 */
	struct UABP_BaseCharacter_C_Get_Jump_Start_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_E5DW[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Block Release
	 */
	struct UABP_BaseCharacter_C_Get_Block_Release_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_DKH6[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Block Loop
	 */
	struct UABP_BaseCharacter_C_Get_Block_Loop_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_I3ZX[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Get Block Start
	 */
	struct UABP_BaseCharacter_C_Get_Block_Start_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_3BRP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Left Hand Grip
	 */
	struct UABP_BaseCharacter_C_Left_Hand_Grip_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Movement
	 */
	struct UABP_BaseCharacter_C_Movement_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_ControlRig_2016996D45DAB978827D8CAA371EA24F
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_ControlRig_2016996D45DAB978827D8CAA371EA24F_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_A6B8DE514BE06423C8A209BFE44351C0
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_A6B8DE514BE06423C8A209BFE44351C0_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_980FB8EB469C6A1C4052F5979CE38C22
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_980FB8EB469C6A1C4052F5979CE38C22_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_166D2AFE4A50127513E9768C7167B635
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_166D2AFE4A50127513E9768C7167B635_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_CA622F354C51421315EC728B9D3133B8
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_CA622F354C51421315EC728B9D3133B8_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_RotationOffsetBlendSpace_ADFE0D8E46BF24752A9993ABCE6E48BB
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_RotationOffsetBlendSpace_ADFE0D8E46BF24752A9993ABCE6E48BB_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_B9F276134E643E32262F36B6A9CDFE39
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_B9F276134E643E32262F36B6A9CDFE39_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_384F85184373266C24744EB1B6FA20EE
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_384F85184373266C24744EB1B6FA20EE_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_C03C791B490AD7DC1091F8A080444964
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_C03C791B490AD7DC1091F8A080444964_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_FA040F84496BEA98740AFB89490D18C4
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_FA040F84496BEA98740AFB89490D18C4_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_55880FED43BC6EDF561051A20361F23C
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_55880FED43BC6EDF561051A20361F23C_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_656B533344C0CAB29B01B0ABAD4EF634
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_656B533344C0CAB29B01B0ABAD4EF634_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_A3C6977640B8840696B4959065629DE9
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_A3C6977640B8840696B4959065629DE9_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_98EE300A4524303DF35C9F9F042E0BAF
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_98EE300A4524303DF35C9F9F042E0BAF_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_30D9E82F4B5BA9ACA31641A76DFC7311
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_30D9E82F4B5BA9ACA31641A76DFC7311_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_4CDEEA0947FD71D7CC9330B0634C9A76
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_4CDEEA0947FD71D7CC9330B0634C9A76_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_78BC3A594AF9100C84433EAC41E120C5
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_78BC3A594AF9100C84433EAC41E120C5_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_1261D6944AB642FB45C900BEDC8B879B
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_1261D6944AB642FB45C900BEDC8B879B_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_A682ABC140DDD9BC921C65A2E7A63093
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_A682ABC140DDD9BC921C65A2E7A63093_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_30FBF944411D5F0AC38497B535AA52B8
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_30FBF944411D5F0AC38497B535AA52B8_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_887649BC402024AB21573CB07DC621A5
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendListByBool_887649BC402024AB21573CB07DC621A5_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_C691154340135A276B3F7C880BCB6F35
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_C691154340135A276B3F7C880BCB6F35_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_F51847284C3B50E856C842A7321C39C7
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_F51847284C3B50E856C842A7321C39C7_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_ED701760458609BA4E6F0D93973D4011
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_BlendSpacePlayer_ED701760458609BA4E6F0D93973D4011_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_4713F7E84DC5F77E22DC04A688F05B00
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_4713F7E84DC5F77E22DC04A688F05B00_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_5BDF613A454F5C81771161A7B0845741
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_5BDF613A454F5C81771161A7B0845741_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_7C509C6847F0F6FDBA5314967960EE00
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_SequencePlayer_7C509C6847F0F6FDBA5314967960EE00_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_ED1DAAC944411553C34E7B87DFDADF8A
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_ED1DAAC944411553C34E7B87DFDADF8A_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_FC9A634E4E6CA1DDDA69F6AF236FB673
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_FC9A634E4E6CA1DDDA69F6AF236FB673_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_3F7DEF52475D27FBAEA1AEB5BF5017E0
	 */
	struct UABP_BaseCharacter_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_BaseCharacter_AnimGraphNode_TransitionResult_3F7DEF52475D27FBAEA1AEB5BF5017E0_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.BlueprintUpdateAnimation
	 */
	struct UABP_BaseCharacter_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ReloadStart
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ReloadStart_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ReloadEnd
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ReloadEnd_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_Vaulting
	 */
	struct UABP_BaseCharacter_C_AnimNotify_Vaulting_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_EndVaulting
	 */
	struct UABP_BaseCharacter_C_AnimNotify_EndVaulting_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_Step
	 */
	struct UABP_BaseCharacter_C_AnimNotify_Step_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_Dead
	 */
	struct UABP_BaseCharacter_C_AnimNotify_Dead_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_MediumExertion
	 */
	struct UABP_BaseCharacter_C_AnimNotify_MediumExertion_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_HeavyExertion
	 */
	struct UABP_BaseCharacter_C_AnimNotify_HeavyExertion_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_LightExertion
	 */
	struct UABP_BaseCharacter_C_AnimNotify_LightExertion_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_MinorPain
	 */
	struct UABP_BaseCharacter_C_AnimNotify_MinorPain_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_MajorPain
	 */
	struct UABP_BaseCharacter_C_AnimNotify_MajorPain_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_DeathScream
	 */
	struct UABP_BaseCharacter_C_AnimNotify_DeathScream_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.BlueprintInitializeAnimation
	 */
	struct UABP_BaseCharacter_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_JumpStart
	 */
	struct UABP_BaseCharacter_C_AnimNotify_JumpStart_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_JumpLand
	 */
	struct UABP_BaseCharacter_C_AnimNotify_JumpLand_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorFootstep
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorFootstep_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.Store Animation Table
	 */
	struct UABP_BaseCharacter_C_Store_Animation_Table_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_Exhausted
	 */
	struct UABP_BaseCharacter_C_AnimNotify_Exhausted_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorJump
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorJump_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorLand
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorLand_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorSprintFootstep
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorSprintFootstep_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorDodge
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorDodge_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorKick
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorKick_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorLightAttack
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorLightAttack_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorHeavyCharge
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorHeavyCharge_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorHeavyRelease
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorHeavyRelease_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorBlock
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorBlock_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorHit
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorHit_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorCrouch
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorCrouch_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ArmorFall
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ArmorFall_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_ShortLaugh
	 */
	struct UABP_BaseCharacter_C_AnimNotify_ShortLaugh_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_LongLaugh
	 */
	struct UABP_BaseCharacter_C_AnimNotify_LongLaugh_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_Block Loop
	 */
	struct UABP_BaseCharacter_C_AnimNotify_Block_Loop_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.AnimNotify_Warcry
	 */
	struct UABP_BaseCharacter_C_AnimNotify_Warcry_Params
	{	};

	/**
	 * Function ABP_BaseCharacter.ABP_BaseCharacter_C.ExecuteUbergraph_ABP_BaseCharacter
	 */
	struct UABP_BaseCharacter_C_ExecuteUbergraph_ABP_BaseCharacter_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_GKTJ[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
