#include <iostream>

#include "FizzBuzz.h"

void newFizzBuzz(int fizz, int buzz, int countby, int max) {
    for (int i = 0; i < max; i = i + countby) {
        if (((i + 1) % fizz == 0) && (i + 1) % buzz == 0 ) {
            std::cout << "Fizz Buzz" << '\n';
        }
        else if ((i+1) % fizz == 0) {
            std::cout << "Fizz" << '\n';
        }
        else if ((i+1) % buzz == 0) {
            std::cout << "Buzz" << '\n';
        }
        else {
            std::cout << i + 1 << '\n';
        }
    }
}

int main() {
    int fizz = 3; int buzz = 7; int countby = 4; int max = 500;
    newFizzBuzz(fizz, buzz, countby, max);
}