#include <iostream>
using namespace std;

int main()
{
    double F=1;
    int n;
	cout << "Sheno numrin n: ";
    cin >> n;

    int i = 1;
    while (i <= 2*n - 1) {
        F = F * i;
        i = i + 1;
    }
    cout << "Faktoriali i " << 2*n - 1 << " eshte: " << F << endl;
	return 0;

}
