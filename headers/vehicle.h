#ifndef VEHICLE_H_
#define VEHICLE_H_

#include <vector>
#include "helper.h"

class Vehicle {

  public:

    int id;

    double s;
    double d;
    double v;
    double heading;

    State predicted_state;

    LaneType lane;
    LaneType lane_at_right;
    LaneType lane_at_left;

    Vehicle(const int id);

    void update_position(const double s, const double d);
    void update_speed(const double v, const double heading);
    void update_state(const State& state);
    void specify_adjacent_lanes();
};

#endif //VEHICLE_H_