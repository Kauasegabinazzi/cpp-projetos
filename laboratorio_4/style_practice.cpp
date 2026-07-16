#include <iostream>
using namespace std;

class Calc
{
public:
    int x, y;

    // function to perform addition and display result
    void showResult()
    {
        x = 10;
        y = 20;
        int res = x + y;
        cout << "result is " << res << endl;
        if (res > 25)
        {
            cout << "big number" << endl;
        }
        else
        {
            cout << "small number" << endl;
        }
    }
};
int main()
{
    Calc c;
    c.showResult();
    return 0;
}

// g++ style_practice.cpp -o style_practice.exe
//.\style_practice.exe