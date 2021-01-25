// Copyright (C) 2021 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on January 2021
// This program calculates the sum of two variables


#include <iostream>


int main() {
    // this function calculates the sum of two variables

    int first;
    int second;
    int sum;

    // input
    std::cout << "Enter first number: ";
    std::cin >> first;

    std::cout << "Enter second number: ";
    std::cin >> second;

    // process
    sum = first + second;

    // output
    std::cout << first << " + " << second << " = " << sum << std::endl;
}
