# Memory API # 

En este laboratorio ganará algún grado de familiaridad con la asignación de memoria (memory allocation). Para el caso, ustedd escribirá algunos programas con bugs. Luego, usará algunas herramientas para localizar los bugs que usted ha insertado. De este modo se familiarizará con algunas de estas herramientas para un uso futuro. Estas herramientas son: el debuger (**gdb**) y el memory-bug detector (**valgrind**).

## Questions ##

1. Escriba un programa simple llamado ```null.c``` que cree un puntero a un entero, llevelo a null y entonces intente desreferenciarlo (esto es, asignarle un valor). Compile este programa llamado ```null```. ¿Qué pasa cuando usted ejecuta este programa?

2. Compile el programa del ejercicio anterior usando información de simbolos (con la flag -g). Al hacer esto se esta poniendo mas informacion en el ejecutable para permitir al debugger acceder a informacion util sobre los nombres de las variables y cosas similares. Ejecute el programa bajo el debugger digitando en consola (para el caso) ```gdb null``` y entonces una vez el ```gdb``` este corriendo ejecute ```run```. ¿Qué muestra gdb?

3. Haga uso de la herramienta ```valgrind``` en el programa empleado en los puntos anteriores. Se usará la herramienta ```memcheck``` que es parte de ```valgrind``` para analizar lo que pasa: ``` valgrind --leak-check=yes null```. ¿Qué pasa cuando corre esto?, Â¿Puede usted interpretar la salida de la herramienta anterior?

4. Escriba un programa sencillo que asigne memoria usando ```malloc()``` pero olvide liberarla antes de que el programa termina. ¿Qué pasa cuando este programa se ejecuta?, ¿Puede usted usar gdb para encontrar problemas como este?, ¿Que dice acerca de Valgrind (de nuevo use este con la bandera ```--leak check=yes```)?

5. Escriba un programa que cree un array de enteros llamado data de un tamaño de 100 usando ```malloc```; entonces, lleve el ```data[100]``` a ```0```. ¿Qué pasa cuando este programa se ejecuta?, ¿Qué pasa cuando se corre el programa usando ```valgrind```?, ¿El programa es correcto?

6. Codifique un programa que asigne un array de enteros (como arriba), luego lo libere, y entonces intente imprimir el valor de un elemento del array. ¿El programa corre?, ¿Que pasa cuando hace uso de ```valgrind```?

7. Ahora pase un **funny value** para liberar (e.g. un puntero en la mitad del array que usted ha asignado) ¿Qué pasa?, ¿Ústed necesita herramientas para encontrar este tipo de problemas?

8. Intente usar alguna de las otras interfaces para asignacion de memoria. Por ejemplo, cree una estructura de datos simple similar a un vector y que use rutinas que usen realloc para manejar el vector. Use un array para almacenar los elementos del vector; cuando un usuario agregue una entrada al vector, use realloc para asignar un espacio mas a este. ¿Que tan bien funciona el vector asi?, ¿Como se compara con una lista enlazada?, utilice ```valgrind``` para ayudarse en la busqueda de errores.

9. Gaste mas tiempo y lea sobre el uso de gdb y valgrind. Conocer estas herramientas es critico; gaste el tiempo y aprenda como volverse un experto debugger en UNIX y C enviroment.


### Valgrind ###

1. http://valgrind.org/docs/manual/quick-start.html
2. http://www.st.ewi.tudelft.nl/koen/ti2725-c/valgrind.pdf
3. http://pages.cs.wisc.edu/~bart/537/valgrind.html
4. http://web.mit.edu/amcp/drg/valgrind-howto.pdf

### GDB ###

1. http://www.lsi.us.es/~javierj/ssoo_ficheros/GuiaGDB.htm
2. https://www.gdb-tutorial.net/
3. https://web.eecs.umich.edu/~sugih/pointers/summary.html
4. https://www.cs.umd.edu/~srhuang/teaching/cmsc212/gdb-tutorial-handout.pdf
5. https://lihuen.linti.unlp.edu.ar/index.php/C%C3%B3mo_usar_GDB
6. https://www.cs.cmu.edu/~gilpin/tutorial/
7. http://pages.di.unipi.it/bodei/CORSO_FP_17/FP/Lezioni/gdb-commands.pdf
8. https://cs.brown.edu/courses/cs033/docs/guides/gdb.pdf
9. https://darkdust.net/files/GDB%20Cheat%20Sheet.pdf
10. http://users.ece.utexas.edu/~adnan/gdb-refcard.pdf
