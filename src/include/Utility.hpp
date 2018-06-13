// Copyright (c) 2017 FRC Team 3512, Spartatroniks. All Rights Reserved.

#pragma once

// Provides generic utility functions

// Zeroes value if it's inside deadband range, and rescales values outside of it
double ApplyDeadband(double value, double deadband);

// Limits 'value' to within +- 'limit' (limit should be positive)
template <class T>
T Limit(T value, T limit) {
    if (value > limit) {
        return limit;
    } else if (value < -limit) {
        return -limit;
    } else {
        return value;
    }
}

/* Rescales joystick value from [1..-1] to [0..rangeMax] (this includes flipping
 * the range)
 */
double JoystickRescale(double value, double rangeMax);
