//================================================


//==> Nombre del programa: Punto de Venta
//==> Archivo : Puntodeventa.cpp
//==>Autor: Ramirez Niurka
//==>Fecha de elaboración: 01-05-2022
//==>Fecha última actualización: 26-05-2022


//=================================================
#include <iostream>
using namespace std;
int main()
{
	float nc_x, nc_c=0, nc_a=0, nc_n, nc_vb, nc_vi, nc_vdes, nc_vf;
	cout<<"ingrese el número de producto:";
	cin>> nc_n;
	do
	{
		cout<<"ingrese el proceso del producto:";
		cin>> nc_c;
		nc_c= nc_c+1;
		nc_a= nc_a+ nc_x;
	}
	while(nc_c< nc_n);
	nc_vb= nc_a;
	nc_vi= nc_vb*0.12;
	nc_vdes= nc_vb*0.10;
	nc_vf= nc_vb+ nc_vi- nc_vdes;
	cout<<"Su valor final a cancelar es:";
	cout<< nc_vf<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
	cout<<"//==> Archivo : Puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Ramirez Niurka"<<endl;
	cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
	cout<<"//==>Fecha ultima actualización: 26-05-2022"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
