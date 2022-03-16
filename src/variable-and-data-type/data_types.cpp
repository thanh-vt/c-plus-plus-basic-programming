#include <iostream>
#include "global_declaration.h"

// shared global variable
int X = 6;

void dataTypesDemo() {
    using namespace std;
    cout << "#Data Types demo: " << endl;
    cout << "Size of bool: " << sizeof(bool) << endl;
    cout << "Size of char: " << sizeof(char) << endl;
    cout << "Size of short int: " << sizeof(short int) << endl;
    cout << "Size of int: " << sizeof(int) << endl;
    cout << "Size of long int: " << sizeof(long int) << endl;
    cout << "Size of long long int: " << sizeof(long long int) << endl;
    cout << "Size of wide char: " << sizeof(wchar_t) << endl;
    cout << endl;
}

