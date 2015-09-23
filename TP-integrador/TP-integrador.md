#TP - Integrador
## **Alumno: Kevin Nielsen**
## *Curso K2051*

### Análisis Léxico
1.  Los digrafos y trigrafos son secuencias de dos y tres caracteres respectivamente, que aparecen en el código fuente.
	Según la especificación del lenguaje, este es remplazado por un único caracter.
	Se crearon por el hecho de que algunos teclados no tenian todos los caracteres necesarios para cubrir algunos lenguajes, o tambien porque algunos editores  tenian caracteres reservados para uso especial, etc.
2. Los trigrafos son reemplazados por el pre-procesador, en cambio, los digrafos son reemplazados en la tokenizacion.
3. 
4. 	**int** array[]={-1,};
	**printf**("%d%d",**sizeof** array - **sizeof** array[0],**sizeof**(**char**)+array[0]);
	_Aclaración: Se cambio el nombre del vector de "_" a "array" para hacerlo mas legible_
5. Es correcta, ya que primero declara el prototipo de la funcion printf indicando que no tiene un numero fijo de parametros para pasarle (usando el ,... ).
   Luego hace la definicion de la funcion main, en la cual se declara una variable array de enteros,cuyo unico elemento es el 1. Reemplazando los digrafos podemos ver que los corchetes y llaves se cierran correctamente.

   
### Análisis Sintáctico
1. 
2. Es correcta, ya que es una UT + Decl. Externa (la primera vendria a ser la declaracion del array y en la 2da sería el uso de la funcion PrintF con dos argumentos)