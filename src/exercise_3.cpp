/*Write a program that takes an integer as user-input and writes all even integers up and maybe including the
given integer input. Use a while-loop for iterating the integers.*/
#include <iostream>

using namespace std;

int main() {
    int number;
    int i = 0;

    cout << "Please enter a number: ";
    cin >> number;

    while (i <= number)
    {
        if (i % 2 == 0)
        {
            cout << i << endl;
        }
        i++;
    }
    
    return 0;
}