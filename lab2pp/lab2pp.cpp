#include <iostream>
using namespace std;
 int main() { 
	//zad1
	 for (int i = 10; i > 0; i--) {
		 cout << i << endl;
		
	}
	//zad2
	int start, limit, krok; //zmienne typu int
	int fahr, celsius;
	start = 0; //przypisz 0 do start
	limit = 200; //przypisz 200 do limit
	krok = 20; //przypisz 20 do krok
	fahr = start;
	 while (fahr <= limit) { 
		 celsius = 5 * (fahr - 32) / 9; 
		 cout << fahr << "\t" << celsius << endl; 
		 fahr = fahr + krok;
		
	 }
	 //zad3
	 for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) //kod 02_14
		  {
		  float celsius = (5.0 / 9.0) * (fahr - 32.0);
		  cout << fahr << "\t" << celsius << endl;
		  //printf("%3.0f \t %6.1f \n", fahr , celsius);
			  }
	


	 //zad4
	 for (fahr = 0.0; fahr <= limit; fahr = fahr + krok) //kod 02_16
		 {
			 float celsius = (5 / 9)*(fahr - 32.0);
		 }
	 printf("%3.0f %6.1f \n", fahr, celsius);

	 //zad6-7
	 int liczba;
	 for (int i = 0; i < 10; i++) {
		 cin >> liczba;
		 if (liczba > 0) {
			 cout << liczba <<endl;
		 }
	 }
	 //zad9
	 for (int i = 0; i <= 100; i += 2) {
		 cout << i << endl;
	 }
	 //zad10
	 int n;
	 int counter = 0;
	 cout << "podaj n: " << endl;
	 for (int i = 0; i <= 100; i++) {
		 if (i % n == 0) {
			 counter++;
		 }

	 }
	 cout << counter << endl;
	 
	 //zad11
	 int a, b;
	 cout << "podaj a: ";
	 cin >> a;
	 cout << "podaj b: ";
	 cin >> b;
	 if (a < b) {
		 for (int i = a; i <= b; i++) {
			 if (i % 3 == 0) {
				 cout << i << endl;
			 }
		 }
	 }
	 else
	 {
		 for (int i = b; i <= a; i++) {
			 if (i % 3 == 0) {
				 cout << i << endl;
			 }
		 }
	 }
	 //zad12
	 int suma = 0;
	 cout << "podaj n: ";
	 cin >> n;
	 for (int i = 0; i <= n; i++) {
		 suma += i;
	 }
	 cout << suma / n;
	 //zad13
	 for (int i = 100; i >= 0; i--) {
		 cout << i<<endl;
	 }











	 return 0;

	
}