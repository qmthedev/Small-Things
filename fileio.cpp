#include <iostream>
#include <string>
#include <fstream>
#include <filesystem>
namespace fs = std::filesystem;

void fileio(){
    std::string fileName;
    std::string textExtention = ".txt";
    std::string textInFile;
    fs::path textFile(fileName + textExtention);

    std::cout << "Enter file name: ";
    std::cin >> fileName;

    // Clear the newline character from the input buffer
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // create file
    std::ofstream myFile(fileName + textExtention);
    std::cout << "File created\n";

    if(myFile.is_open()){
        std::cout << "Enter file text: ";
        std::getline(std::cin, textInFile);

        // write text in file
        myFile << textInFile;
        std::cout << "File written with words\n";

        myFile.close();
        std::cout << "File closed\n";
    }
}