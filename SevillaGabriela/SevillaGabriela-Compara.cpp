#include <iostream>

using namespace std;

int main()
{
 	int v1, v2;
	cout<<"\nEste programa compara dos numeros entre si."<<endl;
	cout<<"\nIngrese el primer valor:"; cin>>v1;
	cout<<"\nIngrese el segundo valor:"; cin>>v2;
    if(v1>v2) {
        cout<<"\n El valor mayor es "<<v1;
    }   
   else{
        if (v2>v1){
            cout<<"\n El valor mayor es "<<v2;
        }
        else{
            cout<<"\nAmbos valores son iguales.";
        }
    }
   
    
    
return 0;
}