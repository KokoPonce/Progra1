 #include <iostream>
 using namespace std;
 int main ()
{
	float x,c=0,a=0,N;
	cout<<"ingrese la cantidad de números que va a sumar:";
	cin>>N;
	do{
		cout<<"ingrese el número:";
		cin>>x;
		c=c+1;
		a=a+x;
	}while(c<N);
	cout<<"suma total:"<<a;
	return 0;
}
