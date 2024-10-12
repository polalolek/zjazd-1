
#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Program do sprawdzania czy liczba jest parzysta, nieparzysta, czy zadna (0)" << endl;
        cout << "Podaj liczbe calkowita: ";
        cin >> number;
        if (number % 2 == 0) {
            cout << "Wpisales liczbe parzysta:" << number << endl;
        }
        else if (number == 0) {
            cout << "Liczba nie jest ani parzysta ani nieparzysta: " << number << endl;
        }
        else {
            cout << "Wpisales liczbe nieparzysta: " << number << endl;
        }
        cout << "Dziekuje.";
        return 0;
}
