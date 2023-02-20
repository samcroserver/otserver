/**
 * Canary - A free and open-source MMORPG server emulator
 * Copyright (©) 2019-2022 OpenTibiaBR <opentibiabr@outlook.com>
 * Repository: https://github.com/opentibiabr/canary
 * License: https://github.com/opentibiabr/canary/blob/main/LICENSE
 * Contributors: https://github.com/opentibiabr/canary/graphs/contributors
 * Website: https://docs.opentibiabr.org/
 */

#ifndef SRC_UTILS_UTILS_DEFINITIONS_HPP_
#define SRC_UTILS_UTILS_DEFINITIONS_HPP_

// Enums
enum Icons_t {
	ICON_POISON = 1 << 0,
	ICON_BURN = 1 << 1,
	ICON_ENERGY = 1 << 2,
	ICON_DRUNK = 1 << 3,
	ICON_MANASHIELD = 1 << 4,
	ICON_PARALYZE = 1 << 5,
	ICON_HASTE = 1 << 6,
	ICON_SWORDS = 1 << 7,
	ICON_DROWNING = 1 << 8,
	ICON_FREEZING = 1 << 9,
	ICON_DAZZLED = 1 << 10,
	ICON_CURSED = 1 << 11,
	ICON_PARTY_BUFF = 1 << 12,
	ICON_REDSWORDS = 1 << 13,
	ICON_PIGEON = 1 << 14,
	ICON_BLEEDING = 1 << 15,
	ICON_LESSERHEX = 1 << 16,
	ICON_INTENSEHEX = 1 << 17,
	ICON_GREATERHEX = 1 << 18,
	ICON_ROOTED = 1 << 19,
	ICON_FEARED = 1 << 20,
	ICON_GOSHNAR1 = 1 << 21,
	ICON_GOSHNAR2 = 1 << 22,
	ICON_GOSHNAR3 = 1 << 23,
	ICON_GOSHNAR4 = 1 << 24,
	ICON_GOSHNAR5 = 1 << 25,
	ICON_NEWMANASHIELD = 1 << 26,
};

enum WieldInfo_t {
	WIELDINFO_NONE = 0,
	WIELDINFO_LEVEL = 1 << 0,
	WIELDINFO_MAGLV = 1 << 1,
	WIELDINFO_VOCREQ = 1 << 2,
	WIELDINFO_PREMIUM = 1 << 3,
};

enum CreatureIcon_t {
	CREATUREICON_NONE = 0,
	CREATUREICON_HIGHERRECEIVEDDAMAGE = 1,
	CREATUREICON_LOWERDEALTDAMAGE = 2,
	CREATUREICON_TURNEDMELEE = 3,
	CREATUREICON_GREENBALL = 4,
	CREATUREICON_REDBALL = 5,
	CREATUREICON_GREENSHIELD = 6,
	CREATUREICON_YELLOWSHIELD = 7,
	CREATUREICON_BLUESHIELD = 8,
	CREATUREICON_PURPLESHIELD = 9,
	CREATUREICON_REDSHIELD = 10,
	CREATUREICON_PIGEON = 11,
	CREATUREICON_PURPLESTAR = 12,
	CREATUREICON_POISONDROP = 13,
	CREATUREICON_WATERDROP = 14,
	CREATUREICON_FIREDROP = 15,
	CREATUREICON_ICEFLOWER = 16,
	CREATUREICON_ARROWUP = 17,
	CREATUREICON_ARROWDOWN = 18,
	CREATUREICON_EXCLAMATIONMARK = 19,
	CREATUREICON_QUESTIONMARK = 20,
	CREATUREICON_CANCELMARK = 21
};

enum ThreadState {
	THREAD_STATE_RUNNING,
	THREAD_STATE_CLOSING,
	THREAD_STATE_TERMINATED,
};

enum SpawnType_t {
	RESPAWN_IN_ALL = 0,
	RESPAWN_IN_DAY = 1,
	RESPAWN_IN_NIGHT = 2,
	RESPAWN_IN_DAY_CAVE = 3,
	RESPAWN_IN_NIGHT_CAVE = 4,
};

