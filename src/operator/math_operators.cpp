#include <iostream>

namespace math_operators {
    float add(float a, float b) {
        return a + b;
    }
    float subtract(float a, float b) {
        return a - b;
    }
    float multiply(float a, float b) {
        return a * b;
    }
    float divide(float a, float b) {
        return a / b;
    }
    void increase(float* a) {
        (*a)++;
    }
    void decrease(float* a) {
        (*a)--;
    }
}

void demoMathOperators() {
    using namespace std;
    cout << "#Math Operators" << endl;
    using namespace math_operators;
    float a = 54;
    float b = 9;
    float c = 5;
    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    cout << "a + b  = " << add(a, b) << endl;
    cout << "a - b  = " << subtract(a, b) << endl;
    cout << "a * b  = " << multiply(a, b) << endl;
    cout << "a / b  = " << divide(a, b) << endl;
    cout << "c: " << c << endl;
    increase(&c);
    cout << "c after increasing  = " << c << endl;
    decrease(&c);
    cout << "c after decreasing  = " << c << endl;
    cout << endl;
}
