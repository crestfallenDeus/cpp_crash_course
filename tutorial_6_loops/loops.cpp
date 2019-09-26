// Learning loops

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int counter_1 = 0;
    
    while (counter_1 < 10)
    {
        counter_1++;
        cout << "While, ha! " << counter_1 << "\n";
    }

    for (int counter_2 = 0; counter_2 < 10; counter_2++)
    {
        cout << "For, ha! " << counter_2 + 1 << "\n";
    }

    int counter_3 = 0;

    do
    {
        counter_3++;
        cout << "Do, ha! " << counter_3 << "\n";
    }

    while (counter_3 < 10);

    system ("pause");
    return 0;
}