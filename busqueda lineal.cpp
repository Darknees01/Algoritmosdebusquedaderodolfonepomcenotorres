
#include <iostream>
using namespace std;
int n,i,a[10],nb,b;

void ingresar(){
	cout<<"ingrese tamaño del arreglo"<<endl;
	cin>>n;
	cout<<"ingresar elementos"<<endl;
	
	
	for(i=1;i<=n;i++){
		cout<<"a["<<i<<"] : ";
		cin>>a[i];
	}
	cout<<"ingrese numero a buscar"<<endl;
	cin>>nb;
	
	for(i=1;i<=n;i++){
		
		if(nb=a[i]){
			b=1;
			//cout<<"numero encontrado"<<endl;
		}
		/*else{
			cout<<"numero NO encontrado"<<endl;
		}*/
		
	}
	
	if(b){
		cout<<"numero encontrado"<<endl;
		}
	else
		{
		
			cout<<endl<<" Numero buscado "<<nb<<endl;
			cout<<" no se encuentra en el arreglo "<<endl;
		}
	
	
	
}

int main(int argc, char *argv[]) {
	ingresar();
	
	return 0;
}

