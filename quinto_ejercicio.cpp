#include <iostream>

using namespace std;

int main(){
	double pulsaciones, edad, genero;
	cout<<"\n\n     *************************"<<endl;
	cout<<"     INGRESE SU EDAD POR FAVOR"<<endl;
	cout<<"     *************************"<<endl;
	cout<<endl;
	cin>>edad;
	cout<<endl;
	cout<<"\n\n     **********************************************"<<endl;
	cout<<"     COLOQUE 1 SI ES HOMBRE Y SI ES MUJER COLOQUE 0"<<endl;
	cout<<"     **********************************************"<<endl;
	cout<<endl;
	cin>>genero;
	cout<<endl;
	if(genero==1){
		pulsaciones=(210-edad)/10;
	}else{
		if(genero==0){
			pulsaciones=(220-edad)/10;
		}else{
			cout<<"\n\n     ***************************"<<endl;
			cout<<"     no ingreso el valor correcto"<<endl;
			cout<<"     ****************************"<<endl;
			return 0;
		}
	}
    cout<<"\n\n     *******************************************"<<endl;
	cout<<"     EL NUMERO DE PULSACIONES QUE TIENE ES: "<<pulsaciones<<endl;
	cout<<"     *******************************************"<<endl;
	return 0;
	
	
}