enum Cipbia_Elementals_t : uint8_t {
	CIPBIA_ELEMENTAL_PHYSICAL = 0,
	CIPBIA_ELEMENTAL_FIRE = 1,
	CIPBIA_ELEMENTAL_EARTH = 2,
	CIPBIA_ELEMENTAL_ENERGY = 3,
	CIPBIA_ELEMENTAL_ICE = 4,
	CIPBIA_ELEMENTAL_HOLY = 5,
	CIPBIA_ELEMENTAL_DEATH = 6,
	CIPBIA_ELEMENTAL_HEALING = 7,
	CIPBIA_ELEMENTAL_DROWN = 8,
	CIPBIA_ELEMENTAL_LIFEDRAIN = 9,
	CIPBIA_ELEMENTAL_UNDEFINED = 10
};

enum MagicEffectClasses : uint8_t {
	CONST_ME_NONE,

	CONST_ME_DRAWBLOOD = 1,
	CONST_ME_LOSEENERGY = 2,
	CONST_ME_POFF = 3,
	CONST_ME_BLOCKHIT = 4,
	CONST_ME_EXPLOSIONAREA = 5,
	CONST_ME_EXPLOSIONHIT = 6,
	CONST_ME_FIREAREA = 7,
	CONST_ME_YELLOW_RINGS = 8,
	CONST_ME_GREEN_RINGS = 9,
	CONST_ME_HITAREA = 10,
	CONST_ME_TELEPORT = 11,
	CONST_ME_ENERGYHIT = 12,
	CONST_ME_MAGIC_BLUE = 13,
	CONST_ME_MAGIC_RED = 14,
	CONST_ME_MAGIC_GREEN = 15,
	CONST_ME_HITBYFIRE = 16,
	CONST_ME_HITBYPOISON = 17,
	CONST_ME_MORTAREA = 18,
	CONST_ME_SOUND_GREEN = 19,
	CONST_ME_SOUND_RED = 20,
	CONST_ME_POISONAREA = 21,
	CONST_ME_SOUND_YELLOW = 22,
	CONST_ME_SOUND_PURPLE = 23,
	CONST_ME_SOUND_BLUE = 24,
	CONST_ME_SOUND_WHITE = 25,
	CONST_ME_BUBBLES = 26,
	CONST_ME_CRAPS = 27,
	CONST_ME_GIFT_WRAPS = 28,
	CONST_ME_FIREWORK_YELLOW = 29,
	CONST_ME_FIREWORK_RED = 30,
	CONST_ME_FIREWORK_BLUE = 31,
	CONST_ME_STUN = 32,
	CONST_ME_SLEEP = 33,
	CONST_ME_WATERCREATURE = 34,
	CONST_ME_GROUNDSHAKER = 35,
	CONST_ME_HEARTS = 36,
	CONST_ME_FIREATTACK = 37,
	CONST_ME_ENERGYAREA = 38,
	CONST_ME_SMALLCLOUDS = 39,
	CONST_ME_HOLYDAMAGE = 40,
	CONST_ME_BIGCLOUDS = 41,
	CONST_ME_ICEAREA = 42,
	CONST_ME_ICETORNADO = 43,
	CONST_ME_ICEATTACK = 44,
	CONST_ME_STONES = 45,
	CONST_ME_SMALLPLANTS = 46,
	CONST_ME_CARNIPHILA = 47,
	CONST_ME_PURPLEENERGY = 48,
	CONST_ME_YELLOWENERGY = 49,
	CONST_ME_HOLYAREA = 50,
	CONST_ME_BIGPLANTS = 51,
	CONST_ME_CAKE = 52,
	CONST_ME_GIANTICE = 53,
	CONST_ME_WATERSPLASH = 54,
	CONST_ME_PLANTATTACK = 55,
	CONST_ME_TUTORIALARROW = 56,
	CONST_ME_TUTORIALSQUARE = 57,
	CONST_ME_MIRRORHORIZONTAL = 58,
	CONST_ME_MIRRORVERTICAL = 59,
	CONST_ME_SKULLHORIZONTAL = 60,
	CONST_ME_SKULLVERTICAL = 61,
	CONST_ME_ASSASSIN = 62,
	CONST_ME_STEPSHORIZONTAL = 63,
	CONST_ME_BLOODYSTEPS = 64,
	CONST_ME_STEPSVERTICAL = 65,
	CONST_ME_YALAHARIGHOST = 66,
	CONST_ME_BATS = 67,
	CONST_ME_SMOKE = 68,
	CONST_ME_INSECTS = 69,
	CONST_ME_DRAGONHEAD = 70,
	CONST_ME_ORCSHAMAN = 71,
	CONST_ME_ORCSHAMAN_FIRE = 72,
	CONST_ME_THUNDER = 73,
	CONST_ME_FERUMBRAS = 74,
	CONST_ME_CONFETTI_HORIZONTAL = 75,
	CONST_ME_CONFETTI_VERTICAL = 76,
	// 77-157 are empty
	CONST_ME_BLACKSMOKE = 158,
	// 159-166 are empty
	CONST_ME_REDSMOKE = 167,
	CONST_ME_YELLOWSMOKE = 168,
	CONST_ME_GREENSMOKE = 169,
	CONST_ME_PURPLESMOKE = 170,
	CONST_ME_EARLY_THUNDER = 171,
	CONST_ME_RAGIAZ_BONECAPSULE = 172,
	CONST_ME_CRITICAL_DAMAGE = 173,
	// 174 is empty
	CONST_ME_PLUNGING_FISH = 175,
	CONST_ME_BLUE_ENERGY_SPARK = 176,
	CONST_ME_ORANGE_ENERGY_SPARK = 177,
	CONST_ME_GREEN_ENERGY_SPARK = 178,
	CONST_ME_PINK_ENERGY_SPARK = 179,
	CONST_ME_WHITE_ENERGY_SPARK = 180,
	CONST_ME_YELLOW_ENERGY_SPARK = 181,
	CONST_ME_MAGIC_POWDER = 182,
	// 183 is empty
	CONST_ME_PIXIE_EXPLOSION = 184,
	CONST_ME_PIXIE_COMING = 185,
	CONST_ME_PIXIE_GOING = 186,
	// 187 is empty
	CONST_ME_STORM = 188,
	CONST_ME_STONE_STORM = 189,
	// 190 is empty
	CONST_ME_BLUE_GHOST = 191,
	// 192 is empty
	CONST_ME_PINK_VORTEX = 193,
	CONST_ME_TREASURE_MAP = 194,
	CONST_ME_PINK_BEAM = 195,
	CONST_ME_GREEN_FIREWORKS = 196,
	CONST_ME_ORANGE_FIREWORKS = 197,
	CONST_ME_PINK_FIREWORKS = 198,
	CONST_ME_BLUE_FIREWORKS = 199,
	// 200 is empty
	CONST_ME_SUPREME_CUBE = 201,
	CONST_ME_BLACK_BLOOD = 202,
	CONST_ME_PRISMATIC_SPARK = 203,
	CONST_ME_THAIAN = 204,
	CONST_ME_THAIAN_GHOST = 205,
	CONST_ME_GHOST_SMOKE = 206,
	// 207 is empty
	CONST_ME_WATER_BLOCK_FLOATING = 208,
	CONST_ME_WATER_BLOCK = 209,
	CONST_ME_ROOTS = 210,
	// 211-212 is empty
	CONST_ME_GHOSTLY_SCRATCH = 213,
	CONST_ME_GHOSTLY_BITE = 214,
	CONST_ME_BIG_SCRATCH = 215,
	CONST_ME_SLASH = 216,
	CONST_ME_BITE = 217,
	// 218 empty or debug
	CONST_ME_CHIVALRIOUS_CHALLENGE = 219,
	CONST_ME_DIVINE_DAZZLE = 220,
	CONST_ME_ELECTRICALSPARK = 221,
	CONST_ME_PURPLETELEPORT = 222,
	CONST_ME_REDTELEPORT = 223,
	CONST_ME_ORANGETELEPORT = 224,
	CONST_ME_GREYTELEPORT = 225,
	CONST_ME_LIGHTBLUETELEPORT = 226,
	// 227-229 are empty
	CONST_ME_FATAL = 230,
	CONST_ME_DODGE = 231,
	CONST_ME_HOURGLASS = 232,
	// 233-234 are empty
	CONST_ME_FERUMBRAS_1 = 235,
	CONST_ME_GAZHARAGOTH = 236,
	CONST_ME_MAD_MAGE = 237,
	CONST_ME_HORESTIS = 238,
	CONST_ME_DEVOVORGA = 239,
	CONST_ME_FERUMBRAS_2 = 240,

