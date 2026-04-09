#include<iostream>
using namespace std;

int elevarpotencia(int n, int x){
	
	int resultado=1;
	int i;
	
	cout<<"ponga n "<<endl;
	cin>>n;
	cout<<"ponga x"<<endl;
	cin>>x;
	
	for(i=1;i<=x;i++){
		resultado=resultado*n;
	}
	
	cout<<"resultado="<<resultado<<endl;
	
}

int main (int argc, char *argv[]) {
	
	int n;
	int x;
	
	elevarpotencia(n,x);
	

	

}
