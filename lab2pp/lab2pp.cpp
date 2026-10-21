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








	 return 0;

	
}