#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::string userInput;
    std::ofstream outFile;

    outFile.open("CSC450_CT5_mod5.txt", std::ios::app);

    if (!outFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::cout << "Enter text for file: ";
    std::getline(std::cin, userInput);

    outFile << userInput << std::endl;

    outFile.close();
    std::cout << "Text to the file successfully." << std::endl;

    return 0;
}
