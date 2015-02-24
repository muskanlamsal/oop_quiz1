/*
 Program: Question 6 from quiz 1.
 Name   : Muskan Lamsal
 Roll   : 0322
 Output : Random Garbage	
*/

#include<iostream>

using namespace std;

int main()
{
    int a; int* q;
    a = 4;
    q = &a;
    cout << *(q+1);
}
