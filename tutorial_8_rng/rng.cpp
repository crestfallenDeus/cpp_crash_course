// Learning random number generator

#include <iostream>
#include <string>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    default_random_engine randomGenerator (time (0));
    // uniform_int_distribution <int> diceRoll (1, 6);
    uniform_real_distribution <float> attackChance (0.0f, 1.0f);

    // cout << "I am rolling a " << diceRoll (randomGenerator) << "\n";
    // cout << "I am rolling a " << diceRoll (randomGenerator) << "\n";
    // cout << "I am rolling a " << diceRoll (randomGenerator) << "\n";

    // cout << "I am attacking! " << attackChance (randomGenerator) << "\n";
    // cout << "I am attacking! " << attackChance (randomGenerator) << "\n";
    // cout << "I am attacking! " << attackChance (randomGenerator) << "\n";

    cout << "I am attacking a snake! \n";

    float attack = attackChance (randomGenerator);

    if (attack < 0.03f)
    {
        cout << "Smash! " << attack << "\n";
        cout << "Yay! I hit the snake!\n";
    }

    else
    {
        cout << "Woosh! " << attack << "\n";
        cout << "No! I missed the snake!\n";
    }

    system ("pause");
    
    return 0;
}