#include <iostream>
#include <math.h>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "��� ��������� ���������� ����������� ������ k ���� � ���������." << endl;
	cout << endl;

	double angle = 0.0;
    do {
        cout << "���� ������� ��������� � ��������� (� ��������): " << endl;
        cin >> angle;

        if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "���������� ������ ������������ �����." << endl;
            } else break;
		} while (true);

		 double degree = (3.14 / 180); //����������� �������� �������� � �������
                    angle *= degree; //�������� ���� � �������

                double a = 0.0;

            do {
                cout << "��������� ���� (�/�^2) : ";
                cin >> a;

                if (!cin.good()) {
			cin.clear();
			cin.ignore(10, '\n');
			cout << "���������� ������ ������������ �����." << endl;
		} else break;
	} while (true);

                double g = 10;
                double k = ((tan(angle)) - (a / (g * cos(angle))));
            cout << "����������� ������ k = " << k << endl;

}
