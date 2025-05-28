#include <iostream>

using namespace std;

int main (){
		double c, d, cc;
	cout<<nn ***************************;
	cout<< INGRESE EL VALOR DE LA COMPRA;
	cout<< **************************<<endl;
	cin>>c;
	if (c>1000){
		d=c*20/100;
		cc=c-d;
		cout<<VALOR FINAL DE LA COMPRA DESPUES DEL DESCUENTO: <<cc<<endl;	
	}else{
		cc=c;
		cout<<VALOR FINAL DE LA COMPRA: <<cc<<endl;
    }
    return 0;
	
	
}
