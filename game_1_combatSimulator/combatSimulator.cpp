// Game Challenge: Combat Simulator

#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main()
{
    // Seed random number generator
    default_random_engine randomEngine (time (NULL));
    uniform_real_distribution <float> attack (0.0f, 1.0f);
    float attackResult;

    // Initialize turn
    char turn = 'H';
    
    // Human properties
    int startHumans;
    float humanAccuracy = 0.6f;
    float humanDamage =  200.0f;
    float maxHealth_human = 250.0f;
    float currentHealth_human = maxHealth_human;

    // Skeleton properties
    int startSkeletons;
    float skeletonAccuracy = 0.2f;
    float skeletonDamage = 40.0f;
    float maxHealth_skeleton = 50.0f;
    float currentHealth_skeleton = maxHealth_skeleton;

    // User defined properties
    int numSkeletons;
    int numHumans;

    // Display game title
    cout << "*** Skeletons Vs. Humans! ***\n\n";

    // Get number of humans
    cout << "Enter the number of humans: ";
    cin >> numHumans;
    startHumans = numHumans;

    // Get number of skeletons
    cout << "Enter the number of skeletons: ";
    cin >> numSkeletons;
    startSkeletons = numSkeletons;

    // Display start of combat simulation
    cout << "\nThe battle commences!\n";
    cout << "<..............................!\n";

    // Combat simulator
    while ((numHumans > 0) && (numSkeletons > 0))
    {
        // Get initial attack result
        attackResult = attack (randomEngine);

        // Start human attack turn
        if (turn == 'H')
        {
            // Check if attack was successful
            if (attackResult <= humanAccuracy)
            {
                currentHealth_skeleton -= humanDamage;

                // Check if skeleton died
                if (currentHealth_skeleton < 0)
                {
                    // Kill skeleton and reset
                    numSkeletons--;
                    currentHealth_skeleton = maxHealth_skeleton;
                }
            }

            turn = 'S';
        }

        else
        {
            // Check if attack was successful
            if (attackResult <= skeletonAccuracy)
            {
                currentHealth_human -= skeletonDamage;

                // Check if human died
                if (currentHealth_human < 0)
                {
                    // Kill human and reset
                    numHumans--;
                    currentHealth_human = maxHealth_human;
                }
            }

            turn = 'H';
        }
    }

    // Display end of combat simulation
    cout << "The battle ceases!\n\n";

    // Display results if humans won
    if (numHumans > 0)
    {
        cout << "The humans won!\n";
        cout << "Only " << numHumans << " humans survived!\n\n";
    }

    // Display results if skeletons won
    else
    {
        cout << "The skeletons won!\n";
        cout << "Only " << numSkeletons << " skeletons survived!\n\n";
    }

    // Display deathtoll
    cout << "Overall, ";
    cout << startHumans - numHumans << " humans and ";
    cout << startSkeletons - numSkeletons << " skeletons ";
    cout << "died on the battlefield!";

    system ("pause");

    return 0;
}