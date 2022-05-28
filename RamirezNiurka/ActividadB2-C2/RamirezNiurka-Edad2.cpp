//================================================
//==> Nombre del programa: La edad
//==> Archivo : RamirezNiurka-Edad2.cpp
//==>Autor: Ramirez Niurka
//==>Fecha de elaboración: 03-05-2022
//==>Fecha última actualización: 25-05-2022
//=================================================
#include <iostream>
using namespace std;
int main()
{
int nc_da,nc_ma,nc_aa,nc_dn, nc_mn, nc_an, nc_a, nc_m, nc_d;
	cout<<"Ingrese la fecha actual: Dia Mes Año :";
	cin>> nc_da>> nc_ma>> nc_aa;
	cout<<"Ingrese su fecha de nacimiento: Dia Mes Año :";
	cin>> nc_dn>> nc_mn>> nc_an;
	if(nc_da< nc_dn){
		nc_da= nc_da+30;
		nc_ma= nc_ma-1;
		nc_d= nc_da-nc_dn;
	}
	else{
		nc_d= nc_da-nc_dn;
	}
	if(nc_ma< nc_mn){
		nc_ma= nc_ma+12;
		nc_aa= nc_aa-1;
		nc_m= nc_ma-nc_mn;
	}
	else{
		nc_m= nc_ma-nc_mn;
	}
	nc_d= nc_aa-nc_an;

	cout<<"Usted tiene: "<< nc_d<<" años "<< nc_m<<" meses y "<< nc_d<<" dias "<<endl<<endl;

cout<<"//================================================="<<endl;
cout<<"//=======Nombre del programa: La edad "<<endl;
cout<<"//====Archivo: RamirezNiurka-Edad2.cpp "<<endl;
cout<<"//====Autor: Ramirez Niurka "<<endl;
cout<<"//====Fecha de creacion: 03-05-2022 "<<endl;
cout<<"//====Fecha de ultima actualizacion: 25-05-2022 "<<endl;
cout<<"//================================================="<<endl;

	return(0);
}