	CONST_ME_LAST = CONST_ME_DIVINE_DAZZLE,
};

enum ShootType_t : uint8_t {
	CONST_ANI_NONE,

	CONST_ANI_SPEAR = 1,
	CONST_ANI_BOLT = 2,
	CONST_ANI_ARROW = 3,
	CONST_ANI_FIRE = 4,
	CONST_ANI_ENERGY = 5,
	CONST_ANI_POISONARROW = 6,
	CONST_ANI_BURSTARROW = 7,
	CONST_ANI_THROWINGSTAR = 8,
	CONST_ANI_THROWINGKNIFE = 9,
	CONST_ANI_SMALLSTONE = 10,
	CONST_ANI_DEATH = 11,
	CONST_ANI_LARGEROCK = 12,
	CONST_ANI_SNOWBALL = 13,
	CONST_ANI_POWERBOLT = 14,
	CONST_ANI_POISON = 15,
	CONST_ANI_INFERNALBOLT = 16,
	CONST_ANI_HUNTINGSPEAR = 17,
	CONST_ANI_ENCHANTEDSPEAR = 18,
	CONST_ANI_REDSTAR = 19,
	CONST_ANI_GREENSTAR = 20,
	CONST_ANI_ROYALSPEAR = 21,
	CONST_ANI_SNIPERARROW = 22,
	CONST_ANI_ONYXARROW = 23,
	CONST_ANI_PIERCINGBOLT = 24,
	CONST_ANI_WHIRLWINDSWORD = 25,
	CONST_ANI_WHIRLWINDAXE = 26,
	CONST_ANI_WHIRLWINDCLUB = 27,
	CONST_ANI_ETHEREALSPEAR = 28,
	CONST_ANI_ICE = 29,
	CONST_ANI_EARTH = 30,
	CONST_ANI_HOLY = 31,
	CONST_ANI_SUDDENDEATH = 32,
	CONST_ANI_FLASHARROW = 33,
	CONST_ANI_FLAMMINGARROW = 34,
	CONST_ANI_SHIVERARROW = 35,
	CONST_ANI_ENERGYBALL = 36,
	CONST_ANI_SMALLICE = 37,
	CONST_ANI_SMALLHOLY = 38,
	CONST_ANI_SMALLEARTH = 39,
	CONST_ANI_EARTHARROW = 40,
	CONST_ANI_EXPLOSION = 41,
	CONST_ANI_CAKE = 42,

