 //================================================


//==> Nombre del programa: Punto de Venta
//==> Archivo : PuntoVenta.cpp
//==>Autor: Galarza Ada
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include <iostream>
using namespace std;
int main()
{
	float AC_x,AC_c=0,AC_a=0,AC_n,AC_vb,AC_vi,AC_vdes,AC_vf;
	cout<<"ingrese el numero de producto:";
	cin>>AC_n;
	do
	{
		cout<<"ingrese el proceso del producto:";
		cin>>AC_c;
		AC_c=AC_c+1;
		AC_a=AC_a+AC_x;
	}
	while(AC_c<AC_n);
	AC_vb=AC_a;
	AC_vi=AC_vb*0.12;
	AC_vdes=AC_vb*0.10;
	AC_vf=AC_vb+AC_vi-AC_vdes;
	cout<<"su valor final a cancelar es:";
	cout<<AC_vf<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
	cout<<"//==> Archivo : PuntoVenta.cpp"<<endl;
	cout<<"//==>Autor: Galarza Ada"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

