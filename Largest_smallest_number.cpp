//Write a program to a accept a list of N integers. 
//Find the largest and the smallest number in the list and their respective positions in the list.

#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int n, i, max, min, index;
    cout << "Enter the size of the array : ";                           //create an array of list and take size
    cin >> n;

    cout << "Enter the elements of the array : ";
    for (i = 0; i < n; i++)                                             //insert numbers by traversing from o index
        cin >> arr[i];

    max = arr[0];
    for (i = 0; i < n; i++)                                             //compare elements to find maximum number
    {
        if (max < arr[i])
            max = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == max)                                              //check at which position maxmium number found
        {
            
            index = i+1;
        }
    }
    cout << "Position of largest element : " << index << endl;     //print position of number
    cout << "Largest element : " << max << endl;

    min = arr[0];
    for (i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == min)
        {
            index = i+1;                                              //check at which position maxmium number found
        }
    }
    cout << "Position of smallest element : " << index  << endl;    //print position of number
    cout << "Smallest element : " << min << endl;                       //print min number
    return 0;
}