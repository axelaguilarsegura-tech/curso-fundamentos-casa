#include<iostream>
using namespace std;

void intercambio(int a, int b){
	
	int aux1;
	
	cout<<"valor 1"<<endl;
	cin>>a;
	cout<<"valor 2"<<endl;
	cin>>b;
	
	aux1=a;
	
	a=b;
	b=aux1;
	
	cout<<"valor1: "<<a<<endl;
	cout<<"valor2: "<<b<<endl;
}

int main (int argc, char *argv[]) {
	
	int a;
	int b;
	
	intercambio(a,b);
	
	return 0;
}

