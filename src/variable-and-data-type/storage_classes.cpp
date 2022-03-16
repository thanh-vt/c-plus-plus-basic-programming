#include <iostream>



static int Y = 5; // other files cannot use this variable

void storageClassesDemo() {
    using namespace std;
    cout << "#Storage Classes demo: " << endl;
    auto a = 1;
    auto b = "Hello";
    auto c = 5.3;
    auto d = 'c';
    cout << "Type of a: " << typeid(a).name() << endl;
    cout << "Type of b: " << typeid(b).name() << endl;
    cout << "Type of c: " << typeid(c).name() << endl;
    cout << "Type of d: " << typeid(d).name() << endl;
    // register deprecated in C++11, removed in C++17
    // register int e = 1;
    cout << "Y: " << Y << endl;
    cout << endl;
}

void increaseStaticVar() {
    using namespace std;
    static int z = 0;
    cout << "z before increasing: " << z << endl;
    z++;
    cout << "z after increasing: " << z << endl;
}
