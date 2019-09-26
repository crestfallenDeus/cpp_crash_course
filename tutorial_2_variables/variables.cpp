// Learning variables

#include <iostream>

using namespace std;

int main()
{
    // int kittens = 100;
    float kittens = 100.8f;
    kittens = kittens + 1;

    float boyKittens = 200.0f;
    float girlKittens = 200.0f;

    float playerDamage = 200.0f;
    float zombieHealth = 200.0f;
    zombieHealth = zombieHealth - playerDamage;

    cout << "You have " << kittens << " kittens!" << endl;

    cout << "You made " << boyKittens * girlKittens << " kittens!" << endl;

    cout << "Player attacks! Zombie now has " << zombieHealth << " Health!" << endl;

    system ("pause");

    return 0;
}