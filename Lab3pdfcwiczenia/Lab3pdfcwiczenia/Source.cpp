#include<iostream>

using namespace std;

int main()
{
	int i;
	wypelnij(int tab[], int rozmiar)
	{
		for (i = 0; i < rozmiar; i++)
		{
			cout << "Podaj wartoœæ elementu: ";
			cin >> tab[i];
		}
	}
	cout << tab;
	return 0;
}