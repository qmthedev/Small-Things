#include <iostream>

void userConvo(){
    while(true){
        char choice;
        std::cout << "Enter choices [A]: Greet, [B]: Speak, [C]: Farewell, [Q] Exit \n";
        std::cin >> choice;
        choice = toupper(choice);

        switch (choice)
        {
        case 'A':
            std::cout << "Hello there!\n";
            break;
        case 'B':
            std::cout << "The weather is lovely today.\n";
            break;
        case 'C':
            std::cout << "Farewell.\n";
            break;
        case 'Q':
            std::cout << "Exiting program...";
            // exit 0 = EXIT_SUCCESS, exit 1 = EXIT_FAILURE
            exit(0);
        default:
            std::cout << "Not in the options.\n";
            break;
        }
    }
}