/*
================================================================================
    STRUKTURA-ALGORITME - COMPREHENSIVE TEST PREP FILE
    Combined from all date-based folders
    Organized by topic for easy review
================================================================================
*/

#include <iostream>
#include <iomanip>
using namespace std;

/*
================================================================================
    SECTION 1: BASICS & INPUT/OUTPUT
    Source: ConsoleApplication20251009 (October 9, 2025)
================================================================================
*/

/*
// DETYRA 1 - Basic variable declaration and output
int a;
a = 5;
string b = "Hello World!";

cout << b << endl;

cout << (5. / 2 + 5.5) << endl << endl;

cout << ((12.6 / 2) + 4) << endl << endl;
*/

/*
// DETYRA 2 - Sum of two variables with user input
double a,b;

cout << "Shkruani vleren e variables se pare: ";
cin >> a;

cout << endl << "Shkruani vleren e variables se dyte: ";
cin >> b;

cout << endl << "Shuma e dy variablave eshte: " << a << " + " << b << " = " << a + b << endl;
*/

/*
// DETYRA 3 - Average calculation with setprecision
float n1, n2, n3;

cout << "Shkruani vleren e notes se pare: ";
cin >> n1;
cout << "Shkruani vleren e notes se dyte: ";
cin >> n2;
cout << "Shkruani vleren e notes se trete: ";
cin >> n3;

cout << endl << "Nota mesatare e tre studenteve eshte: " << setprecision(2) << (n1 + n2 + n3)/3. << endl;
*/

/*
// DETYRA 4 - Special characters output
cout << "\"" << endl;
*/


/*
================================================================================
    SECTION 2: CONDITIONAL STATEMENTS (IF/ELSE)
    Source: ConsoleApplication20251023 (October 23, 2025)
================================================================================
*/

/*
// DETYRA 1 - Compare number with 10
int x;

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
}
*/

/*
// DETYRA 2 - Conditional function selection
float x, y, z;
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

/*
// DETYRA 3 - Nested conditionals (positive/negative/zero check)
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
*/


/*
================================================================================
    SECTION 3: LOOPS & MATHEMATICAL OPERATIONS
    Sources: ConsoleApplication20251106, ConsoleApplication20251113
================================================================================
*/

/*
// FACTORIAL CALCULATION - While loop
// Source: ConsoleApplication20251106 (November 6, 2025)
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
*/

/*
// COMPLEX FUNCTION WITH FACTORIAL AND SUMMATION
// Source: ConsoleApplication20251113 (November 13, 2025)
double x = 0;
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

cout << "Vlera qe kthen funksioni eshte: " << (2*x)+ sum << endl;
*/

/*
// WHILE VS FOR LOOP COMPARISON
// Source: ConsoleApplication20251113 (November 13, 2025)
cout << string(15, '-') << " while " << string(15, '-') << endl;
while (x < 10) 
{
    cout << "x is: " << x << endl;
    x+=2;
}

cout << string(15, '-') << " for " << string(15, '-') << endl;
for (int i = 0; i < 10; i+=2) 
{
    cout << "i is: " << i << endl;
}
*/

/*
// LOOP CONTROL - Break and Continue
// Source: ConsoleApplication20251113 (November 13, 2025)
for (int j = 0; j < 10; j++) {
    if (j == 3) {
        continue;  // Skip when j is 3
    }
    cout << j << endl;
    if (j == 7) {
        break;     // Exit loop when j is 7
    }
}

// Alternative with condition
for (int j = 0; j < 10; j++) {
    if (j != 5) {
        cout << j << endl;
    }
}
*/

/*
// CONDITIONAL SUMMATION WITH RANGE LIMIT
// Source: ConsoleApplication20251113 (November 13, 2025)
int s = 0;
unsigned int n = 0;

cout << "Input value for n: ";
cin >> n;
for (int i = 2; i <= n && i <= 15; i++) 
{
    s += 2*i;
}

cout << "Vlera e shumes eshte: " << s << endl;
*/


/*
================================================================================
    SECTION 4: ARRAYS (1D) - BASIC OPERATIONS
    Source: ConsoleApplication20251117 (November 17, 2025)
================================================================================
*/

/*
// COUNT NEGATIVE AND POSITIVE ELEMENTS
const int m = 7;
int num_of_negatives = 0, num_of_positives = 0;

int a[m] = { 2, -3, -7, 4, 1, -2, 2 };

for (int i = 0; i < m; i++) {
    if (a[i] < 0) {
        num_of_negatives++;
    } else {
        num_of_positives++;
    }
}
cout << "Number of negative elements: " << num_of_negatives << endl;
*/

