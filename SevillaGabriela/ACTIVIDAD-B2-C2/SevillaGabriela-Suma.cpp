//================================================


//==> Nombre del programa: Suma
//==> Archivo : SevillaGabriela-Suma.cpp
//==>Autor: Gabriela Sevilla
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include <iostream>

using namespace std;

int main()
{
    int EF_cant, EF_acum, EF_suma, EF_num;
    cout<<"\nIngrese la cantidad de numeros a sumar:"; cin>>EF_cant;
    EF_acum=0;
    EF_suma = 0;
 	while(EF_acum<EF_cant){
 	    cout<<"\nIngrese un numero para sumarlo: "; cin>>EF_num;
 	    EF_suma = EF_suma + EF_num;
 	    EF_acum++;
 	}
 	cout<<"\nEl valor de la suma es: "<<EF_suma;
 	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Suma"<<endl;
	cout<<"//==> Archivo : SevillaGabriela-Suma.cpp"<<endl;
	cout<<"//==>Autor: Sevilla Gabriela"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
    
}
