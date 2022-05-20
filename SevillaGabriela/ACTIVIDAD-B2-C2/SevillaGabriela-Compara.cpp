//================================================


//==> Nombre del programa: Comparacion de 2 números
//==> Archivo : SevillaGabriela-compara.cpp
//==>Autor: Gabriela Sevilla
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include <iostream>

using namespace std;

int main()
{
 	int EF_v1, EF_v2;
	cout<<"\nEste programa compara dos numeros entre si."<<endl;
	cout<<"\nIngrese el primer valor:"; cin>>EF_v1;
	cout<<"\nIngrese el segundo valor:"; cin>>EF_v2;
    if(EF_v1>EF_v2) {
        cout<<"\n El valor mayor es "<<EF_v1;
    }   
   else{
        if (EF_v2>EF_v1){
            cout<<"\n El valor mayor es "<<EF_v2;
        }
        else{
            cout<<"\nAmbos valores son iguales.";
        }
    }
   	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparación"<<endl;
	cout<<"//==> Archivo : SevillaGabriela-compara.cpp"<<endl;
	cout<<"//==>Autor: Sevilla Gabriela"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
    
    
return 0;
}
