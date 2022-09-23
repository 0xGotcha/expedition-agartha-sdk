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
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.UpperBodyLayer
	 */
	struct UABP_FPP_Rig_C_UpperBodyLayer_Params
	{
	public:
		struct FPoseLink                                           Basic_Loco;                                              // 0x0000(0x0010)  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
		struct FPoseLink                                           UpperBodyLayer;                                          // 0x0010(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.AnimGraph
	 */
	struct UABP_FPP_Rig_C_AnimGraph_Params
	{
	public:
		struct FPoseLink                                           AnimGraph;                                               // 0x0000(0x0010)  (Parm, OutParm, NoDestructor)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Get Locomotion Blendspace
	 */
	struct UABP_FPP_Rig_C_Get_Locomotion_Blendspace_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_MG28[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		int32_t                                                    Index;                                                   // 0x0004(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class UBlendSpaceBase*                                     BlendSpace;                                              // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Get Idle
	 */
	struct UABP_FPP_Rig_C_Get_Idle_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		bool                                                       Exhausted;                                               // 0x0001(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		unsigned char                                              UnknownData_YQLC[0x6];                                   // 0x0002(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Get Jump Land
	 */
	struct UABP_FPP_Rig_C_Get_Jump_Land_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_0XDN[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Get Jump Loop
	 */
	struct UABP_FPP_Rig_C_Get_Jump_Loop_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_83JP[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Get Jump Start
	 */
	struct UABP_FPP_Rig_C_Get_Jump_Start_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_EDVD[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Get Block Release
	 */
	struct UABP_FPP_Rig_C_Get_Block_Release_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_VIDY[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Get Block Loop
	 */
	struct UABP_FPP_Rig_C_Get_Block_Loop_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_LF7P[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Get Block Start
	 */
	struct UABP_FPP_Rig_C_Get_Block_Start_Params
	{
	public:
		EWeaponType                                                Weapon_Type;                                             // 0x0000(0x0001)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_PIJO[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
		class UAnimSequence*                                       Sequence;                                                // 0x0008(0x0008)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Movement
	 */
	struct UABP_FPP_Rig_C_Movement_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendListByBool_79B77088467D609CFD7308927C4604F5
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendListByBool_79B77088467D609CFD7308927C4604F5_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_ModifyBone_A5805EB54AD47C802EBD4D97725A9E76
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_ModifyBone_A5805EB54AD47C802EBD4D97725A9E76_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_ModifyBone_3BE7A4E941BBCC04E19710A279B7C4E2
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_ModifyBone_3BE7A4E941BBCC04E19710A279B7C4E2_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendListByBool_FDF37CBB45838FE1AB7C908D014DA90F
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendListByBool_FDF37CBB45838FE1AB7C908D014DA90F_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_9104FDC04C801017432B6D9131B1032F
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_9104FDC04C801017432B6D9131B1032F_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_7F68F3F24BFE99A3B7D889AA0F4C1B4F
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_7F68F3F24BFE99A3B7D889AA0F4C1B4F_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_F0E34B2E4D9E0319617AC8A3C6FC04AB
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_F0E34B2E4D9E0319617AC8A3C6FC04AB_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_5FB366AB4DDC31409BF6FFA0064892D7
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_5FB366AB4DDC31409BF6FFA0064892D7_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_6DECD41741A1A3FBC85C2BAE4151805B
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_6DECD41741A1A3FBC85C2BAE4151805B_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_394AEC8841137E4AF174FC84306DB40C
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_394AEC8841137E4AF174FC84306DB40C_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_FAD374CB466583E75DA5F6ABCB854149
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_FAD374CB466583E75DA5F6ABCB854149_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_AEDC6AA4421486C90C333FB63AFFF73D
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_AEDC6AA4421486C90C333FB63AFFF73D_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_7C5273584F3ACA08FF7C90B55A0E9B78
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_7C5273584F3ACA08FF7C90B55A0E9B78_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_FE3148F342A2167A1980BEAD6F5C6143
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_FE3148F342A2167A1980BEAD6F5C6143_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_ADB0C3D54775BC956837BC8349383436
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_ADB0C3D54775BC956837BC8349383436_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_117197014944665A0B1141913A3C2183
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_117197014944665A0B1141913A3C2183_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_5CC463214BD644B0669935B7CB229F56
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_SequencePlayer_5CC463214BD644B0669935B7CB229F56_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_39313E80403D3164DB32DF9D4B12C497
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_39313E80403D3164DB32DF9D4B12C497_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_9ECFADED460992E72653539DFAED7F7D
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_9ECFADED460992E72653539DFAED7F7D_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_034F16674641C9868AE2C69465A62075
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_034F16674641C9868AE2C69465A62075_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_717829BA4801C2C3D2DD93A42485D9D9
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_717829BA4801C2C3D2DD93A42485D9D9_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_CB254A0140ACFC6945018FBCD26ED2D9
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_CB254A0140ACFC6945018FBCD26ED2D9_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_D945CF2E48F2B7F2C5115DB862970235
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_D945CF2E48F2B7F2C5115DB862970235_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_B44AC594468F52E8FC93C9A80D2CDC81
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_B44AC594468F52E8FC93C9A80D2CDC81_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_C480CA2446C715056FBD768F325ACDA4
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_C480CA2446C715056FBD768F325ACDA4_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_A77EECD0408898A2A801098A15B0A74F
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_A77EECD0408898A2A801098A15B0A74F_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_0FD13369405267CC2604DCBAD0DD9DC8
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_0FD13369405267CC2604DCBAD0DD9DC8_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_07ED045D4C6EC162CD9EEBA8A7B732CC
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_07ED045D4C6EC162CD9EEBA8A7B732CC_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_0B3E68FD43F8BC02277026A3D79EB179
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_0B3E68FD43F8BC02277026A3D79EB179_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_A9CE510446DB35FAE9C1B58A23AFA1EA
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_A9CE510446DB35FAE9C1B58A23AFA1EA_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_122DA140416E29FF05BEE2B953A22A7C
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_122DA140416E29FF05BEE2B953A22A7C_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_9D9DD65349AD507987F61C8DDCA90B4C
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_9D9DD65349AD507987F61C8DDCA90B4C_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_FB731E2A4D3FDE5B1560F89954C95ED3
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_FB731E2A4D3FDE5B1560F89954C95ED3_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_AC39588B4EE03FF2A60D87BE665AF032
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_AC39588B4EE03FF2A60D87BE665AF032_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_4B41EB1846D2E52138E63581AC2C9C91
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_4B41EB1846D2E52138E63581AC2C9C91_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_D0032DDC48396154CF56D3923C261A66
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_D0032DDC48396154CF56D3923C261A66_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_405FDADF49D397FFE0BC16AFB45E51C3
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_405FDADF49D397FFE0BC16AFB45E51C3_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_1B0ED5BF4A6D3F79A9AF67B45E5E32E9
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_1B0ED5BF4A6D3F79A9AF67B45E5E32E9_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_137F816A469F603173C142A2490DD185
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_137F816A469F603173C142A2490DD185_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_A513374A424E5842966BF59E13560D65
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_A513374A424E5842966BF59E13560D65_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_24A6190446BFCDBCBAA44290A55F9D0D
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_24A6190446BFCDBCBAA44290A55F9D0D_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_CDDCFB1C46FC452027522B907F3E295F
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_CDDCFB1C46FC452027522B907F3E295F_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_B31277C846DA44236AFE468953979DE9
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_B31277C846DA44236AFE468953979DE9_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_8B2F3C7248292CB3BF9FF0A464FDC152
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_8B2F3C7248292CB3BF9FF0A464FDC152_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_54AE37B643A2087E04F803AA9BDB3EBF
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_54AE37B643A2087E04F803AA9BDB3EBF_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_0F0DA26F4C150A93EA205198BB489266
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_0F0DA26F4C150A93EA205198BB489266_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_20B782E1439C771FB35B73A08A276C0E
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_20B782E1439C771FB35B73A08A276C0E_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_DB87DC284DA56DDFD52E75B0E0AC8DD6
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_DB87DC284DA56DDFD52E75B0E0AC8DD6_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_1053205945F39F17B3F6C7AF2084FC45
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_1053205945F39F17B3F6C7AF2084FC45_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_E3A1C3FB485D12F292592C845C54C362
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_BlendSpacePlayer_E3A1C3FB485D12F292592C845C54C362_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_854054504281CB9AAF41F4B2E7BB383D
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_854054504281CB9AAF41F4B2E7BB383D_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_EF90DB864EC6C654179E248C2868FEB7
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_EF90DB864EC6C654179E248C2868FEB7_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_2FC2E1C247721424452335934BE13835
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_2FC2E1C247721424452335934BE13835_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_BED35E6F46D3BF411369F7B7EE70E3D3
	 */
	struct UABP_FPP_Rig_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_FPP_Rig_AnimGraphNode_TransitionResult_BED35E6F46D3BF411369F7B7EE70E3D3_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.BlueprintUpdateAnimation
	 */
	struct UABP_FPP_Rig_C_BlueprintUpdateAnimation_Params
	{
	public:
		float                                                      DeltaTimeX;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.AnimNotify_ReloadStart
	 */
	struct UABP_FPP_Rig_C_AnimNotify_ReloadStart_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.AnimNotify_ReloadEnd
	 */
	struct UABP_FPP_Rig_C_AnimNotify_ReloadEnd_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.AnimNotify_Vaulting
	 */
	struct UABP_FPP_Rig_C_AnimNotify_Vaulting_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.AnimNotify_EndVaulting
	 */
	struct UABP_FPP_Rig_C_AnimNotify_EndVaulting_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.AnimNotify_Step
	 */
	struct UABP_FPP_Rig_C_AnimNotify_Step_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.AnimNotify_Dead
	 */
	struct UABP_FPP_Rig_C_AnimNotify_Dead_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.BlueprintInitializeAnimation
	 */
	struct UABP_FPP_Rig_C_BlueprintInitializeAnimation_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.Store Animation Table
	 */
	struct UABP_FPP_Rig_C_Store_Animation_Table_Params
	{	};

	/**
	 * Function ABP_FPP_Rig.ABP_FPP_Rig_C.ExecuteUbergraph_ABP_FPP_Rig
	 */
	struct UABP_FPP_Rig_C_ExecuteUbergraph_ABP_FPP_Rig_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
