#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int i,n,A[100],nbuscar,primero=0,ultimo,centro,encontrado=0;
	
	cout<<endl<<" ingrese dimension del arreglo : ";
	cin>>n;
	
	for(i=1;i<=n;i++){
		cout<<" Ingrese Valor en A["<<i<<"] = ";
		cin>>A[i];
	}
	
	cout<<" ingrese numero a buscar  "<<endl;
	cin>>nbuscar;
	ultimo=n;
	
	while(primero<=ultimo && (!encontrado)){
		centro=(primero+ultimo)/2;
	if(nbuscar==A[centro]){
		encontrado=1;
	}
	
	else{
		if(nbuscar>A[centro])
		primero=centro+1;
		else
			ultimo=centro-1;
			}
	}
	
	if(encontrado){
		cout<<" numero encontrado"<<endl;
		cout<<" Esta en la posicion :"<<centro<<endl;
	}
	else
		{
			cout<<endl<<" Numero buscado "<<nbuscar<<endl;
		cout<<" no se encuentra en el arreglo "<<endl;
		}
	
	return 0;
}



