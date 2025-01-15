/*
Nombres: Mathias David
Apellidos: Castillo Yandún
NCR: 5535
*/


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

int factorial(int num){
    if(num==0){
        return 1;
    }else{
        return num*factorial(num-1);
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
            do
            {
                printf("\n Ingrese un número entero positivo para calcular su factorial: ");
                scanf("%d",&num);
                if(num<0){
                    printf("\n Ingrese un valor positivo");
                }
            } while (num<0);

            printf("\n El factorial de %d es: %d",num,factorial(num));
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