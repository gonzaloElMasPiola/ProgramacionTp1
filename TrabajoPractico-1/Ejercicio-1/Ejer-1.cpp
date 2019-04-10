#include <iostream>

using namespace std;

/*
void main() {
	int i; // declara una variable del tipo int
	i = 10; // asigna 10 a esa variable
	cout << "la variable i vale :" << i;
	// la muestra por pantalla
	cin.get();
}*/
/*
void main(){
	int i; // declara una variable del tipo int
	i++; // incrementa su valor en uno
	cout<<"la variable i vale:"<< i;
	// muestra un valor desconocido
	//ERROR, No pude ejecutarse porque tratas de sumarle 1 cuando nunca se declaro el valor de la variable
}*/
/*
void main() {
	int* pf; // declara un puntero del tipo int
	*pf = 10; // le asigna 10 a donde apunta ese puntero
	cout << "la variable *pf vale : " << *pf; // la muestra por pantalla
	//ERROR, No esta apuntanto a ningun lado por ende no podemos acceder al valor guardado 
}*/
/*
void main() {
	// Este programa funciona correctamente
	int* pfg; // declara un puntero del tipo int
	pfg = new int; // solicita memoria para un entero en forma dinámica
	*pfg = 10; // le asigna 10 a donde apunta ese puntero
	cout << "la variable *pfg vale : " << *pfg;// la muestra en pantalla
	delete pfg; // libera la memoria solicitada previamente
	cin.get();
}*/
/*
void main() {
	// Este programa funciona correctamente
	int g; // declara una variable del tipo int
	int* pg; // declara un puntero del tipo int
	pg = &g; // le da la dirección de la variable g al puntero pg
	*pg = 10; // le asigna 10 a donde apunta ese puntero
	cout << "la variable *pg vale : " << *pg; // muestra por pantalla
	cin.get();
}*/
/*
void main() {
	int* pfg;
	*pfg = 10;
	cout << "el valor de *pfg es : " << *pfg;
	//¡Error, el puntero no ha sido inicializado!l programa puede no compilar o abortar su ejecución
}*/
/*
void main() {
	int* pfg;
	pfg = new int;
	*pfg = 10;
	cout << "el valor de *pfg es : " << *pfg;
	cin.get();
	//¡Error, no se liberó la memoria solicitada(MEMORY LEAK)!.
	//El programa termina normalmente pero cada vez que se ejecuta se va perdiendo memoria.
}*/
/*
void main() {
	int fg;
	int* pfg;
	pfg = &fg;
	delete pfg;
	// ¡Error, no se puede liberar memoria no solicitada!(pfg está en la zona de STACK y el
	//	delete se realiza siempre sobre la zona HEAP).¡El programa aborta su ejecución !
}*/
/*
void main() {
	int* pi = new int; // defino el puntero
	*pi = 10;// asigno al entero 10
	cout << "pi vale:"<<pi<<" y el entero *pi es: " << *pi;
	delete pi; // libero la memoria utilizada (HEAP)
	cin.get();
}*//*void main() {
	int i = 122;
	int* pi = &i; // defino el puntero
	cout << "i vale:" << i;
	cout << " y su dirección en memoria es:" << &i << endl;
	cout << "pi vale:" << pi << " y el entero *pi es:" << *pi;
}*/