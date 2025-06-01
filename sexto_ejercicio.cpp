#include <iostream>

using namespace std;

int main(){
	double promedio, pagopension, descuento, aumento, pagofinal;
	cout<<"\n\n     *******************"<<endl;
	cout<<"     INGRESE EL PROMEDIO"<<endl;
	cout<<"     *******************"<<endl;
	cout<<endl;
	cin>>promedio;
	cout<<"\n\n     *******************************"<<endl;
	cout<<"     INGRESE EL PRECIO DE LA PENSION"<<endl;
	cout<<"     *******************************"<<endl;
	cout<<endl;
	cin>>pagopension;
	if(promedio >= 18){
		
		descuento = pagopension*30/100;
		pagofinal = pagopension-descuento;
		
	}else{
		
		aumento = pagopension*18/100*18/100;
		pagofinal = pagopension+aumento;
		
	}
	cout<<"\n\n     ***************************"<<endl;
	cout<<"     EL PAGO A REALIZARSE ES: "<<pagofinal<<endl;
	cout<<"     **************************"<<endl;
	return 0;
}
