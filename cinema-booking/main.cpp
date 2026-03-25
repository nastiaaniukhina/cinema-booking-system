#include <iostream>
#include "application/BookSeatUseCase.h"
#include "adapters/InMemorySeatRepository.h"

int main() {
    InMemorySeatRepository repo;
    BookSeatUseCase useCase(repo);

    try {
        int seatNumber;
        std::cout << "Введіть номер місця: ";
        std::cin >> seatNumber;

        useCase.execute(seatNumber);

        std::cout << "Бронювання успішне!" << std::endl;
    } catch (const std::exception& e) {
        std::cout << "Помилка: " << e.what() << std::endl;
    }

    return 0;
}
