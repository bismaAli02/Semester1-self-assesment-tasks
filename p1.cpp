#include <iostream>
using namespace std;
void tetra(int n)
{
    float output;
    cout << "Enter any integer: ";
    cin >> n;
    output = (n * (n + 1) * (n + 2)) / 6;
    cout << "tetrahedral number: " << output;
}

main()
{
    int n;
    tetra(n);
}