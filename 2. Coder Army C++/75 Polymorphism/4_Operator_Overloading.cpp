// Operator Overloading in C++
#include <iostream>
using namespace std;

class Complex {
    private:
        float real;
        float imag;
    public:
        Complex(float r = 0, float i = 0) : real(r), imag(i) {}
        // Overloading the + operator
        Complex operator + (const Complex& obj) {
            return Complex(real + obj.real, imag + obj.imag);
        }
        void display() {
            cout << "Real: " << real << ", Imaginary: " << imag << endl;
        }
};

int main() {
    Complex c1(3.5, 2.5), c2(1.5, 4.5);
    Complex c3 = c1 + c2;  // Calls the overloaded + operator
    c3.display();
    return 0;
}
// Note: Operator overloading is a compile time polymorphism.