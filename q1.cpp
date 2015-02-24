/*
 Program: Question 1 from quiz 1.
 Name   : Muskan Lamsal
 Roll   : 0322
 Output : 8
*/

#include<iostream>

using namespace std;

int main()
{
	int a;
	int b;
	int* p;
	int* q;
	
	a = 3;
	p = &a;
	q = p;
	*q = *q + 5;
	
	cout << *p;
}
