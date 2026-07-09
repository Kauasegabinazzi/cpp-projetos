#include <iostream>
#include <iomanip>
#include <string>

// additional libraries
#include <vector>    // for arrays
#include <algorithm> // for loops

using namespace std;

int main()
{
    cout << "==================================" << endl;
    cout << "      MULTI COMPONENT             " << endl;
    cout << "==================================" << endl;
    cout << "This program will demonstrate the use of multiple components in C++." << endl;

    // component 1: Basic information display

    cout << "Component 1: Basic information display" << endl;

    string name = "C++ Programing";
    string version = "C++17";
    string creator = "Kauã Segabinazzi";
    int year = 2026;

    cout << "Name: " << name << endl;
    cout << "Version: " << version << endl;
    cout << "Creator: " << creator << endl;
    cout << "Year: " << year << endl;

    // component 2: Formatted numeric output

    cout << "\nComponent 2: Formatted numeric output" << endl;
    double pi = 3.14159265358979323846;
    double e = 2.71828182845904523536;
    double golden_ratio = 1.61803398874989484820;

    cout << "Default display " << endl;
    cout << "Pi: " << pi << endl;
    cout << "Euler's number: " << e << endl;
    cout << "Golden ratio: " << golden_ratio << endl;

    cout << "\nFormatted 2 decimal display" << endl;
    cout << fixed << setprecision(2);
    cout << "Pi: " << pi << endl;
    cout << "Euler's number: " << e << endl;
    cout << "Golden ratio: " << golden_ratio << endl;

    cout << "\nFormatted 6 decimal display" << endl;
    cout << fixed << setprecision(6);
    cout << "Pi: " << pi << endl;
    cout << "Euler's number: " << e << endl;
    cout << "Golden ratio: " << golden_ratio << endl;

    // reset to default formatting
    cout.unsetf(ios::fixed);
    cout << setprecision(6);

    // component 3: table display
    cout << "\nComponent 3: Table display" << endl;
    // table header
    cout << left << setw(15) << "Data Type" << setw(20) << "Size (bytes)" << setw(20) << "Value range" << endl;
    cout << string(55, '-') << endl;

    // table rows
    // table rows
    cout << left << setw(15) << "int" << left << setw(20) << sizeof(int) << left << setw(20) << "-2^31 to 2^31-1" << endl;
    cout << left << setw(15) << "double" << left << setw(20) << sizeof(double) << left << setw(20) << "1.7e^308" << endl;
    cout << left << setw(15) << "char" << left << setw(20) << sizeof(char) << left << setw(20) << "-128 to 127" << endl;
    cout << left << setw(15) << "bool" << left << setw(20) << sizeof(bool) << left << setw(20) << "true or false" << endl;

    //component 4
    cout << "\nComponent 4: Program info" << endl;

    string currentDate = "2026-07-09";
    string userName = "Kauã Segabinazzi";
    int linesOfCode = 100;

    cout << "Author: " << userName << endl;
    cout << "Date: " << currentDate << endl;
    cout << "Lines of Code: " << linesOfCode << endl;

    cout << "Completion [";
    int progress = 80; // Example progress percentage
    for(int i=0; i<20; i++) {
        if(i < progress / 5) {
            cout << "=";
        } else {
            cout << " ";
        }
    }
    cout << "]" << progress << "%" << endl;

    cout << "\nProgram completed successfully." << endl;

    
    return 0;
}

// g++ multi_component.cpp -o multi_component.exe
//.\multi_component.exe