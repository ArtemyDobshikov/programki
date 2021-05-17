#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
const int N = 100;
double cos(double z, int m) {
    int n;
    double s = 1, q = z;
    for (int n = 1; n <= m; n++) {

        q *= (-1)*z*z / (2 * n) / (2 * n - 1);
        s += q;
    }
    return s;
}
int main() {
    cout << "This program implements a function to calculate the cosine, with a given number X, up to 100 elements." << endl;
    int i;
    double x;
    do {
    cout << "Enter x: " << endl;
    cin >> x;
if (!cin.good()) {
    cin.clear();
    cin.ignore(10, '\n');
    cout << "You must enter a real number." << endl;
} else {
    break;
        }
} while (true);
    cout << "cos(x)=" << cos(x) << endl;
    system("pause");
    return 0;
}
