#include <iostream>
using namespace std;
float calc_damage(string type1, string type2, int attack, int defence)
{
    float damage;
    cout << "Enter your type of attack(fire/water/grass/electric): ";
    cin >> type1;
    cout << "Enter opponent's type of attack(fire/water/grass/electric): ";
    cin >> type2;
    cout << "Enter amount of attack: ";
    cin >> attack;
    cout << "Enter amount of defence: ";
    cin >> defence;
    if (type1 == "fire" && type2 == "grass")
    {
        damage = 50 * (attack / defence) * 2;
    }
    else if (type1 == "fire" && type2 == "water")
    {
        damage = 50 * (attack / defence) * 0.5;
    }
    else if (type1 == "fire" && type2 == "electric" || type1 == "electric" && type2 == "fire")
    {
        damage = 50 * (attack / defence) * 1;
    }
    else if (type1 == "water" && type2 == "grass")
    {
        damage = 50 * (attack / defence) * 0.5;
    }
    else if (type1 == "water" && type2 == "electric")
    {
        damage = 50 * (attack / defence) * 0.5;
    }
    else if (type1 == "grass" && type2 == "electric" || type1 == "electric" && type2 == "grass")
    {
        damage = 50 * (attack / defence) * 1;
    }
    else if (type1 == "grass" && type2 == "fire")
    {
        damage = 50 * (attack / defence) * 0.5;
    }
    else if (type1 == "water" && type2 == "fire")
    {
        damage = 50 * (attack / defence) * 2;
    }
    else if (type1 == "grass" && type2 == "water")
    {
        damage = 50 * (attack / defence) * 2;
    }
    else if (type1 == "electric" && type2 == "water")
    {
        damage = 50 * (attack / defence) * 2;
    }
    else
    {
        damage = 0;
    }
    return damage;
}

main()
{
    string type1, type2;
    float damage;
    int attack, defence;
    damage = calc_damage(type1, type2, attack, defence);
    cout << "Total damage is: " << damage;
}
