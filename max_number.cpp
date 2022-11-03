// Write a program to accept an integer N and generate an integer M which is formed by reversing the digits of N. 
// Please note N can have maximum 5 digits. 
// Print the numbers N and M. 
// Compare N with M and print the result.

#include <iostream>
using namespace std;

int reverseNumber(int i)                                        //declare a function for reverse the number
{
    int M = 0;
    int remainder;
    if (i > 0 && i <= 99999)                                   //checking for given number is maxmium 5 digit or not
    {

        while (i != 0)
        {
            remainder = (i % 10);
            M = (M * 10) + remainder;

            i = i / 10;
        }
    }
    else if (i <= 0)                                           //check if given number is less than 0
    {
        cout << "Enter the number greater than 0 " << endl;
        exit(0);
    }
    else
    {
        cout << "Number should not greater than 5 digit" << endl;
        exit(0);
    }
    return M;
}

void maxNumber(int num1, int num2)                    //declare function to check greater number from original and reverse number
{
    if (num1 == num2)
    {
        cout << "Both Numbers Equal" << endl;
    }
    else if (num1 > num2)
    {
        cout << "M is greater than N " << endl;
    }
    else
    {
        cout << "N is greater than M " << endl;
    }
}

int main()
{
    int N, result;                                          //declare a variable N and result

    cout << "Enter the number N : ";
    cin >> N;                                               //take input of variable

    result = reverseNumber(N);                              //calling function and store reverse value inside result

    cout << "Reverse of number M : " << result << endl;

    maxNumber(result, N);                                   // call maxNumber function 

    return 0;
}
