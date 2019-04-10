#include <iostream>
#include <stdlib.h>

using namespace std;
int* buscar(int* vec,int tamanio, int num){
	int * aux = new int;
	for(int a = 0; a < tamanio; a++){
		if(vec[a] == num){
			cout<<vec[a]<<" esta en la posicion: "<<vec + a<<endl;
			* aux = 1;
		}
	}
	if(* aux != 1){
		*aux = 0;
	}
	return aux;
}
void main(){
	int * arreglo;
	int * pointer;
	int size;
	int num;	
	cout<<"Ingrese el tamaño arreglo: ";
	cin >> size;
	arreglo = new int[size];
	pointer = arreglo;
	for(int a = 0; a < size; a++){
		* pointer = 100+rand()%(151-100);
		pointer++;
	}
	pointer = arreglo;
	for(int a = 0; a < size; a++){
		cout<<"vec["<<a<<"] = "<<arreglo[a]<<" - "<<pointer<<endl;
		pointer++;
	}
	cout<<"Ingrese el numero a buscar:";
	cin>>num;
	pointer = buscar(arreglo, size, num);
	if(*pointer == 0){
		cout<<"ERROR numero no encontrado"<<endl;
	}
	cin.get();
	cin.get();
	delete pointer;
	delete []arreglo;
}