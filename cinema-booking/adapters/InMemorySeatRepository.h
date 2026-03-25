#pragma once
#include <map>
#include "../ports/SeatRepository.h"

class InMemorySeatRepository : public SeatRepository {
private:
    std::map<int, Seat> seats;

public:
    InMemorySeatRepository() {
        seats[1] = Seat(1);
        seats[2] = Seat(2, true); 
        seats[3] = Seat(3);
    }

    Seat& getSeat(int number) override {
        if (seats.find(number) == seats.end()) {
            throw std::runtime_error("Місце не знайдено");
        }
        return seats.at(number);
    }
};
