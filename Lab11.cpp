#include <iostream>
#include <cmath>
using namespace std;

class complex {
public:
    double Re, Im;
};

class calculation :public complex {
public:
    double Im_2, abs;
    void linked() {
        cout << "Now we will calculate the modulus of a complex number" << endl;
        cout << "Enter the real part of the number: ";
        cin >> Re;
        cout << "Enter the imaginary part of the number: ";
        cin >> Im;
        abs = sqrt(Re * Re + Im * Im);
        cout << "The modulus of a given complex number: " << abs << endl;
        cout << endl;
        Im_2 = (-1) * Im;
        Im_2 > 0 ? cout << "Now we will calculate the conjugate from the imaginary part of your number: " << Re << Im << "i" << endl : cout << "Теперь мы высчитаем сопряжённое из мнимой части вашего числа: " << Re << "+" << Im << "i" << endl;
        Im_2 < 0 ? cout << "The conjugate number to your number: " << Re << Im_2 << "i" << endl : cout << "Сопряжённое число к вашему числу: " << Re << "+" << Im_2 << "i" << endl;
    }
};
complex operator+(complex x, complex y) {
    complex z;
    z.Re = x.Re + y.Re;
    z.Im = x.Im + y.Im;
    return z;
}
complex operator-(complex x, complex y) {
    complex z;
    z.Re = x.Re - y.Re;
    z.Im = x.Im - y.Im;
    return z;
}
complex operator*(complex x, complex y) {
    complex z;
    z.Re = x.Re * y.Re - x.Im * y.Im;
    z.Im = x.Im * y.Re + x.Re * y.Im;
    return z;
}
complex operator/(complex x, complex y) {
    complex z;
    z.Re = (x.Re * y.Re + x.Im * y.Im) / (y.Re * y.Re + y.Im * y.Im);
    z.Im = (x.Im * y.Re - x.Re * y.Im) / (y.Re * y.Re + y.Im * y.Im);
    return z;
}
int main() {

    complex compl1, compl2, compl3;
    calculation object;
    cout << "Enter the valid part of 1 number: ";
    cin >> compl1.Re;
    cout << "Enter the imaginary part of 1 number: ";
    cin >> compl1.Im;
    cout << endl;

    cout << "Enter the real part 2 of the number: ";
    cin >> compl2.Re;
    cout << "Enter the imaginary part 2 of the number: ";
    cin >> compl2.Im;
    cout << endl;

    cout << "Adding two numbers: ";
    compl3 = compl1 + compl2;
    cout << compl3.Re << "+" << compl3.Im << "i" << endl;

    cout << "Subtracting two numbers: ";
    compl3 = compl1 - compl2;
    if (compl2.Im == compl1.Im)
        cout << compl3.Re << endl;
    else {
        if (compl2.Im > compl1.Im)
            cout << compl3.Re << compl3.Im << "i" << endl;
        else cout << compl3.Re << "+" << compl3.Im << "i" << endl;
    };

    cout << "Multiplying two numbers: ";
    compl3 = compl1 * compl2;
    cout << compl3.Re << "+" << compl3.Im << "i" << endl;

    cout << "Dividing two numbers: ";
    compl3 = compl1 / compl2;
    cout << compl3.Re << "+" << compl3.Im << "i" << endl;
    cout << endl;
    object.linked();
}
