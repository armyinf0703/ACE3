class CfgVehicles {
    class LandVehicle;
    class Tank: LandVehicle {
        class NewTurret;
    };
    class Tank_F: Tank {
        class Turrets {
            class MainTurret: NewTurret {
                class Turrets {
                    class CommanderOptics;
                };
            };
        };
    };
    class Car: LandVehicle {
        class ACE_Actions {
            class ACE_MainActions {};
        };
    };
    class Car_F: Car {
        class ViewPilot;
        class NewTurret;
    };
    class Wheeled_APC_F: Car_F {
        class NewTurret;
        class Turrets {
            class MainTurret: NewTurret
            {
                class ViewOptics;
            };
        };
        class CommanderOptics;
    };
    class Air;
    class Helicopter: Air {
        class Turrets;
    };
    class Helicopter_Base_F: Helicopter {
        class Turrets: Turrets {
            class MainTurret;
        };
    };


    class rhs_bmd_base: Tank_F {
        EGVAR(refuel,fuelCapacity) = 300;
    };
    class rhs_bmp1tank_base: Tank_F {
        EGVAR(map,vehicleLightColor)[] = {0,1,0,0.1};
        EGVAR(refuel,fuelCapacity) = 460;
    };
    class rhs_bmp3tank_base: Tank_F {
        EGVAR(refuel,fuelCapacity) = 460;
    };
    class rhs_btr_base: Wheeled_APC_F {
        EGVAR(map,vehicleLightColor)[] = {0,0,1,0.1};
        EGVAR(refuel,fuelCapacity) = 300;
    };
    class rhs_a3spruttank_base: Tank_F {
        EGVAR(refuel,fuelCapacity) = 400;
    };
    class rhs_a3t72tank_base: Tank_F {
        EGVAR(refuel,fuelCapacity) = 1200;
    };
    class rhs_t72bb_tv: rhs_a3t72tank_base {
        ace_repair_hitpointPositions[] = {{"era_1_hitpoint", {0,0,0}}};
        ace_repair_hitpointGroups[] = {{"era_1_hitpoint", {"era_2_hitpoint", "era_3_hitpoint", "era_4_hitpoint", "era_5_hitpoint", "era_6_hitpoint", "era_7_hitpoint", "era_8_hitpoint", "era_9_hitpoint", "era_10_hitpoint", "era_11_hitpoint", "era_12_hitpoint", "era_13_hitpoint", "era_14_hitpoint", "era_15_hitpoint", "era_16_hitpoint", "era_17_hitpoint", "era_18_hitpoint", "era_19_hitpoint", "era_20_hitpoint", "era_21_hitpoint", "era_22_hitpoint", "era_23_hitpoint", "era_24_hitpoint", "era_25_hitpoint", "era_26_hitpoint", "era_27_hitpoint", "era_28_hitpoint", "era_29_hitpoint", "era_30_hitpoint", "era_31_hitpoint"}}};
    };
    class rhs_t72bc_tv: rhs_a3t72tank_base {
        ace_repair_hitpointPositions[] = {{"era_1_hitpoint", {0,0,0}}};
        ace_repair_hitpointGroups[] = {{"era_1_hitpoint", {"era_2_hitpoint", "era_3_hitpoint", "era_4_hitpoint", "era_5_hitpoint", "era_6_hitpoint", "era_7_hitpoint", "era_8_hitpoint", "era_9_hitpoint", "era_10_hitpoint", "era_11_hitpoint", "era_12_hitpoint", "era_13_hitpoint", "era_14_hitpoint", "era_15_hitpoint", "era_16_hitpoint", "era_17_hitpoint", "era_18_hitpoint", "era_19_hitpoint", "era_20_hitpoint", "era_21_hitpoint", "era_22_hitpoint", "era_23_hitpoint", "era_24_hitpoint", "era_25_hitpoint", "era_26_hitpoint", "era_27_hitpoint", "era_28_hitpoint", "era_29_hitpoint", "era_30_hitpoint", "era_31_hitpoint", "era_32_hitpoint"}}};
    };
    class rhs_t72bd_tv: rhs_a3t72tank_base {
        class rhs_t72bd_tv: rhs_a3t72tank_base {
            ace_repair_hitpointPositions[] = {{"era_1_hitpoint", {0,0,0}}};
            ace_repair_hitpointGroups[] = {{"era_1_hitpoint", {"era_2_hitpoint", "era_3_hitpoint", "era_4_hitpoint", "era_5_hitpoint", "era_6_hitpoint", "era_7_hitpoint", "era_8_hitpoint", "era_9_hitpoint", "era_10_hitpoint", "era_11_hitpoint", "era_12_hitpoint", "era_13_hitpoint", "era_14_hitpoint", "era_15_hitpoint", "era_16_hitpoint", "era_17_hitpoint", "era_18_hitpoint", "era_19_hitpoint", "era_20_hitpoint", "era_21_hitpoint", "era_22_hitpoint", "era_23_hitpoint", "era_24_hitpoint", "era_25_hitpoint", "era_26_hitpoint", "era_27_hitpoint", "era_28_hitpoint", "era_29_hitpoint", "era_30_hitpoint", "era_31_hitpoint", "era_32_hitpoint"}}};
        };
    };
    class rhs_tank_base: Tank_F {
        EGVAR(refuel,fuelCapacity) = 1200;
    };

    class rhs_infantry_msv_base;
    class rhs_pilot_base: rhs_infantry_msv_base {
        ace_gforcecoef = 0.55;
    };

    class O_Plane_CAS_02_F;
    class RHS_su25_base: O_Plane_CAS_02_F {
        EGVAR(refuel,fuelCapacity) = 3600;
    };

    class Helicopter_Base_H: Helicopter_Base_F {
        class EventHandlers;
    };
    class Heli_Light_02_base_F: Helicopter_Base_H {};
    class RHS_Mi8_base: Heli_Light_02_base_F {
        EGVAR(map,vehicleLightColor)[] = {1,0,0,0.1};
        EGVAR(refuel,fuelCapacity) = 3700;
        EGVAR(fastroping,enabled) = 0;
        class EventHandlers: EventHandlers {
            class RHS_EventHandlers;
        };
    };

    class RHS_Mi8amt_base: RHS_Mi8_base {
        EGVAR(fastroping,enabled) = 1;
        EGVAR(fastroping,ropeOrigins)[] = {{-1.13, 4.67, -0.89}};
        EGVAR(fastroping,onCut) = QFUNC(onCut);
        EGVAR(fastroping,onPrepare) = QFUNC(onPrepare);

        class UserActions {
            class openDoor;
            class closeDoor_L: openDoor {
                condition = QUOTE((this doorPhase 'LeftDoor' > 0.5) && {alive this} && {!(this getVariable [ARR_2(QUOTE(QEGVAR(fastroping,doorsLocked)),false)])});
            };
        };

        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                getOut = QUOTE(if !((_this select 0) getVariable [ARR_2(QUOTE(QEGVAR(fastroping,doorsLocked)),false)]) then {_this call rhs_fnc_mi8_doors});
            };
        };
    };

    class RHS_Mi8_VVS_Base: RHS_Mi8_base {};
    class RHS_Mi8mt_vvs: RHS_Mi8_VVS_Base {};
    class RHS_Mi8mt_Cargo_vvs: RHS_Mi8mt_vvs {
        EGVAR(fastroping,enabled) = 1;
        EGVAR(fastroping,ropeOrigins)[] = {{-1.13, 4.67, -0.89}};
        EGVAR(fastroping,onCut) = QFUNC(onCut);
        EGVAR(fastroping,onPrepare) = QFUNC(onPrepare);

        class UserActions {
            class openDoor_L;
            class closeDoor_L: openDoor_L {
                condition = QUOTE((this doorPhase 'LeftDoor' > 0.5) && {alive this} && {!(this getVariable [ARR_2(QUOTE(QEGVAR(fastroping,doorsLocked)),false)])});
            };
        };

        class EventHandlers: EventHandlers {
            class RHS_EventHandlers: RHS_EventHandlers {
                getOut = QUOTE(if !((_this select 0) getVariable [ARR_2(QUOTE(QEGVAR(fastroping,doorsLocked)),false)]) then {_this call rhs_fnc_mi8_doors});
            };
        };
    };

    class Heli_Attack_02_base_F: Helicopter_Base_F {};
    class rhs_mi28_base: Heli_Attack_02_base_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                EGVAR(fcs,enabled) = 0; // Note: This is still required because of inheritance from Heli_Attack_02_base_F
            };
        };
    };

    class RHS_Ka52_base: Heli_Attack_02_base_F {
        EGVAR(refuel,fuelCapacity) = 1870;
        EGVAR(fastroping,enabled) = 0;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                EGVAR(fcs,enabled) = 0; // Note: This is still required because of inheritance from Heli_Attack_02_base_F
            };
        };
    };

    class RHS_Mi24_base: Heli_Attack_02_base_F {
        EGVAR(map,vehicleLightColor)[] = {1,0,0,0.1};
        EGVAR(refuel,fuelCapacity) = 1851;
        EGVAR(fastroping,enabled) = 0;
        class Turrets: Turrets {
            class MainTurret: MainTurret {
                EGVAR(fcs,enabled) = 0; // Note: This is still required because of inheritance from Heli_Attack_02_base_F
            };
        };
    };

    class rhs_t80b: rhs_tank_base {
        EGVAR(refuel,fuelCapacity) = 1100;
    };
    class rhs_t80bv: rhs_t80b {
        ace_repair_hitpointPositions[] = {{"era_1_hitpoint", {0,0,0}}};
        ace_repair_hitpointGroups[] = {{"era_1_hitpoint", {"era_2_hitpoint", "era_3_hitpoint", "era_4_hitpoint", "era_5_hitpoint", "era_6_hitpoint", "era_7_hitpoint", "era_8_hitpoint", "era_9_hitpoint", "era_10_hitpoint", "era_11_hitpoint", "era_12_hitpoint", "era_13_hitpoint", "era_14_hitpoint", "era_15_hitpoint", "era_16_hitpoint", "era_17_hitpoint", "era_18_hitpoint", "era_19_hitpoint", "era_20_hitpoint", "era_21_hitpoint", "era_22_hitpoint", "era_23_hitpoint", "era_24_hitpoint", "era_25_hitpoint", "era_26_hitpoint", "era_27_hitpoint", "era_28_hitpoint"}}};
    };

    class Truck_F: Car_F {};
    class RHS_Ural_BaseTurret: Truck_F {
        EGVAR(refuel,fuelCapacity) = 360;
    };

    class RHS_Ural_Base: RHS_Ural_BaseTurret {};
    class RHS_Ural_MSV_Base: RHS_Ural_Base {};
    class RHS_Ural_Support_MSV_Base_01: RHS_Ural_MSV_Base {};
    class RHS_Ural_Fuel_MSV_01: RHS_Ural_Support_MSV_Base_01 {
        transportFuel = 0;
        EGVAR(refuel,hooks)[] = {{-0.05,-3.6,-0.45}};
        EGVAR(refuel,fuelCargo) = 10000;
    };

    class rhs_truck: Truck_F {
        EGVAR(refuel,fuelCapacity) = 210;
    };

    class rhs_gaz66_vmf: rhs_truck {};
    class rhs_gaz66_repair_base: rhs_gaz66_vmf {
        transportRepair = 0;
        EGVAR(repair,canRepair) = 1;
    };

    class rhs_gaz66_ammo_base: rhs_gaz66_vmf {
        transportAmmo = 0;
        ace_rearm_defaultSupply = 1200;
    };

    class MRAP_02_base_F;
    class rhs_tigr_base: MRAP_02_base_F {
        EGVAR(refuel,fuelCapacity) = 138;
    };

    class Offroad_01_base_f;
    class RHS_UAZ_Base: Offroad_01_base_f {
        EGVAR(refuel,fuelCapacity) = 78;
    };

    class APC_Tracked_02_base_F: Tank_F {
        class Turrets: Turrets {
            class MainTurret: MainTurret {};
        };
    };

    class rhs_zsutank_base: APC_Tracked_02_base_F {
        EGVAR(refuel,fuelCapacity) = 515;
    };

    class rhs_btr60_base: rhs_btr_base {
        EGVAR(refuel,fuelCapacity) = 290;
    };
    class rhs_btr70_vmf: rhs_btr_base {
        EGVAR(refuel,fuelCapacity) = 350;
    };

    class rhs_btr70_msv: rhs_btr70_vmf {};
    class rhs_btr80_msv: rhs_btr70_msv {
        EGVAR(refuel,fuelCapacity) = 300;
    };

    class rhs_2s3tank_base: Tank_F {
        EGVAR(refuel,fuelCapacity) = 830;
    };

    class OTR21_Base: Truck_F {
        EGVAR(refuel,fuelCapacity) = 500;
    };
};
