// Learning if else

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

    if (age <= 3)
    {
        cout << "You are lying!\n";
    }

    else if (age < 12)
    {
        cout << "You are too young to play!\n";
    }

    else if (age > 90)
    {
        cout << "You are too old to play!\n";
    }

    else
    {
        cout << "You are old enough to play!\n";
    }

    system ("pause");
    
    return 0;
}