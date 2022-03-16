//
// Created by pysga on 15/10/2020.
//

#ifndef OPERATORS_GLOBAL_DECLARATIONS_H
#define OPERATORS_GLOBAL_DECLARATIONS_H

namespace math_operators {
    float add(float a, float b);
    float subtract(float a, float b);
    float multiply(float a, float b);
    float divide(float a, float b);
    void increase(float* a);
    void decrease(float* a);
}

namespace relational_operators {
    bool equal(auto a, auto b);
    bool different(auto a, auto b);
}

void demoMathOperators();

void demoRelationalOperators();

#endif //OPERATORS_GLOBAL_DECLARATIONS_H
