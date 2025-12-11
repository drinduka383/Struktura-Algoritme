//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main()
//{
//    const int m = 3, n = 4;
//    int A[m][n] =   {{4, -2, 1, 8},
//                     {1, -3, 4, 5},
//                     {6, -5, 2, 9}};
//
//    int D[m][n];
//
//    int B[m * n], N[m * n], H = 0, an = 0, sum = 0, d_row = 0, d_col = 0;
//
//
//
//    cout << "---- Matrica A ----" << endl;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << setw(4) << A[i][j];
//            D[i][j] = 2*(A[i][j]);
//            if (A[i][j] % 2 == 0) {
//                B[H] = A[i][j];
//                H++;
//            }
//            if (A[i][j] < 0) {
//                N[an] = A[i][j];
//                an++;
//            }
//            sum += A[i][j];
//        }
//        cout << endl;
//    }
//    cout << "---- Matrica A ----" << endl;
//
//
//
//    cout << endl << endl << endl <<
//    "-------- Vektori B --------" << endl;
//
//    for (int i = 0; i < H; i++) {
//        cout << setw(4) << B[i];
//    }
//
//
//
//    cout << endl << endl << endl <<
//    "-------- Vektori N --------" << endl;
//
//    for (int i = 0; i < an; i++) {
//        cout << setw(4) << N[i];
//    }
//
//    cout << endl << endl << endl <<
//        "Shuma e te gjitha elementeve eshte:" << endl;
//    cout << sum;
//
//
//
//    cout << endl << endl << endl <<
//        "------ Matrica D ------" << endl;
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < n; j++) {
//            cout << setw(5) << D[i][j];
//        }
//        cout << endl;
//    }
//    cout << "------ Matrica D ------" << endl;
//
//
//}

#include <iostream>
using namespace std;


int fuqia(int baza, int eksponenti) {
	int prodhimi = 1;
	for (int i = 0; i < eksponenti; i++) {
		prodhimi *= baza;
	}
	return prodhimi;
}

int main() {
	cout << fuqia(2, 8);
}

