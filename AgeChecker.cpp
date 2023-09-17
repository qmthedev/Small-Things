#include <iostream>

void votingAgeChecker(){
    int age;
    bool status = false;

    while(!status){
        std::cout << "Enter your age: ";
        std::cin >> age;

        if(age >= 61){
            std::cout << "Too old to vote" << std::endl;
        }
        else if(age >= 18 && age <= 60){
            std::cout << "You can vote" << std::endl;
        }
        else if(age >= 1 && age <= 17){
            std::cout << "You can't vote" << std::endl;
        }
        else {
            std::cout << "You aren't even born yet" << std::endl;
        }

        char userChoice;
        std::cout << "Run again?(Y/N): ";
        std::cin >> userChoice;
        userChoice = toupper(userChoice);

        if(userChoice == 'N'){
            std::cout << "Program ending..." << std::endl;
            break;
        }
    }
}