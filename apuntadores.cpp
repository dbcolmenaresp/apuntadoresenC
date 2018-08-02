/*Un programa simple en C++ para mostrar la operacion basica de apuntadores en lenguaje C++*/

/*Autor: Ing. Danny Colmenares
  @dbcolmenaresp*/

/*Directiva de preprocesador que le indica al compilador que agregue el contenido del archivo iostream
este archivo debe incluirse en un programa que use las funciones para mostrar informacion en la pantalla o leer
informacion del teclado*/
#include <iostream>

/*Directiva usada para indicar que se van a usar las funciones de salida de datos por pantalla y 
entrada de datos por teclado*/
using std::cout;
using std::cin;
using std::endl;

int main(){		//Inicio de la funcion principal

	int a;			//declaracion de una variable de tipo entero
	int *aPtr;		//declaracion de un apuntador a entero

	a = 5;			//Se le asigna a la variable entera a el valor de 5
	aPtr = &a;		//Se le asigna al apuntador aPtr el valor de la direccion de la variable entera a

	//Presentacion
	cout << "Programa realizado para intoducir el concepto de apuntadores\n";
	cout << "Programa realizado con fines educativos\n";
	cout << "Programa realizado por Ing. Danny Colmenares\n";
	cout << "Contacto twitter @dbcolmenaresp\n";
		
	//Se muestra en pantalla el valor de la direccion de la variable entera a
	cout << "\nLa direccion de la variable entera a es " << &a << endl;

	//Se muestra en pantalla el valor que contiene el apuntador aPtr
	cout << "\nEl valor contenido en la variable aPtr es " << aPtr << endl;

	//Se muestra en pantalla el valor de la variable a
	cout << "\nEl valor de la variable entera a es " << a << endl;

	//Se muestra en pantalla el valor apuntado indirectamene por *aPtr
	cout << "\nEl valor apuntado por *aPtr es " << *aPtr << endl;

	//Los operadores de direccion & y de apuntador * son operadores inversos
	cout << "\n&*aPtr = " << &*aPtr << endl;
	cout << "\n*&aPtr  = " << *&aPtr << endl;

	return 0; 	//indica que el programa temino satisfactoriamente
}
