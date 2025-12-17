#include <iostream>
using namespace std;

float temperatura(float tempC);
float convertLength(float x, string type);
void printoNumrat(int n);
bool isPrime(int num);
void printFibonacci(int num);

int main()
{
    /*
    float tempC;
    cout << "sheno temperaturen ne celcius per t'u konvertuar ne fahrenheit: ";
    cin >> tempC;
    cout << tempC << " C = " << temperatura(tempC) << " F" << endl;
    */

    /*
    float len;
    string kahja;
    cout << "sheno gjatesine per t'u konvertuar: ";
    cin >> len;
    cout << "sheno ne cka duhet konvertuar kjo gjatesi: ";
    cin >> kahja;

    cout << "Gjatesia " << len << " ne " << kahja << " eshte: " << convertLength(len, kahja) << endl;
    */

    //printoNumrat(10);
    printFibonacci(10);
}

float temperatura(float tempC)
{
    return ((9 / 5.) * tempC) + 32;
}

float convertLength(float x, string type) 
{
    if (type == "inch") {
        return (x * 2.54);
    }
    else if (type == "cm") 
    {
        return (x / 2.54);
    }
    else 
    {
        cout << "Gabim ne parametra!";
        return 0;
    }
        
}

void printoNumrat(int n)
{
    for (int i = 1; i <= n; i++) {
        if (i % n == 0) 
        {
            cout << i << "  ";
        }
    }
    cout << endl;
}

bool isPrime(int num)
{
    int pjestuesit = 0;
    for (int i = num; i > 1; i--)
    {
        if (num % i == 0)
        {
            pjestuesit++;
        }
    }

    if (pjestuesit == 0)
    {
        return true;
    }
    else {
        return false;
    }
}

void printFibonacci(int num)
{
    unsigned int a = 0, b = 1, c;
    
    cout << a << " " << b << " ";

    for (int i = 1; i < num; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }

}