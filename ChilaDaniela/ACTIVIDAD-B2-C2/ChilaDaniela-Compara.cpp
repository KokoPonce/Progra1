#include<iostream>
using namespace std;
int main()
{
	float A,B;
	cout<<"ingrese A:";
	cin>>A;
	cout<<"ingrese B:";
	cin>>B;
	if(A==B) {
	cout<<"El valor de A= "<<A<<" es igual a B "<<B<<endl;

	}else{
		if(A<B){

	cout<<"El valor de A=" <<A<<" es menor a B="<<B<<endl;
		}else{
	cout<<"El valor de B="<<B<<" es menor a A="<<A<<endl;
		}
	}
	return 0;
}
