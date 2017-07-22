class CarShops {

    class civ_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 700, { "driver" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 7000, { "driver" }, { "", "", -1 } },
            { "C_Offroad_01_F", 13500, { "driver" }, { "", "", -1 } },
                  { "C_Offroad_02_unarmed_F", 15000, { "driver" }, { "", "", -1 } },
            { "C_SUV_01_F", 25500, { "driver" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 50000, { "driver" }, { "", "", -1 } }
        };
    };

    class dona_med_air {
        side = "med";
        vehicles[] = {
            { "I_Heli_light_03_unarmed_F", 150000, { "" }, { "life_donator", "SCALAR", 2 } }
        };
    };

    class dona_cop_air {
        side = "cop";
        vehicles[] = {
            { "I_Heli_light_03_unarmed_F", 0, { "" }, { "life_donator", "SCALAR", 2 } }
        };
    };

    class vip_car {
        side = "civ";
        vehicles[] = {
            { "C_Offroad_01_F", 13500, { "" }, { "life_donator", "SCALAR", 2 } },
            { "C_SUV_01_F", 25500, { "" }, { "life_donator", "SCALAR", 2 } },
            { "C_Hatchback_01_sport_F", 50000, { "" }, { "life_donator", "SCALAR", 2 } },
            { "O_MRAP_02_F", 500000, { "" }, { "life_donator", "SCALAR", 2 } },
            { "O_Truck_03_device_F", 250000, { "" }, { "life_donator", "SCALAR", 2 } }
        };
    };

    class kart_shop {
        side = "civ";
        vehicles[] = {
            { "C_Kart_01_Blu_F", 1000 , { "" }, { "", "", -1 } },
            { "C_Kart_01_Fuel_F", 1000, { "" }, { "", "", -1 } },
            { "C_Kart_01_Red_F", 1000, { "" }, { "", "", -1 } },
            { "C_Kart_01_Vrana_F", 1000, { "" }, { "", "", -1 } }
        };
    };

    class med_shop {
        side = "med";
        vehicles[] = {
            { "C_Offroad_01_F", 2700, { "" }, { "life_mediclevel", "SCALAR", 1 } },
            { "C_SUV_01_F", 5100, { "" }, { "life_mediclevel", "SCALAR", 2 } },
            { "C_Offroad_02_unarmed_F", 3000, { "" }, { "life_mediclevel", "SCALAR", 2 } },
            { "B_MRAP_01_F", 15000, { "" }, { "life_mediclevel", "SCALAR", 4 } }
        };
    };

    class med_air_hs {
        side = "med";
        vehicles[] = {
            { "B_Heli_Light_01_F", 15000, { "" }, { "life_mediclevel", "SCALAR", 1 } },
            { "O_Heli_Light_02_unarmed_F", 25000, { "" }, { "life_mediclevel", "SCALAR", 2 } },
            { "O_Heli_Transport_04_medevac_F", 35000, { "" }, { "life_mediclevel", "SCALAR", 4 } },
            { "I_Heli_light_03_unarmed_F", 45000, { "" }, { "life_mediclevel", "SCALAR", 3 } }
        };
    };

    class depanneur {
        side = "civ";
        vehicles[] = {
            { "C_Offroad_01_repair_F", 2700, { "" }, { "", "", -1 } },
            { "B_T_LSV_01_unarmed_F", 5100, { "" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 10000, { "" }, { "", "", -1 } },
            { "B_Heli_Light_01_F", 15000, { "" }, { "", "", -1 } }
        };
    };

    class civ_truck {
        side = "civ";
        vehicles[] = {
            { "C_Van_01_box_F", 35000, { "trucking" }, { "", "", -1 } },
            { "B_G_Van_01_fuel_F", 30000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_transport_F", 80000, { "trucking" }, { "", "", -1 } },
            { "I_Truck_02_covered_F", 100000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_02_fuel_F", 75000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_02_Ammo_F", 75000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_transport_F", 150000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_fuel_F", 130000, { "trucking" }, { "", "", -1 } },
            { "O_Truck_03_covered_F", 180000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_box_F", 250000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_covered_F", 225000, { "trucking" }, { "", "", -1 } },
            { "B_Truck_01_ammo_F", 130000, {"trucking"}, { "", "", -1 } },
            { "O_Truck_03_device_F", 250000, {"trucking"}, { "", "", -1 } }
        };
    };

    class reb_car {
        side = "civ";
        vehicles[] = {
            { "B_Quadbike_01_F", 700, { "rebel" }, { "", "", -1 } },
            { "C_Hatchback_01_F", 7000, { "rebel" }, { "", "", -1 } },
            { "C_Hatchback_01_sport_F", 50000, { "rebel" }, { "", "", -1 } },
            { "C_SUV_01_F", 25500, { "rebel" }, { "", "", -1 } },
            { "C_Offroad_01_F", 13500, { "rebel" }, { "", "", -1 } },
            { "B_T_LSV_01_unarmed_F", 50000, { "rebel" }, { "", "", -1 } },
            { "O_T_LSV_02_unarmed_F", 55000, { "rebel" }, { "", "", -1 } },
            { "B_CTRG_LSV_01_light_F", 50000, { "rebel" }, { "", "", -1 } },
            { "O_MRAP_02_F", 500000, { "rebel" }, { "", "", -1 }  }, //Ifrit
            { "I_MRAP_03_F", 1000000, { "rebel" }, { "", "", -1 }  }, //Strider
            { "O_Truck_03_transport_F", 200000, { "" }, { "", "", -1 } },
            { "O_Truck_03_device_F", 250000, { "" }, { "", "", -1 } }
        };
    };

    class armee_car {
        side = "armer";
        vehicles[] = {
          { "B_MRAP_01_F", 0, { "" }, { "", "", -1 } },
          { "I_MRAP_03_F", 0, { "" }, { "", "", -1 }  }, //Strider
          { "B_APC_Wheeled_01_cannon_F", 0, { "" }, { "", "", -1 }  },
          { "I_Truck_02_covered_F" , 0, { "" }, { "", "", -1 }  },
          { "B_T_LSV_01_unarmed_F", 0, { "" }, { "", "", -1 }  }
        };
    };

    class armee_air {
        side = "armer";
        vehicles[] = {
                { "B_Heli_Light_01_stripped_F", 0, { "" }, { "", "", -1 } },
                { "I_Heli_light_03_unarmed_F", 0, { "" }, { "", "", -1 }  },
                { "I_Heli_Transport_02_F", 0, { "" }, { "", "", -1 }  }
        };
    };

    class reb_air {
        side = "civ";
        vehicles[] = {
            { "B_Heli_Light_01_stripped_F", 50000, { "rebel" }, { "", "", -1 } },
            { "O_Heli_Transport_04_bench_F", 200000, { "rebel" }, { "", "", -1 } },
            { "I_Heli_light_03_unarmed_F", 150000, { "rebel" }, { "", "", -1 }  },
            { "I_Heli_Transport_02_F", 175000, { "rebel" }, { "", "", -1 }  },
            { "B_Heli_Transport_03_unarmed_F", 300000, { "rebel" }, { "", "", -1 }  },
            { "O_Heli_Transport_04_box_F", 200000, { "rebel" }, { "", "", -1 }  }
        };
    };

    //Soldat 1, Caporal 2, Sergent 3, Adjudant 4, Major 5, Lieutenant 6, Capitaine 7, Commandant 8, Lieutenant-Colonel 9, Colonel 10, Général 11
    class cop_car {
        side = "cop";
        vehicles[] = {
            { "C_Offroad_01_F", 0, { "" }, { "", "", -1 } }, //PICKUP
            { "C_Offroad_02_unarmed_F", 0, { "" }, {"", "", -1 } }, //M4
            { "B_T_LSV_01_unarmed_F", 0, { "" }, {"life_coplevel", "SCALAR", 2 } }, //PROWLER
			{ "B_MRAP_01_F", 0, { "" }, { "life_coplevel", "SCALAR", 3 } }, //HUNTER
            { "I_Truck_02_covered_F", 0, { "" }, {"life_coplevel", "SCALAR", 4 } }, //ZAMAK
			{ "I_MRAP_03_F", 0, { "" }, { "life_coplevel", "SCALAR", 5 } }, //STRIDER
			{ "B_APC_Wheeled_01_cannon_F", 0, { "" }, { "life_coplevel", "SCALAR", 11 }  } //MARSHALL
        };
    };

    class cop_air {
        side = "cop";
        vehicles[] = {
            { "B_Heli_Light_01_stripped_F", 0, { "" }, { "", "", -1 } }, //Hummingbird
            { "I_Heli_light_03_unarmed_F", 0, { "" }, { "life_coplevel", "SCALAR", 2 } },
            { "I_Heli_Transport_02_F", 0, { "" }, { "life_coplevel", "SCALAR", 3 } },
            { "B_T_VTOL_01_infantry_F", 0, { "" }, { "life_coplevel", "SCALAR", 7 } }
        };
    };

    class adac {
        side = "civ";
        vehicles[] = {
            { "C_Offroad_01_F", 2700, { "" }, { "life_job", "SCALAR", 1 } },
            { "C_Heli_Light_01_civil_F", 15000, { "" }, { "life_job", "SCALAR", 1 } },
            { "B_Truck_01_mover_F", 50000, { "" }, { "life_job", "SCALAR", 1 } },
            { "O_Heli_Light_02_unarmed_F", 20000, { "" }, { "life_job", "SCALAR", 1 } }
        };
    };

    class civ_air {
        side = "civ";
        vehicles[] = {
            { "C_Plane_Civil_01_F", 100000, {"pilot"}, {"","",-1}},
            { "B_Heli_Light_01_F", 50000, { "pilot" }, { "", "", -1 } },
            { "O_Heli_Light_02_unarmed_F", 75000, { "pilot" }, { "", "", -1 } },
            { "C_Plane_Civil_01_racing_F", 150000, { "pilot" }, { "", "", -1 } }
        };
    };

    class cop_ship {
        side = "cop";
        vehicles[] = {
            { "B_Boat_Transport_01_F", 0, { "" }, { "", "", -1 } },
            { "C_Boat_Civil_01_police_F", 0, { "" }, { "", "", -1 } },
            { "B_Boat_Armed_01_minigun_F", 0, { "" }, { "life_coplevel", "SCALAR", 4 } },
            { "C_Scooter_Transport_01_F", 0, { "" }, { "", "", -1 } },
            { "B_SDV_01_F", 0, { "cg" }, { "", "", -1 } },
            { "C_Boat_Transport_02_F", 0, { "" }, { "life_coplevel", "SCALAR", 3 } }
        };
    };

    class civ_ship {
        side = "civ";
        vehicles[] = {
            { "C_Rubberboat", 3500, { "" }, { "", "", -1 } },
            { "C_Scooter_Transport_01_F",5500, {""}, {"","",-1}},
            { "C_Boat_Civil_01_F", 10000, { "" }, { "", "", -1 } },
            { "B_SDV_01_F", 100000, { "" }, { "", "", -1 } },
            { "C_Boat_Transport_02_F", 15000, { "" }, { "", "", -1 } }
        };
    };
};
class LifeCfgVehicles {

    class Default {
        vItemSpace = -1;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance[] = { 1000, 1000, 1000, 1000 }; //Civil,Police,Medecin,Offor
        chopShop = 1200;
        textures[] = {};
    };

    class O_Heli_Transport_04_bench_F {
        vItemSpace = -1;
        storageFee[] = { 5000, 1, 5000, 5000 };
        gstorageFee[] = { (50000, 1, 50000, 50000 };
        insurance[] = { 25000, 1, 25000, 25000 }; //Civil,Police,Medecin,Offor
        chopShop = 25000;
        textures[] = {};
    };

    class I_Truck_02_medical_F {
        vItemSpace = 150;	
        storageFee[] = { 1000, 1, 1000, 1000 };
        garageSell[] = { 5000, 1, 5000, 5000 };
        insurance[] = { 10000, 1, 10000, 10000 }; //Civil,Police,Medecin,Offor
        chopShop = 10000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        storageFee[] = { 2000, 1, 2000, 2000 };
        garageSell[] = { 20000, 1, 20000, 20000 };
        insurance[] = { 10000, 1, 10000, 10000 }; //Civil,Police,Medecin,Offor
        chopShop = 10000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        storageFee[] = { 3000, 1, 3000, 3000 };
        garageSell[] = { 20000, 1, 20000, 20000 };
        insurance[] = { 10000, 1, 10000, 10000 }; //Civil,Police,Medecin,Offor
        chopShop = 10000;
        textures[] = {};
    };

    class B_Truck_01_mover_F {
        vItemSpace = 100;
        storageFee[] = { 500, 1, 500, 500 };
        garageSell[] = { 10000, 1, 10000, 10000 };
        insurance[] = { 5000, 1, 5000, 5000 }; //Civil,Police,Medecin,Offor
        chopShop = 5000;
        textures[] = {
            { "Dépanneur", "armer", {
                "textures\Metiers\Depanneur\hemtt_mover.jpg"
            } }
        };
    };

    class B_APC_Wheeled_01_cannon_F {
            vItemSpace = -1;
            storageFee[] = { 1, 1, 1, 1 };
            gstorageFee[] = { 1, 1, 1, 1 };
            insurance[] = { 1, 1, 1, 1 }; //Civil,Police,Medecin,Offor
            chopShop = 1;
            textures[] = {
                { "Marshall", "armer", {
                "textures\Terrestre\Marshall\Marshall_Armee1.jpg",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "textures\Terrestre\Marshall\Marshall_Armee2.jpg"
                } },
                { "Armée", "cop", {
                "textures\Terrestre\Marshall\Marshall-1.jpg",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "textures\Terrestre\Marshall\Marshall-2.jpg"
                } }                
            };
    };

    class C_Rubberboat {
        vItemSpace = 100;
        storageFee[] = { 400, 1, 400, 400 };
        garageSell[] = { 950, 1, 950, 950 };
        insurance[] = { 1000, 1, 1000, 1000 }; //Civil,Police,Medecin,Offor
        chopShop = -1;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = -1;
        storageFee[] = { 1, 1, 1, 1 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1, 1, 1, 1 }; //Civil,Police,Medecin,Offor
        chopShop = -1;
        textures[] = {};
    };

    class O_Boat_Armed_01_hmg_F {
        vItemSpace = 150;
        storageFee[] = { 1, 1, 1, 1 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1, 1, 1, 1 }; //Civil,Police,Medecin,Offor
        chopShop = 5000;
        textures[] = { };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 150
        storageFee[] = { 1, 1, 1, 1 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1, 1, 1, 1 }; //Civil,Police,Medecin,Offor
        chopShop = -1;
        textures[] = { };
    };

    class I_Boat_Armed_01_minigun_F {
        vItemSpace = 150;
        storageFee[] = { 1, 1, 1, 1 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1, 1, 1, 1 }; //Civil,Police,Medecin,Offor
        chopShop = -1;
        textures[] = { };
    };

    class B_G_Boat_Transport_01_F {
        vItemSpace = 50;
        storageFee[] = { 500, 1, 500, 500 };
        garageSell[] = { 5000, 1, 5000, 5000 };
        insurance[] = { 2500, 1,2500, 2500 }; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = { };
    };

    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        storageFee[] = { 500, 1, 500, 500 };
        garageSell[] = { 5000, 1, 5000, 5000 };
        insurance[] = { 2500, 1, 2500, 2500}; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = {
        { "Blanc", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"} },
        { "Noir", "cop", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"} },
        { "Bleu", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"} },
        { "Gris", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"} },
        { "Citron vert", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"} },
        { "Rouge", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"} },
        { "Jaune", "civ", {"\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa","\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"} }
        };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 50;
        storageFee[] = { 500, 1, 500, 500 };
        garageSell[] = { 5000, 1, 5000, 5000 };
        insurance[] = { 2500, 1, 2500, 2500}; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 325;
        storageFee[] = { 2000, 1, 2000, 2000 };
        garageSell[] = { 100000, 1, 100000, 100000 };
        insurance[] = { 50000, 1, 50000, 50000 }; //Civil,Police,Medecin,Offor
        chopShop = 50000;
        textures[] = { };
    };

        class C_Offroad_01_repair_F {
        vItemSpace = 40;
        storageFee[] = { 100, 1, 100, 100 };
        garageSell[] = { 1400, 1, 1400, 1400 };
        insurance[] = { 700, 1, 700, 700 }; //Civil,Police,Medecin,Offor
        chopShop = 700;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 375;
        storageFee[] = { 2500, 1, 2500, 2500 };
        garageSell[] = { 125000, 1, 125000, 125000 };
        insurance[] = { 750000, 1, 750000, 750000 }; //Civil,Police,Medecin,Offor
        chopShop = 750000;
        textures[] = {
        { "Jaune", "civ", {
                "textures\Terrestre\Tempest\orange1.jpg",
                "textures\Terrestre\Tempest\orange1_back.jpg"
        } },
        { "Noel", "noel", {
                "textures\Terrestre\Tempest\tempestnoel3.jpg",
                "textures\Terrestre\Tempest\tempestnoel4.jpg"
        } },
        { "Camo Blanc", "dona", {
                "textures\Terrestre\Tempest\vip1.jpg",
                "textures\Terrestre\Tempest\vipBack.jpg"
        } },
        { "Halloween Limité", "hallo", {
        "textures\Terrestre\Tempest\TempestHallo.jpg",
                "textures\Terrestre\Tempest\TempestHalloback.paa"
        } },
        { "Camo Vert", "dona", {
        "textures\Terrestre\Tempest\vip2.jpg",
                "textures\Terrestre\Tempest\vipBack2.jpg"
        } }
        };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1000, 1000, 1000, 1000 }; //Civil,Police,Medecin,Offor
        chopShop = 1200;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1000, 1000, 1000, 1000 }; //Civil,Police,Medecin,Offor
        chopShop = 1200;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        storageFee[] = { 1000, 1000, 1000, 1000 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1000, 1000, 1000, 1000 }; //Civil,Police,Medecin,Offor
        chopShop = 1200;
        textures[] = {};
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 40;
        storageFee[] = { 1500, 1, 1500, 1500 };
        garageSell[] = { 4000, 1, 4000, 4000 };
        insurance[] = { 2000, 1, 2000, 2000 }; //Civil,Police,Medecin,Offor
        chopShop = 2000;
        textures[] = { };
    };

    class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 1000, 1, 1000, 1000 };
        garageSell[] = { 6000, 1, 6000, 6000 };
        insurance[] = { 3000, 1, 3000, 3000 }; //Civil,Police,Medecin,Offor
        chopShop = 3000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 250;
        storageFee[] = { 1000, 1, 1000, 1000 };
        garageSell[] = { 5000, 1, 5000, 5000 };
        insurance[] = { 2500, 1, 2500, 2500 }; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 250;
        storageFee[] = { 1, 1, 1, 1 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1, 1, 1, 1 }; //Civil,Police,Medecin,Offor
        chopShop = -1;
        textures[] = { };
    };

    class C_Boat_Civil_01_rescue_F {
        vItemSpace = 250;
        storageFee[] = { 1000, 1, 1000, 1000 };
        garageSell[] = { 5000, 1, 5000, 5000 };
        insurance[] = { 2500, 1, 2500, 2500 }; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 750;
        storageFee[] = { 2500, 1, 2500, 2500 };
        garageSell[] = { 125000, 1, 125000, 125000 };
        insurance[] = { 75000, 1, 75000, 75000 }; //Civil,Police,Medecin,Offor
        chopShop = 75000;
        textures[] = { };
    };

    class B_Truck_01_covered_F {
        vItemSpace = 650;
        storageFee[] = { 2250, 1, 2250, 2250 };
        garageSell[] = { 112500, 1, 112500, 112500 };
        insurance[] = { 56250, 1, 56250, 56250 }; //Civil,Police,Medecin,Offor
        chopShop = 56250;
        textures[] = { };
    };

    class B_Truck_01_ammo_F {
        vItemSpace = 200;
        storageFee[] = { 1300, 1, 1300, 1300 };
        garageSell[] = { 65000, 1, 65000, 65000 };
        insurance[] = { 32500, 1, 32500, 32500 }; //Civil,Police,Medecin,Offor
        chopShop = 32500;
        textures[] = { };
    };

    class O_LSV_02_unarmed_black_F {
        vItemSpace = 25;
        storageFee[] = { 2500, 1, 2500, 2500 };
        garageSell[] = { 10000, 1, 10000, 10000 };
        insurance[] = { 5000, 1, 5000, 5000 }; //Civil,Police,Medecin,Offor
        chopShop = 5000;
        textures[] = { };
    };

    class O_LSV_02_unarmed_F {
          vItemSpace = 25;
          storageFee[] = { 2500, 1, 2500, 2500 };
          garageSell[] = { 10000, 1, 10000, 10000 };
          insurance[] = { 5000, 1, 5000, 5000 }; //Civil,Police,Medecin,Offor
          chopShop = 5000;
          textures[] = { };
      };

    class B_Truck_01_transport_F {
        vItemSpace = 500;
        storageFee[] = { 1500, 1, 1500, 1500 };
        garageSell[] = { 75000, 1, 75000, 75000 };
        insurance[] = { 37500, 1, 37500, 37500 }; //Civil,Police,Medecin,Offor
        chopShop = 37500;
        textures[] = { };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 200;
        storageFee[] = { 1300, 1, 1300, 1300 };
        garageSell[] = { 65000, 1, 65000, 65000 };
        insurance[] = { 32500, 1, 32500, 32500 }; //Civil,Police,Medecin,Offor
        chopShop = 32500;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 50;
        storageFee[] = { 5000, 1, 5000, 5000 };
        garageSell[] = { 250000, 1, 250000, 250000 };
        insurance[] = { 125000, 1, 125000, 125000 }; //Civil,Police,Medecin,Offor
        chopShop = 125000;
        textures[] = {
            { "Forêt", "dona", {
                "textures\Terrestre\Ifrit\ifrit_forest_front.jpg",
                "textures\Terrestre\Ifrit\ifrit_forest_back.jpg"
            } },
            { "Gris numérique", "dona", {
                "textures\Terrestre\Ifrit\ifrit_grey_front.jpg",
                "textures\Terrestre\Ifrit\ifrit_grey_back.jpg"
            } },
            { "Lion numérique", "dona", {
                "textures\Terrestre\Ifrit\ifrit_lion_front.jpg",
                "textures\Terrestre\Ifrit\ifrit_lion_back.jpg"
            } },
            { "Rouge numérique", "dona", {
                "textures\Terrestre\Ifrit\ifrit_red_front.jpg",
                "textures\Terrestre\Ifrit\ifrit_red_back.jpg"
            } },
            { "Halloween limité", "hallo", {
                "textures\Terrestre\Ifrit\ifrit_hallo_front.jpg",
                "textures\Terrestre\Ifrit\ifrit_hallo_back.jpg"
            } },
            { "Sticker", "dona", {
                "textures\Terrestre\Ifrit\ifrit_sticker_front.jpg",
                "textures\Terrestre\Ifrit\ifrit_sticker_back.jpg"
            } }
        };
    };

    class I_MRAP_03_F {
        vItemSpace = 75;
        storageFee[] = { 10000, 1, 10000, 10000 };
        garageSell[] = { 500000, 1, 500000, 500000 };
        insurance[] = { 250000, 1, 250000, 250000 }; //Civil,Police,Medecin,Offor
        chopShop = 250000;
        textures[] = {
            { "Vert", "reb", {
                "\A3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa"
            } },

            { "Vert", "civ", {
                "\A3\soft_f_beta\mrap_03\data\mrap_03_ext_indp_co.paa"
            } },

            { "Armée", "cop", {
                "textures\Terrestre\Strider\Strider_Armee.jpg",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
            } },
            { "Noel", "noel", {
                "textures\Terrestre\Strider\strider-noel.jpg"
            } },
            { "GIGN", "cop", {
                "textures\Terrestre\Strider\strider-gign.jpg"
            } },
            { "126eme", "armer", {
                "textures\Terrestre\Strider\Strider126.jpg"
            } }
        };
    };


    class C_Offroad_02_unarmed_F {
        vItemSpace = 40;
        storageFee[] = { 1500, 1, 1500, 1500 };
        garageSell[] = { 7500, 1, 7500, 7500 };
        insurance[] = { 3250, 1, 3250, 3250 }; //Civil,Police,Medecin,Offor
        chopShop = 3250;
        textures[] = {
            { "Noir", "cop", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
            } },
            { "Bleu", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_blue_co.paa"
            } },
            { "Vert", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_green_co.paa"
            } },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_orange_co.paa"
            } },
            { "Rouge", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_red_co.paa"
            } },
            { "Blanc", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_white_co.paa"
            } },
            { "Armée Vigipirate", "cop", {
                "textures\Terrestre\Offroad\M4_Vigipirate.jpg",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
            } },
            { "Samu", "med", {
                "textures\Terrestre\Offroad\m4-samu.jpg",
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_int_black_co.paa"
            } }
        };
    };

    class B_T_LSV_01_unarmed_F {
        vItemSpace = 40;
        storageFee[] = { 2500, 1, 2500, 2500 };
        garageSell[] = { 25000, 1, 25000, 25000 };
        insurance[] = { 12500, 1, 12500, 12500 }; //Civil,Police,Medecin,Offor
        chopShop = 12500;
        textures[] = {
            { "Armée", "cop", {
                "textures\Terrestre\Prowler\Prowler_Armee.jpg",
                "\a3\soft_f_exp\LSV_01\Data\NATO_LSV_02_black_CO.paa"
            } },
            { "Rebel", "reb", {
                "\a3\soft_f_exp\LSV_01\Data\NATO_LSV_01_dazzle_CO.paa",
                "\a3\soft_f_exp\LSV_01\Data\NATO_LSV_01_olive_CO.paa"
            } },
            { "Armée", "armer", {
                "textures\Terrestre\Prowler\prowler.jpg",
                "\a3\soft_f_exp\LSV_01\Data\NATO_LSV_02_black_CO.paa"
            } }
        };
    };

    class C_Offroad_01_F {
        vItemSpace = 55;
        storageFee[] = { 1350, 1, 1350, 1350 };
        garageSell[] = { 7000, 1, 7000, 7000 };
        insurance[] = { 3500, 1, 3500, 3500 }; //Civil,Police,Medecin,Offor
        chopShop = 3500;
        textures[] = {
            { "Rouge", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
            { "Jaune", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
            { "Blanc", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
            { "Bleu", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
            { "Rouge bordeau", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
            { "Bleu / Blanc", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } },
            { "Noir", "cop", {
                "textures\Terrestre\Offroad\Offroad_Black.paa"
            } },
            { "Bleu foncé", "civ", {
                "textures\Terrestre\Offroad\Offroad_Blue.paa"
            } },
            { "Vert foncé", "civ", {
                "textures\Terrestre\Offroad\Offroad_Green.paa"
            } },
            { "Rouge foncé", "civ", {
                "textures\Terrestre\Offroad\Offroad_Red.paa"
            } },
            { "Blanc", "civ", {
                "textures\Terrestre\Offroad\Offroad_White.paa"
            } },
            { "Jaune d'or", "civ", {
                "textures\Terrestre\Offroad\Offroad_Yellow.paa"
            } },
            { "Armée", "cop", {
                "textures\Terrestre\Offroad\Off_Armee.jpg"
            } },
            { "Samu", "med", {
                "textures\Terrestre\Offroad\off-samu.jpg"
            } },
            { "Dégradé", "dona", {
                "textures\Terrestre\Offroad\degrade.jpg"
            } },
            { "Dépanneur", "armer", {
                "textures\Metiers\Depanneur\adac_offroad.jpg"
            } }
        };
    };

    class C_Heli_Light_01_civil_F {
        vItemSpace = -1;
        storageFee[] = { 1500, 1, 1500, 1500 };
        garageSell[] = { 7500, 1, 7500, 7500 };
        insurance[] = { 3000, 1, 3000, 3000 }; //Civil,Police,Medecin,Offor
        chopShop = 3000;
        textures[] = {
            { "Dépanneur", "armer", {
                "textures\Metiers\Depanneur\hummingbird_adac.jpg"
            } }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 5;
        storageFee[] = { 1000, 1, 1000, 1000 };
        garageSell[] = { 5000, 1, 5000, 5000};
        insurance[] = { 2500, 1, 2500, 2500 }; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = {};
    };

    class C_Kart_01_Fuel_F {
        vItemSpace = 5;
        storageFee[] = { 1000, 1, 1000, 1000 };
        garageSell[] = { 5000, 1, 5000, 5000 };
        insurance[] = { 2500, 1, 2500, 2500 }; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = {};
    };

    class C_Kart_01_Red_F {
        vItemSpace = 5;
        storageFee[] = { 1000, 1, 1000, 1000 };
        garageSell[] = { 5000, 1, 5000, 5000 };
        insurance[] = { 2500, 1, 2500, 2500 }; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = {};
    };

    class C_Kart_01_Vrana_F {
        vItemSpace = 5;
        storageFee[] = { 1000, 1, 1000, 1000 };
        garageSell[] = { 5000, 1, 5000, 5000 };
        insurance[] = { 2500, 1, 2500, 2500 }; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = {};
    };

    class C_Hatchback_01_sport_F {
        vItemSpace = 30;
        storageFee[] = { 2500, 1, 2500, 2500 };
        garageSell[] = { 25000, 1, 25000, 25000 };
        insurance[] = { 10000, 1, 10000, 10000 }; //Civil,Police,Medecin,Offor
        chopShop = 10000;
        textures[] = {
            { "Rouge", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
            { "Bleu foncé", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
            { "Noir / Blanc", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
            { "Vert", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Bleu Sport", "civ", {
                "textures\Terrestre\Hayon\sport-bleu.jpg"
            } },
            { "Rouge et noir Sport", "civ", {
                "textures\Terrestre\Hayon\rougenoir-sport.jpg"
            } },
            { "Gendarme", "cop", {
                "textures\Terrestre\Hayon\gendarmerie.jpg"
            } },
            { "Noir Sport", "civ", {
                "textures\Terrestre\Hayon\sport-noir.jpg"
            } },
            { "Orange Sport", "civ", {
                "textures\Terrestre\Hayon\orange-sport.jpg"
            } },
            { "Rouge Sport", "civ", {
                "textures\Terrestre\Hayon\rouge-sport.jpg"
            } },
            { "Noir", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
            { "Lion", "dona", {
                "textures\Terrestre\Hayon\lion.jpg"
            } },
            { "Serpent", "dona", {
                "textures\Terrestre\Hayon\serpent.jpg"
            } },
            { "Police", "cop", {
                "textures\Terrestre\Hayon\police-municipale.jpg"
            } }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 100, 1, 100, 100 };
        garageSell[] = { 350, 1, 350, 350 };
        insurance[] = { 200, 200, 200, 200 }; //Civil,Police,Medecin,Offor
        chopShop = 200;
        textures[] = {
            { "Marron", "civ", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
            { "Désert Digital", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            } },
            { "Bleu", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            } },
            { "Rouge", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            } },
            { "Blanc", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            } },
            { "Vert Digital", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            } },
            { "Camo Chasseur", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

    class O_Truck_02_fuel_F {
        vItemSpace = 125;
        storageFee[] = { 7500, 1, 7500, 7500 };
        garageSell[] = { 37500, 1, 37500, 37500 };
        insurance[] = { 20000, 1, 20000, 20000 }; //Civil,Police,Medecin,Offor
        chopShop = 20000;
        textures[] = {};
    };

    class O_Truck_02_Ammo_F {
        vItemSpace = 125;
        storageFee[] = { 7500, 1, 7500, 7500 };
        garageSell[] = { 37500, 1, 37500, 37500 };
        insurance[] = { 20000, 1, 20000, 20000 }; //Civil,Police,Medecin,Offor
        chopShop = 20000;
        textures[] = {};
    };

    class B_G_Van_01_fuel_F {
        vItemSpace = 75;
        storageFee[] = { 3000, 1, 3000, 3000 };
        garageSell[] = { 15000, 1, 15000, 15000 };
        insurance[] = { 7500, 1, 7500, 7500 };
        chopShop = 7500;
        textures[] = {
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Rouge", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 275;
        storageFee[] = { 10000, 1, 10000, 10000 };
        garageSell[] = { 50000, 1, 50000, 50000 };
        insurance[] = { 25000, 1, 25000, 25000 }; //Civil,Police,Medecin,Offor
        chopShop = 25000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
                { "Noir", "civ", {
                "textures\Terrestre\Zamak\zamak_black_front.paa",
                      "textures\Terrestre\Zamak\zamak_black_back.paa"
            } },
                { "Bleu", "civ", {
                "textures\Terrestre\Zamak\zamak_blue_front.paa",
                        "textures\Terrestre\Zamak\zamak_blue_back.paa"
            } },
                { "Vert", "civ", {
              "textures\Terrestre\Zamak\zamak_green_front.paa",
                    "textures\Terrestre\Zamak\zamak_green_back.paa"
            } },
                { "Rouge", "civ", {
              "textures\Terrestre\Zamak\zamak_red_front.paa",
                    "textures\Terrestre\Zamak\zamak_red_back.paa"
            } },
                { "Blanc", "civ", {
              "textures\Terrestre\Zamak\zamak_white_front.paa",
                    "textures\Terrestre\Zamak\zamak_white_back.paa"
            } },
                { "Jaune", "civ", {
                "textures\Terrestre\Zamak\zamak_yellow_front.paa",
                        "textures\Terrestre\Zamak\zamak_yellow_back.paa"
            } },
            { "126RIM", "armer", {
                "textures\Terrestre\Zamak\zamak-Armée1.jpg",
                "textures\Terrestre\Zamak\zamak-Armée2.jpg"
            } },
            { "Armée", "cop", {
                "textures\Terrestre\Zamak\Zamak_Armee1.jpg",
                "textures\Terrestre\Zamak\Zamak_Armee2.jpg"
            } }            
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 225;
        storageFee[] = { 8000, 1, 8000, 8000 };
        garageSell[] = { 40000, 1, 40000 40000 };
        insurance[] = { 20000, 1, 20000, 20000 }; //Civil,Police,Medecin,Offor
        chopShop = 20000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Rebelle foret", "reb", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_indp_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_indp_co.paa"
            } },
            { "Rebelle sable", "reb", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_opfor_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_opfor_co.paa"
            } },
            { "Noir", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 450;
        storageFee[] = { 1800, 1, 1800, 1800 };
        garageSell[] = { 90000, 1, 90000, 90000 };
        insurance[] = { 45000, 45000, 45000, 45000 }; //Civil,Police,Medecin,Offor
        chopShop = 45000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 30;
        storageFee[] = { 700, 1, 700, 700 };
        garageSell[] = { 3500, 1, 700, 3500 };
        insurance[] = { 2000, 1, 700, 2000 }; //Civil,Police,Medecin,Offor
        chopShop = 2000;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
            { "Vert", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
            { "Bleu", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
            { "Bleu foncé", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
            { "Jaune", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
            { "Gris", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Noir", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 40;
        storageFee[] = { 2500, 1, 2500, 2500 };
        garageSell[] = { 15000, 1, 15000, 15000 };
        insurance[] = { 7000, 1, 7000, 7000 }; //Civil,Police,Medecin,Offor
        chopShop = 7000;
        textures[] = {
            { "Rouge Bordeau", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
            { "Argent", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Rouge Sport", "civ", {
                "textures\Terrestre\SUV\rouge-sport.jpg"
            } },
            { "Blanc Sport", "civ", {
                "textures\Terrestre\SUV\blanc-sport.jpg"
            } },
            { "Gendarme", "cop", {
                "textures\Terrestre\SUV\suv-gendarmerie.jpg"
            } },
                  { "Samu", "med", {
                "textures\Terrestre\SUV\suv-samu.jpg"
            } },
                  { "Noel", "noel", {
                "textures\Terrestre\SUV\suv-noel.jpg"
            } },
                  { "Jaune Sport", "civ", {
                "textures\Terrestre\SUV\jaune-sport.jpg"
            } },
                  { "Bête déchainée", "dona", {
                "textures\Terrestre\SUV\bete-dechainee.jpg"
            } },
                  { "Police", "cop", {
                "textures\Terrestre\SUV\pm.jpg"
            } },
            { "Douanier", "cop", {
                "textures\Terrestre\SUV\suv-douane.jpg"
            } }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 125;
        storageFee[] = { 1000, 1, 1000, 1000 };
        garageSell[] = { 10000, 1, 10000, 10000 };
        insurance[] = { 2500, 2500, 2500, 2500 }; //Civil,Police,Medecin,Offor
        chopShop = 2500;
        textures[] = {
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Rouge", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 175;
        storageFee[] = { 3500, 1, 3500, 3500 };
        garageSell[] = { 17500, 1, 17500, 17500 };
        insurance[] = { 9000, 1, 9000, 9000 }; //Civil,Police,Medecin,Offor
        chopShop = 9000;
        textures[] = {
            { "Blanc", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Rouge", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } },
            { "Samu", "med", {
                "textures\Terrestre\Van\samu-van0.jpg",
                "textures\Terrestre\Van\samu-van1.jpg"
            } }
        };
    };

    //Hunter
    class B_MRAP_01_F {
        vItemSpace = 50;
        storageFee[] = { 500, 1, 500, 500 };
        garageSell[] = { 1000, 1, 1000, 1000 };
        insurance[] = { 500, 1, 500, 500 }; //Civil,Police,Medecin,Offor
        chopShop = -25000;
        textures[] = {
            { "Armée", "cop", {
                "textures\Terrestre\Hunter\Hunter_Armee.jpg",
                "\a3\soft_f\MRAP_01\Data\MRAP_01_adds_CO.paa"
            } },
            { "Samu", "med", {
                "textures\Terrestre\Hunter\hunter-samu-body.jpg",
                "textures\Terrestre\Hunter\hunter-samu-back.jpg"
            } },
            { "126eme", "armer", {
                "textures\Terrestre\Hunter\Hunter126.jpg",
                "\a3\soft_f\MRAP_01\Data\MRAP_01_adds_CO.paa"
            } }
        };
    };


    class B_Heli_Light_01_stripped_F {
        vItemSpace = -1;
        storageFee[] = { 5000, 1, 5000, 5000 };
        garageSell[] = { 25000, 1, 25000, 25000 };
        insurance[] = { 12500, 1, 12500, 12500 }; //Civil,Police,Medecin,Offor
        chopShop = 12500;
        textures[] = {
            { "Armée", "cop", {
                "\a3\air_f\Heli_Light_01\Data\Heli_Light_01_ext_BLUFOR_CO.paa"
            } },
            { "Black", "cop", {
                "textures\Aerien\Hummingbird\hb_black.paa"
            } },
            { "Blue", "civ", {
                "textures\Aerien\Hummingbird\hb_blue.paa"
            } },
            { "Green", "civ", {
                "textures\Aerien\Hummingbird\hb_green.paa"
            } },
            { "Red", "civ", {
                "textures\Aerien\Hummingbird\hb_red.paa"
            } },
            { "White", "civ", {
                "textures\Aerien\Hummingbird\hb_white.paa"
            } },
            { "Yellow", "civ", {
                "textures\Aerien\Hummingbird\hb_yellow.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Bleu civil", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Rouge civil", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furieux", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Bleu Jeans", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Levé de soleil", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Bleu ondulé", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Vert", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Noel", "noel", {
                "textures\Aerien\Hummingbird\hb_noel.jpg"
            } },
            { "BIA", "cop", {
                "textures\Aerien\Hummingbird\hb_bia.jpg"
            } },
            { "GIGN", "cop", {
                "textures\Aerien\Hummingbird\hb_gign.jpg"
            } },
            { "126eme", "armer", {
                "\a3\air_f\Heli_Light_01\Data\Heli_Light_01_ext_BLUFOR_CO.paa"
            } }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = -1;
        storageFee[] = { 1500, 1, 1500, 1500 };
        garageSell[] = { 7500, 1, 7500, 7500 };
        insurance[] = { 3500, 1, 3500, 3500 }; //Civil,Police,Medecin,Offor
        chopShop = 3500;
        textures[] = {
            { "Armée", "cop", {
                "textures\Aerien\Hummingbird\heli-police.jpg"
            } },
            { "Black", "cop", {
                "textures\Aerien\Hummingbird\hb_black.paa"
            } },
            { "Blue", "civ", {
                "textures\Aerien\Hummingbird\hb_blue.paa"
            } },
            { "Green", "civ", {
                "textures\Aerien\Hummingbird\hb_green.paa"
            } },
            { "Red", "civ", {
                "textures\Aerien\Hummingbird\hb_red.paa"
            } },
            { "White", "civ", {
                "textures\Aerien\Hummingbird\hb_white.paa"
            } },
            { "Yellow", "civ", {
                "textures\Aerien\Hummingbird\hb_yellow.paa"
            } },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            } },
            { "Bleu civil", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
            { "Rouge civil", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
            { "Furieux", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
            { "Bleu Jeans", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
            { "Levé de soleil", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
            { "Bleu ondulé", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Digi Vert", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
            { "Samu", "med", {
                "textures\Aerien\Hummingbird\SAMU.jpg"
            } },
            { "BIA", "cop", {
                "textures\Aerien\Hummingbird\hb_bia.jpg"
            } },
            { "GIGN", "cop", {
                "textures\Aerien\Hummingbird\hb_gign.jpg"
            } }
        };
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = -1;
        storageFee[] = { 2500, 1, 2500, 2500 };
        garageSell[] = { 12500, 1, 12500, 12500 };
        insurance[] = { 6000, 1, 6000, 6000}; //Civil,Police,Medecin,Offor
        chopShop = 6000;
        textures[] = {
            { "Blanc / Bleu", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            } },
            { "Digi Vert", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
            { "Desert Digital", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            } },
            { "Police", "cop", {
                "textures\Aerien\Orca\orca-police.jpg"
            } },
            { "Samu", "med", {
                "textures\Aerien\Orca\orca-samu.jpg"
            } },
            { "Dépanneur", "armer", {
                "textures\Metiers\Depanneur\orca_adac.jpg"
            } }
        };
    };

    class I_Heli_Transport_02_F {
        vItemSpace = -1;
        storageFee[] = { 10000, 1, 10000, 10000 };
        garageSell[] = { 90000, 1, 90000, 90000 };
        insurance[] = { 45000, 1, 45000, 45000 }; //Civil,Police,Medecin,Offor
        chopShop = 45000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } },
            { "126eme", "armer", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Heli_Transport_02_1_INDP_CO.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Heli_Transport_02_2_INDP_CO.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Heli_Transport_02_3_INDP_CO.paa"
            } },
            { "Armée", "cop", {
                "textures\Aerien\Mohawk\Mohawk_Armee1.jpg",
                "textures\Aerien\Mohawk\Mohawk_Armee2.jpg",
                "textures\Aerien\Mohawk\Mohawk_Armee3.jpg"
            } }            
        };
    };

    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = -1;
        storageFee[] = { 15000, 1, 15000, 15000 };
        garageSell[] = { 150000, 1, 150000, 150000 };
        insurance[] = { 75000, 1, 75000, 75000 }; //Civil,Police,Medecin,Offor
        chopShop = 75000;
        textures[] = {};
    };

    class B_SDV_01_F {
        vItemSpace = 20;
        storageFee[] = { 10000, 1, 10000 10000 };
        garageSell[] = { 50000, 1, 10000, 10000 };
        insurance[] = { 25000, 1, 25000, 25000 }; //Civil,Police,Medecin,Offor
        chopShop = 25000;
        textures[] = {};
    };

    class O_T_VTOL_02_infantry_F {
        vItemSpace = -1;
        storageFee[] = { 80000, 1, 80000, 80000 };
        garageSell[] = { 600000, 1, 600000, 600000 };
        insurance[] = { 400000, 1, 400000, 400000 }; //Civil,Police,Medecin,Offor
        chopShop = 1600000;
        textures[] = {};
    };

    class B_T_VTOL_01_infantry_F {
        vItemSpace = -1;
        storageFee[] = { 1, 1, 1, 1 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1, 1, 1, 1 }; //Civil,Police,Medecin,Offor
        chopShop = -1;
        textures[] = {};
    };

    class B_T_VTOL_01_vehicle_F {
        vItemSpace = -1;
        storageFee[] = { 1, 1, 1, 1 };
        garageSell[] = { 1, 1, 1, 1 };
        insurance[] = { 1, 1, 1, 1 }; //Civil,Police,Medecin,Offor
        chopShop = -1;
        textures[] = {};
    };

    class C_Plane_Civil_01_F {
        vItemSpace = -1;
        storageFee[] = { 5000, 1, 5000, 5000 };
        garageSell[] = { 50000, 1, 50000, 50000 };
        insurance[] = { 25000, 1, 25000, 25000 }; //Civil,Police,Medecin,Offor
        chopShop = 25000;
        textures[] = {
            { "Course (Intérieur Marron clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Course", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Ligne Rouge (Intérieur Marron clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Ligne Rouge", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Vague Bleue (Intérieur Marron clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Vague Bleue", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Tribal (Intérieur Marron clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Tribal", "civ", {
             "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } }
        };
    };

    class C_Plane_Civil_01_racing_F {
        vItemSpace = -1;
        storageFee[] = { 10000, 1, 10000, 10000 };
        garageSell[] = { 75000, 1, 75000, 75000 };
        insurance[] = { 35000, 1, 35000, 35000 }; //Civil,Police,Medecin,Offor
        chopShop = 35000;
        textures[] = {
            { "Course (Intérieur Marron clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Course", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Ligne Rouge (Intérieur Marron clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Ligne Rouge", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Vague Bleue (Intérieur Marron clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Vague Bleue", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } },
            { "Tribal (Intérieur Marron clair)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            } },
            { "Tribal", "civ", {
             "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            } }
        };
    };

    class I_Heli_light_03_unarmed_F {
        vItemSpace = -1;
        storageFee[] = { 10000, 1, 10000, 10000};
        garageSell[] = { 75000, 1, 75000, 75000 };
        insurance[] = { 35000, 1, 35000, 35000 }; //Civil,Police,Medecin,Offor
        chopShop = 35000;
        textures[] = {
        { "Rebel", "reb", {
                    "\A3\Air_F_EPB\Heli_Light_03\Data\heli_light_03_base_CO.paa"
        } },
        { "Rebel digi", "reb", {
            "\A3\Air_F_EPB\Heli_Light_03\Data\heli_light_03_base_indp_co.paa"
        } },
        { "Armée", "cop", {
            "textures\Aerien\Hellcat\Hellcat-Armee.jpg"
        } },
        { "Samu", "med", {
            "textures\Aerien\Hellcat\hellcat-samu-vip.jpg"
        } },
        { "Gendarmerie exclusif", "donacop", {
            "textures\Aerien\Hellcat\hellcat-gendarme-vip.jpg"
        } },
        { "GIGN", "cop", {
            "textures\Aerien\Hellcat\hellcat-gign.jpg"
        } },
        { "Armee", "armer", {
            "textures\Aerien\Hellcat\hellcat_armee.jpg"
        } }
        };
    };

    class O_Heli_Transport_04_box_F {
        vItemSpace = -1;
        storageFee[] = { 15000, 1, 15000, 15000};
        garageSell[] = { 100000, 1, 100000, 100000 };
        insurance[] = { 50000, 1, 50000, 50000 }; //Civil,Police,Medecin,Offor
        chopShop = 50000;
        textures[] = {};
    };

    class O_Heli_Transport_04_medevac_F {
        vItemSpace = -1;
        storageFee[] = { 3500, 1, 3500, 3500 };
        garageSell[] = { 20000, 1 20000, 20000 };
        insurance[] = { 10000, 1, 10000, 10000 }; //Civil,Police,Medecin,Offor
        chopShop = 10000;
        textures[] = {};
    };

    class B_CTRG_LSV_01_light_F {
        vItemSpace = 90;
        storageFee[] = { 5000, 1, 5000, 5000};
        garageSell[] = { 25000, 1, 25000, 25000 };
        insurance[] = { 12500, 1, 12500, 12500 }; //Civil,Police,Medecin,Offor
        chopShop = 12500;
        textures[] = {};
    };

    class C_Boat_Transport_02_F {
        vItemSpace = 125;
        storageFee[] = { 1500, 1, 1500, 1500 };
        garageSell[] = { 75000, 1, 75000, 75000 };
        insurance[] = { 30000, 1, 30000, 30000 }; //Civil,Police,Medecin,Offor
        chopShop = 30000;
        textures[] = {};
    };

    class O_T_LSV_02_unarmed_F {
        vItemSpace = 30;
        storageFee[] = { (5000, 1, 5000, 5000 };
        garageSell[] = { 25000, 1, 25000, 25000 };
        insurance[] = { 12500, 1, 12500, 12500 }; //Civil,Police,Medecin,Offor
        chopShop = 12500;
        textures[] = {};
    };

    class O_T_LSV_02_armed_F {
        vItemSpace = 30;
        storageFee[] = { 5000, 1, 5000, 5000 };
        garageSell[] = { 25000, 1, 25000, 25000 };
        insurance[] = { 12500, 1, 12500, 12500 }; //Civil,Police,Medecin,Offor
        chopShop = 12500;
        textures[] = {};
    };
};