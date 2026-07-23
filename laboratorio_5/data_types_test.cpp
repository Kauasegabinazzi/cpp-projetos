#include <iostream>
#include <climits>

int main()
{
    int playerLevel = 25;
    float itemPrice = 19.99f;
    double preciseCalculation = 3.141592265359;
    char playerInitial = 'A';
    bool GameOver = false;
    long long largeNumber = 9223372036854775807LL;
    long long int anotherLargeNumber = 9223372036854775807LL;
    short int smallNumber = 32767;

    // std::cout << "Memory Usage Analysis: " << std::endl;
    // std::cout << "int uses : " << sizeof(int) << " bytes" << std::endl;
    // std::cout << "float uses : " << sizeof(float) << " bytes" << std::endl;
    // std::cout << "double uses : " << sizeof(double) << " bytes" << std::endl;
    // std::cout << "char uses : " << sizeof(char) << " bytes" << std::endl;
    // std::cout << "bool uses : " << sizeof(bool) << " bytes" << std::endl;
    // std::cout << "long long uses : " << sizeof(long long) << " bytes" << std::endl;
    // std::cout << "short int uses : " << sizeof(short int) << " bytes" << std::endl;
    // std::cout << "Minimum value of int: " << INT_MIN << std::endl;
    // std::cout << "Maximum value of int: " << INT_MAX << std::endl;

    std::cout << "Integer limits and overflow demonstration: " << std::endl;
    int maxInt = INT_MAX;
    std::cout << "Maximum value of int: " << maxInt << std::endl;
    std::cout << "Maximum value of int + 1: " << maxInt + 1 << std::endl; // This will cause overflow

    std::cout << "\nType casting demonstration: " << std::endl;
    double precisePrice = -3.141592265359;
    int roundedPrice = static_cast<int>(precisePrice); // Explicit type casting
    std::cout << "Original double value: " << precisePrice << std::endl;
    std::cout << "Rounded integer value after type casting: " << roundedPrice << std::endl;

    std::cout << "\nType casting demonstration: " << std::endl;
    float precisePrices = 19.99f;
    int roundedPrices = static_cast<int>(precisePrices); // Explicit type casting
    std::cout << "Original double value: " << precisePrices << std::endl;
    std::cout << "Rounded integer value after type casting: " << roundedPrices << std::endl;

    char letter = 'A';
    int letterValue = static_cast<int>(letter);
    std::cout << "Character' " << letter << " ' has ASCII value : " << letterValue << std::endl;

    char letterS = 'a';
    int letterValueS = static_cast<int>(letterS);
    std::cout << "Character' " << letterS << " ' has ASCII value : " << letterValueS << std::endl;

    bool booltType = true;
    int letterVa = static_cast<int>(booltType);
    std::cout << "bool' " << booltType << " ' has ASCII value : " << letterVa << std::endl;

    return 0;
}

// g++ data_types_test.cpp -o data_types_test.exe
//.\data_types_test.exe