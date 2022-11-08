#include <iostream>
using namespace std;
int arr[100];
int idx = 0;
int count = 0;
void inputA()
{
    cout << "enter index of array: ";
    cin >> idx;
    for (int i = 0; i < idx; i++)
    {
        cout << "Enter miles: ";
        cin >> arr[i];
    }
}

void progress_day()
{
    for (int x = 0; x < idx; x++)
    {
        if (arr[x] < arr[x + 1])
            count++;
    }
    cout << count;
}

main()
{
    inputA();
    progress_day();
}