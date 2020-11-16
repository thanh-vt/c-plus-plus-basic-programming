#include <iostream>
#include <string>

namespace A {
    typedef class Pen {
    public:
        int length;
        long cac;
        char radius;

        Pen() = default;
        Pen(int length, double weight) {
//        this->length = length;
//        this->weight = weight;
        }
    } pen;
}

namespace B {
    using namespace A;
    typedef class Box {
    public:
        double length;   // Length of a box
        double breadth;  // Breadth of a box
        double height;   // Height of a box
        pen pen;
        Box(double length, double  breath, double  height) {
            this->length = length;
            this->height = height;
            this->breadth = breath;
            this->pen = Pen();
        }
    } box;
}

using namespace std;

int main() {
    using namespace B;
    string x = "Dit con me may";
    cout << "Hello, World!" << endl;
    box box1(1.0, 2.0, 3.0);
    cout << "Box 1 length is: " << box1.length << endl;
    box *box2 = new Box(5, 4, 6);
    box2->length = 6;
    cout << "Box 2 address is: " << box2 << endl;
    cout << "Box 2 address + 1 is: " << ++box2 << endl;
    cout << "size of int is: " << sizeof(int) << endl;
    cout << "size of double is: " << sizeof(double) << endl;
    cout << "size of long is: " << sizeof(long int) << endl;
    cout << "size of string is: " << sizeof(string) << endl;
    cout << "size of Pen is: " << sizeof(pen) << endl;
    cout << "size of Box is: " << sizeof(box) << endl;
    int *a = new int;
    *a = 6;
    std::cout << "a = " << a << std::endl;
    return 0;
}