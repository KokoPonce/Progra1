#include <iostream>
using namespace std;
int main()
{
	int aa,ma,da,an,mn,dn,a,m,d;
	cout<<"Ingrese  su año de nacimiento:"<<endl;
	cin>>aa;
	cout<<"Ingrese su mes de nacimiento:"<<endl;
	cin>>ma;
	cout<<"Ingrese su día de nacimiento:"<<endl;
	cin>>da;

	cout<<endl;
	cout<<endl;

        cout<<"Ingrese el año actual:"<<endl;
	cin>>an;
	cout<<"Ingrese el mes actual:"<<endl;
	cin>>mn;
	cout<<"Ingrese el día actual:"<<endl;
	cin>>dn;
	if(da>=dn)
	{
		d=da-dn;
	}
	else{
		ma=ma-1;
		da=da+30;
		d=da-dn;
	}
	if(ma>=mn)
	{
		m=ma-mn;
	}
	else{
		aa=aa-1;
		ma=ma+12;
		m=ma-mn;
	}
	a=aa-an;
	cout<<"usted tiene"<<a<<"años"<<endl;
	cout<<"con"<<m<<"meses"<<endl;
	cout<<"y dias"<<d<<endl;
	return 0;
}
