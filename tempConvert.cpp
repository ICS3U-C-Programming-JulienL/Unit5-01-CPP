// Copyright (c) 2023 Julien Lamoureux All rights reserved.
// .
// Created by: Julien Lamoureux
// Date: November 24, 2023
// This program calculates temperature in celsius to fahrenheit

#include <iostream>

void Fahrenheit() {
    // declare variables
    float tempFahrenheit, tempCelsiusInt;
    std::string tempCelsiusStr;

    // get the temperature in celsius
    std ::cout
    << "This program calculates temperature in celsius to fahrenheit"
    << std::endl;
    std::cout << "What is the temperature in celsius? ";
    std::cin >> tempCelsiusStr;

    try {
        // convert temperature in celsius to a float
        tempCelsiusInt = std::stof(tempCelsiusStr);

        // calculate temperature in fahrenheit
        tempFahrenheit = 9 / 5 * tempCelsiusInt + 32;

        // display temperature in fahrenheit
        std ::cout << "The temperature in fahrenheit is "
        << tempFahrenheit << " F°" << std::endl;
    } catch (std::invalid_argument) {
        // if temp in C° is ! a number, then tell them to enter a number
        std ::cout << tempCelsiusStr << " is not a valid number. \n";
    }
}

int main() {
    // call the Fahrenheit() function
    Fahrenheit();
}
