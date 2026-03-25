#pragma once
#include "../domain/Seat.h"

class SeatRepository {
public:
    virtual Seat& getSeat(int number) = 0; 
    virtual ~SeatRepository() {}
};;
