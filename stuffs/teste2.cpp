#include <iostream>
using namespace std;

int greetUser() {
    cout << "Hello, User!" << endl; //prints text to the console
    return 0;
}

int greetUser2(int value) {
    cout << "Hello, User!" << endl; //prints text to the console
    return value + 10;
}


int main() {
    int number = 0;
    double radius = 5.0;
    double area = 3.14159 * radius * radius;
    greetUser();
    int result = greetUser2(32);
    cout << "result :  " << result << endl;
    return number;
}

/// @test return lalalala
/// @param numbers llallla


//g++ test.cpp -o test.exe
//.\test.exe