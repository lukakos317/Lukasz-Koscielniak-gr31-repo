#include <iostream>
using namespace std;

int main()
{
	/* 
	int const rozmiar = 10;
	int wiek[10];
	int w;
	cout << "ILE MASZ LAT?" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << endl << "Numer osoby: ";
		cin >> w;
		cout << "Ile ma lat?: ";
		cin >> wiek[w];
	}
	cout << endl << "OSOBY I ICH WIEK:" << endl;
	for (int w = 1; w <= 5; w++)
	{

		cout << "Osoba nr " << w << " ma lat: " << wiek[w] << endl;
	}
	system("pause");
	*/

	int tablica[8] = { 1,1,2,3,3,8,6 };
	// int tablica[8] = {};
	for (int i = 0; i < 5; i++)
		{
			cout << tablica[i];
		}
	cout << endl;
	for (int i = 0; i < 7; i++)
	{
		cout << tablica[i];
	}
	cout << endl;
	for (int i = 0; i < 8; i++)
	{
		cout << tablica[i];
	}
	cout << endl;
	system("pause");
}