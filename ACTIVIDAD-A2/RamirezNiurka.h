//fuciones de Ramirez Niurka
int RN_compara()
{
        int RN_aa, RN_bb ;
        cout<<"Ingrese el primer numero a comparar: ";  cin>> RN_aa;
        cout<<"Ingrese el segundo numero a comparar: ";  cin>> RN_bb;
        if (RN_aa==RN_bb)                                     {
                cout<<"Son iguales"<<endl;
        }
        else
        {
                if (RN_aa>RN_bb)                                      {
                cout<<RN_aa<<" es mayor"<<endl;                       }
                else
                {
                cout<<RN_bb<<" es mayor"<<endl;
                }
        }
        cout<<"//================================================"<<endl;
        cout<<"//==> Nombre del programa: Compara"<<endl;
        cout<<"//==> Archivo : RamirezNiurka-compara.cpp"<<endl;
        cout<<"//==>Autor: Niurka Ramirez"<<endl;
        cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;
        cout<<"//==>Fecha ultima actualizaci?n: 2022-05-13"<<endl;
        cout<<"//================================================="<<endl;
        return 0;
}
int RN_cuentamoneda()
{
        int RN_n,RN_c, RN_c1, RN_c2, RN_cl, RN_cz;
        float RN_x, RN_al, RN_a, RN_a1, RN_a2, RN_az;
        RN_c = 0;
        RN_c1 = 0;
        RN_c2 = 0;
        RN_a = 0;
        RN_a1 = 0;
RN_a2 = 0;                                            cout<<"\n\tCONTADOR DE MONEDAS\n\n"<<endl;
        cout<<"Cantidad de monedas a ingresar: ";  cin>>RN_n;
        do                                                    {                                                             cout<<"Ingrese el valor de la moneda (0.10 - 0.25): ";  cin>>RN_x;
                RN_c = RN_c+1;                                        RN_a = RN_a+RN_x;                                     if(RN_x==0.25)                                                {
                                RN_c1 = RN_c1+1;                                      RN_a1 = RN_x+RN_a1;
                        }                                             else
                        {                                                             RN_c2 = RN_c2+1;                                      RN_a2 = RN_a2+RN_x;
                        }                                     }
        while(RN_c<RN_n);                                     cout<<"\n\tRESULTADOS\n\n"<<endl;
        cout<<"Cantidad de monedas ingresadas: "<<RN_c<<endl;
        cout<<"Cantidad total de dinero contado: "<<RN
_a<<endl;                                                     cout<<"Cantidad total de monedas de $0.10 ingr
esadas: "<<RN_c2<<endl;                                       cout<<"Cantidad total en dinero de las monedas
 de $0.10: "<<RN_a2<<endl;
        cout<<"Cantidad total de monedas de $0.25 ingresadas: "<<RN_c1<<endl;                                       cout<<"Cantidad total en dinero de las monedas
 de $0.25: "<<RN_a1<<endl;                                                                                          cout<<"//================================================"<<endl;                                           cout<<"//==> Nombre del programa: Contador de
monedas"<<endl;                                               cout<<"//==> Archivo : RamirezNiurka-cuentamon
eda.cpp"<<endl;                                               cout<<"//==>Autor: Niurka Ramirez"<<endl;             cout<<"//==>Fecha de elaboración: 2022-04-29"<<endl;                                                        cout<<"//==>Fecha ultima actualización: 2022-05-13"<<endl;
cout<<"//================================================="<<endl;                                          return 0;                                     }                                                     int RN_laadad()                                       {                                                             int RN_diaAct;                                        int RN_mesAct;                                        int RN_anoAct;                                        int RN_diaNac;                                        int RN_mesNac;                                        int RN_anoNac;                                        int RN_anoR, RN_mesR, RN_diaR;
                                                              cout<<"\n\tEdad\n\n";                                 cout << "Ingrese Año Actual: ";   cin >> RN_anoAct;                                                         cout << "Ingrese Mes Actual: ";   cin >> RN_me
sAct;                                                         cout << "Ingrese Dia Actual: ";  cin >> RN_dia
Act;
        cout << "\nIngrese Año Nacimiento: ";  cin >>
RN_anoNac;
        cout << "Ingrese Mes de Nacimiento: ";  cin >>
 RN_mesNac;
        cout << "Ingrese Dia de Nacimiento: ";  cin >>
 RN_diaNac;
        if (RN_anoAct > RN_anoNac)
        {
                if(RN_mesAct > RN_mesNac)
                {                                                             RN_anoR=RN_anoAct-RN_anoNac;
                                                                              RN_mesR=RN_mesAct-RN_mesNac;
                                                                      }                                                     else                                                  {                                                             RN_anoR=RN_anoAct-RN_anoNac-1;
                        RN_mesR=(RN_mesAct+12)-RN_mesNac;
}                                                                                                                                                                 if(RN_diaAct > RN_diaNac)                             {
                        RN_diaR=RN_diaAct-RN_diaNac;
                }
                else                                                  {                                                             RN_mesR=RN_mesR-1;
                        RN_diaR=(RN_diaAct+30)-RN_diaNac;                                                                   }                                                     cout << "\nUd. tiene:\n";
                cout << " Edad: " <<RN_anoR<< endl;
                cout << " Mes: " <<RN_mesR << endl;
                cout << " Dia: " << RN_diaR << endl;                                                        
        }
        else
        {
                 cout << "\n Calculo no es posible ";
        }
    cout<<"//==========Nombre del programa: la edad"<<endl;
    cout<<"//==========Archivo: RamirezNiurka-laedad.cpp"<<endl;
    cout<<"//==========Autor: Niurka Ramirez"<<endl;
    cout<<"//==========Fecha de elaboracion: 29-04-2022"<<endl;
    cout<<"//==========Fecha de actualizacion: 14-05-2022"<<endl;
        return 0;
}
