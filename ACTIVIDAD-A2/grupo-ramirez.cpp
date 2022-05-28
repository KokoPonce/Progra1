// Autores: Canizares Jesus, Chila Daniela, Galarza Ada, Ramirez Niurka, Sevilla Gabriela
// Fecha de creacion: 01-05-2022
// Fecha de ultima actualizacion: 26-05-2022

#include<iostream>
#include<stdlib.h>
using namespace std;
#include "NiurkaR.h"

int main(){

	int op,flag;

	do{
			system("clear");
			cout<<"*****PROGRAMAS*****"<<endl<<endl;
			cout<<"1.- Trabajos de Canizares Jesus. \n";
			cout<<"2.- Trabajos de Chila Daniela. \n";
			cout<<"3.- Trabajos de Galarza Ada. \n"; 
			cout<<"4.- Trabajos de Ramirez Niurka. \n";
			cout<<"5.- Trabajos de Sevilla Gabriela. \n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opción : "; cin>>op; //la variable op sirve para la opción a escoger
			switch(op){
				case 1:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJO DE CANIZAREZ JESUS ";			
					break;
				case 2:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJOS de Chila Daniela"<<endl;
					break;
				case 3:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJOS DE GALARZA ADA ";
					break;
				case 4:
					cout<<"\n AQUI PUEDO REVISAR LOS TRABAJOS DE Ramirez Niurka ";
                                        RN_Menu();
					break;
				case 5:
                                        cout<<"\n AQUI PUEDO REVISAR LOS TRABAJOS DE SEVILLA GABRIELA ";
                                        break;

				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }		  
				if(op==0){
					cout<<"Quieres salir del sistema (presiona ENTER) : "<<endl;

				}
				   flag=cin.ignore().get(); // Esta línea detiene la pantalla hasta que el usuario presione alguna tecla

	}while(op!=0);

         cout<<endl<<"// Autores: Canizares Jesus, Chila Daniela, Galarza Ada, Ramirez Niurka, Sevilla Gabriela   \n";
	 cout<<"==================================================================================================\n";
         cout<<"//                                Fecha de creación: 01-05-2022                                   \n";
	 cout<<"//================================================================================================\n";
         cout<<"//                          Fecha de ultima actualizacion: 26-05-2022                             \n";
	 cout<<"//================================================================================================\n";
         system("color 2");
	return(0);

}
