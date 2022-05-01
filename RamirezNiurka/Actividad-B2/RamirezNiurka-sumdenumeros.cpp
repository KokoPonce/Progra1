#include <iostream>
using namespace std;                              int main()
{
        float x,c=0,a=0,N;
	cout<<"Ingrese la cantidad de numeros que se sumara:" ; cin>>N;
	do 
	{ 
		cout<<"Ingrese el numero:" ; cin>>x; 
		c=c+1;
		a=a+x;
	}while(c<N);
	cout<<"suma total:" <<a;
	return 0; 

        }
