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
do {
    cout << "Enter the value of the first coordinate Ax: " << endl;
    cin >> Ax;
if (!cin.good()) {
    cin.clear();
    cin.ignore(10, '\n');
    cout << "You must enter a real number." << endl;
} else {
    break;
        }
} while (true);
double Ay;
do {
    cout << "Enter the value of the second coordinate Ay: " << endl;
    cin >> Ay;
if (!cin.good()) {
    cin.clear();
    cin.ignore(10, '\n');
    cout << "You must enter a real number." << endl;
} else {
    break;
        }
} while (true);
double Az;
do {
    cout << "Enter the value of the third coordinate Az: " << endl;
    cin >> Az;
if (!cin.good()) {
    cin.clear();
    cin.ignore(10, '\n');
    cout << "You must enter a real number." << endl;
} else {
    break;
        }
} while (true);
double vector_module;
    vector_module = sqrt(Ax * Ax + Ay * Ay + Az * Az);
    cout << "\n Vector length: " << vector_module << endl;

return 0;
}
