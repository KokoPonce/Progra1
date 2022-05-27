//=======Nombre del programa: Cuenta moneda 
//====Archivo: ChilaDaniela-CuentaMoneda.cpp
//====Autor: Chila Daniela
//====Fecha de creacion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022

#include<iostream>
using namespace std;

int main()
{
	int CD_n, CD_c=0, CD_c1=0, CD_c2=0;
	float CD_x, CD_a=0, CD_a1=0, CD_a2=0, CD_m=0.10;
	cout<<"Cantidad de monedas a ingresar : ";
	cin>>CD_n;
	do{
cout<<"Ingrese el valor de la moneda (0.10,0.25) :";
cin>>CD_x;
CD_c=CD_c+1;
CD_a=CD_a+CD_x;
if(CD_x==CD_m){
	CD_c1=CD_c1+1;
	CD_a1=CD_a1+CD_x;
}else{
	CD_c2=CD_c2+1;
	CD_a2=CD_a2+CD_x;
}
}while(CD_c<CD_n);

cout<<"El resultado fue:"<<endl;
cout<<"Cantidad de monedas ingresadas : "<<CD_c<<endl;
cout<<"Cantidad total en dinero contado : "<<CD_a<<endl;
cout<<"Cantidad de monedas de 0.10 ctvs ingresadas : "<<CD_c1<<endl;
cout<<"Cantidad total en dinero de monedas de 0.10 ctvs : "<<CD_a1<<endl;
cout<<"Cantidad de monedas de 0.25 ctvs ingresadas : "<<CD_c2<<endl;
cout<<"Cantidad total en dinero de monedas de 0.25 ctvs : "<<CD_a2<<endl<<endl;

cout<<"//================================================="<<endl;
cout<<"//=======Nombre del programa: Cuenta Moneda "<<endl;
cout<<"//====Archivo: ChilaDaniela-CuentaMoneda.cpp "<<endl;
cout<<"//====Autor: Chila Daniela "<<endl;
cout<<"//====Fecha de creacion: 03-05-2022 " <<endl;
cout<<"//====Fecha de ultima actualizacion: 19-05-2022 "<<endl;
cout<<"//================================================="<<endl;

return 0;

}
