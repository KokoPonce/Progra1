▎    prueba.cpp                                                                                           1 #include <iostream>                                                                                     2 using namespace std;                                                                                    3 int main()                                                                                              4 {                                                                                                       5   int n,c,c1=0,c2=0,cl,cz;                                                                              6   float x,a1=0,a=0,al,a2=0,az;                                                                          7   c=0;                                                                                                  8   c1=0;                                                                                                 9   c2=0;                                                                                                10   a=0;
  11   a1=0;
  12   a2=0;
  13   cout<<"\n\tCuenta moneda\n\n"<<endl;                                                                 14
  15 cout<<"Cantidad de monedas que ingresara:";                                                            16   ▏ ▏ ▏ cin>>n;                                                                                        17   ▏ ▏ ▏ do{                                                                                            18   ▏ ▏  cout<<"Ingrese el valor de la moneda (0.10-0.25): ";                                            19   ▏ ▏ ▏  cin>>x;                                                                                       20   ▏ ▏ ▏  c=c+1;                                                                                        21   ▏ ▏ ▏  a=a+x;                                                                                        22   ▏ ▏ ▏  if(x==0.25)                                                                                   23   ▏ ▏ ▏  {
  24   ▏ ▏ ▏ ▏  c1=c1+1;
  25   ▏ ▏ ▏ ▏ a1=x+a1;
  26   ▏ ▏ ▏  }                                                                                             27   ▏ ▏ ▏  else{
  28   ▏ ▏ ▏ ▏  c2=c2+1;
  29   ▏ ▏ ▏ ▏  a2=a2+x;
  30   ▏ ▏ ▏ ▏ ▏ ▏ ▏ }
  31   ▏ ▏ ▏ ▏ ▏ ▏ ▏
  32   ▏ ▏ ▏ ▏ ▏ ▏ ▏ }
  33   ▏ ▏ ▏ while(c<n);
  34   ▏ ▏ ▏ cout<<"\n\t Resultado\n\n"<<endl;
  35
  36 cout<<"Cantidad de monedas ingresadas:"<<c<<endl;
  37 cout<<"Total de dinero contado:"<<a<<endl; cout<<"Total de monedas ingresadas de 0.10:"<<c2<<endl;
  38 cout<<"Cantidad de dinero de monedas de 0.10:"<<a2<<endl;
  39 cout<<"Cantidad de monedas de 0.25:"<<c1<<endl;
  40 cout<<"Total de dinero en monedas de 0.25:"<<a1<<endl;
  41 return 0;
  42   ▏ ▏ ▏
  43   ▏ ▏ ▏ }                     
