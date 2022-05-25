// Menu de Chila Daniela
//
//
//
//
//
//
//

int ChilaDanielaCompara(){
	float CD_A,CD_B;
	cout<<"ingrese CD_A:";
	cin>>CD_A;
	cout<<"ingrese CD_B:";
	cin>>CD_B;
	if(CD_A==CD_B) {
	cout<<"El valor de CD_A= "<<CD_A<<" es igual a CD_B "<<CD_B<<endl;

	}else{
		if(CD_A<CD_B){
	
	cout<<"El valor de CD_A=" <<CD_A<<" es menor a CD_B="<<CD_B<<endl;
                }else{
        cout<<"El valor de CD_B=" <<CD_B<<" es menor a CD_A="<<CD_A<<endl<<endl;
                }
                }
cout<<"//================================================="<<endl;
cout<<"//=======Nombre de programa: Compara de dos numeros"<<endl;
cout<<"//====Archivo: ChilaDaniela-Compara.cpp"<<endl;
cout<<"//====Autor: Chila Daniela "<<endl;
cout<<"//====Fecha de elaboracion: 03-05-2022"<<endl;
cout<<"//====Fecha de ultima actualizacion: 19-05-2022"<<endl;
cout<<"//================================================="<<endl;

	return 0;
}

int ChilaDanielaCuentaMoneda(){
	int CD_n, CD_c=0, CD_c1=0, CD_c2=0;
	float CD_x, CD_a=0, CD_a1=0, CD_a2=0, CD_m=0.10;
	cout<<"Cantidad de monedas a ingresar : ";
	cin>>CD_n;
	do{
cout<<"Ingrese el valor de la moneda (0.10,0.25) :";
cin>>CD_x;
CD_c=CD_c+1;
CD_a=CD_a+CD_x;
if(CD_x==CD_m){
	CD_c1=CD_c1+1;
	CD_a1=CD_a1+CD_x;
}else{
	CD_c2=CD_c2+1;
	CD_a2=CD_a2+CD_x;
}
}while(CD_c<CD_n);

cout<<"El resultado fue:"<<endl;
cout<<"Cantidad de monedas ingresadas : "<<CD_c<<endl;
cout<<"Cantidad total en dinero contado : "<<CD_a<<endl;
cout<<"Cantidad de monedas de 0.10 ctvs ingresadas : "<<CD_c1<<endl;
cout<<"Cantidad total en dinero de monedas de 0.10 ctvs : "<<CD_a1<<endl;
cout<<"Cantidad de monedas de 0.25 ctvs ingresadas : "<<CD_c2<<endl;
cout<<"Cantidad total en dinero de monedas de 0.25 ctvs : "<<CD_a2<<endl<<endl;

cout<<"//================================================="<<endl;
cout<<"//=======Nombre del programa: Cuenta Moneda "<<endl;
cout<<"//====Archivo: ChilaDaniela-CuentaMoneda.cpp "<<endl;
cout<<"//====Autor: Chila Daniela "<<endl;
cout<<"//====Fecha de creacion: 03-05-2022 " <<endl;
cout<<"//====Fecha de ultima actualizacion: 19-05-2022 "<<endl;
cout<<"//================================================="<<endl;

return 0;

}

int ChilaDanielalaedad(){

int CD_da,CD_ma,CD_aa,CD_dn,CD_mn,CD_an,DA_a,CD_m,CD_d;
	cout<<"Ingrese la fecha actual: Dia Mes Año :";
	cin>>CD_da>>CD_ma>>CD_aa;
	cout<<"Ingrese su fecha de nacimiento: Dia Mes Año :";
	cin>>CD_dn>>CD_mn>>CD_an;
	if(CD_da<CD_dn){
		CD_da=CD_da+30;
		CD_ma=CD_ma-1;
		CD_d=CD_da-CD_dn;
	}
	else{
		CD_d=CD_da-CD_dn;
	}
	if(CD_ma<CD_mn){
		CD_ma=CD_ma+12;
		CD_aa=CD_aa-1;
		CD_m=CD_ma-CD_mn;
	}
	else{
		CD_m=CD_ma-CD_mn;
	}
	CD_d=CD_aa-CD_an;

	cout<<"Usted tiene: "<<CD_d<<" años "<<CD_m<<" meses y "<<CD_d<<" dias "<<endl<<endl;

cout<<"//================================================="<<endl;
cout<<"//=======Nombre del programa: La edad "<<endl;
cout<<"//====Archivo: ChilaDaniela-LaEdad.cpp "<<endl;
cout<<"//====Autor: Chila Daniela "<<endl;
cout<<"//====Fecha de creacion: 03-05-2022 "<<endl;
cout<<"//====Fecha de ultima actualizacion: 19-05-2022 "<<endl;
cout<<"//================================================="<<endl;

	return(0);
}

