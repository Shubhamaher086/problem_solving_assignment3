//Write a program to accept a 5 digit integer N and then generates a number M by adding 1 to each digit.

#include <iostream>
using namespace std;

int incrementOfDigit(int i)                                     //declare a function for increment digit of the number
{
    int sum =0,count= 0,remainder;
    if (i >= 10000 && i <= 99999)                               //checking for only 5 digit number required
    {

        while (i > 0)
        {
            remainder = i % 10;                                 // each time num is reduced

            if (remainder != 9)
            {
                if (count == 0)
                    sum = (10 * sum) + (remainder + 1);
                else
                {
                    sum = (10 * sum) + (remainder + 2);
                    count = 0;
                }
            }
            else
            {
                sum = (10 * sum) + 0;
                count = 1;
            }
            i /= 10; 
        }

        i = sum;                                                // final number will be equal to the sum
        sum = 0;
        while (i != 0)                                          //reverse the number again
        {
            remainder = (i % 10);
            sum = (sum * 10) + remainder;

            i = i / 10;
        }
    }
    else if (i < 10000)                                      //check if given number is less than  5 digit number
    {
        cout << "Enter the 5 digit number only " << endl;
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
    int i;                                              //declare a variable i

    cout << "Enter the number N: ";
    cin >> i;                                           //take user input of number

    cout << "New number M is  : " << incrementOfDigit(i) << endl;   //calling a function

    return 0;
}
