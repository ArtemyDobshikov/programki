#include<iostream>
#include<cmath>

using namespace std;
int scan();

class number {
public:
    double cos(double z) {
        int m = 5;
        double s = 1, q = z;
        for (int n = 1; n <= m; n++) {

            q *= (-1) * z * z / (2 * n) / (2 * n - 1);
            s += q;
        }
        return s;
    }
};

int main() {
    cout << "This program implements a function to calculate the cosine, with a given number X, up to 100 elements." << endl;
    cout << "Enter x: ";
    double x = scan();
    number object;
    cout << "cos(x)=" << object.cos(x) << endl;
}
int scan() {
    while (true) {
        int data;
        cin >> data;
        if (cin.fail() || data < 1) {
            cin.clear();
            cin.ignore(32767, '\n');
            cout << "error is not correct input" << endl;
        }
        else  return data;
    }
}