#include <iostream>
#include <string>

using namespace std;

void plural(char * pal){
	int aux;
	char * aux2;
	aux2 = pal;
	aux = strlen(pal);
	for(int a = 0;a < aux + 3;a++){
		if(a >= aux - 1){
			if(* aux2 == 'a' || * aux2 == 'e' || * aux2 == 'i' || * aux2 == 'o' || * aux2 == 'u'){
				aux2++;
				* aux2 = 's';
				aux2++;
				* aux2 = '\0';
			}
			else
			{
				aux2++;
				* aux2 = 'e';
				aux2++;
				* aux2 = 's';
				aux2++;
				* aux2 = '\0';
			}
		}
		aux2++;
	}
}

void main(){
	string palabra;
	char * pal;
	int aux = 0;
	cout<<"Ingrese una palabra:";
	cin>>palabra;
	aux = palabra.length();
	pal = new char[aux + 3];
	strcpy(pal, palabra.c_str());
	plural(pal);
	cout<<palabra<<"->";
	for(int a = 0;pal[a] != '\0';a++){
		cout<<pal[a];	
	}
	cin.get();
	cin.get();
}