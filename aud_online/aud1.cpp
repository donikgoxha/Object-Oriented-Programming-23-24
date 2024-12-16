#include <iostream>
#include <cmath>
using namespace std;

class Triangle {
private:
    int a, b, c;

public:
    //constructor 2in1
    Triangle(int aa = 5, int bb = 4, int cc = 3) {
        cout << "Triangle constructor" << endl;
        a = aa;
        b = bb;
        c = cc;
    }

    ~Triangle() {
        cout << "Triangle destructor" << endl;
    }

    int perimeter() {
        return a + b + c;
    }

    double area() {
        float s = (a + b + c) / 2.0;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }

    void print() {
        cout << "Triangle with sides: " << a << " " << b << " " << c << endl;
        cout << "Perimeter: " << perimeter() << endl;
        cout << "Area: " << area() << endl;
    }
};

int main() {
    Triangle t;
    t.print();
    Triangle t1(6, 6, 6);
    t1.print();
    Triangle t2(15, 9, 12);
    t2.print();
    return 0;
}
