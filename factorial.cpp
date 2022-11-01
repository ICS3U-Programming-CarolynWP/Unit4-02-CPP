// Copyright Carolyn
// Created by: Carolyn Webster Pless
// Created on: 22/10/31
// Asks the user for an integer then
// Uses a do while loop to determine
// The product

#include <iostream>
#include <string>

int main() {
    // Variables
    std::string userNumber;
    int userInteger;
    // Counter
    int counter = 0;
    // Product
    int product = 1;
    float userFloat;

    // The title of the program
    std::cout << "Product of Numbers\n";

    // User input
    std::cout << "Please enter an integer: ";
    std::cin >> userNumber;

    // Try Catch statement to make sure the answer is an integer
    try {
        userInteger = std::stoi(userNumber);
        float userFloat = stof(userNumber);

        // IF statement to make sure the user input is a whole number
        if (userFloat != static_cast<int>(userFloat) || userFloat <= 0) {
            std::cout << "Please enter an integer!\n";
        } else {
            // IF statement to make sure the input is positive
            if (userInteger < 0) {
                std::cout << "Please enter a positive number!\n";
            } else {
                // Do While loop
                do {
                    counter = counter + 1;
                    product = product * counter;
                    std::cout << counter << "x ";
                    std::cout << counter << "x ";
                } while (counter < userInteger);

                // Ending statement
                std::cout << "The product of all the numbers is "
                << product << "\n";
            }
        }
        // if the user does not enter an integer
    } catch (std::invalid_argument) {
        std::cout << "Please do not enter a string :(\n";
    }
}
