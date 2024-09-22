// 22.09.24OOP CLASS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
using namespace std;

class fraction 
{
private:
    int x;
    int y;
public:
    int GetX() 
    {
        return x;
    }
    int GetY() 
    {
        return y;
    }
    void SetX(int _x) 
    {
        x = _x;
    }
    void SetY(int _y) 
    {
        y = _y;
    }
    void Print() 
    {
        if (y != 0) 
        {
            cout << "result x/y " << x / y << endl;
        }
        else 
        {
            cout << "error" << endl;
        }
    }
    void Input(int x2, int y2) 
    {
        SetX(x2);
        SetY(y2);
    }
    void Inputrand() 
    {
        srand(time(0));
        SetX(1 + rand() % (100 - 1 + 1));
        SetY(1 + rand() % (100 - 1 + 1));
    }
};
int main()
{
    fraction x2;
    x2.Input(4, 2);
    x2.Print();

    fraction y2;
    y2.Inputrand();
    y2.Print();
}