#define LEVEL_UP_MOVE(lvl, move) ((lvl << 9) | move)

static const u16 sBulbasaurLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(4, MOVE_GROWL),          LEVEL_UP_MOVE(7, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(10, MOVE_VINE_WHIP),  LEVEL_UP_MOVE(15, MOVE_POISON_POWDER), LEVEL_UP_MOVE(15, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(20, MOVE_RAZOR_LEAF), LEVEL_UP_MOVE(25, MOVE_SWEET_SCENT),   LEVEL_UP_MOVE(32, MOVE_GROWTH),
    LEVEL_UP_MOVE(39, MOVE_SYNTHESIS),  LEVEL_UP_MOVE(46, MOVE_SOLAR_BEAM),    LEVEL_UP_END
};

static const u16 sIvysaurLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),         LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_LEECH_SEED),     LEVEL_UP_MOVE(4, MOVE_GROWL),
    LEVEL_UP_MOVE(7, MOVE_LEECH_SEED),     LEVEL_UP_MOVE(10, MOVE_VINE_WHIP),
    LEVEL_UP_MOVE(15, MOVE_POISON_POWDER), LEVEL_UP_MOVE(15, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(22, MOVE_RAZOR_LEAF),    LEVEL_UP_MOVE(29, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(38, MOVE_GROWTH),        LEVEL_UP_MOVE(47, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(56, MOVE_SOLAR_BEAM),    LEVEL_UP_END
};

static const u16 sVenusaurLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(1, MOVE_GROWL),          LEVEL_UP_MOVE(1, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(1, MOVE_VINE_WHIP),   LEVEL_UP_MOVE(4, MOVE_GROWL),          LEVEL_UP_MOVE(7, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(10, MOVE_VINE_WHIP),  LEVEL_UP_MOVE(15, MOVE_POISON_POWDER), LEVEL_UP_MOVE(15, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(22, MOVE_RAZOR_LEAF), LEVEL_UP_MOVE(29, MOVE_SWEET_SCENT),   LEVEL_UP_MOVE(41, MOVE_GROWTH),
    LEVEL_UP_MOVE(53, MOVE_SYNTHESIS),  LEVEL_UP_MOVE(65, MOVE_SOLAR_BEAM),    LEVEL_UP_END
};

static const u16 sCharmanderLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                  LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                  LEVEL_UP_MOVE(7, MOVE_EMBER),
                                                  LEVEL_UP_MOVE(13, MOVE_SMOKESCREEN),
                                                  LEVEL_UP_MOVE(19, MOVE_RAGE),
                                                  LEVEL_UP_MOVE(25, MOVE_SCARY_FACE),
                                                  LEVEL_UP_MOVE(31, MOVE_FLAMETHROWER),
                                                  LEVEL_UP_MOVE(37, MOVE_SLASH),
                                                  LEVEL_UP_MOVE(43, MOVE_DRAGON_RAGE),
                                                  LEVEL_UP_MOVE(49, MOVE_FIRE_SPIN),
                                                  LEVEL_UP_END };

static const u16 sCharmeleonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),      LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(7, MOVE_EMBER),        LEVEL_UP_MOVE(13, MOVE_SMOKESCREEN),  LEVEL_UP_MOVE(20, MOVE_RAGE),
    LEVEL_UP_MOVE(27, MOVE_SCARY_FACE),  LEVEL_UP_MOVE(34, MOVE_FLAMETHROWER), LEVEL_UP_MOVE(41, MOVE_SLASH),
    LEVEL_UP_MOVE(48, MOVE_DRAGON_RAGE), LEVEL_UP_MOVE(55, MOVE_FIRE_SPIN),    LEVEL_UP_END
};

static const u16 sCharizardLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),       LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_EMBER),         LEVEL_UP_MOVE(1, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(7, MOVE_EMBER),         LEVEL_UP_MOVE(13, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(20, MOVE_RAGE),         LEVEL_UP_MOVE(27, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(34, MOVE_FLAMETHROWER), LEVEL_UP_MOVE(36, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(44, MOVE_SLASH),        LEVEL_UP_MOVE(54, MOVE_DRAGON_RAGE),
    LEVEL_UP_MOVE(64, MOVE_FIRE_SPIN),    LEVEL_UP_END
};

static const u16 sSquirtleLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),
                                                LEVEL_UP_MOVE(7, MOVE_BUBBLE),      LEVEL_UP_MOVE(10, MOVE_WITHDRAW),
                                                LEVEL_UP_MOVE(13, MOVE_WATER_GUN),  LEVEL_UP_MOVE(18, MOVE_BITE),
                                                LEVEL_UP_MOVE(23, MOVE_RAPID_SPIN), LEVEL_UP_MOVE(28, MOVE_PROTECT),
                                                LEVEL_UP_MOVE(33, MOVE_RAIN_DANCE), LEVEL_UP_MOVE(40, MOVE_SKULL_BASH),
                                                LEVEL_UP_MOVE(47, MOVE_HYDRO_PUMP), LEVEL_UP_END };

static const u16 sWartortleLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                                 LEVEL_UP_MOVE(1, MOVE_BUBBLE),      LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),
                                                 LEVEL_UP_MOVE(7, MOVE_BUBBLE),      LEVEL_UP_MOVE(10, MOVE_WITHDRAW),
                                                 LEVEL_UP_MOVE(13, MOVE_WATER_GUN),  LEVEL_UP_MOVE(19, MOVE_BITE),
                                                 LEVEL_UP_MOVE(25, MOVE_RAPID_SPIN), LEVEL_UP_MOVE(31, MOVE_PROTECT),
                                                 LEVEL_UP_MOVE(37, MOVE_RAIN_DANCE), LEVEL_UP_MOVE(45, MOVE_SKULL_BASH),
                                                 LEVEL_UP_MOVE(53, MOVE_HYDRO_PUMP), LEVEL_UP_END };

static const u16 sBlastoiseLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),   LEVEL_UP_MOVE(1, MOVE_BUBBLE),
    LEVEL_UP_MOVE(1, MOVE_WITHDRAW),    LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),   LEVEL_UP_MOVE(7, MOVE_BUBBLE),
    LEVEL_UP_MOVE(10, MOVE_WITHDRAW),   LEVEL_UP_MOVE(13, MOVE_WATER_GUN),  LEVEL_UP_MOVE(19, MOVE_BITE),
    LEVEL_UP_MOVE(25, MOVE_RAPID_SPIN), LEVEL_UP_MOVE(31, MOVE_PROTECT),    LEVEL_UP_MOVE(42, MOVE_RAIN_DANCE),
    LEVEL_UP_MOVE(55, MOVE_SKULL_BASH), LEVEL_UP_MOVE(68, MOVE_HYDRO_PUMP), LEVEL_UP_END
};

static const u16 sCaterpieLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
                                                LEVEL_UP_END };

static const u16 sMetapodLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_HARDEN), LEVEL_UP_MOVE(7, MOVE_HARDEN),
                                               LEVEL_UP_END };

static const u16 sButterfreeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),   LEVEL_UP_MOVE(10, MOVE_CONFUSION),    LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(14, MOVE_STUN_SPORE), LEVEL_UP_MOVE(15, MOVE_SLEEP_POWDER), LEVEL_UP_MOVE(18, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(23, MOVE_WHIRLWIND),  LEVEL_UP_MOVE(28, MOVE_GUST),         LEVEL_UP_MOVE(34, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(40, MOVE_SAFEGUARD),  LEVEL_UP_MOVE(47, MOVE_SILVER_WIND),  LEVEL_UP_END
};

static const u16 sWeedleLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POISON_STING), LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
                                              LEVEL_UP_END };

static const u16 sKakunaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_HARDEN), LEVEL_UP_MOVE(7, MOVE_HARDEN),
                                              LEVEL_UP_END };

static const u16 sBeedrillLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_FURY_ATTACK),   LEVEL_UP_MOVE(10, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(15, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(20, MOVE_TWINEEDLE),
    LEVEL_UP_MOVE(25, MOVE_RAGE),         LEVEL_UP_MOVE(30, MOVE_PURSUIT),
    LEVEL_UP_MOVE(35, MOVE_PIN_MISSILE),  LEVEL_UP_MOVE(40, MOVE_AGILITY),
    LEVEL_UP_MOVE(45, MOVE_ENDEAVOR),     LEVEL_UP_END
};

static const u16 sPidgeyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),         LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(9, MOVE_GUST),           LEVEL_UP_MOVE(13, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(19, MOVE_WHIRLWIND),     LEVEL_UP_MOVE(25, MOVE_WING_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_FEATHER_DANCE), LEVEL_UP_MOVE(39, MOVE_AGILITY),
    LEVEL_UP_MOVE(47, MOVE_MIRROR_MOVE),   LEVEL_UP_END
};

static const u16 sPidgeottoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),  LEVEL_UP_MOVE(1, MOVE_GUST),
    LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK), LEVEL_UP_MOVE(9, MOVE_GUST),         LEVEL_UP_MOVE(13, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(20, MOVE_WHIRLWIND),  LEVEL_UP_MOVE(27, MOVE_WING_ATTACK), LEVEL_UP_MOVE(34, MOVE_FEATHER_DANCE),
    LEVEL_UP_MOVE(43, MOVE_AGILITY),    LEVEL_UP_MOVE(52, MOVE_MIRROR_MOVE), LEVEL_UP_END
};

static const u16 sPidgeotLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                               LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
                                               LEVEL_UP_MOVE(1, MOVE_GUST),
                                               LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
                                               LEVEL_UP_MOVE(5, MOVE_SAND_ATTACK),
                                               LEVEL_UP_MOVE(9, MOVE_GUST),
                                               LEVEL_UP_MOVE(13, MOVE_QUICK_ATTACK),
                                               LEVEL_UP_MOVE(20, MOVE_WHIRLWIND),
                                               LEVEL_UP_MOVE(27, MOVE_WING_ATTACK),
                                               LEVEL_UP_MOVE(34, MOVE_FEATHER_DANCE),
                                               LEVEL_UP_MOVE(48, MOVE_AGILITY),
                                               LEVEL_UP_MOVE(62, MOVE_MIRROR_MOVE),
                                               LEVEL_UP_END };

static const u16 sRattataLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),     LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_HYPER_FANG), LEVEL_UP_MOVE(20, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(27, MOVE_PURSUIT),
    LEVEL_UP_MOVE(34, MOVE_SUPER_FANG), LEVEL_UP_MOVE(41, MOVE_ENDEAVOR),     LEVEL_UP_END
};

static const u16 sRaticateLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_HYPER_FANG),  LEVEL_UP_MOVE(20, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(30, MOVE_PURSUIT),     LEVEL_UP_MOVE(40, MOVE_SUPER_FANG),
    LEVEL_UP_MOVE(50, MOVE_ENDEAVOR),    LEVEL_UP_END
};

static const u16 sSpearowLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),         LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(7, MOVE_LEER),         LEVEL_UP_MOVE(13, MOVE_FURY_ATTACK),
                                               LEVEL_UP_MOVE(19, MOVE_PURSUIT),     LEVEL_UP_MOVE(25, MOVE_AERIAL_ACE),
                                               LEVEL_UP_MOVE(31, MOVE_MIRROR_MOVE), LEVEL_UP_MOVE(37, MOVE_DRILL_PECK),
                                               LEVEL_UP_MOVE(43, MOVE_AGILITY),     LEVEL_UP_END };

static const u16 sFearowLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),
                                              LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(1, MOVE_LEER),
                                              LEVEL_UP_MOVE(1, MOVE_FURY_ATTACK),
                                              LEVEL_UP_MOVE(7, MOVE_LEER),
                                              LEVEL_UP_MOVE(13, MOVE_FURY_ATTACK),
                                              LEVEL_UP_MOVE(26, MOVE_PURSUIT),
                                              LEVEL_UP_MOVE(32, MOVE_MIRROR_MOVE),
                                              LEVEL_UP_MOVE(40, MOVE_DRILL_PECK),
                                              LEVEL_UP_MOVE(47, MOVE_AGILITY),
                                              LEVEL_UP_END };

static const u16 sEkansLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WRAP),         LEVEL_UP_MOVE(1, MOVE_LEER),
                                             LEVEL_UP_MOVE(8, MOVE_POISON_STING), LEVEL_UP_MOVE(13, MOVE_BITE),
                                             LEVEL_UP_MOVE(20, MOVE_GLARE),       LEVEL_UP_MOVE(25, MOVE_SCREECH),
                                             LEVEL_UP_MOVE(32, MOVE_ACID),        LEVEL_UP_MOVE(37, MOVE_STOCKPILE),
                                             LEVEL_UP_MOVE(37, MOVE_SWALLOW),     LEVEL_UP_MOVE(37, MOVE_SPIT_UP),
                                             LEVEL_UP_MOVE(44, MOVE_HAZE),        LEVEL_UP_END };

static const u16 sArbokLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WRAP),         LEVEL_UP_MOVE(1, MOVE_LEER),
                                             LEVEL_UP_MOVE(1, MOVE_POISON_STING), LEVEL_UP_MOVE(1, MOVE_BITE),
                                             LEVEL_UP_MOVE(8, MOVE_POISON_STING), LEVEL_UP_MOVE(13, MOVE_BITE),
                                             LEVEL_UP_MOVE(20, MOVE_GLARE),       LEVEL_UP_MOVE(28, MOVE_SCREECH),
                                             LEVEL_UP_MOVE(38, MOVE_ACID),        LEVEL_UP_MOVE(46, MOVE_STOCKPILE),
                                             LEVEL_UP_MOVE(46, MOVE_SWALLOW),     LEVEL_UP_MOVE(46, MOVE_SPIT_UP),
                                             LEVEL_UP_MOVE(56, MOVE_HAZE),        LEVEL_UP_END };

static const u16 sPikachuLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK), LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(6, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(8, MOVE_THUNDER_WAVE),  LEVEL_UP_MOVE(11, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(15, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(20, MOVE_SLAM),         LEVEL_UP_MOVE(26, MOVE_THUNDERBOLT),  LEVEL_UP_MOVE(33, MOVE_AGILITY),
    LEVEL_UP_MOVE(41, MOVE_THUNDER),      LEVEL_UP_MOVE(50, MOVE_LIGHT_SCREEN), LEVEL_UP_END
};

static const u16 sRaichuLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK), LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(1, MOVE_THUNDERBOLT),
                                              LEVEL_UP_END };

static const u16 sSandshrewLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),      LEVEL_UP_MOVE(6, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(11, MOVE_SAND_ATTACK), LEVEL_UP_MOVE(17, MOVE_POISON_STING),
    LEVEL_UP_MOVE(23, MOVE_SLASH),       LEVEL_UP_MOVE(30, MOVE_SWIFT),
    LEVEL_UP_MOVE(37, MOVE_FURY_SWIPES), LEVEL_UP_MOVE(45, MOVE_SAND_TOMB),
    LEVEL_UP_MOVE(53, MOVE_SANDSTORM),   LEVEL_UP_END
};

static const u16 sSandslashLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),      LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL), LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(6, MOVE_DEFENSE_CURL), LEVEL_UP_MOVE(11, MOVE_SAND_ATTACK), LEVEL_UP_MOVE(17, MOVE_POISON_STING),
    LEVEL_UP_MOVE(24, MOVE_SLASH),       LEVEL_UP_MOVE(33, MOVE_SWIFT),       LEVEL_UP_MOVE(42, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(52, MOVE_SAND_TOMB),   LEVEL_UP_MOVE(62, MOVE_SANDSTORM),   LEVEL_UP_END
};

static const u16 sNidoranFLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                LEVEL_UP_MOVE(8, MOVE_TAIL_WHIP),
                                                LEVEL_UP_MOVE(12, MOVE_DOUBLE_KICK),
                                                LEVEL_UP_MOVE(17, MOVE_POISON_STING),
                                                LEVEL_UP_MOVE(20, MOVE_BITE),
                                                LEVEL_UP_MOVE(23, MOVE_HELPING_HAND),
                                                LEVEL_UP_MOVE(30, MOVE_FURY_SWIPES),
                                                LEVEL_UP_MOVE(38, MOVE_FLATTER),
                                                LEVEL_UP_MOVE(47, MOVE_CRUNCH),
                                                LEVEL_UP_END };

static const u16 sNidorinaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                LEVEL_UP_MOVE(8, MOVE_TAIL_WHIP),
                                                LEVEL_UP_MOVE(12, MOVE_DOUBLE_KICK),
                                                LEVEL_UP_MOVE(18, MOVE_POISON_STING),
                                                LEVEL_UP_MOVE(22, MOVE_BITE),
                                                LEVEL_UP_MOVE(26, MOVE_HELPING_HAND),
                                                LEVEL_UP_MOVE(34, MOVE_FURY_SWIPES),
                                                LEVEL_UP_MOVE(43, MOVE_FLATTER),
                                                LEVEL_UP_MOVE(53, MOVE_CRUNCH),
                                                LEVEL_UP_END };

static const u16 sNidoqueenLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),      LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),  LEVEL_UP_MOVE(1, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(1, MOVE_POISON_STING), LEVEL_UP_MOVE(23, MOVE_BODY_SLAM), LEVEL_UP_END
};

static const u16 sNidoranMLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LEER),
                                                LEVEL_UP_MOVE(1, MOVE_PECK),
                                                LEVEL_UP_MOVE(8, MOVE_FOCUS_ENERGY),
                                                LEVEL_UP_MOVE(12, MOVE_DOUBLE_KICK),
                                                LEVEL_UP_MOVE(17, MOVE_POISON_STING),
                                                LEVEL_UP_MOVE(20, MOVE_HORN_ATTACK),
                                                LEVEL_UP_MOVE(23, MOVE_HELPING_HAND),
                                                LEVEL_UP_MOVE(30, MOVE_FURY_ATTACK),
                                                LEVEL_UP_MOVE(38, MOVE_FLATTER),
                                                LEVEL_UP_MOVE(47, MOVE_HORN_DRILL),
                                                LEVEL_UP_END };

static const u16 sNidorinoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LEER),
                                                LEVEL_UP_MOVE(1, MOVE_PECK),
                                                LEVEL_UP_MOVE(8, MOVE_FOCUS_ENERGY),
                                                LEVEL_UP_MOVE(12, MOVE_DOUBLE_KICK),
                                                LEVEL_UP_MOVE(18, MOVE_POISON_STING),
                                                LEVEL_UP_MOVE(22, MOVE_HORN_ATTACK),
                                                LEVEL_UP_MOVE(26, MOVE_HELPING_HAND),
                                                LEVEL_UP_MOVE(34, MOVE_FURY_ATTACK),
                                                LEVEL_UP_MOVE(43, MOVE_FLATTER),
                                                LEVEL_UP_MOVE(53, MOVE_HORN_DRILL),
                                                LEVEL_UP_END };

static const u16 sNidokingLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),        LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
                                                LEVEL_UP_MOVE(1, MOVE_DOUBLE_KICK), LEVEL_UP_MOVE(1, MOVE_POISON_STING),
                                                LEVEL_UP_MOVE(23, MOVE_THRASH),     LEVEL_UP_END };

static const u16 sClefairyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),        LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(5, MOVE_ENCORE),       LEVEL_UP_MOVE(9, MOVE_SING),
    LEVEL_UP_MOVE(13, MOVE_DOUBLE_SLAP), LEVEL_UP_MOVE(17, MOVE_FOLLOW_ME),
    LEVEL_UP_MOVE(21, MOVE_MINIMIZE),    LEVEL_UP_MOVE(25, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(29, MOVE_METRONOME),   LEVEL_UP_MOVE(33, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(37, MOVE_MOONLIGHT),   LEVEL_UP_MOVE(41, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(45, MOVE_METEOR_MASH), LEVEL_UP_END
};

static const u16 sClefableLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SING), LEVEL_UP_MOVE(1, MOVE_DOUBLE_SLAP),
                                                LEVEL_UP_MOVE(1, MOVE_MINIMIZE), LEVEL_UP_MOVE(1, MOVE_METRONOME),
                                                LEVEL_UP_END };

static const u16 sVulpixLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_EMBER),        LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(9, MOVE_ROAR),         LEVEL_UP_MOVE(13, MOVE_QUICK_ATTACK),
                                              LEVEL_UP_MOVE(17, MOVE_WILL_O_WISP), LEVEL_UP_MOVE(21, MOVE_CONFUSE_RAY),
                                              LEVEL_UP_MOVE(25, MOVE_IMPRISON),    LEVEL_UP_MOVE(29, MOVE_FLAMETHROWER),
                                              LEVEL_UP_MOVE(33, MOVE_SAFEGUARD),   LEVEL_UP_MOVE(37, MOVE_GRUDGE),
                                              LEVEL_UP_MOVE(41, MOVE_FIRE_SPIN),   LEVEL_UP_END };

static const u16 sNinetalesLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_EMBER),     LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(1, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(1, MOVE_SAFEGUARD), LEVEL_UP_MOVE(45, MOVE_FIRE_SPIN),   LEVEL_UP_END
};

static const u16 sJigglypuffLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SING),         LEVEL_UP_MOVE(4, MOVE_DEFENSE_CURL), LEVEL_UP_MOVE(9, MOVE_POUND),
    LEVEL_UP_MOVE(14, MOVE_DISABLE),     LEVEL_UP_MOVE(19, MOVE_ROLLOUT),     LEVEL_UP_MOVE(24, MOVE_DOUBLE_SLAP),
    LEVEL_UP_MOVE(29, MOVE_REST),        LEVEL_UP_MOVE(34, MOVE_BODY_SLAM),   LEVEL_UP_MOVE(39, MOVE_MIMIC),
    LEVEL_UP_MOVE(44, MOVE_HYPER_VOICE), LEVEL_UP_MOVE(49, MOVE_DOUBLE_EDGE), LEVEL_UP_END
};

static const u16 sWigglytuffLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SING), LEVEL_UP_MOVE(1, MOVE_DISABLE),
                                                  LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
                                                  LEVEL_UP_MOVE(1, MOVE_DOUBLE_SLAP), LEVEL_UP_END };

static const u16 sZubatLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LEECH_LIFE),
                                             LEVEL_UP_MOVE(6, MOVE_SUPERSONIC),
                                             LEVEL_UP_MOVE(11, MOVE_ASTONISH),
                                             LEVEL_UP_MOVE(16, MOVE_BITE),
                                             LEVEL_UP_MOVE(21, MOVE_WING_ATTACK),
                                             LEVEL_UP_MOVE(26, MOVE_CONFUSE_RAY),
                                             LEVEL_UP_MOVE(31, MOVE_AIR_CUTTER),
                                             LEVEL_UP_MOVE(36, MOVE_MEAN_LOOK),
                                             LEVEL_UP_MOVE(41, MOVE_POISON_FANG),
                                             LEVEL_UP_MOVE(46, MOVE_HAZE),
                                             LEVEL_UP_END };

static const u16 sGolbatLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCREECH),      LEVEL_UP_MOVE(1, MOVE_LEECH_LIFE),
                                              LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),   LEVEL_UP_MOVE(1, MOVE_ASTONISH),
                                              LEVEL_UP_MOVE(6, MOVE_SUPERSONIC),   LEVEL_UP_MOVE(11, MOVE_ASTONISH),
                                              LEVEL_UP_MOVE(16, MOVE_BITE),        LEVEL_UP_MOVE(21, MOVE_WING_ATTACK),
                                              LEVEL_UP_MOVE(28, MOVE_CONFUSE_RAY), LEVEL_UP_MOVE(35, MOVE_AIR_CUTTER),
                                              LEVEL_UP_MOVE(42, MOVE_MEAN_LOOK),   LEVEL_UP_MOVE(49, MOVE_POISON_FANG),
                                              LEVEL_UP_MOVE(56, MOVE_HAZE),        LEVEL_UP_END };

static const u16 sOddishLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),      LEVEL_UP_MOVE(7, MOVE_SWEET_SCENT),   LEVEL_UP_MOVE(14, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(16, MOVE_STUN_SPORE), LEVEL_UP_MOVE(18, MOVE_SLEEP_POWDER), LEVEL_UP_MOVE(23, MOVE_ACID),
    LEVEL_UP_MOVE(32, MOVE_MOONLIGHT),  LEVEL_UP_MOVE(39, MOVE_PETAL_DANCE),  LEVEL_UP_END
};

static const u16 sGloomLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ABSORB),
                                             LEVEL_UP_MOVE(1, MOVE_SWEET_SCENT),
                                             LEVEL_UP_MOVE(1, MOVE_POISON_POWDER),
                                             LEVEL_UP_MOVE(7, MOVE_SWEET_SCENT),
                                             LEVEL_UP_MOVE(14, MOVE_POISON_POWDER),
                                             LEVEL_UP_MOVE(16, MOVE_STUN_SPORE),
                                             LEVEL_UP_MOVE(18, MOVE_SLEEP_POWDER),
                                             LEVEL_UP_MOVE(24, MOVE_ACID),
                                             LEVEL_UP_MOVE(35, MOVE_MOONLIGHT),
                                             LEVEL_UP_MOVE(44, MOVE_PETAL_DANCE),
                                             LEVEL_UP_END };

static const u16 sVileplumeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),     LEVEL_UP_MOVE(1, MOVE_AROMATHERAPY), LEVEL_UP_MOVE(1, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(1, MOVE_MEGA_DRAIN), LEVEL_UP_MOVE(44, MOVE_PETAL_DANCE), LEVEL_UP_END
};

static const u16 sParasLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),        LEVEL_UP_MOVE(7, MOVE_STUN_SPORE),
                                             LEVEL_UP_MOVE(13, MOVE_POISON_POWDER), LEVEL_UP_MOVE(19, MOVE_LEECH_LIFE),
                                             LEVEL_UP_MOVE(25, MOVE_SPORE),         LEVEL_UP_MOVE(31, MOVE_SLASH),
                                             LEVEL_UP_MOVE(37, MOVE_GROWTH),        LEVEL_UP_MOVE(43, MOVE_GIGA_DRAIN),
                                             LEVEL_UP_MOVE(49, MOVE_AROMATHERAPY),  LEVEL_UP_END };

static const u16 sParasectLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),     LEVEL_UP_MOVE(1, MOVE_STUN_SPORE),     LEVEL_UP_MOVE(1, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(7, MOVE_STUN_SPORE),  LEVEL_UP_MOVE(13, MOVE_POISON_POWDER), LEVEL_UP_MOVE(19, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(27, MOVE_SPORE),      LEVEL_UP_MOVE(35, MOVE_SLASH),         LEVEL_UP_MOVE(43, MOVE_GROWTH),
    LEVEL_UP_MOVE(51, MOVE_GIGA_DRAIN), LEVEL_UP_MOVE(59, MOVE_AROMATHERAPY),  LEVEL_UP_END
};

static const u16 sVenonatLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(1, MOVE_DISABLE),     LEVEL_UP_MOVE(1, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(9, MOVE_SUPERSONIC),    LEVEL_UP_MOVE(17, MOVE_CONFUSION),  LEVEL_UP_MOVE(20, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(25, MOVE_LEECH_LIFE),   LEVEL_UP_MOVE(28, MOVE_STUN_SPORE), LEVEL_UP_MOVE(33, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(36, MOVE_SLEEP_POWDER), LEVEL_UP_MOVE(41, MOVE_PSYCHIC),    LEVEL_UP_END
};

static const u16 sVenomothLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SILVER_WIND),   LEVEL_UP_MOVE(1, MOVE_TACKLE),         LEVEL_UP_MOVE(1, MOVE_DISABLE),
    LEVEL_UP_MOVE(1, MOVE_FORESIGHT),     LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),     LEVEL_UP_MOVE(9, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(17, MOVE_CONFUSION),    LEVEL_UP_MOVE(20, MOVE_POISON_POWDER), LEVEL_UP_MOVE(25, MOVE_LEECH_LIFE),
    LEVEL_UP_MOVE(28, MOVE_STUN_SPORE),   LEVEL_UP_MOVE(31, MOVE_GUST),          LEVEL_UP_MOVE(36, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(42, MOVE_SLEEP_POWDER), LEVEL_UP_MOVE(52, MOVE_PSYCHIC),       LEVEL_UP_END
};

static const u16 sDiglettLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),  LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
                                               LEVEL_UP_MOVE(5, MOVE_GROWL),    LEVEL_UP_MOVE(9, MOVE_MAGNITUDE),
                                               LEVEL_UP_MOVE(17, MOVE_DIG),     LEVEL_UP_MOVE(25, MOVE_MUD_SLAP),
                                               LEVEL_UP_MOVE(33, MOVE_SLASH),   LEVEL_UP_MOVE(41, MOVE_EARTHQUAKE),
                                               LEVEL_UP_MOVE(49, MOVE_FISSURE), LEVEL_UP_END };

static const u16 sDugtrioLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TRI_ATTACK),
                                               LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                               LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
                                               LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(5, MOVE_GROWL),
                                               LEVEL_UP_MOVE(9, MOVE_MAGNITUDE),
                                               LEVEL_UP_MOVE(17, MOVE_DIG),
                                               LEVEL_UP_MOVE(25, MOVE_MUD_SLAP),
                                               LEVEL_UP_MOVE(26, MOVE_SAND_TOMB),
                                               LEVEL_UP_MOVE(38, MOVE_SLASH),
                                               LEVEL_UP_MOVE(51, MOVE_EARTHQUAKE),
                                               LEVEL_UP_MOVE(64, MOVE_FISSURE),
                                               LEVEL_UP_END };

static const u16 sMeowthLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),       LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(11, MOVE_BITE),         LEVEL_UP_MOVE(20, MOVE_PAY_DAY),
                                              LEVEL_UP_MOVE(28, MOVE_FAINT_ATTACK), LEVEL_UP_MOVE(35, MOVE_SCREECH),
                                              LEVEL_UP_MOVE(41, MOVE_FURY_SWIPES),  LEVEL_UP_MOVE(46, MOVE_SLASH),
                                              LEVEL_UP_MOVE(50, MOVE_FAKE_OUT),     LEVEL_UP_END };

static const u16 sPersianLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                               LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(1, MOVE_BITE),
                                               LEVEL_UP_MOVE(11, MOVE_BITE),
                                               LEVEL_UP_MOVE(20, MOVE_PAY_DAY),
                                               LEVEL_UP_MOVE(29, MOVE_FAINT_ATTACK),
                                               LEVEL_UP_MOVE(38, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(46, MOVE_FURY_SWIPES),
                                               LEVEL_UP_MOVE(53, MOVE_SLASH),
                                               LEVEL_UP_MOVE(59, MOVE_FAKE_OUT),
                                               LEVEL_UP_END };

static const u16 sPsyduckLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WATER_SPORT), LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                               LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),   LEVEL_UP_MOVE(10, MOVE_DISABLE),
                                               LEVEL_UP_MOVE(16, MOVE_CONFUSION),  LEVEL_UP_MOVE(23, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(31, MOVE_PSYCH_UP),   LEVEL_UP_MOVE(40, MOVE_FURY_SWIPES),
                                               LEVEL_UP_MOVE(50, MOVE_HYDRO_PUMP), LEVEL_UP_END };

static const u16 sGolduckLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WATER_SPORT), LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                               LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),   LEVEL_UP_MOVE(1, MOVE_DISABLE),
                                               LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),   LEVEL_UP_MOVE(10, MOVE_DISABLE),
                                               LEVEL_UP_MOVE(16, MOVE_CONFUSION),  LEVEL_UP_MOVE(23, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(31, MOVE_PSYCH_UP),   LEVEL_UP_MOVE(44, MOVE_FURY_SWIPES),
                                               LEVEL_UP_MOVE(58, MOVE_HYDRO_PUMP), LEVEL_UP_END };

static const u16 sMankeyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                              LEVEL_UP_MOVE(1, MOVE_LEER),
                                              LEVEL_UP_MOVE(9, MOVE_LOW_KICK),
                                              LEVEL_UP_MOVE(15, MOVE_KARATE_CHOP),
                                              LEVEL_UP_MOVE(21, MOVE_FURY_SWIPES),
                                              LEVEL_UP_MOVE(27, MOVE_FOCUS_ENERGY),
                                              LEVEL_UP_MOVE(33, MOVE_SEISMIC_TOSS),
                                              LEVEL_UP_MOVE(39, MOVE_CROSS_CHOP),
                                              LEVEL_UP_MOVE(45, MOVE_SCREECH),
                                              LEVEL_UP_MOVE(51, MOVE_THRASH),
                                              LEVEL_UP_END };

static const u16 sPrimeapeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),      LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_LOW_KICK),     LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(9, MOVE_LOW_KICK),     LEVEL_UP_MOVE(15, MOVE_KARATE_CHOP),
    LEVEL_UP_MOVE(21, MOVE_FURY_SWIPES), LEVEL_UP_MOVE(27, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(28, MOVE_RAGE),        LEVEL_UP_MOVE(36, MOVE_SEISMIC_TOSS),
    LEVEL_UP_MOVE(45, MOVE_CROSS_CHOP),  LEVEL_UP_MOVE(54, MOVE_SCREECH),
    LEVEL_UP_MOVE(63, MOVE_THRASH),      LEVEL_UP_END
};

