#include <iostream>
#include "global_declaration.h"

void variablesDemo() {
    using namespace std;
    cout << "#Variables demo: " << endl;

    bool boolean = false;
    char character = 'a';
    wchar_t wideCharacter = L'ấ';
    int integer = 1;
    float fNumber = 2.5;
    double dNumber = 6.4;

    days today = TUESDAY;
    cout << "boolean: " << boolean << endl;
    cout << "wide character: " << wideCharacter << endl;
    cout << "character: " << character << endl;
    cout << "integer: " << integer << endl;
    cout << "float number: " << fNumber << endl;
    cout << "double number: " << dNumber << endl;
    cout << "monday: " << today << endl;
    cout << endl;
}

