/*Reconstruct exercise 1 where the sum now is calculated by a function implemented in an
h- and a cpp-file*/

#include <iostream>
#include "sum.h"

using namespace std;

int main() {
    int number;
    cout << "Please input a positive number: ";
    cin >> number;

    int sum = calculateSum(number);
    cout << "Sum: " << sum << endl;

    return 0;
}