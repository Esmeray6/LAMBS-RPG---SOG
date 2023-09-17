class CfgPatches {
  class LAMBS_RPG_SOG {
    units[] = {};
    weapons[] = {};
    requiredVersion = 1.82;
    requiredAddons[] = {"weapons_f_vietnam_c"};
    version = "1.52";
    versionStr = "1.52";
    author = "Esmeray";
  };
};

class Mode_SemiAuto;
class CfgWeapons {
  // class vn_Launcher_Base_F;
  // class vn_m72 : vn_Launcher_Base_F {
  //   class Single : Mode_SemiAuto {
  //     dispersion = 0.018;
  //     aiDispersionCoefX = 1.8;
  //     aiDispersionCoefY = 2.4;
  //     aiRateOfFire = 5;
  //     aiRateOfFireDispersion = 5;
  //     aiRateOfFireDistance = 450;
  //     maxRange = 450;
  //     maxRangeProbab = 1.8;
  //     midRange = 200;
  //     midRangeProbab = 2.5;
  //     minRange = 5;
  //     minRangeProbab = 0.5;
  //   };
  // };
};

class CfgAmmo {
  class vn_rocket_ammo_base;
  class vn_m72_rocket_ammo {
    allowAgainstInfantry = 1;
    cost = 70;
  };

  // Inherits from vn_rpg2_rocket_ammo. Kinda pointless to have both, but I'll
  // keep this here.

  // class vn_rpg2_fuze_rocket_ammo {
  //   allowAgainstInfantry = 1;
  //   cost = 70;
  // };

  // B41 only has one type of ammo.
  class vn_rpg7_rocket_ammo : vn_rocket_ammo_base {
    airLock = 1;
    allowAgainstInfantry = 1;
    cost = 70;
  };
  class vn_rpg2_rocket_ammo : vn_rpg7_rocket_ammo {
    airLock = 1;
    allowAgainstInfantry = 1;
    cost = 70;
  };
  class vn_m20a1b1_wp_ammo {
    allowAgainstInfantry = 1;
    cost = 100;
  };
  class vn_m20a1b1_heat_ammo {
    airLock = 1;
    allowAgainstInfantry = 1;
    cost = 100;
  };
};
