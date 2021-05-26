// Copyright (c) 2021 Brian Musembi, All rights reserved
//
// Created by Brian Musembi
// Created on May 2021
// This program can calculate the area of a triangle

#include <iostream>
#include <string>

void triangleArea(float base, float height) {
    // calculate area
    float area;

    // process
    area = (base * height) /2;

    // output
    std::cout << "The area of your triangle is " << area << "cm²" << std::endl;
}


main() {
    // this function gets base(cm) and height(cm)

    std::string baseString;
    std::string heightString;
    int baseInteger;
    int heightInteger;

    // input
    std::cout << "Enter the base length of the triangle (cm): ";
    std::cin >> baseString;
    std::cout << "Enter the height of the triangle (cm): ";
    std::cin >> heightString;
    std::cout << std::endl;

    try {
        baseInteger = std::stoi(baseString.c_str());
        heightInteger = std::stoi(heightString.c_str());

        if (baseInteger > 0 && heightInteger > 0) {
            // call functions
            triangleArea(baseInteger, heightInteger);
        } else {
            std::cout << "Enter a positive integer for both dimensions, "
                      << "try again." << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Enter a number for both dimensions "
                  << "try again." << std::endl;
    }
}
