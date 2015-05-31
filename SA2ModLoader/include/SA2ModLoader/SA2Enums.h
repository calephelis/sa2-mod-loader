// SA2 Enums
#define makemask(enumname,membername) enumname##_##membername = (1 << enumname##Bits_##membername)
#define makemasks(enumname,membername) enumname##s_##membername = (1 << enumname##Bits_##membername)

enum Characters
{
	Characters_Sonic,
	Characters_Shadow,
	Characters_Tails,
	Characters_Eggman,
	Characters_Knuckles,
	Characters_Rouge,
	Characters_MechTails,
	Characters_MechEggman,
	Characters_Amy,
	Characters_SuperSonic,
	Characters_SuperShadow,
	Characters_B,
	Characters_MetalSonic,
	Characters_ChaoWalker,
	Characters_DarkChaoWalker,
	Characters_Tikal,
	Characters_Chaos
};

enum LevelIDs
{
	LevelIDs_BasicTest,
	LevelIDs_KnucklesTest,
	LevelIDs_SonicTest,
	LevelIDs_GreenForest,
	LevelIDs_WhiteJungle,
	LevelIDs_PumpkinHill,
	LevelIDs_SkyRail,
	LevelIDs_AquaticMine,
	LevelIDs_SecurityHall,
	LevelIDs_PrisonLane,
	LevelIDs_MetalHarbor,
	LevelIDs_IronGate,
	LevelIDs_WeaponsBed,
	LevelIDs_CityEscape,
	LevelIDs_RadicalHighway,
	LevelIDs_WeaponsBed2P,
	LevelIDs_WildCanyon,
	LevelIDs_MissionStreet,
	LevelIDs_DryLagoon,
	LevelIDs_SonicVsShadow1,
	LevelIDs_TailsVsEggman1,
	LevelIDs_SandOcean,
	LevelIDs_CrazyGadget,
	LevelIDs_HiddenBase,
	LevelIDs_EternalEngine,
	LevelIDs_DeathChamber,
	LevelIDs_EggQuarters,
	LevelIDs_LostColony,
	LevelIDs_PyramidCave,
	LevelIDs_TailsVsEggman2,
	LevelIDs_FinalRush,
	LevelIDs_GreenHill,
	LevelIDs_MeteorHerd,
	LevelIDs_KnucklesVsRouge,
	LevelIDs_CannonsCoreS,
	LevelIDs_CannonsCoreE,
	LevelIDs_CannonsCoreT,
	LevelIDs_CannonsCoreR,
	LevelIDs_CannonsCoreK,
	LevelIDs_MissionStreet2P,
	LevelIDs_FinalChase,
	LevelIDs_WildCanyon2P,
	LevelIDs_SonicVsShadow2,
	LevelIDs_CosmicWall,
	LevelIDs_MadSpace,
	LevelIDs_SandOcean2P,
	LevelIDs_DryLagoon2P,
	LevelIDs_PyramidRace,
	LevelIDs_HiddenBase2P,
	LevelIDs_PoolQuest,
	LevelIDs_PlanetQuest,
	LevelIDs_DeckRace,
	LevelIDs_DowntownRace,
	LevelIDs_CosmicWall2P,
	LevelIDs_GrindRace,
	LevelIDs_LostColony2P,
	LevelIDs_EternalEngine2P,
	LevelIDs_MetalHarbor2P,
	LevelIDs_IronGate2P,
	LevelIDs_DeathChamber2P,
	LevelIDs_BigFoot,
	LevelIDs_HotShot,
	LevelIDs_FlyingDog,
	LevelIDs_KingBoomBoo,
	LevelIDs_EggGolemS,
	LevelIDs_Biolizard,
	LevelIDs_FinalHazard,
	LevelIDs_EggGolemE,
	LevelIDs_Route101280 = 70,
	LevelIDs_KartRace,
	LevelIDs_ChaoWorld = 90,
	LevelIDs_Invalid
};

