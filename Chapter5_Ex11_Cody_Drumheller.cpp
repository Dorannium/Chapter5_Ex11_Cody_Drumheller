/*
Title: Chapter 5 Exercise 11 - Population
File Name: Chapter5_Ex11_Cody_Drumheller
Programmer: Cody Drumheller
Date:20241202
Requirements:
Write a program that will predict the size of a population of organisms.
The program should ask the user for the starting number of organisms,
their average daily population increase (as a percentage),
and the number of days they will multiply. A loop should display the size of the population for each day.
Input Validation: Do not accept a number less than 2 for the starting size of the population.
Do not accept a negative number for average daily population increase.
Do not accept a number less than 1 for the number of days they will multiply.
*/

#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    
    int startingPopulation;
    double dailyIncreaseRate;
    int numberOfDays;

    do {
        cout << "Enter the starting number of organisms (minimum 2): ";
        cin >> startingPopulation;
        if (startingPopulation < 2) {
            cout << "Error: The starting number of organisms must be at least 2.\n";
        }
    } while (startingPopulation < 2);

    do {
        cout << "Enter the average daily population increase (as a percentage): ";
        cin >> dailyIncreaseRate;
        if (dailyIncreaseRate < 0) {
            cout << "Error: The daily population increase rate cannot be negative.\n";
        }
    } while (dailyIncreaseRate < 0);
    
    dailyIncreaseRate /= 100;

    do {
        cout << "Enter the number of days the organisms will multiply (minimum 1): ";
        cin >> numberOfDays;
        if (numberOfDays < 1) {
            cout << "Error: The number of days must be at least 1.\n";
        }
    } while (numberOfDays < 1);

    cout << "\nDay\tPopulation\n";
    cout << "-----------------\n";

    double currentPopulation = startingPopulation;
    for (int day = 1; day <= numberOfDays; ++day) {
        cout << day << "\t" << fixed << setprecision(2) << currentPopulation << "\n";
        currentPopulation += currentPopulation * dailyIncreaseRate;
    }

    return 0;
}





