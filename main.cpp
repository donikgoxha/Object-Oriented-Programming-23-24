#include <iostream>
using namespace std;

class Example {
private:
    int a;
    int b;

public:
    //default constructor
    Example() {
        cout << "Default Constructor is called" << endl;
        a = 0;
        b = 0;
    }

    //constructor with args
    Example(int aa, int bb) {
        cout << "Constructor with args is called" << endl;
        a = aa;
        b = bb;
    }

    ~Example() {
        cout << "Destructor is called" << endl;
    }

    //get methods
    int getA() {
        return a;
    }

    int getB() {
        return b;
    }

    //set methods
    void setA(int aa) {
        a = aa;
    }

    void setB(int bb) {
        b = bb;
    }

    void print() {
        cout << "Example: " << a << " " << b << endl;
    }
};

int main() {
    Example e;
    //e.a; //a is a private method
    Example e1(10, 19);
    Example e2;
    Example e3(100, 100);
    e.print();
    e1.print();
    e2.print();
    e2.setA(100);
    e2.setB(-10);
    e2.print();
    e3.print();
    return 0;
}
