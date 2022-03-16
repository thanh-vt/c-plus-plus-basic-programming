#include <iostream>

namespace relational_operators {
    bool equal(auto a, auto b) {
        return a == b;
    }
    bool different(auto a, auto b) {
        return a != b;
    }
}

void demoRelationalOperators() {
    using namespace std;
    using namespace relational_operators;
    cout << "#Relational Operators" << endl;
    float a = 5.2;
    bool b = true;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "a is equal b ? : " << equal(a, b) << endl;
    cout << endl;
}