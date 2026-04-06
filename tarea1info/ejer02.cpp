#include <iostream>
using namespace std;

int main(){
	
	int num, n, m;
	
	cout << "Ingrese el numero: ";
	cin >> num;
	
	cout << "Base de origen: ";
	cin >> n;
	
	// VALIDAR DIGITOS
	int temp = num;
	bool valido = true;
	
	while(temp > 0){
		
		int dig = temp % 10;
		
		if(dig >= n){
			valido = false;
		}
		
		temp = temp / 10;
	}
	
	if(valido == false){
		cout << num << " no es un numero que pueda estar en base " << n;
		return 0;
	}
	
	cout << "Base destino: ";
	cin >> m;
	
	// CONTAR DIGITOS ORIGINAL
	int contador1 = 0;
	temp = num;
	
	while(temp > 0){
		contador1++;
		temp = temp / 10;
	}
	
	// PASAR A DECIMAL
	int decimal = 0;
	int potencia = 1;
	
	temp = num;
	
	while(temp > 0){
		
		int dig = temp % 10;
		
		decimal = decimal + dig * potencia;
		
		potencia = potencia * n;
		
		temp = temp / 10;
	}
	
	// PASAR A BASE M
	int nuevo = 0;
	int multiplicador = 1;
	
	while(decimal > 0){
		
		int residuo = decimal % m;
		
		nuevo = nuevo + residuo * multiplicador;
		
		multiplicador = multiplicador * 10;
		
		decimal = decimal / m;
	}
	
	// CONTAR DIGITOS NUEVO
	int contador2 = 0;
	temp = nuevo;
	
	while(temp > 0){
		contador2++;
		temp = temp / 10;
	}
	
	// RESULTADOS
	cout << "\n(" << num << ")" << n << " = (" << nuevo << ")" << m << endl;
	
	cout << num << " en base " << n << " tiene " << contador1 << " digitos\n";
	
	cout << nuevo << " en base " << m << " tiene " << contador2 << " digitos\n";
	
	return 0;
}
