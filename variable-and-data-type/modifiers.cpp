#include <iostream>

void modifiersDemo() {
    using namespace std;
    cout << "#Modifiers demo: " << endl;
    unsigned int unsignedInteger = -134; // 2’s Complement:  |-134| -> 4294967162
    signed int signedInteger = ~5; // 2’s Complement Reverse:  5 -> -6
    cout << "unsigned integer: " << unsignedInteger << endl;
    cout << "signed integer: " << signedInteger << endl;
    cout << endl;
}

