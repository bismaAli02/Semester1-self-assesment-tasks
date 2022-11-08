#include <iostream>
using namespace std;
bool possible_Bonus(int a, int b)
{
    cout << "Enter your position: ";
    cin >> a;
    cout << "Enter your friend's position: ";
    cin >> b;
    for (int i = 1; i <= 6; i++)
    {
        if (a + i == b)
        {
            return true;
            break;
        }
    }
    return false;
}
main()
{
    bool res;
    int a = 0, b = 0;
    res = possible_Bonus(a, b);
    cout << res;
}