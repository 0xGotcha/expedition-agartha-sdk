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
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ProjectAgartha.EChatChannel
	 */
	enum class EChatChannel : uint8_t
	{
		CC_General = 0,
		CC_Party   = 1,
		CC_Server  = 2,
		CC_Loot    = 3,
		CC_Server2 = 4,
		CC_Length  = 5,
		CC_MAX     = 6
	};

	/**
	 * Enum ProjectAgartha.InventoryItemMoveResult
	 */
	enum class EInventoryItemMoveResult : uint8_t
	{
		InventoryItemMoveResult_Success                     = 0,
		InventoryItemMoveResult_Buy                         = 1,
		InventoryItemMoveResult_Sell                        = 2,
		InventoryItemMoveResult_TradeFailed                 = 3,
		InventoryItemMoveResult_TradeNoMoney                = 4,
		InventoryItemMoveResult_QuestInProgress             = 5,
		InventoryItemMoveResult_QuestItemNotMovable         = 6,
		InventoryItemMoveResult_AlreadyOwn                  = 7,
		InventoryItemMoveResult_SuccessTreatedAsFail        = 8,
		InventoryItemMoveResult_CapacityExceeded            = 9,
		InventoryItemMoveResult_BadFilter                   = 10,
		InventoryItemMoveResult_SortingTooOften             = 11,
		InventoryItemMoveResult_NoInvSpace                  = 12,
		InventoryItemMoveResult_CantTradeGear               = 13,
		InventoryItemMoveResult_QuestInPossession           = 14,
		InventoryItemMoveResult_BuyBlocked                  = 15,
		InventoryItemMoveResult_SellBlocked                 = 16,
		InventoryItemMoveResult_SlowDown                    = 17,
		InventoryItemMoveResult_Failed                      = 18,
		InventoryItemMoveResult_None                        = 19,
		InventoryItemMoveResult_InventoryItemMoveResult_MAX = 20
	};

	/**
	 * Enum ProjectAgartha.ECraftResult
	 */
	enum class ECraftResult : uint8_t
	{
		CR_Unknown           = 0,
		CR_QualitySuccess    = 1,
		CR_RepairSuccess     = 2,
		CR_UpgradeSuccess    = 3,
		CR_CraftSuccess      = 4,
		CR_PlayerNoInventory = 5,
		CR_InputsDontExist   = 6,
		CR_QualityMismatch   = 7,
		CR_UpgradesMissing   = 8,
		CR_UpgradeDuplicate  = 9,
		CR_TooManyRepeats    = 10,
		CR_InvalidRecipe     = 11,
		CR_StolenItem        = 12,
		CR_UpgradeOverlevel  = 13,
		CR_UnknownFailure    = 14,
		CR_Rollback          = 15,
		CR_NoOpenSockets     = 16,
		CR_MAX               = 17
	};

	/**
	 * Enum ProjectAgartha.EExtractionResult
	 */
	enum class EExtractionResult : uint8_t
	{
		None              = 0,
		Started           = 1,
		Success           = 2,
		StoppedToDistance = 3,
		StoppedToDamage   = 4,
		MAX               = 5
	};

	/**
	 * Enum ProjectAgartha.EArmorNoise
	 */
	enum class EArmorNoise : uint8_t
	{
		AN_Walk        = 0,
		AN_Sprint      = 1,
		AN_Jump        = 2,
		AN_Crouch      = 3,
		AN_Kick        = 4,
		AN_LAttack     = 5,
		AN_HCharge     = 6,
		AN_HAttack     = 7,
		AN_Dodge       = 8,
		AN_Block       = 9,
		AN_NDamage     = 10,
		AN_HDamage     = 11,
		AN_Dead        = 12,
		AN_XbowPull    = 13,
		AN_XBowGrab    = 14,
		AN_XBowBolt    = 15,
		AN_Sheathe1H   = 16,
		AN_Sheathe2H   = 17,
		AN_SheatheSh   = 18,
		AN_Unsheathe1H = 19,
		AN_Unsheathe2H = 20,
		AN_UnsheatheSh = 21,
		AN_MAX         = 22
	};

	/**
	 * Enum ProjectAgartha.EAchievement
	 */
	enum class EAchievement : uint8_t
	{
		A_BeachRaid    = 0,
		A_MazeRaid     = 1,
		A_CaveRaid     = 2,
		A_MaxArtificer = 3,
		A_MaxAlchemy   = 4,
		A_MaxCooking   = 5,
		A_MaxEquipment = 6,
		A_StrapsQuest  = 7,
		A_OjoreQuest   = 8,
		A_GottoQuest   = 9,
		A_BuanaQuest   = 10,
		A_ChingQuest   = 11,
		A_KwahuQuest   = 12,
		A_Tutorial     = 13,
		A_Networth     = 14,
		A_PlayerKills  = 15,
		A_NpcKills     = 16,
		A_Length       = 17,
		A_MAX          = 18
	};

	/**
	 * Enum ProjectAgartha.EAnalyticEvent
	 */
	enum class EAnalyticEvent : uint8_t
	{
		AE_PlayerOpenChest  = 0,
		AE_PlayerDied       = 1,
		AE_PlayerKilled     = 2,
		AE_PlayerJoin       = 3,
		AE_PlayerQuestStart = 4,
		AE_PlayerQuestEnd   = 5,
		AE_PlayerCraft      = 6,
		AE_ServerCreated    = 7,
		AE_ServerEnded      = 8,
		AE_MAX              = 9
	};

	/**
	 * Enum ProjectAgartha.EBotStyle
	 */
	enum class EBotStyle : uint8_t
	{
		BS_Human   = 0,
		BS_Zombie  = 1,
		BS_Rabbit  = 2,
		BS_Goat    = 3,
		BS_Boar    = 4,
		BS_CZombie = 5,
		BS_Asura   = 6,
		BS_Asura2  = 7,
		BS_Asura3  = 8,
		BS_Length  = 9,
		BS_MAX     = 10
	};

	/**
	 * Enum ProjectAgartha.SpeciesAttachSlotType
	 */
	enum class ESpeciesAttachSlotType : uint8_t
	{
		SpeciesAttachSlotType_TopHelm                   = 0,
		SpeciesAttachSlotType_FullHelm                  = 1,
		SpeciesAttachSlotType_Chest                     = 2,
		SpeciesAttachSlotType_Gloves                    = 3,
		SpeciesAttachSlotType_Pants                     = 4,
		SpeciesAttachSlotType_Boots                     = 5,
		SpeciesAttachSlotType_SpeciesAttachSlotType_MAX = 6
	};

	/**
	 * Enum ProjectAgartha.SpeciesModuleType
	 */
	enum class ESpeciesModuleType : uint8_t
	{
		SpeciesModuleType_Head                  = 0,
		SpeciesModuleType_Hair                  = 1,
		SpeciesModuleType_FacialHair            = 2,
		SpeciesModuleType_Torso                 = 3,
		SpeciesModuleType_UpperArms             = 4,
		SpeciesModuleType_LowerArms             = 5,
		SpeciesModuleType_Hands                 = 6,
		SpeciesModuleType_UpperLegs             = 7,
		SpeciesModuleType_LowerLegs             = 8,
		SpeciesModuleType_Feet                  = 9,
		SpeciesModuleType_FullBody              = 10,
		SpeciesModuleType_SpeciesModuleType_MAX = 11
	};

	/**
	 * Enum ProjectAgartha.CharacterModuleType
	 */
	enum class ECharacterModuleType : uint8_t
	{
		CharacterModuleType_Head                    = 0,
		CharacterModuleType_Eyes                    = 1,
		CharacterModuleType_Chest                   = 2,
		CharacterModuleType_Shoulders               = 3,
		CharacterModuleType_Arms                    = 4,
		CharacterModuleType_Hands                   = 5,
		CharacterModuleType_Legs                    = 6,
		CharacterModuleType_Shins                   = 7,
		CharacterModuleType_Hair                    = 8,
		CharacterModuleType_Beard                   = 9,
		CharacterModuleType_HeadWear                = 10,
		CharacterModuleType_Gloves                  = 11,
		CharacterModuleType_Boots                   = 12,
		CharacterModuleType_ChestWear               = 13,
		CharacterModuleType_Count                   = 14,
		CharacterModuleType_None                    = 15,
		CharacterModuleType_CharacterModuleType_MAX = 16
	};

	/**
	 * Enum ProjectAgartha.ECharacterStance
	 */
	enum class ECharacterStance : uint8_t
	{
		CS_Straight     = 0,
		CS_LeftForward  = 1,
		CS_RightForward = 2,
		CS_MAX          = 3
	};

	/**
	 * Enum ProjectAgartha.ECombatAction
	 */
	enum class ECombatAction : uint8_t
	{
		CA_Attack = 0,
		CA_Heavy  = 1,
		CA_Block  = 2,
		CA_Sprint = 3,
		CA_Dodge  = 4,
		CA_Kick   = 5,
		CA_Jump   = 6,
		CA_MAX    = 7
	};

	/**
	 * Enum ProjectAgartha.EJoystickType
	 */
	enum class EJoystickType : uint8_t
	{
		None           = 0,
		LeftStick      = 1,
		RightStick     = 2,
		KeyboardCustom = 3,
		MAX            = 4
	};

	/**
	 * Enum ProjectAgartha.EDamageType
	 */
	enum class EDamageType : uint8_t
	{
		DT_None        = 0,
		DT_Slash       = 1,
		DT_Blunt       = 2,
		DT_Pierce      = 3,
		DT_SlashBlunt  = 4,
		DT_SlashPierce = 5,
		DT_BluntPierce = 6,
		DT_Hybrid      = 7,
		DT_SlashNoStam = 8,
		DT_BluntNoStam = 9,
		DT_MAX         = 10
	};

	/**
	 * Enum ProjectAgartha.EquipmentType
	 */
	enum class EquipmentType : uint8_t
	{
		ET_Weapon     = 0,
		ET_Secondary  = 1,
		ET_Offhand    = 2,
		ET_Helmet     = 3,
		ET_Torso      = 4,
		ET_Legs       = 5,
		ET_Gloves     = 6,
		ET_Boots      = 7,
		ET_Shirt      = 8,
		ET_Pants      = 9,
		ET_Ammo       = 10,
		ET_None       = 11,
		ET_Food       = 12,
		ET_Water      = 13,
		ET_Healing    = 14,
		ET_Buff       = 15,
		ET_Resource   = 16,
		ET_Contract   = 17,
		ET_Backpack   = 18,
		ET_QuestInit  = 19,
		ET_QuestTrack = 20,
		ET_Oil        = 21,
		ET_Rune       = 22,
		ET_Seal       = 23,
		ET_Note       = 24,
		ET_Lootbox    = 25,
		ET_Document   = 26,
		ET_Length     = 27,
		ET_MAX        = 28
	};

	/**
	 * Enum ProjectAgartha.ETacticalCommand
	 */
	enum class ETacticalCommand : uint8_t
	{
		None              = 0,
		MoveToLocation    = 1,
		FollowAbove       = 2,
		FollowRight       = 3,
		FollowBehind      = 4,
		FollowLeft        = 5,
		Follow1m          = 6,
		Follow5m          = 7,
		Follow15m         = 8,
		IndividualCommand = 9,
		Guard             = 10,
		GuardAhead        = 11,
		GuardRight        = 12,
		GuardBehind       = 13,
		GuardLeft         = 14,
		AttackTarget      = 15,
		ToggleAggression  = 16,
		MAX               = 17
	};

	/**
	 * Enum ProjectAgartha.EGameplayAbilityBindings
	 */
	enum class EGameplayAbilityBindings : uint8_t
	{
		None             = 0,
		Confirm          = 1,
		Cancel           = 2,
		PrimaryAbility   = 3,
		SecondaryAbility = 4,
		TertiaryAbility  = 5,
		Kick             = 6,
		Dodge            = 7,
		Sprint           = 8,
		Jump             = 9,
		Crouch           = 10,
		Sheathe          = 11,
		Interact         = 12,
		Reload           = 13,
		MAX              = 14
	};

	/**
	 * Enum ProjectAgartha.EAttributeSearchType
	 */
	enum class EAttributeSearchType : uint8_t
	{
		FinalValue = 0,
		BaseValue  = 1,
		BonusValue = 2,
		MAX        = 3
	};

	/**
	 * Enum ProjectAgartha.EInputMode
	 */
	enum class EInputMode : uint8_t
	{
		UI_Only   = 0,
		GameAndUI = 1,
		Game_Only = 2,
		MAX       = 3
	};

	/**
	 * Enum ProjectAgartha.ESortStyle
	 */
	enum class ESortStyle : uint8_t
	{
		SS_Shop       = 0,
		SS_Equipment  = 1,
		SS_Tier       = 2,
		SS_Stack      = 3,
		SS_Upgrade    = 4,
		SS_Durability = 5,
		SS_Size       = 6,
		SS_Price      = 7,
		SS_MAX        = 8
	};

	/**
	 * Enum ProjectAgartha.InventoryType
	 */
	enum class EInventoryType : uint8_t
	{
		InventoryType_Default           = 0,
		InventoryType_Loot              = 1,
		InventoryType_Shop              = 2,
		InventoryType_Quest             = 3,
		InventoryType_None              = 4,
		InventoryType_InventoryType_MAX = 5
	};

	/**
	 * Enum ProjectAgartha.ECollisonInventoryResult
	 */
	enum class ECollisonInventoryResult : uint8_t
	{
		Collision   = 0,
		NoCollision = 1,
		Merge       = 2,
		MAX         = 3
	};

	/**
	 * Enum ProjectAgartha.InventoryPlayerFilterType
	 */
	enum class EInventoryPlayerFilterType : uint8_t
	{
		InventoryPlayerFilterType_None                          = 0,
		InventoryPlayerFilterType_Tier                          = 1,
		InventoryPlayerFilterType_WeaponsOnly                   = 2,
		InventoryPlayerFilterType_InventoryPlayerFilterType_MAX = 3
	};

	/**
	 * Enum ProjectAgartha.SpecialItemType
	 */
	enum class ESpecialItemType : uint8_t
	{
		SpecialItemType_None                = 0,
		SpecialItemType_Money               = 1,
		SpecialItemType_SpecialItemType_MAX = 2
	};

	/**
	 * Enum ProjectAgartha.EUniqueBehavior
	 */
	enum class EUniqueBehavior : uint8_t
	{
		Hidden      = 0,
		TestBehave1 = 1,
		TestBehave2 = 2,
		TestBehave3 = 3,
		TestBehave4 = 4,
		MAX         = 5
	};

	/**
	 * Enum ProjectAgartha.ItemStatType
	 */
	enum class EItemStatType : uint8_t
	{
		ItemStatType_None                      = 0,
		ItemStatType_BaseDamage                = 1,
		ItemStatType_FistDamage                = 2,
		ItemStatType_KickDamage                = 3,
		ItemStatType_FistStaminaPercentage     = 4,
		ItemStatType_KickStaminaPercentage     = 5,
		ItemStatType_CriticalDamageMultiplier  = 6,
		ItemStatType_AttackSpeedMultiplier     = 7,
		ItemStatType_BlockedDamageDealt        = 8,
		ItemStatType_BlockedDamageTaken        = 9,
		ItemStatType_BleedMagnitude            = 10,
		ItemStatType_BreakBoneMagnitude        = 11,
		ItemStatType_MoveSpeedMultiplier       = 12,
		ItemStatType_TurnSpeedMultiplier       = 13,
		ItemStatType_DodgeSpeedMultiplier      = 14,
		ItemStatType_StaminaMultiplier         = 15,
		ItemStatType_DamageReduction           = 16,
		ItemStatType_CriticalDamageReduction   = 17,
		ItemStatType_ProjectileDamageReduction = 18,
		ItemStatType_BladeDamageReduction      = 19,
		ItemStatType_BluntDamageReduction      = 20,
		ItemStatType_FallDamageReduction       = 21,
		ItemStatType_BleedResistance           = 22,
		ItemStatType_StunResistance            = 23,
		ItemStatType_LootSpeedMultiplier       = 24,
		ItemStatType_JumpHeightMultiplier      = 25,
		ItemStatType_StealthMultiplier         = 26,
		ItemStatType_FlatMaxStamina            = 27,
		ItemStatType_PercentMaxStamina         = 28,
		ItemStatType_FlatMaxHealth             = 29,
		ItemStatType_PercentMaxHealth          = 30,
		ItemStatType_PercentDamage             = 31,
		ItemStatType_PercentBleed              = 32,
		ItemStatType_PercentBone               = 33,
		ItemStatType_ArmorNoiseWeight          = 34,
		ItemStatType_TemporaryChangeEffect     = 35,
		ItemStatType_UniqueBehavior            = 36,
		ItemStatType_Food                      = 37,
		ItemStatType_Weight                    = 38,
		ItemStatType_ItemStatType_MAX          = 39
	};

	/**
	 * Enum ProjectAgartha.QuestActionResult
	 */
	enum class EQuestActionResult : uint8_t
	{
		QuestActionResult_Failed                       = 0,
		QuestActionResult_QuestAccepted                = 1,
		QuestActionResult_QuestAcceptFailed            = 2,
		QuestActionResult_QuestFinished                = 3,
		QuestActionResult_QuestFinishFailed            = 4,
		QuestActionResult_QuestUpdatedAndReadyToFinish = 5,
		QuestActionResult_QuestActionResult_MAX        = 6
	};

	/**
	 * Enum ProjectAgartha.QuestProgressType
	 */
	enum class EQuestProgressType : uint8_t
	{
		QuestProgressType_None                  = 0,
		QuestProgressType_Active                = 1,
		QuestProgressType_Finished              = 2,
		QuestProgressType_QuestProgressType_MAX = 3
	};

	/**
	 * Enum ProjectAgartha.QuestConditionType
	 */
	enum class EQuestConditionType : uint8_t
	{
		QuestConditionType_Item                   = 0,
		QuestConditionType_Kill                   = 1,
		QuestConditionType_Explore                = 2,
		QuestConditionType_None                   = 3,
		QuestConditionType_QuestConditionType_MAX = 4
	};

	/**
	 * Enum ProjectAgartha.EPartyReadyStatus
	 */
	enum class EPartyReadyStatus : uint8_t
	{
		RS_Unknown    = 0,
		RS_Ship       = 1,
		RS_Free       = 2,
		RS_Merc       = 3,
		RS_Raid       = 4,
		RS_Disconnect = 5,
		RS_MAX        = 6
	};

	/**
	 * Enum ProjectAgartha.EPlayerStat
	 */
	enum class EPlayerStat : uint8_t
	{
		PS_ExpedLaunched   = 0,
		PS_ExpedSurvived   = 1,
		PS_Kills           = 2,
		PS_Deaths          = 3,
		PS_Containers      = 4,
		PS_Distance        = 5,
		PS_Experience      = 6,
		PS_NormalMeleeHit  = 7,
		PS_HeavyMeleeHit   = 8,
		PS_DamageDealt     = 9,
		PS_HitsReceived    = 10,
		PS_DamageReceived  = 11,
		PS_DamageMitigated = 12,
		PS_BoltsShot       = 13,
		PS_BoltsHitBody    = 14,
		PS_BoltsHitHead    = 15,
		PS_Healing         = 16,
		PS_KillsPlayers    = 17,
		PS_DeathsPlayers   = 18,
		PS_MAX             = 19
	};

	/**
	 * Enum ProjectAgartha.EAccountFlags
	 */
	enum class EAccountFlags : uint8_t
	{
		AF_None  = 0,
		AF_Dev   = 1,
		AF_Alpha = 2,
		AF_Beta  = 3,
		_AF_MAX_ = 4
	};

	/**
	 * Enum ProjectAgartha.ERaidMap
	 */
	enum class ERaidMap : uint8_t
	{
		RM_None       = 0,
		RM_Beach      = 1,
		RM_Caves      = 2,
		RM_ThirdMap   = 3,
		RM_FourthMap  = 4,
		RM_FifthMap   = 5,
		RM_SixthMap   = 6,
		RM_SeventhMap = 7,
		RM_EighthMap  = 8,
		RM_NinthMap   = 9,
		RM_TenthMap   = 10,
		RM_MAX        = 11
	};

	/**
	 * Enum ProjectAgartha.ELoadedLevel
	 */
	enum class ELoadedLevel : uint8_t
	{
		LL_Unloaded = 0,
		LL_ShipHub  = 1,
		LL_Raid     = 2,
		LL_MAX      = 3
	};

	/**
	 * Enum ProjectAgartha.EStationType
	 */
	enum class EStationType : uint8_t
	{
		ST_Any       = 0,
		ST_Cooking   = 1,
		ST_Alchemy   = 2,
		ST_Artificer = 3,
		ST_Equipment = 4,
		ST_MAX       = 5
	};

	/**
	 * Enum ProjectAgartha.TradeItemResult
	 */
	enum class ETradeItemResult : uint8_t
	{
		TradeItemResult_SuccessBuy              = 0,
		TradeItemResult_SuccessSell             = 1,
		TradeItemResult_NoTrade                 = 2,
		TradeItemResult_NoMoneyEnough           = 3,
		TradeItemResult_QuestInProgress         = 4,
		TradeItemResult_NotEnoughInventorySpace = 5,
		TradeItemResult_BuyBlocked              = 6,
		TradeItemResult_SellBlocked             = 7,
		TradeItemResult_Failed                  = 8,
		TradeItemResult_None                    = 9,
		TradeItemResult_TradeItemResult_MAX     = 10
	};

	/**
	 * Enum ProjectAgartha.EBotVoice
	 */
	enum class EBotVoice : uint8_t
	{
		BV_Wait            = 0,
		BV_Overwatch       = 1,
		BV_Explore         = 2,
		BV_Chase           = 3,
		BV_Retreat         = 4,
		BV_Follow          = 5,
		BV_Fight           = 6,
		BV_Loot            = 7,
		BV_Damage          = 8,
		BV_Death           = 9,
		BV_Heal            = 10,
		BV_LeaderTarget    = 11,
		BV_LeaderReinforce = 12,
		BV_Flanking        = 13,
		BV_SwapPrimary     = 14,
		BV_SwapSecondary   = 15,
		BV_Victory         = 16,
		BV_Confusion       = 17,
		BV_Warcry          = 18,
		BV_MAX             = 19
	};

	/**
	 * Enum ProjectAgartha.EBotInput
	 */
	enum class EBotInput : uint8_t
	{
		BI_None           = 0,
		BI_Light          = 1,
		BI_Heavy          = 2,
		BI_Combo          = 3,
		BI_Kick           = 4,
		BI_Jump           = 5,
		BI_EmoteSurrender = 6,
		BI_EmoteVictory   = 7,
		BI_EmoteSocial    = 8,
		BI_MAX            = 9
	};

	/**
	 * Enum ProjectAgartha.EBotDefense
	 */
	enum class EBotDefense : uint8_t
	{
		BD_None  = 0,
		BD_Block = 1,
		BD_Evade = 2,
		BD_MAX   = 3
	};

	/**
	 * Enum ProjectAgartha.EBotBehavior
	 */
	enum class EBotBehavior : uint8_t
	{
		BB_None            = 0,
		BB_Strafes         = 1,
		BB_SprintExplore   = 2,
		BB_GroupPosition   = 3,
		BB_FlinchRetreat   = 4,
		BB_TargetPosition  = 5,
		BB_Defends         = 6,
		BB_Large           = 7,
		BB_Consumes        = 8,
		BB_WatchesAttack   = 9,
		BB_InfiniteStamina = 10,
		BB_Kicks           = 11,
		BB_AsuraAttack     = 12,
		BB_Length          = 13,
		BB_MAX             = 14
	};

	/**
	 * Enum ProjectAgartha.EBotGoal
	 */
	enum class EBotGoal : uint8_t
	{
		BG_Wait      = 0,
		BG_Overwatch = 1,
		BG_Explore   = 2,
		BG_Retreat   = 3,
		BG_Follow    = 4,
		BG_Fight     = 5,
		BG_Loot      = 6,
		BG_MAX       = 7
	};

	/**
	 * Enum ProjectAgartha.ETravelingType
	 */
	enum class ETravelingType : uint8_t
	{
		None     = 0,
		HubWorld = 1,
		PlayTest = 2,
		MAX      = 3
	};

	/**
	 * Enum ProjectAgartha.ECharacterVoice
	 */
	enum class ECharacterVoice : uint8_t
	{
		CV_Wait            = 0,
		CV_Overwatch       = 1,
		CV_Explore         = 2,
		CV_Chase           = 3,
		CV_Retreat         = 4,
		CV_Follow          = 5,
		CV_Fight           = 6,
		CV_Loot            = 7,
		CV_Damage          = 8,
		CV_Death           = 9,
		CV_Heal            = 10,
		CV_LeaderTarget    = 11,
		CV_LeaderReinforce = 12,
		CV_Flanking        = 13,
		CV_SwapPrimary     = 14,
		CV_SwapSecondary   = 15,
		CV_Victory         = 16,
		CV_Confusion       = 17,
		CV_Warcry          = 18,
		CV_LaughLong       = 19,
		CV_LaughShort      = 20,
		CV_ExertLight      = 21,
		CV_ExertMedium     = 22,
		CV_ExertHeavy      = 23,
		CV_StaminaUsed     = 24,
		CV_StaminaEmpty    = 25,
		CV_PainMinor       = 26,
		CV_PainMajor       = 27,
		CV_DeathNear       = 28,
		CV_DeathScream     = 29,
		CV_DeathGasp       = 30,
		CV_MAX             = 31
	};

	/**
	 * Enum ProjectAgartha.EVoiceFilter
	 */
	enum class EVoiceFilter : uint8_t
	{
		VF_Any  = 0,
		VF_NPC  = 1,
		VF_Merc = 2,
		VF_MAX  = 3
	};

	/**
	 * Enum ProjectAgartha.EWeaponSlotType
	 */
	enum class EWeaponSlotType : uint8_t
	{
		WS_OneHand   = 0,
		WS_Crossbow  = 1,
		WS_TwoHand   = 2,
		WS_Offhand   = 3,
		WS_Shield    = 4,
		WS_Secondary = 5,
		Count        = 6,
		WS_None      = 7,
		MAX          = 8
	};

	/**
	 * Enum ProjectAgartha.EWeaponType
	 */
	enum class EWeaponType : uint8_t
	{
		WT_None        = 0,
		WT_Fist        = 1,
		WT_Sword       = 2,
		WT_SwordShield = 3,
		WT_Crossbow    = 4,
		WT_TwoHand     = 5,
		WT_Polearm     = 6,
		WT_Shield      = 7,
		WT_Secondary   = 8,
		WT_MAX         = 9
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ProjectAgartha.DamageHistory
	 * Size -> 0x0018
	 */
	struct FDamageHistory
	{
	public:
		bool                                                       Kill;                                                    // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_STVH[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Damage;                                                  // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Time;                                                    // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GYEW[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AProjectAgarthaCharacter*                            CharacterDamager;                                        // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.KillHistory
	 * Size -> 0x0010
	 */
	struct FKillHistory
	{
	public:
		float                                                      Time;                                                    // 0x0000(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageDealed;                                            // 0x0004(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                EntityName;                                              // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.PlayerStats
	 * Size -> 0x004C
	 */
	struct FPlayerStats
	{
	public:
		int32_t                                                    ExpeditionsLaunched;                                     // 0x0000(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExpeditionsSurvived;                                     // 0x0004(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Kills;                                                   // 0x0008(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Deaths;                                                  // 0x000C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ContainersOpened;                                        // 0x0010(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DistanceTraveled;                                        // 0x0014(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ExperienceGained;                                        // 0x0018(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NormalMeleeHits;                                         // 0x001C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HeavyMeleeHits;                                          // 0x0020(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageDealt;                                             // 0x0024(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HitsReceived;                                            // 0x0028(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageReceived;                                          // 0x002C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DamageMitigated;                                         // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoltsShot;                                               // 0x0034(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoltsHitBody;                                            // 0x0038(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BoltsHitHead;                                            // 0x003C(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    HealingPerformed;                                        // 0x0040(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    KillsPlayers;                                            // 0x0044(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    DeathsPlayers;                                           // 0x0048(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.KeyValuePair
	 * Size -> 0x000C
	 */
	struct FKeyValuePair
	{
	public:
		class FName                                                Key;                                                     // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Value;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.CharacterBody
	 * Size -> 0x0060
	 */
	struct FCharacterBody
	{
	public:
		class FName                                                Species;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    BodyTypeIndex;                                           // 0x0008(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RaceIndex;                                               // 0x000C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<int32_t>                                            ModuleVariationIndices;                                  // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKeyValuePair>                               ColorVariationsIndices;                                  // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKeyValuePair>                               MaskVariationIndices;                                    // 0x0030(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FKeyValuePair>                               MaskColorVariationIndices;                               // 0x0040(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    VoiceIndex;                                              // 0x0050(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                VoiceIdentifier;                                         // 0x0054(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoicePitch;                                              // 0x005C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.NPCLevel
	 * Size -> 0x0010
	 */
	struct FNPCLevel
	{
	public:
		class FName                                                NPCName;                                                 // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    QuestsProgress;                                          // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    TradeProgress;                                           // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.NPCQuestProgressCondition
	 * Size -> 0x000C
	 */
	struct FNPCQuestProgressCondition
	{
	public:
		int32_t                                                    ConditionIndex;                                          // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConditionNum;                                            // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    State;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.NPCQuestProgress
	 * Size -> 0x0020
	 */
	struct FProjectAgartha_FNPCQuestProgress
	{
	public:
		class FName                                                QuestName;                                               // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FNPCQuestProgressCondition>                  Conditions;                                              // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EQuestProgressType                                         Progress;                                                // 0x0018(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8UEC[0x7];                                   // 0x0019(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.ItemStats
	 * Size -> 0x00A0
	 */
	struct FItemStats
	{
	public:
		bool                                                       bIsTwoHanded;                                            // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AV1M[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BaseDamage;                                              // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FistDamage;                                              // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KickDamage;                                              // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FistStaminaPercentage;                                   // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      KickStaminaPercentage;                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamageMultiplier;                                // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttackSpeedMultiplier;                                   // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockedDamageDealt;                                      // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BlockedDamageTaken;                                      // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BleedMagnitude;                                          // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BreakBoneMagnitude;                                      // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MoveSpeedMultiplier;                                     // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TurnSpeedMultiplier;                                     // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DodgeSpeedMultiplier;                                    // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StaminaMultiplier;                                       // 0x003C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      DamageReduction;                                         // 0x0040(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CriticalDamageReduction;                                 // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ProjectileDamageReduction;                               // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BladeDamageReduction;                                    // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BluntDamageReduction;                                    // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FallDamageReduction;                                     // 0x0054(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BleedResistance;                                         // 0x0058(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StunResistance;                                          // 0x005C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LootSpeedMultiplier;                                     // 0x0060(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      JumpHeightMultiplier;                                    // 0x0064(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      StealthMultiplier;                                       // 0x0068(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlatMaxStamina;                                          // 0x006C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentMaxStamina;                                       // 0x0070(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      FlatMaxHealth;                                           // 0x0074(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentMaxHealth;                                        // 0x0078(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      PercentDamage;                                           // 0x007C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ArmorNoiseWeight;                                        // 0x0080(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PEQJ[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      TemporaryChangeEffect;                                   // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic
		int64_t                                                    UniqueBehavior;                                          // 0x0098(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.RecipeReq
	 * Size -> 0x000C
	 */
	struct FRecipeReq
	{
	public:
		int32_t                                                    ItemIndex;                                               // 0x0000(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EquipmentType                                              ItemType;                                                // 0x0004(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q8EO[0x3];                                   // 0x0005(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    Amount;                                                  // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.RecipeTable
	 * Size -> 0x0040 (FullSize[0x0048] - InheritedSize[0x0008])
	 */
	struct FRecipeTable : public FTableRowBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MTON[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Description;                                             // 0x0010(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EStationType                                               Station;                                                 // 0x0020(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              LevelRequired;                                           // 0x0021(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CXPF[0x6];                                   // 0x0022(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRecipeReq>                                  Inputs;                                                  // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FRecipeReq>                                  Outputs;                                                 // 0x0038(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.AbilityModifierStruct
	 * Size -> 0x0040
	 */
	struct FAbilityModifierStruct
	{
	public:
		struct FGameplayAttribute                                  BackingAttribute;                                        // 0x0000(0x0038) Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AttributeModifier;                                       // 0x0038(0x0004) Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_04BK[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.QuickCommand
	 * Size -> 0x0020
	 */
	struct FQuickCommand
	{
	public:
		struct FKey                                                Key;                                                     // 0x0000(0x0018) Edit, BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Index;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FNDY[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.ModuleSetup
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FModuleSetup : public FTableRowBase
	{
	public:
		ESpeciesModuleType                                         ModuleAttachPoint;                                       // 0x0008(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZZBF[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<ESpeciesModuleType>                                 CoveredModules;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		ESpeciesAttachSlotType                                     ModuleEquipSlot;                                         // 0x0020(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KON4[0x7];                                   // 0x0021(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.ItemTable
	 * Size -> 0x0298 (FullSize[0x02A0] - InheritedSize[0x0008])
	 */
	struct FItemTable : public FTableRowBase
	{
	public:
		int32_t                                                    Index;                                                   // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZT4K[0x4];                                   // 0x000C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                Description;                                             // 0x0028(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              Tier;                                                    // 0x0040(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ShopLevel;                                               // 0x0041(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_C9SN[0x2];                                   // 0x0042(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    ShopPrice;                                               // 0x0044(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Mesh[0x28];                                              // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SkeletalMesh[0x28];                                      // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              BodyTypesClothes[0x10];                                  // 0x0098(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              UnknownData_TIAF[0x8];                                   // 0x00A8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FTransform                                          TransformToEquip;                                        // 0x00B0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FTransform                                          TransformToFight;                                        // 0x00E0(0x0030) Edit, BlueprintVisible, BlueprintReadOnly, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              Animation[0x28];                                         // 0x0110(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Materials[0x10];                                         // 0x0138(0x0010) UNKNOWN PROPERTY: ArrayProperty
		unsigned char                                              Sprite[0x28];                                            // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		EquipmentType                                              EquipClass;                                              // 0x0170(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_6SSK[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EquipmentType>                                      UnequipTypes;                                            // 0x0178(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<EquipmentType>                                      HideModules;                                             // 0x0188(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		EWeaponType                                                WeaponType;                                              // 0x0198(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EDamageType                                                DamageType;                                              // 0x0199(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       MaleBodyTypeEnabled;                                     // 0x019A(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       FemaleBodyTypeEnabled;                                   // 0x019B(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Width;                                                   // 0x019C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              Height;                                                  // 0x019D(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SJ6E[0x2];                                   // 0x019E(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    weight;                                                  // 0x01A0(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxStackSize;                                            // 0x01A4(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxSpawnSize;                                            // 0x01A8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxDurability;                                           // 0x01AC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsInContainers;                                     // 0x01B0(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsInGear;                                           // 0x01B1(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       OwnsContainer;                                           // 0x01B2(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MO2I[0x5];                                   // 0x01B3(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<EquipmentType>                                      ContainerFilters;                                        // 0x01B8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              ContainerWidth;                                          // 0x01C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ContainerHeight;                                         // 0x01C9(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSpawnsInfinitely;                                       // 0x01CA(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AGMC[0x1];                                   // 0x01CB(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                MetadataName;                                            // 0x01CC(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SFS6[0x4];                                   // 0x01D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemStats                                          Stats;                                                   // 0x01D8(0x00A0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		struct FModuleSetup                                        ModuleSetup;                                             // 0x0278(0x0028) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.BrowserParty
	 * Size -> 0x0020
	 */
	struct FBrowserParty
	{
	public:
		uint64_t                                                   SteamId;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Ad;                                                      // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Users;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZRHN[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.PartyMember
	 * Size -> 0x0030
	 */
	struct FPartyMember
	{
	public:
		uint64_t                                                   SteamId;                                                 // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Name;                                                    // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    Skill;                                                   // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IFO7[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              ActorPointer;                                            // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EPartyReadyStatus                                          ReadyStatus;                                             // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsLeader;                                               // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HNQD[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.InputInfo
	 * Size -> 0x0010
	 */
	struct FInputInfo
	{
	public:
		EInputMode                                                 InputMode;                                               // 0x0000(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EMouseLockMode                                             MouseLockMode;                                           // 0x0001(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHideMouseCursor;                                        // 0x0002(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowPlayerMovement;                                    // 0x0003(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IY7U[0x4];                                   // 0x0004(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UWidget*                                             InWidgetToFocus;                                         // 0x0008(0x0008) Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.RaidDefinition
	 * Size -> 0x0018
	 */
	struct FRaidDefinition
	{
	public:
		class FString                                              Path;                                                    // 0x0000(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredItemIndex;                                       // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    RequiredItemAmount;                                      // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.ChatLine
	 * Size -> 0x0028
	 */
	struct FChatLine
	{
	public:
		EChatChannel                                               Channel;                                                 // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_096E[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              Name;                                                    // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FString                                              Message;                                                 // 0x0018(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.ArmorNoiseTable
	 * Size -> 0x0398 (FullSize[0x03A0] - InheritedSize[0x0008])
	 */
	struct FArmorNoiseTable : public FTableRowBase
	{
	public:
		class FName                                                Description;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JBEQ[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              Walk[0x28];                                              // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Sprint[0x28];                                            // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Jump[0x28];                                              // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Crouch[0x28];                                            // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Kick[0x28];                                              // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              LightAttack[0x28];                                       // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HeavyCharge[0x28];                                       // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HeavyRelease[0x28];                                      // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Dodge[0x28];                                             // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Block[0x28];                                             // 0x0198(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              NormalDamage[0x28];                                      // 0x01C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              HeavyDamage[0x28];                                       // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Dead[0x28];                                              // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              XbowPullString[0x28];                                    // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              XbowGrabBolt[0x28];                                      // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              XbowBoltInsert[0x28];                                    // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Sheathe1H[0x28];                                         // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Sheathe2H[0x28];                                         // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              SheatheShield[0x28];                                     // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Unsheathe1H[0x28];                                       // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              Unsheathe2H[0x28];                                       // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              UnsheatheShield[0x28];                                   // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

	/**
	 * ScriptStruct ProjectAgartha.BotTable
	 * Size -> 0x00E0 (FullSize[0x00E8] - InheritedSize[0x0008])
	 */
	struct FBotTable : public FTableRowBase
	{
	public:
		int32_t                                                    Difficulty;                                              // 0x0008(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityAggressiveness;                               // 0x000C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityAgility;                                      // 0x0010(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityConfidence;                                   // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityCowardice;                                    // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityCuriousness;                                  // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    PersonalityScavenger;                                    // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CustomAppearanceSkinTone;                                // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CustomAppearanceBodyType;                                // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CustomAppearanceVoice;                                   // 0x002C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    CustomAppearanceHairTone;                                // 0x0030(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      VoicePitch;                                              // 0x0034(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bIsUndead;                                               // 0x0038(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MHTG[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FItemStats                                          HiddenBuff;                                              // 0x0040(0x00A0) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class UDataTable*                                          InitInventoryDataTable;                                  // 0x00E0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.ModuleVariations
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FModuleVariations : public FTableRowBase
	{
	public:
		TArray<class FName>                                        VariationNames;                                          // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              VariationMeshes[0x10];                                   // 0x0018(0x0010) UNKNOWN PROPERTY: ArrayProperty
	};

	/**
	 * ScriptStruct ProjectAgartha.ColorVariations
	 * Size -> 0x0030 (FullSize[0x0038] - InheritedSize[0x0008])
	 */
	struct FColorVariations : public FTableRowBase
	{
	public:
		struct FLinearColor                                        BaseColor;                                               // 0x0008(0x0010) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        VariationNames;                                          // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                ColorVariations;                                         // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.TextureMaskVariations
	 * Size -> 0x0048 (FullSize[0x0050] - InheritedSize[0x0008])
	 */
	struct FTextureMaskVariations : public FTableRowBase
	{
	public:
		class FName                                                TextureMaskTypeName;                                     // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        VariationNames;                                          // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              Masks[0x10];                                             // 0x0020(0x0010) UNKNOWN PROPERTY: ArrayProperty
		class FName                                                MaterialMaskParameterName;                               // 0x0030(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<struct FLinearColor>                                MaskColors;                                              // 0x0038(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		class FName                                                MaterialMaskColorParameterName;                          // 0x0048(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.SpeciesRaceDefinition
	 * Size -> 0x0290 (FullSize[0x0298] - InheritedSize[0x0008])
	 */
	struct FSpeciesRaceDefinition : public FTableRowBase
	{
	public:
		class FName                                                SpeciesName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                RaceName;                                                // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BodyTypeName;                                            // 0x0018(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              OverrideFullBodyMesh[0x28];                              // 0x0020(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OverridePhysicsAsset[0x28];                              // 0x0048(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              OverrideSkeleton[0x28];                                  // 0x0070(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              Override3PPAnimInstanceClass;                            // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              OverrideFPPAnimInstanceClass;                            // 0x00A0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ModuleOverrides[0x50];                                   // 0x00A8(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<ESpeciesModuleType, struct FModuleVariations>         ModuleVariations;                                        // 0x00F8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TArray<class FName>                                        VoiceOverrides;                                          // 0x0148(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              OverrideMaterialsPerSlot[0x50];                          // 0x0158(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<class FName, class FName>                             OverrideMaterialsColorParamNamePerSlot;                  // 0x01A8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, struct FColorVariations>                 OverrideColorVariationsPerSlot;                          // 0x01F8(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, struct FTextureMaskVariations>           OverrideTextureMaskVariationsPerSlot;                    // 0x0248(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.SpeciesBodyType
	 * Size -> 0x0248 (FullSize[0x0250] - InheritedSize[0x0008])
	 */
	struct FSpeciesBodyType : public FTableRowBase
	{
	public:
		class FName                                                SpeciesName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                BodyTypeName;                                            // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DefaultFullBodyMesh[0x28];                               // 0x0018(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DefaultPhysicsAsset[0x28];                               // 0x0040(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              DefaultSkeleton[0x28];                                   // 0x0068(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		class UClass*                                              Default3PPAnimInstanceClass;                             // 0x0090(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              DefaultFPPAnimInstanceClass;                             // 0x0098(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              DefaultModules[0x50];                                    // 0x00A0(0x0050) UNKNOWN PROPERTY: MapProperty
		TArray<ESpeciesModuleType>                                 OptionalModules;                                         // 0x00F0(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        DefaultVoices;                                           // 0x0100(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		unsigned char                                              DefaultMaterialsPerSlot[0x50];                           // 0x0110(0x0050) UNKNOWN PROPERTY: MapProperty
		TMap<class FName, class FName>                             DefaultMaterialsColorParamNamePerSlot;                   // 0x0160(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, struct FColorVariations>                 DefaultColorVariationsPerSlot;                           // 0x01B0(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		TMap<class FName, struct FTextureMaskVariations>           DefaultTextureMaskVariationsPerSlot;                     // 0x0200(0x0050) Edit, BlueprintVisible, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.SpeciesDescription
	 * Size -> 0x0038 (FullSize[0x0040] - InheritedSize[0x0008])
	 */
	struct FSpeciesDescription : public FTableRowBase
	{
	public:
		class FName                                                SpeciesName;                                             // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                PluralName;                                              // 0x0010(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class FName>                                        BodyTypes;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<class FName>                                        Races;                                                   // 0x0028(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		bool                                                       Playable;                                                // 0x0038(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TGTQ[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.CharacterHairToneTable
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FCharacterHairToneTable : public FTableRowBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IN00[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.CharacterSkinToneTable
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FCharacterSkinToneTable : public FTableRowBase
	{
	public:
		class FName                                                Name;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FColor                                              Color;                                                   // 0x0010(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XXT5[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0018(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.CharacterModuleTable
	 * Size -> 0x0028 (FullSize[0x0030] - InheritedSize[0x0008])
	 */
	struct FCharacterModuleTable : public FTableRowBase
	{
	public:
		class USkeletalMesh*                                       Mesh;                                                    // 0x0008(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TArray<class UMaterialInterface*>                          Materials;                                               // 0x0010(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<bool>                                               MaterialsToChangeBySkinTone;                             // 0x0020(0x0010) Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.CraftingStationInfo
	 * Size -> 0x0008 (FullSize[0x0010] - InheritedSize[0x0008])
	 */
	struct FCraftingStationInfo : public FTableRowBase
	{
	public:
		EStationType                                               stationType;                                             // 0x0008(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              stationLevel;                                            // 0x0009(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OG8J[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.DropTable
	 * Size -> 0x0060 (FullSize[0x0068] - InheritedSize[0x0008])
	 */
	struct FDropTable : public FTableRowBase
	{
	public:
		class FString                                              Description;                                             // 0x0008(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MinimumItems;                                            // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaximumItems;                                            // 0x001C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    WeightForGroup1;                                         // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5W62[0x4];                                   // 0x0024(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRecipeReq>                                  ItemsInGroup1;                                           // 0x0028(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    WeightForGroup2;                                         // 0x0038(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RFN6[0x4];                                   // 0x003C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRecipeReq>                                  ItemsInGroup2;                                           // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    WeightForGroup3;                                         // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_I5MB[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FRecipeReq>                                  ItemsInGroup3;                                           // 0x0058(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.ItemExtraData
	 * Size -> 0x0020
	 */
	struct FItemExtraData
	{
	public:
		class UItem*                                               Item;                                                    // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                CustomName;                                              // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.InventoryTable
	 * Size -> 0x0010 (FullSize[0x0018] - InheritedSize[0x0008])
	 */
	struct FInventoryTable : public FTableRowBase
	{
	public:
		class FName                                                ItemName;                                                // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       isItemEquipped;                                          // 0x0010(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YOCY[0x3];                                   // 0x0011(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    StackSize;                                               // 0x0014(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.LocalTextTable
	 * Size -> 0x0020 (FullSize[0x0028] - InheritedSize[0x0008])
	 */
	struct FLocalTextTable : public FTableRowBase
	{
	public:
		class FText                                                LocalText;                                               // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FName                                                Description;                                             // 0x0020(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.QuestItemsStat
	 * Size -> 0x0008
	 */
	struct FQuestItemsStat
	{
	public:
		EItemStatType                                              ItemStat;                                                // 0x0000(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GT9I[0x3];                                   // 0x0001(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ValueMin;                                                // 0x0004(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
	};

	/**
	 * ScriptStruct ProjectAgartha.QuestCondition
	 * Size -> 0x0058
	 */
	struct FQuestCondition
	{
	public:
		class FName                                                Condition;                                               // 0x0000(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                ConditionDisplayable;                                    // 0x0008(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		int32_t                                                    NumMin;                                                  // 0x0020(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumMax;                                                  // 0x0024(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EQuestConditionType                                        Type;                                                    // 0x0028(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       Optional;                                                // 0x0029(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U238[0x6];                                   // 0x002A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FQuestItemsStat>                             ItemStats;                                               // 0x0030(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		TArray<int32_t>                                            RewardIndices;                                           // 0x0040(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    RewardExperience;                                        // 0x0050(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZV18[0x4];                                   // 0x0054(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.QuestTable
	 * Size -> 0x00C8 (FullSize[0x00D0] - InheritedSize[0x0008])
	 */
	struct FQuestTable : public FTableRowBase
	{
	public:
		class FName                                                QuestName;                                               // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FName                                                NPCName;                                                 // 0x0010(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NPCExperience;                                           // 0x0018(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       DoOnce;                                                  // 0x001C(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V87Z[0x3];                                   // 0x001D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                QuestUserName;                                           // 0x0020(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                QuestUserDescription;                                    // 0x0038(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                QuestDialogDescription;                                  // 0x0050(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		class FText                                                QuestDialogFinished;                                     // 0x0068(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		unsigned char                                              QuestVoiceFinished[0x28];                                // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		TArray<struct FQuestCondition>                             ConditionsVariants;                                      // 0x00A8(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic
		int32_t                                                    ConditionsMin;                                           // 0x00B8(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    ConditionsMax;                                           // 0x00BC(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDataTable*                                          RewardInventoryTable;                                    // 0x00C0(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       HideConditionsOnShop;                                    // 0x00C8(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9XPP[0x7];                                   // 0x00C9(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ProjectAgartha.VoiceTable
	 * Size -> 0x0500 (FullSize[0x0508] - InheritedSize[0x0008])
	 */
	struct FVoiceTable : public FTableRowBase
	{
	public:
		class FName                                                Description;                                             // 0x0008(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FText                                                Name;                                                    // 0x0010(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic
		float                                                      Pitch;                                                   // 0x0028(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W1UB[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              VoiceWaiting[0x28];                                      // 0x0030(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceOverwatch[0x28];                                    // 0x0058(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceExploring[0x28];                                    // 0x0080(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceChasing[0x28];                                      // 0x00A8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceRetreating[0x28];                                   // 0x00D0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceFollowing[0x28];                                    // 0x00F8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceFighting[0x28];                                     // 0x0120(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceLooting[0x28];                                      // 0x0148(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceTargeting[0x28];                                    // 0x0170(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceHelping[0x28];                                      // 0x0198(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceFlanking[0x28];                                     // 0x01C0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceSwitchPrimary[0x28];                                // 0x01E8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceSwitchSecondary[0x28];                              // 0x0210(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceOnDamage[0x28];                                     // 0x0238(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceOnHeal[0x28];                                       // 0x0260(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceOnDeath[0x28];                                      // 0x0288(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              VoiceOnVictory[0x28];                                    // 0x02B0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortLaughLong[0x28];                                   // 0x02D8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortLaughShort[0x28];                                  // 0x0300(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortExertLight[0x28];                                  // 0x0328(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortExertMedium[0x28];                                 // 0x0350(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortExertHeavy[0x28];                                  // 0x0378(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortStaminaUsed[0x28];                                 // 0x03A0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortStaminaEmpty[0x28];                                // 0x03C8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortPainMinor[0x28];                                   // 0x03F0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortPainMajor[0x28];                                   // 0x0418(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortDeathNear[0x28];                                   // 0x0440(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortDeathScream[0x28];                                 // 0x0468(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortDeathGasp[0x28];                                   // 0x0490(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortConfusion[0x28];                                   // 0x04B8(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
		unsigned char                                              EffortWarcry[0x28];                                      // 0x04E0(0x0028) UNKNOWN PROPERTY: SoftObjectProperty
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
