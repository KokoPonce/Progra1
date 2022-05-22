#include <iostream>

using namespace std;

int main()
{
    int EF_cant, EF_acum, EF_precio, EF_descuento;
    double EF_iva, EF_bruto, EF_total;
    EF_acum = 0;
    cout<<"\nIngrese cuantos productos va a facturar: "; cin>>EF_cant;
 	while(EF_acum<EF_cant){
 	    cout<<"\nIngrese el precio del producto: "; cin>>EF_precio;
 	    cout<<"\nIngrese el precio de descuento del producto: "; cin>>EF_descuento;
 	    EF_bruto = (EF_precio - EF_descuento);
 	    EF_iva = EF_bruto * 0.19;
 	    EF_total = EF_bruto + EF_iva;
 	    EF_acum++;
 	    cout<<"\nPrecio bruto del producto: "<<EF_precio;
 	    cout<<"\nDescuento del producto: "<<EF_descuento;
 	    cout<<"\nPrecio del iva del producto: "<<EF_iva;
 	    cout<<"\nPrecio total del producto: "<<EF_total<<endl;
 	    cout<<"//================================================"<<endl;
		cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
		cout<<"//==> Archivo : SevillaGabriela-PuntoVenta.cpp"<<endl;
		cout<<"//==>Autor: Sevilla Gabriela"<<endl;
		cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
		cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
		cout<<"//================================================="<<endl;
 	  
 	}
 
}
