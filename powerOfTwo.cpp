// Copyright (c) 2022 Van Nguyen All rights reserved.
//
// Created by: Van Nguyen
// Created on: November 4, 2022
// This program asks the user for a positive number and squares
// all of the integers from 0 to the user number using a for - loop
// It will then display the squared numbers to the user

#include <iostream>
#include <cmath>

int main() {
    // Declared Variables
    int squaredNumber, userNumberInt;
    float userNumberFloat;
    std::string userNumberString;

    // Asks user for a number
    std::cout << "Enter a whole number: ";
    std::cin >> userNumberString;

    // Displays empty line to console
    std::cout << "" << std::endl;

    // Check for exceptions
    try {
        // Converts user input into integer and float to catch invalid input
        userNumberInt = stoi(userNumberString);
        userNumberFloat = stof(userNumberString);

        // IF the user entered a negative number or a number with decimals
        if (userNumberInt < 0 || userNumberInt != userNumberFloat) {
            std::cout << userNumberString << " is not a whole number!"
            << std::endl;

        // IF the user entered valid input
        } else {
            // Squares every number from 0 to the user's number
            for (int counter = 0; counter <= userNumberInt; counter++) {
                // Calculates the "square" of each number
                squaredNumber = pow(counter, 2);

                // Displays the squared number to the user
                std::cout << counter << "^2 = " << squaredNumber << std::endl;
            }
        }

    // IF an exception occurred
    } catch (std::invalid_argument) {
        std::cout << userNumberString << " is not a whole number!" << std::endl;
    }

    // Displays "Thank You" message regardless of user input
    std::cout << "\nThank you for using the program!" << std::endl;
}