/*
// ARRAY SUM AND TRANSFORMATION
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
*/

/*
// ARRAY PRINTING WITH PROPER FORMATTING
const int m = 6;

int a[m] = { 2, 4, -1, 3, 5, 4 };

cout << "a[m] = {";
for (int i = 0; i < m; i++)
{
    cout << a[i] << ", ";
}
cout << "}" << endl;
*/

/*
// ARRAY INPUT FROM USER
const int m = 4;
float a[m];

// Fill array with user input
for (int i = 0; i < m; i++)
{
    cout << "Sheno vleren e a[" << i << "]: ";
    cin >> a[i];
}

// Print using for loop
cout << "\n\na[m] = {";
for (int h = 0; h < m; h++)
{
    cout << a[h] << ", ";
}
cout << "}" << endl;

// Print using while loop
int h = 0;
cout << "\n\na[m] = {";
while (h < m)
{
    cout << a[h] << ", ";
    h++;
}
cout << "}" << endl;
*/

/*
// COMPREHENSIVE ARRAY ANALYSIS
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


/*
================================================================================
    SECTION 5: ARRAYS - MATHEMATICAL TRANSFORMATIONS
    Source: ConsoleApplication20251127 (November 27, 2025)
================================================================================
*/

/*
// ARRAY TRANSFORMATION WITH POWER FUNCTION
const int m = 5;
int A[m] = { 1, 4, -2, 6, -1 };
int B[m];

// Formula: B[i] = i + 2*A[i]² - 2
for (int i = 0; i < m; i++) {
    B[i] = (i + (2 * pow((A[i]), 2)) - 2);
}

cout << A[0] << " " << A[1] << " " << A[2] << " " << A[3] << " " << A[4] << endl;
cout << B[0] << " " << B[1] << " " << B[2] << " " << B[3] << " " << B[4] << endl;
*/


/*
================================================================================
    SECTION 6: ARRAYS - SORTING & NESTED LOOPS
    Source: ConsoleApplication20251204 (December 4, 2025)
================================================================================
*/

/*
// FUNCTION TO PRINT VECTOR
void printVector(const int* vector, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << vector[i] << " ";
    }
    cout << endl;
}
*/

/*
// BUBBLE SORT ALGORITHM
const int a = 5;

int vector[a] = { 5, 1, 12, -5, 16 };

printVector(vector, a);

// Sorting in ascending order
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
// PATTERN PRINTING - TRIANGLE WITH STARS
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
// NUMBER GRID GENERATION
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


/*
================================================================================
    SECTION 7: MATRICES (2D ARRAYS)
    Source: ConsoleApplication20251211 (December 11, 2025)
================================================================================
*/

/*
// COMPREHENSIVE MATRIX OPERATIONS
const int m = 3, n = 4;
int A[m][n] =   {{4, -2, 1, 8},
                 {1, -3, 4, 5},
                 {6, -5, 2, 9}};

int D[m][n];

int B[m * n], N[m * n], H = 0, an = 0, sum = 0;

// Print matrix A and perform operations
cout << "---- Matrica A ----" << endl;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cout << setw(4) << A[i][j];
        D[i][j] = 2*(A[i][j]);              // Create matrix D (double of A)
        
        if (A[i][j] % 2 == 0) {             // Extract even numbers
            B[H] = A[i][j];
            H++;
        }
        
        if (A[i][j] < 0) {                  // Extract negative numbers
            N[an] = A[i][j];
            an++;
        }
        
        sum += A[i][j];                     // Sum all elements
    }
    cout << endl;
}
cout << "---- Matrica A ----" << endl;

// Print vector B (even numbers)
cout << endl << endl << endl <<
"-------- Vektori B --------" << endl;

for (int i = 0; i < H; i++) {
    cout << setw(4) << B[i];
}

// Print vector N (negative numbers)
cout << endl << endl << endl <<
"-------- Vektori N --------" << endl;

for (int i = 0; i < an; i++) {
    cout << setw(4) << N[i];
}

// Print sum
cout << endl << endl << endl <<
    "Shuma e te gjitha elementeve eshte:" << endl;
cout << sum;

// Print matrix D (transformed)
cout << endl << endl << endl <<
    "------ Matrica D ------" << endl;
for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
        cout << setw(5) << D[i][j];
    }
    cout << endl;
}
cout << "------ Matrica D ------" << endl;
*/


