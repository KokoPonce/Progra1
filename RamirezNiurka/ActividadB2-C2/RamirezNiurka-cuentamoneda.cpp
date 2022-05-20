

//================================================
//==> Nombre del programa: Contador de monedas
//==> Archivo : RamirezNiurka-cuentamoneda.cpp
//==>Autor: Niurka Ramirez Castro
//==>Fecha de elaboración: 01-05-2022
//==>Fecha ultima actualización: 2022-05-20
//=================================================

#include<iostream>
using namespace std;

int main()
{

        int nc_c=0,nc_c1=0,nc_c2=0,nc_n;
        float nc_x,nc_a=0,nc_a1=0,nc_a2=0;
        cout<<"ingrese nc_n :";
        cin>>nc_n;
        do{

        cout<<"ingrese nc_x: ";
        cin>>nc_x;
        nc_c=nc_c+1;
        nc_a=nc_a+1;
        if(nc_x==0.10)
        {
                nc_c1=nc_c1+1;
                nc_a1=nc_a1+nc_x;


        }else{

                nc_c2=nc_c2+1;
                nc_a2=nc_a2+nc_x;

        }

        }while(nc_c<nc_n);
	return 0; 
}
