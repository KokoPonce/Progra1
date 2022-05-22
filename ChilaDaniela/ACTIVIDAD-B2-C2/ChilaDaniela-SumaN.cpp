//=======Nombre del programa: Suma de dos numeros
//====Archivo: ChilaDaniela-SumaN.cpp
//====Autor: Chila Daniela
//====Fecha de elaboracion: 03-05-2022
//====Fexha de ultima actualizacion: 19-05-2022

#include<iostream>
using namespace std;

int main()
{
	int CD_c=0, CD_n;
	float CD_s=0, CD_x;
	cout<<"Ingrese la cantidad de numeros a sumar : ";
	cin>>CD_n;
	do{
         
		cout<<"Ingrese un numero :";
		cin>>CD_x;
		CD_c=CD_c+1;
		CD_s=CD_s+CD_x;
	}while(CD_c<CD_n);

cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: ChilaDaniela-SumaN.cpp"<<endl;
cout<<"//====Autor: Chila Daniela"<<endl;
cout<<"//====Fecha de elaboracion: 03-05-2022"<<endl;
cout<<"//====Fecha de ultima actializacion: 19-05-2022"<<endl;

	cout<<"La suma de los numeros es :"<<CD_s<<endl;
	return(0);
}
