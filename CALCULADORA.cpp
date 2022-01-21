#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout<<"CALCULADORA";
	cout<<"1. SUMAR";
	cout<<"2. RESTAR";
	cout<<"3. MULTIPLICAR";
	cout<<"4. DIVIDIR";
	cout<<"5. SALIR";
	
	int opc=0;
	double num1=0,num2=0;
	cout<<"\nIngrese opcion: ";
	cin>>opc;
	
	cout<<"\nIngrese 1er número: "; cin>>num1;
	cout<<"Ingrese 2do número: "; cin>>num2;
	do{
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
			else cout<<"El resultado de la división es: "<<num1/num2;break
		}
	} while(opc!=5);
	return 0;
}
