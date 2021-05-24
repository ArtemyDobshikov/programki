#include <iostream>
#include <stdlib.h>
using namespace std;

struct complex {
	double one, two;
};
class Complex {
	complex complex;
public:
	Complex(double x = 0, double y = 0) {
		complex.one = x;
		complex.two = y;
	}
	Complex operator +(const Complex& m);
	Complex operator -(const Complex& m);
	Complex operator *(const Complex& m);
	Complex operator /(const Complex& m);
	Complex count();
	void show();
};
Complex Complex::operator +(const Complex& m)
{
	Complex z;
	z.complex.one = complex.one + m.complex.one;
	z.complex.two = complex.two + m.complex.two;
	return z;
}
Complex Complex::operator -(const Complex& m) {
	Complex z;
	z.complex.one = complex.one - m.complex.one;
	z.complex.two = complex.two - m.complex.two;
	return z;
}
Complex Complex::operator *(const Complex& m) {
	Complex z;
	z.complex.one = complex.one * m.complex.one - complex.two * m.complex.two;
	z.complex.two = complex.one * m.complex.two + complex.two * m.complex.one;
	return z;
}
Complex Complex::operator /(const Complex& m) {
	Complex z;
	z.complex.one = (complex.one * m.complex.one + complex.two * m.complex.two) / (complex.one * complex.one + complex.two * complex.two);
	z.complex.two = (complex.two * m.complex.one - complex.one * m.complex.two) / (complex.one * complex.one + complex.two * complex.two);
	return z;
}
void Complex::show() {
	if (complex.two > 0)
		cout << complex.one << "+" << complex.two << "i" << endl;
	else
		cout << complex.one << endl;
}
Complex Complex::count() {
	double x, y;
	cout << "Valid part Re: ";
	cin >> x;
	cout << "Imaginary part Im: ";
	cin >> y;
	Complex a = Complex(x, y);
	return a;
}
int main() {
	Complex complex_1, complex_2, complex_3;
	cout << "The first number:" << endl;
	complex_1 = complex_1.count();
	cout << endl;
	cout << "Second number:" << endl;
	complex_2 = complex_2.count();
	cout << endl;
	cout << "Adding two complex numbers: ";
	complex_3 = complex_1 + complex_2;
	complex_3.show();
	cout << "Subtracting two complex numbers: ";
	complex_3 = complex_1 - complex_2;
	complex_3.show();
	cout << "Multiplication of two complex numbers: ";
	complex_3 = complex_1 * complex_2;
	complex_3.show();
	cout << "Division of two complex numbers: ";
	complex_3 = complex_1 / complex_2;
	complex_3.show();
}
