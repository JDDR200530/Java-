#include<iostream>
#include<math.h>
using namespace std;
int calcularMaxCD(int a, int b){
	while (b != 0 ) {
		int red= b;
		b= a % b;
		a=red;
	}
	return a; 
}
int main( ){
	int numer1,numer2;
	cout<< "Ingrese el primer numero : " ;
	cin>>numer1;
	cout<<"Ingrese el segundo numero : ";
	cin>>numer2;
	int mcd= calcularMaxCD(numer1,numer2);
	cout<<" El maximo comun divisor de "<< numer1 <<" y "<< numer2 << " es : "<< mcd <<endl; 
	return 0;
	}
