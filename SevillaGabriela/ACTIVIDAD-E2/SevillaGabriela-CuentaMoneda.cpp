//================================================


//==> Nombre del programa: Contador de monedas
//==> Archivo : SevillaGabriela-CuentaMoneda.cpp
//==>Autor: Gabriela Sevilla
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include <iostream>

using namespace std;

int main()
{
    double EF_diezctv, EF_veintctv, EF_cincuctv, EF_val1, EF_val2, EF_val3, EF_total;
   cout<<"Este programa contara monedas segun su valor.";
   cout<<"\nCuantas monedas de 10 ctv desea ingresar? "; cin>>EF_diezctv;
   cout<<"\nCuantas monedas de 25 ctv desea ingresar? "; cin>>EF_veintctv;
   cout<<"\nCuantas monedas de 50 ctv desea ingresar? "; cin>>EF_cincuctv;
  EF_val1 = EF_diezctv * 10 / 100;
   EF_val2 = EF_veintctv * 20 / 100;
   EF_val3 = EF_cincuctv * 50 / 100;
   EF_total = EF_val1+EF_val2+EF_val3;
   cout<<"\n"<<EF_diezctv;
   cout<<" moneda(s) de 10 ctv juntan un valor de "<<EF_val1;
   cout<<" dolar(es).";
    cout<<"\n"<<EF_veintctv;
   cout<<" moneda(s) de 20 ctv juntan un valor de "<<EF_val2;
   cout<<" dolar(es).";
    cout<<"\n"<<EF_cincuctv;
   cout<<" moneda(s) de 50 ctv juntan un valor de "<<EF_val3;
   cout<<" dolar(es).";
   cout<<"\nEl total de dinero ingresado es de "<<EF_total;
   cout<<" dolares."<<endl;
    cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de Monedas"<<endl;
	cout<<"//==> Archivo : SevillaGabriela-CuentaMoneda.cpp"<<endl;
	cout<<"//==>Autor: Sevilla Gabriela"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
    return 0;
}
