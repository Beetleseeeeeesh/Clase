#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int main(){
	string joya[11][3];
	joya[0][0]="Nombre";
	joya[0][1]="Material";
	joya[0][2]="Precio";
	int opcion;
	string nombre;
	string material;
	string precio;
	int contador = 0;
	
	do{
	cout<<"----------------------------"<<endl;
	cout<<"-----JOYERIA LAMBEBICHO-----"<<endl;
	cout<<"----------------------------"<<endl;
	cout<<endl;
	cout<<"1.- Añadir joya"<<endl;
	cout<<"2.- Consultar lista de joyas"<<endl;
	cout<<"3.- Eliminar joya"<<endl;
	cout<<"4.- Editar joya"<<endl;
	cout<<"5.- Salir"<<endl;
	cin>>opcion;
	
	switch(opcion){
		case 1:{
				cout<<"Escribe el nombre de la joya"<<endl;
				cin.ignore();
				getline(cin,nombre);
				joyas[contador][0]=nombre;
				
				cout<<"Escribe el material"<<endl;
				getline(cin,material);
				joyas[contador][1]=material;
				
				cout<<"Escribe el precio"<<endl;
				getline(cin,precio);
				joyas[contador][2]=precio
				contador++;
			break;
		}
		case 2:{
			
			break;
		}
		case 3:{
			
			break;
		}
		case 4:{
			
			break;
		}
		case 5:{
			
			break;
		}
	}
}	while(opcion!=5);
	return 0;
}
