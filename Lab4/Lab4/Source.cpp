#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	ofstream mojPlik("oldFile3.txt", ios_base::app);
	mojPlik << "19." << "listopada " << "2015";
	mojPlik.close();
	system("pause");
}

