#include <iostream>

void multiplyByFive(){
    int numbers[] = {1, 2, 3, 4, 5};
    int userInput;
    std::cout << "Enter a number: ";
    std::cin >> userInput;


    for (int n : numbers){
        std::cout << userInput * numbers[n - 1] << std::endl;
    }
}