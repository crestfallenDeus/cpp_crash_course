// Learning comments and bools

#include <iostream>
#include <string>

using namespace std;

/*
    Made by David Bucio
    Copyright 2019
    This is my game
*/

// This is where the program starts
int main()
{
    for (int i = 1; i < 100; i *= 2)
    {
        cout << i << endl;
    }

    bool isGameOver = false;

    // Here is our game loop
    while (isGameOver == false)
    {
        // Pretend there are game commands here
        // Wait until player ends game
        isGameOver = true;
    }
    
    system ("pause");

    return 0;
}