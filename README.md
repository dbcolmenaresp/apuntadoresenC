# Apuntadores en C

![Puntero](https://wiki.dcc.uchile.cl/cc3301/_media/puntero.png)
  
<a href="https://es.wikipedia.org/wiki/Puntero_(inform%C3%A1tica)" target="_blank">Punteros</a>

Los apuntadores (tambien conocidos como [punteros](https://es.wikipedia.org/wiki/Puntero_(inform%C3%A1tica))) son una de las más poderosas características del lenguaje de programación C, además es una de las mas difíciles de manejar.  
Los apuntadores brindan la posibilidad de crear y manipular estructuras de datos dinámicas, aquellas que pueden crecer y reducirse, tales como [listas enlazadas](https://es.wikipedia.org/wiki/Lista_enlazada), [pilas](https://es.wikipedia.org/wiki/Pila_(inform%C3%A1tica)), [colas](https://es.wikipedia.org/wiki/Cola_(inform%C3%A1tica)) y [árboles](https://es.wikipedia.org/wiki/%C3%81rbol_(inform%C3%A1tica)), ademas de tener una estrecha relacion con los arreglos y las [cadenas de caracteres](https://es.wikipedia.org/wiki/Cadena_de_caracteres) o string.  
Los apuntadores contienen [direcciones de memoria](https://es.wikipedia.org/wiki/Direcci%C3%B3n_de_memoria) como sus valores.  
Generalmente una variable contiene un valor específico.  
Un apuntador contiene la dirección de memoria de una variable que contiene un valor específico.  
En este sentido, una variable se refiere directamente a un valor y un apuntador se refiere a un valor indirectamente.  
El hecho de referirse a un valor especifico a través de un apuntador sin hacer referencia a la variable que lo contiene, es llamado [indirección](https://es.wikipedia.org/wiki/Indirecci%C3%B3n).  

Los apuntadores, al igual que otras variables, deben ser declarados antes de ser usados.  

```cpp
int *countPtr;  // Se declara un apuntador a una variable con valor entero
int count;      // Se declara una variable con valor entero
count = 7;      // Se asigna un valor entero a la variable entera count
```  

Declara la variable `*countPtr` como un apuntdor a una variable de tipo entero, además la variable `count` es declarada para ser una variable de tipo entero.

Toda variable que sea declarada como un apuntador debe estar precedida por el simbolo asterisco (*).

Al declarar y asignar los valores correspondientes, la estructura de datos queda como se indica a continuacion:

count                `count` referencia directamente una variable cuyo valor es 7.  
  7  

*countPtr     count    `*countPtr` referencia indirectamente una variable cuyo valor es 7  

-------->       7  

La siguiente declaracion de variables:

```cpp
double *xPtr, *yPtr;
```  

Indica que ambas variables, `*xPtr*` y `*yPtr*` son apuntadores a valores de tipo double.

Los apuntadores pueden ser declarados para apuntar a objetos de cualquier tipo de datos.

Los apuntadores deben ser inicializados cada vez que se declaran o en una sentencia de asignacion.
Un apuntador con el valor 0 (cero) o NULL apunta a ningun lado, en C++ se usa preferentemente el valor 0 (cero).
La constante simbolica NULL es definida en el archivo de cabecera iostream.
Cuando se asigna 0 a un apuntador, este se convierte a un apuntador del tipo apropiado.
El valor de 0 es el unico valor entero que puede ser asignado a un apuntador sin hacer casting de entero a apuntador primero.
Se debe preceder el simbolo asterisco (*) a todas las variables de tipo apuntador, aunque se declaren en una misma linea separada por comas.
Se debe inicializar los apuntadores para evita que apunten a zonas desconocidas de memoria.

## Utilizando los apuntadores:

El operador unario *&* es llamado el operador de direccion y devuelve la direccion de un operando.

Por ejemplo, a continuacion se cedlara una variable entera y un apuntador a entero.

```cpp
int y = 5;  
int *yPtr;
```  

La siguiente sentencia asigna la direccion de la variable *y* al apuntador *yPtr*

```cpp
yPtr = &y;
```  

Luego de la ejecucion de esta sentencia se dice que el apuntador *yPtr* apunta a la direccion de la variable *y*.

A continuacion se muestra una representacion esquemática de la memoria despues de la asignacion anterior:

*yPtr*      *y*  
-------->    5  

En la figura se mestra la relacion del apuntador a través de una flecha del apuntador hacia el objetivo que este apuntando.

La siguiente figura muestra la representacion del puntero en memoria, asumiendo que la variable entera *y* este almacenada en la dirección de memoria 6000 y la variable de tipo apuntador *yPtr* esta almacenada en la direccion 5000.

El opreador de dirección solo puede ser aplicado a un elemento que tenga un valor asignado directamente, tal como el nombre de una variable.
El operador de direccion no puede ser aplicado a constantes o expresiones

     | *yPtr*           
---------------
5000 |  6000       

     | *y*
---------------
6000 | 5

El operador asterisco (*) comunmente conocido como operador de indireccion, devuelve un alias del elemento al cual apunta, por ejemplo la siguiente sentencia:

```cpp
cout  <<  *yPtr << endl;
```  

Muestra el valor de la variable *y*, el numero entero *5*, similas a como lo haria la siguiente sentencia:

```cpp
*yPtr;  
cin >>*yPtr;
```  

## Codificacion del uso de apuntadores

A continuacion se muestra un programa que opera con apuntadores en [lenguaje C++](https://es.wikipedia.org/wiki/C%2B%2B):

Primeramente se importa el archivo de cabecera necesario para usar las sentencias de entrada y salida de informacion

```cpp
#include <iostream>  
using std::cout;  
using std::endl;
```  

Luego se define el inicio de la funcion principal:

```cpp
int main()
```  

A continuacion se declaran variables a usar

```cpp
ìnt a;     //a es una variable de tipo entero  
int *aPtr; //aPtr es un apuntador a un entero
```  

Se asignan los valores correspondientes a las variables declaradas:

```cpp
a = 7;    //se le asigna a la variable a el valor entero 7  
aPtr = &a; //al apuntador aPtr se le asigna la direccion de la variable a
```  

A continuacion se muestran en pantalla los valores asignados a las diferentes variables:

Se muestra en pantalla el valor de la direccion de la variable entera a  
```cpp
cout <<  "La direccion de la variable a es " << &a << endl;
```  

Se muestra en pantalla el valor que contiene el aputnador aPtr  
```cpp
cout <<  "El valor de aPtr es " << aPtr << endl;
```  

Se muestra en pantalla el valor de la variable a  
```cpp
cout <<  "El valor de la variable a es " << a << endl;
```  

Se muestra en pantalla el valor apuntado indirectamene por *aPtr  
```cpp
cout <<  "El valor de *aPtr es " << *aPtr << endl;
```  

Los operadores de direccion & y de apuntador * son operadores inversos  
```cpp
cout <<  "&*aPtr = " << &*aPtr << endl;  
cout <<  "*&aPtr = " << *&aPtr << endl;
```  

Note que al ejecutar el codigo indicado, el valor de la direccion de la variable entera *a* es identico al valor contenido en la varialbe *aPtr.
Los operadores *&* (operador de direccion) y * (operador de apuntador) son operadores inversos, por lo tanto aplicarlos en cualquier orden genera el mismo resultado.

# Referencias

Apuntadores. Definición. Disponible en:  
http://www.utm.mx/~mgarcia/PE7(Apuntadores).pdf

Apuntadores en C y C++. Disponible en:  
https://utch2009.files.wordpress.com/2010/04/apuntadores.pdf

Como programar C++ Deitel  
https://www.freelibros.org/programacion/como-programar-c-plus-plus-9na-edicion-paul-deitel

Introducción a punteros. Video disponible en:  
[![Video de Introducción a punteros](https://img.youtube.com/vi/4IabpaIObzM/0.jpg)](https://www.youtube.com/watch?v=4IabpaIObzM)

Como usar correctamente los apuntadores. Video disponible en:  
[![Video Como usar correctamente los apuntadores](https://img.youtube.com/vi/OgX4vdtkkHQ/0.jpg)](https://www.youtube.com/watch?v=OgX4vdtkkHQ)

Manejo de punteros en C. Video disponible en:  
[![Manejo de punteros en C](https://img.youtube.com/vi/Kr5bbqNVGYQ/0.jpg)](https://www.youtube.com/watch?v=Kr5bbqNVGYQ)
