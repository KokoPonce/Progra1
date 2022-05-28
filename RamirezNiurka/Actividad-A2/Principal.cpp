// Menu de Ramirez Niurka
//
//
//
//
//
//
//
int RamirezNiurka-comparar(){
 
	 float nc_A,nc_B;
	 cout<<"Ingrese los valores de A,B:";
	 cin>>nc_A>>nc_B;
	 if(nc_A==nc_B) {
		 cout<<"Son iguales:";
         }else
		 if(nc_A>nc_B)
		 {
			 cout<<"A es mayor:";
		 }else{
			 cout<<"B es mayor:";
		 }
	 cout<<"//================================================"<<endl;
	 cout<<"//==> Nombre del programa: comparar"<<endl;
	 cout<<"//==> Archivo : RamirezNiurka-comparar.cpp"<<endl;
	 cout<<"//==>Autor: Ramirez Niurka"<<endl;
	 cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
	 cout<<"//==>Fecha ultima actualización: 26-05-2022"<<endl;
	 cout<<"//================================================="<<endl;
	 return 0;
 }

int RamirezNiurka-cuentamoneda(){
int nc_n, nc_c=0, nc_c1=0, nc_c2=0;
	float nc_x, nc_a=0,nc_a1=0,nc_a2=0;
	cout<<"Cantidad de monedas a ingresar:";
	cin>>nc_n;
	do{
		cout<<"ingrese el valor de la moneda (0.10,0.25) :";
		cin>>nc_x;
		nc_c=nc_c+1;
		nc_a=nc_a+nc_x;
		if(nc_x==0.10){
			nc_c1=nc_c1+1;
			nc_a1=nc_a1+nc_x;
		}else{
			nc_c2=nc_c2+1;
			nc_a2=nc_a2+nc_x;
		}
	}while(nc_c<nc_n);
	cout<<"el resultado fue:"<<endl;
	cout<<"cantidad de monedas ingresadas:"<<nc_c<<endl;
	cout<<"cantidad total de dinero contado:"<<nc_a<<endl;
	cout<<"cantidad de monedas de 0.10c ingresadas:"<<nc_c1<<endl;
	cout<<"cantidad total en dinero de monedas de 0.10cc :"<<nc_a1<<endl;
	cout<<"cantidad de monedas de 0.25c ingresadas:"<<nc_c2<<endl;
	cout<<"cantidad total en dinero de monedas de 0.25cc :" <<nc_a2<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: cuentamoneda"<<endl;
	cout<<"//==> Archivo : RamirezNiurka-cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Ramirez Niurka"<<endl;
	cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
	cout<<"//==>Fecha de ultima actualización: 26-05-2022"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int RamirezNiurka-Edad(){

	int nc_aa,nc_ma,nc_da,nc_an,nc_mn,nc_dn,nc_a,nc_m,nc_d;
	cout<<"Ingrese  su año de nacimiento:"<<endl;
	cin>>nc_aa;
	cout<<"Ingrese su mes de nacimiento:"<<endl;
	cin>>nc_ma;
	cout<<"Ingrese su dia de nacimiento:"<<endl;
	cin>>nc_da;

	cout<<endl;
	cout<<endl;

    cout<<"Ingrese el año actual:"<<endl;
	cin>>nc_an;
	cout<<"Ingrese el mes actual:"<<endl;
	cin>>nc_mn;
	cout<<"Ingrese el dia actual:"<<endl;
	cin>>nc_dn;
	if(nc_da>=nc_dn)
	{
		nc_d=nc_da-nc_dn;
	}
	else{
		nc_ma=nc_ma-1;
		nc_da=nc_da+30;
		nc_d=nc_da-nc_dn;
	}
	if(nc_ma>=nc_mn)
	{
		nc_m=nc_ma-nc_mn;
	}
	else{
		nc_aa=nc_aa-1;
		nc_ma=n_ma+12;
		nc_m=nc_ma-nc_mn;
	}
	nc_a=nc_aa-nc_an;
	cout<<"usted tiene"<<nc_a<<"años"<<endl;
	cout<<"con"<<nc_m<<"meses"<<endl;
	cout<<"y dias"<<nc_d<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Edad"<<endl;
	cout<<"//==> Archivo : RamirezNiurka-Edad.cpp"<<endl;
	cout<<"//==>Autor: Ramirez Niurka"<<endl;
	cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
	cout<<"//==>Fecha ultima actualización: 26-05-2022"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int RamirezNiurka-puntodeventa(){

	float nc_x,nc_c=0,nc_a=0,nc_n,nc_vb,nc_vi,nc_des,nc_vf;
	cout<<"ingrese el numero de producto:";
	cin>>nc_n;
	do
	{
		cout<<"ingrese el proceso del producto:";
		cin>>nc_c;
		nc_c=nc_c+1;
		nc_a=nc_a+nc_x;
	}
	while(nc_c<nc_n);
	nc_vb=nc_a;
	nc_vi=nc_vb*0.12;
	nc_des=nc_vb*0.10;
	nc_vf=nc_vb+nc_vi-nc_des;
	cout<<"su valor final a cancelar es:";
	cout<<nc_vf<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Punto de Venta"<<endl;
	cout<<"//==> Archivo : RamirezNiurka-puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Ramirez Niurka"<<endl;
	cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
	cout<<"//==>Fecha ultima actualización: 26-05-2022"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int RamirezNiurka-sumadenumeros(){

	float nc_x,nc_c=0,nc_a=0,nc_N;
	cout<<"Ingrese la cantidad de numeros que va a sumar:";
	cin>>nc_N;
	do{
		cout<<"ingrese el numero:";
		cin>>nc_x;
		nc_c=nc_c+1;
		nc_a=nc_a+nc_x;
	}while(nc_c<nc_N);
	cout<<"suma total:"<<nc_a;
	cout<<"//================================================"<<endl;
	 cout<<"//==> Nombre del programa: suma de numeros"<<endl;
	 cout<<"//==> Archivo : RamirezNiurka-sumadenumeros.cpp"<<endl;
	 cout<<"//==>Autor: Ramirez Niurka"<<endl;
	 cout<<"//==>Fecha de elaboración: 01-05-2022"<<endl;
	 cout<<"//==>Fecha ultima actualización: 26-05-2022"<<endl;
	 cout<<"//================================================="<<endl;
	return 0;
}

int RamirezNiurkamenu()
{
	int op,flag3;

	do{
			system("clear");
			cout<<"*****Programas de Ramirez Niurka*****"<<endl;
			cout<<"1.- comparar \n";
			cout<<"2.- Cuentamoneda\n";
			cout<<"3.- Edad \n";
			cout<<"4.- Puntodeventa \n";
			cout<<"5.- Sumadenumeros\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opción : "; cin>>op; //la variable op sirve para la opción a escoger
			switch(op){
				case 1:
					system("clear");
					cout<<"\n comparar "<<endl;
					RamirezNiurkaCompara();
					break;
				case 2:
					system("clear");
					cout<<"\n Cuentamoneda ";
					RamirezNiurkacuentamoneda();
					break;
				case 3:
					system("clear");
					cout<<"\n Edad ";
					RamirezNiurkaEdad();
					break;
				case 4:
					system("clear");
					cout<<"\n Puntodeventa ";
					RamirezNiurkapuntodeventa();
					break;
				case 5:
					system("clear");
					cout<<"\n Sumadenumeros ";
					RamirezNiurkasumadenumeros();
					break;

				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				        flag3=cin.ignore().get(); // Esta línea detiene la pantalla hasta que el usuario presione alguna tecla

	}while(op!=0);

        cout<<"===========================================\n";
        cout<<"             Ramirez Niurka                 \n";
         cout<<" Gmail:niurka.ramirez.castro@utelvt.edu.ec\n";
        cout<<"===========================================\n";

	return(0);

}
