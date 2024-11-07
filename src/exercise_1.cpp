/*Implement a program that takes a positive integer as user-input and returns the sum of all posi􀆟ve integers
up to and including the given integer.
Use a while-loop for calculating the sum.*/
#include <iostream>

using namespace std;

int main() {
    //Positive integer storing the input from the user
    int number;

    //Counter
    int i = 0;

    //Sum of integers
    int sum = 0;

    //Takes a number as inout from the user
    cout << "Please input a positive number: ";
    cin >> number;

    while (i < number)
    {
        sum = sum + i;
        cout << sum << endl;
        i++;
    }
    
    return 0;
}