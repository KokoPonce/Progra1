#include <iostream>
using namespace std;
int main()
{
	float x,c=0,a=0,n,vb,vi,vdes,vf;
	cout<<"ingrese el numero de producto:";
	cin>>n;
	do
	{
		cout<<"ingrese el proceso del producto:";
		cin>>c;
		c=c+1;
		a=a+x;
	}
	while(c<n);
	vb=a;
	vi=vb*0.12;
	vdes=vb*0.10;
	vf=vb+vi-vdes;
	cout<<"su valor final a cancelar es:";
	cout<<vf<<endl;
	return 0;
}

