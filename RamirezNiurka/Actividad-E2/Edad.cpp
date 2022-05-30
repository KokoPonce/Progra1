//================================================


//==> Nombre del programa: Edad
//==> Archivo : Edad.cpp
//==>Autor: Ramirez Niurka
//==>Fecha de elaboración: 01-05-2022
//==>Fecha última actualización: 26-05-2022


//=================================================
#include <iostream>
using namespace std;
int main()
{
	int nc_aa,nc_ma,nc_da,nc_an,nc_mn,nc_dn,nc_a,nc_m,nc_d;
	cout<<"Ingrese  su año de nacimiento:"<<endl;
	cin>>nc_aa;
	cout<<"Ingrese su mes de nacimiento:"<<endl;
	cin>>nc_ma;
	cout<<"Ingrese su dia de nacimiento:"<<endl;
	cin>>nc_da;

	cout<<endl;
	cout<<endl;

    cout<<"Ingrese el año actual:"<<endl;
	cin>>nc_an;
	cout<<"Ingrese el mes actual:"<<endl;
	cin>>nc_mn;
	cout<<"Ingrese el dia actual:"<<endl;
	cin>>nc_dn;
	if(nc_da>=nc_dn)
	{
		nc_d=nc_da-nc_dn;
	}
	else{
		nc_ma= nc_ma-1;
		nc_da= nc_da+30;
		nc_d= nc_da- nc_dn;
	}
	if(nc_ma>= nc_mn)
	{
		nc_m= nc_ma- nc_mn;
	}
	else{
		nc_aa= nc_aa-1;
		nc_ma= nc_ma+12;
		nc_m= nc_ma- nc_mn;
	}
	nc_a= nc_aa- nc_an;  
	cout<<"usted tiene"<< nc_a<<"años"<<endl;
	cout<<"con"<< nc_m<<"meses"<<endl;
	cout<<"y dias"<< nc_d<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Edad"<<endl;
	cout<<"//==> Archivo : Edad.cpp"<<endl;
	cout<<"//==>Autor: Ramirez Niurka"<<endl;
	cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
	cout<<"//==>Fecha ultima actualización: 26-05-2022"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
