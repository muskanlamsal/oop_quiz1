/*
 Program: Question 2 from quiz 1.
 Name   : Muskan Lamsal
 Roll   : 0322
 Output : Fred Jones
*/

#include<iostream>
#include<string>

using namespace std;

int main()
{

    string s;
    string* p;
    s = "Fred Jones";
    p = &s;
    cout << *p;

}