static const u16 sGrowlitheLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BITE),
                                                 LEVEL_UP_MOVE(1, MOVE_ROAR),
                                                 LEVEL_UP_MOVE(7, MOVE_EMBER),
                                                 LEVEL_UP_MOVE(13, MOVE_LEER),
                                                 LEVEL_UP_MOVE(19, MOVE_ODOR_SLEUTH),
                                                 LEVEL_UP_MOVE(25, MOVE_TAKE_DOWN),
                                                 LEVEL_UP_MOVE(31, MOVE_FLAME_WHEEL),
                                                 LEVEL_UP_MOVE(37, MOVE_HELPING_HAND),
                                                 LEVEL_UP_MOVE(43, MOVE_AGILITY),
                                                 LEVEL_UP_MOVE(49, MOVE_FLAMETHROWER),
                                                 LEVEL_UP_END };

static const u16 sArcanineLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),        LEVEL_UP_MOVE(1, MOVE_ROAR),           LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH), LEVEL_UP_MOVE(49, MOVE_EXTREME_SPEED), LEVEL_UP_END
};

static const u16 sPoliwagLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),       LEVEL_UP_MOVE(7, MOVE_HYPNOSIS),    LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(19, MOVE_DOUBLE_SLAP), LEVEL_UP_MOVE(25, MOVE_RAIN_DANCE), LEVEL_UP_MOVE(31, MOVE_BODY_SLAM),
    LEVEL_UP_MOVE(37, MOVE_BELLY_DRUM),  LEVEL_UP_MOVE(43, MOVE_HYDRO_PUMP), LEVEL_UP_END
};

static const u16 sPoliwhirlLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BUBBLE),
                                                 LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
                                                 LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                                 LEVEL_UP_MOVE(7, MOVE_HYPNOSIS),
                                                 LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
                                                 LEVEL_UP_MOVE(19, MOVE_DOUBLE_SLAP),
                                                 LEVEL_UP_MOVE(27, MOVE_RAIN_DANCE),
                                                 LEVEL_UP_MOVE(35, MOVE_BODY_SLAM),
                                                 LEVEL_UP_MOVE(43, MOVE_BELLY_DRUM),
                                                 LEVEL_UP_MOVE(51, MOVE_HYDRO_PUMP),
                                                 LEVEL_UP_END };

static const u16 sPoliwrathLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                                 LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
                                                 LEVEL_UP_MOVE(1, MOVE_DOUBLE_SLAP),
                                                 LEVEL_UP_MOVE(1, MOVE_SUBMISSION),
                                                 LEVEL_UP_MOVE(35, MOVE_SUBMISSION),
                                                 LEVEL_UP_MOVE(51, MOVE_MIND_READER),
                                                 LEVEL_UP_END };

static const u16 sAbraLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TELEPORT), LEVEL_UP_END };

static const u16 sKadabraLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TELEPORT),
                                               LEVEL_UP_MOVE(1, MOVE_KINESIS),
                                               LEVEL_UP_MOVE(1, MOVE_CONFUSION),
                                               LEVEL_UP_MOVE(16, MOVE_CONFUSION),
                                               LEVEL_UP_MOVE(18, MOVE_DISABLE),
                                               LEVEL_UP_MOVE(21, MOVE_PSYBEAM),
                                               LEVEL_UP_MOVE(23, MOVE_REFLECT),
                                               LEVEL_UP_MOVE(25, MOVE_RECOVER),
                                               LEVEL_UP_MOVE(30, MOVE_FUTURE_SIGHT),
                                               LEVEL_UP_MOVE(33, MOVE_ROLE_PLAY),
                                               LEVEL_UP_MOVE(36, MOVE_PSYCHIC),
                                               LEVEL_UP_MOVE(43, MOVE_TRICK),
                                               LEVEL_UP_END };

static const u16 sAlakazamLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TELEPORT),
                                                LEVEL_UP_MOVE(1, MOVE_KINESIS),
                                                LEVEL_UP_MOVE(1, MOVE_CONFUSION),
                                                LEVEL_UP_MOVE(16, MOVE_CONFUSION),
                                                LEVEL_UP_MOVE(18, MOVE_DISABLE),
                                                LEVEL_UP_MOVE(21, MOVE_PSYBEAM),
                                                LEVEL_UP_MOVE(23, MOVE_REFLECT),
                                                LEVEL_UP_MOVE(25, MOVE_RECOVER),
                                                LEVEL_UP_MOVE(30, MOVE_FUTURE_SIGHT),
                                                LEVEL_UP_MOVE(33, MOVE_CALM_MIND),
                                                LEVEL_UP_MOVE(36, MOVE_PSYCHIC),
                                                LEVEL_UP_MOVE(43, MOVE_TRICK),
                                                LEVEL_UP_END };

static const u16 sMachopLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LOW_KICK),
                                              LEVEL_UP_MOVE(1, MOVE_LEER),
                                              LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
                                              LEVEL_UP_MOVE(13, MOVE_KARATE_CHOP),
                                              LEVEL_UP_MOVE(19, MOVE_SEISMIC_TOSS),
                                              LEVEL_UP_MOVE(22, MOVE_FORESIGHT),
                                              LEVEL_UP_MOVE(25, MOVE_REVENGE),
                                              LEVEL_UP_MOVE(31, MOVE_VITAL_THROW),
                                              LEVEL_UP_MOVE(37, MOVE_SUBMISSION),
                                              LEVEL_UP_MOVE(40, MOVE_CROSS_CHOP),
                                              LEVEL_UP_MOVE(43, MOVE_SCARY_FACE),
                                              LEVEL_UP_MOVE(49, MOVE_DYNAMIC_PUNCH),
                                              LEVEL_UP_END };

static const u16 sMachokeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LOW_KICK),       LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),   LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(13, MOVE_KARATE_CHOP),   LEVEL_UP_MOVE(19, MOVE_SEISMIC_TOSS),
    LEVEL_UP_MOVE(22, MOVE_FORESIGHT),     LEVEL_UP_MOVE(25, MOVE_REVENGE),
    LEVEL_UP_MOVE(33, MOVE_VITAL_THROW),   LEVEL_UP_MOVE(41, MOVE_SUBMISSION),
    LEVEL_UP_MOVE(46, MOVE_CROSS_CHOP),    LEVEL_UP_MOVE(51, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(59, MOVE_DYNAMIC_PUNCH), LEVEL_UP_END
};

static const u16 sMachampLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LOW_KICK),       LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),   LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(13, MOVE_KARATE_CHOP),   LEVEL_UP_MOVE(19, MOVE_SEISMIC_TOSS),
    LEVEL_UP_MOVE(22, MOVE_FORESIGHT),     LEVEL_UP_MOVE(25, MOVE_REVENGE),
    LEVEL_UP_MOVE(33, MOVE_VITAL_THROW),   LEVEL_UP_MOVE(41, MOVE_SUBMISSION),
    LEVEL_UP_MOVE(46, MOVE_CROSS_CHOP),    LEVEL_UP_MOVE(51, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(59, MOVE_DYNAMIC_PUNCH), LEVEL_UP_END
};

static const u16 sBellsproutLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_VINE_WHIP),
                                                  LEVEL_UP_MOVE(6, MOVE_GROWTH),
                                                  LEVEL_UP_MOVE(11, MOVE_WRAP),
                                                  LEVEL_UP_MOVE(15, MOVE_SLEEP_POWDER),
                                                  LEVEL_UP_MOVE(17, MOVE_POISON_POWDER),
                                                  LEVEL_UP_MOVE(19, MOVE_STUN_SPORE),
                                                  LEVEL_UP_MOVE(23, MOVE_ACID),
                                                  LEVEL_UP_MOVE(30, MOVE_SWEET_SCENT),
                                                  LEVEL_UP_MOVE(37, MOVE_RAZOR_LEAF),
                                                  LEVEL_UP_MOVE(45, MOVE_SLAM),
                                                  LEVEL_UP_END };

static const u16 sWeepinbellLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_VINE_WHIP),
                                                  LEVEL_UP_MOVE(1, MOVE_GROWTH),
                                                  LEVEL_UP_MOVE(1, MOVE_WRAP),
                                                  LEVEL_UP_MOVE(6, MOVE_GROWTH),
                                                  LEVEL_UP_MOVE(11, MOVE_WRAP),
                                                  LEVEL_UP_MOVE(15, MOVE_SLEEP_POWDER),
                                                  LEVEL_UP_MOVE(17, MOVE_POISON_POWDER),
                                                  LEVEL_UP_MOVE(19, MOVE_STUN_SPORE),
                                                  LEVEL_UP_MOVE(24, MOVE_ACID),
                                                  LEVEL_UP_MOVE(33, MOVE_SWEET_SCENT),
                                                  LEVEL_UP_MOVE(42, MOVE_RAZOR_LEAF),
                                                  LEVEL_UP_MOVE(54, MOVE_SLAM),
                                                  LEVEL_UP_END };

static const u16 sVictreebelLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_VINE_WHIP), LEVEL_UP_MOVE(1, MOVE_SLEEP_POWDER),
                                                  LEVEL_UP_MOVE(1, MOVE_SWEET_SCENT), LEVEL_UP_MOVE(1, MOVE_RAZOR_LEAF),
                                                  LEVEL_UP_END };

static const u16 sTentacoolLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POISON_STING), LEVEL_UP_MOVE(6, MOVE_SUPERSONIC),
                                                 LEVEL_UP_MOVE(12, MOVE_CONSTRICT),   LEVEL_UP_MOVE(19, MOVE_ACID),
                                                 LEVEL_UP_MOVE(25, MOVE_BUBBLE_BEAM), LEVEL_UP_MOVE(30, MOVE_WRAP),
                                                 LEVEL_UP_MOVE(36, MOVE_BARRIER),     LEVEL_UP_MOVE(43, MOVE_SCREECH),
                                                 LEVEL_UP_MOVE(49, MOVE_HYDRO_PUMP),  LEVEL_UP_END };

static const u16 sTentacruelLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING), LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),  LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(6, MOVE_SUPERSONIC),   LEVEL_UP_MOVE(12, MOVE_CONSTRICT),  LEVEL_UP_MOVE(19, MOVE_ACID),
    LEVEL_UP_MOVE(25, MOVE_BUBBLE_BEAM), LEVEL_UP_MOVE(30, MOVE_WRAP),       LEVEL_UP_MOVE(38, MOVE_BARRIER),
    LEVEL_UP_MOVE(47, MOVE_SCREECH),     LEVEL_UP_MOVE(55, MOVE_HYDRO_PUMP), LEVEL_UP_END
};

static const u16 sGeodudeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL), LEVEL_UP_MOVE(6, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(11, MOVE_ROCK_THROW), LEVEL_UP_MOVE(16, MOVE_MAGNITUDE),   LEVEL_UP_MOVE(21, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(26, MOVE_ROLLOUT),    LEVEL_UP_MOVE(31, MOVE_ROCK_BLAST),  LEVEL_UP_MOVE(36, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(41, MOVE_EXPLOSION),  LEVEL_UP_MOVE(46, MOVE_DOUBLE_EDGE), LEVEL_UP_END
};

static const u16 sGravelerLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(1, MOVE_MUD_SPORT),    LEVEL_UP_MOVE(1, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(6, MOVE_MUD_SPORT),    LEVEL_UP_MOVE(11, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(16, MOVE_MAGNITUDE),   LEVEL_UP_MOVE(21, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(29, MOVE_ROLLOUT),     LEVEL_UP_MOVE(37, MOVE_ROCK_BLAST),
    LEVEL_UP_MOVE(45, MOVE_EARTHQUAKE),  LEVEL_UP_MOVE(53, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(62, MOVE_DOUBLE_EDGE), LEVEL_UP_END
};

static const u16 sGolemLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
                                             LEVEL_UP_MOVE(1, MOVE_MUD_SPORT),    LEVEL_UP_MOVE(1, MOVE_ROCK_THROW),
                                             LEVEL_UP_MOVE(6, MOVE_MUD_SPORT),    LEVEL_UP_MOVE(11, MOVE_ROCK_THROW),
                                             LEVEL_UP_MOVE(16, MOVE_MAGNITUDE),   LEVEL_UP_MOVE(21, MOVE_SELF_DESTRUCT),
                                             LEVEL_UP_MOVE(29, MOVE_ROLLOUT),     LEVEL_UP_MOVE(37, MOVE_ROCK_BLAST),
                                             LEVEL_UP_MOVE(45, MOVE_EARTHQUAKE),  LEVEL_UP_MOVE(53, MOVE_EXPLOSION),
                                             LEVEL_UP_MOVE(62, MOVE_DOUBLE_EDGE), LEVEL_UP_END };

static const u16 sPonytaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                              LEVEL_UP_MOVE(5, MOVE_GROWL),
                                              LEVEL_UP_MOVE(9, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(14, MOVE_EMBER),
                                              LEVEL_UP_MOVE(19, MOVE_STOMP),
                                              LEVEL_UP_MOVE(25, MOVE_FIRE_SPIN),
                                              LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
                                              LEVEL_UP_MOVE(38, MOVE_AGILITY),
                                              LEVEL_UP_MOVE(45, MOVE_BOUNCE),
                                              LEVEL_UP_MOVE(53, MOVE_FIRE_BLAST),
                                              LEVEL_UP_END };

static const u16 sRapidashLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),     LEVEL_UP_MOVE(1, MOVE_GROWL),       LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_EMBER),      LEVEL_UP_MOVE(5, MOVE_GROWL),       LEVEL_UP_MOVE(9, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(14, MOVE_EMBER),     LEVEL_UP_MOVE(19, MOVE_STOMP),      LEVEL_UP_MOVE(25, MOVE_FIRE_SPIN),
    LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN), LEVEL_UP_MOVE(38, MOVE_AGILITY),    LEVEL_UP_MOVE(40, MOVE_FURY_ATTACK),
    LEVEL_UP_MOVE(50, MOVE_BOUNCE),    LEVEL_UP_MOVE(63, MOVE_FIRE_BLAST), LEVEL_UP_END
};

static const u16 sSlowpokeLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CURSE),
                                                LEVEL_UP_MOVE(1, MOVE_YAWN),
                                                LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(6, MOVE_GROWL),
                                                LEVEL_UP_MOVE(15, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(20, MOVE_CONFUSION),
                                                LEVEL_UP_MOVE(29, MOVE_DISABLE),
                                                LEVEL_UP_MOVE(34, MOVE_HEADBUTT),
                                                LEVEL_UP_MOVE(43, MOVE_AMNESIA),
                                                LEVEL_UP_MOVE(48, MOVE_PSYCHIC),
                                                LEVEL_UP_END };

static const u16 sSlowbroLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CURSE),
                                               LEVEL_UP_MOVE(1, MOVE_YAWN),
                                               LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                               LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(6, MOVE_GROWL),
                                               LEVEL_UP_MOVE(15, MOVE_WATER_GUN),
                                               LEVEL_UP_MOVE(20, MOVE_CONFUSION),
                                               LEVEL_UP_MOVE(29, MOVE_DISABLE),
                                               LEVEL_UP_MOVE(34, MOVE_HEADBUTT),
                                               LEVEL_UP_MOVE(37, MOVE_WITHDRAW),
                                               LEVEL_UP_MOVE(46, MOVE_AMNESIA),
                                               LEVEL_UP_MOVE(54, MOVE_PSYCHIC),
                                               LEVEL_UP_END };

static const u16 sMagnemiteLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_METAL_SOUND), LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(6, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(11, MOVE_SUPERSONIC), LEVEL_UP_MOVE(16, MOVE_SONIC_BOOM), LEVEL_UP_MOVE(21, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(26, MOVE_SPARK),      LEVEL_UP_MOVE(32, MOVE_LOCK_ON),    LEVEL_UP_MOVE(38, MOVE_SWIFT),
    LEVEL_UP_MOVE(44, MOVE_SCREECH),    LEVEL_UP_MOVE(50, MOVE_ZAP_CANNON), LEVEL_UP_END
};

static const u16 sMagnetonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_METAL_SOUND),   LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK), LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(6, MOVE_THUNDER_SHOCK), LEVEL_UP_MOVE(11, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(16, MOVE_SONIC_BOOM),   LEVEL_UP_MOVE(21, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(26, MOVE_SPARK),        LEVEL_UP_MOVE(35, MOVE_LOCK_ON),
    LEVEL_UP_MOVE(44, MOVE_TRI_ATTACK),   LEVEL_UP_MOVE(53, MOVE_SCREECH),
    LEVEL_UP_MOVE(62, MOVE_ZAP_CANNON),   LEVEL_UP_END
};

static const u16 sFarfetchdLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),
                                                 LEVEL_UP_MOVE(6, MOVE_SAND_ATTACK),
                                                 LEVEL_UP_MOVE(11, MOVE_LEER),
                                                 LEVEL_UP_MOVE(16, MOVE_FURY_ATTACK),
                                                 LEVEL_UP_MOVE(21, MOVE_KNOCK_OFF),
                                                 LEVEL_UP_MOVE(26, MOVE_FURY_CUTTER),
                                                 LEVEL_UP_MOVE(31, MOVE_SWORDS_DANCE),
                                                 LEVEL_UP_MOVE(36, MOVE_AGILITY),
                                                 LEVEL_UP_MOVE(41, MOVE_SLASH),
                                                 LEVEL_UP_MOVE(46, MOVE_FALSE_SWIPE),
                                                 LEVEL_UP_END };

static const u16 sDoduoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),        LEVEL_UP_MOVE(1, MOVE_GROWL),
                                             LEVEL_UP_MOVE(9, MOVE_PURSUIT),     LEVEL_UP_MOVE(13, MOVE_FURY_ATTACK),
                                             LEVEL_UP_MOVE(21, MOVE_TRI_ATTACK), LEVEL_UP_MOVE(25, MOVE_RAGE),
                                             LEVEL_UP_MOVE(33, MOVE_UPROAR),     LEVEL_UP_MOVE(37, MOVE_DRILL_PECK),
                                             LEVEL_UP_MOVE(45, MOVE_AGILITY),    LEVEL_UP_END };

static const u16 sDodrioLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),        LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(1, MOVE_PURSUIT),     LEVEL_UP_MOVE(1, MOVE_FURY_ATTACK),
                                              LEVEL_UP_MOVE(9, MOVE_PURSUIT),     LEVEL_UP_MOVE(13, MOVE_FURY_ATTACK),
                                              LEVEL_UP_MOVE(21, MOVE_TRI_ATTACK), LEVEL_UP_MOVE(25, MOVE_RAGE),
                                              LEVEL_UP_MOVE(38, MOVE_UPROAR),     LEVEL_UP_MOVE(47, MOVE_DRILL_PECK),
                                              LEVEL_UP_MOVE(60, MOVE_AGILITY),    LEVEL_UP_END };

static const u16 sSeelLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),     LEVEL_UP_MOVE(9, MOVE_GROWL),      LEVEL_UP_MOVE(17, MOVE_ICY_WIND),
    LEVEL_UP_MOVE(21, MOVE_AURORA_BEAM), LEVEL_UP_MOVE(29, MOVE_REST),      LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(41, MOVE_ICE_BEAM),    LEVEL_UP_MOVE(49, MOVE_SAFEGUARD), LEVEL_UP_END
};

static const u16 sDewgongLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
                                               LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(1, MOVE_ICY_WIND),
                                               LEVEL_UP_MOVE(1, MOVE_AURORA_BEAM),
                                               LEVEL_UP_MOVE(9, MOVE_GROWL),
                                               LEVEL_UP_MOVE(17, MOVE_ICY_WIND),
                                               LEVEL_UP_MOVE(21, MOVE_AURORA_BEAM),
                                               LEVEL_UP_MOVE(29, MOVE_REST),
                                               LEVEL_UP_MOVE(34, MOVE_SHEER_COLD),
                                               LEVEL_UP_MOVE(42, MOVE_TAKE_DOWN),
                                               LEVEL_UP_MOVE(51, MOVE_ICE_BEAM),
                                               LEVEL_UP_MOVE(64, MOVE_SAFEGUARD),
                                               LEVEL_UP_END };

static const u16 sGrimerLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POISON_GAS),
                                              LEVEL_UP_MOVE(1, MOVE_POUND),
                                              LEVEL_UP_MOVE(4, MOVE_HARDEN),
                                              LEVEL_UP_MOVE(8, MOVE_DISABLE),
                                              LEVEL_UP_MOVE(13, MOVE_SLUDGE),
                                              LEVEL_UP_MOVE(19, MOVE_MINIMIZE),
                                              LEVEL_UP_MOVE(26, MOVE_SCREECH),
                                              LEVEL_UP_MOVE(34, MOVE_ACID_ARMOR),
                                              LEVEL_UP_MOVE(43, MOVE_SLUDGE_BOMB),
                                              LEVEL_UP_MOVE(53, MOVE_MEMENTO),
                                              LEVEL_UP_END };

static const u16 sMukLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POISON_GAS),  LEVEL_UP_MOVE(1, MOVE_POUND),
                                           LEVEL_UP_MOVE(1, MOVE_HARDEN),      LEVEL_UP_MOVE(4, MOVE_HARDEN),
                                           LEVEL_UP_MOVE(8, MOVE_DISABLE),     LEVEL_UP_MOVE(13, MOVE_SLUDGE),
                                           LEVEL_UP_MOVE(19, MOVE_MINIMIZE),   LEVEL_UP_MOVE(26, MOVE_SCREECH),
                                           LEVEL_UP_MOVE(34, MOVE_ACID_ARMOR), LEVEL_UP_MOVE(47, MOVE_SLUDGE_BOMB),
                                           LEVEL_UP_MOVE(61, MOVE_MEMENTO),    LEVEL_UP_END };

static const u16 sShellderLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_WITHDRAW),  LEVEL_UP_MOVE(9, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(17, MOVE_AURORA_BEAM), LEVEL_UP_MOVE(25, MOVE_PROTECT),  LEVEL_UP_MOVE(33, MOVE_LEER),
    LEVEL_UP_MOVE(41, MOVE_CLAMP),       LEVEL_UP_MOVE(49, MOVE_ICE_BEAM), LEVEL_UP_END
};

static const u16 sCloysterLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
                                                LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),
                                                LEVEL_UP_MOVE(1, MOVE_AURORA_BEAM),
                                                LEVEL_UP_MOVE(1, MOVE_PROTECT),
                                                LEVEL_UP_MOVE(33, MOVE_SPIKES),
                                                LEVEL_UP_MOVE(41, MOVE_SPIKE_CANNON),
                                                LEVEL_UP_END };

static const u16 sGastlyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),      LEVEL_UP_MOVE(1, MOVE_LICK),
                                              LEVEL_UP_MOVE(8, MOVE_SPITE),         LEVEL_UP_MOVE(13, MOVE_MEAN_LOOK),
                                              LEVEL_UP_MOVE(16, MOVE_CURSE),        LEVEL_UP_MOVE(21, MOVE_NIGHT_SHADE),
                                              LEVEL_UP_MOVE(28, MOVE_CONFUSE_RAY),  LEVEL_UP_MOVE(33, MOVE_DREAM_EATER),
                                              LEVEL_UP_MOVE(36, MOVE_DESTINY_BOND), LEVEL_UP_END };

static const u16 sHaunterLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),     LEVEL_UP_MOVE(1, MOVE_LICK),          LEVEL_UP_MOVE(1, MOVE_SPITE),
    LEVEL_UP_MOVE(8, MOVE_SPITE),        LEVEL_UP_MOVE(13, MOVE_MEAN_LOOK),    LEVEL_UP_MOVE(16, MOVE_CURSE),
    LEVEL_UP_MOVE(21, MOVE_NIGHT_SHADE), LEVEL_UP_MOVE(25, MOVE_SHADOW_PUNCH), LEVEL_UP_MOVE(31, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(39, MOVE_DREAM_EATER), LEVEL_UP_MOVE(48, MOVE_DESTINY_BOND), LEVEL_UP_END
};

static const u16 sGengarLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),     LEVEL_UP_MOVE(1, MOVE_LICK),          LEVEL_UP_MOVE(1, MOVE_SPITE),
    LEVEL_UP_MOVE(8, MOVE_SPITE),        LEVEL_UP_MOVE(13, MOVE_MEAN_LOOK),    LEVEL_UP_MOVE(16, MOVE_CURSE),
    LEVEL_UP_MOVE(21, MOVE_NIGHT_SHADE), LEVEL_UP_MOVE(25, MOVE_SHADOW_PUNCH), LEVEL_UP_MOVE(31, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(39, MOVE_DREAM_EATER), LEVEL_UP_MOVE(48, MOVE_DESTINY_BOND), LEVEL_UP_END
};

static const u16 sOnixLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_SCREECH),
                                            LEVEL_UP_MOVE(9, MOVE_BIND),         LEVEL_UP_MOVE(13, MOVE_ROCK_THROW),
                                            LEVEL_UP_MOVE(21, MOVE_HARDEN),      LEVEL_UP_MOVE(25, MOVE_RAGE),
                                            LEVEL_UP_MOVE(33, MOVE_SANDSTORM),   LEVEL_UP_MOVE(37, MOVE_SLAM),
                                            LEVEL_UP_MOVE(45, MOVE_IRON_TAIL),   LEVEL_UP_MOVE(49, MOVE_SAND_TOMB),
                                            LEVEL_UP_MOVE(57, MOVE_DOUBLE_EDGE), LEVEL_UP_END };

static const u16 sDrowzeeLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),
                                               LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
                                               LEVEL_UP_MOVE(10, MOVE_DISABLE),
                                               LEVEL_UP_MOVE(18, MOVE_CONFUSION),
                                               LEVEL_UP_MOVE(25, MOVE_HEADBUTT),
                                               LEVEL_UP_MOVE(31, MOVE_POISON_GAS),
                                               LEVEL_UP_MOVE(36, MOVE_MEDITATE),
                                               LEVEL_UP_MOVE(40, MOVE_PSYCHIC),
                                               LEVEL_UP_MOVE(43, MOVE_PSYCH_UP),
                                               LEVEL_UP_MOVE(45, MOVE_FUTURE_SIGHT),
                                               LEVEL_UP_END };

static const u16 sHypnoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),
                                             LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
                                             LEVEL_UP_MOVE(1, MOVE_DISABLE),
                                             LEVEL_UP_MOVE(1, MOVE_CONFUSION),
                                             LEVEL_UP_MOVE(10, MOVE_DISABLE),
                                             LEVEL_UP_MOVE(18, MOVE_CONFUSION),
                                             LEVEL_UP_MOVE(25, MOVE_HEADBUTT),
                                             LEVEL_UP_MOVE(33, MOVE_POISON_GAS),
                                             LEVEL_UP_MOVE(40, MOVE_MEDITATE),
                                             LEVEL_UP_MOVE(49, MOVE_PSYCHIC),
                                             LEVEL_UP_MOVE(55, MOVE_PSYCH_UP),
                                             LEVEL_UP_MOVE(60, MOVE_FUTURE_SIGHT),
                                             LEVEL_UP_END };

static const u16 sKrabbyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BUBBLE),      LEVEL_UP_MOVE(5, MOVE_LEER),
                                              LEVEL_UP_MOVE(12, MOVE_VICE_GRIP),  LEVEL_UP_MOVE(16, MOVE_HARDEN),
                                              LEVEL_UP_MOVE(23, MOVE_MUD_SHOT),   LEVEL_UP_MOVE(27, MOVE_STOMP),
                                              LEVEL_UP_MOVE(34, MOVE_GUILLOTINE), LEVEL_UP_MOVE(41, MOVE_PROTECT),
                                              LEVEL_UP_MOVE(45, MOVE_CRABHAMMER), LEVEL_UP_END };

static const u16 sKinglerLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BUBBLE),      LEVEL_UP_MOVE(1, MOVE_LEER),
                                               LEVEL_UP_MOVE(1, MOVE_VICE_GRIP),   LEVEL_UP_MOVE(5, MOVE_LEER),
                                               LEVEL_UP_MOVE(12, MOVE_VICE_GRIP),  LEVEL_UP_MOVE(16, MOVE_HARDEN),
                                               LEVEL_UP_MOVE(23, MOVE_MUD_SHOT),   LEVEL_UP_MOVE(27, MOVE_STOMP),
                                               LEVEL_UP_MOVE(38, MOVE_GUILLOTINE), LEVEL_UP_MOVE(49, MOVE_PROTECT),
                                               LEVEL_UP_MOVE(57, MOVE_CRABHAMMER), LEVEL_UP_END };

static const u16 sVoltorbLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CHARGE),      LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(8, MOVE_SCREECH),
    LEVEL_UP_MOVE(15, MOVE_SONIC_BOOM), LEVEL_UP_MOVE(21, MOVE_SPARK),        LEVEL_UP_MOVE(27, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(32, MOVE_ROLLOUT),    LEVEL_UP_MOVE(37, MOVE_LIGHT_SCREEN), LEVEL_UP_MOVE(42, MOVE_SWIFT),
    LEVEL_UP_MOVE(46, MOVE_EXPLOSION),  LEVEL_UP_MOVE(49, MOVE_MIRROR_COAT),  LEVEL_UP_END
};

static const u16 sElectrodeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CHARGE),       LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_SCREECH),      LEVEL_UP_MOVE(1, MOVE_SONIC_BOOM),
    LEVEL_UP_MOVE(8, MOVE_SCREECH),      LEVEL_UP_MOVE(15, MOVE_SONIC_BOOM),
    LEVEL_UP_MOVE(21, MOVE_SPARK),       LEVEL_UP_MOVE(27, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(34, MOVE_ROLLOUT),     LEVEL_UP_MOVE(41, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(48, MOVE_SWIFT),       LEVEL_UP_MOVE(54, MOVE_EXPLOSION),
    LEVEL_UP_MOVE(59, MOVE_MIRROR_COAT), LEVEL_UP_END
};

static const u16 sExeggcuteLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BARRAGE),
                                                 LEVEL_UP_MOVE(1, MOVE_UPROAR),
                                                 LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
                                                 LEVEL_UP_MOVE(7, MOVE_REFLECT),
                                                 LEVEL_UP_MOVE(13, MOVE_LEECH_SEED),
                                                 LEVEL_UP_MOVE(19, MOVE_CONFUSION),
                                                 LEVEL_UP_MOVE(25, MOVE_STUN_SPORE),
                                                 LEVEL_UP_MOVE(31, MOVE_POISON_POWDER),
                                                 LEVEL_UP_MOVE(37, MOVE_SLEEP_POWDER),
                                                 LEVEL_UP_MOVE(43, MOVE_SOLAR_BEAM),
                                                 LEVEL_UP_END };

static const u16 sExeggutorLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BARRAGE),   LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
                                                 LEVEL_UP_MOVE(1, MOVE_CONFUSION), LEVEL_UP_MOVE(19, MOVE_STOMP),
                                                 LEVEL_UP_MOVE(31, MOVE_EGG_BOMB), LEVEL_UP_END };

static const u16 sCuboneLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(9, MOVE_BONE_CLUB),
                                              LEVEL_UP_MOVE(13, MOVE_HEADBUTT),
                                              LEVEL_UP_MOVE(17, MOVE_LEER),
                                              LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY),
                                              LEVEL_UP_MOVE(25, MOVE_BONEMERANG),
                                              LEVEL_UP_MOVE(29, MOVE_RAGE),
                                              LEVEL_UP_MOVE(33, MOVE_FALSE_SWIPE),
                                              LEVEL_UP_MOVE(37, MOVE_THRASH),
                                              LEVEL_UP_MOVE(41, MOVE_BONE_RUSH),
                                              LEVEL_UP_MOVE(45, MOVE_DOUBLE_EDGE),
                                              LEVEL_UP_END };

static const u16 sMarowakLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_BONE_CLUB),     LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),     LEVEL_UP_MOVE(9, MOVE_BONE_CLUB),
    LEVEL_UP_MOVE(13, MOVE_HEADBUTT),     LEVEL_UP_MOVE(17, MOVE_LEER),
    LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(25, MOVE_BONEMERANG),
    LEVEL_UP_MOVE(32, MOVE_RAGE),         LEVEL_UP_MOVE(39, MOVE_FALSE_SWIPE),
    LEVEL_UP_MOVE(46, MOVE_THRASH),       LEVEL_UP_MOVE(53, MOVE_BONE_RUSH),
    LEVEL_UP_MOVE(61, MOVE_DOUBLE_EDGE),  LEVEL_UP_END
};

static const u16 sHitmonleeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_REVENGE),       LEVEL_UP_MOVE(1, MOVE_DOUBLE_KICK),
    LEVEL_UP_MOVE(6, MOVE_MEDITATE),      LEVEL_UP_MOVE(11, MOVE_ROLLING_KICK),
    LEVEL_UP_MOVE(16, MOVE_JUMP_KICK),    LEVEL_UP_MOVE(20, MOVE_BRICK_BREAK),
    LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(26, MOVE_HI_JUMP_KICK),
    LEVEL_UP_MOVE(31, MOVE_MIND_READER),  LEVEL_UP_MOVE(36, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(41, MOVE_ENDURE),       LEVEL_UP_MOVE(46, MOVE_MEGA_KICK),
    LEVEL_UP_MOVE(51, MOVE_REVERSAL),     LEVEL_UP_END
};

