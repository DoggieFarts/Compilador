#include <iostream>
#include <math.h>
#include <string>

using namespace std;




class Comp{
public:

	Comp();
	~Comp();
	void validarCadena(string cadena);



};
Comp::Comp(){

}
Comp::~Comp(){

}
void Comp::validarCadena(string cadena){
	int i,ascii;
/*	for(i=0;i<cadena.length();i++){ //hola
		ascii =(int)cadena[i]; // h -> 104 ascii = 104
		//if
		while(((ascii >= 65) && (ascii <= 90)) && ((ascii >= 97) && (ascii <= 122))){
			cout<<"Es un identificador";
		}


	}*/

	if(i = 0){
		ascii = (int)cadena[i];

		if(((ascii >= 65) && (ascii <= 90)) && ((ascii >= 97) && (ascii <= 122))){
			i++;
			ascii = (int)cadena[i];
			while(((ascii >= 65) && (ascii <= 90)) && ((ascii >= 97) && (ascii <= 122))){

				i++;
				ascii = (int)cadena[i];
			}
			cout<<"Es un identificador"<<endl;

		}
		else if ((ascii >= 48) && (ascii <= 57)){

			i++;
			ascii = (int)cadena[i];

			while ((ascii >= 48) && (ascii <= 57)){
             i++;
             ascii = (int)cadena[i];
             
			}
			if ( ascii == 46){
				i++;
				ascii = (int)cadena[i];
			if((ascii >= 48) && (ascii <= 57)){
				i++;
				ascii = (int)cadena[i];
				
			while ((ascii >= 48) && (ascii <= 57)){
             i++;
             ascii = (int)cadena[i];
             
			} 
				
				
			}
				
			}

                cout<<"Es un numero"<<endl;
		}
       else if ((ascii == 35)){
			i++;
			ascii = (int)cadena[i];
			if((ascii >= 65) && (ascii <= 90)){
				i++;
				 ascii = (int)cadena[i];
			}
			
			while ((ascii >= 65) && (ascii <= 90)){
          i++;
          ascii = (int)cadena[i];
          }

      cout<<"Es una palabra reservada"<<endl;
		}


}
}



int main(){


	return 0;
}