	CONST_ANI_TARSALARROW = 44,
	CONST_ANI_VORTEXBOLT = 45,

	CONST_ANI_PRISMATICBOLT = 48,
	CONST_ANI_CRYSTALLINEARROW = 49,
	CONST_ANI_DRILLBOLT = 50,
	CONST_ANI_ENVENOMEDARROW = 51,

	CONST_ANI_GLOOTHSPEAR = 53,
	CONST_ANI_SIMPLEARROW = 54,

	CONST_ANI_LEAFSTAR = 56,
	CONST_ANI_DIAMONDARROW = 57,
	CONST_ANI_SPECTRALBOLT = 58,
	CONST_ANI_ROYALSTAR = 59,

	CONST_ANI_LAST = CONST_ANI_ROYALSTAR,

	// for internal use, don't send to client
	CONST_ANI_WEAPONTYPE = 0xFE, // 254
};

enum SpeakClasses : uint8_t {
	TALKTYPE_SAY = 1,
	TALKTYPE_WHISPER = 2,
	TALKTYPE_YELL = 3,
	TALKTYPE_PRIVATE_FROM = 4,
	TALKTYPE_PRIVATE_TO = 5,
	TALKTYPE_CHANNEL_MANAGER = 6,
	TALKTYPE_CHANNEL_Y = 7,
	TALKTYPE_CHANNEL_O = 8,
	TALKTYPE_SPELL_USE = 9,
	TALKTYPE_PRIVATE_NP = 10,
	TALKTYPE_NPC_UNKOWN = 11, /* no effect (?)*/
	TALKTYPE_PRIVATE_PN = 12,
	TALKTYPE_BROADCAST = 13,
	TALKTYPE_CHANNEL_R1 = 14, // red - #c text
	TALKTYPE_PRIVATE_RED_FROM = 15, //@name@text
	TALKTYPE_PRIVATE_RED_TO = 16, //@name@text
	TALKTYPE_MONSTER_SAY = 36,
	TALKTYPE_MONSTER_YELL = 37,

	TALKTYPE_CHANNEL_R2 = 0xFF, // #d
};

enum MessageClasses : uint8_t {
	MESSAGE_NONE = 0, /* None */

	MESSAGE_GAMEMASTER_CONSOLE = 13,
	/* Red message in the console*/ /* TALKTYPE_BROADCAST */

