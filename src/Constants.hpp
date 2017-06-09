// Copyright (c) 2017 FRC Team 3512, Spartatroniks. All Rights Reserved.

#pragma once

// Includes definition for Talons and etc that connect to the RoboRIO

/* Order of subsystem constants:
 * > Motor IDs
 * > Other (i.e. miscellaneous constants)
 */

// Controller
constexpr int k_controller = 0;

// Controller axis deadband range
constexpr double k_joystickDeadband = 0.02;

/*
 * DriveTrain
 */

// DriveTrain GearBox ID
constexpr int k_leftDriveMasterID = 0;
constexpr int k_leftDriveSlaveID = 12;
constexpr int k_rightDriveMasterID = 13;
constexpr int k_rightDriveSlaveID = 14;

// CheesyDrive constants
constexpr double k_lowGearSensitive = 0.75;
constexpr double k_turnNonLinearity = 1.0;
constexpr double k_inertiaDampen = 2.5;
constexpr double k_inertiaHighTurn = 3.0;
constexpr double k_inertiaLowTurn = 3.0;
