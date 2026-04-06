#include<iostream>
#include<string>
using namespace std;

// pedir un numero
void solinumero(int&n){
	cout<<"ponga un numero"<<endl;
	cin>>n;
}
	
	// ver si si sirve
	bool validar(int n){
		if(n <= 0){
			return false;
		} else {
			return true;
		}
	}
		
		// llamar a las otras dos
		int funcionar(){
			
			int n;
			
			do{
				solinumero(n);
				
				if(validar(n)==false){
					cout<<"este numero no sirve"<<endl;
					cout<<n<<endl;
				}
				
			}while(validar(n)==false);
			
			cout<<"su numero es este "<<n<<endl;
			
			return n;
		}
			
			// para hacer la figura
			
			// usando for
			string usofor(int n){
				string figura = "";
				
				for(int i = 1; i <= (2*n - 1); i++){
					
					if(i <= n){
						for(int j = 1; j <= i; j++){
							figura += "*";
						}
					} else {
						for(int j = 1; j <= (2*n - i); j++){
							figura += "*";
						}
					}
					
					figura += "\n";
				}
				
				return figura;
			}
				
				// usando while 
				void usoWhile(int n){
					
					string linea = "";
					int i = 1;
					
					// Parte de arriba
					while(i <= n){
						linea.append(1, '*');
						cout << linea << endl;
						i++;
					}
					
					// Parte de abajo
					while(linea.length() > 0){
						linea.erase(linea.length() - 1);
						
						if(linea.length() > 0){
							cout << linea << endl;
						}
					}
				}
					
					// cuantas lineas eran al final
					int candLineas(int n){
						return (2*n) - 1;
					}
						
						// MAIN
						int main(){
							
							int n = funcionar();
							
							cout << "\nFigura usando FOR:\n";
							cout << usofor(n);
							
							cout << "\nFigura usando WHILE:\n";
							usoWhile(n);
							
							cout << "\nLineas: " << candLineas(n) << endl;
							
							return 0;
						}