	MESSAGE_LOGIN = 17, /* White message at the bottom of the game window and in the console*/
	MESSAGE_ADMINISTRADOR = 18, /* Red message in game window and in the console*/
	MESSAGE_EVENT_ADVANCE = 19, /* White message in game window and in the console*/
	MESSAGE_GAME_HIGHLIGHT = 20, /* Red message in game window and in the console*/
	MESSAGE_FAILURE = 21, /* White message at the bottom of the game window"*/
	MESSAGE_LOOK = 22, /* Green message in game window and in the console*/
	MESSAGE_DAMAGE_DEALT = 23, /* White message on the console*/
	MESSAGE_DAMAGE_RECEIVED = 24, /* White message on the console*/
	MESSAGE_HEALED = 25, /* White message on the console*/
	MESSAGE_EXPERIENCE = 26, /* White message on the console*/
	MESSAGE_DAMAGE_OTHERS = 27, /* White message on the console*/
	MESSAGE_HEALED_OTHERS = 28, /* White message on the console*/
	MESSAGE_EXPERIENCE_OTHERS = 29, /* White message on the console*/
	MESSAGE_STATUS = 30, /* White message at the bottom of the game window and in the console*/
	MESSAGE_LOOT = 31, /* White message on the game window and in the console*/
	MESSAGE_TRADE = 32, /* Green message in game window and in the console*/
	MESSAGE_GUILD = 33, /* White message in channel (+ channelId)*/
	MESSAGE_PARTY_MANAGEMENT = 34, /* Green message in game window and in the console*/
	MESSAGE_PARTY = 35, /* White message on the console*/

	MESSAGE_REPORT = 38, /* White message on the game window and in the console*/
	MESSAGE_HOTKEY_PRESSED = 39, /* Green message in game window and in the console*/
	MESSAGE_TUTORIAL_HINT = 40, /* no effect (?)*/
	MESSAGE_THANK_YOU = 41, /* no effect (?)*/
	MESSAGE_MARKET = 42, /* Popout a modal window with the message and a 'ok' button*/
	MESSAGE_MANA = 43, /* no effect (?)*/
	MESSAGE_BEYOND_LAST = 44, /* White message on the game window and in the console*/
	MESSAGE_ATTENTION = 48, /* White message on the console*/
	MESSAGE_BOOSTED_CREATURE = 49, /* White message on the game window and in the console*/
	MESSAGE_OFFLINE_TRAINING = 50, /* White message on the game window and in the console*/
	MESSAGE_TRANSACTION = 51, /* White message on the game window and in the console*/
	MESSAGE_POTION = 52, /* Orange creature say*/
};

enum Fluids_t : uint8_t {
	FLUID_NONE = 0, /* Blue */
	FLUID_WATER = 1, /* Blue */
	FLUID_WINE = 2, /* Purple */
	FLUID_BEER = 3, /* Brown */
	FLUID_MUD = 4, /* Brown */
	FLUID_BLOOD = 5, /* Red */
	FLUID_SLIME = 6, /* Green */
	FLUID_OIL = 7, /* Brown */
	FLUID_URINE = 8, /* Yellow */
	FLUID_MILK = 9, /* White */
	FLUID_MANA = 10, /* Purple */
	FLUID_LIFE = 11, /* Red */
	FLUID_LEMONADE = 12, /* Yellow */
	FLUID_RUM = 13, /* Brown */
	FLUID_FRUITJUICE = 14, /* Yellow */
	FLUID_COCONUTMILK = 15, /* White */
	FLUID_MEAD = 16, /* Brown */
	FLUID_TEA = 17, /* Brown */
	FLUID_INK = 18 /* Black */
	// 12.85 last fluid is 18, 19+ is a loop from 0 to 18 over and over again
};

enum SquareColor_t : uint8_t {
	SQ_COLOR_BLACK = 0,
};

enum TextColor_t : uint8_t {
	TEXTCOLOR_BLUE = 5,
	TEXTCOLOR_LIGHTGREEN = 30,
	TEXTCOLOR_LIGHTBLUE = 35,
	TEXTCOLOR_MAYABLUE = 95,
	TEXTCOLOR_DARKRED = 108,
	TEXTCOLOR_LIGHTGREY = 129,
	TEXTCOLOR_SKYBLUE = 143,
	TEXTCOLOR_PURPLE = 154,
	TEXTCOLOR_ELECTRICPURPLE = 155,
	TEXTCOLOR_RED = 180,
	TEXTCOLOR_PASTELRED = 194,
	TEXTCOLOR_ORANGE = 198,
	TEXTCOLOR_YELLOW = 210,
	TEXTCOLOR_WHITE_EXP = 215,
	TEXTCOLOR_NONE = 255,
};

