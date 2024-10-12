
#include <iostream>
using namespace std;

int main()
{
    int number1, number2, number3; 
    cout << "Program do wyznaczania najwiekszej liczby z 3 podanych.";
    cout << "Podaj 3 liczby calkowite." << endl; 
    cin >> number1 ;
    cin >> number2 ;
    cin >> number3 ;
    if (number1 > number2 && number1 > number3) {
        cout << " liczba najwieksza: " << number1 << endl;
    }
    else if (number2 > number1 && number2 > number3) {
        cout << " liczba najwieksza: " << number2 << endl;
    }
    else {
        cout << " liczba najwieksza: " << number3 << endl; 
    }
    
}


