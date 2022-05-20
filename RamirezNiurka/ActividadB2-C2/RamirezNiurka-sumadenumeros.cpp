//================================================
//==> Nombre del programa: Suma de numeros
//==> Archivo : sumadenumeros.cpp
//==>Autor: Niurka Ramirez Castro
//==>Fecha de elaboración: 01-05-2022
//==>Fecha ultima actualización: 20-05-2022
//=================================================

#include<iostream>
using namespace std;

int main()
{
  int nc_c=0,nc_n;
  float nc_x,nc_a=0;
  cout<<"Ingrese la cantidad de numeros que desea sumar:"; 
  cin>>nc_n;
  do{
	  cout<<"Ingresar numero : "; 
	  cin>>nc_x;
	  nc_c=nc_c+1;
	  nc_a=nc_a+nc_x;
  }while(nc_c<nc_n);


cout<<endl<<"//================================================"<<endl;
cout<<"//==> Nombre del programa: Suma de numeros"<<endl;
cout<<"//==> Archivo : sumadenumeros.cpp"<<endl;
cout<<"//==>Autor: Niurka Ramirez Castro"<<endl;
cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
cout<<"//==>Fecha ultima actualización: 20-05-2022"<<endl;
cout<<"//================================================="<<endl;



  cout<<"La suma de los "<<nc_n<<" números fue "<<nc_a<<endl;
  return 0;
}
