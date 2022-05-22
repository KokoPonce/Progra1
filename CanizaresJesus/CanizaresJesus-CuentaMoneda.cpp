#include <iostream>

using namespace std;

int main()
{
    double diezctv, veintctv, cincuctv, val1, val2, val3, total;
   cout<<"Este programa contara monedas segun su valor.";
   cout<<"\nCuantas monedas de 10 ctv desea ingresar? "; cin>>diezctv;
   cout<<"\nCuantas monedas de 25 ctv desea ingresar? "; cin>>veintctv;
   cout<<"\nCuantas monedas de 50 ctv desea ingresar? "; cin>>cincuctv;
   val1 = diezctv * 10 / 100;
   val2 = veintctv * 20 / 100;
   val3 = cincuctv * 50 / 100;
   total = val1+val2+val3;
   cout<<"\n"<<diezctv;
   cout<<" moneda(s) de 10 ctv juntan un valor de "<<val1;
   cout<<" dolar(es).";
    cout<<"\n"<<veintctv;
   cout<<" moneda(s) de 20 ctv juntan un valor de "<<val2;
   cout<<" dolar(es).";
    cout<<"\n"<<cincuctv;
   cout<<" moneda(s) de 50 ctv juntan un valor de "<<val3;
   cout<<" dolar(es).";
   cout<<"\nEl total de dinero ingresado es de "<<total;
   cout<<" dolares.";
    return 0;
}
