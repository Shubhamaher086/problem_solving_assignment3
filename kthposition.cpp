// Write a program to accept a list of N integers. Accept integer K. Find the Kth smallest number in the list and its position.
#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
    int N, k;                                           //declare variable N for size and k for position
    cout << "Enter size of list : ";
    cin >> N;                                           //take input of size
    int a;
    cout << "Enter numbers in the list : ";
    vector<int> v;                                      //create a vector of numbers
    int arr1[N];                                        //declare arr1
    int arr2[N];

    for (int i = 0; i < N; i++)                         //traverse and insert numbers
    {

        cin >> a;
        arr1[i] = a;
        arr2[i] = a;
        v.push_back(a);
    }
    cout << "Enter kth number for smallest element :";
    cin >> k;                                          // take input to find kth position
    int x = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr2, arr2 + x);                               //sort array
    k = k - 1;

    int ans = arr2[k];
    for (int i = 0; i < N; i++)
    {
        if (arr1[i] == ans)
        {
            cout << k + 1 << " smallest integer is : " << arr1[i] << endl;                  //print element at kth position
            cout << "Position of " << k + 1 << " smallest integer is :" << i + 1<<endl;     //print position  of array
        }
    }
}