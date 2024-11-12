/*make the program ask the user for number of die throws
Next make a vector<int> and load as many throws as the user prescribed.
Now calculate the mean of die values and print it
Make the mean calculation into a function*/

#include <iostream>
#include <vector>
#include <random>
#include <numeric>

using namespace std;


// Function to simulate a die roll
int rollDie() {
    //Random number generator
    random_device rd; // Seed to the random number engine
    mt19937 gen(rd()); // Mersenne Twister 19937 generator
    uniform_int_distribution<> dist(1, 6); // Interval of possible numbers on a die
    return dist(gen);
}

// Function to calculate the mean of a vector
double calculateMean (const vector<int>& rolls) {
    // Calculate the sum of all throws
    int sum = accumulate(rolls.begin(), rolls.end(), 0);
    //Divide the sum by the number of throws to calculate the mean
    return static_cast<double>(sum) / rolls.size();
}

int main() {
    int throws;

    cout << "Enter the number of die throws: ";
    cin >> throws;

    // Vector to store the die rolls
    vector<int> rolls;

    // Execute the die roll simulation and store the results in the vector
    for (int i = 0; i < throws; i++) {
        rolls.push_back(rollDie());
    }

    return 0;
}