// Write a program to accept an integer N and calculate the sum of its digits. Please note N can have maximum 5 digits.

#include <iostream>
using namespace std;

int SumOfDigit(int i)                                   //declare a function to sum of digits
{
    int sum = 0;
    if (i > 0 && i <= 99999)                            //checking for given number is maxmium 5 digit or not
    {

        while (i != 0)
        {
            sum = sum + (i % 10);
            i = i / 10;
        }
        
    }
    else if (i <= 0)                                    //check if given number is less than 0
    {
        cout << "Enter the number greater than 0 " << endl;
        exit(0);
    }
    else
    {
        cout << "Number should not greater than 5 digit" << endl;
        exit(0);
    }
    return sum;
}

int main()
{
    int i;                                                  //declare a variable i

    cout << "Enter the number N: ";
    cin >> i;                                               //take a input of number

    cout << "Sum of Digits N  : " << SumOfDigit(i) << endl; //call a function

    return 0;
}
