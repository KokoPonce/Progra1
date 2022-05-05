#include <iostream>

using namespace std;

int main()
{
    int cant, acum, suma, num;
    cout<<"\nIngrese la cantidad de numeros a sumar:"; cin>>cant;
    acum=0;
    suma = 0;
 	while(acum<cant){
 	    cout<<"\nIngrese un numero para sumarlo: "; cin>>num;
 	    suma = suma + num;
 	    acum++;
 	}
 	cout<<"\nEl valor de la suma es: "<<suma;
}