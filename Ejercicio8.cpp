/*8: En un juego de preguntas a las que se responde “Si” o “No” gana quien responda
correctamente las tres preguntas. Si se responde mal a cualquiera de ellas ya no se
pregunta la siguiente y termina el juego. Las preguntas son:
¿Colón descubrió América?
¿El lago Titicaca es el lago navegable más alto del mundo?
¿El español es el único idioma oficial de Perú?*/
#include <iostream>
using namespace std;
int main(){
	char resp1, resp2, resp3;
	cout<<"Responda las siguientes preguntas con:"<<endl;
	cout<<"s si cree que la respuesta es correcta y"<<endl;
	cout<<"n si cree que la respuesta es incorrecta"<<endl;
	cout<<"COLON DESCUBRIO AMERICA?"<<endl;
	cin>>resp1;
	if(resp1==s){
		cout<<"EL LAGO TITICACA ES EL LAGO NAVEGABLE MAS ALTO DEL MUNDO?"<<endl;
		cin>>resp2;
		if(resp2==s){
			cout<<"El ESPANOL ES EL UNICO IDIOMA OFICIAL DEL PERU?"<<endl;
			cin>>resp3;
			if(resp3==n){
				cout<<"Acertaste todo"<<endl;
			}else{
				cout<<"PERDISTE"<<endl;}
		}else{
				cout<<"PERDISTE"<<endl;}
	}else{
		cout<<"PERDISTE"<<endl;}
	return 0;
}
