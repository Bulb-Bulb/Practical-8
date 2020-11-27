#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));

	const int n = 10;
	int a[n];

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % (-10) + (-30);
		cout << a[i] << " ";
	}
	cout << "\n";

	int max = a[0];
	int num2;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			num2 = i;
		}
	}
	cout << "Максимальный элемент массива - " << max << endl;
	return 0;
}