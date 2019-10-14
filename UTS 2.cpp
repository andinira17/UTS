#include <iostream>

using namespace std ;


int main() {

	system ("title ANDINI RAMADHANTI") ;
	
	float a, b, c ;
	cout << "MERK JAKET\n" ;
	cout << "1. H&M\n2. DC\n " ;
	cout << "Pilih Merk Jaket = " ;
	cin >> a ;
	
	cout << "\n\n " ;
	cout << "UKURAN BAJU\n a. S\nb. M\nc. L\n " ;
	cout << "Pilih Ukuran Jaket =" ;
	cin >> b ;
	
	if (a==1) {
		if (b==a) {
			cout <<"Harga = 40.000" ;
		}
		
		else if (b==b) {
			cout <<"Harga = 50.000" ;
		}
		
		else if (b==c) {
			cout <<"Harga = 80.000" ;
		}
	}
	
	else if (a==2) {
		if (b==a) {
			cout <<"Harga = 50.000" ;
		}
		
		else if (b==b) {
			cout <<"Harga = 75.000" ;
		}
		
		else if (b==c) {
			cout <<"Harga = 80.000" ;
		}
	}
	
	return 0 ;
}