enum WeaponType_t : uint8_t {
	WEAPON_NONE,
	WEAPON_SWORD,
	WEAPON_CLUB,
	WEAPON_AXE,
	WEAPON_SHIELD,
	WEAPON_DISTANCE,
	WEAPON_WAND,
	WEAPON_AMMO,
};

enum Ammo_t : uint8_t {
	AMMO_NONE,
	AMMO_BOLT,
	AMMO_ARROW,
	AMMO_SPEAR,
	AMMO_THROWINGSTAR,
	AMMO_THROWINGKNIFE,
	AMMO_STONE,
	AMMO_SNOWBALL,
};

enum WeaponAction_t : uint8_t {
	WEAPONACTION_NONE,
	WEAPONACTION_REMOVECOUNT,
	WEAPONACTION_REMOVECHARGE,
	WEAPONACTION_MOVE,
};

enum PartyAnalyzerAction_t : uint8_t {
	PARTYANALYZERACTION_RESET = 0,
	PARTYANALYZERACTION_PRICETYPE = 1,
	PARTYANALYZERACTION_PRICEVALUE = 2,
};

enum Skulls_t : uint8_t {
	SKULL_NONE = 0,
	SKULL_YELLOW = 1,
	SKULL_GREEN = 2,
	SKULL_WHITE = 3,
	SKULL_RED = 4,
	SKULL_BLACK = 5,
	SKULL_ORANGE = 6,
};

enum PartyShields_t : uint8_t {
	SHIELD_NONE = 0,
	SHIELD_WHITEYELLOW = 1,
	SHIELD_WHITEBLUE = 2,
	SHIELD_BLUE = 3,
	SHIELD_YELLOW = 4,
	SHIELD_BLUE_SHAREDEXP = 5,
	SHIELD_YELLOW_SHAREDEXP = 6,
	SHIELD_BLUE_NOSHAREDEXP_BLINK = 7,
	SHIELD_YELLOW_NOSHAREDEXP_BLINK = 8,
	SHIELD_BLUE_NOSHAREDEXP = 9,
	SHIELD_YELLOW_NOSHAREDEXP = 10,
	SHIELD_GRAY = 11,
};

enum GuildEmblems_t : uint8_t {
	GUILDEMBLEM_NONE = 0,
	GUILDEMBLEM_ALLY = 1,
	GUILDEMBLEM_ENEMY = 2,
	GUILDEMBLEM_NEUTRAL = 3,
	GUILDEMBLEM_MEMBER = 4,
	GUILDEMBLEM_OTHER = 5,
};

enum NameEval_t : uint8_t {
	VALID,
	INVALID,
	INVALID_LENGTH,
	INVALID_TOKEN_LENGTH,
	INVALID_FORBIDDEN,
	INVALID_CHARACTER
};

enum ItemID_t : uint16_t {
	ITEM_BROWSEFIELD = 470, // for internal use
	ITEM_SUPPLY_STASH_INDEX = 1, // for internal use
	ITEM_DEPOT_NULL = 22796, // for internal use - Actual Item ID: 168
	ITEM_DECORATION_KIT = 23398, // For internal use (wrap item)
	ITEM_DOCUMENT_RO = 2834, // Read-only

	ITEM_GOLD_POUCH = 23721,

	ITEM_DEPOT_I = 22797,
	ITEM_DEPOT_II = 22798,
	ITEM_DEPOT_III = 22799,
	ITEM_DEPOT_IV = 22800,
	ITEM_DEPOT_V = 22801,
	ITEM_DEPOT_VI = 22802,
	ITEM_DEPOT_VII = 22803,
	ITEM_DEPOT_VIII = 22804,
	ITEM_DEPOT_IX = 22805,
	ITEM_DEPOT_X = 22806,
	ITEM_DEPOT_XI = 22807,
	ITEM_DEPOT_XII = 22808,
	ITEM_DEPOT_XIII = 22809,
	ITEM_DEPOT_XIV = 22810,
	ITEM_DEPOT_XV = 22811,
	ITEM_DEPOT_XVI = 22812,
	ITEM_DEPOT_XVII = 22813,
	ITEM_DEPOT_XVIII = 31915,
	ITEM_DEPOT_XIX = 39723,
	ITEM_DEPOT_XX = 39724,

