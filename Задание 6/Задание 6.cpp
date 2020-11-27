#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	srand(time(NULL));
	const int n = 3, m = 5;
	int a[n][m];

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			a[i][j] = rand() % 10;
			cout.width(3);
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}
	cout << "\n";

	int max = a[0][0];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (a[i][j] > max)
			{
				max = a[i][j];
			}
		}
	}
	cout << "Максимальный элемент = " << max << endl;
	return 0;
}
