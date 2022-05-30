//================================================


//==> Nombre del programa: Suma de números 
//==> Archivo : Sumadenumeros.cpp
//==>Autor: Ramirez Niurka
//==>Fecha de elaboración: 01-05-2022
//==>Fecha última actualización: 26-05-2022


//=================================================
 #include <iostream>
 using namespace std;
 int main ()
{
	float nc_x, nc_c=0, nc_a=0, nc_N;
	cout<<"ingrese la cantidad de números que va a sumar:";
	cin>> nc_N;
	do{
		cout<<"ingrese el número:";
		cin>> nc_x;
		nc_c= nc_c+1;
		nc_a= nc_a+ nc_x;
	}while(nc_c< nc_N);
	cout<<"suma total:"<< nc_a;
	cout<<"//================================================"<<endl;
	 cout<<"//==> Nombre del programa: Suma de números"<<endl;
	 cout<<"//==> Archivo : Sumadenumeros.cpp"<<endl;
	 cout<<"//==>Autor: Galarza Ada"<<endl;
	 cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
	 cout<<"//==>Fecha ultima actualización: 26-05-2022"<<endl;
	 cout<<"//================================================="<<endl;
	return 0;
}