	ITEM_FIREFIELD_PVP_FULL = 2118,
	ITEM_FIREFIELD_PVP_MEDIUM = 2119,
	ITEM_FIREFIELD_PVP_SMALL = 2120,
	ITEM_FIREFIELD_PERSISTENT_FULL = 2123,
	ITEM_FIREFIELD_PERSISTENT_MEDIUM = 2124,
	ITEM_FIREFIELD_PERSISTENT_SMALL = 2125,
	ITEM_FIREFIELD_NOPVP = 21465,

	ITEM_POISONFIELD_PVP = 105,
	ITEM_POISONFIELD_PERSISTENT = 2121,
	ITEM_POISONFIELD_NOPVP = 2134,

	ITEM_ENERGYFIELD_PVP = 2122,
	ITEM_ENERGYFIELD_PERSISTENT = 2126,
	ITEM_ENERGYFIELD_NOPVP = 2135,

	ITEM_MAGICWALL = 2128,
	ITEM_MAGICWALL_PERSISTENT = 2129,
	ITEM_MAGICWALL_SAFE = 10181,

	ITEM_WILDGROWTH = 2130,
	ITEM_WILDGROWTH_PERSISTENT = 3635,
	ITEM_WILDGROWTH_SAFE = 10182,

	ITEM_BAG = 2853,
	ITEM_SHOPPING_BAG = 21411,

	ITEM_GOLD_COIN = 3031,
	ITEM_PLATINUM_COIN = 3035,
	ITEM_CRYSTAL_COIN = 3043,
	ITEM_STORE_COIN = 22118,

	ITEM_MINOR_CRYSTALLINE_TOKENS = 16128,
	ITEM_MAJOR_CRYSTALLINE_TOKENS = 16129,

	ITEM_REWARD_CONTAINER = 19202,
	ITEM_REWARD_CHEST = 19250,

	ITEM_DEPOT = 3502,
	ITEM_LOCKER = 3497,
	ITEM_INBOX = 12902,
	ITEM_MARKET = 12903,
	ITEM_STORE_INBOX = 23396,
	ITEM_SUPPLY_STASH = 28750,

	ITEM_MALE_CORPSE = 4240,
	ITEM_FEMALE_CORPSE = 4247,

	ITEM_FULLSPLASH = 2886,
	ITEM_SMALLSPLASH = 2889,

	ITEM_PARCEL = 3503,
	ITEM_PARCEL_STAMPED = 3504,
	ITEM_LETTER = 3505,
	ITEM_LETTER_STAMPED = 3506,
	ITEM_LABEL = 3507,

	ITEM_AMULETOFLOSS = 3057,

	ITEM_EXERCISE_START = 28552,
	ITEM_EXERCISE_END = 28557,

	/** Casks and Kegs **/
	ITEM_HEALTH_CASK_START = 25879,
	ITEM_HEALTH_CASK_END = 25883,

	ITEM_MANA_CASK_START = 25889,
	ITEM_MANA_CASK_END = 25893,

	ITEM_SPIRIT_CASK_START = 25899,
	ITEM_SPIRIT_CASK_END = 25902,

	ITEM_KEG_START = 25903, // kegs ids are contiguous in item.otb
	ITEM_KEG_END = 25914,

	// Walkable sea
	ITEM_WALKABLE_SEA_START = 629,
	ITEM_WALKABLE_SEA_END = 634,

	ITEM_STONE_SKIN_AMULET = 3081,

	ITEM_OLD_DIAMOND_ARROW = 25757,
	ITEM_DIAMOND_ARROW = 35901,

	ITEM_FILLED_BATH_TUBE = 26077,

	ITEM_SWORD_RING = 3091,
	ITEM_SWORD_RING_ACTIVATED = 3094,

	ITEM_CLUB_RING = 3093,
	ITEM_CLUB_RING_ACTIVATED = 3096,

	ITEM_DWARVEN_RING = 3097,
	ITEM_DWARVEN_RING_ACTIVATED = 3099,

	ITEM_RING_HEALING = 3098,
	ITEM_RING_HEALING_ACTIVATED = 3100,

	ITEM_STEALTH_RING = 3049,
	ITEM_STEALTH_RING_ACTIVATED = 3086,

	ITEM_TIME_RING = 3053,
	ITEM_TIME_RING_ACTIVATED = 3090,

	ITEM_PAIR_SOFT_BOOTS = 6529,
	ITEM_PAIR_SOFT_BOOTS_ACTIVATED = 3549,

