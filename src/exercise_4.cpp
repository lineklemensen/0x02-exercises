/*Write a program that takes a positive integer as input and 
writes a triangle of asterixis (*), where the height
of triangle is the input number.
Use a while-loop for iteration corresponding to each 
row and a while loop for each row.*/
#include <iostream>

using namespace std;


int main() {
    //Positive integer storing the input from the user
    int height;

    //Takes a number as input from the user
    cout << "Please input a positive number for the height of the triangle: ";
    cin >> height;

    int row = 1;

    while (row <= height)
    {
        int column = 1;

        while (row >= column)
        {
            cout << "*";
            column++;
        }
        cout << endl;
        row ++;
    }    
   
    return 0;
}