int ChilaDanielaPuntoVenta(){
	int CD_c=0, CD_P;
	float CD_A=0,CD_x,CD_Tb,CD_Piva,CD_Pdsc,CD_iva=0.12,CD_dsc=0.30,CD_vt;
	cout<<"Ingrese la cantidad de productos: ";
	cin>>CD_P;
	do{
		cout<<"Ingrese el valor de los productos: ";
		cin>>CD_x;
		CD_c=CD_c+1;
		CD_A=CD_A+CD_x;
		CD_Piva=CD_A*CD_iva;
		cout<<"El valor del iva de la compra es de: $"<<CD_Piva<<endl;
		CD_Pdsc=CD_A*CD_dsc;
		cout<<"El valor del descuento de su compra es de:$"<<CD_Pdsc<<endl;
		CD_Tb=CD_Piva+CD_Pdsc;
	}while(CD_c<CD_P);
	if(CD_Tb==CD_A){
		cout<<"Su compra aplica para un descuento: "<<CD_Tb<<endl;
	CD_iva=CD_Tb*CD_Piva/100;
	CD_dsc=CD_Tb*CD_Pdsc/100;
}else{
	CD_vt=CD_A+CD_Piva-CD_Pdsc;

	cout<<"El valor total es de:$ "<<CD_vt<<endl<<endl;
}

cout<<"//================================================="<<endl;
cout<<"//======Nombre del programa: Punto de venta"<<endl;
cout<<"//====Nombre del archivo: ChilaDaniela-PuntoVenta.cpp "<<endl;
cout<<"//====Autor: Chila Daniela "<<endl;
cout<<"//====Fecha de elaboracion: 03-05-2022 "<<endl;
cout<<"//====Fecha de ultima actualizacion: 19-02-2022 "<<endl;
cout<<"//================================================="<<endl;

return(0);
}

int ChilaDanielaSumaN(){
	int CD_c=0, CD_n;
	float CD_s=0, CD_x;
	cout<<"Ingrese la cantidad de numeros a sumar : ";
	cin>>CD_n;
	do{

		cout<<"Ingrese un numero :";
		cin>>CD_x;
		CD_c=CD_c+1;
		CD_s=CD_s+CD_x;
	}while(CD_c<CD_n);

	 cout<<"La suma de los numeros es :"<<CD_s<<endl<<endl;

cout<<"//================================================="<<endl;
cout<<"//=======Nombre del programa: Suma de dos numeros"<<endl;
cout<<"//====Archivo: ChilaDaniela-SumaN.cpp"<<endl;
cout<<"//====Autor: Chila Daniela"<<endl;
cout<<"//====Fecha de elaboracion: 03-05-2022"<<endl;
cout<<"//====Fecha de ultima actualizacion: 19-05-2022"<<endl;
cout<<"//================================================="<<endl;

	return(0);
}

int ChilaDanielamenu()
{
	int op,flag3;

	do{
			system("clear");
			cout<<"**************PROGRAMAS DE CHILA DANIELA**************"<<endl<<endl;
			cout<<"1.- COMPARA DE DOS NUMEROS \n";
			cout<<"2.- MAQUINA CUENTA MONEDA.\n";
			cout<<"3.- CALCULA LA EDAD \n";
			cout<<"4.- PUNTO DE VENTA. \n";
			cout<<"5.- SUMA VARIOS NUMEROS.\n";
			cout<<"0.- Salir del menu. \n";
			cout<<" Ingrese una opcion : "; cin>>op; //la variable op siver para la oppcion a escoger
			switch(op){
				case 1:
					system("clear");
					cout<<"\n Compara 2 numeros "<<endl;
					ChilaDanielaCompara();
					break;
				case 2:
					system("clear");
					cout<<"\n MAQUINA CUENTA MONEDA ";
					ChilaDanielaCuentaMoneda();
					break;
				case 3:
					system("clear");
					cout<<"\n CALCULA LA EDAD ";
					ChilaDanielalaedad();
					break;
				case 4:
					system("clear");
					cout<<"\n PUNTO DE VENTA ";
					ChilaDanielaPuntoVenta();
					break;
				case 5:
					system("clear");
					cout<<"\n SUMA VARIOS NUMEROS ";
					ChilaDanielaSumaN();
					break;

				}
				if(op!=0 && op>5){
				   cout << "\nOpcion no permitida !\n" <<  "Press Enter to continue\n";	    // pause the program until user input
				  }
				if(op==0){
					cout<<"Quieres salir completamente del sistema (presiona ENTER) : "<<endl;

				}
				        flag3=cin.ignore().get(); // Esta linea detiene la patalla hasta que el usuairo presione alguna tecla

	}while(op!=0);

        cout<<"===========================================\n";
        cout<<"             Chila Daniela                 \n";
         cout<<" Gmail:daniela.chila.rosales@utelvt.edu.ec\n";
        cout<<"===========================================\n";

	return(0);

}
