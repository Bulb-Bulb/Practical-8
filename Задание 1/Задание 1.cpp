#include <iostream>
#include<ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int* a, n;
	cout << "Размерность массива = " << endl;
	cin >> n;
	a = new int[n];
	srand(time(NULL));
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 30;
		cout << a[i] << " ";
	}
	cout << "\n";


	int b, c;
	cout << "Введите промежуток = ";
	cin >> b >> c;
	for (int i = 0; i < n; i++)
	{
		if (a[i] >= b && a[i] <= c)
		{
			a[i] = 0;
		}
		cout << a[i] << " ";
	}
	return 0;
}