#include <iostream>
using namespace std;

int* create_mass(int& n) {
    cout << "n = ";
    cin >> n;
    int* mass = new int[n];
    for (int i = 0; i < n; ++i) {
        cout << "mass[" << i << "] = ";
        cin >> mass[i];
    }
    return mass;
}

void output(int* pMass, int& size) {
    for (int i = 0; i < size; i++)
    {
        std::cout << *(&pMass[i]) << " ";
    }
    std::cout << std::endl;
}

int main()
{
    setlocale(NULL, "Russian");
    int n, number = 0;
    int* mass = create_mass(n);
    int* nmass = new int[n];
    cout << "\nИсходный массив = " << endl;
    output(mass, n);
    for (int i = 0; i < n; i++)
    {
        if (mass[i] % 2 != 0) {
            nmass[number] = mass[i];
            ++number;
        }
    }
    cout << "\nНовый массив = " << endl;
    output(nmass, number);
    delete[] mass, nmass;
    system("pause");
    return 0;
}