static const u16 sHitmonchanLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_REVENGE),
                                                  LEVEL_UP_MOVE(1, MOVE_COMET_PUNCH),
                                                  LEVEL_UP_MOVE(7, MOVE_AGILITY),
                                                  LEVEL_UP_MOVE(13, MOVE_PURSUIT),
                                                  LEVEL_UP_MOVE(20, MOVE_MACH_PUNCH),
                                                  LEVEL_UP_MOVE(26, MOVE_THUNDER_PUNCH),
                                                  LEVEL_UP_MOVE(26, MOVE_ICE_PUNCH),
                                                  LEVEL_UP_MOVE(26, MOVE_FIRE_PUNCH),
                                                  LEVEL_UP_MOVE(32, MOVE_SKY_UPPERCUT),
                                                  LEVEL_UP_MOVE(38, MOVE_MEGA_PUNCH),
                                                  LEVEL_UP_MOVE(44, MOVE_DETECT),
                                                  LEVEL_UP_MOVE(50, MOVE_COUNTER),
                                                  LEVEL_UP_END };

static const u16 sLickitungLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LICK),
                                                 LEVEL_UP_MOVE(7, MOVE_SUPERSONIC),
                                                 LEVEL_UP_MOVE(12, MOVE_DEFENSE_CURL),
                                                 LEVEL_UP_MOVE(18, MOVE_KNOCK_OFF),
                                                 LEVEL_UP_MOVE(23, MOVE_STOMP),
                                                 LEVEL_UP_MOVE(29, MOVE_WRAP),
                                                 LEVEL_UP_MOVE(34, MOVE_DISABLE),
                                                 LEVEL_UP_MOVE(40, MOVE_SLAM),
                                                 LEVEL_UP_MOVE(45, MOVE_SCREECH),
                                                 LEVEL_UP_MOVE(51, MOVE_REFRESH),
                                                 LEVEL_UP_END };

static const u16 sKoffingLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POISON_GAS),
                                               LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                               LEVEL_UP_MOVE(9, MOVE_SMOG),
                                               LEVEL_UP_MOVE(17, MOVE_SELF_DESTRUCT),
                                               LEVEL_UP_MOVE(21, MOVE_SLUDGE),
                                               LEVEL_UP_MOVE(25, MOVE_SMOKESCREEN),
                                               LEVEL_UP_MOVE(33, MOVE_HAZE),
                                               LEVEL_UP_MOVE(41, MOVE_EXPLOSION),
                                               LEVEL_UP_MOVE(45, MOVE_DESTINY_BOND),
                                               LEVEL_UP_MOVE(49, MOVE_MEMENTO),
                                               LEVEL_UP_END };

static const u16 sWeezingLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POISON_GAS),
                                               LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                               LEVEL_UP_MOVE(1, MOVE_SMOG),
                                               LEVEL_UP_MOVE(1, MOVE_SELF_DESTRUCT),
                                               LEVEL_UP_MOVE(9, MOVE_SMOG),
                                               LEVEL_UP_MOVE(17, MOVE_SELF_DESTRUCT),
                                               LEVEL_UP_MOVE(21, MOVE_SLUDGE),
                                               LEVEL_UP_MOVE(25, MOVE_SMOKESCREEN),
                                               LEVEL_UP_MOVE(33, MOVE_HAZE),
                                               LEVEL_UP_MOVE(44, MOVE_EXPLOSION),
                                               LEVEL_UP_MOVE(51, MOVE_DESTINY_BOND),
                                               LEVEL_UP_MOVE(58, MOVE_MEMENTO),
                                               LEVEL_UP_END };

static const u16 sRhyhornLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_HORN_ATTACK),
                                               LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                               LEVEL_UP_MOVE(10, MOVE_STOMP),
                                               LEVEL_UP_MOVE(15, MOVE_FURY_ATTACK),
                                               LEVEL_UP_MOVE(24, MOVE_SCARY_FACE),
                                               LEVEL_UP_MOVE(29, MOVE_ROCK_BLAST),
                                               LEVEL_UP_MOVE(38, MOVE_HORN_DRILL),
                                               LEVEL_UP_MOVE(43, MOVE_TAKE_DOWN),
                                               LEVEL_UP_MOVE(52, MOVE_EARTHQUAKE),
                                               LEVEL_UP_MOVE(57, MOVE_MEGAHORN),
                                               LEVEL_UP_END };

static const u16 sRhydonLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_HORN_ATTACK),
                                              LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(1, MOVE_STOMP),
                                              LEVEL_UP_MOVE(1, MOVE_FURY_ATTACK),
                                              LEVEL_UP_MOVE(10, MOVE_STOMP),
                                              LEVEL_UP_MOVE(15, MOVE_FURY_ATTACK),
                                              LEVEL_UP_MOVE(24, MOVE_SCARY_FACE),
                                              LEVEL_UP_MOVE(29, MOVE_ROCK_BLAST),
                                              LEVEL_UP_MOVE(38, MOVE_HORN_DRILL),
                                              LEVEL_UP_MOVE(46, MOVE_TAKE_DOWN),
                                              LEVEL_UP_MOVE(58, MOVE_EARTHQUAKE),
                                              LEVEL_UP_MOVE(66, MOVE_MEGAHORN),
                                              LEVEL_UP_END };

static const u16 sChanseyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),
                                               LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
                                               LEVEL_UP_MOVE(9, MOVE_REFRESH),
                                               LEVEL_UP_MOVE(13, MOVE_SOFT_BOILED),
                                               LEVEL_UP_MOVE(17, MOVE_DOUBLE_SLAP),
                                               LEVEL_UP_MOVE(23, MOVE_MINIMIZE),
                                               LEVEL_UP_MOVE(29, MOVE_SING),
                                               LEVEL_UP_MOVE(35, MOVE_EGG_BOMB),
                                               LEVEL_UP_MOVE(41, MOVE_DEFENSE_CURL),
                                               LEVEL_UP_MOVE(49, MOVE_LIGHT_SCREEN),
                                               LEVEL_UP_MOVE(57, MOVE_DOUBLE_EDGE),
                                               LEVEL_UP_END };

static const u16 sTangelaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_INGRAIN),
                                               LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
                                               LEVEL_UP_MOVE(4, MOVE_SLEEP_POWDER),
                                               LEVEL_UP_MOVE(10, MOVE_ABSORB),
                                               LEVEL_UP_MOVE(13, MOVE_GROWTH),
                                               LEVEL_UP_MOVE(19, MOVE_POISON_POWDER),
                                               LEVEL_UP_MOVE(22, MOVE_VINE_WHIP),
                                               LEVEL_UP_MOVE(28, MOVE_BIND),
                                               LEVEL_UP_MOVE(31, MOVE_MEGA_DRAIN),
                                               LEVEL_UP_MOVE(37, MOVE_STUN_SPORE),
                                               LEVEL_UP_MOVE(40, MOVE_SLAM),
                                               LEVEL_UP_MOVE(46, MOVE_TICKLE),
                                               LEVEL_UP_END };

static const u16 sKangaskhanLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_COMET_PUNCH),
                                                  LEVEL_UP_MOVE(1, MOVE_LEER),
                                                  LEVEL_UP_MOVE(7, MOVE_BITE),
                                                  LEVEL_UP_MOVE(13, MOVE_TAIL_WHIP),
                                                  LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
                                                  LEVEL_UP_MOVE(25, MOVE_MEGA_PUNCH),
                                                  LEVEL_UP_MOVE(31, MOVE_RAGE),
                                                  LEVEL_UP_MOVE(37, MOVE_ENDURE),
                                                  LEVEL_UP_MOVE(43, MOVE_DIZZY_PUNCH),
                                                  LEVEL_UP_MOVE(49, MOVE_REVERSAL),
                                                  LEVEL_UP_END };

static const u16 sHorseaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),      LEVEL_UP_MOVE(8, MOVE_SMOKESCREEN),   LEVEL_UP_MOVE(15, MOVE_LEER),
    LEVEL_UP_MOVE(22, MOVE_WATER_GUN),  LEVEL_UP_MOVE(29, MOVE_TWISTER),      LEVEL_UP_MOVE(36, MOVE_AGILITY),
    LEVEL_UP_MOVE(43, MOVE_HYDRO_PUMP), LEVEL_UP_MOVE(50, MOVE_DRAGON_DANCE), LEVEL_UP_END
};

static const u16 sSeadraLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BUBBLE),        LEVEL_UP_MOVE(1, MOVE_SMOKESCREEN),
                                              LEVEL_UP_MOVE(1, MOVE_LEER),          LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                              LEVEL_UP_MOVE(8, MOVE_SMOKESCREEN),   LEVEL_UP_MOVE(15, MOVE_LEER),
                                              LEVEL_UP_MOVE(22, MOVE_WATER_GUN),    LEVEL_UP_MOVE(29, MOVE_TWISTER),
                                              LEVEL_UP_MOVE(40, MOVE_AGILITY),      LEVEL_UP_MOVE(51, MOVE_HYDRO_PUMP),
                                              LEVEL_UP_MOVE(62, MOVE_DRAGON_DANCE), LEVEL_UP_END };

static const u16 sGoldeenLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),
                                               LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                               LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
                                               LEVEL_UP_MOVE(10, MOVE_SUPERSONIC),
                                               LEVEL_UP_MOVE(15, MOVE_HORN_ATTACK),
                                               LEVEL_UP_MOVE(24, MOVE_FLAIL),
                                               LEVEL_UP_MOVE(29, MOVE_FURY_ATTACK),
                                               LEVEL_UP_MOVE(38, MOVE_WATERFALL),
                                               LEVEL_UP_MOVE(43, MOVE_HORN_DRILL),
                                               LEVEL_UP_MOVE(52, MOVE_AGILITY),
                                               LEVEL_UP_END };

static const u16 sSeakingLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),        LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                               LEVEL_UP_MOVE(1, MOVE_WATER_SPORT), LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),
                                               LEVEL_UP_MOVE(10, MOVE_SUPERSONIC), LEVEL_UP_MOVE(15, MOVE_HORN_ATTACK),
                                               LEVEL_UP_MOVE(24, MOVE_FLAIL),      LEVEL_UP_MOVE(29, MOVE_FURY_ATTACK),
                                               LEVEL_UP_MOVE(41, MOVE_WATERFALL),  LEVEL_UP_MOVE(49, MOVE_HORN_DRILL),
                                               LEVEL_UP_MOVE(61, MOVE_AGILITY),    LEVEL_UP_END };

static const u16 sStaryuLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                              LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                              LEVEL_UP_MOVE(6, MOVE_WATER_GUN),
                                              LEVEL_UP_MOVE(10, MOVE_RAPID_SPIN),
                                              LEVEL_UP_MOVE(15, MOVE_RECOVER),
                                              LEVEL_UP_MOVE(19, MOVE_CAMOUFLAGE),
                                              LEVEL_UP_MOVE(24, MOVE_SWIFT),
                                              LEVEL_UP_MOVE(28, MOVE_BUBBLE_BEAM),
                                              LEVEL_UP_MOVE(33, MOVE_MINIMIZE),
                                              LEVEL_UP_MOVE(37, MOVE_LIGHT_SCREEN),
                                              LEVEL_UP_MOVE(42, MOVE_COSMIC_POWER),
                                              LEVEL_UP_MOVE(46, MOVE_HYDRO_PUMP),
                                              LEVEL_UP_END };

static const u16 sStarmieLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WATER_GUN),    LEVEL_UP_MOVE(1, MOVE_RAPID_SPIN),
                                               LEVEL_UP_MOVE(1, MOVE_RECOVER),      LEVEL_UP_MOVE(1, MOVE_SWIFT),
                                               LEVEL_UP_MOVE(33, MOVE_CONFUSE_RAY), LEVEL_UP_END };

static const u16 sMrmimeLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BARRIER),      LEVEL_UP_MOVE(5, MOVE_CONFUSION),
                                              LEVEL_UP_MOVE(9, MOVE_SUBSTITUTE),   LEVEL_UP_MOVE(13, MOVE_MEDITATE),
                                              LEVEL_UP_MOVE(17, MOVE_DOUBLE_SLAP), LEVEL_UP_MOVE(21, MOVE_LIGHT_SCREEN),
                                              LEVEL_UP_MOVE(21, MOVE_REFLECT),     LEVEL_UP_MOVE(25, MOVE_ENCORE),
                                              LEVEL_UP_MOVE(29, MOVE_PSYBEAM),     LEVEL_UP_MOVE(33, MOVE_RECYCLE),
                                              LEVEL_UP_MOVE(37, MOVE_TRICK),       LEVEL_UP_MOVE(41, MOVE_ROLE_PLAY),
                                              LEVEL_UP_MOVE(45, MOVE_PSYCHIC),     LEVEL_UP_MOVE(49, MOVE_BATON_PASS),
                                              LEVEL_UP_MOVE(53, MOVE_SAFEGUARD),   LEVEL_UP_END };

static const u16 sScytherLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(1, MOVE_LEER),         LEVEL_UP_MOVE(6, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(11, MOVE_PURSUIT),     LEVEL_UP_MOVE(16, MOVE_FALSE_SWIPE), LEVEL_UP_MOVE(21, MOVE_AGILITY),
    LEVEL_UP_MOVE(26, MOVE_WING_ATTACK), LEVEL_UP_MOVE(31, MOVE_SLASH),       LEVEL_UP_MOVE(36, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(41, MOVE_DOUBLE_TEAM), LEVEL_UP_MOVE(46, MOVE_FURY_CUTTER), LEVEL_UP_END
};

static const u16 sJynxLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),        LEVEL_UP_MOVE(1, MOVE_LICK),
                                            LEVEL_UP_MOVE(1, MOVE_LOVELY_KISS),  LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
                                            LEVEL_UP_MOVE(9, MOVE_LOVELY_KISS),  LEVEL_UP_MOVE(13, MOVE_POWDER_SNOW),
                                            LEVEL_UP_MOVE(21, MOVE_DOUBLE_SLAP), LEVEL_UP_MOVE(25, MOVE_ICE_PUNCH),
                                            LEVEL_UP_MOVE(35, MOVE_MEAN_LOOK),   LEVEL_UP_MOVE(41, MOVE_FAKE_TEARS),
                                            LEVEL_UP_MOVE(51, MOVE_BODY_SLAM),   LEVEL_UP_MOVE(57, MOVE_PERISH_SONG),
                                            LEVEL_UP_MOVE(67, MOVE_BLIZZARD),    LEVEL_UP_END };

static const u16 sElectabuzzLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),  LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_THUNDER_PUNCH), LEVEL_UP_MOVE(9, MOVE_THUNDER_PUNCH),
    LEVEL_UP_MOVE(17, MOVE_LIGHT_SCREEN), LEVEL_UP_MOVE(25, MOVE_SWIFT),
    LEVEL_UP_MOVE(36, MOVE_SCREECH),      LEVEL_UP_MOVE(47, MOVE_THUNDERBOLT),
    LEVEL_UP_MOVE(58, MOVE_THUNDER),      LEVEL_UP_END
};

static const u16 sMagmarLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_EMBER),
                                              LEVEL_UP_MOVE(1, MOVE_LEER),
                                              LEVEL_UP_MOVE(1, MOVE_SMOG),
                                              LEVEL_UP_MOVE(1, MOVE_FIRE_PUNCH),
                                              LEVEL_UP_MOVE(7, MOVE_LEER),
                                              LEVEL_UP_MOVE(13, MOVE_SMOG),
                                              LEVEL_UP_MOVE(19, MOVE_FIRE_PUNCH),
                                              LEVEL_UP_MOVE(25, MOVE_SMOKESCREEN),
                                              LEVEL_UP_MOVE(33, MOVE_SUNNY_DAY),
                                              LEVEL_UP_MOVE(41, MOVE_FLAMETHROWER),
                                              LEVEL_UP_MOVE(49, MOVE_CONFUSE_RAY),
                                              LEVEL_UP_MOVE(57, MOVE_FIRE_BLAST),
                                              LEVEL_UP_END };

static const u16 sPinsirLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_VICE_GRIP),
                                              LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
                                              LEVEL_UP_MOVE(7, MOVE_BIND),
                                              LEVEL_UP_MOVE(13, MOVE_SEISMIC_TOSS),
                                              LEVEL_UP_MOVE(19, MOVE_HARDEN),
                                              LEVEL_UP_MOVE(25, MOVE_REVENGE),
                                              LEVEL_UP_MOVE(31, MOVE_BRICK_BREAK),
                                              LEVEL_UP_MOVE(37, MOVE_GUILLOTINE),
                                              LEVEL_UP_MOVE(43, MOVE_SUBMISSION),
                                              LEVEL_UP_MOVE(49, MOVE_SWORDS_DANCE),
                                              LEVEL_UP_END };

static const u16 sTaurosLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(8, MOVE_RAGE),        LEVEL_UP_MOVE(13, MOVE_HORN_ATTACK),
                                              LEVEL_UP_MOVE(19, MOVE_SCARY_FACE), LEVEL_UP_MOVE(26, MOVE_PURSUIT),
                                              LEVEL_UP_MOVE(34, MOVE_REST),       LEVEL_UP_MOVE(43, MOVE_THRASH),
                                              LEVEL_UP_MOVE(53, MOVE_TAKE_DOWN),  LEVEL_UP_END };

static const u16 sMagikarpLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SPLASH), LEVEL_UP_MOVE(15, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(30, MOVE_FLAIL), LEVEL_UP_END };

static const u16 sGyaradosLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_THRASH),       LEVEL_UP_MOVE(20, MOVE_BITE),
    LEVEL_UP_MOVE(25, MOVE_DRAGON_RAGE), LEVEL_UP_MOVE(30, MOVE_LEER),
    LEVEL_UP_MOVE(35, MOVE_TWISTER),     LEVEL_UP_MOVE(40, MOVE_HYDRO_PUMP),
    LEVEL_UP_MOVE(45, MOVE_RAIN_DANCE),  LEVEL_UP_MOVE(50, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(55, MOVE_HYPER_BEAM),  LEVEL_UP_END
};

static const u16 sLaprasLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                              LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(1, MOVE_SING),
                                              LEVEL_UP_MOVE(7, MOVE_MIST),
                                              LEVEL_UP_MOVE(13, MOVE_BODY_SLAM),
                                              LEVEL_UP_MOVE(19, MOVE_CONFUSE_RAY),
                                              LEVEL_UP_MOVE(25, MOVE_PERISH_SONG),
                                              LEVEL_UP_MOVE(31, MOVE_ICE_BEAM),
                                              LEVEL_UP_MOVE(37, MOVE_RAIN_DANCE),
                                              LEVEL_UP_MOVE(43, MOVE_SAFEGUARD),
                                              LEVEL_UP_MOVE(49, MOVE_HYDRO_PUMP),
                                              LEVEL_UP_MOVE(55, MOVE_SHEER_COLD),
                                              LEVEL_UP_END };

static const u16 sDittoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TRANSFORM), LEVEL_UP_END };

static const u16 sEeveeLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                             LEVEL_UP_MOVE(1, MOVE_HELPING_HAND), LEVEL_UP_MOVE(8, MOVE_SAND_ATTACK),
                                             LEVEL_UP_MOVE(16, MOVE_GROWL),       LEVEL_UP_MOVE(23, MOVE_QUICK_ATTACK),
                                             LEVEL_UP_MOVE(30, MOVE_BITE),        LEVEL_UP_MOVE(36, MOVE_BATON_PASS),
                                             LEVEL_UP_MOVE(42, MOVE_TAKE_DOWN),   LEVEL_UP_END };

static const u16 sVaporeonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),    LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(8, MOVE_SAND_ATTACK), LEVEL_UP_MOVE(16, MOVE_WATER_GUN),   LEVEL_UP_MOVE(23, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(30, MOVE_BITE),       LEVEL_UP_MOVE(36, MOVE_AURORA_BEAM), LEVEL_UP_MOVE(42, MOVE_HAZE),
    LEVEL_UP_MOVE(47, MOVE_ACID_ARMOR), LEVEL_UP_MOVE(52, MOVE_HYDRO_PUMP),  LEVEL_UP_END
};

static const u16 sJolteonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),      LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(8, MOVE_SAND_ATTACK),  LEVEL_UP_MOVE(16, MOVE_THUNDER_SHOCK), LEVEL_UP_MOVE(23, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(30, MOVE_DOUBLE_KICK), LEVEL_UP_MOVE(36, MOVE_PIN_MISSILE),   LEVEL_UP_MOVE(42, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(47, MOVE_AGILITY),     LEVEL_UP_MOVE(52, MOVE_THUNDER),       LEVEL_UP_END
};

static const u16 sFlareonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),     LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(8, MOVE_SAND_ATTACK), LEVEL_UP_MOVE(16, MOVE_EMBER),        LEVEL_UP_MOVE(23, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(30, MOVE_BITE),       LEVEL_UP_MOVE(36, MOVE_FIRE_SPIN),    LEVEL_UP_MOVE(42, MOVE_SMOG),
    LEVEL_UP_MOVE(47, MOVE_LEER),       LEVEL_UP_MOVE(52, MOVE_FLAMETHROWER), LEVEL_UP_END
};

static const u16 sPorygonLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CONVERSION_2), LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                               LEVEL_UP_MOVE(1, MOVE_CONVERSION),   LEVEL_UP_MOVE(9, MOVE_AGILITY),
                                               LEVEL_UP_MOVE(12, MOVE_PSYBEAM),     LEVEL_UP_MOVE(20, MOVE_RECOVER),
                                               LEVEL_UP_MOVE(24, MOVE_SHARPEN),     LEVEL_UP_MOVE(32, MOVE_LOCK_ON),
                                               LEVEL_UP_MOVE(36, MOVE_TRI_ATTACK),  LEVEL_UP_MOVE(44, MOVE_RECYCLE),
                                               LEVEL_UP_MOVE(48, MOVE_ZAP_CANNON),  LEVEL_UP_END };

static const u16 sOmanyteLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
                                               LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
                                               LEVEL_UP_MOVE(13, MOVE_BITE),
                                               LEVEL_UP_MOVE(19, MOVE_WATER_GUN),
                                               LEVEL_UP_MOVE(25, MOVE_MUD_SHOT),
                                               LEVEL_UP_MOVE(31, MOVE_LEER),
                                               LEVEL_UP_MOVE(37, MOVE_PROTECT),
                                               LEVEL_UP_MOVE(43, MOVE_TICKLE),
                                               LEVEL_UP_MOVE(49, MOVE_ANCIENT_POWER),
                                               LEVEL_UP_MOVE(55, MOVE_HYDRO_PUMP),
                                               LEVEL_UP_END };

static const u16 sOmastarLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
                                               LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
                                               LEVEL_UP_MOVE(1, MOVE_BITE),
                                               LEVEL_UP_MOVE(13, MOVE_BITE),
                                               LEVEL_UP_MOVE(19, MOVE_WATER_GUN),
                                               LEVEL_UP_MOVE(25, MOVE_MUD_SHOT),
                                               LEVEL_UP_MOVE(31, MOVE_LEER),
                                               LEVEL_UP_MOVE(37, MOVE_PROTECT),
                                               LEVEL_UP_MOVE(40, MOVE_SPIKE_CANNON),
                                               LEVEL_UP_MOVE(46, MOVE_TICKLE),
                                               LEVEL_UP_MOVE(55, MOVE_ANCIENT_POWER),
                                               LEVEL_UP_MOVE(65, MOVE_HYDRO_PUMP),
                                               LEVEL_UP_END };

static const u16 sKabutoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                              LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                              LEVEL_UP_MOVE(13, MOVE_ABSORB),
                                              LEVEL_UP_MOVE(19, MOVE_LEER),
                                              LEVEL_UP_MOVE(25, MOVE_MUD_SHOT),
                                              LEVEL_UP_MOVE(31, MOVE_SAND_ATTACK),
                                              LEVEL_UP_MOVE(37, MOVE_ENDURE),
                                              LEVEL_UP_MOVE(43, MOVE_METAL_SOUND),
                                              LEVEL_UP_MOVE(49, MOVE_MEGA_DRAIN),
                                              LEVEL_UP_MOVE(55, MOVE_ANCIENT_POWER),
                                              LEVEL_UP_END };

static const u16 sKabutopsLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                                LEVEL_UP_MOVE(1, MOVE_ABSORB),
                                                LEVEL_UP_MOVE(13, MOVE_ABSORB),
                                                LEVEL_UP_MOVE(19, MOVE_LEER),
                                                LEVEL_UP_MOVE(25, MOVE_MUD_SHOT),
                                                LEVEL_UP_MOVE(31, MOVE_SAND_ATTACK),
                                                LEVEL_UP_MOVE(37, MOVE_ENDURE),
                                                LEVEL_UP_MOVE(40, MOVE_SLASH),
                                                LEVEL_UP_MOVE(46, MOVE_METAL_SOUND),
                                                LEVEL_UP_MOVE(55, MOVE_MEGA_DRAIN),
                                                LEVEL_UP_MOVE(65, MOVE_ANCIENT_POWER),
                                                LEVEL_UP_END };

static const u16 sAerodactylLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WING_ATTACK), LEVEL_UP_MOVE(8, MOVE_AGILITY),        LEVEL_UP_MOVE(15, MOVE_BITE),
    LEVEL_UP_MOVE(22, MOVE_SUPERSONIC), LEVEL_UP_MOVE(29, MOVE_ANCIENT_POWER), LEVEL_UP_MOVE(36, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(43, MOVE_TAKE_DOWN),  LEVEL_UP_MOVE(50, MOVE_HYPER_BEAM),    LEVEL_UP_END
};

static const u16 sSnorlaxLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(6, MOVE_AMNESIA),
                                               LEVEL_UP_MOVE(10, MOVE_DEFENSE_CURL), LEVEL_UP_MOVE(15, MOVE_BELLY_DRUM),
                                               LEVEL_UP_MOVE(19, MOVE_HEADBUTT),     LEVEL_UP_MOVE(24, MOVE_YAWN),
                                               LEVEL_UP_MOVE(28, MOVE_REST),         LEVEL_UP_MOVE(28, MOVE_SNORE),
                                               LEVEL_UP_MOVE(33, MOVE_BODY_SLAM),    LEVEL_UP_MOVE(37, MOVE_BLOCK),
                                               LEVEL_UP_MOVE(42, MOVE_COVET),        LEVEL_UP_MOVE(46, MOVE_ROLLOUT),
                                               LEVEL_UP_MOVE(51, MOVE_HYPER_BEAM),   LEVEL_UP_END };

static const u16 sArticunoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GUST),         LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
                                                LEVEL_UP_MOVE(13, MOVE_MIST),        LEVEL_UP_MOVE(25, MOVE_AGILITY),
                                                LEVEL_UP_MOVE(37, MOVE_MIND_READER), LEVEL_UP_MOVE(49, MOVE_ICE_BEAM),
                                                LEVEL_UP_MOVE(61, MOVE_REFLECT),     LEVEL_UP_MOVE(73, MOVE_BLIZZARD),
                                                LEVEL_UP_MOVE(85, MOVE_SHEER_COLD),  LEVEL_UP_END };

static const u16 sZapdosLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),          LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(13, MOVE_THUNDER_WAVE), LEVEL_UP_MOVE(25, MOVE_AGILITY),
    LEVEL_UP_MOVE(37, MOVE_DETECT),       LEVEL_UP_MOVE(49, MOVE_DRILL_PECK),
    LEVEL_UP_MOVE(61, MOVE_CHARGE),       LEVEL_UP_MOVE(73, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(85, MOVE_THUNDER),      LEVEL_UP_END
};

static const u16 sMoltresLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WING_ATTACK), LEVEL_UP_MOVE(1, MOVE_EMBER),
                                               LEVEL_UP_MOVE(13, MOVE_FIRE_SPIN),  LEVEL_UP_MOVE(25, MOVE_AGILITY),
                                               LEVEL_UP_MOVE(37, MOVE_ENDURE),     LEVEL_UP_MOVE(49, MOVE_FLAMETHROWER),
                                               LEVEL_UP_MOVE(61, MOVE_SAFEGUARD),  LEVEL_UP_MOVE(73, MOVE_HEAT_WAVE),
                                               LEVEL_UP_MOVE(85, MOVE_SKY_ATTACK), LEVEL_UP_END };

static const u16 sDratiniLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WRAP),
                                               LEVEL_UP_MOVE(1, MOVE_LEER),
                                               LEVEL_UP_MOVE(8, MOVE_THUNDER_WAVE),
                                               LEVEL_UP_MOVE(15, MOVE_TWISTER),
                                               LEVEL_UP_MOVE(22, MOVE_DRAGON_RAGE),
                                               LEVEL_UP_MOVE(29, MOVE_SLAM),
                                               LEVEL_UP_MOVE(36, MOVE_AGILITY),
                                               LEVEL_UP_MOVE(43, MOVE_SAFEGUARD),
                                               LEVEL_UP_MOVE(50, MOVE_OUTRAGE),
                                               LEVEL_UP_MOVE(57, MOVE_HYPER_BEAM),
                                               LEVEL_UP_END };

static const u16 sDragonairLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WRAP),
                                                 LEVEL_UP_MOVE(1, MOVE_LEER),
                                                 LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
                                                 LEVEL_UP_MOVE(1, MOVE_TWISTER),
                                                 LEVEL_UP_MOVE(8, MOVE_THUNDER_WAVE),
                                                 LEVEL_UP_MOVE(15, MOVE_TWISTER),
                                                 LEVEL_UP_MOVE(22, MOVE_DRAGON_RAGE),
                                                 LEVEL_UP_MOVE(29, MOVE_SLAM),
                                                 LEVEL_UP_MOVE(38, MOVE_AGILITY),
                                                 LEVEL_UP_MOVE(47, MOVE_SAFEGUARD),
                                                 LEVEL_UP_MOVE(56, MOVE_OUTRAGE),
                                                 LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),
                                                 LEVEL_UP_END };

static const u16 sDragoniteLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WRAP),         LEVEL_UP_MOVE(1, MOVE_LEER),
                                                 LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE), LEVEL_UP_MOVE(1, MOVE_TWISTER),
                                                 LEVEL_UP_MOVE(8, MOVE_THUNDER_WAVE), LEVEL_UP_MOVE(15, MOVE_TWISTER),
                                                 LEVEL_UP_MOVE(22, MOVE_DRAGON_RAGE), LEVEL_UP_MOVE(29, MOVE_SLAM),
                                                 LEVEL_UP_MOVE(38, MOVE_AGILITY),     LEVEL_UP_MOVE(47, MOVE_SAFEGUARD),
                                                 LEVEL_UP_MOVE(55, MOVE_WING_ATTACK), LEVEL_UP_MOVE(61, MOVE_OUTRAGE),
                                                 LEVEL_UP_MOVE(75, MOVE_HYPER_BEAM),  LEVEL_UP_END };

static const u16 sMewtwoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CONFUSION),  LEVEL_UP_MOVE(1, MOVE_DISABLE),
                                              LEVEL_UP_MOVE(11, MOVE_BARRIER),   LEVEL_UP_MOVE(22, MOVE_SWIFT),
                                              LEVEL_UP_MOVE(33, MOVE_PSYCH_UP),  LEVEL_UP_MOVE(44, MOVE_FUTURE_SIGHT),
                                              LEVEL_UP_MOVE(55, MOVE_MIST),      LEVEL_UP_MOVE(66, MOVE_PSYCHIC),
                                              LEVEL_UP_MOVE(77, MOVE_AMNESIA),   LEVEL_UP_MOVE(88, MOVE_RECOVER),
                                              LEVEL_UP_MOVE(99, MOVE_SAFEGUARD), LEVEL_UP_END };

static const u16 sMewLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),
                                           LEVEL_UP_MOVE(10, MOVE_TRANSFORM),
                                           LEVEL_UP_MOVE(20, MOVE_MEGA_PUNCH),
                                           LEVEL_UP_MOVE(30, MOVE_METRONOME),
                                           LEVEL_UP_MOVE(40, MOVE_PSYCHIC),
                                           LEVEL_UP_MOVE(50, MOVE_ANCIENT_POWER),
                                           LEVEL_UP_END };

static const u16 sChikoritaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                 LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                 LEVEL_UP_MOVE(8, MOVE_RAZOR_LEAF),
                                                 LEVEL_UP_MOVE(12, MOVE_REFLECT),
                                                 LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
                                                 LEVEL_UP_MOVE(22, MOVE_SYNTHESIS),
                                                 LEVEL_UP_MOVE(29, MOVE_BODY_SLAM),
                                                 LEVEL_UP_MOVE(36, MOVE_LIGHT_SCREEN),
                                                 LEVEL_UP_MOVE(43, MOVE_SAFEGUARD),
                                                 LEVEL_UP_MOVE(50, MOVE_SOLAR_BEAM),
                                                 LEVEL_UP_END };

static const u16 sBayleefLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                               LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(1, MOVE_RAZOR_LEAF),
                                               LEVEL_UP_MOVE(1, MOVE_REFLECT),
                                               LEVEL_UP_MOVE(8, MOVE_RAZOR_LEAF),
                                               LEVEL_UP_MOVE(12, MOVE_REFLECT),
                                               LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
                                               LEVEL_UP_MOVE(23, MOVE_SYNTHESIS),
                                               LEVEL_UP_MOVE(31, MOVE_BODY_SLAM),
                                               LEVEL_UP_MOVE(39, MOVE_LIGHT_SCREEN),
                                               LEVEL_UP_MOVE(47, MOVE_SAFEGUARD),
                                               LEVEL_UP_MOVE(55, MOVE_SOLAR_BEAM),
                                               LEVEL_UP_END };

