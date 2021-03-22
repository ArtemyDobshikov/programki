#include <iostream>
#include <math.h>

using namespace std;

int main()
{
  cout << "This program determines the coefficient of friction k of the body on the plane." << endl;
  cout << endl;
  double angle = 0.0;
do {
  cout << "The angle of inclination of the plane to the horizon (in degrees): " << endl;
  cin >> angle;
if (!cin.good())
{
 cin.clear();
 cin.ignore(10, '\n');
 cout << "You must enter a real number." << endl;
} else break;
		} while (true);

		 double degree = (3.14 / 180); //Degrees to radians conversion factor
                    angle *= degree; //Convert the angle to radians

                double a = 0.0;

            do {
                cout << "Body acceleration (m/s^2) : ";
                cin >> a;

                if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "You must enter a real number." << endl;
		} else break;
	} while (true);

                double g = 10;
                double k = ((tan(angle)) - (a / (g * cos(angle))));
            cout << "Friction coefficient k = " << k << endl;

}
