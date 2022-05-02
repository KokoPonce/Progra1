 #include <iostream>
using namespace std;
int main()
{
	int n,c,c1=0,c2=0,cl,cz;
	float x,a1=0,a=0,al,a2=0,az;
	c=0;
	c1=0;
	c2=0;
	a=0;
	a1=0;
	a2=0;
	cout<<"\n\tCuenta moneda\n\n"<<endl;
	cout<<"catidad de moneda que se ingresara:";
	cin>>n;
	c=c+1;
	a=a+x;
	if(x==0.25)
	{
		c1=c1+1;
		a1=x+a1;
		else
		{
			c2=c2+1;
			a2=a2+x;
		}

	}
	while(c<n);
	cout<<"\n\tresultado\n\n"<<endl;
	cout<<"cantidad de monedas ingresadas:"<<c<<endl;
	cout<<"total de dinero contado:"<<a<<endl;
	cout<<"total de monedas ingresadas de 0.10:"<<a2<<endl;
	cout<<"total de monedas ingresadas de 0.25:"<<c1<<endl;
	cout<<"Total de dinero en monedas de 0.25:"<<a1<<endl;
	return 0;
}
