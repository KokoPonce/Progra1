 //================================================


//==> Nombre del programa: CuentaMoneda
//==> Archivo : CuentaMoneda.cpp
//==>Autor: Galarza Ada
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include <iostream>
using namespace std;
int main()
{
	int AC_n, AC_c=0, AC_c1=0, AC_c2=0;
	float AC_x, AC_a=0,AC_a1=0,AC_a2=0;
	cout<<"Cabtidad de monedas a ingresar:";
	cin>>AC_n;
	do{
		cout<<"ingrese el valor de la moneda (0.10,0.25) :";
		cin>>AC_x;
		AC_c=AC_c+1;
		AC_a=AC_a+AC_x;
		if(AC_x==0.10){
			AC_c1=AC_c1+1;
			AC_a1=AC_a1+AC_x;
		}else{
			AC_c2=AC_c2+1;
			AC_a2=AC_a2+AC_x;
		}
	}while(AC_c<AC_n);
	cout<<"el resultado fue:"<<endl;
	cout<<"cantidad de monedas ingresadas:"<<AC_c<<endl;
	cout<<"cantidad total de dinero contado:"<<AC_a<<endl;
	cout<<"cantidad de monedas de 0.10c ingresadas:"<<AC_c1<<endl;
	cout<<"cantidad total en dinero de monedas de 0.10cc :"<<AC_a1<<endl;
	cout<<"cantidad de monedas de 0.25c ingresadas:"<<AC_c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25cc :" <<AC_a2<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: CuentaMoneda"<<endl;
	cout<<"//==> Archivo : CuentaMoneda.cpp"<<endl;
	cout<<"//==>Autor: Galarza Ada"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
