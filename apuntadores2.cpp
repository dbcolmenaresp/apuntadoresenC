/*Un programa simple en C++ para mostrar la operacion basica de apuntadores sobre 2 variables enteras 
en lenguaje C++*/

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

int main(){				//Inicio de la funcion principal

	int j, k;			//declaracion de dos variables de tipo entero
	int *Ptr;			//declaracion de un apuntador a entero

	j = 5;				//Se le asigna a la variable entera j el valor de 5
	k = 6;				//Se le asigna a la variable entera k el valor de 6
	Ptr = &j;			//Se le asigna al apuntador Ptr el valor de la direccion de la variable entera j

	//Presentacion
	cout << "Programa realizado para realizar la operacion de dos numeros enteros con el uso de apuntadores\n";
	cout << "Programa realizado con fines educativos\n";
	cout << "Programa realizado por Ing. Danny Colmenares\n";
	cout << "Contacto twitter @dbcolmenaresp\n";
		
	//Se muestra en pantalla el valor y la direccion de la variable entera j
	cout << "\nEl valor de j es " << j << " y esta almacenado en la direccion " << &j << endl;

	//Se muestra en pantalla el valor y la direccion de la variable entera k
	cout << "\nEl valor de k es " << k << " y esta almacenado en la direccion " << &k << endl;

	//Se muestra en pantalla el valor que contiene el apuntador Ptr
	cout << "\nEl valor contenido en la variable Ptr es " << Ptr << endl;

	//Se muestra en pantalla el valor apuntado indirectamene por *Ptr
	cout << "\nEl valor apuntado por *Ptr es " << *Ptr << endl;
	
	//Se le asigna a la variable apuntada por *Ptr el valor de 10
	*Ptr = 10;
	cout << "\nSe le asigna a *Ptr el valor de " << *Ptr << endl;
	
	//Se muestra el nuevo valor apuntado por *Ptr
	cout << "\nEl nuevo valor de j es " << j << endl;

	//Se modifica el valor de la variable k
	j = 20;
	cout << "\nSe le asigna a j el valor de " << j << endl;
	
	//Se muestra el nuevo valor de la variable apuntada por *Ptr
	cout << "\nEl nuevo valor de *Ptr es " << *Ptr << endl;

	//Los operadores de direccion & y de apuntador * son operadores inversos
	cout << "\n&*Ptr = " << &*Ptr << endl;
	cout << "\n*&Ptr  = " << *&Ptr << endl;

	return 0; 	//indica que el programa temino satisfactoriamente
}
