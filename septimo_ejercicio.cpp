#include <iostream>

using namespace std;

int main(){
	int cantidad, preciollanta, pagototal;
	cout<<"\n\n     *****************************************"<<endl;
	cout<<"     INGRESE LA CANTIDAD DE LLANTAS QUE COMPRO"<<endl;
	cout<<"     *****************************************"<<endl;
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
	cout<<"\n\n     *********************"<<endl;
	cout<<"     PRECIO DE CADA LLANTA"<<endl;
	cout<<"     *********************"<<endl;
	cout<<endl;
	cout<<preciollanta;
	cout<<endl;
	cout<<"\n\n     *********************"<<endl;
	cout<<"     PAGO TOTAL A REALIZAR"<<endl;
	cout<<"     *******************"<<endl;
	cout<<endl;
	cout<<pagototal;
	cout<<endl;
}
