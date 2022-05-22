//================================================


//==> Nombre del programa: Edad
//==> Archivo : SevillaGabriela-Laedad.cpp
//==>Autor: Gabriela Sevilla
//==>Fecha de elaboración: 2022-01-10
//==>Fecha última actualización: 2022-05- 15


//=================================================
#include <iostream>

using namespace std;

int main()
{
    int EF_ano, EF_mes, EF_dia, EF_anoa, EF_mesa, EF_diaa, EF_edano, EF_anoeda, EF_meses;
    cout<<"\nEste programa calcula su edad con dias y meses de vida.";
    cout<<"\nIngrese su aÃ±o de nacimiento: "; cin>>EF_ano;
    cout<<"\nIngrese su mes en numero de nacimiento: "; cin>>EF_mes;
    cout<<"\nIngrese su dia de nacimiento; "; cin>>EF_dia;
    cout<<"\nIngrese el aÃ±o actual: "; cin>>EF_anoa;
    cout<<"\nIngrese el mes en numero actual: "; cin>>EF_mesa;
    cout<<"\nIngrese el dia actual: "; cin>>EF_diaa;
   
   if(EF_mesa<EF_mes){
        EF_anoeda = EF_anoa - EF_ano - 1;
        EF_meses = (12 - EF_mes) +EF_mesa;
        cout<<"\nSu edad es de "<<EF_anoeda;  
        cout<<" aÃ±os, " <<EF_meses;
        cout<<" meses, y " <<EF_diaa;
        cout<<" dias.";
   }
   if(EF_mesa>EF_mes){
       EF_anoeda = EF_anoa - EF_ano;
      EF_meses = EF_mesa-EF_mes;
        cout<<"\nSu edad es de "<<EF_anoeda;  
        cout<<" aÃ±os, " <<EF_meses;
        cout<<" meses, y " <<EF_diaa;
        cout<<" dias.";  
   }
   if(EF_mesa==EF_mes){
       EF_anoeda = EF_anoa - EF_ano;
        cout<<"\nSu edad es de "<<EF_anoeda;  
        cout<<" aÃ±os, y "<<EF_diaa;
        cout<<" dias."; 
   }
    cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Edad"<<endl;
	cout<<"//==> Archivo : SevillaGabriela-Laedad.cpp"<<endl;
	cout<<"//==>Autor: Sevilla Gabriela"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
    
   
   return 0;
}
