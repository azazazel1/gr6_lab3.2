// gr6_lab3.2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int liczba1;
	int liczba2;

	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> liczba1;

	cout << "Podaj druga liczbe: " << endl;
	cin >> liczba2;

	if (liczba1 == liczba2) {
		cout << "Liczby sa rowne" << endl;
	}
	else if(liczba1 < liczba2) {
		cout << "liczba pierwsza jest mniejsza od drugiej" << endl;
	}
	else {
		cout << "liczba pierwsza jest wieksza od drugiej" << endl;
	}

	cout << "________________________" << endl;

	int liczba3;
	int liczba4;

	cout << "Podaj pierwsza liczbe: " << endl;
	cin >> liczba3;

	cout << "Podaj druga liczbe: " << endl;
	cin >> liczba4;

	if (liczba3 == liczba4 || liczba3 < liczba4) {
		cout << "Liczby sa rowne" || "liczba pierwsza jest mniejsza";
	}
	
	else {
		cout << "liczba pierwsza jest wieksza od drugiej " << endl;
	}

	cout << "________________________" << endl;

	double r;
	cout << "Podaj wspolczynnik korelacji: " << endl;
	cin >> r;
		
	if (r < 0.0 || r > 1.0) {
		cout << "umiesc liczbe w przedziale od 0 do 1" << endl;
	}
	else {
		if (r >= 0.7 && r <=1.0) {
			cout << "bardzo silna korelacja dodatnia" << endl;
		}
		else if (r >= 0.5) {
			cout << "silna korelacja dodatnia" << endl;
		}
		else if (r >= 0.3) {
			cout << "umiarkowana korelacja dodatnia" << endl;
		}
		else if (r >= 0.2) {
			cout << "slaba korelacja dodatnia" << endl;
		}
		else if (r >= 0) {
			cout << "brak korelacji" << endl;
		}
		else {
			cout << "blad" << endl;
		}
		cout << "________________________" << endl;
	}

	float x;
	float y;
	char operacja;
	char powtorz;

	do {
		cout << "podaj liczbe x:" << endl;
		cin >> x;
		cout << "podaj liczbe y:" << endl;
		cin >> y;

		cout << "chcesz dodac, odjac, czy podzielic liczby? (+, -, /):" << endl;
		cin >> operacja;

		switch (operacja)
		{
		case '+':
			cout << "wynik dodawania: " << x + y << endl;
			break;
		case '-':
			cout << "wynik odejmowania: " << x - y << endl;
			break;
		case '/':
			if (y == 0) {
				cout << "nie mozna dzielic przez 0" << endl;
			}
			else {
				cout << "wynik dzielenia: " << x / y << endl;
			}
			break;
		}
		cout << "________________________" << endl;

		cout << "Czy chcesz wykonac kolejne dzialanie? (t/n): ";
		cin >> powtorz;
		cout << "________________________" << endl;

	} while (powtorz == 't'); 

	

	int wybor;

	cout << "wybierz opcje (1 - petla nieskonczona, 0 - wylacz program): ";
	cin >> wybor;

	if (wybor == 1) {
		bool zmienna_logiczna = true;
		while (zmienna_logiczna) {
			cout << "petla nieskonczona" << endl;
		}
	}
	else if (wybor == 0) {
		cout << "wylaczenie petli" << endl;
	}
	else {
		cout << "cos nie tak" << endl;
	}
		
	
		
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
