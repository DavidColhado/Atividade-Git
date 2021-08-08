
#include <iostream>
using namespace std;
int main()
{
float a, b, resp;
char op;
cout<< "Digite um numero:";
cin>> a;
cout<< "Digite o operador:";
cin>> op;
cout<< "Digite um numero:";
cin>> b;
	switch((op))
	{
    case '+':
	resp= a+b;
	         break;
    case '-':
	resp= a-b;
	         break;
    case '*':
        resp= a*b;
             break;
    case '/':
    if(b==0)
        resp=0;
	else
        resp= a/b;
                break;  
    default:
    cout<< "Operador  não contemplado";
               break;
}
cout<< resp;
retur n0;

}
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}