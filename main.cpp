#include <iostream>
#include "converter.h"

int main() {
    int decimal;
    std::string binary;

    std::cout << "Enter a decimal number (0-255): ";
    std::cin >> decimal;

    std::string bin = decimalToBinary(decimal);
    std::cout << "Binary: " << bin << "\n";

    std::cout << "Enter a binary number (8 bits): ";
    std::cin >> binary;

    int dec = binaryToDecimal(binary);
    std::cout << "Decimal: " << dec << "\n";

    return 0;
}
