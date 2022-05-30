// Autores: Canizares Jesus, Chila Daniela, Galarza Ada, Ramirez Niurka, Sevilla Gabriela
// Fecha de creacion: 2022-05-20
// Fecha de ultima actualizacion: 2022-05-24

#include<iostream>
#include<stdlib.h>
#include <locale.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
#include"ChilaDaniela.h"
#include"EF_FUNCIONES.h"
#include"AC_FUNCIONES.h"
#include"NiurkaR.h"

int main()
{
   setlocale(LC_ALL, "");
	int op,flag;

	do{
			system("cls");
			cout<<"**************PROGRAMAS**************"<<endl<<endl;
			cout<<"1.- Trabajos de Canizares Jesus. \n";
			cout<<"2.- Trabajos de Chila Daniela. \n";
			cout<<"3.- Trabajos de Galarza Ada. \n"; 
			cout<<"4.- Trabajos de Ramirez Niurka. \n";
			cout<<"5.- Trabajos de Sevilla Gabriela. \n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE CANIZAREZ JESUS ";			
					break;
				case 2:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO CHILA DANIELA "<<endl;
					ChilaDanielamenu();
					break;
				case 3:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE GALARZA ADA ";
					AC_Menu();
					break;
				case 4:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE RAMIREZ NIURKA ";
					RN_Menu();
					break;
				case 5:
                    cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE SEVILLA GABRIELA ";
                    EF_Menu();
                    break;
				
				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla
				   
	}while(op!=0);
	
         cout<<endl<<"// Autores: Canizares Jesus, Chila Daniela, Galarza Ada, Ramirez Niurka, Sevilla Gabriela   \n";
	 cout<<"==================================================================================================\n";
         cout<<"//                                Fecha de creación: 2022-05-20                                   \n";
	 cout<<"//================================================================================================\n";
         cout<<"//                          Fecha de ultima actualizacion: 2022-05-24                             \n";
	 cout<<"//================================================================================================\n";
         system("color 2");
	return(0);

}
