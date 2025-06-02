#include <iostream>

using namespace std;

int main(){
	int cantidad, preciollanta, pagototal;
	cout<<nn *****************************************<<endl;
	cout<< INGRESE LA CANTIDAD DE LLANTAS QUE COMPRO<<endl;
	cout<< *****************************************<<endl;
	cin>>cantidad;
	if (cantidad<5){
		preciollanta=300;
		pagototal=cantidad*preciollanta;
	}else{
		if(cantidad<=10){
		    preciollanta=250;
	 	    pagototal=cantidad*preciollanta;
		}else{
		    preciollanta=200;
		    pagototal=cantidad*preciollanta;
		}
	}
	cout<<preciollanta<< :PRECIO DE CADA LLANTA<<endl;
	cout<<pagototal<< :PAGO TOTAL A REALIZAR<<endl;
}
