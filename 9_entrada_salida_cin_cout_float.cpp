/*Este programa muestra en la salida est�ndar el valor de una variable de tipo float, para se utiliza para almacenar 
n�meros de tipo real, se almacena mediante coma flotante, tiene un rango de almacenamiento m�ximo de 3.4E+38 y m�nimo
de 3.4E-38, utiliza 4 bytes de espacio en memoria para guardar los datos; para ello se agreg� la librer�a est�ndar de 
entrada y salida de datos iostream muestra tambi�n el acceso al espacio de nombres para el uso de cin y cout*/

#include<iostream> //Librer�a est�ndar de entrada y salida de datos
#include <locale.h> //Librer�a est�ndar para localizaci�n (regionalizaci�n)

using namespace std;//Damos acceso al espacio de nombres

int main(){
	setlocale(LC_CTYPE,"Spanish");//Llamamos a la librer�a y colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol
	cout<<"Este es un ejemplo de variable tipo float"<<endl;
	float numero; //Definiendo la variable como n�mero flotante
	
	cout<<"Digite su numero: ";//Imprimimos instrucci�n de entrada
	cin>>numero;//Almacenamos la entrada en la variable n�mero
	
	cout<<"\nEl numero que introdujo usted es: "<<numero;//Imprimimos el mensaje
	//y la variable que introdujo el usuario.
	
	return 0;	//Finalizamos el programa
	
}
