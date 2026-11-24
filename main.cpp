// Варіант 4

#include <iostream>

int main() {
    int score = 0;
    int attendance = 0;

    // успішність читання
    std::cout << "enter score(0-100) and attendance (0-100): ";
    if (!(std::cin >> score >> attendance)) {
        std::cerr << "error: use space to separate two numbers \n";
        return 1;
    }

    // коректність значень
    if (score < 0 || score > 100) {
        std::cerr << "error: must be in range 0-100 \n";
        return 1;
    }
    if (attendance < 0 || attendance > 100) {
        std::cerr << "error: must be in range 0-100 \n";
        return 1;
    }

    // обчислення
    const int m = 2 * score + attendance;

    // класифікаці
    std::cout << "index m = " << m << "\n";
    std::cout << "category: ";
    if (score < 70 || attendance < 80) {
        std::cout << "none, scores too low\n";
    } else if (m < 250) {
        std::cout << "basic education \n";
    } else if (m < 280) {
        std::cout << "mid education\n";
    } else {
        std::cout << "high education\n";
    }

    return 0;
}
