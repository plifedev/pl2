class CfgGather {
    class Resources {
        class apple {
            amount = 5;
            zones[] = { "apple_1", "apple_2", "apple_3", "apple_4" };
            item = "";
            zoneSize = 30;
        };

        class peach {
            amount = 5;
            zones[] = { "peaches_1", "peaches_2", "peaches_3", "peaches_4" };
            item = "";
            zoneSize = 30;
        };

        class heroin_unprocessed {
            amount = 3;
            zones[] = { "heroin_1" };
            item = "";
            zoneSize = 30;
        };

        class cocaine_unprocessed {
            amount = 3;
            zones[] = { "cocaine_1" };
            item = "";
            zoneSize = 30;
        };

        class cannabis {
            amount = 3;
            zones[] = { "weed_1" };
            item = "";
            zoneSize = 30;
        };
    };

    class Minerals {
        class copper_unrefined {
            amount = 2;
            zones[] = { "copper_mine" };
            item = "pickaxe";
            mined[] = {"copper_unrefined"};
            zoneSize = 30;
        };

        class iron_unrefined {
            amount = 2;
            zones[] = { "iron_mine" };
            item = "pickaxe";
            mined[] = { "iron_unrefined" };
            zoneSize = 30;
        };

        class salt_unrefined {
            amount = 2;
            zones[] = { "salt_mine" };
            item = "pickaxe";
            mined[] = { "salt_unrefined" };
            zoneSize = 30;
        };

        class sand {
            amount = 2;
            zones[] = { "sand_mine" };
            item = "pickaxe";
            mined[] = { "sand" };
            zoneSize = 30;
        };

        class diamond_uncut {
            amount = 2;
            zones[] = { "diamond_mine" };
            item = "pickaxe";
            mined[] = { "diamond_uncut" };
            zoneSize = 30;
        };

        class rock {
            amount = 2;
            zones[] = { "rock_quarry" };
            item = "pickaxe";
            mined[] = { "rock" };
            zoneSize = 30;
        };

        class oil_unprocessed {
            amount = 2;
            zones[] = { "oil_field_1", "oil_field_2" };
            item = "pickaxe";
            mined[] = { "oil_unprocessed" };
            zoneSize = 30;
        };
    };
};