# Apuntadores en C
---    
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

int *countPtr, count;  
count = 7;  

Al declarar y asignar los valores correspondientes, la estructura de datos queda como se indica a continuacion:

count                count referencia directamente una variable cuyo valor es 7.  
  7  

countPtr    count    countPtr referencia indirectamente una variable cuyo valor es 7  
    --------> 7

Declara la variable countPtr como un apuntdor a un valor de tipo entero, ademas la variable count es declarada para ser una variable de tipo entero.

Toda variable que sea declarada como un apuntador debe estar precedida por el simbolo asterisco (*).

La siguiente declaracion de variables:

double *xPtr, *yPtr;

Indica que ambas variables, xPtr y yPtr son apuntadores a valores de tipo double.

Los apuntadores pueden ser declarados para apuntar a objetos de cualquier tipo de datos.

Los apuntadores deben ser inicializados cada vez que se declaran o en una sentencia de asignacion.
Un apuntador con el valor 0 (cero) o NULL apunta a ningun lado, en C++ se usa preferentemente el valor 0 (cero).
La constante simbolica NULL es definida en el archivo de cabecera iostream.
Cuando se asigna 0 a un apuntador, este se convierte a un apuntador del tipo apropiado.
El valor de 0 es el unico valor entero que puede ser asignado a un apuntador sin hacer casting de entero a apuntador primero.


# Referencias
---  

Apuntadores. Definición. Disponible en:  
http://www.utm.mx/~mgarcia/PE7(Apuntadores).pdf

Apuntadores en C y C++. Disponible en:  
https://utch2009.files.wordpress.com/2010/04/apuntadores.pdf
