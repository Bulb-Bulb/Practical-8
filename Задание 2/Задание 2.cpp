#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    const int n = 10;
    int b;
    int c;

    int a[n] = { 3, 7, 64, 9, 27, 31, 28, 55, 5, 11 };

    cout << "Начало и конец интервала = ";
    cin >> b >> c;

    cout << "Элементы = ";

    for (int i = 0; i < n; i++)
    {
        if (a[i] < b || a[i] > c)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
