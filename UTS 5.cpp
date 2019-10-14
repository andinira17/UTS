#include <iostream>
using namespace std;

int main ( ) {

	system ("title ANDINI RAMADHANTI") ;
 
	cout << "=============================================\n " ;
	cout << "                UNESAMART                 \n " ;
	cout << "=============================================\n " ;
	
	float  tot ;
	
	cout << "Masukkan Total Belanjaan Anda = " ;
	cin >> tot ;
	
	if ( tot >= 200000 ) {
		cout << "ANDA MENDAPATKAN DISKON" ;
	}
	
	else if ( tot <= 100000 ) {
		cout << "Terimakasih telah berbelanja" ;
	}
	
	return 0;
}
