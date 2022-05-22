#include <iostream>

using namespace std;

int main()
{
    int ano, mes, dia, anoa, mesa, diaa, edano, anoeda, meses;
    cout<<"\nEste programa calcula su edad con dias y meses de vida.";
    cout<<"\nIngrese su año de nacimiento: "; cin>>ano;
    cout<<"\nIngrese su mes en numero de nacimiento: "; cin>>mes;
    cout<<"\nIngrese su dia de nacimiento; "; cin>>dia;
    cout<<"\nIngrese el año actual: "; cin>>anoa;
    cout<<"\nIngrese el mes en numero actual: "; cin>>mesa;
    cout<<"\nIngrese el dia actual: "; cin>>diaa;
   
   if(mesa<mes){
        anoeda = anoa - ano - 1;
        meses = (12 - mes) + mesa;
        cout<<"\nSu edad es de "<<anoeda;  
        cout<<" años, " <<meses;
        cout<<" meses, y " <<diaa;
        cout<<" dias.";
   }
   if(mesa>mes){
       anoeda = anoa - ano;
       meses = mesa-mes;
        cout<<"\nSu edad es de "<<anoeda;  
        cout<<" años, " <<meses;
        cout<<" meses, y " <<diaa;
        cout<<" dias.";  
   }
   if(mesa==mes){
       anoeda = anoa - ano;
        cout<<"\nSu edad es de "<<anoeda;  
        cout<<" años, y "<<diaa;
        cout<<" dias."; 
   }
   
    
   
   return 0;
}