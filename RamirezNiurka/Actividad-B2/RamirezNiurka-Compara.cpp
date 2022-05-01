#include <iostream>
using namespace std;                          
int main()

{
	float x,y;
	cout<<"Ingrese los valores de x y:" ; cin>>x>>y;
	if(x==y) { 
		cout<<"Son iguales:";
	}else{
		if(x>y)
		{ cout<<"x es mayor";
		}
		else{ 
			cout<<"y es mayor";
		}
        
        }
	return 0;
}

