// 13112025.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() 
{
    /*double x = 0;
    unsigned int n = 0;
    double F = 1;
    double sum = 0;

    cout << "Input value for x: ";
	cin >> x;
	cout << "Input value for n: ";
    cin >> n;

    for (int i = 1; i <= (2*n + 1); i++) {
        F *= i;
    }
    
	cout << F << endl;

    for (int i = 1; i <= n; i++) {
        sum += (F + (i / 2.));
	}

	cout << sum << endl;
    
    cout << "Vlera qe kthen funksioni eshte: " << (2*x)+ sum << endl;*/

	/*cout << string(15, '-') << " while " << string(15, '-') << endl;
    while (x < 10) 
    {
        cout << "x is: " << x << endl;
        x+=2;
	}
    
	cout << string(15, '-') << " for " << string(15, '-') << endl;
    for (int i = 0; i < 10; i+=2) 
    {
        cout << "i is: " << i << endl;
	}*/

  //  for (int j = 0; j < 10; j++) {
  //      /*if (j == 3) {
  //          continue;
		//}
  //      cout << j << endl;
  //      if (j == 7) {
  //          break;
  //      } */

  //      if (j != 5) {
  //          cout << j << endl;
  //      }
  //  }


    int s = 0;
    unsigned int n = 0;

	cout << "Input value for n: ";
    cin >> n;
    for (int i = 2; i <= n && i <= 15; i++) 
    {
        s += 2*i;
	}

    cout << "Vlera e shumes eshte: " << s << endl;
	return 0;
}
