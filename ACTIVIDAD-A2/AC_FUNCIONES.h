//
// FUNCIONES IMPLEMENTADAS POR Galarza Ada
//
int AC_Suma()
{
	int ac_ax, ac_bx, ac_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>ac_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>ac_bx;
	ac_cx = ac_ax+ac_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<ac_ax<<" + "<<ac_bx<<" es igual a: "<<ac_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: Ada Galarza"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int AC_CuentaMoneda()
{
	int ac_n, ac_c=0, ac_c1=0, ac_c2=0, ac_cl, ac_cz;
	float ac_x, ac_al, ac_a=0, ac_a1=0, ac_a2=0, ac_az;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>ac_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>ac_x;
		ac_c = ac_c+1;
		ac_a = ac_a+ac_x;
		if(ac_x==0.25)
			{
				ac_c1 = ac_c1+1;
				ac_a1 = ac_x+ac_a1;
			}
		else
			{
				ac_c2 = ac_c2+1;
				ac_a2 = ac_a2+ac_x;
			}
	}
	while(ac_c<ac_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<ac_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<ac_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<ac_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<ac_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<ac_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<ac_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Ada Galarza"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int AC_PuntoVenta()
{
	float ac_xx, ac_cc=0, ac_at=0, ac_nn, ac_vb, ac_viva, ac_vdes, ac_vfi, ac_vft;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> ac_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<ac_cc+1 <<": " ;   cin>> ac_xx;
		ac_cc = ac_cc+1;
		ac_at = ac_at+ac_xx;
	}
	while(ac_cc<ac_nn);			
	ac_vb = ac_at;
	ac_viva = ac_vb*0.12;
	ac_vdes = ac_vb*0.10;
	ac_vfi = ac_vb+ac_viva;
	ac_vft = ac_vfi-ac_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<ac_vfi<<endl;
	cout<<"Valor final es: "<<ac_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Ada Galarza"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int AC_Edad()
{
	int ac_diaAct, ac_mesAct, ac_anoAct, ac_diaNac, ac_mesNac, ac_anoNac, ac_anoR, ac_mesR, ac_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> ac_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> ac_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> ac_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> ac_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> ac_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> ac_diaNac;			
	if (ac_anoAct > ac_anoNac)
	{
		if(ac_mesAct > ac_mesNac)	 
		{
			ac_anoR=ac_anoAct-ac_anoNac;	
			ac_mesR=ac_mesAct-ac_mesNac;					
		}
		else
		{
			ac_anoR=ac_anoAct-ac_anoNac-1;	
			ac_mesR=(ac_mesAct+12)-ac_mesNac;					
		}												
		if(ac_diaAct > ac_diaNac)
		{				
			ac_diaR=ac_diaAct-ac_diaNac;
		}
		else
		{
			ac_mesR=ac_mesR-1;
			ac_diaR=(ac_diaAct+30)-ac_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<ac_anoR<< endl;
		cout << " Mes: " <<ac_mesR << endl;
		cout << " Dia: " << ac_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}

int AC_Compara()
{
	int ac_aa, ac_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> ac_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> ac_bb;
	if (ac_aa==ac_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (ac_aa>ac_bb)
		{
		cout<<ac_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<ac_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparación"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: Ada Galarza"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int AC_Menu()
{
	int ac_opp, ac_flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t------PROGRAMA REALIZADO POR Galarza Ada------"<<endl;
		cout<<"\t\t\t----------------MENÚ DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. SUMA DE 2 NÚMEROS"<<endl;
		cout<<"2. CONTADOR DE MONEDAS"<<endl;
		cout<<"3. CALCULADORA DE EDAD"<<endl;
		cout<<"4. COMPARACIÓN DE 2 NÚMEROS"<<endl;
		cout<<"5. CONTROL DE VENTAS"<<endl;
		cout<<"0. REGRESAR AL MENÚ PRINCIPAL"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>ac_opp;
		switch(ac_opp)
		{
			case 1:
				system("cls");
				AC_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				AC_CuentaMoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				AC_Edad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				AC_Compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				AC_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(ac_opp!=0 && ac_opp>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(ac_opp==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				ac_flag=cin.ignore().get();
				cout<<ac_flag<<endl;
				
		}
	}
	while(ac_opp != 0);
	return(0);
}
