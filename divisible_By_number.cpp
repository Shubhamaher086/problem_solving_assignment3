//Write a program to accept a list L1 of N integers. 
//Accept integer D. Generate list L2 such that it contains only those integers from list L1 which are divisible by D. 
//Calculate the size of list L2. Print the list L1, N, D, list L2 and its size.

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printlist(list<int> v)                                         //declare a function with no return
{
    for (list<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}
int main()
{
    int N;                                                          //initialize variable N for size of list 1
    cout << "Enter size of List 1 : ";
    cin >> N;

    int a, D;
    cout << "Enter number who divide list 1 numbers :" ;            //take a input of divisor
    cin >> D;
    cout << "Enter numbers in the list 1 : ";

    list<int> v1;                                                   
    list<int> v2;

    for (int i = 0; i < N; i++)

    {                                                           //traverse and check number will divisible or not

        cin >> a;
        v1.push_back(a);
        if (a % D == 0)
        {
            v2.push_back(a);
        }
    }

    cout << "List 1 : ";
    printlist(v1);                                              //call the function and print List 1
    cout << endl;

    cout << "Size of list N : " << N << endl;
    cout << "Number who divide List 1 : " << D << endl;

    cout << "number divided by D store in List 2 : ";
    printlist(v2);                                              //call printlist function and print list 2
    cout << endl;

    cout << "Size of List 2 = " << v2.size()<<endl;

    return 0;
}