static const u16 sMeganiumLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                LEVEL_UP_MOVE(1, MOVE_RAZOR_LEAF),
                                                LEVEL_UP_MOVE(1, MOVE_REFLECT),
                                                LEVEL_UP_MOVE(8, MOVE_RAZOR_LEAF),
                                                LEVEL_UP_MOVE(12, MOVE_REFLECT),
                                                LEVEL_UP_MOVE(15, MOVE_POISON_POWDER),
                                                LEVEL_UP_MOVE(23, MOVE_SYNTHESIS),
                                                LEVEL_UP_MOVE(31, MOVE_BODY_SLAM),
                                                LEVEL_UP_MOVE(41, MOVE_LIGHT_SCREEN),
                                                LEVEL_UP_MOVE(51, MOVE_SAFEGUARD),
                                                LEVEL_UP_MOVE(61, MOVE_SOLAR_BEAM),
                                                LEVEL_UP_END };

static const u16 sCyndaquilLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_MOVE(1, MOVE_LEER),          LEVEL_UP_MOVE(6, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(12, MOVE_EMBER), LEVEL_UP_MOVE(19, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(27, MOVE_FLAME_WHEEL),
    LEVEL_UP_MOVE(36, MOVE_SWIFT), LEVEL_UP_MOVE(46, MOVE_FLAMETHROWER), LEVEL_UP_END
};

static const u16 sQuilavaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_SMOKESCREEN),   LEVEL_UP_MOVE(6, MOVE_SMOKESCREEN),
    LEVEL_UP_MOVE(12, MOVE_EMBER),        LEVEL_UP_MOVE(21, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(31, MOVE_FLAME_WHEEL),  LEVEL_UP_MOVE(42, MOVE_SWIFT),
    LEVEL_UP_MOVE(54, MOVE_FLAMETHROWER), LEVEL_UP_END
};

static const u16 sTyphlosionLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                  LEVEL_UP_MOVE(1, MOVE_LEER),
                                                  LEVEL_UP_MOVE(1, MOVE_SMOKESCREEN),
                                                  LEVEL_UP_MOVE(1, MOVE_EMBER),
                                                  LEVEL_UP_MOVE(6, MOVE_SMOKESCREEN),
                                                  LEVEL_UP_MOVE(12, MOVE_EMBER),
                                                  LEVEL_UP_MOVE(21, MOVE_QUICK_ATTACK),
                                                  LEVEL_UP_MOVE(31, MOVE_FLAME_WHEEL),
                                                  LEVEL_UP_MOVE(45, MOVE_SWIFT),
                                                  LEVEL_UP_MOVE(60, MOVE_FLAMETHROWER),
                                                  LEVEL_UP_END };

static const u16 sTotodileLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),     LEVEL_UP_MOVE(1, MOVE_LEER),
                                                LEVEL_UP_MOVE(7, MOVE_RAGE),        LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(20, MOVE_BITE),       LEVEL_UP_MOVE(27, MOVE_SCARY_FACE),
                                                LEVEL_UP_MOVE(35, MOVE_SLASH),      LEVEL_UP_MOVE(43, MOVE_SCREECH),
                                                LEVEL_UP_MOVE(52, MOVE_HYDRO_PUMP), LEVEL_UP_END };

static const u16 sCroconawLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                LEVEL_UP_MOVE(1, MOVE_LEER),
                                                LEVEL_UP_MOVE(1, MOVE_RAGE),
                                                LEVEL_UP_MOVE(7, MOVE_RAGE),
                                                LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(21, MOVE_BITE),
                                                LEVEL_UP_MOVE(28, MOVE_SCARY_FACE),
                                                LEVEL_UP_MOVE(37, MOVE_SLASH),
                                                LEVEL_UP_MOVE(45, MOVE_SCREECH),
                                                LEVEL_UP_MOVE(55, MOVE_HYDRO_PUMP),
                                                LEVEL_UP_END };

static const u16 sFeraligatrLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),   LEVEL_UP_MOVE(1, MOVE_LEER),        LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN), LEVEL_UP_MOVE(7, MOVE_RAGE),        LEVEL_UP_MOVE(13, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(21, MOVE_BITE),     LEVEL_UP_MOVE(28, MOVE_SCARY_FACE), LEVEL_UP_MOVE(38, MOVE_SLASH),
    LEVEL_UP_MOVE(47, MOVE_SCREECH),  LEVEL_UP_MOVE(58, MOVE_HYDRO_PUMP), LEVEL_UP_END
};

static const u16 sSentretLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),       LEVEL_UP_MOVE(4, MOVE_DEFENSE_CURL),
    LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),  LEVEL_UP_MOVE(12, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(17, MOVE_HELPING_HAND), LEVEL_UP_MOVE(24, MOVE_SLAM),
    LEVEL_UP_MOVE(31, MOVE_FOLLOW_ME),    LEVEL_UP_MOVE(40, MOVE_REST),
    LEVEL_UP_MOVE(49, MOVE_AMNESIA),      LEVEL_UP_END
};

static const u16 sFurretLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),       LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
                                              LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),  LEVEL_UP_MOVE(4, MOVE_DEFENSE_CURL),
                                              LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),  LEVEL_UP_MOVE(12, MOVE_FURY_SWIPES),
                                              LEVEL_UP_MOVE(19, MOVE_HELPING_HAND), LEVEL_UP_MOVE(28, MOVE_SLAM),
                                              LEVEL_UP_MOVE(37, MOVE_FOLLOW_ME),    LEVEL_UP_MOVE(48, MOVE_REST),
                                              LEVEL_UP_MOVE(59, MOVE_AMNESIA),      LEVEL_UP_END };

static const u16 sHoothootLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                LEVEL_UP_MOVE(6, MOVE_FORESIGHT),    LEVEL_UP_MOVE(11, MOVE_PECK),
                                                LEVEL_UP_MOVE(16, MOVE_HYPNOSIS),    LEVEL_UP_MOVE(22, MOVE_REFLECT),
                                                LEVEL_UP_MOVE(28, MOVE_TAKE_DOWN),   LEVEL_UP_MOVE(34, MOVE_CONFUSION),
                                                LEVEL_UP_MOVE(48, MOVE_DREAM_EATER), LEVEL_UP_END };

static const u16 sNoctowlLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(1, MOVE_FORESIGHT),    LEVEL_UP_MOVE(1, MOVE_PECK),
                                               LEVEL_UP_MOVE(6, MOVE_FORESIGHT),    LEVEL_UP_MOVE(11, MOVE_PECK),
                                               LEVEL_UP_MOVE(16, MOVE_HYPNOSIS),    LEVEL_UP_MOVE(25, MOVE_REFLECT),
                                               LEVEL_UP_MOVE(33, MOVE_TAKE_DOWN),   LEVEL_UP_MOVE(41, MOVE_CONFUSION),
                                               LEVEL_UP_MOVE(57, MOVE_DREAM_EATER), LEVEL_UP_END };

static const u16 sLedybaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                              LEVEL_UP_MOVE(8, MOVE_SUPERSONIC),
                                              LEVEL_UP_MOVE(15, MOVE_COMET_PUNCH),
                                              LEVEL_UP_MOVE(22, MOVE_LIGHT_SCREEN),
                                              LEVEL_UP_MOVE(22, MOVE_REFLECT),
                                              LEVEL_UP_MOVE(22, MOVE_SAFEGUARD),
                                              LEVEL_UP_MOVE(29, MOVE_BATON_PASS),
                                              LEVEL_UP_MOVE(36, MOVE_SWIFT),
                                              LEVEL_UP_MOVE(43, MOVE_AGILITY),
                                              LEVEL_UP_MOVE(50, MOVE_DOUBLE_EDGE),
                                              LEVEL_UP_END };

static const u16 sLedianLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),
                                              LEVEL_UP_MOVE(8, MOVE_SUPERSONIC),    LEVEL_UP_MOVE(15, MOVE_COMET_PUNCH),
                                              LEVEL_UP_MOVE(24, MOVE_LIGHT_SCREEN), LEVEL_UP_MOVE(24, MOVE_REFLECT),
                                              LEVEL_UP_MOVE(24, MOVE_SAFEGUARD),    LEVEL_UP_MOVE(33, MOVE_BATON_PASS),
                                              LEVEL_UP_MOVE(42, MOVE_SWIFT),        LEVEL_UP_MOVE(51, MOVE_AGILITY),
                                              LEVEL_UP_MOVE(60, MOVE_DOUBLE_EDGE),  LEVEL_UP_END };

static const u16 sSpinarakLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POISON_STING),
                                                LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
                                                LEVEL_UP_MOVE(6, MOVE_SCARY_FACE),
                                                LEVEL_UP_MOVE(11, MOVE_CONSTRICT),
                                                LEVEL_UP_MOVE(17, MOVE_NIGHT_SHADE),
                                                LEVEL_UP_MOVE(23, MOVE_LEECH_LIFE),
                                                LEVEL_UP_MOVE(30, MOVE_FURY_SWIPES),
                                                LEVEL_UP_MOVE(37, MOVE_SPIDER_WEB),
                                                LEVEL_UP_MOVE(45, MOVE_AGILITY),
                                                LEVEL_UP_MOVE(53, MOVE_PSYCHIC),
                                                LEVEL_UP_END };

static const u16 sAriadosLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POISON_STING),
                                               LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
                                               LEVEL_UP_MOVE(1, MOVE_SCARY_FACE),
                                               LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
                                               LEVEL_UP_MOVE(6, MOVE_SCARY_FACE),
                                               LEVEL_UP_MOVE(11, MOVE_CONSTRICT),
                                               LEVEL_UP_MOVE(17, MOVE_NIGHT_SHADE),
                                               LEVEL_UP_MOVE(25, MOVE_LEECH_LIFE),
                                               LEVEL_UP_MOVE(34, MOVE_FURY_SWIPES),
                                               LEVEL_UP_MOVE(43, MOVE_SPIDER_WEB),
                                               LEVEL_UP_MOVE(53, MOVE_AGILITY),
                                               LEVEL_UP_MOVE(63, MOVE_PSYCHIC),
                                               LEVEL_UP_END };

static const u16 sCrobatLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCREECH),      LEVEL_UP_MOVE(1, MOVE_LEECH_LIFE),
                                              LEVEL_UP_MOVE(1, MOVE_SUPERSONIC),   LEVEL_UP_MOVE(1, MOVE_ASTONISH),
                                              LEVEL_UP_MOVE(6, MOVE_SUPERSONIC),   LEVEL_UP_MOVE(11, MOVE_ASTONISH),
                                              LEVEL_UP_MOVE(16, MOVE_BITE),        LEVEL_UP_MOVE(21, MOVE_WING_ATTACK),
                                              LEVEL_UP_MOVE(28, MOVE_CONFUSE_RAY), LEVEL_UP_MOVE(35, MOVE_AIR_CUTTER),
                                              LEVEL_UP_MOVE(42, MOVE_MEAN_LOOK),   LEVEL_UP_MOVE(49, MOVE_POISON_FANG),
                                              LEVEL_UP_MOVE(56, MOVE_HAZE),        LEVEL_UP_END };

static const u16 sChinchouLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BUBBLE),
                                                LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
                                                LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
                                                LEVEL_UP_MOVE(13, MOVE_FLAIL),
                                                LEVEL_UP_MOVE(17, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(25, MOVE_SPARK),
                                                LEVEL_UP_MOVE(29, MOVE_CONFUSE_RAY),
                                                LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
                                                LEVEL_UP_MOVE(41, MOVE_HYDRO_PUMP),
                                                LEVEL_UP_MOVE(49, MOVE_CHARGE),
                                                LEVEL_UP_END };

static const u16 sLanturnLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BUBBLE),     LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
                                               LEVEL_UP_MOVE(1, MOVE_SUPERSONIC), LEVEL_UP_MOVE(5, MOVE_SUPERSONIC),
                                               LEVEL_UP_MOVE(13, MOVE_FLAIL),     LEVEL_UP_MOVE(17, MOVE_WATER_GUN),
                                               LEVEL_UP_MOVE(25, MOVE_SPARK),     LEVEL_UP_MOVE(32, MOVE_CONFUSE_RAY),
                                               LEVEL_UP_MOVE(43, MOVE_TAKE_DOWN), LEVEL_UP_MOVE(50, MOVE_HYDRO_PUMP),
                                               LEVEL_UP_MOVE(61, MOVE_CHARGE),    LEVEL_UP_END };

static const u16 sPichuLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK), LEVEL_UP_MOVE(1, MOVE_CHARM),
                                             LEVEL_UP_MOVE(6, MOVE_TAIL_WHIP),     LEVEL_UP_MOVE(8, MOVE_THUNDER_WAVE),
                                             LEVEL_UP_MOVE(11, MOVE_SWEET_KISS),   LEVEL_UP_END };

static const u16 sCleffaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),       LEVEL_UP_MOVE(1, MOVE_CHARM),
                                              LEVEL_UP_MOVE(4, MOVE_ENCORE),      LEVEL_UP_MOVE(8, MOVE_SING),
                                              LEVEL_UP_MOVE(13, MOVE_SWEET_KISS), LEVEL_UP_END };

static const u16 sIgglybuffLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SING),         LEVEL_UP_MOVE(1, MOVE_CHARM),
                                                 LEVEL_UP_MOVE(4, MOVE_DEFENSE_CURL), LEVEL_UP_MOVE(9, MOVE_POUND),
                                                 LEVEL_UP_MOVE(14, MOVE_SWEET_KISS),  LEVEL_UP_END };

static const u16 sTogepiLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(1, MOVE_CHARM),
                                              LEVEL_UP_MOVE(6, MOVE_METRONOME),
                                              LEVEL_UP_MOVE(11, MOVE_SWEET_KISS),
                                              LEVEL_UP_MOVE(16, MOVE_YAWN),
                                              LEVEL_UP_MOVE(21, MOVE_ENCORE),
                                              LEVEL_UP_MOVE(26, MOVE_FOLLOW_ME),
                                              LEVEL_UP_MOVE(31, MOVE_WISH),
                                              LEVEL_UP_MOVE(36, MOVE_SAFEGUARD),
                                              LEVEL_UP_MOVE(41, MOVE_DOUBLE_EDGE),
                                              LEVEL_UP_END };

static const u16 sTogeticLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(1, MOVE_CHARM),
                                               LEVEL_UP_MOVE(6, MOVE_METRONOME),
                                               LEVEL_UP_MOVE(11, MOVE_SWEET_KISS),
                                               LEVEL_UP_MOVE(16, MOVE_YAWN),
                                               LEVEL_UP_MOVE(21, MOVE_ENCORE),
                                               LEVEL_UP_MOVE(26, MOVE_FOLLOW_ME),
                                               LEVEL_UP_MOVE(31, MOVE_WISH),
                                               LEVEL_UP_MOVE(36, MOVE_SAFEGUARD),
                                               LEVEL_UP_MOVE(41, MOVE_DOUBLE_EDGE),
                                               LEVEL_UP_END };

static const u16 sNatuLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),         LEVEL_UP_MOVE(1, MOVE_LEER),     LEVEL_UP_MOVE(10, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(20, MOVE_TELEPORT),    LEVEL_UP_MOVE(30, MOVE_WISH),    LEVEL_UP_MOVE(30, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(40, MOVE_CONFUSE_RAY), LEVEL_UP_MOVE(50, MOVE_PSYCHIC), LEVEL_UP_END
};

static const u16 sXatuLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),         LEVEL_UP_MOVE(1, MOVE_LEER),     LEVEL_UP_MOVE(10, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(20, MOVE_TELEPORT),    LEVEL_UP_MOVE(35, MOVE_WISH),    LEVEL_UP_MOVE(35, MOVE_FUTURE_SIGHT),
    LEVEL_UP_MOVE(50, MOVE_CONFUSE_RAY), LEVEL_UP_MOVE(65, MOVE_PSYCHIC), LEVEL_UP_END
};

static const u16 sMareepLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(9, MOVE_THUNDER_SHOCK), LEVEL_UP_MOVE(16, MOVE_THUNDER_WAVE),
    LEVEL_UP_MOVE(23, MOVE_COTTON_SPORE), LEVEL_UP_MOVE(30, MOVE_LIGHT_SCREEN),
    LEVEL_UP_MOVE(37, MOVE_THUNDER),      LEVEL_UP_END
};

static const u16 sFlaaffyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK),
    LEVEL_UP_MOVE(9, MOVE_THUNDER_SHOCK), LEVEL_UP_MOVE(18, MOVE_THUNDER_WAVE), LEVEL_UP_MOVE(27, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(36, MOVE_LIGHT_SCREEN), LEVEL_UP_MOVE(45, MOVE_THUNDER),      LEVEL_UP_END
};

static const u16 sAmpharosLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                LEVEL_UP_MOVE(1, MOVE_THUNDER_SHOCK),
                                                LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),
                                                LEVEL_UP_MOVE(9, MOVE_THUNDER_SHOCK),
                                                LEVEL_UP_MOVE(18, MOVE_THUNDER_WAVE),
                                                LEVEL_UP_MOVE(27, MOVE_COTTON_SPORE),
                                                LEVEL_UP_MOVE(30, MOVE_THUNDER_PUNCH),
                                                LEVEL_UP_MOVE(42, MOVE_LIGHT_SCREEN),
                                                LEVEL_UP_MOVE(57, MOVE_THUNDER),
                                                LEVEL_UP_END };

static const u16 sBellossomLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ABSORB),
                                                 LEVEL_UP_MOVE(1, MOVE_SWEET_SCENT),
                                                 LEVEL_UP_MOVE(1, MOVE_STUN_SPORE),
                                                 LEVEL_UP_MOVE(1, MOVE_MAGICAL_LEAF),
                                                 LEVEL_UP_MOVE(44, MOVE_PETAL_DANCE),
                                                 LEVEL_UP_MOVE(55, MOVE_SOLAR_BEAM),
                                                 LEVEL_UP_END };

static const u16 sMarillLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(3, MOVE_DEFENSE_CURL),
                                              LEVEL_UP_MOVE(6, MOVE_TAIL_WHIP),    LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
                                              LEVEL_UP_MOVE(15, MOVE_ROLLOUT),     LEVEL_UP_MOVE(21, MOVE_BUBBLE_BEAM),
                                              LEVEL_UP_MOVE(28, MOVE_DOUBLE_EDGE), LEVEL_UP_MOVE(36, MOVE_RAIN_DANCE),
                                              LEVEL_UP_MOVE(45, MOVE_HYDRO_PUMP),  LEVEL_UP_END };

static const u16 sAzumarillLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                 LEVEL_UP_MOVE(1, MOVE_DEFENSE_CURL),
                                                 LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                                 LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                                 LEVEL_UP_MOVE(3, MOVE_DEFENSE_CURL),
                                                 LEVEL_UP_MOVE(6, MOVE_TAIL_WHIP),
                                                 LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
                                                 LEVEL_UP_MOVE(15, MOVE_ROLLOUT),
                                                 LEVEL_UP_MOVE(24, MOVE_BUBBLE_BEAM),
                                                 LEVEL_UP_MOVE(34, MOVE_DOUBLE_EDGE),
                                                 LEVEL_UP_MOVE(45, MOVE_RAIN_DANCE),
                                                 LEVEL_UP_MOVE(57, MOVE_HYDRO_PUMP),
                                                 LEVEL_UP_END };

static const u16 sSudowoodoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ROCK_THROW),    LEVEL_UP_MOVE(1, MOVE_MIMIC),
                                                 LEVEL_UP_MOVE(9, MOVE_FLAIL),         LEVEL_UP_MOVE(17, MOVE_LOW_KICK),
                                                 LEVEL_UP_MOVE(25, MOVE_ROCK_SLIDE),   LEVEL_UP_MOVE(33, MOVE_BLOCK),
                                                 LEVEL_UP_MOVE(41, MOVE_FAINT_ATTACK), LEVEL_UP_MOVE(49, MOVE_SLAM),
                                                 LEVEL_UP_MOVE(57, MOVE_DOUBLE_EDGE),  LEVEL_UP_END };

static const u16 sPolitoedLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(1, MOVE_HYPNOSIS),
                                                LEVEL_UP_MOVE(1, MOVE_DOUBLE_SLAP),
                                                LEVEL_UP_MOVE(1, MOVE_PERISH_SONG),
                                                LEVEL_UP_MOVE(35, MOVE_PERISH_SONG),
                                                LEVEL_UP_MOVE(51, MOVE_SWAGGER),
                                                LEVEL_UP_END };

static const u16 sHoppipLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SPLASH),
                                              LEVEL_UP_MOVE(5, MOVE_SYNTHESIS),
                                              LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(10, MOVE_TACKLE),
                                              LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
                                              LEVEL_UP_MOVE(15, MOVE_STUN_SPORE),
                                              LEVEL_UP_MOVE(17, MOVE_SLEEP_POWDER),
                                              LEVEL_UP_MOVE(20, MOVE_LEECH_SEED),
                                              LEVEL_UP_MOVE(25, MOVE_COTTON_SPORE),
                                              LEVEL_UP_MOVE(30, MOVE_MEGA_DRAIN),
                                              LEVEL_UP_END };

static const u16 sSkiploomLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),      LEVEL_UP_MOVE(1, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),   LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_SYNTHESIS),   LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_TACKLE),     LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(15, MOVE_STUN_SPORE), LEVEL_UP_MOVE(17, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(22, MOVE_LEECH_SEED), LEVEL_UP_MOVE(29, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(36, MOVE_MEGA_DRAIN), LEVEL_UP_END
};

static const u16 sJumpluffLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),      LEVEL_UP_MOVE(1, MOVE_SYNTHESIS),
    LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),   LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(5, MOVE_SYNTHESIS),   LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(10, MOVE_TACKLE),     LEVEL_UP_MOVE(13, MOVE_POISON_POWDER),
    LEVEL_UP_MOVE(15, MOVE_STUN_SPORE), LEVEL_UP_MOVE(17, MOVE_SLEEP_POWDER),
    LEVEL_UP_MOVE(22, MOVE_LEECH_SEED), LEVEL_UP_MOVE(33, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(44, MOVE_MEGA_DRAIN), LEVEL_UP_END
};

static const u16 sAipomLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                             LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                             LEVEL_UP_MOVE(6, MOVE_SAND_ATTACK),
                                             LEVEL_UP_MOVE(13, MOVE_ASTONISH),
                                             LEVEL_UP_MOVE(18, MOVE_BATON_PASS),
                                             LEVEL_UP_MOVE(25, MOVE_TICKLE),
                                             LEVEL_UP_MOVE(31, MOVE_FURY_SWIPES),
                                             LEVEL_UP_MOVE(38, MOVE_SWIFT),
                                             LEVEL_UP_MOVE(43, MOVE_SCREECH),
                                             LEVEL_UP_MOVE(50, MOVE_AGILITY),
                                             LEVEL_UP_END };

static const u16 sSunkernLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),     LEVEL_UP_MOVE(6, MOVE_GROWTH),      LEVEL_UP_MOVE(13, MOVE_MEGA_DRAIN),
    LEVEL_UP_MOVE(18, MOVE_INGRAIN),   LEVEL_UP_MOVE(25, MOVE_ENDEAVOR),   LEVEL_UP_MOVE(30, MOVE_SUNNY_DAY),
    LEVEL_UP_MOVE(37, MOVE_SYNTHESIS), LEVEL_UP_MOVE(42, MOVE_GIGA_DRAIN), LEVEL_UP_END
};

static const u16 sSunfloraLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ABSORB),      LEVEL_UP_MOVE(1, MOVE_POUND),
                                                LEVEL_UP_MOVE(6, MOVE_GROWTH),      LEVEL_UP_MOVE(13, MOVE_RAZOR_LEAF),
                                                LEVEL_UP_MOVE(18, MOVE_INGRAIN),    LEVEL_UP_MOVE(25, MOVE_BULLET_SEED),
                                                LEVEL_UP_MOVE(30, MOVE_SUNNY_DAY),  LEVEL_UP_MOVE(37, MOVE_PETAL_DANCE),
                                                LEVEL_UP_MOVE(42, MOVE_SOLAR_BEAM), LEVEL_UP_END };

static const u16 sYanmaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                             LEVEL_UP_MOVE(1, MOVE_FORESIGHT),
                                             LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
                                             LEVEL_UP_MOVE(13, MOVE_DOUBLE_TEAM),
                                             LEVEL_UP_MOVE(19, MOVE_SONIC_BOOM),
                                             LEVEL_UP_MOVE(25, MOVE_DETECT),
                                             LEVEL_UP_MOVE(31, MOVE_SUPERSONIC),
                                             LEVEL_UP_MOVE(37, MOVE_UPROAR),
                                             LEVEL_UP_MOVE(43, MOVE_WING_ATTACK),
                                             LEVEL_UP_MOVE(49, MOVE_SCREECH),
                                             LEVEL_UP_END };

static const u16 sWooperLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                              LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(11, MOVE_SLAM),
                                              LEVEL_UP_MOVE(16, MOVE_MUD_SHOT),
                                              LEVEL_UP_MOVE(21, MOVE_AMNESIA),
                                              LEVEL_UP_MOVE(31, MOVE_YAWN),
                                              LEVEL_UP_MOVE(36, MOVE_EARTHQUAKE),
                                              LEVEL_UP_MOVE(41, MOVE_RAIN_DANCE),
                                              LEVEL_UP_MOVE(51, MOVE_MIST),
                                              LEVEL_UP_MOVE(51, MOVE_HAZE),
                                              LEVEL_UP_END };

static const u16 sQuagsireLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                                LEVEL_UP_MOVE(11, MOVE_SLAM),
                                                LEVEL_UP_MOVE(16, MOVE_MUD_SHOT),
                                                LEVEL_UP_MOVE(23, MOVE_AMNESIA),
                                                LEVEL_UP_MOVE(35, MOVE_YAWN),
                                                LEVEL_UP_MOVE(42, MOVE_EARTHQUAKE),
                                                LEVEL_UP_MOVE(49, MOVE_RAIN_DANCE),
                                                LEVEL_UP_MOVE(61, MOVE_MIST),
                                                LEVEL_UP_MOVE(61, MOVE_HAZE),
                                                LEVEL_UP_END };

static const u16 sEspeonLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(1, MOVE_HELPING_HAND), LEVEL_UP_MOVE(8, MOVE_SAND_ATTACK),
                                              LEVEL_UP_MOVE(16, MOVE_CONFUSION),   LEVEL_UP_MOVE(23, MOVE_QUICK_ATTACK),
                                              LEVEL_UP_MOVE(30, MOVE_SWIFT),       LEVEL_UP_MOVE(36, MOVE_PSYBEAM),
                                              LEVEL_UP_MOVE(42, MOVE_PSYCH_UP),    LEVEL_UP_MOVE(47, MOVE_PSYCHIC),
                                              LEVEL_UP_MOVE(52, MOVE_MORNING_SUN), LEVEL_UP_END };

static const u16 sUmbreonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),     LEVEL_UP_MOVE(1, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(8, MOVE_SAND_ATTACK),  LEVEL_UP_MOVE(16, MOVE_PURSUIT),      LEVEL_UP_MOVE(23, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(30, MOVE_CONFUSE_RAY), LEVEL_UP_MOVE(36, MOVE_FAINT_ATTACK), LEVEL_UP_MOVE(42, MOVE_MEAN_LOOK),
    LEVEL_UP_MOVE(47, MOVE_SCREECH),     LEVEL_UP_MOVE(52, MOVE_MOONLIGHT),    LEVEL_UP_END
};

static const u16 sMurkrowLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),   LEVEL_UP_MOVE(9, MOVE_ASTONISH),     LEVEL_UP_MOVE(14, MOVE_PURSUIT),
    LEVEL_UP_MOVE(22, MOVE_HAZE),  LEVEL_UP_MOVE(27, MOVE_NIGHT_SHADE), LEVEL_UP_MOVE(35, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(40, MOVE_TAUNT), LEVEL_UP_MOVE(48, MOVE_MEAN_LOOK),   LEVEL_UP_END
};

static const u16 sSlowkingLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CURSE),
                                                LEVEL_UP_MOVE(1, MOVE_YAWN),
                                                LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(6, MOVE_GROWL),
                                                LEVEL_UP_MOVE(15, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(20, MOVE_CONFUSION),
                                                LEVEL_UP_MOVE(29, MOVE_DISABLE),
                                                LEVEL_UP_MOVE(34, MOVE_HEADBUTT),
                                                LEVEL_UP_MOVE(43, MOVE_SWAGGER),
                                                LEVEL_UP_MOVE(48, MOVE_PSYCHIC),
                                                LEVEL_UP_END };

static const u16 sMisdreavusLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                  LEVEL_UP_MOVE(1, MOVE_PSYWAVE),
                                                  LEVEL_UP_MOVE(6, MOVE_SPITE),
                                                  LEVEL_UP_MOVE(11, MOVE_ASTONISH),
                                                  LEVEL_UP_MOVE(17, MOVE_CONFUSE_RAY),
                                                  LEVEL_UP_MOVE(23, MOVE_MEAN_LOOK),
                                                  LEVEL_UP_MOVE(30, MOVE_PSYBEAM),
                                                  LEVEL_UP_MOVE(37, MOVE_PAIN_SPLIT),
                                                  LEVEL_UP_MOVE(45, MOVE_PERISH_SONG),
                                                  LEVEL_UP_MOVE(53, MOVE_GRUDGE),
                                                  LEVEL_UP_END };

static const u16 sUnownLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_HIDDEN_POWER), LEVEL_UP_END };

static const u16 sWobbuffetLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_COUNTER), LEVEL_UP_MOVE(1, MOVE_MIRROR_COAT),
                                                 LEVEL_UP_MOVE(1, MOVE_SAFEGUARD), LEVEL_UP_MOVE(1, MOVE_DESTINY_BOND),
                                                 LEVEL_UP_END };

static const u16 sGirafarigLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                 LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                 LEVEL_UP_MOVE(7, MOVE_ASTONISH),
                                                 LEVEL_UP_MOVE(13, MOVE_CONFUSION),
                                                 LEVEL_UP_MOVE(19, MOVE_STOMP),
                                                 LEVEL_UP_MOVE(25, MOVE_ODOR_SLEUTH),
                                                 LEVEL_UP_MOVE(31, MOVE_AGILITY),
                                                 LEVEL_UP_MOVE(37, MOVE_BATON_PASS),
                                                 LEVEL_UP_MOVE(43, MOVE_PSYBEAM),
                                                 LEVEL_UP_MOVE(49, MOVE_CRUNCH),
                                                 LEVEL_UP_END };

static const u16 sPinecoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(1, MOVE_PROTECT),
                                              LEVEL_UP_MOVE(8, MOVE_SELF_DESTRUCT), LEVEL_UP_MOVE(15, MOVE_TAKE_DOWN),
                                              LEVEL_UP_MOVE(22, MOVE_RAPID_SPIN),   LEVEL_UP_MOVE(29, MOVE_BIDE),
                                              LEVEL_UP_MOVE(36, MOVE_EXPLOSION),    LEVEL_UP_MOVE(43, MOVE_SPIKES),
                                              LEVEL_UP_MOVE(50, MOVE_DOUBLE_EDGE),  LEVEL_UP_END };

static const u16 sForretressLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                  LEVEL_UP_MOVE(1, MOVE_PROTECT),
                                                  LEVEL_UP_MOVE(1, MOVE_SELF_DESTRUCT),
                                                  LEVEL_UP_MOVE(8, MOVE_SELF_DESTRUCT),
                                                  LEVEL_UP_MOVE(15, MOVE_TAKE_DOWN),
                                                  LEVEL_UP_MOVE(22, MOVE_RAPID_SPIN),
                                                  LEVEL_UP_MOVE(29, MOVE_BIDE),
                                                  LEVEL_UP_MOVE(39, MOVE_EXPLOSION),
                                                  LEVEL_UP_MOVE(49, MOVE_SPIKES),
                                                  LEVEL_UP_MOVE(59, MOVE_DOUBLE_EDGE),
                                                  LEVEL_UP_END };

static const u16 sDunsparceLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_RAGE),      LEVEL_UP_MOVE(4, MOVE_DEFENSE_CURL),
                                                 LEVEL_UP_MOVE(11, MOVE_YAWN),     LEVEL_UP_MOVE(14, MOVE_GLARE),
                                                 LEVEL_UP_MOVE(21, MOVE_SPITE),    LEVEL_UP_MOVE(24, MOVE_PURSUIT),
                                                 LEVEL_UP_MOVE(31, MOVE_SCREECH),  LEVEL_UP_MOVE(34, MOVE_TAKE_DOWN),
                                                 LEVEL_UP_MOVE(41, MOVE_ENDEAVOR), LEVEL_UP_END };

static const u16 sGligarLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),  LEVEL_UP_MOVE(6, MOVE_SAND_ATTACK),   LEVEL_UP_MOVE(13, MOVE_HARDEN),
    LEVEL_UP_MOVE(20, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(28, MOVE_FAINT_ATTACK), LEVEL_UP_MOVE(36, MOVE_SLASH),
    LEVEL_UP_MOVE(44, MOVE_SCREECH),      LEVEL_UP_MOVE(52, MOVE_GUILLOTINE),   LEVEL_UP_END
};

