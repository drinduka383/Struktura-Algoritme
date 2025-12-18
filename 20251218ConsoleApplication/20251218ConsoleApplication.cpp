#include <iostream>
using namespace std;

struct koni 
{
    float rrezja, lartesia;
}k;

int main()
{
    cout << "Sheno rrezen e konit: ";
    cin >> k.rrezja;
    cout << "Sheno lartesine e konit: ";
    cin >> k.lartesia;

    cout << "Vellimi i konit eshte: " << ((3.14 * k.rrezja * k.rrezja)*k.lartesia)/3. << endl;
}
