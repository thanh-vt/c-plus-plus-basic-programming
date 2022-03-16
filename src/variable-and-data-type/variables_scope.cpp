#include <iostream>

extern int X;

void  scopeDemo() {
    using namespace std;
    cout << "#Scope demo: " << endl;
    X = 1;
    cout << endl;
}




