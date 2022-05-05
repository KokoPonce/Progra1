#include <iostream>

using namespace std;

int main()
{
    int cant, acum, precio, descuento;
    double iva, bruto, total;
    acum = 0;
    cout<<"\nIngrese cuantos productos va a facturar: "; cin>>cant;
 	while(acum<cant){
 	    cout<<"\nIngrese el precio del producto: "; cin>>precio;
 	    cout<<"\nIngrese el precio de descuento del producto: "; cin>>descuento;
 	    bruto = (precio - descuento);
 	    iva = bruto * 0.19;
 	    total = bruto + iva;
 	    acum++;
 	    cout<<"\nPrecio bruto del producto: "<<precio;
 	    cout<<"\nDescuento del producto: "<<descuento;
 	    cout<<"\nPrecio del iva del producto: "<<iva;
 	    cout<<"\nPrecio total del producto: "<<total;
 	  
 	}
 
}