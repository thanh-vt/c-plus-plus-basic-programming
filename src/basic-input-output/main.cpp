#include <iostream>
#include <string>

int main() {
    using namespace std;
    char x[200]; // can use string x instead;
    while (true) {
        cout << "Enter a string " << "(or type exit to continue)" <<": " << endl;
        cin >> x;
        const string exit = "exit";
        if (x == exit) {
            return 0;
        }
        cout << "You entered string: " << x << endl;
    }
}
