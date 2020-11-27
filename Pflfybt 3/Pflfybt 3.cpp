#include <iostream>
#include<ctime>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int* a, k;
    cout << "Размерность массива = " << endl;
    cin >> k;
    a = new int[k];
    srand(time(NULL));
    for (int i = 0; i < k; i++)
    {
        a[i] = rand() % 5;
        cout << a[i] << " ";
    }
    cout << "\n";

    int min = a[0];
    for (int i = 1; i < k; i++)
    {
        if (a[i] <= min)
        {
            min = a[i];
        }
    }
    cout << "Последний минимальный элемент: " << min << "\n";
    return 0;
}
