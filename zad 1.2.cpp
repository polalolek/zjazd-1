

#include <iostream>
using namespace std;

int main() 
{
	int number;
	cout << "Podaj liczbe calkowita: ";
	cin >> number;
	if (number > 0) { cout << "Wpisales dodatnia liczbe calkowita: " << number << endl; }
	else if (number == 0) { cout << "Wpisales liczbe zero: " << number << endl; }
	else { cout << "Wpisales ujemna liczbe calkowita: " << number << endl; }
	cout << "Dziekuje";
	return 0;
	
}

