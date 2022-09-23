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
	 * Function ABP_NPC.ABP_NPC_C.UpperBodyLayer
	 */
	struct UABP_NPC_C_UpperBodyLayer_Params
	{
	public:
		struct FPoseLink                                           Basic_Loco;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           UpperBodyLayer;                                          // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimGraph
	 */
	struct UABP_NPC_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Sprint Blendspace
	 */
	struct UABP_NPC_C_Get_Sprint_Blendspace_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_O3X1[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Aim Offset
	 */
	struct UABP_NPC_C_Get_Aim_Offset_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TLDL[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAimOffsetBlendSpace1D*                              Aim_Offset;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Locomotion Blendspace
	 */
	struct UABP_NPC_C_Get_Locomotion_Blendspace_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_XQM3[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Idle
	 */
	struct UABP_NPC_C_Get_Idle_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Exhausted;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_GLFC[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Jump Land
	 */
	struct UABP_NPC_C_Get_Jump_Land_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FWLR[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Jump Loop
	 */
	struct UABP_NPC_C_Get_Jump_Loop_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_CQ1T[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Jump Start
	 */
	struct UABP_NPC_C_Get_Jump_Start_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_FVGP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Block Release
	 */
	struct UABP_NPC_C_Get_Block_Release_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_INY3[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Block Loop
	 */
	struct UABP_NPC_C_Get_Block_Loop_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_TN62[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Get Block Start
	 */
	struct UABP_NPC_C_Get_Block_Start_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_BDPE[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Left Hand Grip
	 */
	struct UABP_NPC_C_Left_Hand_Grip_Params
	{
	public:
		bool                                                       Result;                                                  // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Movement
	 */
	struct UABP_NPC_C_Movement_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_PowerIK_0B466CBB432268B4A688FEB559C19A66
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_PowerIK_0B466CBB432268B4A688FEB559C19A66_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_PowerIK_Ground_8FA2EFE64AC771BD0FAFA68560959E77
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_PowerIK_Ground_8FA2EFE64AC771BD0FAFA68560959E77_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_092AFC144008C2D2DE2736AADC83C531
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_092AFC144008C2D2DE2736AADC83C531_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_CB45F8C44B4F89F623D0B3856AD00BD7
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_CB45F8C44B4F89F623D0B3856AD00BD7_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_16B398354386E530C5BE9A812EF5E3B3
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_16B398354386E530C5BE9A812EF5E3B3_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_855E41494B536A661631E098B0D8DDFC
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_855E41494B536A661631E098B0D8DDFC_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_B96165724B150585C5FC16AD174BF45C
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_B96165724B150585C5FC16AD174BF45C_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_RotationOffsetBlendSpace_6341150F4CEC301EB61B3DA0245989D6
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_RotationOffsetBlendSpace_6341150F4CEC301EB61B3DA0245989D6_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_F80DBED44B1F8175582329AD83DCF2CA
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_F80DBED44B1F8175582329AD83DCF2CA_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_68DC07F5441CC7DBB06FA58EA6288A0A
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_68DC07F5441CC7DBB06FA58EA6288A0A_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_5B4E19B54A156843091B0C8A906E03DE
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_5B4E19B54A156843091B0C8A906E03DE_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_70BE97784C721125C0B730AD13A36A8D
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_70BE97784C721125C0B730AD13A36A8D_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_FF2DE7124E8336E2818D7EA44107F286
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_FF2DE7124E8336E2818D7EA44107F286_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_8B1179D84CE3A33AB70677A1A48675B5
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_8B1179D84CE3A33AB70677A1A48675B5_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_4EAD32954CD1245064855D95BF02AC87
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_4EAD32954CD1245064855D95BF02AC87_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_1035470A410BB1F5F673A2A05659AC16
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_1035470A410BB1F5F673A2A05659AC16_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_7ED635724DEA7C1E35B7DC918A4F1B66
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_7ED635724DEA7C1E35B7DC918A4F1B66_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_5BEA858740CAB6C1363F1284B0F33AA4
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_5BEA858740CAB6C1363F1284B0F33AA4_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_6B56B0684D63B21576F10590B4158805
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_6B56B0684D63B21576F10590B4158805_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_D19AB20C413ADB0227E13CA2FCB312F1
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_D19AB20C413ADB0227E13CA2FCB312F1_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_54D2931E4A743F99C5EBA3972EB6EF2B
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_54D2931E4A743F99C5EBA3972EB6EF2B_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_9451C7BE40E4987FF36D4B9949CBCF3A
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_9451C7BE40E4987FF36D4B9949CBCF3A_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_790438D24789F77E43268FA092D68A2D
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendListByBool_790438D24789F77E43268FA092D68A2D_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_86DC75B445ED96C49C0341A42D27D561
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_86DC75B445ED96C49C0341A42D27D561_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_4C9538364B6FE18D185DC9AA0CAEA9CB
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_4C9538364B6FE18D185DC9AA0CAEA9CB_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_FF596A5C401F225A209448A38F25CF1A
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_BlendSpacePlayer_FF596A5C401F225A209448A38F25CF1A_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_345893A742B3136D89C21E93CE3A2406
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_345893A742B3136D89C21E93CE3A2406_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_AE08D92A42BAC2ECE9BEEC8D3E7FDA6C
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_AE08D92A42BAC2ECE9BEEC8D3E7FDA6C_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_79FBA058412953E1D234058AD20C123E
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_SequencePlayer_79FBA058412953E1D234058AD20C123E_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_2AF359744004CAA649EA608FD136F49F
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_2AF359744004CAA649EA608FD136F49F_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_3A99E4AF44D6C8B994E2B9B07192A95A
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_3A99E4AF44D6C8B994E2B9B07192A95A_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_64C56CDA44C541EEB071648E8DBF327B
	 */
	struct UABP_NPC_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_NPC_AnimGraphNode_TransitionResult_64C56CDA44C541EEB071648E8DBF327B_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.BlueprintUpdateAnimation
	 */
	struct UABP_NPC_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ReloadStart
	 */
	struct UABP_NPC_C_AnimNotify_ReloadStart_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ReloadEnd
	 */
	struct UABP_NPC_C_AnimNotify_ReloadEnd_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_Vaulting
	 */
	struct UABP_NPC_C_AnimNotify_Vaulting_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_EndVaulting
	 */
	struct UABP_NPC_C_AnimNotify_EndVaulting_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_Step
	 */
	struct UABP_NPC_C_AnimNotify_Step_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_Dead
	 */
	struct UABP_NPC_C_AnimNotify_Dead_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_MediumExertion
	 */
	struct UABP_NPC_C_AnimNotify_MediumExertion_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_HeavyExertion
	 */
	struct UABP_NPC_C_AnimNotify_HeavyExertion_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_LightExertion
	 */
	struct UABP_NPC_C_AnimNotify_LightExertion_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_MinorPain
	 */
	struct UABP_NPC_C_AnimNotify_MinorPain_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_MajorPain
	 */
	struct UABP_NPC_C_AnimNotify_MajorPain_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_DeathScream
	 */
	struct UABP_NPC_C_AnimNotify_DeathScream_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.BlueprintInitializeAnimation
	 */
	struct UABP_NPC_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_JumpStart
	 */
	struct UABP_NPC_C_AnimNotify_JumpStart_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_JumpLand
	 */
	struct UABP_NPC_C_AnimNotify_JumpLand_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorFootstep
	 */
	struct UABP_NPC_C_AnimNotify_ArmorFootstep_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.Store Animation Table
	 */
	struct UABP_NPC_C_Store_Animation_Table_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_Exhausted
	 */
	struct UABP_NPC_C_AnimNotify_Exhausted_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorJump
	 */
	struct UABP_NPC_C_AnimNotify_ArmorJump_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorLand
	 */
	struct UABP_NPC_C_AnimNotify_ArmorLand_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorSprintFootstep
	 */
	struct UABP_NPC_C_AnimNotify_ArmorSprintFootstep_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorDodge
	 */
	struct UABP_NPC_C_AnimNotify_ArmorDodge_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorKick
	 */
	struct UABP_NPC_C_AnimNotify_ArmorKick_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorLightAttack
	 */
	struct UABP_NPC_C_AnimNotify_ArmorLightAttack_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorHeavyCharge
	 */
	struct UABP_NPC_C_AnimNotify_ArmorHeavyCharge_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorHeavyRelease
	 */
	struct UABP_NPC_C_AnimNotify_ArmorHeavyRelease_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorBlock
	 */
	struct UABP_NPC_C_AnimNotify_ArmorBlock_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorHit
	 */
	struct UABP_NPC_C_AnimNotify_ArmorHit_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorCrouch
	 */
	struct UABP_NPC_C_AnimNotify_ArmorCrouch_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ArmorFall
	 */
	struct UABP_NPC_C_AnimNotify_ArmorFall_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_ShortLaugh
	 */
	struct UABP_NPC_C_AnimNotify_ShortLaugh_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_LongLaugh
	 */
	struct UABP_NPC_C_AnimNotify_LongLaugh_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.AnimNotify_Block Loop
	 */
	struct UABP_NPC_C_AnimNotify_Block_Loop_Params
	{	};

	/**
	 * Function ABP_NPC.ABP_NPC_C.ExecuteUbergraph_ABP_NPC
	 */
	struct UABP_NPC_C_ExecuteUbergraph_ABP_NPC_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_KAIO[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
