#pragma once
#include <stdexcept>

class Seat {
private:
    int number;
    bool isReserved;

public:
    Seat(int number, bool isReserved = false)
        : number(number), isReserved(isReserved) {}

    int getNumber() const {
        return number;
    }

    bool getIsReserved() const {
        return isReserved;
    }

    void reserve() {
        if (isReserved) {
            throw std::runtime_error("Місце вже зайняте");
        }
        isReserved = true;
    }
};