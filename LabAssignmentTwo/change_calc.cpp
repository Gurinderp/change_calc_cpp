#include <iostream>

void inputChangeModule(int& amountQuarters, int& amountDimes, int& amountNickels, int& amountPennies);
void processingChangeModule(int amountQuarters, int amountDimes, int amountNickels, int amountPennies, double& totalChange);
void outputTotalModule(int amountQuarters, int amountDimes, int amountNickels, int amountPennies, double totalChange);

int main() {
    int amountQuarters; // Quarter amount input by user.
    int amountDimes; // Dime amount input by user.
    int amountNickels; // Nickel amount input by user.
    int amountPennies; // Penny amount input by user.
    double totalChange; // Total sum of quarters, dimes, nickels, and pennies calculated by processing module.


    inputChangeModule(amountQuarters, amountDimes, amountNickels, amountPennies);
    processingChangeModule(amountQuarters, amountDimes, amountNickels, amountPennies, totalChange);
    outputTotalModule(amountQuarters, amountDimes, amountNickels, amountPennies, totalChange);
}


// Input Module that collects change amount based on user input..
void inputChangeModule(int& amountQuarters, int& amountDimes, int& amountNickels, int& amountPennies) {
    std::cout << "Enter the number of Quarters: ";
    std::cin >> amountQuarters;
    std::cout << "Enter the number of Dimes: ";
    std::cin >> amountDimes;
    std::cout << "Enter the number of Nickels: ";
    std::cin >> amountNickels;
    std::cout << "Enter the number of Pennies: ";
    std::cin >> amountPennies;
};


// Processing Module that processes the amounts collected by the Input Module and stores the sum in the totalChange variable.
// Processing Module uses sum variables (sumQuarters, sumDimes, etc.) to store the calculated sums of the different change.
void processingChangeModule(int amountQuarters, int amountDimes, int amountNickels, int amountPennies, double& totalChange) {
    double sumQuarters = amountQuarters * 0.25;
    double sumDimes = amountDimes * 0.1;
    double sumNickels = amountNickels * 0.05;
    double sumPennies = amountPennies * 0.01;
    totalChange = sumQuarters + sumDimes + sumNickels + sumPennies;
};


// Output Module that displays the amount of quarters, dimes, nickels, and pennies, and displays the sum.
void outputTotalModule(int amountQuarters, int amountDimes, int amountNickels, int amountPennies, double totalChange) {
    std::cout << "With "
        << amountQuarters
        << " Quarter(s) "
        << amountDimes
        << " Dime(s) "
        << amountNickels
        << " Nickel(s) "
        << amountPennies
        << " Penn(y/ies) "
        << " Your total is: $ " 
        << totalChange 
        << std::endl;
};