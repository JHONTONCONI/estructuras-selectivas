#include <iostream>

using namespace std;

int main (){
		double compra, descuento, preciofinal;
	cout<<"\n\n     ***************************";
	cout<<"     INGRESE EL VALOR DE LA COMPRA";
	cout<<"     **************************"<<endl;
	cin>>compra;
	if (compra>1000){
		descuento=compra*20/100;
		preciofinal=compra-descuento;
		cout<<"VALOR FINAL DE LA COMPRA DESPUES DEL DESCUENTO: "<<preciofinal<<endl;	
	}else{
		preciofinal=compra;
		cout<<"VALOR FINAL DE LA COMPRA:   "<<preciofinal<<endl;
    }
    return 0;
	
	
}
