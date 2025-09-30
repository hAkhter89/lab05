#include <iostream>
using namespace std;

class complex {
    private:
        double real;
        double imag;
    public:
        complex();
        complex(double a, double b);
        complex add(const complex&);
        complex subtract(const complex&);
        complex multiply(const complex&);
        complex add(int r);
        complex subtract(int r);
        complex multiply(int r);
        void show();
};

complex::complex(): real(0), imag(0) {}
complex::complex(double a, double b): real(a), imag(b) {}
complex complex::add(const complex& c2) {
    return complex(real + c2.real, imag + c2.imag);
}
complex complex::subtract(const complex& c2) {
    return complex(real - c2.real, imag - c2.imag);
}

complex complex::multiply(const complex& c2) {
    return complex(real * c2.real, imag * c2.imag);
}
complex complex::add(int r) {
    return complex(real + r, imag);
}
complex complex::subtract(int r) {
    return complex(real - r, imag);
}
complex complex::multiply(int r) {
    return complex(real * r, imag);
}

void complex::show() {
    if (imag < 0) {
        cout << real << " - " << (-1*imag) << "i" << endl;
    }
    else {cout << real << " + " << imag << "i"<< endl;}
}


int main() {
    double real, imag;
    cin >> real >> imag;
    complex c1 = { real , imag };
    cin >> real >> imag;
    complex c2 = { real , imag };
    double d1;
    cin >> d1;
    complex result;
    // showing the numbers :
    cout << " c1 : "; c1.show();
    cout << " c2 : "; c2.show();
    cout << " d1 : " << d1 << endl;
    // Check the opertions where both operands are complex
    result = c1.add(c2);
    cout << " c1 + c2 : "; result.show();
    result = c1.subtract(c2);
    cout << " c1 - c2 : "; result.show();
    result = c1.multiply(c2);
    cout << " c1 * c2 : "; result.show();
    // Check the opertions where one operator is complex , other is double
    result = c1.add(d1);
    cout << " c1 + d1 : "; result.show();
    result = c1.subtract(d1);
    cout << " c1 - d1 : "; result.show();
    result = c1.multiply(d1);
    cout << " c1 * d1 : "; result.show();
}