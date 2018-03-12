#ifndef MYCLASS_H
#define MYCLASS_H
#include <string>
#include<iostream>

using namespace std;

class MyClass
{
public:
    MyClass();
    string str;

void PrintStr()
{
    cout<<str<<endl;
}
int KolStr()
{
    return str.length();
}
void debug()
{
    cout<<str<<endl;
}

};

#endif // MYCLASS_H

