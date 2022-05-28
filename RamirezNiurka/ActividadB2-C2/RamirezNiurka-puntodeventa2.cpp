//================================================


//==> Nombre del programa: Punto de Venta
//==> Archivo : RamirezNiurka-Puntodeventa2.cpp
//==>Autor: Ramirez Niurka
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05-25
//=================================================
#include <iostream>
using namespace std;
int main()
{
	float nc_x,nc_c=0,nc_a=0,nc_n,nc_vb,nc_vi,nc_des,nc_vf;
	cout<<"Ingresar el número de productos:";
	cin>>nc_n;
	do
	{
		cout<<"Ingresar el valor del producto:";
		cin>>nc_c;
		nc_c= nc_c+1;
		nc_a= nc_a+ nc_x;
	}
	while(nc_c<nc_n);
	nc_vb= nc_a;
	nc_vi= nc_vb*0.12;
	nc_des= nc_vb*0.10;
	nc_vf= nc_vb+ nc_vi- nc_des;
	cout<<"El valor final a cancelar es:";
	cout<< nc_vf<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
	cout<<"//==> Archivo : RamirezNiurka-Puntodeventa2.cpp "<<endl;
	cout<<"//==>Autor: Ramirez Niurka"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

