// Learning input and if statements

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string playerName;
    int age;

    cout << "What is your name, sir knight?\n";
    cin >> playerName;

    cout << "Hello Sir " << playerName << ".\n";
    cout << "How old are you?\n";
    cin >> age;

    if (age == 65)
    {
        cout << "Haha! You're old!\n";
    }

    if (age >= 100)
    {
        cout << "Man, you are way too old to play this game!\n";
    } 

    cout << "You are " << age << " years old.\n";

    system ("pause");

    return 0;
}