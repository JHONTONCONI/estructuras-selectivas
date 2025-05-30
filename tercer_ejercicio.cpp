#include <iostream>

using namespace std;

int main (){
	double pago, cantidadcamisas, preciocamisa, pagofinal;
	cout<<nn *****************************************<<endl;
	cout<< INGRESE LA CANTIDAD DE CAMISAS QUE COMPRO<<endl;
	cout<< *****************************************<<endl;
	cin>>cantidadcamisas;
	cout<<nn *************************************************************************<<endl;
	cout<< INGRESE EL PRECIO DE LA CAMISA TENIENDO EN CUENTA QUE CADA UNA VALE IGUAL<<endl;
	cout<< *************************************************************************<<endl;
	cin>>preciocamisa;
	pago=cantidadcamisas*preciocamisa;
	if(cantidadcamisas>3){
		pagofinal=pago-(pago*20/100);	
	}
	else{
		pagofinal=pago-(pago*10/100);
	}
	cout<<EL PAGO FINAL A REALIZAR ES: <<pagofinal<<endl;
	return 0;
}
