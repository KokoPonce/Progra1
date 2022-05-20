  //================================================


//==> Nombre del programa: Suma
//==> Archivo : SumaN.cpp
//==>Autor: Galarza Ada
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
 #include <iostream>
 using namespace std;
 int main ()
{
	float AC_x,AC_c=0,AC_a=0,AC_N;
	cout<<"ingrese la cantidad de nÃºmeros que va a sumar:";
	cin>>AC_N;
	do{
		cout<<"ingrese el nÃºmero:";
		cin>>AC_x;
		AC_c=AC_c+1;
		AC_a=AC_a+AC_x;
	}while(AC_c<AC_N);
	cout<<"suma total:"<<AC_a;
	cout<<"//================================================"<<endl;
	 cout<<"//==> Nombre del programa: Suma"<<endl;
	 cout<<"//==> Archivo : Suma.cpp"<<endl;
	 cout<<"//==>Autor: Galarza Ada"<<endl;
	 cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	 cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	 cout<<"//================================================="<<endl;
	return 0;
}
