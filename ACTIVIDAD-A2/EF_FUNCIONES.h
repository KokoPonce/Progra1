//
// FUNCIONES IMPLEMENTADAS POR Sevilla Emily
//
int EF_Suma()
{
	int ef_ax, ef_bx, ef_cx;
	cout<<"\n\tSUMA DE 2 NÚMEROS"<<endl;
	cout<<"Ingrese el primer número a sumar: "; cin>>ef_ax;
	cout<<"Ingrese el segundo número a sumar: "; cin>>ef_bx;
	ef_cx = ef_ax+ef_bx;
	cout<<"\n\tResultado"<<endl;
	cout<<"El resultado de la suma entre "<<ef_ax<<" + "<<ef_bx<<" es igual a: "<<ef_cx<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: suma de 2 numeros"<<endl;
	cout<<"//==> Archivo : suma.cpp"<<endl;
	cout<<"//==>Autor: Emily Sevilla"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int EF_CuentaMoneda()
{
	int ef_n, ef_c=0, ef_c1=0, ef_c2=0, ef_cl, ef_cz;
	float ef_x, ef_al, ef_a=0, ef_a1=0, ef_a2=0, ef_az;
	cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
	cout<<"Cantidad de monedas a ingresar: ";  cin>>ef_n;
	do
	{
		cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>ef_x;
		ef_c = ef_c+1;
		ef_a = ef_a+ef_x;
		if(ef_x==0.25)
			{
				ef_c1 = ef_c1+1;
				ef_a1 = ef_x+ef_a1;
			}
		else
			{
				ef_c2 = ef_c2+1;
				ef_a2 = ef_a2+ef_x;
			}
	}
	while(ef_c<ef_n);
	cout<<"\n\tRESULTADOS\n\n"<<endl;
	cout<<"Cantidad de monedas ingresadas: "<<ef_c<<endl;
	cout<<"Cantidad total de dinero contado: "<<ef_a<<endl;
	cout<<"Cantidad total de monedas de $0.10 ingresadas: "<<ef_c2<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.10: "<<ef_a2<<endl;
	cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<ef_c1<<endl;
	cout<<"Cantidad total en dinero de las monedas de $0.25: "<<ef_a1<<endl;					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Contador de monedas"<<endl;
	cout<<"//==> Archivo : cuentamoneda.cpp"<<endl;
	cout<<"//==>Autor: Emily Sevilla"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int EF_PuntoVenta()
{
	float ef_xx, ef_cc=0, ef_at=0, ef_nn, ef_vb, ef_viva, ef_vdes, ef_vfi, ef_vft;
	cout<<"\n\tPunto de Venta\n\n"<<endl;
	cout<<"Ingrese la cantidad de los productos que desea vender:  ";   cin >> ef_nn;			
	do
	{
		cout<<"Ingrese el valor del producto " <<ef_cc+1 <<": " ;   cin>> ef_xx;
		ef_cc = ef_cc+1;
		ef_at = ef_at+ef_xx;
	}
	while(ef_cc<ef_nn);			
	ef_vb = ef_at;
	ef_viva = ef_vb*0.12;
	ef_vdes = ef_vb*0.10;
	ef_vfi = ef_vb+ef_viva;
	ef_vft = ef_vfi-ef_vdes;
	cout<<"\n\tResultado\n\n"<<endl;
	cout<<"Valor con iva es: "<<ef_vfi<<endl;
	cout<<"Valor final es: "<<ef_vft<<endl;
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Control de ventas"<<endl;
	cout<<"//==> Archivo : puntodeventa.cpp"<<endl;
	cout<<"//==>Autor: Emily Sevilla"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualización: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int EF_Edad()
{
	int ef_diaAct, ef_mesAct, ef_anoAct, ef_diaNac, ef_mesNac, ef_anoNac, ef_anoR, ef_mesR, ef_diaR;
		
	cout<<"\n\tEdad\n\n";
	cout << "Ingrese Año Actual: ";   cin >> ef_anoAct;
	cout << "Ingrese Mes Actual: ";   cin >> ef_mesAct;
	cout << "Ingrese Dia Actual: ";  cin >> ef_diaAct;
	cout << "\nIngrese Año Nacimiento: ";  cin >> ef_anoNac;
	cout << "Ingrese Mes de Nacimiento: ";  cin >> ef_mesNac;
	cout << "Ingrese Dia de Nacimiento: ";  cin >> ef_diaNac;			
	if (ef_anoAct > ef_anoNac)
	{
		if(ef_mesAct > ef_mesNac)	 
		{
			ef_anoR=ef_anoAct-ef_anoNac;	
			ef_mesR=ef_mesAct-ef_mesNac;					
		}
		else
		{
			ef_anoR=ef_anoAct-ef_anoNac-1;	
			ef_mesR=(ef_mesAct+12)-ef_mesNac;					
		}												
		if(ef_diaAct > ef_diaNac)
		{				
			ef_diaR=ef_diaAct-ef_diaNac;
		}
		else
		{
			ef_mesR=ef_mesR-1;
			ef_diaR=(ef_diaAct+30)-ef_diaNac;
		}	
		cout << "\nUd. tiene:\n";
		cout << " Edad: " <<ef_anoR<< endl;
		cout << " Mes: " <<ef_mesR << endl;
		cout << " Dia: " << ef_diaR << endl;								
	}
	else
	{
		cout << "\n Calculo no es posible ";
	}
	return 0;
}

int EF_Compara()
{
	int ef_aa, ef_bb ;
	cout<<"Ingrese el primer numero a comparar: ";  cin>> ef_aa;  
	cout<<"Ingrese el segundo numero a comparar: ";  cin>> ef_bb;
	if (ef_aa==ef_bb)
	{
		cout<<"Son iguales"<<endl;
	}
	else
	{
		if (ef_aa>ef_bb)
		{
		cout<<ef_aa<<" es mayor"<<endl;
		}
		else
		{
		cout<<ef_bb<<" es mayor"<<endl;
		}
	}					
	cout<<"//================================================"<<endl;
	cout<<"//==> Nombre del programa: Comparación"<<endl;
	cout<<"//==> Archivo : compara.cpp"<<endl;
	cout<<"//==>Autor: Emily Sevilla"<<endl;
	cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl;
	cout<<"//==>Fecha ultima actualizaci?n: 2022-05-15"<<endl;
	cout<<"//================================================="<<endl;
	return 0;
}

int EF_Menu()
{
	int ef_opp, ef_flag;
	do
	{
		system("cls");
		menu:
		cout<<"\n\t\t\t----------FUNDAMENTOS DE PROGRAMACI?N-----------"<<endl;
		cout<<"\t\t\t------PROGRAMA REALIZADO POR SEVILLA EMILY------"<<endl;
		cout<<"\t\t\t----------------MENÚ DE OPCIONES----------------"<<endl;
		cout<<"\t\t\t------------------------------------------------"<<endl;
		cout<<"1. SUMA DE 2 NÚMEROS"<<endl;
		cout<<"2. CONTADOR DE MONEDAS"<<endl;
		cout<<"3. CALCULADORA DE EDAD"<<endl;
		cout<<"4. COMPARACIÓN DE 2 NÚMEROS"<<endl;
		cout<<"5. CONTROL DE VENTAS"<<endl;
		cout<<"0. REGRESAR AL MENÚ PRINCIPAL"<<endl;
		cout<<"INGRESE UNA OPCIÓN: "; cin>>ef_opp;
		switch(ef_opp)
		{
			case 1:
				system("cls");
				EF_Suma();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 2:
				system("cls");
				EF_CuentaMoneda();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 3:
				system("cls");
				EF_Edad();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 4:
				system("cls");
				EF_Compara();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			case 5:
				system("cls");
				EF_PuntoVenta();
				cout<<"Para regresar al menú (presiona ENTER) : ";
				system("pause>null");
			break;
			if(ef_opp!=0 && ef_opp>0)
			{
				cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
			}		  
			if(ef_opp==0)
			{
				cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

			}
				ef_flag=cin.ignore().get();
				cout<<ef_flag<<endl;
				
		}
	}
	while(ef_opp != 0);
	return(0);
}
