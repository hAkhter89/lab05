#include <iostream>
using namespace std;

class complex {
    private:
        double real;
        double imag;
        double arr[2];
    public:
        complex();
        complex(double a, double b);
        double add(double a[], double b[]);
        double subtract(double a[], double b[]);
        double multiply(double a[], double b[]);
        double add(double a[], double b);
        double subtract(double a[], double b);
        double multiply(double a[], double b);
};

complex::complex(): real(0), imag(0) {}
complex::complex(double a, double b): real(a), imag(b) {
    arr[0] = a;
    arr[1] = b;
}
double complex::add(double a[], double b[]) {
    
    arr[0];
}


int main() {
}