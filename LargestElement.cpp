// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: June 2021
// This program uses an array

#include <iostream>
#include <random>
#include <array>


template<size_t N>
int FindLargestElement(std::array<int, N> myNumbers) {
    int LargestElement = myNumbers[0];

    for (int counter = 1; counter < myNumbers.size(); counter++) {
        if (LargestElement < myNumbers[counter]) {
            LargestElement = myNumbers[counter];
        }
    }

    return LargestElement;
}

main() {
    // this function shows the Largest number in 10 random numbers

    std::array<int, 10> myNumbers;
    int aNumber = 0;
    int LargestElement = 0;

    srand((unsigned int)time(NULL));

    // input
    for (int loopCounter = 1; loopCounter < 11; loopCounter++) {
        aNumber = (rand() % 100) + 1;
        myNumbers[loopCounter] = aNumber;
        std::cout << "The element " << loopCounter
                  << " is: " << aNumber << std::endl;
    }
    std::cout << " " << std::endl;

    LargestElement = FindLargestElement(myNumbers);

    std::cout << "The largest element is: " << LargestElement << std::endl;
}
