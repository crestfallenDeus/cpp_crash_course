// Learning characters and strings

#include <iostream>
#include <string>

using namespace std;

int main()
{
    char money = '$';

    string playerName = "David";

    cout << money << endl;

    cout << "Hello " << playerName << "!" << endl;
    cout << "Your name is " << playerName.length() << " letters long!" << endl;

    system("pause");

    return 0;
}