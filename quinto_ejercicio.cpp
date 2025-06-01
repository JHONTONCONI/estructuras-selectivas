#include <iostream>

using namespace std;

int main(){
	double pulsaciones, edad, genero;
	cout<<nn *************************<<endl;
	cout<< INGRESE SU EDAD POR FAVOR<<endl;
	cout<< *************************<<endl;
	cin>>edad;
	cout<<nn **********************************************<<endl;
	cout<< COLOQUE 1 SI ES HOMBRE Y SI ES MUJER COLOQUE 0<<endl;
	cout<< **********************************************<<endl;
	cin>>genero;
	if(genero==1){
		pulsaciones=(210-edad)/10;
	}else{
		if(genero==0){
			pulsaciones=(220-edad)/10;
		}else{
			cout<<no ingreso el valor correcto<<endl;
			return 0;
		}
	}

	cout<<EL NUMERO DE PULSACIONES QUE TIENE ES: <<pulsaciones<<endl;
	return 0;
	
	
}
