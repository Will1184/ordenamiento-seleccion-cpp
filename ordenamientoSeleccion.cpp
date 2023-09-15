#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int numeros[]={2,4,1,5,3};
	int i,j,aux,min;
	//Ordenamiento de Seleccion
	for(i=0;i<5;i++){
		min=i;
		for(j=i;j<5;j++){
			if(numeros[j] < numeros[min]){
				min = j;
			}
		}
		aux = numeros[i];
		numeros[i]=numeros[min];
		numeros[min]=aux;		
	}
	
	cout<<"Orden Ascendente  ";
	for(i=0;i<5;i++){
		cout<<numeros[i];
	}
	cout<<"\nOrden Descendente ";
	for(i=4;i>-1;i--){
		cout<<numeros[i];
	}
	
	getch();
	return 0;
}
