#include <iostream>
#include <fstream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;

main()
{
    int x, y, x1, y1, x2, y2;
    cout << "Enter x1: ";
    cin >> x1;
    cout << "Enter y1: ";
    cin >> y1;
    cout << "Enter x2: ";
    cin >> x2;
    cout << "Enter y2: ";
    cin >> y2;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;

    if ((x == x1 || x == x2) && (y >= y1 && y <= y2))
    {
        cout << "on the border";
    }
    else if ((y == y1 || y == y2) && (x >= x1 && x <= x2))
    {
        cout << "on the border: ";
    }
    else if ((x > x1 && x < x2) && (y > y1 && y < y2))
    {
        cout << "point inside the border ";
    }
    else
    {
        cout << "Outside the border ";
    }
}