static const u16 sSteelixLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(9, MOVE_BIND),         LEVEL_UP_MOVE(13, MOVE_ROCK_THROW),
                                               LEVEL_UP_MOVE(21, MOVE_HARDEN),      LEVEL_UP_MOVE(25, MOVE_RAGE),
                                               LEVEL_UP_MOVE(33, MOVE_SANDSTORM),   LEVEL_UP_MOVE(37, MOVE_SLAM),
                                               LEVEL_UP_MOVE(45, MOVE_IRON_TAIL),   LEVEL_UP_MOVE(49, MOVE_CRUNCH),
                                               LEVEL_UP_MOVE(57, MOVE_DOUBLE_EDGE), LEVEL_UP_END };

static const u16 sSnubbullLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(1, MOVE_SCARY_FACE),
                                                LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),
                                                LEVEL_UP_MOVE(8, MOVE_CHARM),
                                                LEVEL_UP_MOVE(13, MOVE_BITE),
                                                LEVEL_UP_MOVE(19, MOVE_LICK),
                                                LEVEL_UP_MOVE(26, MOVE_ROAR),
                                                LEVEL_UP_MOVE(34, MOVE_RAGE),
                                                LEVEL_UP_MOVE(43, MOVE_TAKE_DOWN),
                                                LEVEL_UP_MOVE(53, MOVE_CRUNCH),
                                                LEVEL_UP_END };

static const u16 sGranbullLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(1, MOVE_SCARY_FACE),
                                                LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),
                                                LEVEL_UP_MOVE(8, MOVE_CHARM),
                                                LEVEL_UP_MOVE(13, MOVE_BITE),
                                                LEVEL_UP_MOVE(19, MOVE_LICK),
                                                LEVEL_UP_MOVE(28, MOVE_ROAR),
                                                LEVEL_UP_MOVE(38, MOVE_RAGE),
                                                LEVEL_UP_MOVE(49, MOVE_TAKE_DOWN),
                                                LEVEL_UP_MOVE(61, MOVE_CRUNCH),
                                                LEVEL_UP_END };

static const u16 sQwilfishLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SPIKES),       LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(1, MOVE_POISON_STING), LEVEL_UP_MOVE(10, MOVE_HARDEN),
                                                LEVEL_UP_MOVE(10, MOVE_MINIMIZE),    LEVEL_UP_MOVE(19, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(28, MOVE_PIN_MISSILE), LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
                                                LEVEL_UP_MOVE(46, MOVE_HYDRO_PUMP),  LEVEL_UP_END };

static const u16 sScizorLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),  LEVEL_UP_MOVE(1, MOVE_LEER),
                                              LEVEL_UP_MOVE(6, MOVE_FOCUS_ENERGY),  LEVEL_UP_MOVE(11, MOVE_PURSUIT),
                                              LEVEL_UP_MOVE(16, MOVE_FALSE_SWIPE),  LEVEL_UP_MOVE(21, MOVE_AGILITY),
                                              LEVEL_UP_MOVE(26, MOVE_METAL_CLAW),   LEVEL_UP_MOVE(31, MOVE_SLASH),
                                              LEVEL_UP_MOVE(36, MOVE_SWORDS_DANCE), LEVEL_UP_MOVE(41, MOVE_DOUBLE_TEAM),
                                              LEVEL_UP_MOVE(46, MOVE_FURY_CUTTER),  LEVEL_UP_END };

static const u16 sShuckleLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CONSTRICT),  LEVEL_UP_MOVE(1, MOVE_WITHDRAW),
                                               LEVEL_UP_MOVE(9, MOVE_WRAP),       LEVEL_UP_MOVE(14, MOVE_ENCORE),
                                               LEVEL_UP_MOVE(23, MOVE_SAFEGUARD), LEVEL_UP_MOVE(28, MOVE_BIDE),
                                               LEVEL_UP_MOVE(37, MOVE_REST),      LEVEL_UP_END };

static const u16 sHeracrossLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                 LEVEL_UP_MOVE(1, MOVE_LEER),
                                                 LEVEL_UP_MOVE(6, MOVE_HORN_ATTACK),
                                                 LEVEL_UP_MOVE(11, MOVE_ENDURE),
                                                 LEVEL_UP_MOVE(17, MOVE_FURY_ATTACK),
                                                 LEVEL_UP_MOVE(23, MOVE_BRICK_BREAK),
                                                 LEVEL_UP_MOVE(30, MOVE_COUNTER),
                                                 LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
                                                 LEVEL_UP_MOVE(45, MOVE_REVERSAL),
                                                 LEVEL_UP_MOVE(53, MOVE_MEGAHORN),
                                                 LEVEL_UP_END };

static const u16 sSneaselLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                               LEVEL_UP_MOVE(1, MOVE_LEER),
                                               LEVEL_UP_MOVE(1, MOVE_TAUNT),
                                               LEVEL_UP_MOVE(8, MOVE_QUICK_ATTACK),
                                               LEVEL_UP_MOVE(15, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(22, MOVE_FAINT_ATTACK),
                                               LEVEL_UP_MOVE(29, MOVE_FURY_SWIPES),
                                               LEVEL_UP_MOVE(36, MOVE_AGILITY),
                                               LEVEL_UP_MOVE(43, MOVE_ICY_WIND),
                                               LEVEL_UP_MOVE(50, MOVE_SLASH),
                                               LEVEL_UP_MOVE(57, MOVE_BEAT_UP),
                                               LEVEL_UP_MOVE(64, MOVE_METAL_CLAW),
                                               LEVEL_UP_END };

static const u16 sTeddiursaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                 LEVEL_UP_MOVE(1, MOVE_LEER),
                                                 LEVEL_UP_MOVE(7, MOVE_LICK),
                                                 LEVEL_UP_MOVE(13, MOVE_FURY_SWIPES),
                                                 LEVEL_UP_MOVE(19, MOVE_FAKE_TEARS),
                                                 LEVEL_UP_MOVE(25, MOVE_FAINT_ATTACK),
                                                 LEVEL_UP_MOVE(31, MOVE_REST),
                                                 LEVEL_UP_MOVE(37, MOVE_SLASH),
                                                 LEVEL_UP_MOVE(43, MOVE_SNORE),
                                                 LEVEL_UP_MOVE(49, MOVE_THRASH),
                                                 LEVEL_UP_END };

static const u16 sUrsaringLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                LEVEL_UP_MOVE(1, MOVE_LEER),
                                                LEVEL_UP_MOVE(1, MOVE_LICK),
                                                LEVEL_UP_MOVE(1, MOVE_FURY_SWIPES),
                                                LEVEL_UP_MOVE(7, MOVE_LICK),
                                                LEVEL_UP_MOVE(13, MOVE_FURY_SWIPES),
                                                LEVEL_UP_MOVE(19, MOVE_FAKE_TEARS),
                                                LEVEL_UP_MOVE(25, MOVE_FAINT_ATTACK),
                                                LEVEL_UP_MOVE(31, MOVE_REST),
                                                LEVEL_UP_MOVE(37, MOVE_SLASH),
                                                LEVEL_UP_MOVE(43, MOVE_SNORE),
                                                LEVEL_UP_MOVE(49, MOVE_THRASH),
                                                LEVEL_UP_END };

static const u16 sSlugmaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_YAWN),          LEVEL_UP_MOVE(1, MOVE_SMOG),
                                              LEVEL_UP_MOVE(8, MOVE_EMBER),         LEVEL_UP_MOVE(15, MOVE_ROCK_THROW),
                                              LEVEL_UP_MOVE(22, MOVE_HARDEN),       LEVEL_UP_MOVE(29, MOVE_AMNESIA),
                                              LEVEL_UP_MOVE(36, MOVE_FLAMETHROWER), LEVEL_UP_MOVE(43, MOVE_ROCK_SLIDE),
                                              LEVEL_UP_MOVE(50, MOVE_BODY_SLAM),    LEVEL_UP_END };

static const u16 sMagcargoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_YAWN),        LEVEL_UP_MOVE(1, MOVE_SMOG),       LEVEL_UP_MOVE(1, MOVE_EMBER),
    LEVEL_UP_MOVE(1, MOVE_ROCK_THROW),  LEVEL_UP_MOVE(8, MOVE_EMBER),      LEVEL_UP_MOVE(15, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(22, MOVE_HARDEN),     LEVEL_UP_MOVE(29, MOVE_AMNESIA),   LEVEL_UP_MOVE(36, MOVE_FLAMETHROWER),
    LEVEL_UP_MOVE(48, MOVE_ROCK_SLIDE), LEVEL_UP_MOVE(60, MOVE_BODY_SLAM), LEVEL_UP_END
};

static const u16 sSwinubLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),    LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH), LEVEL_UP_MOVE(10, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(19, MOVE_ENDURE),   LEVEL_UP_MOVE(28, MOVE_TAKE_DOWN),  LEVEL_UP_MOVE(37, MOVE_MIST),
    LEVEL_UP_MOVE(46, MOVE_BLIZZARD), LEVEL_UP_MOVE(55, MOVE_AMNESIA),    LEVEL_UP_END
};

static const u16 sPiloswineLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_HORN_ATTACK), LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH),  LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
    LEVEL_UP_MOVE(1, MOVE_ENDURE),      LEVEL_UP_MOVE(10, MOVE_POWDER_SNOW), LEVEL_UP_MOVE(19, MOVE_ENDURE),
    LEVEL_UP_MOVE(28, MOVE_TAKE_DOWN),  LEVEL_UP_MOVE(33, MOVE_FURY_ATTACK), LEVEL_UP_MOVE(42, MOVE_MIST),
    LEVEL_UP_MOVE(56, MOVE_BLIZZARD),   LEVEL_UP_MOVE(70, MOVE_AMNESIA),     LEVEL_UP_END
};

static const u16 sCorsolaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                               LEVEL_UP_MOVE(6, MOVE_HARDEN),
                                               LEVEL_UP_MOVE(12, MOVE_BUBBLE),
                                               LEVEL_UP_MOVE(17, MOVE_RECOVER),
                                               LEVEL_UP_MOVE(17, MOVE_REFRESH),
                                               LEVEL_UP_MOVE(23, MOVE_BUBBLE_BEAM),
                                               LEVEL_UP_MOVE(28, MOVE_SPIKE_CANNON),
                                               LEVEL_UP_MOVE(34, MOVE_ROCK_BLAST),
                                               LEVEL_UP_MOVE(39, MOVE_MIRROR_COAT),
                                               LEVEL_UP_MOVE(45, MOVE_ANCIENT_POWER),
                                               LEVEL_UP_END };

static const u16 sRemoraidLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),    LEVEL_UP_MOVE(11, MOVE_LOCK_ON),     LEVEL_UP_MOVE(22, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(22, MOVE_AURORA_BEAM), LEVEL_UP_MOVE(22, MOVE_BUBBLE_BEAM), LEVEL_UP_MOVE(33, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(44, MOVE_ICE_BEAM),    LEVEL_UP_MOVE(55, MOVE_HYPER_BEAM),  LEVEL_UP_END
};

static const u16 sOctilleryLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),     LEVEL_UP_MOVE(11, MOVE_CONSTRICT),
    LEVEL_UP_MOVE(22, MOVE_PSYBEAM),      LEVEL_UP_MOVE(22, MOVE_AURORA_BEAM),
    LEVEL_UP_MOVE(22, MOVE_BUBBLE_BEAM),  LEVEL_UP_MOVE(25, MOVE_OCTAZOOKA),
    LEVEL_UP_MOVE(38, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(54, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(70, MOVE_HYPER_BEAM),   LEVEL_UP_END
};

static const u16 sDelibirdLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PRESENT), LEVEL_UP_END };

static const u16 sMantineLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_BUBBLE),
                                               LEVEL_UP_MOVE(8, MOVE_SUPERSONIC),   LEVEL_UP_MOVE(15, MOVE_BUBBLE_BEAM),
                                               LEVEL_UP_MOVE(22, MOVE_TAKE_DOWN),   LEVEL_UP_MOVE(29, MOVE_AGILITY),
                                               LEVEL_UP_MOVE(36, MOVE_WING_ATTACK), LEVEL_UP_MOVE(43, MOVE_WATER_PULSE),
                                               LEVEL_UP_MOVE(50, MOVE_CONFUSE_RAY), LEVEL_UP_END };

static const u16 sSkarmoryLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LEER),
                                                LEVEL_UP_MOVE(1, MOVE_PECK),
                                                LEVEL_UP_MOVE(10, MOVE_SAND_ATTACK),
                                                LEVEL_UP_MOVE(13, MOVE_SWIFT),
                                                LEVEL_UP_MOVE(16, MOVE_AGILITY),
                                                LEVEL_UP_MOVE(26, MOVE_FURY_ATTACK),
                                                LEVEL_UP_MOVE(29, MOVE_AIR_CUTTER),
                                                LEVEL_UP_MOVE(32, MOVE_STEEL_WING),
                                                LEVEL_UP_MOVE(42, MOVE_SPIKES),
                                                LEVEL_UP_MOVE(45, MOVE_METAL_SOUND),
                                                LEVEL_UP_END };

static const u16 sHoundourLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LEER),
                                                LEVEL_UP_MOVE(1, MOVE_EMBER),
                                                LEVEL_UP_MOVE(7, MOVE_HOWL),
                                                LEVEL_UP_MOVE(13, MOVE_SMOG),
                                                LEVEL_UP_MOVE(19, MOVE_ROAR),
                                                LEVEL_UP_MOVE(25, MOVE_BITE),
                                                LEVEL_UP_MOVE(31, MOVE_ODOR_SLEUTH),
                                                LEVEL_UP_MOVE(37, MOVE_FAINT_ATTACK),
                                                LEVEL_UP_MOVE(43, MOVE_FLAMETHROWER),
                                                LEVEL_UP_MOVE(49, MOVE_CRUNCH),
                                                LEVEL_UP_END };

static const u16 sHoundoomLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),          LEVEL_UP_MOVE(1, MOVE_EMBER),        LEVEL_UP_MOVE(1, MOVE_HOWL),
    LEVEL_UP_MOVE(7, MOVE_HOWL),          LEVEL_UP_MOVE(13, MOVE_SMOG),        LEVEL_UP_MOVE(19, MOVE_ROAR),
    LEVEL_UP_MOVE(27, MOVE_BITE),         LEVEL_UP_MOVE(35, MOVE_ODOR_SLEUTH), LEVEL_UP_MOVE(43, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(51, MOVE_FLAMETHROWER), LEVEL_UP_MOVE(59, MOVE_CRUNCH),      LEVEL_UP_END
};

static const u16 sKingdraLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BUBBLE),        LEVEL_UP_MOVE(1, MOVE_SMOKESCREEN),
                                               LEVEL_UP_MOVE(1, MOVE_LEER),          LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                               LEVEL_UP_MOVE(8, MOVE_SMOKESCREEN),   LEVEL_UP_MOVE(15, MOVE_LEER),
                                               LEVEL_UP_MOVE(22, MOVE_WATER_GUN),    LEVEL_UP_MOVE(29, MOVE_TWISTER),
                                               LEVEL_UP_MOVE(40, MOVE_AGILITY),      LEVEL_UP_MOVE(51, MOVE_HYDRO_PUMP),
                                               LEVEL_UP_MOVE(62, MOVE_DRAGON_DANCE), LEVEL_UP_END };

static const u16 sPhanpyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH),  LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                              LEVEL_UP_MOVE(1, MOVE_GROWL),        LEVEL_UP_MOVE(9, MOVE_DEFENSE_CURL),
                                              LEVEL_UP_MOVE(17, MOVE_FLAIL),       LEVEL_UP_MOVE(25, MOVE_TAKE_DOWN),
                                              LEVEL_UP_MOVE(33, MOVE_ROLLOUT),     LEVEL_UP_MOVE(41, MOVE_ENDURE),
                                              LEVEL_UP_MOVE(49, MOVE_DOUBLE_EDGE), LEVEL_UP_END };

static const u16 sDonphanLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH), LEVEL_UP_MOVE(1, MOVE_HORN_ATTACK),
                                               LEVEL_UP_MOVE(1, MOVE_GROWL),       LEVEL_UP_MOVE(9, MOVE_DEFENSE_CURL),
                                               LEVEL_UP_MOVE(17, MOVE_FLAIL),      LEVEL_UP_MOVE(25, MOVE_FURY_ATTACK),
                                               LEVEL_UP_MOVE(33, MOVE_ROLLOUT),    LEVEL_UP_MOVE(41, MOVE_RAPID_SPIN),
                                               LEVEL_UP_MOVE(49, MOVE_EARTHQUAKE), LEVEL_UP_END };

static const u16 sPorygon2LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CONVERSION_2),  LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(1, MOVE_CONVERSION),    LEVEL_UP_MOVE(9, MOVE_AGILITY),
                                                LEVEL_UP_MOVE(12, MOVE_PSYBEAM),      LEVEL_UP_MOVE(20, MOVE_RECOVER),
                                                LEVEL_UP_MOVE(24, MOVE_DEFENSE_CURL), LEVEL_UP_MOVE(32, MOVE_LOCK_ON),
                                                LEVEL_UP_MOVE(36, MOVE_TRI_ATTACK),   LEVEL_UP_MOVE(44, MOVE_RECYCLE),
                                                LEVEL_UP_MOVE(48, MOVE_ZAP_CANNON),   LEVEL_UP_END };

static const u16 sStantlerLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),     LEVEL_UP_MOVE(7, MOVE_LEER),
                                                LEVEL_UP_MOVE(13, MOVE_ASTONISH),  LEVEL_UP_MOVE(19, MOVE_HYPNOSIS),
                                                LEVEL_UP_MOVE(25, MOVE_STOMP),     LEVEL_UP_MOVE(31, MOVE_SAND_ATTACK),
                                                LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN), LEVEL_UP_MOVE(43, MOVE_CONFUSE_RAY),
                                                LEVEL_UP_MOVE(49, MOVE_CALM_MIND), LEVEL_UP_END };

static const u16 sSmeargleLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SKETCH),
                                                LEVEL_UP_MOVE(11, MOVE_SKETCH),
                                                LEVEL_UP_MOVE(21, MOVE_SKETCH),
                                                LEVEL_UP_MOVE(31, MOVE_SKETCH),
                                                LEVEL_UP_MOVE(41, MOVE_SKETCH),
                                                LEVEL_UP_MOVE(51, MOVE_SKETCH),
                                                LEVEL_UP_MOVE(61, MOVE_SKETCH),
                                                LEVEL_UP_MOVE(71, MOVE_SKETCH),
                                                LEVEL_UP_MOVE(81, MOVE_SKETCH),
                                                LEVEL_UP_MOVE(91, MOVE_SKETCH),
                                                LEVEL_UP_END };

static const u16 sTyrogueLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sHitmontopLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_REVENGE),     LEVEL_UP_MOVE(1, MOVE_ROLLING_KICK),  LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(13, MOVE_PURSUIT),    LEVEL_UP_MOVE(19, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(20, MOVE_TRIPLE_KICK),
    LEVEL_UP_MOVE(25, MOVE_RAPID_SPIN), LEVEL_UP_MOVE(31, MOVE_COUNTER),      LEVEL_UP_MOVE(37, MOVE_AGILITY),
    LEVEL_UP_MOVE(43, MOVE_DETECT),     LEVEL_UP_MOVE(49, MOVE_ENDEAVOR),     LEVEL_UP_END
};

static const u16 sSmoochumLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),      LEVEL_UP_MOVE(1, MOVE_LICK),
                                                LEVEL_UP_MOVE(9, MOVE_SWEET_KISS), LEVEL_UP_MOVE(13, MOVE_POWDER_SNOW),
                                                LEVEL_UP_MOVE(21, MOVE_CONFUSION), LEVEL_UP_MOVE(25, MOVE_SING),
                                                LEVEL_UP_MOVE(33, MOVE_MEAN_LOOK), LEVEL_UP_MOVE(37, MOVE_FAKE_TEARS),
                                                LEVEL_UP_MOVE(45, MOVE_PSYCHIC),   LEVEL_UP_MOVE(49, MOVE_PERISH_SONG),
                                                LEVEL_UP_MOVE(57, MOVE_BLIZZARD),  LEVEL_UP_END };

static const u16 sElekidLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),  LEVEL_UP_MOVE(1, MOVE_LEER),     LEVEL_UP_MOVE(9, MOVE_THUNDER_PUNCH),
    LEVEL_UP_MOVE(17, MOVE_LIGHT_SCREEN), LEVEL_UP_MOVE(25, MOVE_SWIFT),   LEVEL_UP_MOVE(33, MOVE_SCREECH),
    LEVEL_UP_MOVE(41, MOVE_THUNDERBOLT),  LEVEL_UP_MOVE(49, MOVE_THUNDER), LEVEL_UP_END
};

static const u16 sMagbyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_EMBER),         LEVEL_UP_MOVE(7, MOVE_LEER),
                                             LEVEL_UP_MOVE(13, MOVE_SMOG),         LEVEL_UP_MOVE(19, MOVE_FIRE_PUNCH),
                                             LEVEL_UP_MOVE(25, MOVE_SMOKESCREEN),  LEVEL_UP_MOVE(31, MOVE_SUNNY_DAY),
                                             LEVEL_UP_MOVE(37, MOVE_FLAMETHROWER), LEVEL_UP_MOVE(43, MOVE_CONFUSE_RAY),
                                             LEVEL_UP_MOVE(49, MOVE_FIRE_BLAST),   LEVEL_UP_END };

static const u16 sMiltankLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(4, MOVE_GROWL),
                                               LEVEL_UP_MOVE(8, MOVE_DEFENSE_CURL), LEVEL_UP_MOVE(13, MOVE_STOMP),
                                               LEVEL_UP_MOVE(19, MOVE_MILK_DRINK),  LEVEL_UP_MOVE(26, MOVE_BIDE),
                                               LEVEL_UP_MOVE(34, MOVE_ROLLOUT),     LEVEL_UP_MOVE(43, MOVE_BODY_SLAM),
                                               LEVEL_UP_MOVE(53, MOVE_HEAL_BELL),   LEVEL_UP_END };

static const u16 sBlisseyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),
                                               LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(4, MOVE_TAIL_WHIP),
                                               LEVEL_UP_MOVE(7, MOVE_REFRESH),
                                               LEVEL_UP_MOVE(10, MOVE_SOFT_BOILED),
                                               LEVEL_UP_MOVE(13, MOVE_DOUBLE_SLAP),
                                               LEVEL_UP_MOVE(18, MOVE_MINIMIZE),
                                               LEVEL_UP_MOVE(23, MOVE_SING),
                                               LEVEL_UP_MOVE(28, MOVE_EGG_BOMB),
                                               LEVEL_UP_MOVE(33, MOVE_DEFENSE_CURL),
                                               LEVEL_UP_MOVE(40, MOVE_LIGHT_SCREEN),
                                               LEVEL_UP_MOVE(47, MOVE_DOUBLE_EDGE),
                                               LEVEL_UP_END };

static const u16 sRaikouLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BITE),
                                              LEVEL_UP_MOVE(1, MOVE_LEER),
                                              LEVEL_UP_MOVE(11, MOVE_THUNDER_SHOCK),
                                              LEVEL_UP_MOVE(21, MOVE_ROAR),
                                              LEVEL_UP_MOVE(31, MOVE_QUICK_ATTACK),
                                              LEVEL_UP_MOVE(41, MOVE_SPARK),
                                              LEVEL_UP_MOVE(51, MOVE_REFLECT),
                                              LEVEL_UP_MOVE(61, MOVE_CRUNCH),
                                              LEVEL_UP_MOVE(71, MOVE_THUNDER),
                                              LEVEL_UP_MOVE(81, MOVE_CALM_MIND),
                                              LEVEL_UP_END };

static const u16 sEnteiLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BITE),
                                             LEVEL_UP_MOVE(1, MOVE_LEER),
                                             LEVEL_UP_MOVE(11, MOVE_EMBER),
                                             LEVEL_UP_MOVE(21, MOVE_ROAR),
                                             LEVEL_UP_MOVE(31, MOVE_FIRE_SPIN),
                                             LEVEL_UP_MOVE(41, MOVE_STOMP),
                                             LEVEL_UP_MOVE(51, MOVE_FLAMETHROWER),
                                             LEVEL_UP_MOVE(61, MOVE_SWAGGER),
                                             LEVEL_UP_MOVE(71, MOVE_FIRE_BLAST),
                                             LEVEL_UP_MOVE(81, MOVE_CALM_MIND),
                                             LEVEL_UP_END };

static const u16 sSuicuneLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BITE),
                                               LEVEL_UP_MOVE(1, MOVE_LEER),
                                               LEVEL_UP_MOVE(11, MOVE_BUBBLE_BEAM),
                                               LEVEL_UP_MOVE(21, MOVE_RAIN_DANCE),
                                               LEVEL_UP_MOVE(31, MOVE_GUST),
                                               LEVEL_UP_MOVE(41, MOVE_AURORA_BEAM),
                                               LEVEL_UP_MOVE(51, MOVE_MIST),
                                               LEVEL_UP_MOVE(61, MOVE_MIRROR_COAT),
                                               LEVEL_UP_MOVE(71, MOVE_HYDRO_PUMP),
                                               LEVEL_UP_MOVE(81, MOVE_CALM_MIND),
                                               LEVEL_UP_END };

static const u16 sLarvitarLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BITE),
                                                LEVEL_UP_MOVE(1, MOVE_LEER),
                                                LEVEL_UP_MOVE(8, MOVE_SANDSTORM),
                                                LEVEL_UP_MOVE(15, MOVE_SCREECH),
                                                LEVEL_UP_MOVE(22, MOVE_ROCK_SLIDE),
                                                LEVEL_UP_MOVE(29, MOVE_THRASH),
                                                LEVEL_UP_MOVE(36, MOVE_SCARY_FACE),
                                                LEVEL_UP_MOVE(43, MOVE_CRUNCH),
                                                LEVEL_UP_MOVE(50, MOVE_EARTHQUAKE),
                                                LEVEL_UP_MOVE(57, MOVE_HYPER_BEAM),
                                                LEVEL_UP_END };

static const u16 sPupitarLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BITE),
                                               LEVEL_UP_MOVE(1, MOVE_LEER),
                                               LEVEL_UP_MOVE(1, MOVE_SANDSTORM),
                                               LEVEL_UP_MOVE(1, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(8, MOVE_SANDSTORM),
                                               LEVEL_UP_MOVE(15, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(22, MOVE_ROCK_SLIDE),
                                               LEVEL_UP_MOVE(29, MOVE_THRASH),
                                               LEVEL_UP_MOVE(38, MOVE_SCARY_FACE),
                                               LEVEL_UP_MOVE(47, MOVE_CRUNCH),
                                               LEVEL_UP_MOVE(56, MOVE_EARTHQUAKE),
                                               LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),
                                               LEVEL_UP_END };

static const u16 sTyranitarLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BITE),
                                                 LEVEL_UP_MOVE(1, MOVE_LEER),
                                                 LEVEL_UP_MOVE(1, MOVE_SANDSTORM),
                                                 LEVEL_UP_MOVE(1, MOVE_SCREECH),
                                                 LEVEL_UP_MOVE(8, MOVE_SANDSTORM),
                                                 LEVEL_UP_MOVE(15, MOVE_SCREECH),
                                                 LEVEL_UP_MOVE(22, MOVE_ROCK_SLIDE),
                                                 LEVEL_UP_MOVE(29, MOVE_THRASH),
                                                 LEVEL_UP_MOVE(38, MOVE_SCARY_FACE),
                                                 LEVEL_UP_MOVE(47, MOVE_CRUNCH),
                                                 LEVEL_UP_MOVE(61, MOVE_EARTHQUAKE),
                                                 LEVEL_UP_MOVE(75, MOVE_HYPER_BEAM),
                                                 LEVEL_UP_END };

static const u16 sLugiaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WHIRLWIND),
                                             LEVEL_UP_MOVE(11, MOVE_SAFEGUARD),
                                             LEVEL_UP_MOVE(22, MOVE_GUST),
                                             LEVEL_UP_MOVE(33, MOVE_RECOVER),
                                             LEVEL_UP_MOVE(44, MOVE_HYDRO_PUMP),
                                             LEVEL_UP_MOVE(55, MOVE_RAIN_DANCE),
                                             LEVEL_UP_MOVE(66, MOVE_SWIFT),
                                             LEVEL_UP_MOVE(77, MOVE_AEROBLAST),
                                             LEVEL_UP_MOVE(88, MOVE_ANCIENT_POWER),
                                             LEVEL_UP_MOVE(99, MOVE_FUTURE_SIGHT),
                                             LEVEL_UP_END };

static const u16 sHoOhLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WHIRLWIND),
                                            LEVEL_UP_MOVE(11, MOVE_SAFEGUARD),
                                            LEVEL_UP_MOVE(22, MOVE_GUST),
                                            LEVEL_UP_MOVE(33, MOVE_RECOVER),
                                            LEVEL_UP_MOVE(44, MOVE_FIRE_BLAST),
                                            LEVEL_UP_MOVE(55, MOVE_SUNNY_DAY),
                                            LEVEL_UP_MOVE(66, MOVE_SWIFT),
                                            LEVEL_UP_MOVE(77, MOVE_SACRED_FIRE),
                                            LEVEL_UP_MOVE(88, MOVE_ANCIENT_POWER),
                                            LEVEL_UP_MOVE(99, MOVE_FUTURE_SIGHT),
                                            LEVEL_UP_END };

static const u16 sCelebiLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEECH_SEED),    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_RECOVER),       LEVEL_UP_MOVE(1, MOVE_HEAL_BELL),
    LEVEL_UP_MOVE(10, MOVE_SAFEGUARD),    LEVEL_UP_MOVE(20, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(30, MOVE_FUTURE_SIGHT), LEVEL_UP_MOVE(40, MOVE_BATON_PASS),
    LEVEL_UP_MOVE(50, MOVE_PERISH_SONG),  LEVEL_UP_END
};

static const u16 sSpecies252LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies253LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies254LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies255LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies256LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies257LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies258LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies259LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies260LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies261LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies262LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies263LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies264LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies265LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies266LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies267LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies268LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies269LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies270LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies271LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies272LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies273LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies274LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies275LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sSpecies276LevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_END };

static const u16 sTreeckoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),       LEVEL_UP_MOVE(1, MOVE_LEER),
                                               LEVEL_UP_MOVE(6, MOVE_ABSORB),      LEVEL_UP_MOVE(11, MOVE_QUICK_ATTACK),
                                               LEVEL_UP_MOVE(16, MOVE_PURSUIT),    LEVEL_UP_MOVE(21, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(26, MOVE_MEGA_DRAIN), LEVEL_UP_MOVE(31, MOVE_AGILITY),
                                               LEVEL_UP_MOVE(36, MOVE_SLAM),       LEVEL_UP_MOVE(41, MOVE_DETECT),
                                               LEVEL_UP_MOVE(46, MOVE_GIGA_DRAIN), LEVEL_UP_END };

static const u16 sGrovyleLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),        LEVEL_UP_MOVE(1, MOVE_LEER),         LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(6, MOVE_ABSORB),       LEVEL_UP_MOVE(11, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(16, MOVE_FURY_CUTTER), LEVEL_UP_MOVE(17, MOVE_PURSUIT),     LEVEL_UP_MOVE(23, MOVE_SCREECH),
    LEVEL_UP_MOVE(29, MOVE_LEAF_BLADE),  LEVEL_UP_MOVE(35, MOVE_AGILITY),     LEVEL_UP_MOVE(41, MOVE_SLAM),
    LEVEL_UP_MOVE(47, MOVE_DETECT),      LEVEL_UP_MOVE(53, MOVE_FALSE_SWIPE), LEVEL_UP_END
};

static const u16 sSceptileLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),        LEVEL_UP_MOVE(1, MOVE_LEER),         LEVEL_UP_MOVE(1, MOVE_ABSORB),
    LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(6, MOVE_ABSORB),       LEVEL_UP_MOVE(11, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(16, MOVE_FURY_CUTTER), LEVEL_UP_MOVE(17, MOVE_PURSUIT),     LEVEL_UP_MOVE(23, MOVE_SCREECH),
    LEVEL_UP_MOVE(29, MOVE_LEAF_BLADE),  LEVEL_UP_MOVE(35, MOVE_AGILITY),     LEVEL_UP_MOVE(43, MOVE_SLAM),
    LEVEL_UP_MOVE(51, MOVE_DETECT),      LEVEL_UP_MOVE(59, MOVE_FALSE_SWIPE), LEVEL_UP_END
};

