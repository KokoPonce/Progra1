#include <iostream>
using namespace std;                            
int main()
{
 float x,c=0,a=0,n,vb,vi,vdes,vf;
 cout<<"Ingrese n:";
 cin>>n;
 do
 { 
	 cout<<"Ingrese x:";
	 cin>>x;
	 c=c+1;
	 a=a+x;
 }
 while(c<n);
 vb=a;
 vi=vb*0.12;
 vdes=vb*0.10;
 vf=vb+vi-vdes;
 cout<<"Valor final a pagar es:";
 cout<<vf<<endl;

return 0;
        }
