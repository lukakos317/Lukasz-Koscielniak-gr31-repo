#include <iostream>
#include <fstream>

using namespace std;


int main(int argc, char**argv)
{

	ofstream mojplik("oldFile1.txt", ios_base::app);
	ifstream otworz("oldFile1.txt", ios_base::in);
	ifstream otworz2("oldFile1.txt", ios_base::in);


	int a, b, c;
	otworz >> a;
	otworz >> b;
	otworz >> c;

	cout << a << " " << b << " " << c << endl;

	system("PAUSE");
}