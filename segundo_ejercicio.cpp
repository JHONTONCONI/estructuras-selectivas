#include <iostream>

using namespace std;

int main (){
	int p;
	cout<<INGRESE EL PROMEDIO DE NOTAS<<endl;
	cin>>p;
	if(p>=70){
		cout<<APROBADO;
	}else{
		cout<<REPROBADO;
	}
	return 0;
}
