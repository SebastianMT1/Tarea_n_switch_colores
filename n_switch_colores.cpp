#include<iostream>

using namespace std;

int main(){
char seleccion;

cout<<"Ingrese una letra en mayuscula (R,Y,B,W,K,C,G): ";
cin>> seleccion;

switch (seleccion){

case 'R': 
cout<< "Rojo";
    break;

    case 'Y': 
cout<< "Amarillo";
    break;

    case 'B': 
cout<< "Azul";
    break;

    case 'W': 
cout<< "Blanco";
    break;

    case 'K': 
cout<< "Negro";
    break;

    case 'C': 
cout<<"Cian";
    break;

    case 'G': 
cout<<"Verde";
    break;

default:
cout<<"Caracter no valido";
    break;
}

return 0;
}