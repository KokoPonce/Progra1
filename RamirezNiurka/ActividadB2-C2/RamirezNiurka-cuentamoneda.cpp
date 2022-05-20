 //================================================ 
  
  
 //==> Nombre del programa: Cuenta moneda
 //==> Archivo : RamirezNiurka-cuentamoneda.cpp 
 //==>Autor: Niurka Ramirez Castro
 //==>Fecha de elaboración: 2022-01-10 
 //==>Fecha última actualización: 2022-05- 20
  
  
 //================================================= 
 #include <iostream> 
 using namespace std; 
 int main() 
 { 
         int nc_n, nc_c=0, nc_c1=0, nc_c2=0; 
         float nc_x, AC_a=0,nc_a1=0,nc_a2=0; 
         cout<<"Cabtidad de monedas a ingresar:"; 
         cin>>nc_n; 
         do{ 
                 cout<<"ingrese el valor de la moneda (0.10,0.25) :"; 
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
         cout<<"el resultado fue:"<<endl; 
         cout<<"cantidad de monedas ingresadas:"<<nc_c<<endl; 
         cout<<"cantidad total de dinero contado:"<<nc_a<<endl; 
         cout<<"cantidad de monedas de 0.10c ingresadas:"<<nc_c1<<endl; 
         cout<<"cantidad total en dinero de monedas de 0.10cc :"<<nc_a1<<endl; 
         cout<<"cantidad de monedas de 0.25c ingresadas:"<<nc_c2<<endl; 
         cout<<"cantidad total en dinero de monedas de 0.25cc :" <<nc_a2<<endl; 
         cout<<"//================================================"<<endl; 
         cout<<"//==> Nombre del programa: Cuenta monedas"<<endl; 
         cout<<"//==> Archivo : RamirezNiurka-cuentamoneda.cpp"<<endl; 
         cout<<"//==>Autor: Niurka Ramirez Castro"<<endl; 
         cout<<"//==>Fecha de elaboración: 2022-01-10"<<endl; 
         cout<<"//==>Fecha ultima actualización: 2022-05-20"<<endl; 
         cout<<"//================================================="<<endl; 
         return 0; 
 }