	ITEM_DEATH_RING = 6299,
	ITEM_DEATH_RING_ACTIVATED = 6300,

	ITEM_PRISMATIC_RING = 16114,
	ITEM_PRISMATIC_RING_ACTIVATED = 16264,

	HIRELING_LAMP = 29432,

	ITEM_FORGE_SLIVER = 37109,
	ITEM_FORGE_CORE = 37110,
	ITEM_EXALTATION_CHEST = 37561,
	ITEM_PODIUM_OF_VIGOUR = 38707,

	ITEM_NONE = 0
};

// A map which contains items that, when on creating, should be transformed to the default type.
const phmap::flat_hash_map<ItemID_t, ItemID_t> ItemTransformationMap = {
	{ ITEM_SWORD_RING_ACTIVATED, ITEM_SWORD_RING },
	{ ITEM_CLUB_RING_ACTIVATED, ITEM_CLUB_RING },
	{ ITEM_DWARVEN_RING_ACTIVATED, ITEM_DWARVEN_RING },
	{ ITEM_RING_HEALING_ACTIVATED, ITEM_RING_HEALING },
	{ ITEM_STEALTH_RING_ACTIVATED, ITEM_STEALTH_RING },
	{ ITEM_TIME_RING_ACTIVATED, ITEM_TIME_RING },
	{ ITEM_PAIR_SOFT_BOOTS_ACTIVATED, ITEM_PAIR_SOFT_BOOTS },
	{ ITEM_DEATH_RING_ACTIVATED, ITEM_DEATH_RING },
	{ ITEM_PRISMATIC_RING_ACTIVATED, ITEM_PRISMATIC_RING },
	{ ITEM_OLD_DIAMOND_ARROW, ITEM_DIAMOND_ARROW },
};

enum class PlayerFlags_t : uint8_t {
	CannotUseCombat,
	CannotAttackPlayer,
	CannotAttackMonster,
	CannotBeAttacked,
	CanConvinceAll,
	CanSummonAll,
	CanIllusionAll,
	CanSenseInvisibility,
	IgnoredByMonsters,
	NotGainInFight,
	HasInfiniteMana,
	HasInfiniteSoul,
	HasNoExhaustion,
	CannotUseSpells,
	CannotPickupItem,
	CanAlwaysLogin,
	CanBroadcast,
	CanEditHouses,
	CannotBeBanned,
	CannotBePushed,
	HasInfiniteCapacity,
	CanPushAllCreatures,
	CanTalkRedPrivate,
	CanTalkRedChannel,
	TalkOrangeHelpChannel,
	NotGainExperience,
	NotGainMana,
	NotGainHealth,
	NotGainSkill,
	SetMaxSpeed,
	SpecialVIP,
	NotGenerateLoot,
	CanTalkRedChannelAnonymous,
	IgnoreProtectionZone,
	IgnoreSpellCheck,
	IgnoreWeaponCheck,
	CannotBeMuted,
	IsAlwaysPremium,
	CanMapClickTeleport,
	IgnoredByNpcs,

	// Must always be the last
	FlagLast
};

enum Blessings_t : uint8_t {
	TWIST_OF_FATE = 1,
	WISDOM_OF_SOLITUDE = 2,
	SPARK_OF_THE_PHOENIX = 3,
	FIRE_OF_THE_SUNS = 4,
	SPIRITUAL_SHIELDING = 5,
	EMBRACE_OF_TIBIA = 6,
	BLOOD_OF_THE_MOUNTAIN = 7,
	HEARTH_OF_THE_MOUNTAIN = 8,
};

const phmap::flat_hash_map<Blessings_t, std::string> BlessingNames = {
	{ TWIST_OF_FATE, "Twist of Fate" },
	{ WISDOM_OF_SOLITUDE, "The Wisdom of Solitude" },
	{ SPARK_OF_THE_PHOENIX, "The Spark of the Phoenix" },
	{ FIRE_OF_THE_SUNS, "The Fire of the Suns" },
	{ SPIRITUAL_SHIELDING, "The Spiritual Shielding" },
	{ EMBRACE_OF_TIBIA, "The Embrace of Tibia" },
	{ BLOOD_OF_THE_MOUNTAIN, "Blood of the Mountain" },
	{ HEARTH_OF_THE_MOUNTAIN, "Heart of the Mountain" },
};

#endif // SRC_UTILS_UTILS_DEFINITIONS_HPP_