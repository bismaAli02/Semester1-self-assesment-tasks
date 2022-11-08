#include <iostream>
#include "cmath"
using namespace std;
int arr[1000];
void filling(int size)
{
    for (int i = 0; i <= size; i++)
    {
        arr[i] = i;
    }
}
void square(int size)
{
    for (int i = 0; i <= size; i++)
    {
        arr[i] = pow(arr[i], 2);
    }
}
int countDigits(int size, int d)
{
    filling(size);
    square(size);
    int count = 0;
    for (int i = 0; i <= size; i++)
    {
        int place = 1;
        while (place <= arr[i])
        {
            int temp = (arr[i] % (place * 10)) / place;
            if (temp == d)
                count++;
            place = place * 10;
        }
    }
    return count;
}
int main()
{
    int size;
    cout << "enter size : ..";
    cin >> size;
    int d;
    cout << "which digit : ";
    cin >> d;
    cout << countDigits(size, d) << endl;
}