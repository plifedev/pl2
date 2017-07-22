-- --------------------------------------------------------
-- Hôte :                        localhost
-- Version du serveur:           10.2.6-MariaDB - mariadb.org binary distribution
-- SE du serveur:                Win64
-- HeidiSQL Version:             9.4.0.5125
-- --------------------------------------------------------

/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET NAMES utf8 */;
/*!50503 SET NAMES utf8mb4 */;
/*!40014 SET @OLD_FOREIGN_KEY_CHECKS=@@FOREIGN_KEY_CHECKS, FOREIGN_KEY_CHECKS=0 */;
/*!40101 SET @OLD_SQL_MODE=@@SQL_MODE, SQL_MODE='NO_AUTO_VALUE_ON_ZERO' */;

-- Export de données de la table altis_bdd_2.0.containers : ~0 rows (environ)
/*!40000 ALTER TABLE `containers` DISABLE KEYS */;
/*!40000 ALTER TABLE `containers` ENABLE KEYS */;

-- Export de données de la table altis_bdd_2.0.dynmarket : ~0 rows (environ)
/*!40000 ALTER TABLE `dynmarket` DISABLE KEYS */;
INSERT INTO `dynmarket` (`id`, `prices`) VALUES
	(1, '[["apple",10,0],["peach",30,0],["oil_processed",1950,0],["copper_refined",1050,0],["iron_refined",1350,0],["salt_refined",1460,0],["glass",1450,0],["diamond_cut",1530,0],["cement",990,0],["goldbar",95000,0],["heroin_processed",5320,0],["marijuana",5590,0],["cocaine_processed",5680,0]]');
/*!40000 ALTER TABLE `dynmarket` ENABLE KEYS */;

-- Export de données de la table altis_bdd_2.0.gangs : ~0 rows (environ)
/*!40000 ALTER TABLE `gangs` DISABLE KEYS */;
/*!40000 ALTER TABLE `gangs` ENABLE KEYS */;

-- Export de données de la table altis_bdd_2.0.houses : ~0 rows (environ)
/*!40000 ALTER TABLE `houses` DISABLE KEYS */;
/*!40000 ALTER TABLE `houses` ENABLE KEYS */;

