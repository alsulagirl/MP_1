#include <iostream>
#include "MyClass.h"

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    MyClass * first = new MyClass();

    cout<< first->KolStr() <<endl;
    first->PrintStr();
    first->debug();

    return 0;
}