enum UpgradeBits : int
{
	UpgradeBits_SonicLightShoes,
	UpgradeBits_SonicAncientLight,
	UpgradeBits_SonicMagicGloves,
	UpgradeBits_SonicFlameRing,
	UpgradeBits_SonicBounceBracelet,
	UpgradeBits_SonicMysticMelody,
	UpgradeBits_TailsBooster,
	UpgradeBits_TailsBazooka,
	UpgradeBits_TailsLaserBlaster,
	UpgradeBits_TailsMysticMelody,
	UpgradeBits_KnucklesShovelClaw,
	UpgradeBits_KnucklesSunglasses,
	UpgradeBits_KnucklesHammerGloves,
	UpgradeBits_KnucklesAirNecklace,
	UpgradeBits_KnucklesMysticMelody,
	UpgradeBits_SuperSonic,
	UpgradeBits_ShadowAirShoes,
	UpgradeBits_ShadowAncientLight,
	UpgradeBits_ShadowFlameRing,
	UpgradeBits_ShadowMysticMelody,
	UpgradeBits_EggmanJetEngine,
	UpgradeBits_EggmanLargeCannon,
	UpgradeBits_EggmanLaserBlaster,
	UpgradeBits_EggmanProtectiveArmor,
	UpgradeBits_EggmanMysticMelody,
	UpgradeBits_RougePickNails,
	UpgradeBits_RougeTreasureScope,
	UpgradeBits_RougeIronBoots,
	UpgradeBits_RougeMysticMelody
};

enum Upgrades : int
{
	makemasks(Upgrade, SonicLightShoes),
	makemasks(Upgrade, SonicAncientLight),
	makemasks(Upgrade, SonicMagicGloves),
	makemasks(Upgrade, SonicFlameRing),
	makemasks(Upgrade, SonicBounceBracelet),
	makemasks(Upgrade, SonicMysticMelody),
	makemasks(Upgrade, TailsBooster),
	makemasks(Upgrade, TailsBazooka),
	makemasks(Upgrade, TailsLaserBlaster),
	makemasks(Upgrade, TailsMysticMelody),
	makemasks(Upgrade, KnucklesShovelClaw),
	makemasks(Upgrade, KnucklesSunglasses),
	makemasks(Upgrade, KnucklesHammerGloves),
	makemasks(Upgrade, KnucklesAirNecklace),
	makemasks(Upgrade, KnucklesMysticMelody),
	makemasks(Upgrade, SuperSonic),
	makemasks(Upgrade, ShadowAirShoes),
	makemasks(Upgrade, ShadowAncientLight),
	makemasks(Upgrade, ShadowFlameRing),
	makemasks(Upgrade, ShadowMysticMelody),
	makemasks(Upgrade, EggmanJetEngine),
	makemasks(Upgrade, EggmanLargeCannon),
	makemasks(Upgrade, EggmanLaserBlaster),
	makemasks(Upgrade, EggmanProtectiveArmor),
	makemasks(Upgrade, EggmanMysticMelody),
	makemasks(Upgrade, RougePickNails),
	makemasks(Upgrade, RougeTreasureScope),
	makemasks(Upgrade, RougeIronBoots),
	makemasks(Upgrade, RougeMysticMelody)
};

enum PowerupBits
{
	PowerupBits_Barrier,
	PowerupBits_MagneticBarrier,
	PowerupBits_Invincibility = 15
};

enum Powerups : unsigned short
{
	makemasks(Powerup, Barrier),
	makemasks(Powerup, MagneticBarrier),
	makemasks(Powerup, Invincibility)
};

enum ButtonBits
{
	ButtonBits_B = 1,
	ButtonBits_A,
	ButtonBits_Start,
	ButtonBits_Up,
	ButtonBits_Down,
	ButtonBits_Left,
	ButtonBits_Right,
	ButtonBits_Z,
	ButtonBits_Y,
	ButtonBits_X,
	ButtonBits_R = 16,
	ButtonBits_L
};

enum Buttons : int
{
	makemasks(Button, B),
	makemasks(Button, A),
	makemasks(Button, Start),
	makemasks(Button, Up),
	makemasks(Button, Down),
	makemasks(Button, Left),
	makemasks(Button, Right),
	makemasks(Button, Z),
	makemasks(Button, Y),
	makemasks(Button, X),
	makemasks(Button, R),
	makemasks(Button, L)
};