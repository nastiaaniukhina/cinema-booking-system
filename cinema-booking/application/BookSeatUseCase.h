#pragma once
#include "../ports/SeatRepository.h"

class BookSeatUseCase {
private:
    SeatRepository& repository;

public:
    BookSeatUseCase(SeatRepository& repo) : repository(repo) {}

    void execute(int seatNumber) {
        Seat seat = repository.getSeat(seatNumber);
        seat.reserve();
        repository.save(seat);
    }
};