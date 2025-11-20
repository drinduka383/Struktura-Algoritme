#include <iostream>

using namespace std ;


int main(){
    const int m = 7;
    int num_of_negatives = 0;

    int a[m] = {2, -3, -7, 4, 1, -2, 2};
    for (int i = 0; i < m; i++) {
        if (a[i] < 0) {
            num_of_negatives++;
        }
    }
    cout << "Number of negative elements: " << num_of_negatives << endl;

}
