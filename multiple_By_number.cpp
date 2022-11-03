// Write a program to accept a list L1 of N integers. Accept integer M.
// Multiply each integer in the list by M and generate a new list L2. Print the lists L1 and L2.

#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printlist(list<int> v)                                                     //declare a function with no return
{
    for (list<int>::iterator itr = v.begin(); itr != v.end(); itr++)
    {
        cout << *itr << " ";
    }
}
int main()
{
    int n;                                                          //initialize variable N for size of list 1
    cout << "enter size of list 1 : ";
    cin >> n;

    int a, m;
    cout << "Enter number to multiply the list 1 : ";
    cin >> m;                                                       //take a input to multiply numbers of list 1
    cout << "enter numbers in the list 1 : ";

    list<int> v1;
    list<int> v2;

    for (int i = 0; i < n; i++)

    {                                                               //traverse and check number will divisible or not

        cin >> a;
        v1.push_back(a);
        v2.push_back(a * m);
    }

    cout << "Numbers in List 1 : ";
    printlist(v1);                                                  //call the function and print List 1
    cout << endl;

    cout << "New numbers in List 2 : ";
    printlist(v2);                                                  //call printlist function and print list 2
    cout << endl;

    return 0;
}