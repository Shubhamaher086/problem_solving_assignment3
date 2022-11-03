// Write a program to accept 5 digit integer N and calculate the sum of its first and fifth digit.

#include <iostream>
using namespace std;

int SumOfDigit(int i)
{
    int sum = 0;
    if (i >= 10000 && i <= 99999)                           //checking for only 5 digit number required
    {
        int last_digit = (i % 10);
       
        while (i >= 10)
        {
            
            i = i / 10;
        }
    }
    else if (i < 10000)                                          //check if given number is less than  5 digit number
    {
        cout << "Enter the number is not 5 digit number " << endl;
        exit(0);
    }
    else
    {
        cout << "Number should not greater than 5 digit" << endl;
        exit(0);
    }
    return i;
}

int main()
{
    int i, first_digit;

    cout << "Enter the number N: ";
    cin >> i;                                               //take input of number i
    int last_digit = (i % 10);                              //find last digit of number
    cout << "5th digit of number : " << last_digit << endl;
    first_digit = SumOfDigit(i);

    cout << "1st of number : " << first_digit << endl;      //find first digit of number from calling function

    int add = first_digit + last_digit;                     //addition of digits

    cout << "Sum of Digits   : " << add << endl;            //result

    return 0;
}
