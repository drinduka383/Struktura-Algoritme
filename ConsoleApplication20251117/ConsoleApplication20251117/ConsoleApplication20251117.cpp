#include <iostream>

using namespace std;


int main() {
    /*const int m = 7;
    int num_of_negatives = 0, num_of_positives = 0;

    int a[m] = { 2, -3, -7, 4, 1, -2, 2 };

    for (int i = 0; i < m; i++) {
        if (a[i] < 0) {
            num_of_negatives++;
		} else {
            num_of_positives++;
        }
    }
    cout << "Number of negative elements: " << num_of_negatives << endl;*/

    const int m = 7;
    int sum = 0;



    int V[m] = { 2, -3, -7, 4, 1, -2, 2 };
    int V2[m] = {};

    for (int i = 0; i < m; i++) {
        sum += V[i];
	}

	cout << "Sum of elements in V: " << sum << endl;

    cout << "Vektori V2: {";

    for (int i = 0; i < m; i++) {
		V2[i] = 2*V[i];
        cout << V2[i];
        if (i < m - 1) {
            cout << ", ";
		}
    }

    cout << "}" << endl;




}






/*
//17.11.2025


//const int m = 6;
//
//int a[m] = { 2, 4, -1, 3, 5, 4 };
//
//cout << "a[m] = {";
//for (int i = 0; i < m; i++)
//{
//	//cout << a[i];
//	//if (i != m - 1)
//	//{
//	//	cout << ", ";
//	//}
//
//	cout << a[i] << ", ";
//}
//cout << "}" << endl;






//const int m = 4;
//float a[m];
//
////Mbushja me vlera nga perdoruesi
//for (int i = 0; i < m; i++)
//{
//	cout << "Sheno vleren e a[" << i << "]: ";
//	cin >> a[i];
//}
//
////Printimi i vlerave me unazen for
////cout << "\n\na[m] = {";
////for (int h = 0; h < m; h++)
////{
////	cout << a[h] << ", ";
////}
////cout << "}" << endl;
//
//
////Printimi i vlerave me unazen while
//int h = 0;
//cout << "\n\na[m] = {";
//while (h < m)
//{
//	cout << a[h] << ", ";
//	h++;
//}
//cout << "}" << endl;


//FB

//Detyra 2
const int n = 7;
int V[n] = { 2, -3, -7, 4, 1, -2, 2 };
int V2[n];
int neg = 0, poz = 0;
int shuma = 0;

cout << "V2 = {";
for (int i = 0; i < n; i++)
{
	if (V[i] >= 0)
	{
		poz++;
	}
	else
	{
		neg++;
	}

	V2[i] = 2 * V[i];
	cout << V2[i] << ", ";

	shuma += V[i];
}
cout << "}" << endl;

cout << "Numrat pozitiv jane total: " << poz << endl;
cout << "Numrat negativ jane total: " << neg << endl;

cout << "\nShuma totale: " << shuma << endl;

//17.11.2025


//const int m = 6;
//
//int a[m] = { 2, 4, -1, 3, 5, 4 };
//
//cout << "a[m] = {";
//for (int i = 0; i < m; i++)
//{
//	//cout << a[i];
//	//if (i != m - 1)
//	//{
//	//	cout << ", ";
//	//}
//
//	cout << a[i] << ", ";
//}
//cout << "}" << endl;






//const int m = 4;
//float a[m];
//
////Mbushja me vlera nga perdoruesi
//for (int i = 0; i < m; i++)
//{
//	cout << "Sheno vleren e a[" << i << "]: ";
//	cin >> a[i];
//}
//
////Printimi i vlerave me unazen for
////cout << "\n\na[m] = {";
////for (int h = 0; h < m; h++)
////{
////	cout << a[h] << ", ";
////}
////cout << "}" << endl;
//
//
////Printimi i vlerave me unazen while
//int h = 0;
//cout << "\n\na[m] = {";
//while (h < m)
//{
//	cout << a[h] << ", ";
//	h++;
//}
//cout << "}" << endl;


//FB

//Detyra 2
const int n = 7;
int V[n] = { 2, -3, -7, 4, 1, -2, 2 };
int V2[n];
int neg = 0, poz = 0;
int shuma = 0;

cout << "V2 = {";
for (int i = 0; i < n; i++)
{
	if (V[i] >= 0)
	{
		poz++;
	}
	else
	{
		neg++;
	}

	V2[i] = 2 * V[i];
	cout << V2[i] << ", ";

	shuma += V[i];
}
cout << "}" << endl;

cout << "Numrat pozitiv jane total: " << poz << endl;
cout << "Numrat negativ jane total: " << neg << endl;

cout << "\nShuma totale: " << shuma << endl;

*/