// Copyright (c) 2021 Luke Beausoleil All rights reserved
//
// Created by: Luke Beausoleil
// Created on: May 2021
// This program finds the square of all integers from 0 - an inputted integer

#include <iostream>
#include <string>
#include <cmath>

int main() {
    // this function finds the squares

    // variables
    std::string numberAsString;
    float number;
    int integer;
    int result;
    int loopCounter;

    // input
    std::cout << "Enter an inter ≥ 0: ";
    std::cin >> numberAsString;

    // process & output
    try {
        float number = std::stof(numberAsString);
        if (number == 0) {
            std::cout << "\n0² = 0" << std::endl;
        } else if (number > 0) {
            int integer = std::stoi(numberAsString);
            if (integer == number) {
                std::cout << "" << std::endl;
                for (loopCounter = 0; loopCounter < integer + 1;
                      loopCounter++) {
                    result = pow(loopCounter, 2);
                    std::cout << loopCounter << "² = " << result << std::endl;
                }
            } else {
                std::cout << "\nInvalid. Enter an integer ≥ 0" << std::endl;
            }
        } else {
            std::cout << "\nInvalid. Enter an integer ≥ 0" << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "\nInvalid. Enter an integer ≥ 0" << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
