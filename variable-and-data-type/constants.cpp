#include <iostream>
#define PI 3.14
#define SUM(X,Y) X + Y

void constantsDemo() {
    using namespace std;
    const float G = 9.8;
    cout << "#Constants demo: " << endl;
    // using define it is pre-processor -> cannot be debugged
    cout << "PI = " << PI << endl;
    // using define with expression
    cout << "Sum of 1 and 2 = " << SUM(1,2) << endl;
    // using const it's like a variable -> can be debugged
    cout << "G = " << G << endl;
    cout << endl;
}




