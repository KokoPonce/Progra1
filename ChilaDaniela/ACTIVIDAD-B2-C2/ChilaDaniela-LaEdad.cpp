//=======Nombre del programa: La edad
//====Archivo: ChilaDaniela-laEdad.cpp
//====Autor: Chila Daniela
//====Fecha de creacion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022

#include<iostream>
using namespace std;

int main ()
{
	int CD_da,CD_ma,CD_aa,CD_dn,CD_mn,CD_an,DA_a,CD_m,CD_d;
	cout<<"Ingrese la fecha actual: Dia Mes Año :";
	cin>>CD_da>>CD_ma>>CD_aa;
	cout<<"Ingrese su fecha de nacimiento: Dia Mes Año :";
	cin>>CD_dn>>CD_mn>>CD_an;
	if(CD_da<CD_dn){
		CD_da=CD_da+30;
		CD_ma=CD_ma-1;
		CD_d=CD_da-CD_dn;
	}
	else{
		CD_d=CD_da-CD_dn;
	}
	if(CD_ma<CD_mn){
		CD_ma=CD_ma+12;
		CD_aa=CD_aa-1;
		CD_m=CD_ma-CD_mn;
	}
	else{
		CD_m=CD_ma-CD_mn;
	}
	CD_d=CD_aa-CD_an;

cout<<"//=======Nombre del programa: La edad "<<endl;
cout<<"//====Archivo: ChilaDaniela-LaEdad.cpp "<<endl;
cout<<"//====Autor: Chila Daniela "<<endl;
cout<<"//====Fecha de creacion: 03-05-2022 "<<endl;

cout<<"Usted tiene: " <<CD_d<< "años" <<CD_m<< "meses y"<<CD_d<< "dias"<<endl;
	return(0);
}
