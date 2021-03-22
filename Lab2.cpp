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
  cout << "This program solves quadratic equations that have a general form ax^2+bx+c=0." << endl;
  cout << endl;
  double a;
  cout << "Enter value a: ";
  cin >> a;
if (a == 0)
{
    cout << "a=0, no complex solutions." << endl;
} else {
    double b;
    cout << "Enter value b: ";
    cin >> b;

    double c;
    cout << "Enter value c: ";
    cin >> c;
if ((b*b - 4*a*c) > 0)
{
        double x;
        x = (( -1*b + sqrt(b*b - 4*a*c) ) / (2 * a));
        cout << "The first root is " << x << endl;
        x = (( -1*b - sqrt(b*b - 4*a*c) ) / (2 * a));
        cout << "The second root is " << x << endl;
} else {
if ((b*b - 4*a*c) == 0)
{
    double x;
    cout << "The discriminant is 0, the equation has 1 root equal to " << x << endl;
    x = ((-1*b) / (2 * a));
} else {
    cout << "Discriminant less than 0, no roots" << endl;
}}}
    return 0;
}
