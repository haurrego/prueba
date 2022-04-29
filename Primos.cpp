#include <iostream>
using namespace std;

int main(){
	//Programa que diga si un numero es primo o no  
	int Numero, Contador=0;
	
	cout<<"Programa Primos"<<endl;
	cout<<"Digite numero ";
	cin>>Numero;
	
	if (Numero == 1){
		cout<<"El numero "<<Numero<<" es primo"<<endl;
		exit (0);
	}
	//ciclo para buscar los primos
	for(int ind=1;ind<=Numero;ind++){
		if(Numero % ind == 0)
			Contador++;
	}
	//Verifico si es primo o no
	if (Contador==2)
		cout<<"El numero "<<Numero<<" es primo"<<endl;
	else cout<<"El numero "<<Numero<<" no es primo"<<endl;
	
	system ("pause");
	return 0;
}