static const u16 sTorchicLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),      LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(10, MOVE_EMBER),       LEVEL_UP_MOVE(16, MOVE_PECK),         LEVEL_UP_MOVE(19, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(25, MOVE_FIRE_SPIN),   LEVEL_UP_MOVE(28, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(34, MOVE_SLASH),
    LEVEL_UP_MOVE(37, MOVE_MIRROR_MOVE), LEVEL_UP_MOVE(43, MOVE_FLAMETHROWER), LEVEL_UP_END
};

static const u16 sCombuskenLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),      LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_EMBER),        LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),  LEVEL_UP_MOVE(13, MOVE_EMBER),
    LEVEL_UP_MOVE(16, MOVE_DOUBLE_KICK), LEVEL_UP_MOVE(17, MOVE_PECK),         LEVEL_UP_MOVE(21, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(28, MOVE_BULK_UP),     LEVEL_UP_MOVE(32, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(39, MOVE_SLASH),
    LEVEL_UP_MOVE(43, MOVE_MIRROR_MOVE), LEVEL_UP_MOVE(50, MOVE_SKY_UPPERCUT), LEVEL_UP_END
};

static const u16 sBlazikenLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_FIRE_PUNCH),
                                                LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
                                                LEVEL_UP_MOVE(1, MOVE_EMBER),
                                                LEVEL_UP_MOVE(7, MOVE_FOCUS_ENERGY),
                                                LEVEL_UP_MOVE(13, MOVE_EMBER),
                                                LEVEL_UP_MOVE(16, MOVE_DOUBLE_KICK),
                                                LEVEL_UP_MOVE(17, MOVE_PECK),
                                                LEVEL_UP_MOVE(21, MOVE_SAND_ATTACK),
                                                LEVEL_UP_MOVE(28, MOVE_BULK_UP),
                                                LEVEL_UP_MOVE(32, MOVE_QUICK_ATTACK),
                                                LEVEL_UP_MOVE(36, MOVE_BLAZE_KICK),
                                                LEVEL_UP_MOVE(42, MOVE_SLASH),
                                                LEVEL_UP_MOVE(49, MOVE_MIRROR_MOVE),
                                                LEVEL_UP_MOVE(59, MOVE_SKY_UPPERCUT),
                                                LEVEL_UP_END };

static const u16 sMudkipLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                              LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(6, MOVE_MUD_SLAP),
                                              LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
                                              LEVEL_UP_MOVE(15, MOVE_BIDE),
                                              LEVEL_UP_MOVE(19, MOVE_FORESIGHT),
                                              LEVEL_UP_MOVE(24, MOVE_MUD_SPORT),
                                              LEVEL_UP_MOVE(28, MOVE_TAKE_DOWN),
                                              LEVEL_UP_MOVE(33, MOVE_WHIRLPOOL),
                                              LEVEL_UP_MOVE(37, MOVE_PROTECT),
                                              LEVEL_UP_MOVE(42, MOVE_HYDRO_PUMP),
                                              LEVEL_UP_MOVE(46, MOVE_ENDEAVOR),
                                              LEVEL_UP_END };

static const u16 sMarshtompLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),     LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                 LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),   LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                                 LEVEL_UP_MOVE(6, MOVE_MUD_SLAP),   LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
                                                 LEVEL_UP_MOVE(15, MOVE_BIDE),      LEVEL_UP_MOVE(16, MOVE_MUD_SHOT),
                                                 LEVEL_UP_MOVE(20, MOVE_FORESIGHT), LEVEL_UP_MOVE(25, MOVE_MUD_SPORT),
                                                 LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN), LEVEL_UP_MOVE(37, MOVE_MUDDY_WATER),
                                                 LEVEL_UP_MOVE(42, MOVE_PROTECT),   LEVEL_UP_MOVE(46, MOVE_EARTHQUAKE),
                                                 LEVEL_UP_MOVE(53, MOVE_ENDEAVOR),  LEVEL_UP_END };

static const u16 sSwampertLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),     LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),   LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(6, MOVE_MUD_SLAP),   LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(15, MOVE_BIDE),      LEVEL_UP_MOVE(16, MOVE_MUD_SHOT),
                                                LEVEL_UP_MOVE(20, MOVE_FORESIGHT), LEVEL_UP_MOVE(25, MOVE_MUD_SPORT),
                                                LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN), LEVEL_UP_MOVE(39, MOVE_MUDDY_WATER),
                                                LEVEL_UP_MOVE(46, MOVE_PROTECT),   LEVEL_UP_MOVE(52, MOVE_EARTHQUAKE),
                                                LEVEL_UP_MOVE(61, MOVE_ENDEAVOR),  LEVEL_UP_END };

static const u16 sPoochyenaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                 LEVEL_UP_MOVE(5, MOVE_HOWL),
                                                 LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
                                                 LEVEL_UP_MOVE(13, MOVE_BITE),
                                                 LEVEL_UP_MOVE(17, MOVE_ODOR_SLEUTH),
                                                 LEVEL_UP_MOVE(21, MOVE_ROAR),
                                                 LEVEL_UP_MOVE(25, MOVE_SWAGGER),
                                                 LEVEL_UP_MOVE(29, MOVE_SCARY_FACE),
                                                 LEVEL_UP_MOVE(33, MOVE_TAKE_DOWN),
                                                 LEVEL_UP_MOVE(37, MOVE_TAUNT),
                                                 LEVEL_UP_MOVE(41, MOVE_CRUNCH),
                                                 LEVEL_UP_MOVE(45, MOVE_THIEF),
                                                 LEVEL_UP_END };

static const u16 sMightyenaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(1, MOVE_HOWL),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK), LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(5, MOVE_HOWL),        LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_BITE),       LEVEL_UP_MOVE(17, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(22, MOVE_ROAR),       LEVEL_UP_MOVE(27, MOVE_SWAGGER),
    LEVEL_UP_MOVE(32, MOVE_SCARY_FACE), LEVEL_UP_MOVE(37, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(42, MOVE_TAUNT),      LEVEL_UP_MOVE(47, MOVE_CRUNCH),
    LEVEL_UP_MOVE(52, MOVE_THIEF),      LEVEL_UP_END
};

static const u16 sZigzagoonLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                 LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                 LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),
                                                 LEVEL_UP_MOVE(9, MOVE_HEADBUTT),
                                                 LEVEL_UP_MOVE(13, MOVE_SAND_ATTACK),
                                                 LEVEL_UP_MOVE(17, MOVE_ODOR_SLEUTH),
                                                 LEVEL_UP_MOVE(21, MOVE_MUD_SPORT),
                                                 LEVEL_UP_MOVE(25, MOVE_PIN_MISSILE),
                                                 LEVEL_UP_MOVE(29, MOVE_COVET),
                                                 LEVEL_UP_MOVE(33, MOVE_FLAIL),
                                                 LEVEL_UP_MOVE(37, MOVE_REST),
                                                 LEVEL_UP_MOVE(41, MOVE_BELLY_DRUM),
                                                 LEVEL_UP_END };

static const u16 sLinooneLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_GROWL),        LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_HEADBUTT),     LEVEL_UP_MOVE(5, MOVE_TAIL_WHIP),    LEVEL_UP_MOVE(9, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(13, MOVE_SAND_ATTACK), LEVEL_UP_MOVE(17, MOVE_ODOR_SLEUTH), LEVEL_UP_MOVE(23, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(29, MOVE_FURY_SWIPES), LEVEL_UP_MOVE(35, MOVE_COVET),       LEVEL_UP_MOVE(41, MOVE_SLASH),
    LEVEL_UP_MOVE(47, MOVE_REST),        LEVEL_UP_MOVE(53, MOVE_BELLY_DRUM),  LEVEL_UP_END
};

static const u16 sWurmpleLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE), LEVEL_UP_MOVE(1, MOVE_STRING_SHOT),
                                               LEVEL_UP_MOVE(5, MOVE_POISON_STING), LEVEL_UP_END };

static const u16 sSilcoonLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_HARDEN), LEVEL_UP_MOVE(7, MOVE_HARDEN),
                                               LEVEL_UP_END };

static const u16 sBeautiflyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ABSORB),
                                                 LEVEL_UP_MOVE(10, MOVE_ABSORB),
                                                 LEVEL_UP_MOVE(13, MOVE_GUST),
                                                 LEVEL_UP_MOVE(17, MOVE_STUN_SPORE),
                                                 LEVEL_UP_MOVE(20, MOVE_MORNING_SUN),
                                                 LEVEL_UP_MOVE(24, MOVE_MEGA_DRAIN),
                                                 LEVEL_UP_MOVE(27, MOVE_WHIRLWIND),
                                                 LEVEL_UP_MOVE(31, MOVE_ATTRACT),
                                                 LEVEL_UP_MOVE(34, MOVE_SILVER_WIND),
                                                 LEVEL_UP_MOVE(38, MOVE_GIGA_DRAIN),
                                                 LEVEL_UP_END };

static const u16 sCascoonLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_HARDEN), LEVEL_UP_MOVE(7, MOVE_HARDEN),
                                               LEVEL_UP_END };

static const u16 sDustoxLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CONFUSION),
                                              LEVEL_UP_MOVE(10, MOVE_CONFUSION),
                                              LEVEL_UP_MOVE(13, MOVE_GUST),
                                              LEVEL_UP_MOVE(17, MOVE_PROTECT),
                                              LEVEL_UP_MOVE(20, MOVE_MOONLIGHT),
                                              LEVEL_UP_MOVE(24, MOVE_PSYBEAM),
                                              LEVEL_UP_MOVE(27, MOVE_WHIRLWIND),
                                              LEVEL_UP_MOVE(31, MOVE_LIGHT_SCREEN),
                                              LEVEL_UP_MOVE(34, MOVE_SILVER_WIND),
                                              LEVEL_UP_MOVE(38, MOVE_TOXIC),
                                              LEVEL_UP_END };

static const u16 sLotadLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ASTONISH),    LEVEL_UP_MOVE(3, MOVE_GROWL),
                                             LEVEL_UP_MOVE(7, MOVE_ABSORB),      LEVEL_UP_MOVE(13, MOVE_NATURE_POWER),
                                             LEVEL_UP_MOVE(21, MOVE_MIST),       LEVEL_UP_MOVE(31, MOVE_RAIN_DANCE),
                                             LEVEL_UP_MOVE(43, MOVE_MEGA_DRAIN), LEVEL_UP_END };

static const u16 sLombreLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ASTONISH),
                                              LEVEL_UP_MOVE(3, MOVE_GROWL),
                                              LEVEL_UP_MOVE(7, MOVE_ABSORB),
                                              LEVEL_UP_MOVE(13, MOVE_NATURE_POWER),
                                              LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
                                              LEVEL_UP_MOVE(25, MOVE_FURY_SWIPES),
                                              LEVEL_UP_MOVE(31, MOVE_WATER_SPORT),
                                              LEVEL_UP_MOVE(37, MOVE_THIEF),
                                              LEVEL_UP_MOVE(43, MOVE_UPROAR),
                                              LEVEL_UP_MOVE(49, MOVE_HYDRO_PUMP),
                                              LEVEL_UP_END };

static const u16 sLudicoloLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ASTONISH), LEVEL_UP_MOVE(1, MOVE_GROWL),
                                                LEVEL_UP_MOVE(1, MOVE_ABSORB), LEVEL_UP_MOVE(1, MOVE_NATURE_POWER),
                                                LEVEL_UP_END };

static const u16 sSeedotLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BIDE),       LEVEL_UP_MOVE(3, MOVE_HARDEN),
                                              LEVEL_UP_MOVE(7, MOVE_GROWTH),     LEVEL_UP_MOVE(13, MOVE_NATURE_POWER),
                                              LEVEL_UP_MOVE(21, MOVE_SYNTHESIS), LEVEL_UP_MOVE(31, MOVE_SUNNY_DAY),
                                              LEVEL_UP_MOVE(43, MOVE_EXPLOSION), LEVEL_UP_END };

static const u16 sNuzleafLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),
                                               LEVEL_UP_MOVE(3, MOVE_HARDEN),
                                               LEVEL_UP_MOVE(7, MOVE_GROWTH),
                                               LEVEL_UP_MOVE(13, MOVE_NATURE_POWER),
                                               LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
                                               LEVEL_UP_MOVE(25, MOVE_TORMENT),
                                               LEVEL_UP_MOVE(31, MOVE_FAINT_ATTACK),
                                               LEVEL_UP_MOVE(37, MOVE_RAZOR_WIND),
                                               LEVEL_UP_MOVE(43, MOVE_SWAGGER),
                                               LEVEL_UP_MOVE(49, MOVE_EXTRASENSORY),
                                               LEVEL_UP_END };

static const u16 sShiftryLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND), LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                               LEVEL_UP_MOVE(1, MOVE_GROWTH), LEVEL_UP_MOVE(1, MOVE_NATURE_POWER),
                                               LEVEL_UP_END };

static const u16 sNincadaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                               LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                               LEVEL_UP_MOVE(5, MOVE_LEECH_LIFE),
                                               LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
                                               LEVEL_UP_MOVE(14, MOVE_FURY_SWIPES),
                                               LEVEL_UP_MOVE(19, MOVE_MIND_READER),
                                               LEVEL_UP_MOVE(25, MOVE_FALSE_SWIPE),
                                               LEVEL_UP_MOVE(31, MOVE_MUD_SLAP),
                                               LEVEL_UP_MOVE(38, MOVE_METAL_CLAW),
                                               LEVEL_UP_MOVE(45, MOVE_DIG),
                                               LEVEL_UP_END };

static const u16 sNinjaskLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),      LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_LEECH_LIFE),   LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(5, MOVE_LEECH_LIFE),   LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(14, MOVE_FURY_SWIPES), LEVEL_UP_MOVE(19, MOVE_MIND_READER),
    LEVEL_UP_MOVE(20, MOVE_DOUBLE_TEAM), LEVEL_UP_MOVE(20, MOVE_FURY_CUTTER),
    LEVEL_UP_MOVE(20, MOVE_SCREECH),     LEVEL_UP_MOVE(25, MOVE_SWORDS_DANCE),
    LEVEL_UP_MOVE(31, MOVE_SLASH),       LEVEL_UP_MOVE(38, MOVE_AGILITY),
    LEVEL_UP_MOVE(45, MOVE_BATON_PASS),  LEVEL_UP_END
};

static const u16 sShedinjaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                                LEVEL_UP_MOVE(5, MOVE_LEECH_LIFE),
                                                LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
                                                LEVEL_UP_MOVE(14, MOVE_FURY_SWIPES),
                                                LEVEL_UP_MOVE(19, MOVE_MIND_READER),
                                                LEVEL_UP_MOVE(25, MOVE_SPITE),
                                                LEVEL_UP_MOVE(31, MOVE_CONFUSE_RAY),
                                                LEVEL_UP_MOVE(38, MOVE_SHADOW_BALL),
                                                LEVEL_UP_MOVE(45, MOVE_GRUDGE),
                                                LEVEL_UP_END };

static const u16 sTaillowLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),         LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(4, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(8, MOVE_QUICK_ATTACK),
                                               LEVEL_UP_MOVE(13, MOVE_WING_ATTACK), LEVEL_UP_MOVE(19, MOVE_DOUBLE_TEAM),
                                               LEVEL_UP_MOVE(26, MOVE_ENDEAVOR),    LEVEL_UP_MOVE(34, MOVE_AERIAL_ACE),
                                               LEVEL_UP_MOVE(43, MOVE_AGILITY),     LEVEL_UP_END };

static const u16 sSwellowLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),         LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
                                               LEVEL_UP_MOVE(4, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(8, MOVE_QUICK_ATTACK),
                                               LEVEL_UP_MOVE(13, MOVE_WING_ATTACK), LEVEL_UP_MOVE(19, MOVE_DOUBLE_TEAM),
                                               LEVEL_UP_MOVE(28, MOVE_ENDEAVOR),    LEVEL_UP_MOVE(38, MOVE_AERIAL_ACE),
                                               LEVEL_UP_MOVE(49, MOVE_AGILITY),     LEVEL_UP_END };

static const u16 sShroomishLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ABSORB),
                                                 LEVEL_UP_MOVE(4, MOVE_TACKLE),
                                                 LEVEL_UP_MOVE(7, MOVE_STUN_SPORE),
                                                 LEVEL_UP_MOVE(10, MOVE_LEECH_SEED),
                                                 LEVEL_UP_MOVE(16, MOVE_MEGA_DRAIN),
                                                 LEVEL_UP_MOVE(22, MOVE_HEADBUTT),
                                                 LEVEL_UP_MOVE(28, MOVE_POISON_POWDER),
                                                 LEVEL_UP_MOVE(36, MOVE_GROWTH),
                                                 LEVEL_UP_MOVE(45, MOVE_GIGA_DRAIN),
                                                 LEVEL_UP_MOVE(54, MOVE_SPORE),
                                                 LEVEL_UP_END };

static const u16 sBreloomLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),       LEVEL_UP_MOVE(1, MOVE_TACKLE),         LEVEL_UP_MOVE(1, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(1, MOVE_LEECH_SEED),   LEVEL_UP_MOVE(4, MOVE_TACKLE),         LEVEL_UP_MOVE(7, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(10, MOVE_LEECH_SEED),  LEVEL_UP_MOVE(16, MOVE_MEGA_DRAIN),    LEVEL_UP_MOVE(22, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(23, MOVE_MACH_PUNCH),  LEVEL_UP_MOVE(28, MOVE_COUNTER),       LEVEL_UP_MOVE(36, MOVE_SKY_UPPERCUT),
    LEVEL_UP_MOVE(45, MOVE_MIND_READER), LEVEL_UP_MOVE(54, MOVE_DYNAMIC_PUNCH), LEVEL_UP_END
};

static const u16 sSpindaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(5, MOVE_UPROAR),
                                              LEVEL_UP_MOVE(12, MOVE_FAINT_ATTACK), LEVEL_UP_MOVE(16, MOVE_PSYBEAM),
                                              LEVEL_UP_MOVE(23, MOVE_HYPNOSIS),     LEVEL_UP_MOVE(27, MOVE_DIZZY_PUNCH),
                                              LEVEL_UP_MOVE(34, MOVE_TEETER_DANCE), LEVEL_UP_MOVE(38, MOVE_PSYCH_UP),
                                              LEVEL_UP_MOVE(45, MOVE_DOUBLE_EDGE),  LEVEL_UP_MOVE(49, MOVE_FLAIL),
                                              LEVEL_UP_MOVE(56, MOVE_THRASH),       LEVEL_UP_END };

static const u16 sWingullLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),        LEVEL_UP_MOVE(1, MOVE_WATER_GUN), LEVEL_UP_MOVE(7, MOVE_SUPERSONIC),
    LEVEL_UP_MOVE(13, MOVE_WING_ATTACK), LEVEL_UP_MOVE(21, MOVE_MIST),     LEVEL_UP_MOVE(31, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(43, MOVE_PURSUIT),     LEVEL_UP_MOVE(55, MOVE_AGILITY),  LEVEL_UP_END
};

static const u16 sPelipperLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),        LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),  LEVEL_UP_MOVE(1, MOVE_WING_ATTACK),
                                                LEVEL_UP_MOVE(3, MOVE_WATER_GUN),    LEVEL_UP_MOVE(7, MOVE_SUPERSONIC),
                                                LEVEL_UP_MOVE(13, MOVE_WING_ATTACK), LEVEL_UP_MOVE(21, MOVE_MIST),
                                                LEVEL_UP_MOVE(25, MOVE_PROTECT),     LEVEL_UP_MOVE(33, MOVE_STOCKPILE),
                                                LEVEL_UP_MOVE(33, MOVE_SWALLOW),     LEVEL_UP_MOVE(47, MOVE_SPIT_UP),
                                                LEVEL_UP_MOVE(61, MOVE_HYDRO_PUMP),  LEVEL_UP_END };

static const u16 sSurskitLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),       LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(13, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(19, MOVE_WATER_SPORT), LEVEL_UP_MOVE(25, MOVE_BUBBLE_BEAM), LEVEL_UP_MOVE(31, MOVE_AGILITY),
    LEVEL_UP_MOVE(37, MOVE_MIST),        LEVEL_UP_MOVE(37, MOVE_HAZE),        LEVEL_UP_END
};

static const u16 sMasquerainLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BUBBLE),
                                                  LEVEL_UP_MOVE(1, MOVE_QUICK_ATTACK),
                                                  LEVEL_UP_MOVE(1, MOVE_SWEET_SCENT),
                                                  LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),
                                                  LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
                                                  LEVEL_UP_MOVE(13, MOVE_SWEET_SCENT),
                                                  LEVEL_UP_MOVE(19, MOVE_WATER_SPORT),
                                                  LEVEL_UP_MOVE(26, MOVE_GUST),
                                                  LEVEL_UP_MOVE(33, MOVE_SCARY_FACE),
                                                  LEVEL_UP_MOVE(40, MOVE_STUN_SPORE),
                                                  LEVEL_UP_MOVE(47, MOVE_SILVER_WIND),
                                                  LEVEL_UP_MOVE(53, MOVE_WHIRLWIND),
                                                  LEVEL_UP_END };

static const u16 sWailmerLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SPLASH),
                                               LEVEL_UP_MOVE(5, MOVE_GROWL),
                                               LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
                                               LEVEL_UP_MOVE(14, MOVE_ROLLOUT),
                                               LEVEL_UP_MOVE(19, MOVE_WHIRLPOOL),
                                               LEVEL_UP_MOVE(23, MOVE_ASTONISH),
                                               LEVEL_UP_MOVE(28, MOVE_WATER_PULSE),
                                               LEVEL_UP_MOVE(32, MOVE_MIST),
                                               LEVEL_UP_MOVE(37, MOVE_REST),
                                               LEVEL_UP_MOVE(41, MOVE_WATER_SPOUT),
                                               LEVEL_UP_MOVE(46, MOVE_AMNESIA),
                                               LEVEL_UP_MOVE(50, MOVE_HYDRO_PUMP),
                                               LEVEL_UP_END };

static const u16 sWailordLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SPLASH),       LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(1, MOVE_WATER_GUN),    LEVEL_UP_MOVE(1, MOVE_ROLLOUT),
                                               LEVEL_UP_MOVE(5, MOVE_GROWL),        LEVEL_UP_MOVE(10, MOVE_WATER_GUN),
                                               LEVEL_UP_MOVE(14, MOVE_ROLLOUT),     LEVEL_UP_MOVE(19, MOVE_WHIRLPOOL),
                                               LEVEL_UP_MOVE(23, MOVE_ASTONISH),    LEVEL_UP_MOVE(28, MOVE_WATER_PULSE),
                                               LEVEL_UP_MOVE(32, MOVE_MIST),        LEVEL_UP_MOVE(37, MOVE_REST),
                                               LEVEL_UP_MOVE(44, MOVE_WATER_SPOUT), LEVEL_UP_MOVE(52, MOVE_AMNESIA),
                                               LEVEL_UP_MOVE(59, MOVE_HYDRO_PUMP),  LEVEL_UP_END };

static const u16 sSkittyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                              LEVEL_UP_MOVE(3, MOVE_TAIL_WHIP),
                                              LEVEL_UP_MOVE(7, MOVE_ATTRACT),
                                              LEVEL_UP_MOVE(13, MOVE_SING),
                                              LEVEL_UP_MOVE(15, MOVE_DOUBLE_SLAP),
                                              LEVEL_UP_MOVE(19, MOVE_ASSIST),
                                              LEVEL_UP_MOVE(25, MOVE_CHARM),
                                              LEVEL_UP_MOVE(27, MOVE_FAINT_ATTACK),
                                              LEVEL_UP_MOVE(31, MOVE_COVET),
                                              LEVEL_UP_MOVE(37, MOVE_HEAL_BELL),
                                              LEVEL_UP_MOVE(39, MOVE_DOUBLE_EDGE),
                                              LEVEL_UP_END };

static const u16 sDelcattyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL), LEVEL_UP_MOVE(1, MOVE_ATTRACT),
                                                LEVEL_UP_MOVE(1, MOVE_SING), LEVEL_UP_MOVE(1, MOVE_DOUBLE_SLAP),
                                                LEVEL_UP_END };

static const u16 sKecleonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_THIEF),          LEVEL_UP_MOVE(1, MOVE_TAIL_WHIP),
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),       LEVEL_UP_MOVE(1, MOVE_LICK),
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),        LEVEL_UP_MOVE(4, MOVE_BIND),
    LEVEL_UP_MOVE(7, MOVE_FAINT_ATTACK),   LEVEL_UP_MOVE(12, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(17, MOVE_PSYBEAM),       LEVEL_UP_MOVE(24, MOVE_SCREECH),
    LEVEL_UP_MOVE(31, MOVE_SLASH),         LEVEL_UP_MOVE(40, MOVE_SUBSTITUTE),
    LEVEL_UP_MOVE(49, MOVE_ANCIENT_POWER), LEVEL_UP_END
};

static const u16 sBaltoyLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_CONFUSION),      LEVEL_UP_MOVE(3, MOVE_HARDEN),         LEVEL_UP_MOVE(5, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),       LEVEL_UP_MOVE(11, MOVE_PSYBEAM),       LEVEL_UP_MOVE(15, MOVE_ROCK_TOMB),
    LEVEL_UP_MOVE(19, MOVE_SELF_DESTRUCT), LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER), LEVEL_UP_MOVE(31, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(37, MOVE_COSMIC_POWER),  LEVEL_UP_MOVE(45, MOVE_EXPLOSION),     LEVEL_UP_END
};

static const u16 sClaydolLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TELEPORT),       LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_HARDEN),         LEVEL_UP_MOVE(1, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(3, MOVE_HARDEN),         LEVEL_UP_MOVE(5, MOVE_RAPID_SPIN),
    LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),       LEVEL_UP_MOVE(11, MOVE_PSYBEAM),
    LEVEL_UP_MOVE(15, MOVE_ROCK_TOMB),     LEVEL_UP_MOVE(19, MOVE_SELF_DESTRUCT),
    LEVEL_UP_MOVE(25, MOVE_ANCIENT_POWER), LEVEL_UP_MOVE(31, MOVE_SANDSTORM),
    LEVEL_UP_MOVE(36, MOVE_HYPER_BEAM),    LEVEL_UP_MOVE(42, MOVE_COSMIC_POWER),
    LEVEL_UP_MOVE(55, MOVE_EXPLOSION),     LEVEL_UP_END
};

static const u16 sNosepassLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(7, MOVE_HARDEN),
                                                LEVEL_UP_MOVE(13, MOVE_ROCK_THROW),
                                                LEVEL_UP_MOVE(16, MOVE_BLOCK),
                                                LEVEL_UP_MOVE(22, MOVE_THUNDER_WAVE),
                                                LEVEL_UP_MOVE(28, MOVE_ROCK_SLIDE),
                                                LEVEL_UP_MOVE(31, MOVE_SANDSTORM),
                                                LEVEL_UP_MOVE(37, MOVE_REST),
                                                LEVEL_UP_MOVE(43, MOVE_ZAP_CANNON),
                                                LEVEL_UP_MOVE(46, MOVE_LOCK_ON),
                                                LEVEL_UP_END };

static const u16 sTorkoalLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_EMBER),
                                               LEVEL_UP_MOVE(4, MOVE_SMOG),
                                               LEVEL_UP_MOVE(7, MOVE_CURSE),
                                               LEVEL_UP_MOVE(14, MOVE_SMOKESCREEN),
                                               LEVEL_UP_MOVE(17, MOVE_FIRE_SPIN),
                                               LEVEL_UP_MOVE(20, MOVE_BODY_SLAM),
                                               LEVEL_UP_MOVE(27, MOVE_PROTECT),
                                               LEVEL_UP_MOVE(30, MOVE_FLAMETHROWER),
                                               LEVEL_UP_MOVE(33, MOVE_IRON_DEFENSE),
                                               LEVEL_UP_MOVE(40, MOVE_AMNESIA),
                                               LEVEL_UP_MOVE(43, MOVE_FLAIL),
                                               LEVEL_UP_MOVE(46, MOVE_HEAT_WAVE),
                                               LEVEL_UP_END };

static const u16 sSableyeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),          LEVEL_UP_MOVE(1, MOVE_SCRATCH),
    LEVEL_UP_MOVE(5, MOVE_FORESIGHT),     LEVEL_UP_MOVE(9, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(13, MOVE_ASTONISH),     LEVEL_UP_MOVE(17, MOVE_FURY_SWIPES),
    LEVEL_UP_MOVE(21, MOVE_FAKE_OUT),     LEVEL_UP_MOVE(25, MOVE_DETECT),
    LEVEL_UP_MOVE(29, MOVE_FAINT_ATTACK), LEVEL_UP_MOVE(33, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(37, MOVE_CONFUSE_RAY),  LEVEL_UP_MOVE(41, MOVE_SHADOW_BALL),
    LEVEL_UP_MOVE(45, MOVE_MEAN_LOOK),    LEVEL_UP_END
};

static const u16 sBarboachLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),      LEVEL_UP_MOVE(6, MOVE_MUD_SPORT),  LEVEL_UP_MOVE(6, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(11, MOVE_WATER_GUN),    LEVEL_UP_MOVE(16, MOVE_MAGNITUDE), LEVEL_UP_MOVE(21, MOVE_AMNESIA),
    LEVEL_UP_MOVE(26, MOVE_REST),         LEVEL_UP_MOVE(26, MOVE_SNORE),     LEVEL_UP_MOVE(31, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(36, MOVE_FUTURE_SIGHT), LEVEL_UP_MOVE(41, MOVE_FISSURE),   LEVEL_UP_END
};

static const u16 sWhiscashLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TICKLE),        LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),   LEVEL_UP_MOVE(1, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(1, MOVE_WATER_SPORT),   LEVEL_UP_MOVE(6, MOVE_MUD_SPORT),  LEVEL_UP_MOVE(6, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(11, MOVE_WATER_GUN),    LEVEL_UP_MOVE(16, MOVE_MAGNITUDE), LEVEL_UP_MOVE(21, MOVE_AMNESIA),
    LEVEL_UP_MOVE(26, MOVE_REST),         LEVEL_UP_MOVE(26, MOVE_SNORE),     LEVEL_UP_MOVE(36, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(46, MOVE_FUTURE_SIGHT), LEVEL_UP_MOVE(56, MOVE_FISSURE),   LEVEL_UP_END
};

static const u16 sLuvdiscLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),      LEVEL_UP_MOVE(4, MOVE_CHARM),
                                               LEVEL_UP_MOVE(12, MOVE_WATER_GUN),  LEVEL_UP_MOVE(16, MOVE_AGILITY),
                                               LEVEL_UP_MOVE(24, MOVE_TAKE_DOWN),  LEVEL_UP_MOVE(28, MOVE_ATTRACT),
                                               LEVEL_UP_MOVE(36, MOVE_SWEET_KISS), LEVEL_UP_MOVE(40, MOVE_FLAIL),
                                               LEVEL_UP_MOVE(48, MOVE_SAFEGUARD),  LEVEL_UP_END };

static const u16 sCorphishLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),        LEVEL_UP_MOVE(7, MOVE_HARDEN),       LEVEL_UP_MOVE(10, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(13, MOVE_LEER),         LEVEL_UP_MOVE(20, MOVE_BUBBLE_BEAM), LEVEL_UP_MOVE(23, MOVE_PROTECT),
    LEVEL_UP_MOVE(26, MOVE_KNOCK_OFF),    LEVEL_UP_MOVE(32, MOVE_TAUNT),       LEVEL_UP_MOVE(35, MOVE_CRABHAMMER),
    LEVEL_UP_MOVE(38, MOVE_SWORDS_DANCE), LEVEL_UP_MOVE(44, MOVE_GUILLOTINE),  LEVEL_UP_END
};

static const u16 sCrawdauntLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BUBBLE),        LEVEL_UP_MOVE(1, MOVE_HARDEN),       LEVEL_UP_MOVE(1, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(1, MOVE_LEER),          LEVEL_UP_MOVE(7, MOVE_HARDEN),       LEVEL_UP_MOVE(10, MOVE_VICE_GRIP),
    LEVEL_UP_MOVE(13, MOVE_LEER),         LEVEL_UP_MOVE(20, MOVE_BUBBLE_BEAM), LEVEL_UP_MOVE(23, MOVE_PROTECT),
    LEVEL_UP_MOVE(26, MOVE_KNOCK_OFF),    LEVEL_UP_MOVE(34, MOVE_TAUNT),       LEVEL_UP_MOVE(39, MOVE_CRABHAMMER),
    LEVEL_UP_MOVE(44, MOVE_SWORDS_DANCE), LEVEL_UP_MOVE(52, MOVE_GUILLOTINE),  LEVEL_UP_END
};

static const u16 sFeebasLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SPLASH), LEVEL_UP_MOVE(15, MOVE_TACKLE),
                                              LEVEL_UP_MOVE(30, MOVE_FLAIL), LEVEL_UP_END };

static const u16 sMiloticLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WATER_GUN),    LEVEL_UP_MOVE(5, MOVE_WRAP),
                                               LEVEL_UP_MOVE(10, MOVE_WATER_SPORT), LEVEL_UP_MOVE(15, MOVE_REFRESH),
                                               LEVEL_UP_MOVE(20, MOVE_WATER_PULSE), LEVEL_UP_MOVE(25, MOVE_TWISTER),
                                               LEVEL_UP_MOVE(30, MOVE_RECOVER),     LEVEL_UP_MOVE(35, MOVE_RAIN_DANCE),
                                               LEVEL_UP_MOVE(40, MOVE_HYDRO_PUMP),  LEVEL_UP_MOVE(45, MOVE_ATTRACT),
                                               LEVEL_UP_MOVE(50, MOVE_SAFEGUARD),   LEVEL_UP_END };

