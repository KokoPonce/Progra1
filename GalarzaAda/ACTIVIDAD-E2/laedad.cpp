 //================================================


//==> Nombre del programa: Edad
//==> Archivo : Edad.cpp
//==>Autor: Galarza Ada
//==>Fecha de elaboraci�n: 2022-01-10
//==>Fecha �ltima actualizaci�n: 2022-05- 15


//=================================================
#include <iostream>
using namespace std;
int main()
{
	int AC_aa,AC_ma,AC_da,AC_an,AC_mn,AC_dn,AC_a,AC_m,AC_d;
	cout<<"Ingrese  su año de nacimiento:"<<endl;
	cin>>AC_aa;
	cout<<"Ingrese su mes de nacimiento:"<<endl;
	cin>>AC_ma;
	cout<<"Ingrese su día de nacimiento:"<<endl;
	cin>>AC_da;

	cout<<endl;
	cout<<endl;

    cout<<"Ingrese el año actual:"<<endl;
	cin>>AC_an;
	cout<<"Ingrese el mes actual:"<<endl;
	cin>>AC_mn;
	cout<<"Ingrese el día actual:"<<endl;
	cin>>AC_dn;
	if(AC_da>=AC_dn)
	{
		AC_d=AC_da-AC_dn;
	}
	else{
		AC_ma=AC_ma-1;
		AC_da=AC_da+30;
		AC_d=AC_da-AC_dn;
	}
	if(AC_ma>=AC_mn)
	{
		AC_m=AC_ma-AC_mn;
	}
	else{
		AC_aa=AC_aa-1;
		AC_ma=AC_ma+12;
		AC_m=AC_ma-AC_mn;
	}
	AC_a=AC_aa-AC_an;
	cout<<"usted tiene"<<AC_a<<"años"<<endl;
	cout<<"con"<<AC_m<<"meses"<<endl;
	cout<<"y dias"<<AC_d<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Edad"<<endl;
	cout<<"//==> Archivo : Edad.cpp"<<endl;
	cout<<"//==>Autor: Galarza Ada"<<endl;
	cout<<"//==>Fecha de elaboraci�n: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci�n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}
