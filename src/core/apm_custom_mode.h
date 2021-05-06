#pragma once

#include <cstdint>

// Extracted values from ardupilotmega.hpp

namespace ArdupilotMega {

/** @brief A mapping of plane flight modes for custom_mode field of heartbeat. */
enum class PLANE_MODE
{
    MANUAL=0, /*  | */
    CIRCLE=1, /*  | */
    STABILIZE=2, /*  | */
    TRAINING=3, /*  | */
    ACRO=4, /*  | */
    FLY_BY_WIRE_A=5, /*  | */
    FLY_BY_WIRE_B=6, /*  | */
    CRUISE=7, /*  | */
    AUTOTUNE=8, /*  | */
    AUTO=10, /*  | */
    RTL=11, /*  | */
    LOITER=12, /*  | */
    TAKEOFF=13, /*  | */
    AVOID_ADSB=14, /*  | */
    GUIDED=15, /*  | */
    INITIALIZING=16, /*  | */
    QSTABILIZE=17, /*  | */
    QHOVER=18, /*  | */
    QLOITER=19, /*  | */
    QLAND=20, /*  | */
    QRTL=21, /*  | */
    QAUTOTUNE=22, /*  | */
    QACRO=23, /*  | */
    THERMAL=24, /*  | */
};

//! PLANE_MODE ENUM_END
constexpr auto PLANE_MODE_ENUM_END = 25;

/** @brief A mapping of copter flight modes for custom_mode field of heartbeat. */
enum class COPTER_MODE
{
    STABILIZE=0, /*  | */
    ACRO=1, /*  | */
    ALT_HOLD=2, /*  | */
    AUTO=3, /*  | */
    GUIDED=4, /*  | */
    LOITER=5, /*  | */
    RTL=6, /*  | */
    CIRCLE=7, /*  | */
    LAND=9, /*  | */
    DRIFT=11, /*  | */
    SPORT=13, /*  | */
    FLIP=14, /*  | */
    AUTOTUNE=15, /*  | */
    POSHOLD=16, /*  | */
    BRAKE=17, /*  | */
    THROW=18, /*  | */
    AVOID_ADSB=19, /*  | */
    GUIDED_NOGPS=20, /*  | */
    SMART_RTL=21, /*  | */
    FLOWHOLD=22, /*  | */
    FOLLOW=23, /*  | */
    ZIGZAG=24, /*  | */
    SYSTEMID=25, /*  | */
    AUTOROTATE=26, /*  | */
};

//! COPTER_MODE ENUM_END
constexpr auto COPTER_MODE_ENUM_END = 27;

/** @brief A mapping of sub flight modes for custom_mode field of heartbeat. */
enum class SUB_MODE
{
    STABILIZE=0, /*  | */
    ACRO=1, /*  | */
    ALT_HOLD=2, /*  | */
    AUTO=3, /*  | */
    GUIDED=4, /*  | */
    CIRCLE=7, /*  | */
    SURFACE=9, /*  | */
    POSHOLD=16, /*  | */
    MANUAL=19, /*  | */
};

//! SUB_MODE ENUM_END
constexpr auto SUB_MODE_ENUM_END = 20;

/** @brief A mapping of rover flight modes for custom_mode field of heartbeat. */
enum class ROVER_MODE
{
    MANUAL=0, /*  | */
    ACRO=1, /*  | */
    STEERING=3, /*  | */
    HOLD=4, /*  | */
    LOITER=5, /*  | */
    FOLLOW=6, /*  | */
    SIMPLE=7, /*  | */
    AUTO=10, /*  | */
    RTL=11, /*  | */
    SMART_RTL=12, /*  | */
    GUIDED=15, /*  | */
    INITIALIZING=16, /*  | */
};

//! ROVER_MODE ENUM_END
constexpr auto ROVER_MODE_ENUM_END = 17;

}