static const u16 sCarvanhaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LEER),
                                                LEVEL_UP_MOVE(1, MOVE_BITE),
                                                LEVEL_UP_MOVE(7, MOVE_RAGE),
                                                LEVEL_UP_MOVE(13, MOVE_FOCUS_ENERGY),
                                                LEVEL_UP_MOVE(16, MOVE_SCARY_FACE),
                                                LEVEL_UP_MOVE(22, MOVE_CRUNCH),
                                                LEVEL_UP_MOVE(28, MOVE_SCREECH),
                                                LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
                                                LEVEL_UP_MOVE(37, MOVE_SWAGGER),
                                                LEVEL_UP_MOVE(43, MOVE_AGILITY),
                                                LEVEL_UP_END };

static const u16 sSharpedoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),         LEVEL_UP_MOVE(1, MOVE_BITE),     LEVEL_UP_MOVE(1, MOVE_RAGE),
    LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(7, MOVE_RAGE),     LEVEL_UP_MOVE(13, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(16, MOVE_SCARY_FACE),  LEVEL_UP_MOVE(22, MOVE_CRUNCH),  LEVEL_UP_MOVE(28, MOVE_SCREECH),
    LEVEL_UP_MOVE(33, MOVE_SLASH),       LEVEL_UP_MOVE(38, MOVE_TAUNT),   LEVEL_UP_MOVE(43, MOVE_SWAGGER),
    LEVEL_UP_MOVE(48, MOVE_SKULL_BASH),  LEVEL_UP_MOVE(53, MOVE_AGILITY), LEVEL_UP_END
};

static const u16 sTrapinchLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BITE),       LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK), LEVEL_UP_MOVE(17, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(25, MOVE_SAND_TOMB), LEVEL_UP_MOVE(33, MOVE_CRUNCH),     LEVEL_UP_MOVE(41, MOVE_DIG),
    LEVEL_UP_MOVE(49, MOVE_SANDSTORM), LEVEL_UP_MOVE(57, MOVE_HYPER_BEAM), LEVEL_UP_END
};

static const u16 sVibravaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BITE),
                                               LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
                                               LEVEL_UP_MOVE(1, MOVE_FAINT_ATTACK),
                                               LEVEL_UP_MOVE(1, MOVE_SAND_TOMB),
                                               LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
                                               LEVEL_UP_MOVE(17, MOVE_FAINT_ATTACK),
                                               LEVEL_UP_MOVE(25, MOVE_SAND_TOMB),
                                               LEVEL_UP_MOVE(33, MOVE_CRUNCH),
                                               LEVEL_UP_MOVE(35, MOVE_DRAGON_BREATH),
                                               LEVEL_UP_MOVE(41, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(49, MOVE_SANDSTORM),
                                               LEVEL_UP_MOVE(57, MOVE_HYPER_BEAM),
                                               LEVEL_UP_END };

static const u16 sFlygonLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_BITE),
                                              LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),
                                              LEVEL_UP_MOVE(1, MOVE_FAINT_ATTACK),
                                              LEVEL_UP_MOVE(1, MOVE_SAND_TOMB),
                                              LEVEL_UP_MOVE(9, MOVE_SAND_ATTACK),
                                              LEVEL_UP_MOVE(17, MOVE_FAINT_ATTACK),
                                              LEVEL_UP_MOVE(25, MOVE_SAND_TOMB),
                                              LEVEL_UP_MOVE(33, MOVE_CRUNCH),
                                              LEVEL_UP_MOVE(35, MOVE_DRAGON_BREATH),
                                              LEVEL_UP_MOVE(41, MOVE_SCREECH),
                                              LEVEL_UP_MOVE(53, MOVE_SANDSTORM),
                                              LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),
                                              LEVEL_UP_END };

static const u16 sMakuhitaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),         LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(4, MOVE_SAND_ATTACK),    LEVEL_UP_MOVE(10, MOVE_ARM_THRUST),
    LEVEL_UP_MOVE(13, MOVE_VITAL_THROW),   LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(22, MOVE_WHIRLWIND),     LEVEL_UP_MOVE(28, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(31, MOVE_SMELLING_SALT), LEVEL_UP_MOVE(37, MOVE_BELLY_DRUM),
    LEVEL_UP_MOVE(40, MOVE_ENDURE),        LEVEL_UP_MOVE(46, MOVE_SEISMIC_TOSS),
    LEVEL_UP_MOVE(49, MOVE_REVERSAL),      LEVEL_UP_END
};

static const u16 sHariyamaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),         LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(1, MOVE_SAND_ATTACK),    LEVEL_UP_MOVE(1, MOVE_ARM_THRUST),
    LEVEL_UP_MOVE(4, MOVE_SAND_ATTACK),    LEVEL_UP_MOVE(10, MOVE_ARM_THRUST),
    LEVEL_UP_MOVE(13, MOVE_VITAL_THROW),   LEVEL_UP_MOVE(19, MOVE_FAKE_OUT),
    LEVEL_UP_MOVE(22, MOVE_WHIRLWIND),     LEVEL_UP_MOVE(29, MOVE_KNOCK_OFF),
    LEVEL_UP_MOVE(33, MOVE_SMELLING_SALT), LEVEL_UP_MOVE(40, MOVE_BELLY_DRUM),
    LEVEL_UP_MOVE(44, MOVE_ENDURE),        LEVEL_UP_MOVE(51, MOVE_SEISMIC_TOSS),
    LEVEL_UP_MOVE(55, MOVE_REVERSAL),      LEVEL_UP_END
};

static const u16 sElectrikeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(4, MOVE_THUNDER_WAVE),  LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(12, MOVE_HOWL),        LEVEL_UP_MOVE(17, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(20, MOVE_SPARK),
    LEVEL_UP_MOVE(25, MOVE_ODOR_SLEUTH), LEVEL_UP_MOVE(28, MOVE_ROAR),         LEVEL_UP_MOVE(33, MOVE_BITE),
    LEVEL_UP_MOVE(36, MOVE_THUNDER),     LEVEL_UP_MOVE(41, MOVE_CHARGE),       LEVEL_UP_END
};

static const u16 sManectricLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_THUNDER_WAVE),  LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_HOWL),         LEVEL_UP_MOVE(4, MOVE_THUNDER_WAVE),  LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(12, MOVE_HOWL),        LEVEL_UP_MOVE(17, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(20, MOVE_SPARK),
    LEVEL_UP_MOVE(25, MOVE_ODOR_SLEUTH), LEVEL_UP_MOVE(31, MOVE_ROAR),         LEVEL_UP_MOVE(39, MOVE_BITE),
    LEVEL_UP_MOVE(45, MOVE_THUNDER),     LEVEL_UP_MOVE(53, MOVE_CHARGE),       LEVEL_UP_END
};

static const u16 sNumelLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),
                                             LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                             LEVEL_UP_MOVE(11, MOVE_EMBER),
                                             LEVEL_UP_MOVE(19, MOVE_MAGNITUDE),
                                             LEVEL_UP_MOVE(25, MOVE_FOCUS_ENERGY),
                                             LEVEL_UP_MOVE(29, MOVE_TAKE_DOWN),
                                             LEVEL_UP_MOVE(31, MOVE_AMNESIA),
                                             LEVEL_UP_MOVE(35, MOVE_EARTHQUAKE),
                                             LEVEL_UP_MOVE(41, MOVE_FLAMETHROWER),
                                             LEVEL_UP_MOVE(49, MOVE_DOUBLE_EDGE),
                                             LEVEL_UP_END };

static const u16 sCameruptLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(1, MOVE_TACKLE),
    LEVEL_UP_MOVE(1, MOVE_EMBER),         LEVEL_UP_MOVE(1, MOVE_MAGNITUDE),
    LEVEL_UP_MOVE(11, MOVE_EMBER),        LEVEL_UP_MOVE(19, MOVE_MAGNITUDE),
    LEVEL_UP_MOVE(25, MOVE_FOCUS_ENERGY), LEVEL_UP_MOVE(29, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(31, MOVE_AMNESIA),      LEVEL_UP_MOVE(33, MOVE_ROCK_SLIDE),
    LEVEL_UP_MOVE(37, MOVE_EARTHQUAKE),   LEVEL_UP_MOVE(45, MOVE_ERUPTION),
    LEVEL_UP_MOVE(55, MOVE_FISSURE),      LEVEL_UP_END
};

static const u16 sSphealLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW),
                                              LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                              LEVEL_UP_MOVE(7, MOVE_ENCORE),
                                              LEVEL_UP_MOVE(13, MOVE_ICE_BALL),
                                              LEVEL_UP_MOVE(19, MOVE_BODY_SLAM),
                                              LEVEL_UP_MOVE(25, MOVE_AURORA_BEAM),
                                              LEVEL_UP_MOVE(31, MOVE_HAIL),
                                              LEVEL_UP_MOVE(37, MOVE_REST),
                                              LEVEL_UP_MOVE(37, MOVE_SNORE),
                                              LEVEL_UP_MOVE(43, MOVE_BLIZZARD),
                                              LEVEL_UP_MOVE(49, MOVE_SHEER_COLD),
                                              LEVEL_UP_END };

static const u16 sSealeoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW), LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(1, MOVE_WATER_GUN),   LEVEL_UP_MOVE(1, MOVE_ENCORE),
                                              LEVEL_UP_MOVE(7, MOVE_ENCORE),      LEVEL_UP_MOVE(13, MOVE_ICE_BALL),
                                              LEVEL_UP_MOVE(19, MOVE_BODY_SLAM),  LEVEL_UP_MOVE(25, MOVE_AURORA_BEAM),
                                              LEVEL_UP_MOVE(31, MOVE_HAIL),       LEVEL_UP_MOVE(39, MOVE_REST),
                                              LEVEL_UP_MOVE(39, MOVE_SNORE),      LEVEL_UP_MOVE(47, MOVE_BLIZZARD),
                                              LEVEL_UP_MOVE(55, MOVE_SHEER_COLD), LEVEL_UP_END };

static const u16 sWalreinLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW), LEVEL_UP_MOVE(1, MOVE_GROWL),
                                               LEVEL_UP_MOVE(1, MOVE_WATER_GUN),   LEVEL_UP_MOVE(1, MOVE_ENCORE),
                                               LEVEL_UP_MOVE(7, MOVE_ENCORE),      LEVEL_UP_MOVE(13, MOVE_ICE_BALL),
                                               LEVEL_UP_MOVE(19, MOVE_BODY_SLAM),  LEVEL_UP_MOVE(25, MOVE_AURORA_BEAM),
                                               LEVEL_UP_MOVE(31, MOVE_HAIL),       LEVEL_UP_MOVE(39, MOVE_REST),
                                               LEVEL_UP_MOVE(39, MOVE_SNORE),      LEVEL_UP_MOVE(50, MOVE_BLIZZARD),
                                               LEVEL_UP_MOVE(61, MOVE_SHEER_COLD), LEVEL_UP_END };

static const u16 sCacneaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),  LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(5, MOVE_ABSORB),        LEVEL_UP_MOVE(9, MOVE_GROWTH),
    LEVEL_UP_MOVE(13, MOVE_LEECH_SEED),   LEVEL_UP_MOVE(17, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_PIN_MISSILE),  LEVEL_UP_MOVE(25, MOVE_INGRAIN),
    LEVEL_UP_MOVE(29, MOVE_FAINT_ATTACK), LEVEL_UP_MOVE(33, MOVE_SPIKES),
    LEVEL_UP_MOVE(37, MOVE_NEEDLE_ARM),   LEVEL_UP_MOVE(41, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(45, MOVE_SANDSTORM),    LEVEL_UP_END
};

static const u16 sCacturneLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POISON_STING),  LEVEL_UP_MOVE(1, MOVE_LEER),
    LEVEL_UP_MOVE(1, MOVE_ABSORB),        LEVEL_UP_MOVE(1, MOVE_GROWTH),
    LEVEL_UP_MOVE(5, MOVE_ABSORB),        LEVEL_UP_MOVE(9, MOVE_GROWTH),
    LEVEL_UP_MOVE(13, MOVE_LEECH_SEED),   LEVEL_UP_MOVE(17, MOVE_SAND_ATTACK),
    LEVEL_UP_MOVE(21, MOVE_PIN_MISSILE),  LEVEL_UP_MOVE(25, MOVE_INGRAIN),
    LEVEL_UP_MOVE(29, MOVE_FAINT_ATTACK), LEVEL_UP_MOVE(35, MOVE_SPIKES),
    LEVEL_UP_MOVE(41, MOVE_NEEDLE_ARM),   LEVEL_UP_MOVE(47, MOVE_COTTON_SPORE),
    LEVEL_UP_MOVE(53, MOVE_SANDSTORM),    LEVEL_UP_END
};

static const u16 sSnoruntLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW), LEVEL_UP_MOVE(1, MOVE_LEER),
                                               LEVEL_UP_MOVE(7, MOVE_DOUBLE_TEAM), LEVEL_UP_MOVE(10, MOVE_BITE),
                                               LEVEL_UP_MOVE(16, MOVE_ICY_WIND),   LEVEL_UP_MOVE(19, MOVE_HEADBUTT),
                                               LEVEL_UP_MOVE(25, MOVE_PROTECT),    LEVEL_UP_MOVE(28, MOVE_CRUNCH),
                                               LEVEL_UP_MOVE(34, MOVE_ICE_BEAM),   LEVEL_UP_MOVE(37, MOVE_HAIL),
                                               LEVEL_UP_MOVE(43, MOVE_BLIZZARD),   LEVEL_UP_END };

static const u16 sGlalieLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POWDER_SNOW), LEVEL_UP_MOVE(1, MOVE_LEER),        LEVEL_UP_MOVE(1, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(1, MOVE_BITE),        LEVEL_UP_MOVE(7, MOVE_DOUBLE_TEAM), LEVEL_UP_MOVE(10, MOVE_BITE),
    LEVEL_UP_MOVE(16, MOVE_ICY_WIND),   LEVEL_UP_MOVE(19, MOVE_HEADBUTT),   LEVEL_UP_MOVE(25, MOVE_PROTECT),
    LEVEL_UP_MOVE(28, MOVE_CRUNCH),     LEVEL_UP_MOVE(34, MOVE_ICE_BEAM),   LEVEL_UP_MOVE(42, MOVE_HAIL),
    LEVEL_UP_MOVE(53, MOVE_BLIZZARD),   LEVEL_UP_MOVE(61, MOVE_SHEER_COLD), LEVEL_UP_END
};

static const u16 sLunatoneLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                                LEVEL_UP_MOVE(7, MOVE_CONFUSION),
                                                LEVEL_UP_MOVE(13, MOVE_ROCK_THROW),
                                                LEVEL_UP_MOVE(19, MOVE_HYPNOSIS),
                                                LEVEL_UP_MOVE(25, MOVE_PSYWAVE),
                                                LEVEL_UP_MOVE(31, MOVE_COSMIC_POWER),
                                                LEVEL_UP_MOVE(37, MOVE_PSYCHIC),
                                                LEVEL_UP_MOVE(43, MOVE_FUTURE_SIGHT),
                                                LEVEL_UP_MOVE(49, MOVE_EXPLOSION),
                                                LEVEL_UP_END };

static const u16 sSolrockLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                               LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                               LEVEL_UP_MOVE(7, MOVE_CONFUSION),
                                               LEVEL_UP_MOVE(13, MOVE_ROCK_THROW),
                                               LEVEL_UP_MOVE(19, MOVE_FIRE_SPIN),
                                               LEVEL_UP_MOVE(25, MOVE_PSYWAVE),
                                               LEVEL_UP_MOVE(31, MOVE_COSMIC_POWER),
                                               LEVEL_UP_MOVE(37, MOVE_ROCK_SLIDE),
                                               LEVEL_UP_MOVE(43, MOVE_SOLAR_BEAM),
                                               LEVEL_UP_MOVE(49, MOVE_EXPLOSION),
                                               LEVEL_UP_END };

static const u16 sAzurillLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SPLASH),
                                               LEVEL_UP_MOVE(3, MOVE_CHARM),
                                               LEVEL_UP_MOVE(6, MOVE_TAIL_WHIP),
                                               LEVEL_UP_MOVE(10, MOVE_BUBBLE),
                                               LEVEL_UP_MOVE(15, MOVE_SLAM),
                                               LEVEL_UP_MOVE(21, MOVE_WATER_GUN),
                                               LEVEL_UP_END };

static const u16 sSpoinkLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SPLASH),       LEVEL_UP_MOVE(7, MOVE_PSYWAVE),
                                              LEVEL_UP_MOVE(10, MOVE_ODOR_SLEUTH), LEVEL_UP_MOVE(16, MOVE_PSYBEAM),
                                              LEVEL_UP_MOVE(19, MOVE_PSYCH_UP),    LEVEL_UP_MOVE(25, MOVE_CONFUSE_RAY),
                                              LEVEL_UP_MOVE(28, MOVE_MAGIC_COAT),  LEVEL_UP_MOVE(34, MOVE_PSYCHIC),
                                              LEVEL_UP_MOVE(37, MOVE_REST),        LEVEL_UP_MOVE(37, MOVE_SNORE),
                                              LEVEL_UP_MOVE(43, MOVE_BOUNCE),      LEVEL_UP_END };

static const u16 sGrumpigLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SPLASH),      LEVEL_UP_MOVE(1, MOVE_PSYWAVE),   LEVEL_UP_MOVE(1, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(1, MOVE_PSYBEAM),     LEVEL_UP_MOVE(7, MOVE_PSYWAVE),   LEVEL_UP_MOVE(10, MOVE_ODOR_SLEUTH),
    LEVEL_UP_MOVE(16, MOVE_PSYBEAM),    LEVEL_UP_MOVE(19, MOVE_PSYCH_UP), LEVEL_UP_MOVE(25, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(28, MOVE_MAGIC_COAT), LEVEL_UP_MOVE(37, MOVE_PSYCHIC),  LEVEL_UP_MOVE(43, MOVE_REST),
    LEVEL_UP_MOVE(43, MOVE_SNORE),      LEVEL_UP_MOVE(55, MOVE_BOUNCE),   LEVEL_UP_END
};

static const u16 sPlusleLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(4, MOVE_THUNDER_WAVE), LEVEL_UP_MOVE(10, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(13, MOVE_HELPING_HAND), LEVEL_UP_MOVE(19, MOVE_SPARK),       LEVEL_UP_MOVE(22, MOVE_ENCORE),
    LEVEL_UP_MOVE(28, MOVE_FAKE_TEARS),   LEVEL_UP_MOVE(31, MOVE_CHARGE),      LEVEL_UP_MOVE(37, MOVE_THUNDER),
    LEVEL_UP_MOVE(40, MOVE_BATON_PASS),   LEVEL_UP_MOVE(47, MOVE_AGILITY),     LEVEL_UP_END
};

static const u16 sMinunLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(4, MOVE_THUNDER_WAVE),
                                             LEVEL_UP_MOVE(10, MOVE_QUICK_ATTACK), LEVEL_UP_MOVE(13, MOVE_HELPING_HAND),
                                             LEVEL_UP_MOVE(19, MOVE_SPARK),        LEVEL_UP_MOVE(22, MOVE_ENCORE),
                                             LEVEL_UP_MOVE(28, MOVE_CHARM),        LEVEL_UP_MOVE(31, MOVE_CHARGE),
                                             LEVEL_UP_MOVE(37, MOVE_THUNDER),      LEVEL_UP_MOVE(40, MOVE_BATON_PASS),
                                             LEVEL_UP_MOVE(47, MOVE_AGILITY),      LEVEL_UP_END };

static const u16 sMawileLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ASTONISH),
                                              LEVEL_UP_MOVE(6, MOVE_FAKE_TEARS),
                                              LEVEL_UP_MOVE(11, MOVE_BITE),
                                              LEVEL_UP_MOVE(16, MOVE_SWEET_SCENT),
                                              LEVEL_UP_MOVE(21, MOVE_VICE_GRIP),
                                              LEVEL_UP_MOVE(26, MOVE_FAINT_ATTACK),
                                              LEVEL_UP_MOVE(31, MOVE_BATON_PASS),
                                              LEVEL_UP_MOVE(36, MOVE_CRUNCH),
                                              LEVEL_UP_MOVE(41, MOVE_IRON_DEFENSE),
                                              LEVEL_UP_MOVE(46, MOVE_STOCKPILE),
                                              LEVEL_UP_MOVE(46, MOVE_SWALLOW),
                                              LEVEL_UP_MOVE(46, MOVE_SPIT_UP),
                                              LEVEL_UP_END };

static const u16 sMedititeLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BIDE),       LEVEL_UP_MOVE(4, MOVE_MEDITATE),      LEVEL_UP_MOVE(9, MOVE_CONFUSION),
    LEVEL_UP_MOVE(12, MOVE_DETECT),    LEVEL_UP_MOVE(18, MOVE_HIDDEN_POWER), LEVEL_UP_MOVE(22, MOVE_MIND_READER),
    LEVEL_UP_MOVE(28, MOVE_CALM_MIND), LEVEL_UP_MOVE(32, MOVE_HI_JUMP_KICK), LEVEL_UP_MOVE(38, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(42, MOVE_REVERSAL),  LEVEL_UP_MOVE(48, MOVE_RECOVER),      LEVEL_UP_END
};

static const u16 sMedichamLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_FIRE_PUNCH), LEVEL_UP_MOVE(1, MOVE_THUNDER_PUNCH), LEVEL_UP_MOVE(1, MOVE_ICE_PUNCH),
    LEVEL_UP_MOVE(1, MOVE_BIDE),       LEVEL_UP_MOVE(1, MOVE_MEDITATE),      LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_DETECT),     LEVEL_UP_MOVE(4, MOVE_MEDITATE),      LEVEL_UP_MOVE(9, MOVE_CONFUSION),
    LEVEL_UP_MOVE(12, MOVE_DETECT),    LEVEL_UP_MOVE(18, MOVE_HIDDEN_POWER), LEVEL_UP_MOVE(22, MOVE_MIND_READER),
    LEVEL_UP_MOVE(28, MOVE_CALM_MIND), LEVEL_UP_MOVE(32, MOVE_HI_JUMP_KICK), LEVEL_UP_MOVE(40, MOVE_PSYCH_UP),
    LEVEL_UP_MOVE(46, MOVE_REVERSAL),  LEVEL_UP_MOVE(54, MOVE_RECOVER),      LEVEL_UP_END
};

static const u16 sSwabluLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_PECK),         LEVEL_UP_MOVE(1, MOVE_GROWL),
                                              LEVEL_UP_MOVE(8, MOVE_ASTONISH),     LEVEL_UP_MOVE(11, MOVE_SING),
                                              LEVEL_UP_MOVE(18, MOVE_FURY_ATTACK), LEVEL_UP_MOVE(21, MOVE_SAFEGUARD),
                                              LEVEL_UP_MOVE(28, MOVE_MIST),        LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
                                              LEVEL_UP_MOVE(38, MOVE_MIRROR_MOVE), LEVEL_UP_MOVE(41, MOVE_REFRESH),
                                              LEVEL_UP_MOVE(48, MOVE_PERISH_SONG), LEVEL_UP_END };

static const u16 sAltariaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PECK),           LEVEL_UP_MOVE(1, MOVE_GROWL),
    LEVEL_UP_MOVE(1, MOVE_ASTONISH),       LEVEL_UP_MOVE(1, MOVE_SING),
    LEVEL_UP_MOVE(8, MOVE_ASTONISH),       LEVEL_UP_MOVE(11, MOVE_SING),
    LEVEL_UP_MOVE(18, MOVE_FURY_ATTACK),   LEVEL_UP_MOVE(21, MOVE_SAFEGUARD),
    LEVEL_UP_MOVE(28, MOVE_MIST),          LEVEL_UP_MOVE(31, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(35, MOVE_DRAGON_BREATH), LEVEL_UP_MOVE(40, MOVE_DRAGON_DANCE),
    LEVEL_UP_MOVE(45, MOVE_REFRESH),       LEVEL_UP_MOVE(54, MOVE_PERISH_SONG),
    LEVEL_UP_MOVE(59, MOVE_SKY_ATTACK),    LEVEL_UP_END
};

static const u16 sWynautLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SPLASH),        LEVEL_UP_MOVE(1, MOVE_CHARM),
                                              LEVEL_UP_MOVE(1, MOVE_ENCORE),        LEVEL_UP_MOVE(15, MOVE_COUNTER),
                                              LEVEL_UP_MOVE(15, MOVE_MIRROR_COAT),  LEVEL_UP_MOVE(15, MOVE_SAFEGUARD),
                                              LEVEL_UP_MOVE(15, MOVE_DESTINY_BOND), LEVEL_UP_END };

static const u16 sDuskullLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_LEER),       LEVEL_UP_MOVE(1, MOVE_NIGHT_SHADE),   LEVEL_UP_MOVE(5, MOVE_DISABLE),
    LEVEL_UP_MOVE(12, MOVE_FORESIGHT), LEVEL_UP_MOVE(16, MOVE_ASTONISH),     LEVEL_UP_MOVE(23, MOVE_CONFUSE_RAY),
    LEVEL_UP_MOVE(27, MOVE_PURSUIT),   LEVEL_UP_MOVE(34, MOVE_CURSE),        LEVEL_UP_MOVE(38, MOVE_WILL_O_WISP),
    LEVEL_UP_MOVE(45, MOVE_MEAN_LOOK), LEVEL_UP_MOVE(49, MOVE_FUTURE_SIGHT), LEVEL_UP_END
};

static const u16 sDusclopsLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_BIND),       LEVEL_UP_MOVE(1, MOVE_LEER),          LEVEL_UP_MOVE(1, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(1, MOVE_DISABLE),    LEVEL_UP_MOVE(5, MOVE_DISABLE),       LEVEL_UP_MOVE(12, MOVE_FORESIGHT),
    LEVEL_UP_MOVE(16, MOVE_ASTONISH),  LEVEL_UP_MOVE(23, MOVE_CONFUSE_RAY),  LEVEL_UP_MOVE(27, MOVE_PURSUIT),
    LEVEL_UP_MOVE(34, MOVE_CURSE),     LEVEL_UP_MOVE(37, MOVE_SHADOW_PUNCH), LEVEL_UP_MOVE(41, MOVE_WILL_O_WISP),
    LEVEL_UP_MOVE(51, MOVE_MEAN_LOOK), LEVEL_UP_MOVE(58, MOVE_FUTURE_SIGHT), LEVEL_UP_END
};

static const u16 sRoseliaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_ABSORB),        LEVEL_UP_MOVE(5, MOVE_GROWTH),
    LEVEL_UP_MOVE(9, MOVE_POISON_STING),  LEVEL_UP_MOVE(13, MOVE_STUN_SPORE),
    LEVEL_UP_MOVE(17, MOVE_MEGA_DRAIN),   LEVEL_UP_MOVE(21, MOVE_LEECH_SEED),
    LEVEL_UP_MOVE(25, MOVE_MAGICAL_LEAF), LEVEL_UP_MOVE(29, MOVE_GRASS_WHISTLE),
    LEVEL_UP_MOVE(33, MOVE_GIGA_DRAIN),   LEVEL_UP_MOVE(37, MOVE_SWEET_SCENT),
    LEVEL_UP_MOVE(41, MOVE_INGRAIN),      LEVEL_UP_MOVE(45, MOVE_TOXIC),
    LEVEL_UP_MOVE(49, MOVE_PETAL_DANCE),  LEVEL_UP_MOVE(53, MOVE_AROMATHERAPY),
    LEVEL_UP_MOVE(57, MOVE_SYNTHESIS),    LEVEL_UP_END
};

static const u16 sSlakothLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),       LEVEL_UP_MOVE(1, MOVE_YAWN),
                                               LEVEL_UP_MOVE(7, MOVE_ENCORE),        LEVEL_UP_MOVE(13, MOVE_SLACK_OFF),
                                               LEVEL_UP_MOVE(19, MOVE_FAINT_ATTACK), LEVEL_UP_MOVE(25, MOVE_AMNESIA),
                                               LEVEL_UP_MOVE(31, MOVE_COVET),        LEVEL_UP_MOVE(37, MOVE_COUNTER),
                                               LEVEL_UP_MOVE(43, MOVE_FLAIL),        LEVEL_UP_END };

static const u16 sVigorothLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                                LEVEL_UP_MOVE(1, MOVE_FOCUS_ENERGY),
                                                LEVEL_UP_MOVE(1, MOVE_ENCORE),
                                                LEVEL_UP_MOVE(1, MOVE_UPROAR),
                                                LEVEL_UP_MOVE(7, MOVE_ENCORE),
                                                LEVEL_UP_MOVE(13, MOVE_UPROAR),
                                                LEVEL_UP_MOVE(19, MOVE_FURY_SWIPES),
                                                LEVEL_UP_MOVE(25, MOVE_ENDURE),
                                                LEVEL_UP_MOVE(31, MOVE_SLASH),
                                                LEVEL_UP_MOVE(37, MOVE_COUNTER),
                                                LEVEL_UP_MOVE(43, MOVE_FOCUS_PUNCH),
                                                LEVEL_UP_MOVE(49, MOVE_REVERSAL),
                                                LEVEL_UP_END };

static const u16 sSlakingLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                               LEVEL_UP_MOVE(1, MOVE_YAWN),
                                               LEVEL_UP_MOVE(1, MOVE_ENCORE),
                                               LEVEL_UP_MOVE(1, MOVE_SLACK_OFF),
                                               LEVEL_UP_MOVE(7, MOVE_ENCORE),
                                               LEVEL_UP_MOVE(13, MOVE_SLACK_OFF),
                                               LEVEL_UP_MOVE(19, MOVE_FAINT_ATTACK),
                                               LEVEL_UP_MOVE(25, MOVE_AMNESIA),
                                               LEVEL_UP_MOVE(31, MOVE_COVET),
                                               LEVEL_UP_MOVE(36, MOVE_SWAGGER),
                                               LEVEL_UP_MOVE(37, MOVE_COUNTER),
                                               LEVEL_UP_MOVE(43, MOVE_FLAIL),
                                               LEVEL_UP_END };

static const u16 sGulpinLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),        LEVEL_UP_MOVE(6, MOVE_YAWN),
                                              LEVEL_UP_MOVE(9, MOVE_POISON_GAS),   LEVEL_UP_MOVE(14, MOVE_SLUDGE),
                                              LEVEL_UP_MOVE(17, MOVE_AMNESIA),     LEVEL_UP_MOVE(23, MOVE_ENCORE),
                                              LEVEL_UP_MOVE(28, MOVE_TOXIC),       LEVEL_UP_MOVE(34, MOVE_STOCKPILE),
                                              LEVEL_UP_MOVE(34, MOVE_SPIT_UP),     LEVEL_UP_MOVE(34, MOVE_SWALLOW),
                                              LEVEL_UP_MOVE(39, MOVE_SLUDGE_BOMB), LEVEL_UP_END };

static const u16 sSwalotLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),        LEVEL_UP_MOVE(1, MOVE_YAWN),
                                              LEVEL_UP_MOVE(1, MOVE_POISON_GAS),   LEVEL_UP_MOVE(1, MOVE_SLUDGE),
                                              LEVEL_UP_MOVE(6, MOVE_YAWN),         LEVEL_UP_MOVE(9, MOVE_POISON_GAS),
                                              LEVEL_UP_MOVE(14, MOVE_SLUDGE),      LEVEL_UP_MOVE(17, MOVE_AMNESIA),
                                              LEVEL_UP_MOVE(23, MOVE_ENCORE),      LEVEL_UP_MOVE(26, MOVE_BODY_SLAM),
                                              LEVEL_UP_MOVE(31, MOVE_TOXIC),       LEVEL_UP_MOVE(40, MOVE_STOCKPILE),
                                              LEVEL_UP_MOVE(40, MOVE_SPIT_UP),     LEVEL_UP_MOVE(40, MOVE_SWALLOW),
                                              LEVEL_UP_MOVE(48, MOVE_SLUDGE_BOMB), LEVEL_UP_END };

static const u16 sTropiusLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LEER),       LEVEL_UP_MOVE(1, MOVE_GUST),
                                               LEVEL_UP_MOVE(7, MOVE_GROWTH),     LEVEL_UP_MOVE(11, MOVE_RAZOR_LEAF),
                                               LEVEL_UP_MOVE(17, MOVE_STOMP),     LEVEL_UP_MOVE(21, MOVE_SWEET_SCENT),
                                               LEVEL_UP_MOVE(27, MOVE_WHIRLWIND), LEVEL_UP_MOVE(31, MOVE_MAGICAL_LEAF),
                                               LEVEL_UP_MOVE(37, MOVE_BODY_SLAM), LEVEL_UP_MOVE(41, MOVE_SOLAR_BEAM),
                                               LEVEL_UP_MOVE(47, MOVE_SYNTHESIS), LEVEL_UP_END };

static const u16 sWhismurLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),        LEVEL_UP_MOVE(5, MOVE_UPROAR),
                                               LEVEL_UP_MOVE(11, MOVE_ASTONISH),    LEVEL_UP_MOVE(15, MOVE_HOWL),
                                               LEVEL_UP_MOVE(21, MOVE_SUPERSONIC),  LEVEL_UP_MOVE(25, MOVE_STOMP),
                                               LEVEL_UP_MOVE(31, MOVE_SCREECH),     LEVEL_UP_MOVE(35, MOVE_ROAR),
                                               LEVEL_UP_MOVE(41, MOVE_REST),        LEVEL_UP_MOVE(41, MOVE_SLEEP_TALK),
                                               LEVEL_UP_MOVE(45, MOVE_HYPER_VOICE), LEVEL_UP_END };