-- Export de données de la table altis_bdd_2.0.players : ~3 rows (environ)
/*!40000 ALTER TABLE `players` DISABLE KEYS */;
INSERT INTO `players` (`uid`, `name`, `aliases`, `pid`, `cash`, `bankacc`, `coplevel`, `mediclevel`, `civ_licenses`, `cop_licenses`, `med_licenses`, `civ_gear`, `cop_gear`, `med_gear`, `civ_stats`, `cop_stats`, `med_stats`, `arrested`, `adminlevel`, `donorlevel`, `blacklist`, `civ_alive`, `civ_position`, `playtime`, `insert_time`, `last_seen`) VALUES
	(12, 'Gustavo Gaviria', '"[`Gustavo Gaviria`]"', '76561197989714635', 28785, 491450, '7', '5', '"[[`license_civ_driver`,1],[`license_civ_boat`,0],[`license_civ_pilot`,0],[`license_civ_trucking`,0],[`license_civ_gun`,1],[`license_civ_dive`,0],[`license_civ_home`,0],[`license_civ_oil`,0],[`license_civ_diamond`,0],[`license_civ_salt`,0],[`license_civ_sand`,0],[`license_civ_iron`,0],[`license_civ_copper`,0],[`license_civ_cement`,0],[`license_civ_medmarijuana`,0],[`license_civ_cocaine`,0],[`license_civ_heroin`,0],[`license_civ_marijuana`,0],[`license_civ_rebel`,1]]"', '"[[`license_cop_cAir`,1],[`license_cop_cg`,1]]"', '"[[`license_med_mAir`,0]]"', '"[`U_I_CombatUniform`,``,``,``,``,[`ItemMap`,`ItemCompass`,`ItemWatch`],[],[],[],[],[],[],[],[],[``,``,``,``],[``,``,``,``],[]]"', '"[`U_Rangemaster`,`V_Rangemaster_belt`,``,``,``,[`ItemMap`,`ItemCompass`,`ItemWatch`,`ItemGPS`],``,`hgun_P07_snds_F`,[],[`16Rnd_9x21_Mag`,`16Rnd_9x21_Mag`,`16Rnd_9x21_Mag`],[],[],[],[`16Rnd_9x21_Mag`,`16Rnd_9x21_Mag`,`16Rnd_9x21_Mag`],[``,``,``,``],[`muzzle_snds_L`,``,``,``],[]]"', '"[`U_I_CombatUniform_shortsleeve`,`V_PlateCarrierIA2_dgtl`,`I_Fieldpack_oli_Medic`,`G_Squares_Tinted`,`H_HelmetIA`,[`ItemMap`,`ItemCompass`,`ItemWatch`,`ItemRadio`,`NVGoggles_INDEP`],[],[],[`FirstAidKit`],[`30Rnd_556x45_Stanag`,`30Rnd_556x45_Stanag`,`30Rnd_556x45_Stanag`],[`Medikit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`],[],[],[`30Rnd_556x45_Stanag`,`30Rnd_556x45_Stanag`,`9Rnd_45ACP_Mag`,`9Rnd_45ACP_Mag`,`SmokeShell`,`SmokeShellGreen`,`SmokeShellOrange`,`SmokeShellPurple`,`Chemlight_green`,`Chemlight_green`,`30Rnd_556x45_Stanag`,`9Rnd_45ACP_Mag`],[``,`acc_pointer_IR`,``,``],[``,``,``,``],[]]"', '"[100,100,0]"', '"[100,100,0]"', '"[100,100,0]"', 0, '0', '0', 0, 1, '"[3634.41,13104.7,0.00145626]"', '"[2,8,2]"', '2017-07-22 10:19:27', '2017-07-22 15:06:41'),
	(13, 'Timoleón Jiménez', '"[`Timoleón Jiménez`]"', '76561197986644840', 0, 39000, '7', '5', '"[]"', '"[[`license_cop_cAir`,0],[`license_cop_cg`,0]]"', '"[]"', '"[]"', '"[`U_B_CombatUniform_mcam_tshirt`,`V_PlateCarrierSpec_rgr`,`B_AssaultPack_rgr_Medic`,`G_Squares`,`H_HelmetB_light_desert`,[`ItemMap`,`ItemCompass`,`ItemWatch`,`ItemRadio`,`NVGoggles`],`arifle_MX_pointer_F`,`hgun_P07_F`,[`FirstAidKit`],[`30Rnd_65x39_caseless_mag`,`30Rnd_65x39_caseless_mag`,`Chemlight_green`],[`Medikit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`,`FirstAidKit`],[],[],[`30Rnd_65x39_caseless_mag`,`30Rnd_65x39_caseless_mag`,`30Rnd_65x39_caseless_mag`,`16Rnd_9x21_Mag`,`16Rnd_9x21_Mag`,`SmokeShell`,`SmokeShellGreen`,`SmokeShellBlue`,`SmokeShellOrange`,`Chemlight_green`,`30Rnd_65x39_caseless_mag`,`16Rnd_9x21_Mag`],[``,`acc_pointer_IR`,``,``],[``,``,``,``],[]]"', '"[]"', '"[100,100,0]"', '"[100,100,0]"', '"[100,100,0]"', 0, '0', '0', 0, 0, '"[]"', '"[7,0,0]"', '2017-07-22 13:47:40', '2017-07-22 13:57:20'),
	(14, 'Moktar zizou', '"[`Moktar zizou`]"', '76561198015652175', 1240000, 0, '0', '0', '"[[`license_civ_driver`,0],[`license_civ_boat`,0],[`license_civ_pilot`,0],[`license_civ_trucking`,0],[`license_civ_gun`,0],[`license_civ_dive`,0],[`license_civ_home`,0],[`license_civ_oil`,0],[`license_civ_diamond`,0],[`license_civ_salt`,0],[`license_civ_sand`,0],[`license_civ_iron`,0],[`license_civ_copper`,0],[`license_civ_cement`,0],[`license_civ_medmarijuana`,0],[`license_civ_cocaine`,0],[`license_civ_heroin`,0],[`license_civ_marijuana`,0],[`license_civ_rebel`,0]]"', '"[]"', '"[]"', '"[`U_C_Poloshirt_blue`,``,``,``,``,[`ItemMap`,`ItemCompass`,`ItemWatch`],[],[],[],[],[],[],[],[],[``,``,``,``],[``,``,``,``],[[`defibrillator`,1]]]"', '"[]"', '"[]"', '"[100,100,0]"', '"[100,100,0]"', '"[100,100,0]"', 0, '0', '0', 0, 1, '"[3734.33,13005.8,0.00145149]"', '"[0,0,4]"', '2017-07-22 13:53:00', '2017-07-22 13:57:23');
/*!40000 ALTER TABLE `players` ENABLE KEYS */;

-- Export de données de la table altis_bdd_2.0.vehicles : ~1 rows (environ)
/*!40000 ALTER TABLE `vehicles` DISABLE KEYS */;
INSERT INTO `vehicles` (`id`, `side`, `classname`, `type`, `pid`, `alive`, `blacklist`, `active`, `plate`, `color`, `inventory`, `gear`, `fuel`, `damage`, `insert_time`, `insure`) VALUES
	(2, 'civ', 'C_SUV_01_F', 'Car', '76561197989714635', 1, 0, 1, 381638, 2, '"[[],0]"', '"[]"', 1, '"[]"', '2017-07-22 13:23:08', 1),
	(3, 'civ', 'C_Van_01_transport_F', 'Car', '76561197989714635', 1, 0, 0, 754249, 1, '"[[],0]"', '"[]"', 1, '"[]"', '2017-07-22 15:06:41', 1);
/*!40000 ALTER TABLE `vehicles` ENABLE KEYS */;

-- Export de données de la table altis_bdd_2.0.wanted : ~1 rows (environ)
/*!40000 ALTER TABLE `wanted` DISABLE KEYS */;
INSERT INTO `wanted` (`wantedID`, `wantedName`, `wantedCrimes`, `wantedBounty`, `active`, `insert_time`) VALUES
	('76561198015652175', 'Moktar zizou', '[]', 0, 0, '2017-07-22 13:54:18');
/*!40000 ALTER TABLE `wanted` ENABLE KEYS */;

/*!40101 SET SQL_MODE=IFNULL(@OLD_SQL_MODE, '') */;
/*!40014 SET FOREIGN_KEY_CHECKS=IF(@OLD_FOREIGN_KEY_CHECKS IS NULL, 1, @OLD_FOREIGN_KEY_CHECKS) */;
/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
