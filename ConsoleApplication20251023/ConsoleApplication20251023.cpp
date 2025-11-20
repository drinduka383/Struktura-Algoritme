#include <iostream>
using namespace std;

int main()
{
	/*int x;

    cout << "Shkruani numrin: ";
	cin >> x;

	if (x < 10) 
	{
		cout << "Numri " << x << " eshte me i vogel se numri 10." << endl;
	}
	else if (x == 10) 
	{
		cout << "Numri " << x << " eshte saktesisht 10." << endl;
	}
	else
	{
		cout << "Numri " << x << " eshte me i madh se numri 10." << endl;
	}*/

	/*float x, y, z;
	string func;
	cout << "Shkruani numrin e pare: ";
	cin >> x;
	cout << "Shkruani numrin e dyte: ";
	cin >> y;


	if (x < y) 
	{
		z = (4 * x) + 2;
		func = "4x + 2";
	}
	else
	{
		z = (6 * x) - 3;
		func = "6x - 3";
	}
	cout << "Vlera e funksionit bie ne " << func << ", andaj vlera e funksionit eshte: " << z << endl;
	*/


	float z;

	cout << "Shkruani vleren e z: ";
	cin >> z;

	if (z > 0) 
	{
		if (z > 10) 
		{
			cout << "Z eshte pozitive dhe me e madhe se 10." << endl;
		}
		else 
		{
			cout << "Z eshte pozitive por nuk eshte me e madhe se 10." << endl;
		}
	}
	else if (z == 0) 
	{
		cout << "Z eshte zero." << endl;
	}
	else 
	{
		cout << "Z eshte negative." << endl;
	}







}

