#include <iostream>
using namespace std;

// Detyra 2

//int main()
//{
//    float r = 0;
//    float perimetri = 0;
//    float syprina = 0;
//    const double pi = 3.14
//
//    while (true) {
//        cout << "Kjo detyre llogarite siperfaqen dhe perimetrin e nje rrethi." << endl;
//        cout << "Ju lutem shenoni rrezen e rrethit te cilit doni t'a kalkuloni: ";
//        cin >> r;
//        cout << r << endl;
//        if (r < 0) {
//            cout << "Rrezja qe keni dhene nuk mund te perdoret. Ju lutem provoni perseri." << endl;
//            continue;
//        }
//        else {
//            perimetri = 2 * pi * r;
//            syprina = pi * pow(r, 2);
//            cout << "Perimetri i rrethit me rreze r (" << r << ") eshte: " << perimetri << endl << "Syprina e rrethit me rreze r (" << r << ") eshte : " << syprina << endl;
//            break;
//        }
//    }
//}



// Detyra 3

//int main() {
//    const int m = 11;
//    int negativet = 0, pozitivet = 0;
//
//    int c[m] = { 3, -7, -33, 13, -11, 46, -27, 78, -3, 51, 11};
//
//    // a) Printimi i vektorit:
//    
//    ///*
//    cout << "c[m] = {";
//    for (int i = 0; i < m; i++)
//    {
//    	cout << c[i];
//    	if (i != m - 1)
//    	{
//    		cout << ", ";
//    	}
//
//    }
//    cout << "}" << endl;
//    //*/
//
//
//
//    // b) Numri total i anetareve pozitiv dhe negativ:
//
//    ///*
//    for (int i = 0; i < m; i++) {
//        if (c[i] < 0) {
//            negativet++;
//        } else {
//            pozitivet++;
//        }
//    }
//    cout << "Numri i elementeve pozitive: " << pozitivet << endl;
//    cout << "Numri i elementeve negative: " << negativet << endl;
//    //*/
//
//
//
//    // c) Printoni numrin maksimal dhe minimal te ketij vektori:
//    
//    ///*
//    int max = 0;
//    int min = 0;
//    
//    for (int i = 0; i < m; i++)
//    {
//
//        if (c[i] > max) {
//            max = c[i];
//        }
//        else if (c[i] < min) {
//            min = c[i];
//        }
//
//    }
//    cout << "Vlera minimale ne vektorin C eshte: " << min << endl << "Vlera maksimale ne vektorin C eshte: " << max << endl;
//    //*/
//
//
//
//    // d) Llogaritni shumen totale te te gjithe anetareve te vektorit:
//
//    ///*
//    int sum = 0;
//
//    for (int i = 0; i < m; i++) {
//        sum += c[i];
//    }
//
//    cout << "Shuma e elementeve ne vektorin C eshte: " << sum << endl;
//    //*/
//}



// Detyra 4

//int main() {
//	float x, n, m, s1, s2, s3;
//	int h = 3;
//
//	cout << "Kjo detyre llogarit vleren nje shprehjeje." << endl;
//	cout << "Ju lutem shenoni vleren e x: ";
//	cin >> x;
//	cout << "Ju lutem shenoni vleren e n: ";
//	cin >> n;
//	cout << "Ju lutem shenoni vleren e m: ";
//	cin >> m;
//
//	// Pjesa 1
//	s1 = (15 - (((2 / 3.) * x)));
//	cout << s1 << endl;
//
//	// Pjesa 2 (faktorieli)
//	s2 = 1;
//	for (int i = 1; i <= (2 * h - 3); i++) {
//		s2 *= i;
//	}
//	cout << s2 << endl;
//
//	// Pjesa 3 (shuma)
//	s3 = 0;
//	for (int i = 2; i <= n+1; i++)
//	{
//		if (i == 3) {
//			continue;
//		}
//
//		s3 += (s2 - ((4 * i) + m));
//	}
//
//	cout << "Shuma e llogaritur e shprehjes eshte: " << s1 + s2 + s3 << endl;
//}



// Detyra 5

//int main() {
//
//	int n;
//	int m;
//
//  cout << "Kjo detyra printon numrat nga n deri ne m." << endl;
//	cout << "Ju lutem shenoni numrin n: ";
//	cin >> n;
//
//	cout << "Ju lutem shenoni numrin m: ";
//	cin >> m;
//
//	if (n < m) {
//		while (n <= m) {
//			cout << n << endl;
//			n++;
//		}
//	}
//	else if (n > m) {
//		while (n >= m) {
//			cout << n << endl;
//			n--;
//		}
//	}
//	else {
//		cout << "n dhe m jane te barabarte :p)" << endl << n;
//	}
//
//}



// Detyra 6

//int main() {
//	cout << "Kjo detyre tregon se si quhet dita e javes e numrit perkates qe jipet me switch()." << endl;
//
//	int dita;
//
//	cout << "Ju lutem jipni numrin nga 1 ne 7: ";
//	cin >> dita;
//
//	switch (dita) {
//		case 1: { cout << "Dita e " << dita << " e javes eshte e hene." << endl; break; }
//		case 2: { cout << "Dita e " << dita << " e javes eshte e marte." << endl; break; }
//		case 3: { cout << "Dita e " << dita << " e javes eshte e merkure." << endl; break; }
//		case 4: { cout << "Dita e " << dita << " e javes eshte e enjte." << endl; break; }
//		case 5: { cout << "Dita e " << dita << " e javes eshte e premte." << endl; break; }
//		case 6: { cout << "Dita e " << dita << " e javes eshte e shtune." << endl; break; }
//		case 7: { cout << "Dita e " << dita << " e javes eshte e diele." << endl; break; }
//		default: { cout << "Nuk ka kaq dite java! Ndjek udhezimet >:(" << endl; }
//	}
//}



// Detyra 7

//int main() {
//	cout << "Kjo detyre kontrollon se numri i shtypur a eshte pozitiv dhe me i madh sesa numri 7." << endl;
//
//	float numri;
//
//	cout << "Shkruani numrin: ";
//	cin >> numri;
//	
//	if (numri > 0) {
//		if (numri > 7) {
//			cout << "Numri i dhene eshte numer pozitiv dhe me i madh se 7.";
//		}
//		else if (numri < 7) {
//			cout << "Numri i dhene eshte numer pozitiv dhe me i vogel se 7.";
//		} 
//		else {
//			cout << "Numri i dhene eshte numer pozitiv dhe eshte saktesisht 7.";
//		}
//	}
//	else if (numri == 0) {
//		cout << "Numri i dhene eshte saktesisht 0.";
//	}
//	else {
//		cout << "Numri i dhene eshte numer negativ dhe me i vogel se 7.";
//	}
//}
