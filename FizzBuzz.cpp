//
// Fizz Buzz implementation.
//
#include <iostream>
#include "FizzBuzz.h"

void fizzBuzz(){
    std::cout << "Starting Fizz Buzz:\n";
    for (int i = 0; i < 100; i++) {
        if (((i + 1) % 3 == 0) && (i + 1) % 5 == 0 ) {
            std::cout << "Fizz Buzz" << '\n';
        }
        else if ((i+1) % 3 == 0) {
            std::cout << "Fizz" << '\n';
        }
        else if ((i+1) % 5 == 0) {
            std::cout << "Buzz" << '\n';
        }
        else {
            std::cout << i + 1 << '\n';
        }

    }
}