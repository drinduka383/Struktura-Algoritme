#include <iomanip>
#include <iostream>
using namespace std;

void printVector(const int* vector, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}

int main()
{
    /*
	const int a = 5;

    int vector[a] = { 5, 1, 12, -5, 16 };

	printVector(vector, a);

	for (int i = 0; i < a; i++)
	{
		for (int j = i + 1; j < a; j++)
		{
			if (vector[i] > vector[j])
			{
				int temp = vector[i];
				vector[i] = vector[j];
				vector[j] = temp;
			}
		}
	}

	printVector(vector, a);
	*/
	




	/*
	const int n = 5;

	for (int i = 0; i < n; i++) 
	{
		for (int j = 0; i>=j; j++) 
		{
			cout << "* ";
		}
		cout << endl;
	}
	*/





	/*
	const int m = 4;
	const int n = 5;
	int count = 1;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << setw(4) << count;
			count++;
		}
		cout << endl;
	}
	*/




}

