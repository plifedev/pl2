class WeaponShops {
  
//Armureries :
  
  //Recrue 1, Brigadier 2, Maréchal des Logis 3, Adjudant 4, Major 5, Lieutenant 6, Capitaine 7, Commandant 8, Lieutenant-Colonel 9, Colonel 10, Général 11
  //Armurerie Armée
	class cop_basic {
		name = "Equipement de l'Armée";
		side = "cop";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "", "Utilitaires", 0, 0 },
			{ "ItemMap", "", 0, -1 },
			{ "ItemGPS", "", 0, -1 },
			{ "ItemRadio", "", 0, -1 },
			{ "Rangefinder", "", 0, -1 },
			{ "NVGoggles_OPFOR", "", 0, -1 },
			{ "FirstAidKit", "", 0, -1 },
			{ "ToolKit", "", 0, -1 },
			{ "B_UavTerminal", "", 0, -1, { "life_coplevel", 5 } }, //Major
			{ "SmokeShell", "Fumigène (blanche)", 0, -1 },
			{ "HandGrenade_Stone", "Flashbang", 0, -1 },
			{ "SatchelCharge_Remote_Mag", "", 0, -1, { "life_coplevel", 7 } }, //Capitaine
			{ "hgun_P07_snds_F", "Pistolet paralysant (9mm)", 0, -1 },
			{ "arifle_SDAR_F", "Arme Anti Troll", 0, -1 },
			{ "SMG_02_F", "Sting (9mm)", 0, -1 },
			{ "SMG_05_F", "Protector (9mm)", 0, -1 },
			{ "arifle_Mk20_plain_F", "Mk20 (5.56)", 0, -1 },
			{ "arifle_Mk20C_plain_F", "Mk20C (5.56)", 0, -1 },
			{ "LMG_Mk200_F", "MK200 (6.5)", 0, -1, { "life_coplevel", 3 } },
			{ "arifle_Katiba_F", "Katiba (6.5mm)", 0, -1, { "life_coplevel", 2 } },
			{ "arifle_SPAR_01_blk_F", "SPAR-16 APEX (5.56)", 0, -1 },
			{ "arifle_MX_F", "MX (6.5)", 0, -1, { "life_coplevel", 2 } },
			{ "arifle_MXC_F", "MXC (6.5)", 0, -1, { "life_coplevel", 2 } },
			{ "arifle_MXM_F", "MXM (6.5)", 0, -1, { "life_coplevel", 2 } },
			{ "arifle_CTAR_blk_F", "CAR-95 APEX (5.8)", 0, -1, { "life_coplevel", 2 } },
			{ "arifle_CTARS_blk_F", "CAR-95-1 APEX (5.8 LMG)", 0, -1, { "life_coplevel", 2 } },
			{ "srifle_DMR_07_blk_F", "CMR-76 APEX (6.5)", 0, -1, { "life_coplevel", 4 } },
			{ "arifle_SPAR_03_blk_F", "SPAR-17 APEX (7.62)", 0, -1, { "life_coplevel", 4 } },
			{ "srifle_EBR_F", "Mk18 (7.62)", 0, -1, { "life_coplevel", 4 } },
			{ "srifle_DMR_03_F", "Mk-I MARK (7.62)", 0, -1, { "life_coplevel", 4 } },
			{ "srifle_DMR_05_blk_F", "Cyrus MARK (9.3)", 0, -1, { "life_coplevel", 6 } },
			{ "srifle_DMR_02_F", "MAR-10 MARK (.338)", 0, -1, { "life_coplevel", 7 } },
			{ "srifle_LRR_F", "M320 (.408)", 0, -1, { "life_coplevel", 7 } },
			{ "srifle_GM6_F", "Lynx (12.7)", 0, -1, { "life_coplevel", 7 } },
			{ "arifle_MX_SW_Black_F", "MX SW (6.5 LMG)", 0, -1, { "life_coplevel", 2 } },
			{ "arifle_ARX_blk_F", "Type-115 APEX (6.5)", 0, -1, { "life_coplevel", 4 } },
			{ "LMG_Mk200_BI_F", "Mk200 (6.5 LMG)", 0, -1, { "life_coplevel", 4 } },
			{ "LMG_Zafir_F", "Zafir (7.62 LMG)", 0, -1, { "life_coplevel", 5 } },
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "Chargeur 9mm (16)", 0, -1 },
			{ "30Rnd_9x21_Mag_SMG_02", "Chargeur 9mm (30)", 0, -1 },
			{ "30Rnd_9x21_Mag", "Chargeur 9mm (30)", 0, -1 },
			{ "20Rnd_556x45_UW_mag", "Munition Anti Troll", 0, -1 },
			{ "30Rnd_556x45_Stanag", "Chargeur 5.56 (30)", 0, -1 },
			{ "30Rnd_580x42_Mag_F", "Chargeur 5.8 (30)", 0, -1 },
			{ "100Rnd_580x42_Mag_F", "Chargeur 5.8 LMG (100)", 0, -1 },
			{ "30Rnd_65x39_caseless_mag", "Chargeur 6.5 (30)", 0, -1 },
			{ "30Rnd_65x39_caseless_green", "Chargeur 6.5 (30)", 0, -1 },
			{ "20Rnd_650x39_Cased_Mag_F", "Chargeur 6.5 (20)", 0, -1 },
			{ "100Rnd_65x39_caseless_mag", "Chargeur 6.5 LMG (100)", 0, -1 },
			{ "200Rnd_65x39_cased_Box", "Chargeur 6.5 LMG (200)", 0, -1 },
			{ "20Rnd_762x51_Mag", "Chargeur 7.62 (20)", 0, -1 },
			{ "200Rnd_65x39_cased_Box", "Chargeur 6.5 (200)", 0, -1 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Chargeur 6.5 (200)", 0, -1 },
			{ "10Rnd_93x64_DMR_05_Mag", "Chargeur 9.3 (10)", 0, -1 },
			{ "150Rnd_762x54_Box", "", 0, -1 },
			{ "150Rnd_93x64_Mag", "Chargeur Navid 9.3", 0, -1 },
			{ "10Rnd_338_Mag", "Chargeur .338 (10)", 0, -1 },
			{ "7Rnd_408_Mag", "Chargeur .408 (7)", 0, -1 },
			{ "5Rnd_127x108_Mag", "Chargeur 12.7 (5)", 0, -1 }
		};
		accs[] = {
      { "optic_Aco", "", 0, -1 },
      { "optic_ACO_grn", "", 0, -1 },
			{ "optic_Aco_smg", "", 0, -1 },
			{ "optic_Holosight", "", 0, -1 },
			{ "optic_Arco", "", 0, -1 },
			{ "optic_Hamr", "", 0, -1 },
			{ "optic_MRCO", "", 0, -1 },
			{ "optic_DMS", "", 0, -1 },
			{ "optic_SOS", "", 0, -1 },
			{ "optic_LRPS", "", 0, -1 },
			{ "optic_ERCO_blk_F", "", 0, -1 },
			{ "optic_KHS_blk", "", 0, -1 },
			{ "optic_AMS", "", 0, -1 },
			{ "optic_Hamr", "", 0, -1 },
			{ "optic_NVS", "", 0, -1 },
			{ "acc_flashlight", "", 0 },//lampe
			{ "acc_pointer_IR", "", 0 },//pointer ir
			{ "muzzle_snds_M", "Silencieux (5.56)", 0, -1 },
			{ "muzzle_snds_58_blk_F", "Silencieux (5.8)", 0, -1, { "life_coplevel", 2 } },
			{ "muzzle_snds_H", "Silencieux (6.5)", 0, -1, { "life_coplevel", 2 } },
			{ "muzzle_snds_338_black", "", 0, -1, { "life_coplevel", 2 } },
			{ "muzzle_snds_65_TI_blk_F", "Silencieux APEX (6.5)", 0, -1, { "life_coplevel", 8 } },
			{ "muzzle_snds_H_MG", "Silencieux (6.5 LMG)", 0, -1, { "life_coplevel", 4 } },
			{ "muzzle_snds_B", "Silencieux (7.62)", 0, -1, { "life_coplevel", 5 } },
			{ "muzzle_snds_93mmg", "Silencieux (9.3)", 0, -1, { "life_coplevel", 6 } },
			{ "bipod_01_F_blk", "", 0, -1, { "life_coplevel", 2 } }
        };
	};

  //Armurerie GIGN
	class cop_gign {
		name = "Equipement du GIGN";
		side = "cop";
		license = "";
		level[] = { "life_coplevel", "SCALAR", 11, "" };
		items[] = {
			{ "ItemMap", "", 0, -1 },
			{ "ItemGPS", "", 0, -1 },
			{ "ItemRadio", "", 0, -1 },
			{ "Rangefinder", "", 0, -1 },
			{ "NVGoggles_OPFOR", "", 0, -1 },
			{ "FirstAidKit", "", 0, -1 },
			{ "ToolKit", "", 0, -1 },
			{ "B_UavTerminal", "", 0, -1 }, //Major
			{ "SmokeShell", "Fumigène (blanche)", 0, -1 },
			{ "HandGrenade_Stone", "Flashbang", 0, -1 },
			{ "SatchelCharge_Remote_Mag", "", 0, -1 }, //Capitaine
			{ "hgun_P07_snds_F", "Pistolet paralysant (9mm)", 0, -1 },
			{ "arifle_SDAR_F", "Arme Anti Troll", 0, -1 },
			{ "arifle_Mk20_plain_F", "Mk20 (5.56)", 0, -1 },
			{ "arifle_Mk20C_plain_F", "Mk20C (5.56)", 0, -1 },
			{ "arifle_SPAR_01_blk_F", "SPAR-16 APEX (5.56)", 0, -1 },
			{ "arifle_MX_F", "MX (6.5)", 0, -1 },
			{ "arifle_MXC_F", "MXC (6.5)", 0, -1 },
			{ "arifle_MXM_F", "MXM (6.5)", 0, -1 },
			{ "arifle_CTAR_blk_F", "CAR-95 APEX (5.8)", 0, -1 },
			{ "arifle_CTARS_blk_F", "CAR-95-1 APEX (5.8 LMG)", 0, -1 },
			{ "srifle_DMR_07_blk_F", "CMR-76 APEX (6.5)", 0, -1 },
			{ "arifle_SPAR_03_blk_F", "SPAR-17 APEX (7.62)", 0, -1 },
			{ "srifle_EBR_F", "Mk18 (7.62)", 0, -1 },
			{ "srifle_DMR_03_F", "Mk-I MARK (7.62)", 0, -1 },
			{ "srifle_DMR_05_blk_F", "Cyrus MARK (9.3)", 0, -1 },
			{ "srifle_DMR_02_F", "MAR-10 MARK (.338)", 0, -1 },
			{ "srifle_LRR_F", "M320 (.408)", 0, -1 },
			{ "srifle_GM6_F", "Lynx (12.7)", 0, -1 },
			{ "arifle_MX_SW_Black_F", "MX SW (6.5 LMG)", 0, -1 },
			{ "arifle_ARX_blk_F", "Type-115 APEX (6.5)", 0, -1 },
			{ "LMG_Mk200_BI_F", "Mk200 (6.5 LMG)", 0, -1 },
			{ "LMG_Zafir_F", "Zafir (7.62 LMG)", 0, -1 },
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "Chargeur 9mm (16)", 0, -1 },
			{ "20Rnd_556x45_UW_mag", "Munition Anti Troll", 0, -1 },
			{ "30Rnd_556x45_Stanag", "Chargeur 5.56 (30)", 0, -1 },
			{ "30Rnd_580x42_Mag_F", "Chargeur 5.8 (30)", 0, -1 },
			{ "100Rnd_580x42_Mag_F", "Chargeur 5.8 LMG (100)", 0, -1 },
			{ "30Rnd_65x39_caseless_mag", "Chargeur 6.5 (30)", 0, -1 },
			{ "30Rnd_65x39_caseless_green", "Chargeur 6.5 (30)", 0, -1 },
			{ "20Rnd_650x39_Cased_Mag_F", "Chargeur 6.5 (20)", 0, -1 },
			{ "100Rnd_65x39_caseless_mag", "Chargeur 6.5 LMG (100)", 0, -1 },
			{ "200Rnd_65x39_cased_Box", "Chargeur 6.5 LMG (200)", 0, -1 },
			{ "20Rnd_762x51_Mag", "Chargeur 7.62 (20)", 0, -1 },
			{ "10Rnd_93x64_DMR_05_Mag", "Chargeur 9.3 (10)", 0, -1 },
			{ "150Rnd_762x54_Box", "", 0, -1 },
			{ "150Rnd_93x64_Mag", "Chargeur Navid 9.3", 0, -1 },
			{ "10Rnd_338_Mag", "Chargeur .338 (10)", 0, -1 },
			{ "7Rnd_408_Mag", "Chargeur .408 (7)", 0, -1 },
			{ "5Rnd_127x108_Mag", "Chargeur 12.7 (5)", 0, -1 },
			{ "30Rnd_9x21_Mag", "Chargeur 12.7 (5)", 0, -1 }
		};
		accs[] = {
      { "optic_Aco", "", 0, -1 },
			{ "optic_Aco_smg", "", 0, -1 },
			{ "optic_Holosight", "", 0, -1 },
			{ "optic_Arco", "", 0, -1 },
			{ "optic_Hamr", "", 0, -1 },
			{ "optic_MRCO", "", 0, -1 },
			{ "optic_DMS", "", 0, -1 },
			{ "optic_SOS", "", 0, -1 },
			{ "optic_LRPS", "", 0, -1 },
			{ "optic_ERCO_blk_F", "", 0, -1 },
			{ "optic_KHS_blk", "", 0, -1 },
			{ "optic_AMS", "", 0, -1 },
			{ "optic_Hamr", "", 0, -1 },
			{ "optic_NVS", "", 0, -1 },
			{ "acc_flashlight", "", 0 },//lampe
			{ "acc_pointer_IR", "", 0 },//pointer ir
			{ "muzzle_snds_M", "Silencieux (5.56)", 0, -1 },
			{ "muzzle_snds_58_blk_F", "Silencieux (5.8)", 0, -1 },
			{ "muzzle_snds_H", "Silencieux (6.5)", 0, -1 },
			{ "muzzle_snds_338_black", "", 0, -1 },
			{ "muzzle_snds_65_TI_blk_F", "Silencieux APEX (6.5)", 0, -1 },
			{ "muzzle_snds_H_MG", "Silencieux (6.5 LMG)", 0, -1 },
			{ "muzzle_snds_B", "Silencieux (7.62)", 0, -1 },
			{ "muzzle_snds_93mmg", "Silencieux (9.3)", 0, -1 },
			{ "bipod_01_F_blk", "", 0, -1 }
        };
	};

  //Armurerie Armée
  class armer_weapon {
		name = "Equipement de l'Armée";
		side = "";
		license = "";
		level[] = { "life_armerlevel", "SCALAR", 1, "" };
		items[] = {
			{ "ItemMap", "", 0, -1 },
			{ "ItemGPS", "", 0, -1 },
			{ "ItemRadio", "", 0, -1 },
      { "ItemCompass", "", 0, -1 },
			{ "Rangefinder", "", 0, -1 },
			{ "NVGoggles_OPFOR", "", 0, -1 },
			{ "FirstAidKit", "", 0, -1 },
			{ "ToolKit", "", 0, -1 },
			{ "SmokeShell", "Fumigène (blanche)", 0, -1 },
			{ "HandGrenade_Stone", "Flashbang", 0, -1 },
			{ "SatchelCharge_Remote_Mag", "", 0, -1 },
      { "hgun_Rook40_F", "", 0, -1 },
			{ "hgun_P07_F", "", 0, -1 },
			{ "hgun_Pistol_heavy_02_F", "", 0, -1 },
			{ "hgun_ACPC2_F", "", 0, -1 },
			{ "hgun_PDW2000_F", "", 0, -1 },
			{ "SMG_02_F", "Sting (9mm)", 0, -1 },
			{ "SMG_05_F", "Protector (9mm)", 0, -1 },
			{ "arifle_Mk20_plain_F", "Mk20 (5.56)", 0, -1 },
			{ "arifle_Mk20C_plain_F", "Mk20C (5.56)", 0, -1 },
			{ "LMG_Mk200_F", "MK200 (6.5)", 0, -1 },
			{ "arifle_Katiba_F", "Katiba (6.5mm)", 0, -1 },
			{ "arifle_SPAR_01_blk_F", "SPAR-16 APEX (5.56)", 0, -1 },
			{ "arifle_MX_F", "MX (6.5)", 0, -1 },
			{ "arifle_MXC_F", "MXC (6.5)", 0, -1 },
			{ "arifle_MXM_F", "MXM (6.5)", 0, -1 },
			{ "arifle_CTAR_blk_F", "CAR-95 APEX (5.8)", 0, -1 },
			{ "arifle_CTARS_blk_F", "CAR-95-1 APEX (5.8 LMG)", 0, -1 },
			{ "srifle_DMR_07_blk_F", "CMR-76 APEX (6.5)", 0, -1 },
			{ "arifle_SPAR_03_blk_F", "SPAR-17 APEX (7.62)", 0, -1 },
			{ "srifle_EBR_F", "Mk18 (7.62)", 0, -1 },
			{ "srifle_DMR_03_F", "Mk-I MARK (7.62)", 0, -1 },
			{ "srifle_DMR_05_blk_F", "Cyrus MARK (9.3)", 0, -1 },
			{ "srifle_DMR_02_F", "MAR-10 MARK (.338)", 0, -1 },
			{ "srifle_LRR_F", "M320 (.408)", 0, -1 },
			{ "srifle_GM6_F", "Lynx (12.7)", 0, -1 },
			{ "arifle_MX_SW_Black_F", "MX SW (6.5 LMG)", 0, -1 },
			{ "arifle_ARX_blk_F", "Type-115 APEX (6.5)", 0, -1 },
			{ "LMG_Mk200_BI_F", "Mk200 (6.5 LMG)", 0, -1 },
			{ "LMG_Zafir_F", "Zafir (7.62 LMG)", 0, -1 }
		};
		mags[] = {
			{ "6Rnd_45ACP_Cylinder", "", 0 },
			{ "9Rnd_45ACP_Mag", "", 0 },
			{ "16Rnd_9x21_Mag", "Chargeur 9mm (16)", 0, -1 },
			{ "30Rnd_9x21_Mag_SMG_02", "Chargeur 9mm (30)", 0, -1 },
			{ "30Rnd_9x21_Mag", "Chargeur 9mm (30)", 0, -1 },
			{ "20Rnd_556x45_UW_mag", "Munition Anti Troll", 0, -1 },
			{ "30Rnd_556x45_Stanag", "Chargeur 5.56 (30)", 0, -1 },
			{ "30Rnd_580x42_Mag_F", "Chargeur 5.8 (30)", 0, -1 },
			{ "100Rnd_580x42_Mag_F", "Chargeur 5.8 LMG (100)", 0, -1 },
			{ "30Rnd_65x39_caseless_mag", "Chargeur 6.5 (30)", 0, -1 },
			{ "30Rnd_65x39_caseless_green", "Chargeur 6.5 (30)", 0, -1 },
			{ "20Rnd_650x39_Cased_Mag_F", "Chargeur 6.5 (20)", 0, -1 },
			{ "100Rnd_65x39_caseless_mag", "Chargeur 6.5 LMG (100)", 0, -1 },
			{ "200Rnd_65x39_cased_Box", "Chargeur 6.5 LMG (200)", 0, -1 },
			{ "20Rnd_762x51_Mag", "Chargeur 7.62 (20)", 0, -1 },
			{ "200Rnd_65x39_cased_Box", "Chargeur 6.5 (200)", 0, -1 },
			{ "200Rnd_65x39_cased_Box_Tracer", "Chargeur 6.5 (200)", 0, -1 },
			{ "10Rnd_93x64_DMR_05_Mag", "Chargeur 9.3 (10)", 0, -1 },
			{ "150Rnd_762x54_Box", "", 0, -1 },
			{ "150Rnd_93x64_Mag", "Chargeur Navid 9.3", 0, -1 },
			{ "10Rnd_338_Mag", "Chargeur .338 (10)", 0, -1 },
			{ "7Rnd_408_Mag", "Chargeur .408 (7)", 0, -1 },
			{ "5Rnd_127x108_Mag", "Chargeur 12.7 (5)", 0, -1 }

		};
		accs[] = {
      { "optic_Aco", "", 0, -1 },
      { "optic_ACO_grn", "", 0, -1 },
			{ "optic_Aco_smg", "", 0, -1 },
			{ "optic_Holosight", "", 0, -1 },
			{ "optic_Arco", "", 0, -1 },
			{ "optic_Hamr", "", 0, -1 },
			{ "optic_MRCO", "", 0, -1 },
			{ "optic_DMS", "", 0, -1 },
			{ "optic_SOS", "", 0, -1 },
			{ "optic_LRPS", "", 0, -1 },
			{ "optic_ERCO_blk_F", "", 0, -1 },
			{ "optic_KHS_blk", "", 0, -1 },
			{ "optic_AMS", "", 0, -1 },
			{ "optic_Hamr", "", 0, -1 },
			{ "optic_NVS", "", 0, -1 },
			{ "acc_flashlight", "", 0 },
			{ "acc_pointer_IR", "", 0 },
			{ "muzzle_snds_M", "Silencieux (5.56)", 0, -1 },
			{ "muzzle_snds_58_blk_F", "Silencieux (5.8)", 0, -1 },
			{ "muzzle_snds_H", "Silencieux (6.5)", 0, -1 },
			{ "muzzle_snds_338_black", "", 0, -1 },
			{ "muzzle_snds_65_TI_blk_F", "Silencieux APEX (6.5)", 0, -1 },
			{ "muzzle_snds_H_MG", "Silencieux (6.5 LMG)", 0, -1 },
			{ "muzzle_snds_B", "Silencieux (7.62)", 0, -1 },
			{ "muzzle_snds_93mmg", "Silencieux (9.3)", 0, -1 },
			{ "bipod_01_F_blk", "", 0, -1 }
    };
	};  
  
	//Armurerie Rebelle
	class rebel {
		name = "Vendeur d'armes";
		side = "civ";
		license = "rebel";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "hgun_Pistol_Signal_F", "", 4000 }, //signal pistol
			{ "hgun_P07_khk_F", "", 4700 }, //P07 9mm (Khaki)
			{ "hgun_Pistol_01_F", "", 4000 }, //PM 9
			{ "SMG_01_F", "", 16000 }, //vermin
			{ "SMG_05_F", "", 19500 }, // Protector 9mm
			{ "arifle_SDAR_F", "", 25000 }, //sdar
			{ "arifle_TRG20_F", "", 55000 }, //trg20
			{ "arifle_TRG21_F", "", 65000 }, //trg21
			{ "arifle_AKS_F","",75000},// AKS74U
			{ "arifle_Katiba_F", "", 110000 }, //katiba
			{ "arifle_ARX_ghex_F", "", 135000 }, //Type 115 6.5 mm (Green Hex)
			{ "arifle_ARX_hex_F", "", 135000 }, //Type 115 6.5 mm (Hex)
			{ "arifle_MXC_khk_F", "", 165000}, //MXC
			{ "arifle_MX_khk_F", "", 135000}, //MX 6.5 mm (Khaki)
			{ "arifle_MXM_khk_F", "", 165000}, //MXM 6.5 mm (Khaki)
			{ "arifle_SPAR_01_khk_F", "", 90000 }, //SPAR-16 5.56 mm (Khaki)
			{ "arifle_AKM_F","",225000},// AKM
			{ "arifle_AK12_F","",290000},// ak12
			{ "srifle_DMR_07_ghex_F", "", 165000}, //CMR-76 6.5 mm (Green Hex)
			{ "srifle_DMR_07_hex_F", "", 165000}, //CMR-76 6.5 mm (Hex)
			{ "srifle_DMR_06_camo_F", "", 320000}, //MK14
			{ "srifle_DMR_03_woodland_F", "", 320000}, //mk1 EMR
			{ "srifle_DMR_03_multicam_F", "", 320000},//mk1 EMR
			{ "srifle_DMR_03_khaki_F", "", 320000},//mk1 EMR
			{ "srifle_EBR_F", "", 320000 }, //Mk18 ABR 7.62 mm
			{ "arifle_SPAR_03_khk_F", "", 420000}, //spar 17
			{ "arifle_SPAR_03_snd_F", "", 420000}, //spar 17 camo
			{ "srifle_DMR_01_F", "", 215000 }, //rahim
			{ "srifle_DMR_02_camo_F", "", 515000 }, //MAR-10
			{ "srifle_DMR_05_hex_F", "", 750000 }, // Cyrus 9.3mm
			{ "srifle_DMR_05_tan_f", "", 750000  }, // Cyrus 9.3mm
			{ "srifle_LRR_tna_F", "", 900000 }, // M320 .408mm
			{ "srifle_GM6_ghex_F", "", 1000000 }, // Lynx 12.7mm
			{ "LMG_03_F", "", 325000 }, //LIM-85 5.56
			{ "arifle_MX_SW_F", "", 410000}, //MX SW 6.5 mm (Beige)
			{ "arifle_SPAR_02_snd_F", "", 410000}, //spar 16 s
			{ "LMG_Mk200_F", "", 850000 }, //mk200
			{ "LMG_Zafir_F", "", 900000 }, //zaphir
			{ "Rangefinder", "", 150, -1 },
			{ "Binocular", "", 500, -1 },
			{ "ItemGPS", "", 800, -1 },
			{ "ItemRadio", "", 750, -1 },
			{ "ItemMap", "", 350, -1 },
			{ "ItemCompass", "", 350, -1 },
			{ "ItemWatch", "", 350, -1 },
			{ "ToolKit", "", 1750, -1 },
			{ "FirstAidKit", "", 50, -1 },
			{ "NVGoggles", "", 1500, -1 },
			{ "NVGoggles_tna_F", "", 2250, -1 },
			{ "Chemlight_red", "", 300, -1 },
			{ "Chemlight_yellow", "", 300, -1 },
			{ "Chemlight_green", "", 300, -1 },
			{ "Chemlight_blue", "", 300, -1 },
			{ "SmokeShell", "", 400, -1 },
			{ "SmokeShellYellow", "", 400, -1 },
			{ "SmokeShellGreen", "", 400, -1 },
			{ "SmokeShellRed", "", 400, -1 },
			{ "SmokeShellPurple", "", 400, -1 },
			{ "SmokeShellOrange", "", 400, -1 },
			{ "SmokeShellBlue", "", 400, -1 },
			{ "MiniGrenade", "", 150000, -1 }

		};
		mags[] = {
			{"16Rnd_9x21_Mag", "", 60 }, //p07
			{"30Rnd_9x21_Mag", "", 60 }, //P07
			{"10Rnd_9x21_Mag", "", 60 }, //Pm9
			{"6Rnd_45ACP_Cylinder", "", 60 }, //zubr
			{"30Rnd_45ACP_Mag_SMG_01", "", 300 }, //vermin
			{"30Rnd_556x45_Stanag", "", 200 }, //sdar
			{"20Rnd_762x51_Mag", "", 200 }, //mk18
			{"10Rnd_762x54_Mag", "", 100 }, //rahim
			{"150Rnd_762x54_Box", "", 1500 }, //zaphir
			{"150Rnd_762x54_Box_Tracer", "", 1900 }, //zaphir
			{"200Rnd_65x39_cased_Box", "", 2000 }, //mk200
			{"200Rnd_65x39_cased_Box_Tracer", "", 2500 }, //mk200
			{"100Rnd_65x39_caseless_mag_Tracer", "", 2500 }, //mx sw
			{"30Rnd_545x39_Mag_F","",500},
			{"150Rnd_556x45_Drum_Mag_F","",500},
			{"150Rnd_556x45_Drum_Mag_Tracer_F","",1500},//Chargeur SPAR 16s
			{"200Rnd_556x45_Box_F","",500},
			{"200Rnd_556x45_Box_Red_F","",700},
			{"200Rnd_556x45_Box_Tracer_F","",1500},
			{"200Rnd_556x45_Box_Tracer_Red_F","",1500},
			{"20Rnd_650x39_Cased_Mag_F","",500},
			{"30Rnd_545x39_Mag_Green_F","",500},
			{"30Rnd_545x39_Mag_Tracer_F","",1500},
			{"30Rnd_545x39_Mag_Tracer_Green_F","",1500},
			{"30Rnd_556x45_Stanag_green","",500},
			{"30Rnd_556x45_Stanag_red","",500},
			{"30Rnd_556x45_Stanag_Tracer_Green","",1500},
			{"30Rnd_556x45_Stanag_Tracer_Red","",1500},
			{"30Rnd_556x45_Stanag_Tracer_Yellow","",1500},
			{"10Rnd_338_Mag","",800},
			{"30Rnd_580x42_Mag_F","",500},
			{"30Rnd_580x42_Mag_Tracer_F","",1500},
			{"100Rnd_580x42_Mag_F","",2500},
			{"100Rnd_580x42_Mag_Tracer_F","",4500},
			{"30Rnd_65x39_caseless_green_mag_Tracer","",1500},
			{"30Rnd_762x39_Mag_F","",500},
			{"30Rnd_762x39_Mag_Green_F","",500},
			{"30Rnd_762x39_Mag_Tracer_F","",1500},
			{"30Rnd_762x39_Mag_Tracer_Green_F","",1500},
			{"30Rnd_9x21_Mag_SMG_02","",500},
			{"30Rnd_9x21_Mag_SMG_02_Tracer_Green","",1500},
			{"30Rnd_9x21_Mag_SMG_02_Tracer_Red","",1500},
			{"30Rnd_9x21_Mag_SMG_02_Tracer_Yellow","",1500},
			{"30Rnd_65x39_caseless_green", "", 300 }, //katiba
			{"6Rnd_GreenSignal_F", "", 225 },
			{"6Rnd_RedSignal_F", "", 225 },
			{"30Rnd_65x39_caseless_mag", "", 1000 },
			{"30Rnd_65x39_caseless_mag_Tracer", "", 1500 },
			{"5Rnd_127x108_Mag", "", 1200 }, // Lynx 12.7mm
			{"10Rnd_93x64_DMR_05_Mag", "", 1400 }, // Cyrus 9.3mm
			{"7Rnd_408_Mag", "", 1400 } // M320 .408mm
		};
		accs[] = {
			{ "optic_Yorris", "", 750 },//zubr
			{ "optic_Holosight", "", 1450 },
			{ "optic_ACO_grn_smg", "", 1450 },
			{ "optic_Aco_smg", "", 1900 },
			{ "optic_ACO_grn", "", 1900 },
			{ "optic_Aco", "", 1900 },
			{ "optic_MRCO", "", 2750 },
			{ "optic_Hamr", "", 2750 },
			{ "optic_Hamr_khk_F",  3100 },
			{ "optic_Arco", "", 1900 },
			{ "optic_Arco_blk_F", "", 1900 },
			{ "optic_DMS_ghex_F", "", 1900 },
			{ "optic_DMS", "", 4700 },
			{ "optic_NVS", "", 5200 },
			{ "optic_SOS", "", 11000 },
			{ "optic_SOS_khk_F", "", 11000 },
			{ "optic_AMS", "", 4700 },
			{ "optic_AMS_khk", "", 9000 },
			{ "optic_KHS_blk", "", 10000 },
			{ "optic_KHS_hex", "", 10000 },
			{ "optic_KHS_old", "", 10000 },
			{ "optic_KHS_tan", "", 10000 },
			{ "optic_ERCO_blk_F", "", 8200 },
			{ "optic_ERCO_khk_F", "", 8200 },
			{ "optic_Holosight_blk_F", "", 1450 },
			{ "optic_Holosight_khk_F", "", 1450 },
			{ "optic_LRPS_ghex_F", "", 20000 },
			{ "optic_LRPS_tna_F", "", 20000 },
			{ "acc_flashlight", "", 450 },//lampe
			{ "acc_pointer_IR", "", 450 },//pointer ir
			{ "muzzle_snds_acp", "Silencieux .45", 950 },
			{ "muzzle_snds_L", "Silencieux 9 mm", 950 },
			{ "muzzle_snds_93mmg", "Silencieux 9.3 mm Noir", 950 },
			{ "muzzle_snds_93mmg_tan", "Silencieux 9.3 mm Tan", 950 },
			{ "muzzle_snds_M", "Silencieux 5.56 mm", 950 },
			{ "muzzle_snds_58_wdm_F", "", 950 },
			{ "muzzle_snds_H", "Silencieux 6.5 mm", 950 },
			{ "muzzle_snds_65_TI_blk_F", "", 950 },
			{ "muzzle_snds_65_TI_ghex_F", "", 950 },
			{ "muzzle_snds_65_TI_hex_F", "", 950 },
			{ "muzzle_snds_338_green", "Silencieux .338 mm", 950 },
			{ "muzzle_snds_338_black", "Silencieux .338 mm", 950 },
			{ "muzzle_snds_B", "Silencieux 7.62 mm", 950 },
			{ "muzzle_snds_B_khk_F", "Silencieux 7.62 mm", 950 },
			{ "bipod_01_F_mtp", "", 600 },
			{ "bipod_01_F_khk", "", 600 },
			{ "bipod_01_F_blk", "", 600 },
			{ "bipod_02_F_tan", "", 600 },
			{ "bipod_02_F_hex", "", 600 },
			{ "bipod_02_F_blk", "", 600 },
			{ "bipod_03_F_oli", "", 600 },
			{ "bipod_03_F_blk", "", 600 }
        };
	};

  //Armurerie Civile
	class gun {
		name = "Vendeur d'armes";
		side = "civ";
		license = "gun";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "hgun_Pistol_Signal_F", "", 4000 },
			{ "hgun_Rook40_F", "", 3200, -1 },
			{ "hgun_P07_F", "", 3200, 500 },
			{ "hgun_Pistol_heavy_02_F", "", 7650, -1 },
			{ "hgun_Pistol_heavy_01_F", "", 10000, -1 },
			{ "arifle_SDAR_F", "", 20250, -1 },
			{ "hgun_ACPC2_F", "", 7500, -1 },
			{ "hgun_PDW2000_F", "", 14500, -1 },
			{ "Binocular", "", 500, -1 },
			{ "ItemGPS", "", 800, -1 },
			{ "ItemMap", "", 700, -1 },
			{ "ItemCompass", "", 350, -1 },
			{ "ItemWatch", "", 350, -1 },
			{ "ToolKit", "", 1750, -1 },
			{ "FirstAidKit", "", 85, -1 },
			{ "NVGoggles", "", 1500, -1 },
			{ "Chemlight_red", "", 100, -1 },
			{ "Chemlight_yellow", "", 100, -1 },
			{ "Chemlight_green", "", 100, -1 },
			{ "Chemlight_blue", "", 100, -1 }
		};
		mags[] = {
			{ "6Rnd_45ACP_Cylinder", "", -1 },
			{ "30Rnd_556x45_Stanag", "", -1 },
			{ "9Rnd_45ACP_Mag", "", -1 },
			{ "11Rnd_45ACP_Mag", "", -1 },
			{ "16Rnd_9x21_Mag", "", -1 },
			{ "30Rnd_9x21_Mag", "", -1 },
			{ "20Rnd_556x45_UW_mag", "", -1 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", -1 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", -1 },
			{ "30Rnd_556x45_Stanag_Tracer_Yellow", "", -1 },
			{ "6Rnd_GreenSignal_F", "", -1 },
			{ "6Rnd_RedSignal_F", "", -1 }
		};
		accs[] = {
            { "optic_ACO_grn_smg", "", 750, -1 },
			{ "optic_Arco", "", 750, -1 },
			{ "optic_MRD", "", 1150, -1 },
			{ "optic_Yorris", "Yorris Rook40", 1150, -1 },
			{ "optic_Holosight_smg", "Holosight PDW2000", -1 },
			{ "acc_flashlight", "", 450 },
			{ "acc_pointer_IR", "", 450 },
			{ "muzzle_snds_acp", "Silencieux .45", 950 },
			{ "muzzle_snds_L", "Silencieux 9 mm", 950 },
			{ "muzzle_snds_M", "Silencieux 5.56 mm", 950 },
			{ "muzzle_snds_H", "Silencieux 6.5 mm", 950 },
			{ "muzzle_snds_B", "Silencieux 7.62 mm", 950 }
        };
	};
  
  //Armurerie Repère
	class gang {
		name = "Armurerie du Repère";
		side = "civ";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
      { "hgun_Rook40_F", "", 1500, -1 },
			{ "hgun_P07_F", "", 1500, -1 },
			{ "hgun_Pistol_heavy_02_F", "", 3200, -1 },
			{ "hgun_ACPC2_F", "", 3200, -1 },
			{ "hgun_PDW2000_F", "", 8210, -1 }
		};
		mags[] = {
			{ "16Rnd_9x21_Mag", "", 30 },
			{ "6Rnd_45ACP_Cylinder", "", 70 },
			{ "9Rnd_45ACP_Mag", "", 80 },
			{ "30Rnd_9x21_Mag", "", 90 }
		};
		accs[] = {
            { "optic_ACO_grn_smg", "", 150, -1 },
			{ "optic_Arco", "", 200, -1 }
        };
	};

