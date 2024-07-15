#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

void reverseFileContents(const std::string &inputFileName, const std::string &outputFileName) {
    std::ifstream inFile(inputFileName);
    std::ofstream outFile(outputFileName);
    
    if (!inFile) {
        std::cerr << "Error opening input file." << std::endl;
        return;
    }

    if (!outFile) {
        std::cerr << "Error opening output file." << std::endl;
        return;
    }

    std::string content((std::istreambuf_iterator<char>(inFile)),
                         std::istreambuf_iterator<char>());

    std::reverse(content.begin(), content.end());

    outFile << content;

    inFile.close();
    outFile.close();
}

int main() {
    std::string userInput;
    std::ofstream outFile;

    outFile.open("CSC450_CT5_mod5.txt", std::ios::app);

    if (!outFile) {
        std::cerr << "Error opening file." << std::endl;
        return 1;
    }

    std::cout << "Enter text to the file: ";
    std::getline(std::cin, userInput);

    outFile << userInput << std::endl;

    outFile.close();
    std::cout << "Text to the file successfully." << std::endl;

    reverseFileContents("CSC450_CT5_mod5.txt", "CSC450_mod5_reverse.txt");
    std::cout << "Contents reversed and stored in CSC450_mod5_reverse.txt successfully." << std::endl;

    return 0;
}
