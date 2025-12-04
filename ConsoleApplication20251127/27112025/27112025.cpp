#include <iostream>
using namespace std;

int main()
{
    const int m = 5;
    int A[m] = { 1, 4, -2, 6, -1 };
    int B[m];

    for (int i = 0; i < m; i++) {
        B[i] = (i + (2 * pow((A[i]), 2)) - 2);
    }

    cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[4] << endl;
    cout << B[0] << " " << B[1] << " " << B[2] << " " << B[3] << " " << B[4] << endl;
}


