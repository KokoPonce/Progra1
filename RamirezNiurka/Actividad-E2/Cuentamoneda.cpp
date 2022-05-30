//================================================


//==> Nombre del programa: Cuentamoneda
//==> Archivo : Cuentamoneda.cpp
//==>Autor: Ramirez Niurka
//==>Fecha de elaboración: 01-05-2022
//==>Fecha última actualización: 26-05-2022


//=================================================
#include <iostream>
using namespace std;
int main()
{
	int nc_n, nc_c=0, nc_c1=0, nc_c2=0;
	float nc_x, nc_a=0, nc_a1=0, nc_a2=0;
	cout<<"Cantidad de monedas a ingresar:";
	cin>> nc_n;
	do{
		cout<<"ingrese el valor de la moneda (0.10,0.25) :";
		cin>> nc_x;
		nc_c= nc_c+1;
		nc_a= nc_a+ nc_x;
		if(nc_x==0.10){
			nc_c1= nc_c1+1;
			nc_a1= nc_a1+nc_x;
		}else{
			nc_c2=nc_c2+1;
			nc_a2=nc_a2+nc_x;
		}
	}while(nc_c<nc_n);
	cout<<"el resultado fue:"<<endl;
	cout<<"cantidad de monedas ingresadas:"<<nc_c<<endl;
	cout<<"cantidad total de dinero contado:"<<nc_a<<endl;
	cout<<"cantidad de monedas de 0.10c ingresadas:"<<nc_c1<<endl;
	cout<<"cantidad total en dinero de monedas de 0.10cc :"<<nc_a1<<endl;
	cout<<"cantidad de monedas de 0.25c ingresadas:"<<nc_c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25cc :" <<nc_a2<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Cuentamoneda"<<endl;
	cout<<"//==> Archivo : Cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Ramirez Niurka"<<endl;
	cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
	cout<<"//==>Fecha ultima actualización: 26-05-2022"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