//Quincaillerie :  
  
	//Quincaillerie Civil
	class genstore {
		name = "Magasin général";
		side = "civ";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "Binocular", "", 500, -1 },
			{ "ItemGPS", "", 800, -1 },
			{ "ItemRadio", "", 800, -1 },
			{ "ItemMap", "", 700, -1 },
			{ "ItemCompass", "", 350, -1 },
			{ "ItemWatch", "", 350, -1 },
			{ "ToolKit", "", 1750, -1 },
			{ "FirstAidKit", "", 85, -1 },
			{ "NVGoggles", "", 1500, 980 },
			{ "Chemlight_red", "", 100, -1 },
			{ "Chemlight_yellow", "", 100, -1 },
			{ "Chemlight_green", "", 100, -1 },
			{ "Chemlight_blue", "", 100, -1 }
		};
		mags[] = {};
	};

	//Quincaillerie Dépanneur
	class depanneur {
		name = "Quincaillerie Dépanneur";
		side = "civ";
		license = "depanneur";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "Binocular", "", 350, -1 },
			{ "ItemGPS", "", 500, -1 },
			{ "ItemRadio", "", 500, -1 },
			{ "ItemMap", "", 500, -1 },
			{ "ItemCompass", "", 500, -1 },
			{ "ItemWatch", "", 500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "FirstAidKit", "", 50, -1 },
			{ "NVGoggles", "", 500, -1 },
			{ "Chemlight_red", "", 100, -1 },
			{ "Chemlight_yellow", "", 100, -1 },
			{ "Chemlight_green", "", 100, -1 },
			{ "Chemlight_blue", "", 100, -1 }
		};
		mags[] = {};
	};

  //Quincaillerie station Service
	class f_station_store {
		name = "Magasin Station Service";
		side = "";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "Binocular", "", 500, -1 },
			{ "ItemGPS", "", 800, -1 },
			{ "ItemRadio", "", 800, -1 },
			{ "ItemMap", "", 700, -1 },
			{ "ItemCompass", "", 350, -1 },
			{ "ItemWatch", "", 350, -1 },
			{ "ToolKit", "", 1750, -1 },
			{ "FirstAidKit", "", 85, -1 },
			{ "NVGoggles", "", 1500, -1 },
			{ "Chemlight_red", "", 100, -1 },
			{ "Chemlight_yellow", "", 100, -1 },
			{ "Chemlight_green", "", 100, -1 },
			{ "Chemlight_blue", "", 100, -1 }
		};
		mags[] = {};
	};

	//Quincaillerie Samu
	class med_basic {
		name = "Quincaillerie";
		side = "med";
		license = "";
		level[] = { "", "", -1, "" };
		items[] = {
			{ "ItemMap", "", 300, -1 },
			{ "ItemGPS", "", 500, -1 },
			{ "ItemRadio", "", 500, -1 },
			{ "Binocular", "", 500, -1 },
			{ "ToolKit", "", 500, -1 },
			{ "FirstAidKit", "", 20, -1 },
			{ "Medikit", "", 50, -1 },
			{ "NVGoggles", "", 500, -1 }
		};
		mags[] = {
			{ "30Rnd_9x21_Mag", "Chargeur pour Tazer", 60, -1 }
  };
    
	};
};