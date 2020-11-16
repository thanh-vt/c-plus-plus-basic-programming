#include <iostream>
#include "global_declaration.h"

int main() {
    variablesDemo();
    dataTypesDemo();
    scopeDemo();
    storageClassesDemo();
    constantsDemo();
    modifiersDemo();
    std::cout << "X: " << X << std::endl;
    for (int i = 0; i < 5; i++) {
        increaseStaticVar();
    }
    return 0;
}
