#include <iostream>

using namespace std;

int main (){
	int promedio;
	cout<<"\n\n     ****************************"<<endl;
	cout<<"     INGRESE EL PROMEDIO DE NOTAS"<<endl;
	cout<<"     ****************************"<<endl;
	cin>>promedio;
	if(promedio>=70){
		cout<<"APROBADO";
	}else{
		cout<<"REPROBADO";
	}
	return 0;
}
