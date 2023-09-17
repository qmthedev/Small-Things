#include <iostream>

double celToFah(double &cel){
    double res;
    res = cel * (9.0 / 5.0) + 32.0;
    return res;
}

double fahToCel(double &fah){
    double res;
    res = (fah - 32.0) * 5.0 / 9.0;
    return res;
}

void tempConv(){
    char choice;
    double temp;
    double res;

    std::cout << "Enter converter: [A]: Cel to Fah, [B]: Fah to Cel, [C]: exit: \n";
    std::cin >> choice;
    choice = toupper(choice);

    switch (choice)
    {
    case 'A':
        std::cout << "Enter Temperature: \n";
        std::cin >> temp;
        res = celToFah(temp);
        std::cout << "Fahrenheit: " << res << std::endl;
        break;
    case 'B':
        std::cout << "Enter Temperature: \n";
        std::cin >> temp;
        res = fahToCel(temp);
        std::cout << "Celcius: " << res << std::endl;
        break;
    case 'C':
        std::cout << "Exiting...\n";
        exit(0);
    default:
        std::cout << "Some error occured...\n";
        break;
    }
}