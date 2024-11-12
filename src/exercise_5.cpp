/*make the program ask the user for number of die throws
Next make a vector<int> and load as many throws as the user prescribed.
Now calculate the mean of die values and print it
Make the mean calculation into a function*/

#include <iostream>
#include <vector>
#include <random>
#include <numeric>

using namespace std;


int rollDie() {
    //Random number generator
    random_device rd; // Seed to the random number engine
    mt19937 gen(rd()); // Mersenne Twister 19937 generator
    uniform_int_distribution<> dist(1, 6); // Interval of possible numbers on a die
    return dist(gen);
}

int main() {
    int throws;

    return 0;
}