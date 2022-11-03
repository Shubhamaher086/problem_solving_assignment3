//Write a program to accept cardinality of set A as N, and cardinality of set B as M. 
//Then accept elements of set A and set B. 
//Generate set C which is union of set A and set B, set D which is intersection set of set A and Set B. 
//Print set A, B, C, D, Cardinality of set C, Cardinality of set D.
#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;

void printSet(set<int> s)                                   //declare a function printset to print values
{
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); ++itr)
    {
        cout << *itr << " ";
    }
    cout<<endl;
    cout << "Size of Set : " << s.size() << endl;          //print size of set
}
int main()
{
    int N, M, C, D;
    cout << "Enter size of Set A : ";
    cin >> N;
    cout << "Enter size of Set B : ";
    cin >> M;
    int a, b;
    cout << "Enter numbers in Set A : ";

    set<int> set_A;                                     //declare set A,B,C,D
    set<int> set_B;
    set<int> set_C;
    set<int> set_D;

    for (int i = 0; i < N; i++)
    {
        cin >> a;                                       //traverse and insert value inside Set A;
        set_A.insert(a);
    }
    cout << "Enter numbers in Set B : ";

    for (int i = 0; i < M; i++)
    {
        cin >> b;
        set_B.insert(b);
    }
    cout << "Numbers in the Set A : ";
    printSet(set_A);                                    //calling function printset and print Set A

    cout << "Numbers in the Set B : ";
    printSet(set_B);                                    //calling function printset and print Set B

    cout << "Union of Set A and Set B is Set C : ";
    set_union(set_A.begin(), set_A.end(), set_B.begin(), set_B.end(), inserter(set_C, set_C.begin()));
    printSet(set_C);                                    //calling function printset and print Set c i.e.union of Set A&B


    cout << "Intersection of Set A and Set B is Set D: ";
    set_intersection(set_A.begin(), set_A.end(), set_B.begin(), set_B.end(), inserter(set_D, set_D.begin()));
    printSet(set_D);                                    //calling function printset and print Set D i.e.intersection of Set A&B

    return 0;
}