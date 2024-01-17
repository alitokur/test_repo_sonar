// Filename: main.cpp

#include <iostream>
#include <cmath>

bool isPrime(int number) {
    if (number <= 1) return false;
    for (int i = 2; i <= std::sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}

int main() {
    int number;
    std::cout << "Enter a number: ";
    number = 4;

    if (isPrime(number))
        std::cout << number << " is a prime number.\n";
    else
        std::cout << number << " is not a prime number.\n";

    return 0;
}