static const u16 sLoudredLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_POUND),       LEVEL_UP_MOVE(1, MOVE_UPROAR),       LEVEL_UP_MOVE(1, MOVE_ASTONISH),
    LEVEL_UP_MOVE(1, MOVE_HOWL),        LEVEL_UP_MOVE(5, MOVE_UPROAR),       LEVEL_UP_MOVE(11, MOVE_ASTONISH),
    LEVEL_UP_MOVE(15, MOVE_HOWL),       LEVEL_UP_MOVE(23, MOVE_SUPERSONIC),  LEVEL_UP_MOVE(29, MOVE_STOMP),
    LEVEL_UP_MOVE(37, MOVE_SCREECH),    LEVEL_UP_MOVE(43, MOVE_ROAR),        LEVEL_UP_MOVE(51, MOVE_REST),
    LEVEL_UP_MOVE(51, MOVE_SLEEP_TALK), LEVEL_UP_MOVE(57, MOVE_HYPER_VOICE), LEVEL_UP_END
};

static const u16 sExploudLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_POUND),        LEVEL_UP_MOVE(1, MOVE_UPROAR),
                                               LEVEL_UP_MOVE(1, MOVE_ASTONISH),     LEVEL_UP_MOVE(1, MOVE_HOWL),
                                               LEVEL_UP_MOVE(5, MOVE_UPROAR),       LEVEL_UP_MOVE(11, MOVE_ASTONISH),
                                               LEVEL_UP_MOVE(15, MOVE_HOWL),        LEVEL_UP_MOVE(23, MOVE_SUPERSONIC),
                                               LEVEL_UP_MOVE(29, MOVE_STOMP),       LEVEL_UP_MOVE(37, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(40, MOVE_HYPER_BEAM),  LEVEL_UP_MOVE(45, MOVE_ROAR),
                                               LEVEL_UP_MOVE(55, MOVE_REST),        LEVEL_UP_MOVE(55, MOVE_SLEEP_TALK),
                                               LEVEL_UP_MOVE(63, MOVE_HYPER_VOICE), LEVEL_UP_END };

static const u16 sClamperlLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_CLAMP), LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
                                                LEVEL_UP_MOVE(1, MOVE_WHIRLPOOL), LEVEL_UP_MOVE(1, MOVE_IRON_DEFENSE),
                                                LEVEL_UP_END };

static const u16 sHuntailLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WHIRLPOOL),    LEVEL_UP_MOVE(8, MOVE_BITE),        LEVEL_UP_MOVE(15, MOVE_SCREECH),
    LEVEL_UP_MOVE(22, MOVE_WATER_PULSE), LEVEL_UP_MOVE(29, MOVE_SCARY_FACE), LEVEL_UP_MOVE(36, MOVE_CRUNCH),
    LEVEL_UP_MOVE(43, MOVE_BATON_PASS),  LEVEL_UP_MOVE(50, MOVE_HYDRO_PUMP), LEVEL_UP_END
};

static const u16 sGorebyssLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WHIRLPOOL),    LEVEL_UP_MOVE(8, MOVE_CONFUSION),   LEVEL_UP_MOVE(15, MOVE_AGILITY),
    LEVEL_UP_MOVE(22, MOVE_WATER_PULSE), LEVEL_UP_MOVE(29, MOVE_AMNESIA),    LEVEL_UP_MOVE(36, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(43, MOVE_BATON_PASS),  LEVEL_UP_MOVE(50, MOVE_HYDRO_PUMP), LEVEL_UP_END
};

static const u16 sAbsolLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),       LEVEL_UP_MOVE(5, MOVE_LEER),
                                             LEVEL_UP_MOVE(9, MOVE_TAUNT),         LEVEL_UP_MOVE(13, MOVE_QUICK_ATTACK),
                                             LEVEL_UP_MOVE(17, MOVE_RAZOR_WIND),   LEVEL_UP_MOVE(21, MOVE_BITE),
                                             LEVEL_UP_MOVE(26, MOVE_SWORDS_DANCE), LEVEL_UP_MOVE(31, MOVE_DOUBLE_TEAM),
                                             LEVEL_UP_MOVE(36, MOVE_SLASH),        LEVEL_UP_MOVE(41, MOVE_FUTURE_SIGHT),
                                             LEVEL_UP_MOVE(46, MOVE_PERISH_SONG),  LEVEL_UP_END };

static const u16 sShuppetLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_KNOCK_OFF),
                                               LEVEL_UP_MOVE(8, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(13, MOVE_NIGHT_SHADE),
                                               LEVEL_UP_MOVE(20, MOVE_CURSE),
                                               LEVEL_UP_MOVE(25, MOVE_SPITE),
                                               LEVEL_UP_MOVE(32, MOVE_WILL_O_WISP),
                                               LEVEL_UP_MOVE(37, MOVE_FAINT_ATTACK),
                                               LEVEL_UP_MOVE(44, MOVE_SHADOW_BALL),
                                               LEVEL_UP_MOVE(49, MOVE_SNATCH),
                                               LEVEL_UP_MOVE(56, MOVE_GRUDGE),
                                               LEVEL_UP_END };

static const u16 sBanetteLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_KNOCK_OFF),    LEVEL_UP_MOVE(1, MOVE_SCREECH),
    LEVEL_UP_MOVE(1, MOVE_NIGHT_SHADE),  LEVEL_UP_MOVE(1, MOVE_CURSE),
    LEVEL_UP_MOVE(8, MOVE_SCREECH),      LEVEL_UP_MOVE(13, MOVE_NIGHT_SHADE),
    LEVEL_UP_MOVE(20, MOVE_CURSE),       LEVEL_UP_MOVE(25, MOVE_SPITE),
    LEVEL_UP_MOVE(32, MOVE_WILL_O_WISP), LEVEL_UP_MOVE(39, MOVE_FAINT_ATTACK),
    LEVEL_UP_MOVE(48, MOVE_SHADOW_BALL), LEVEL_UP_MOVE(55, MOVE_SNATCH),
    LEVEL_UP_MOVE(64, MOVE_GRUDGE),      LEVEL_UP_END
};

static const u16 sSeviperLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WRAP),
                                               LEVEL_UP_MOVE(7, MOVE_LICK),
                                               LEVEL_UP_MOVE(10, MOVE_BITE),
                                               LEVEL_UP_MOVE(16, MOVE_POISON_TAIL),
                                               LEVEL_UP_MOVE(19, MOVE_SCREECH),
                                               LEVEL_UP_MOVE(25, MOVE_GLARE),
                                               LEVEL_UP_MOVE(28, MOVE_CRUNCH),
                                               LEVEL_UP_MOVE(34, MOVE_POISON_FANG),
                                               LEVEL_UP_MOVE(37, MOVE_SWAGGER),
                                               LEVEL_UP_MOVE(43, MOVE_HAZE),
                                               LEVEL_UP_END };

static const u16 sZangooseLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),       LEVEL_UP_MOVE(4, MOVE_LEER),         LEVEL_UP_MOVE(7, MOVE_QUICK_ATTACK),
    LEVEL_UP_MOVE(10, MOVE_SWORDS_DANCE), LEVEL_UP_MOVE(13, MOVE_FURY_CUTTER), LEVEL_UP_MOVE(19, MOVE_SLASH),
    LEVEL_UP_MOVE(25, MOVE_PURSUIT),      LEVEL_UP_MOVE(31, MOVE_CRUSH_CLAW),  LEVEL_UP_MOVE(37, MOVE_TAUNT),
    LEVEL_UP_MOVE(46, MOVE_DETECT),       LEVEL_UP_MOVE(55, MOVE_FALSE_SWIPE), LEVEL_UP_END
};

static const u16 sRelicanthLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(1, MOVE_HARDEN),         LEVEL_UP_MOVE(8, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(15, MOVE_ROCK_TOMB),   LEVEL_UP_MOVE(22, MOVE_YAWN),          LEVEL_UP_MOVE(29, MOVE_TAKE_DOWN),
    LEVEL_UP_MOVE(36, MOVE_MUD_SPORT),   LEVEL_UP_MOVE(43, MOVE_ANCIENT_POWER), LEVEL_UP_MOVE(50, MOVE_REST),
    LEVEL_UP_MOVE(57, MOVE_DOUBLE_EDGE), LEVEL_UP_MOVE(64, MOVE_HYDRO_PUMP),    LEVEL_UP_END
};

static const u16 sAronLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                            LEVEL_UP_MOVE(4, MOVE_HARDEN),
                                            LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),
                                            LEVEL_UP_MOVE(10, MOVE_HEADBUTT),
                                            LEVEL_UP_MOVE(13, MOVE_METAL_CLAW),
                                            LEVEL_UP_MOVE(17, MOVE_IRON_DEFENSE),
                                            LEVEL_UP_MOVE(21, MOVE_ROAR),
                                            LEVEL_UP_MOVE(25, MOVE_TAKE_DOWN),
                                            LEVEL_UP_MOVE(29, MOVE_IRON_TAIL),
                                            LEVEL_UP_MOVE(34, MOVE_PROTECT),
                                            LEVEL_UP_MOVE(39, MOVE_METAL_SOUND),
                                            LEVEL_UP_MOVE(44, MOVE_DOUBLE_EDGE),
                                            LEVEL_UP_END };

static const u16 sLaironLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                              LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),      LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
                                              LEVEL_UP_MOVE(4, MOVE_HARDEN),        LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),
                                              LEVEL_UP_MOVE(10, MOVE_HEADBUTT),     LEVEL_UP_MOVE(13, MOVE_METAL_CLAW),
                                              LEVEL_UP_MOVE(17, MOVE_IRON_DEFENSE), LEVEL_UP_MOVE(21, MOVE_ROAR),
                                              LEVEL_UP_MOVE(25, MOVE_TAKE_DOWN),    LEVEL_UP_MOVE(29, MOVE_IRON_TAIL),
                                              LEVEL_UP_MOVE(37, MOVE_PROTECT),      LEVEL_UP_MOVE(45, MOVE_METAL_SOUND),
                                              LEVEL_UP_MOVE(53, MOVE_DOUBLE_EDGE),  LEVEL_UP_END };

static const u16 sAggronLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),        LEVEL_UP_MOVE(1, MOVE_HARDEN),
                                              LEVEL_UP_MOVE(1, MOVE_MUD_SLAP),      LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
                                              LEVEL_UP_MOVE(4, MOVE_HARDEN),        LEVEL_UP_MOVE(7, MOVE_MUD_SLAP),
                                              LEVEL_UP_MOVE(10, MOVE_HEADBUTT),     LEVEL_UP_MOVE(13, MOVE_METAL_CLAW),
                                              LEVEL_UP_MOVE(17, MOVE_IRON_DEFENSE), LEVEL_UP_MOVE(21, MOVE_ROAR),
                                              LEVEL_UP_MOVE(25, MOVE_TAKE_DOWN),    LEVEL_UP_MOVE(29, MOVE_IRON_TAIL),
                                              LEVEL_UP_MOVE(37, MOVE_PROTECT),      LEVEL_UP_MOVE(50, MOVE_METAL_SOUND),
                                              LEVEL_UP_MOVE(63, MOVE_DOUBLE_EDGE),  LEVEL_UP_END };

static const u16 sCastformLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TACKLE),       LEVEL_UP_MOVE(10, MOVE_WATER_GUN),    LEVEL_UP_MOVE(10, MOVE_EMBER),
    LEVEL_UP_MOVE(10, MOVE_POWDER_SNOW), LEVEL_UP_MOVE(20, MOVE_RAIN_DANCE),   LEVEL_UP_MOVE(20, MOVE_SUNNY_DAY),
    LEVEL_UP_MOVE(20, MOVE_HAIL),        LEVEL_UP_MOVE(30, MOVE_WEATHER_BALL), LEVEL_UP_END
};

static const u16 sVolbeatLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                               LEVEL_UP_MOVE(5, MOVE_CONFUSE_RAY),
                                               LEVEL_UP_MOVE(9, MOVE_DOUBLE_TEAM),
                                               LEVEL_UP_MOVE(13, MOVE_MOONLIGHT),
                                               LEVEL_UP_MOVE(17, MOVE_QUICK_ATTACK),
                                               LEVEL_UP_MOVE(21, MOVE_TAIL_GLOW),
                                               LEVEL_UP_MOVE(25, MOVE_SIGNAL_BEAM),
                                               LEVEL_UP_MOVE(29, MOVE_PROTECT),
                                               LEVEL_UP_MOVE(33, MOVE_HELPING_HAND),
                                               LEVEL_UP_MOVE(37, MOVE_DOUBLE_EDGE),
                                               LEVEL_UP_END };

static const u16 sIllumiseLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TACKLE),
                                                LEVEL_UP_MOVE(5, MOVE_SWEET_SCENT),
                                                LEVEL_UP_MOVE(9, MOVE_CHARM),
                                                LEVEL_UP_MOVE(13, MOVE_MOONLIGHT),
                                                LEVEL_UP_MOVE(17, MOVE_QUICK_ATTACK),
                                                LEVEL_UP_MOVE(21, MOVE_WISH),
                                                LEVEL_UP_MOVE(25, MOVE_ENCORE),
                                                LEVEL_UP_MOVE(29, MOVE_FLATTER),
                                                LEVEL_UP_MOVE(33, MOVE_HELPING_HAND),
                                                LEVEL_UP_MOVE(37, MOVE_COVET),
                                                LEVEL_UP_END };

static const u16 sLileepLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ASTONISH),
                                              LEVEL_UP_MOVE(8, MOVE_CONSTRICT),
                                              LEVEL_UP_MOVE(15, MOVE_ACID),
                                              LEVEL_UP_MOVE(22, MOVE_INGRAIN),
                                              LEVEL_UP_MOVE(29, MOVE_CONFUSE_RAY),
                                              LEVEL_UP_MOVE(36, MOVE_AMNESIA),
                                              LEVEL_UP_MOVE(43, MOVE_ANCIENT_POWER),
                                              LEVEL_UP_MOVE(50, MOVE_STOCKPILE),
                                              LEVEL_UP_MOVE(50, MOVE_SPIT_UP),
                                              LEVEL_UP_MOVE(50, MOVE_SWALLOW),
                                              LEVEL_UP_END };

static const u16 sCradilyLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_ASTONISH),   LEVEL_UP_MOVE(1, MOVE_CONSTRICT),
                                               LEVEL_UP_MOVE(1, MOVE_ACID),       LEVEL_UP_MOVE(1, MOVE_INGRAIN),
                                               LEVEL_UP_MOVE(8, MOVE_CONSTRICT),  LEVEL_UP_MOVE(15, MOVE_ACID),
                                               LEVEL_UP_MOVE(22, MOVE_INGRAIN),   LEVEL_UP_MOVE(29, MOVE_CONFUSE_RAY),
                                               LEVEL_UP_MOVE(36, MOVE_AMNESIA),   LEVEL_UP_MOVE(48, MOVE_ANCIENT_POWER),
                                               LEVEL_UP_MOVE(60, MOVE_STOCKPILE), LEVEL_UP_MOVE(60, MOVE_SPIT_UP),
                                               LEVEL_UP_MOVE(60, MOVE_SWALLOW),   LEVEL_UP_END };

static const u16 sAnorithLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_SCRATCH),
                                               LEVEL_UP_MOVE(7, MOVE_HARDEN),
                                               LEVEL_UP_MOVE(13, MOVE_MUD_SPORT),
                                               LEVEL_UP_MOVE(19, MOVE_WATER_GUN),
                                               LEVEL_UP_MOVE(25, MOVE_METAL_CLAW),
                                               LEVEL_UP_MOVE(31, MOVE_PROTECT),
                                               LEVEL_UP_MOVE(37, MOVE_ANCIENT_POWER),
                                               LEVEL_UP_MOVE(43, MOVE_FURY_CUTTER),
                                               LEVEL_UP_MOVE(49, MOVE_SLASH),
                                               LEVEL_UP_MOVE(55, MOVE_ROCK_BLAST),
                                               LEVEL_UP_END };

static const u16 sArmaldoLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_SCRATCH),      LEVEL_UP_MOVE(1, MOVE_HARDEN),
    LEVEL_UP_MOVE(1, MOVE_MUD_SPORT),    LEVEL_UP_MOVE(1, MOVE_WATER_GUN),
    LEVEL_UP_MOVE(7, MOVE_HARDEN),       LEVEL_UP_MOVE(13, MOVE_MUD_SPORT),
    LEVEL_UP_MOVE(19, MOVE_WATER_GUN),   LEVEL_UP_MOVE(25, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(31, MOVE_PROTECT),     LEVEL_UP_MOVE(37, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(46, MOVE_FURY_CUTTER), LEVEL_UP_MOVE(55, MOVE_SLASH),
    LEVEL_UP_MOVE(64, MOVE_ROCK_BLAST),  LEVEL_UP_END
};

static const u16 sRaltsLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),
                                             LEVEL_UP_MOVE(6, MOVE_CONFUSION),
                                             LEVEL_UP_MOVE(11, MOVE_DOUBLE_TEAM),
                                             LEVEL_UP_MOVE(16, MOVE_TELEPORT),
                                             LEVEL_UP_MOVE(21, MOVE_CALM_MIND),
                                             LEVEL_UP_MOVE(26, MOVE_PSYCHIC),
                                             LEVEL_UP_MOVE(31, MOVE_IMPRISON),
                                             LEVEL_UP_MOVE(36, MOVE_FUTURE_SIGHT),
                                             LEVEL_UP_MOVE(41, MOVE_HYPNOSIS),
                                             LEVEL_UP_MOVE(46, MOVE_DREAM_EATER),
                                             LEVEL_UP_END };

static const u16 sKirliaLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(1, MOVE_CONFUSION),
                                              LEVEL_UP_MOVE(1, MOVE_DOUBLE_TEAM),   LEVEL_UP_MOVE(1, MOVE_TELEPORT),
                                              LEVEL_UP_MOVE(6, MOVE_CONFUSION),     LEVEL_UP_MOVE(11, MOVE_DOUBLE_TEAM),
                                              LEVEL_UP_MOVE(16, MOVE_TELEPORT),     LEVEL_UP_MOVE(21, MOVE_CALM_MIND),
                                              LEVEL_UP_MOVE(26, MOVE_PSYCHIC),      LEVEL_UP_MOVE(33, MOVE_IMPRISON),
                                              LEVEL_UP_MOVE(40, MOVE_FUTURE_SIGHT), LEVEL_UP_MOVE(47, MOVE_HYPNOSIS),
                                              LEVEL_UP_MOVE(54, MOVE_DREAM_EATER),  LEVEL_UP_END };

static const u16 sGardevoirLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_GROWL),         LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_DOUBLE_TEAM),   LEVEL_UP_MOVE(1, MOVE_TELEPORT),
    LEVEL_UP_MOVE(6, MOVE_CONFUSION),     LEVEL_UP_MOVE(11, MOVE_DOUBLE_TEAM),
    LEVEL_UP_MOVE(16, MOVE_TELEPORT),     LEVEL_UP_MOVE(21, MOVE_CALM_MIND),
    LEVEL_UP_MOVE(26, MOVE_PSYCHIC),      LEVEL_UP_MOVE(33, MOVE_IMPRISON),
    LEVEL_UP_MOVE(42, MOVE_FUTURE_SIGHT), LEVEL_UP_MOVE(51, MOVE_HYPNOSIS),
    LEVEL_UP_MOVE(60, MOVE_DREAM_EATER),  LEVEL_UP_END
};

static const u16 sBagonLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_RAGE),           LEVEL_UP_MOVE(5, MOVE_BITE),
                                             LEVEL_UP_MOVE(9, MOVE_LEER),           LEVEL_UP_MOVE(17, MOVE_HEADBUTT),
                                             LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY),  LEVEL_UP_MOVE(25, MOVE_EMBER),
                                             LEVEL_UP_MOVE(33, MOVE_DRAGON_BREATH), LEVEL_UP_MOVE(37, MOVE_SCARY_FACE),
                                             LEVEL_UP_MOVE(41, MOVE_CRUNCH),        LEVEL_UP_MOVE(49, MOVE_DRAGON_CLAW),
                                             LEVEL_UP_MOVE(53, MOVE_DOUBLE_EDGE),   LEVEL_UP_END };

static const u16 sShelgonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_RAGE),           LEVEL_UP_MOVE(1, MOVE_BITE),
    LEVEL_UP_MOVE(1, MOVE_LEER),           LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
    LEVEL_UP_MOVE(5, MOVE_BITE),           LEVEL_UP_MOVE(9, MOVE_LEER),
    LEVEL_UP_MOVE(17, MOVE_HEADBUTT),      LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY),
    LEVEL_UP_MOVE(25, MOVE_EMBER),         LEVEL_UP_MOVE(30, MOVE_PROTECT),
    LEVEL_UP_MOVE(38, MOVE_DRAGON_BREATH), LEVEL_UP_MOVE(47, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(56, MOVE_CRUNCH),        LEVEL_UP_MOVE(69, MOVE_DRAGON_CLAW),
    LEVEL_UP_MOVE(78, MOVE_DOUBLE_EDGE),   LEVEL_UP_END
};

static const u16 sSalamenceLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_RAGE),
                                                 LEVEL_UP_MOVE(1, MOVE_BITE),
                                                 LEVEL_UP_MOVE(1, MOVE_LEER),
                                                 LEVEL_UP_MOVE(1, MOVE_HEADBUTT),
                                                 LEVEL_UP_MOVE(5, MOVE_BITE),
                                                 LEVEL_UP_MOVE(9, MOVE_LEER),
                                                 LEVEL_UP_MOVE(17, MOVE_HEADBUTT),
                                                 LEVEL_UP_MOVE(21, MOVE_FOCUS_ENERGY),
                                                 LEVEL_UP_MOVE(25, MOVE_EMBER),
                                                 LEVEL_UP_MOVE(30, MOVE_PROTECT),
                                                 LEVEL_UP_MOVE(38, MOVE_DRAGON_BREATH),
                                                 LEVEL_UP_MOVE(47, MOVE_SCARY_FACE),
                                                 LEVEL_UP_MOVE(50, MOVE_FLY),
                                                 LEVEL_UP_MOVE(61, MOVE_CRUNCH),
                                                 LEVEL_UP_MOVE(79, MOVE_DRAGON_CLAW),
                                                 LEVEL_UP_MOVE(93, MOVE_DOUBLE_EDGE),
                                                 LEVEL_UP_END };

static const u16 sBeldumLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TAKE_DOWN), LEVEL_UP_END };

static const u16 sMetangLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_TAKE_DOWN),
                                              LEVEL_UP_MOVE(20, MOVE_CONFUSION),
                                              LEVEL_UP_MOVE(20, MOVE_METAL_CLAW),
                                              LEVEL_UP_MOVE(26, MOVE_SCARY_FACE),
                                              LEVEL_UP_MOVE(32, MOVE_PURSUIT),
                                              LEVEL_UP_MOVE(38, MOVE_PSYCHIC),
                                              LEVEL_UP_MOVE(44, MOVE_IRON_DEFENSE),
                                              LEVEL_UP_MOVE(50, MOVE_METEOR_MASH),
                                              LEVEL_UP_MOVE(56, MOVE_AGILITY),
                                              LEVEL_UP_MOVE(62, MOVE_HYPER_BEAM),
                                              LEVEL_UP_END };

static const u16 sMetagrossLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TAKE_DOWN),    LEVEL_UP_MOVE(1, MOVE_CONFUSION),
    LEVEL_UP_MOVE(1, MOVE_METAL_CLAW),   LEVEL_UP_MOVE(1, MOVE_SCARY_FACE),
    LEVEL_UP_MOVE(20, MOVE_CONFUSION),   LEVEL_UP_MOVE(20, MOVE_METAL_CLAW),
    LEVEL_UP_MOVE(26, MOVE_SCARY_FACE),  LEVEL_UP_MOVE(32, MOVE_PURSUIT),
    LEVEL_UP_MOVE(38, MOVE_PSYCHIC),     LEVEL_UP_MOVE(44, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(55, MOVE_METEOR_MASH), LEVEL_UP_MOVE(66, MOVE_AGILITY),
    LEVEL_UP_MOVE(77, MOVE_HYPER_BEAM),  LEVEL_UP_END
};

static const u16 sRegirockLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_EXPLOSION),      LEVEL_UP_MOVE(9, MOVE_ROCK_THROW),
    LEVEL_UP_MOVE(17, MOVE_CURSE),         LEVEL_UP_MOVE(25, MOVE_SUPERPOWER),
    LEVEL_UP_MOVE(33, MOVE_ANCIENT_POWER), LEVEL_UP_MOVE(41, MOVE_IRON_DEFENSE),
    LEVEL_UP_MOVE(49, MOVE_ZAP_CANNON),    LEVEL_UP_MOVE(57, MOVE_LOCK_ON),
    LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),    LEVEL_UP_END
};

static const u16 sRegiceLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_EXPLOSION),      LEVEL_UP_MOVE(9, MOVE_ICY_WIND),
                                              LEVEL_UP_MOVE(17, MOVE_CURSE),         LEVEL_UP_MOVE(25, MOVE_SUPERPOWER),
                                              LEVEL_UP_MOVE(33, MOVE_ANCIENT_POWER), LEVEL_UP_MOVE(41, MOVE_AMNESIA),
                                              LEVEL_UP_MOVE(49, MOVE_ZAP_CANNON),    LEVEL_UP_MOVE(57, MOVE_LOCK_ON),
                                              LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),    LEVEL_UP_END };

static const u16 sRegisteelLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_EXPLOSION),
                                                 LEVEL_UP_MOVE(9, MOVE_METAL_CLAW),
                                                 LEVEL_UP_MOVE(17, MOVE_CURSE),
                                                 LEVEL_UP_MOVE(25, MOVE_SUPERPOWER),
                                                 LEVEL_UP_MOVE(33, MOVE_ANCIENT_POWER),
                                                 LEVEL_UP_MOVE(41, MOVE_IRON_DEFENSE),
                                                 LEVEL_UP_MOVE(41, MOVE_AMNESIA),
                                                 LEVEL_UP_MOVE(49, MOVE_ZAP_CANNON),
                                                 LEVEL_UP_MOVE(57, MOVE_LOCK_ON),
                                                 LEVEL_UP_MOVE(65, MOVE_HYPER_BEAM),
                                                 LEVEL_UP_END };

static const u16 sKyogreLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_WATER_PULSE),  LEVEL_UP_MOVE(5, MOVE_SCARY_FACE),   LEVEL_UP_MOVE(15, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(20, MOVE_BODY_SLAM),   LEVEL_UP_MOVE(30, MOVE_CALM_MIND),   LEVEL_UP_MOVE(35, MOVE_ICE_BEAM),
    LEVEL_UP_MOVE(45, MOVE_HYDRO_PUMP),  LEVEL_UP_MOVE(50, MOVE_REST),        LEVEL_UP_MOVE(60, MOVE_SHEER_COLD),
    LEVEL_UP_MOVE(65, MOVE_DOUBLE_EDGE), LEVEL_UP_MOVE(75, MOVE_WATER_SPOUT), LEVEL_UP_END
};

static const u16 sGroudonLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_MUD_SHOT),    LEVEL_UP_MOVE(5, MOVE_SCARY_FACE), LEVEL_UP_MOVE(15, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(20, MOVE_SLASH),      LEVEL_UP_MOVE(30, MOVE_BULK_UP),   LEVEL_UP_MOVE(35, MOVE_EARTHQUAKE),
    LEVEL_UP_MOVE(45, MOVE_FIRE_BLAST), LEVEL_UP_MOVE(50, MOVE_REST),      LEVEL_UP_MOVE(60, MOVE_FISSURE),
    LEVEL_UP_MOVE(65, MOVE_SOLAR_BEAM), LEVEL_UP_MOVE(75, MOVE_ERUPTION),  LEVEL_UP_END
};

static const u16 sRayquazaLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_TWISTER),      LEVEL_UP_MOVE(5, MOVE_SCARY_FACE),    LEVEL_UP_MOVE(15, MOVE_ANCIENT_POWER),
    LEVEL_UP_MOVE(20, MOVE_DRAGON_CLAW), LEVEL_UP_MOVE(30, MOVE_DRAGON_DANCE), LEVEL_UP_MOVE(35, MOVE_CRUNCH),
    LEVEL_UP_MOVE(45, MOVE_FLY),         LEVEL_UP_MOVE(50, MOVE_REST),         LEVEL_UP_MOVE(60, MOVE_EXTREME_SPEED),
    LEVEL_UP_MOVE(65, MOVE_OUTRAGE),     LEVEL_UP_MOVE(75, MOVE_HYPER_BEAM),   LEVEL_UP_END
};

static const u16 sLatiasLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PSYWAVE),    LEVEL_UP_MOVE(5, MOVE_WISH),           LEVEL_UP_MOVE(10, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(15, MOVE_SAFEGUARD), LEVEL_UP_MOVE(20, MOVE_DRAGON_BREATH), LEVEL_UP_MOVE(25, MOVE_WATER_SPORT),
    LEVEL_UP_MOVE(30, MOVE_REFRESH),   LEVEL_UP_MOVE(35, MOVE_MIST_BALL),     LEVEL_UP_MOVE(40, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(45, MOVE_RECOVER),   LEVEL_UP_MOVE(50, MOVE_CHARM),         LEVEL_UP_END
};

static const u16 sLatiosLevelUpLearnset[] = {
    LEVEL_UP_MOVE(1, MOVE_PSYWAVE),    LEVEL_UP_MOVE(5, MOVE_MEMENTO),        LEVEL_UP_MOVE(10, MOVE_HELPING_HAND),
    LEVEL_UP_MOVE(15, MOVE_SAFEGUARD), LEVEL_UP_MOVE(20, MOVE_DRAGON_BREATH), LEVEL_UP_MOVE(25, MOVE_PROTECT),
    LEVEL_UP_MOVE(30, MOVE_REFRESH),   LEVEL_UP_MOVE(35, MOVE_LUSTER_PURGE),  LEVEL_UP_MOVE(40, MOVE_PSYCHIC),
    LEVEL_UP_MOVE(45, MOVE_RECOVER),   LEVEL_UP_MOVE(50, MOVE_DRAGON_DANCE),  LEVEL_UP_END
};

static const u16 sJirachiLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WISH),
                                               LEVEL_UP_MOVE(1, MOVE_CONFUSION),
                                               LEVEL_UP_MOVE(5, MOVE_REST),
                                               LEVEL_UP_MOVE(10, MOVE_SWIFT),
                                               LEVEL_UP_MOVE(15, MOVE_HELPING_HAND),
                                               LEVEL_UP_MOVE(20, MOVE_PSYCHIC),
                                               LEVEL_UP_MOVE(25, MOVE_REFRESH),
                                               LEVEL_UP_MOVE(30, MOVE_REST),
                                               LEVEL_UP_MOVE(35, MOVE_DOUBLE_EDGE),
                                               LEVEL_UP_MOVE(40, MOVE_FUTURE_SIGHT),
                                               LEVEL_UP_MOVE(45, MOVE_COSMIC_POWER),
                                               LEVEL_UP_MOVE(50, MOVE_DOOM_DESIRE),
                                               LEVEL_UP_END };

static const u16 sDeoxysLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_LEER),
                                              LEVEL_UP_MOVE(1, MOVE_WRAP),
                                              LEVEL_UP_MOVE(5, MOVE_NIGHT_SHADE),
                                              LEVEL_UP_MOVE(10, MOVE_DOUBLE_TEAM),
                                              LEVEL_UP_MOVE(15, MOVE_KNOCK_OFF),
                                              LEVEL_UP_MOVE(20, MOVE_PURSUIT),
                                              LEVEL_UP_MOVE(25, MOVE_PSYCHIC),
                                              LEVEL_UP_MOVE(30, MOVE_SWIFT),
                                              LEVEL_UP_MOVE(35, MOVE_AGILITY),
                                              LEVEL_UP_MOVE(40, MOVE_RECOVER),
                                              LEVEL_UP_MOVE(45, MOVE_PSYCHO_BOOST),
                                              LEVEL_UP_MOVE(50, MOVE_EXTREME_SPEED),
                                              LEVEL_UP_END };

static const u16 sChimechoLevelUpLearnset[] = { LEVEL_UP_MOVE(1, MOVE_WRAP),
                                                LEVEL_UP_MOVE(6, MOVE_GROWL),
                                                LEVEL_UP_MOVE(9, MOVE_ASTONISH),
                                                LEVEL_UP_MOVE(14, MOVE_CONFUSION),
                                                LEVEL_UP_MOVE(17, MOVE_TAKE_DOWN),
                                                LEVEL_UP_MOVE(22, MOVE_UPROAR),
                                                LEVEL_UP_MOVE(25, MOVE_YAWN),
                                                LEVEL_UP_MOVE(30, MOVE_PSYWAVE),
                                                LEVEL_UP_MOVE(33, MOVE_DOUBLE_EDGE),
                                                LEVEL_UP_MOVE(38, MOVE_HEAL_BELL),
                                                LEVEL_UP_MOVE(41, MOVE_SAFEGUARD),
                                                LEVEL_UP_MOVE(46, MOVE_PSYCHIC),
                                                LEVEL_UP_END };
