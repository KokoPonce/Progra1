//================================================
//==> Nombre del programa: Compara
//==> Archivo : Compara.cpp
//==>Autor: Niurka Ramirez Castro
//==>Fecha de elaboración: 01-05-2022
//==>Fecha ultima actualización: 20-05-2022
//=================================================

#include<iostream>
using namespace std;

int main()
{
	float ncA,ncB;
	cout<<"INGRESE LOS VALORES A B : ";
	cin>>ncA>>ncB;
	if(ncA==ncB){
		cout<<endl<<"el número "<<ncA<<" es igual al número "<<ncB<<endl;
	}else{
		if(ncA<ncB){
			cout<<endl<<"el número   "<<ncA<<" es menor que el número "<<ncB<<endl;
		}else{
			cout<<endl<<"el número "<<ncA<<" es mayor que el número "<<ncB<<endl;
		}
	}
	cout<<endl<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparacion de dos numeros"<<endl;
	cout<<"//==> Archivo : RamirezNiurka-Compara.cpp"<<endl;
	cout<<"//==>Autor: Niurka Ramirez Castro"<<endl;
	cout<<"//==>Fecha de elaboración:19-05-2022"<<endl;
	cout<<"//==>Fecha ultima actualización: 20-05-2022"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
