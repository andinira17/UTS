#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;
int main()
{
	 int a,b;
	 float c;
	 cout<<"masukkan angka pertama : ";
	 cin>>a;
	 cout<<"masukkan angka kedua : ";
	 cin>>b;			
	 
	 c=float(a)/b;
	 
	 if (b==0) {
	 	cout<<"tidak dapat dibagi nol";
	 	
    } else {
    	cout << "\nHasil: "<<c;
	}	
	 getch();

}
