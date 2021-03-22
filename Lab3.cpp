/*
	Артемий Добшиков
	СБС-001-О-01
	Вариант 1
*/
#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main()
{
cout << "This program calculates the modulus of the vector a = (a1, a2, a3)." << endl;
cout << endl;

double Ax;
cout << "Enter the value of the first coordinate Ax: ";
cin >> Ax;

double Ay;
cout << "Enter the value of the second coordinate Ay: ";
cin >> Ay;

double Az;
cout << "Enter the value of the third coordinate Az: ";
cin >> Az;

double vector_module;
    vector_module = sqrt(Ax * Ax + Ay * Ay + Az * Az);
    cout << "\n Vector length: " << vector_module << endl;

return 0;
}
