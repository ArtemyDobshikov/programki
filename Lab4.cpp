/*
	Артемий Добшиков
	СБС-001-О-01
	Вариант 1
*/
#include <iostream>

using namespace std;

int Fibonacci(int N)
{
  if (N == 1 || N == 2)
  return 1;
  return Fibonacci(N - 1) + Fibonacci(N - 2);
}

int main()
{
  cout << "This program calculates a number from the Fibonacci sequence." << endl;
  cout << endl;

  int N;
  cout <<"Enter the ordinal number of a number from the Fibonacci sequence: ";
  cin >> N;
  cout <<Fibonacci(N);
  return 0;
}
