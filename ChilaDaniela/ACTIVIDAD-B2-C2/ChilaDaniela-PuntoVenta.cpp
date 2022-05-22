//=======Nombre del programa: Punto de venta
//====Nombre del archivo: ChilaDaniela-PuntoVenta.cpp
//====Autor: Chila Daniela
//====Fecha de elaboracion: 03-05-2022
//====Fecha de ultima actualizacion: 19-05-2022

#include<iostream>
using namespace std;
int main()
{
	int CD_c=0, CD_P;
	float CD_A=0,CD_x,CD_Tb,CD_Piva,CD_Pdsc,CD_iva=0.12,CD_dsc=0.30,CD_vt;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>CD_P;
	do{
		cout<<"Ingrese el valor de los productos: ";
		cin>>CD_x;
		CD_c=CD_c+1;
		CD_A=CD_A+CD_x;
		CD_Piva=CD_A*CD_iva;
		cout<<"El valor del iva de la compra es de: $"<<CD_Piva<<endl;
		CD_Pdsc=CD_A*CD_dsc;
		cout<<"El valor del descuento de su compra es de:$"<<CD_Pdsc<<endl;
		CD_Tb=CD_Piva+CD_Pdsc;
	}while(CD_c<CD_P);
	if(CD_Tb==CD_A){
		cout<<"Su compra aplica para un descuento: "<<CD_Tb<<endl;
	CD_iva=CD_Tb*CD_Piva/100;
	CD_dsc=CD_Tb*CD_Pdsc/100;
}else{
	CD_vt=CD_A+CD_Piva-CD_Pdsc;

cout<<"//======Nombre del programa: Punto de venta"<<endl;
cout<<"//====Nombre del archivo: ChilaDaniela-PuntoVenta.cpp "<<endl;
cout<<"//====Autor: Chila Daniela "<<endl; 
cout<<"//====Fecha de elaboracion: 03-05-2022 "<<endl;
cout<<"//====Fecha de ultima actualizacion: 19-02-2022 "<<endl;

	cout<<"El valor total es de:$ "<<CD_vt<<endl;
}
return(0);
}