/*
================================================================================
    SECTION 8: FUNCTIONS
    Sources: ConsoleApplication20251211, ConsoleApplication20251217
================================================================================
*/

/*
// CUSTOM POWER FUNCTION (without using pow())
// Source: ConsoleApplication20251211 (December 11, 2025)
int fuqia(int baza, int eksponenti) {
    int prodhimi = 1;
    for (int i = 0; i < eksponenti; i++) {
        prodhimi *= baza;
    }
    return prodhimi;
}

// Usage:
// cout << fuqia(2, 8);
*/

/*
// TEMPERATURE CONVERSION FUNCTION
// Source: ConsoleApplication20251217 (December 17, 2025)
float temperatura(float tempC)
{
    return ((9 / 5.) * tempC) + 32;
}

// Usage:
// float tempC;
// cout << "sheno temperaturen ne celcius per t'u konvertuar ne fahrenheit: ";
// cin >> tempC;
// cout << tempC << " C = " << temperatura(tempC) << " F" << endl;
*/

/*
// LENGTH CONVERSION FUNCTION (inches/cm)
// Source: ConsoleApplication20251217 (December 17, 2025)
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

// Usage:
// float len;
// string kahja;
// cout << "sheno gjatesine per t'u konvertuar: ";
// cin >> len;
// cout << "sheno ne cka duhet konvertuar kjo gjatesi: ";
// cin >> kahja;
// cout << "Gjatesia " << len << " ne " << kahja << " eshte: " << convertLength(len, kahja) << endl;
*/

/*
// PRINT NUMBERS WITH MODULO
// Source: ConsoleApplication20251217 (December 17, 2025)
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
*/

/*
// PRIME NUMBER CHECKER
// Source: ConsoleApplication20251217 (December 17, 2025)
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
*/

/*
// FIBONACCI SEQUENCE GENERATOR
// Source: ConsoleApplication20251217 (December 17, 2025)
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

// Usage:
// printFibonacci(10);
*/


/*
================================================================================
    SECTION 9: STRUCTS (USER-DEFINED DATA TYPES)
    Source: ConsoleApplication20251218 (December 18, 2025)
================================================================================
*/

/*
// STRUCT DEFINITION - CONE VOLUME CALCULATION
struct koni 
{
    float rrezja, lartesia;
}k;

// Usage in main:
// cout << "Sheno rrezen e konit: ";
// cin >> k.rrezja;
// cout << "Sheno lartesine e konit: ";
// cin >> k.lartesia;
//
// cout << "Vellimi i konit eshte: " << ((3.14 * k.rrezja * k.rrezja)*k.lartesia)/3. << endl;
*/


/*
================================================================================
    MAIN FUNCTION - UNCOMMENT ANY SECTION ABOVE TO TEST
================================================================================
*/

int main()
{
    // Uncomment any section above to test
    // Each section is self-contained and ready to run
    
    cout << "TEST PREP FILE - All code sections are commented." << endl;
    cout << "Uncomment the section you want to practice and run the program." << endl;
    
    return 0;
}


/*
================================================================================
    QUICK REFERENCE - TOPICS COVERED
================================================================================

1. BASICS & I/O
   - Variable declaration (int, float, double, string)
   - cout/cin operations
   - Basic arithmetic
   - setprecision() for formatting

2. CONDITIONAL STATEMENTS
   - if, else if, else
   - Nested conditionals
   - Comparison operators

3. LOOPS & MATH
   - while loops
   - for loops
   - break and continue
   - Factorial calculation
   - Summation operations

4. ARRAYS (1D)
   - Declaration and initialization
   - Traversal with loops
   - Counting elements (positive/negative)
   - Array transformation
   - User input for arrays

5. ARRAYS - ADVANCED
   - Mathematical transformations (pow)
   - Bubble sort algorithm
   - Pattern printing with nested loops

6. MATRICES (2D ARRAYS)
   - Matrix traversal
   - Extracting elements (even, negative)
   - Matrix transformation
   - Sum of all elements

7. FUNCTIONS
   - Function prototypes
   - Parameters and return types
   - float, void, bool, int returns
   - Algorithms (power, prime, fibonacci)
   - Temperature/unit conversion

8. STRUCTS
   - Defining custom data types
   - Accessing struct members
   - Practical applications (geometry)

================================================================================
    END OF TEST PREP FILE
================================================================================
*/
