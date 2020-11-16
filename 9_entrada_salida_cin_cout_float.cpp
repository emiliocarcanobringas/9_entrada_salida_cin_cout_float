/*Este programa muestra en la salida estándar el valor de una variable de tipo float, para se utiliza para almacenar 
números de tipo real, se almacena mediante coma flotante, tiene un rango de almacenamiento máximo de 3.4E+38 y mínimo
de 3.4E-38, utiliza 4 bytes de espacio en memoria para guardar los datos; para ello se agregó la librería estándar de 
entrada y salida de datos iostream muestra también el acceso al espacio de nombres para el uso de cin y cout*/

#include<iostream> //Librería estándar de entrada y salida de datos
#include <locale.h> //Librería estándar para localización (regionalización)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE,"Spanish");//Llamamos a la librería y colocamos el valor para manejo de caracteres, le asignamos el idioma español
	cout<<"Este es un ejemplo de variable tipo float"<<endl;
	float numero; //Definiendo la variable como número flotante
	
	cout<<"Digite su numero: ";//Imprimimos instrucción de entrada
	cin>>numero;//Almacenamos la entrada en la variable número
	
	cout<<"\nEl numero que introdujo usted es: "<<numero;//Imprimimos el mensaje
	//y la variable que introdujo el usuario.
	
	return 0;	//Finalizamos el programa
	
}
