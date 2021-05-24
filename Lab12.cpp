#include <iostream>
using namespace std;

template <typename A>
void show(const A* arr, int n) {
	for (int i = 0; i < n; i++)
		cout << "arr[" << i + 1 << "]= " << arr[i] << endl;
}
int main() {
	setlocale(LC_ALL, "rus");

	int arr_int[8] = { 2,4,8,16,32,64,128,256 };
	char arr_char[8] = ("ФКН ТОП");

	cout << "Array int: " << endl;
	show(arr_int, 8);
	cout << endl;
	cout << "Array char: " << endl; //В конце выводит ' ' потому что при инициализации массива есть ещё один элемент \0
	show(arr_char, 8);
	cout << endl;
}
