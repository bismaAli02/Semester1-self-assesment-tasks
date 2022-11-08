#include <iostream>
using namespace std;
float cal_price(string f_name, string day, float qua)
{
    cout << "Enter fruit name: ";
    cin >> f_name;
    cout << "Enter quantity of fruit: ";
    cin >> qua;
    cout << "Enter day: ";
    cin >> day;
    float price;
    if (day == "monday" || day == "tuesday" || day == "wednesday" || day == "thursday" || day == "friday")
    {
        if (f_name == "banana")
            price = qua * 2.50;
        else if (f_name == "apple")
            price = qua * 1.20;
        else if (f_name == "orange")
            price = qua * 0.85;
        else if (f_name == "grapefruit")
            price = qua * 1.45;
        else if (f_name == "kiwi")
            price = qua * 2.70;
        else if (f_name == "pineapple")
            price = qua * 5.50;
        else if (f_name == "grapes")
            price = qua * 3.85;
    }
    else if (day == "saturday" || day == "sunday")
    {
        if (f_name == "banana")
            price = qua * 2.70;
        else if (f_name == "apple")
            price = qua * 1.25;
        else if (f_name == "orange")
            price = qua * 0.90;
        else if (f_name == "grapefruit")
            price = qua * 1.60;
        else if (f_name == "kiwi")
            price = qua * 3.00;
        else if (f_name == "pineapple")
            price = qua * 5.60;
        else if (f_name == "grapes")
            price = qua * 4.20;
    }
    return price;
}

main()
{
    string f_name, day;
    float qua, price;
    price = cal_price(f_name, day, qua);
    cout << "your total bill is: " << price;
}
