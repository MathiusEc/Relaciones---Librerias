/* Menú interactivo: El programa debe presentar un menú en el que el usuario pueda seleccionar entre tres 
opciones para ejecutar diferentes funciones recursivas.

Funciones recursivas requeridas:
 Opción 1: Invertir una cadena ingresada por el usuario. Esta función ya fue vista en clase. 
 Opción 2: Calcular el factorial de un número entero positivo ingresado por el usuario.
 Opción 3: Generar la sucesión de Fibonacci hasta un número dado ingresado por el usuario.

Modularización del programa: Todas las funciones recursivas deben estar implementadas en un archivo de 
cabecera con extensión .h. Este archivo de cabecera debe ser incluido y llamado desde el programa principal.

Detalles técnicos: El programa principal debe encargarse de manejar el menú, recibir entradas del usuario
y mostrar los resultados correspondientes. Asegúrese de que el código sea claro y esté bien documentado. */


#include <stdio.h>
#include <string.h>
void invertirTex(char *texto, int longitud) {
    int inicio = 0;
    int fin = longitud - 1;
    while (inicio < fin) {
        char temp = texto[inicio];
        texto[inicio] = texto[fin];
        texto[fin] = temp;
        inicio++;
        fin--;
    }
}

int fibonacci(int num){
    if(num<=0){
        return 0;
    }else if(num == 1){
        return 1;
    }else{
       return fibonacci(num-1) + fibonacci(num-2);
    }
}



int main(){
    int opc,num;
    char texto[100];
    do
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

        scanf("%d",&opc);
        getchar(); // Consumir el carácter de nueva línea

        switch (opc)
        {
        case 1:
            printf("\n Estimado ususario, porfavor ingrese un texto");
            printf("\n Maximo de 100 caracteres: ");
            fgets(texto, sizeof(texto), stdin);
            texto[strcspn(texto, "\n")] = '\0'; // Eliminar el carácter de nueva línea si existe
            printf("\n La cadena ingresada es: %s",texto);
            invertirTex(texto, strlen(texto));
            printf("\n La cadena invertida es: %s",texto);
            printf("\n");
            break;

        case 2:
            break;

        case 3:
            do
            {
                printf("\n Ingrese la cantidad de números de la sucesión de Fibonacci que desea visualizar: ");
                scanf("%d",&num);
                if(num<1){
                    printf("\n Ingrese un valor positivo");
                }
            } while (num<1);

            printf("\n La sucesión de Fibonacci hasta %d es: ",num);
            for (int i=1; i<=num; i++)
            {
                printf("\n %15d",fibonacci(i));
            }
            printf("\n");

            break;
        case 4:
            printf("Chau.... \n");
            break;
        default:
            printf("Ingrese una opción dentro del menú \n");
            printf("\n");
           break;
        }
    }while(opc!=4);
    return 0;
}