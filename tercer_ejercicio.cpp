#include <iostream>

using namespace std;

int main (){
	double pago, cantidadcamisas, preciocamisa, pagofinal;
	cout<<"\n\n     *****************************************"<<endl;
	cout<<"     INGRESE LA CANTIDAD DE CAMISAS QUE COMPRO"<<endl;
	cout<<"     *****************************************"<<endl;
	cin>>cantidadcamisas;
	cout<<"\n\n     **************************************************************************"<<endl;
	cout<<"     INGRESE EL PRECIO DE LA CAMISA TENIENDO EN CUENTA QUE CADA UNA VALE IGUAL"<<endl;
	cout<<"     *************************************************************************"<<endl;
	cin>>preciocamisa;
	
	pago = cantidadcamisas * preciocamisa;
	
	if(cantidadcamisas > 3){
		pagofinal = pago - (pago*20/100);	
	}
	else{
		pagofinal = pago - (pago*10/100);
	}
	cout<<"\n\n     ***************************"<<endl;
	cout<<"     EL PAGO FINAL A REALIZAR ES:"<<endl;
	cout<<"     ****************************"<<endl;
	cout<<endl;
	cout<<pagofinal<<endl;
	return 0;
}
