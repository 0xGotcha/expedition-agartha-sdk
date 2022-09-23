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
	 * Function W_TutorialText.W_TutorialText_C.DisplayTutorialText
	 */
	struct UW_TutorialText_C_DisplayTutorialText_Params
	{
	public:
		class FText                                                InText;                                                  // 0x0000(0x0018)  (BlueprintVisible, BlueprintReadOnly, Parm)
		int32_t                                                    TutorialIndex;                                           // 0x0018(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

	/**
	 * Function W_TutorialText.W_TutorialText_C.RemoveTutorialText
	 */
	struct UW_TutorialText_C_RemoveTutorialText_Params
	{	};

	/**
	 * Function W_TutorialText.W_TutorialText_C.Construct
	 */
	struct UW_TutorialText_C_Construct_Params
	{	};

	/**
	 * Function W_TutorialText.W_TutorialText_C.ExecuteUbergraph_W_TutorialText
	 */
	struct UW_TutorialText_C_ExecuteUbergraph_W_TutorialText_Params
	{
	public:
		int32_t                                                    EntryPoint;                                              // 0x0000(0x0004)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		unsigned char                                              UnknownData_G3LS[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY) ()
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
