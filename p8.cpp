#include <iostream>
#include <fstream>
#include <conio.h>
#include <cmath>
#include <iomanip>
using namespace std;
int check_place(string x)
{
    int count = 0;
    cout << "Enter spaces: ";
    cin >> x;
    for (int i = 0; x[i] != '\0'; i++)
    {
        if (x[i] == '0' && x[i + 1] == '0')
        {
            count++;
            x[i + 1] = -1;
        }
    }
    if (x == "0")
    {
        count = 1;
    }
    else if (x == "000")
    {
        count = 2;
    }
    return count;
}

main()
{
    string x;
    int res;
    res = check_place(x);
    cout << "FREE SPace: " << res;
}