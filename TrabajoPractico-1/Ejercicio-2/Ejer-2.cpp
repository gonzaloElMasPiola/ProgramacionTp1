#include <iostream>
#include <stdlib.h>

using namespace std;

void main(){
	int * arreglo;
	int * pointer;
	int * maxP;
	int size;
	int max = 0;
	int aux;
	cout<<"Ingrese el tamaño arreglo: ";
	cin >> size;
	arreglo = new int[size];
	pointer = arreglo;
	for(int a = 0; a < size; a++){
		* pointer = 100+rand()%(151-100);
		if(* pointer > max){
			max =* pointer;
			maxP = pointer;
		}
		pointer++;
	}
	pointer = arreglo;
	for(int a = 0; a < size; a++){
		cout<<"vec["<<a<<"] = "<<arreglo[a]<<" - "<<pointer<<endl;
		pointer++;
	}
	cout<<"El mayor elemento es: "<< max << " y la direccion es: "<<maxP<<endl;
	cout<<"Ingrese un valor a ingresar en el arreglo: ";
	cin >> max;
	pointer = arreglo;
	cout<<"Ingrese posicion desde 0 hasta "<<size - 1<<" inclusive: ";
	cin >> aux;
	if(aux <= size){
		pointer = pointer + aux;
		* pointer = max;
		for(int a = 0; a < size; a++){
		cout<<"vec["<<a<<"] = "<<arreglo[a]<<" - "<<pointer<<endl;
		pointer++;
	}
	}
	else{
		cout<<"ERROR NUMERO INVALIDO";
	}
	cin.get();
	cin.get();//No se porque no me funciona si no pongo 2 cin.get()
	delete maxP;
	delete []arreglo;
}