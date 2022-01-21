#include <iostream>
using namespace std;
void opciones(){
	
}
int main(int argc, char *argv[]) {
	int opc=0;
	
	do{
		double num1=0,num2=0;
		cout<<"\t\n   CALCULADORA";
		cout<<"\n1. SUMAR";
		cout<<"\n2. RESTAR";
		cout<<"\n3. MULTIPLICAR";
		cout<<"\n4. DIVIDIR";
		cout<<"\n5. SALIR";
		
		
		
		cout<<"\n\nIngrese opcion: ";
		cin>>opc;
		
		cout<<"\nIngrese 1er número: "; cin>>num1;
		cout<<"Ingrese 2do número: "; cin>>num2;
		switch(opc){
		case 1:
			cout<<"\nEl resultado de la suma es: "<<num1+num2;
			break;
		case 2:
			cout<<"\nEl resultado de la resta es: "<<num1-num2;break;
		case 3:
			cout<<"El resultado de la multiplicación es: "<<num1*num2;
			break;
		case 4:
			if(num2==0) cout<<"NO SE PUEDE DIVIDIR ENTRE 0!";
			else cout<<"El resultado de la división es: "<<num1/num2;
				cout<<"hola mundito";
				break;
		default: break;
		}
	} while(opc!=5);
	return 0;
}
