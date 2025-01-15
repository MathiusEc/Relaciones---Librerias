/*
Nombres: Mathias David
Apellidos: Castillo Yandún
NCR: 5535
*/


#include <stdio.h> 
//Es una cabecera de la biblioteca estándar de C que se utiliza para realizar operaciones de entrada y salida, 
//como leer y escribir datos.

#include <string.h>
//Es una cabecera de la biblioteca estándar de C que proporciona funciones para manipular
// y operar con cadenas de caracteres.


void invertirTex(char *texto, int longitud) {         // Declara la función invertirTex que recibe un puntero a una cadena y su longitud.
    int inicio = 0;                                   // Índice Inicial
    int fin = longitud - 1;                           // Índice Final
    while (inicio < fin) {                            // Bucle que invierte caracteres
        char temp = texto[inicio];                    // Almacena temporalmente el carácter en la posición inicio.
        texto[inicio] = texto[fin];                   // Mueve el carácter de fin a inicio.
        texto[fin] = temp;                            // Mueve el carácter guardado en temp a fin.
        inicio++;                                     // Incrementa el valor de inicio.
        fin--;                                        // Decrementa el valor de fin.
    }
}

int fibonacci(int num){                               // Declara la función fibonacci que recibe un número entero.
    if(num<=0){                                       // Si el número es menor o igual a cero devuelve 0
        return 0;
    }else if(num == 1){                               // Si el número es igual a 1 devuelve 1
        return 1;
    }else{
       return fibonacci(num-1) + fibonacci(num-2);    // si no se cumple ninguna de las condiciones anteriores,
    }                                                 // llama recursivamente a fibonacci con num-1 y num-2, y retorna la suma de ambos.
}

int factorial(int num){                               // Función que calcula el factorial de un número.
    if(num==0){                                       // Si el número es igual a 0 devuelve 1.
        return 1;
    }else{
        return num*factorial(num-1);                  // Si no, llama recursivamente a factorial con num-1 y retorna la multiplicación de ambos. 
    }
}



int main(){                                           // Función principal

    int opc,num;                                      // Decalaración de variables
    char texto[100];

    do                                                // Bucle que se ejecuta al menos una vez y se repite mientras la condición sea verdadera.
    {

        printf("\n Mathias Castillo");
        printf("\n Grupo 5535");
        printf("\n");
        printf("*********************************\n"); 
        printf("             MENU \n"); 
        printf("*********************************\n"); 
        printf("1. Invertir una Cadena \n"); 
        printf("2. Cálculo de Factoriales \n"); 
        printf("3. Sucesión de Fibonacci \n"); 
        printf("4. Salir \n"); 
        printf("*********************************\n"); 
        printf("Seleccione una opción: ");

        /*
        Se imprime un menú en la consola, donde esta el nombre del autor,
        el grupo al que pertence, y las opciones del menú.
        */

        scanf("%d",&opc);                            // Se lee la opción ingresada por el usuario, y se almacena en la variable opc.
        getchar(); 

        /*
        Consumir el carácter de nueva línea, esto asegura
        que la próxima lectura de entrada, especialmente si es una cadena, 
        no se vea afectada por ese carácter de nueva línea.
        */                                

        switch (opc)                                // Evalúa la variable opc y ejecuta el bloque de código correspondiente.
        {
        case 1:                                     // Si opc es igual a 1, ejecuta el siguiente bloque de código.

            printf("\n Estimado ususario, porfavor ingrese un texto");
            printf("\n Maximo de 100 caracteres: "); 
            //Solicita al usuario que ingrese una cadena de texto

            fgets(texto, sizeof(texto), stdin);    // Lee una línea de texto ingresada por el usuario desde la entrada estándar y la almacena en la variable texto.
            texto[strcspn(texto, "\n")] = '\0';    // Eliminar el carácter de nueva línea ('\n') si existe en la cadena.

            printf("\n La cadena ingresada es: %s",texto);
            // Imprime la cadena ingresada por el usuario.
            
            invertirTex(texto, strlen(texto));     // Llama a la función invertirTex para invertir la cadena ingresada.
            printf("\n La cadena invertida es: %s",texto);
            printf("\n");                          
            // Imprime la cadena invertida.
            break;


        case 2:                                    // Si opc es igual a 2, ejecuta el siguiente bloque de código.

            do                                     // Bucle que se ejecuta al menos una vez y se repite mientras la condición sea verdadera.
            {
                printf("\n Ingrese un número entero positivo para calcular su factorial: ");
                scanf("%d",&num);
                // Solicita al usuario que ingrese un número entero positivo.
                
                if(num<0){
                    printf("\n Ingrese un valor positivo");
                    // Si el número ingresado es menor a 0, imprime en pantalla un mensaje solicitando ingresar un número positivo.
                }
            } while (num<0);                       // Se repite mientras num sea menor a 0.

            printf("\n El factorial de %d es: %d",num,factorial(num));
            // Llama a la función factorial, para calcular el factorial
            // del número ingresado y muestra el resultado en pantalla.
            break;


        case 3:                                    // Si opc es igual a 3, ejecuta el siguiente bloque de código.

            do                                     // Bucle que se ejecuta al menos una vez y se repite mientras la condición sea verdadera.
            {
                printf("\n Ingrese la cantidad de números de la sucesión de Fibonacci que desea visualizar: ");
                scanf("%d",&num);
                // Solicita al usuario que ingrese un número entero positivo.

                if(num<1){
                    printf("\n Ingrese un valor positivo");
                    // Si el número ingresado es menor a 1, imprime en pantalla un mensaje solicitando ingresar un número positivo.
                }
            } while (num<1);                       // Se repite mientras num sea menor a 1.

            printf("\n La sucesión de Fibonacci hasta %d es: ",num);
            // Imprime en pantalla la cantidad de números de la sucesión de Fibonacci que se visualizarán.

            for (int i=1; i<=num; i++)             // Bucle que se ejecuta desde 1 hasta num.
            {
                printf("\n %15d",fibonacci(i));
                // Llama a la función fibonacci para calcular el i-ésimo número de la sucesión de Fibonacci
            }
            printf("\n");
            break;


        case 4:                                    // Si opc es igual a 4, ejecuta el siguiente bloque de código.
            printf("Chau.... \n");                 // Imprime en pantalla un mensaje de despedida.
            break;


        default:                                   // Si opc no es igual a ninguno de los casos anteriores, ejecuta el siguiente bloque de código.
            printf("Ingrese una opción dentro del menú \n");
            printf("\n");
            // Imprime en pantalla un mensaje solicitando al usuario que ingrese una opción válida.
           break;
        }
    }while(opc!=4);                                // Se repite todo el código anterior mientras opc sea diferente de 4.
    return 0;                                      // Retorna 0, indicando que el programa se ejecutó correctamente.
}