/*
Invertir una Cadena
*/

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



/*
Serie de Fibonacci
*/

int fibonacci(int num){                               // Declara la función fibonacci que recibe un número entero.
    if(num<=0){                                       // Si el número es menor o igual a cero devuelve 0
        return 0;
    }else if(num == 1){                               // Si el número es igual a 1 devuelve 1
        return 1;
    }else{
       return fibonacci(num-1) + fibonacci(num-2);    // si no se cumple ninguna de las condiciones anteriores,
    }                                                 // llama recursivamente a fibonacci con num-1 y num-2, y retorna la suma de ambos.
}


/*
Factorial de un Número
*/

int factorial(int num){                               // Función que calcula el factorial de un número.
    if(num==0){                                       // Si el número es igual a 0 devuelve 1.
        return 1;
    }else{
        return num*factorial(num-1);                  // Si no, llama recursivamente a factorial con num-1 y retorna la multiplicación de ambos. 
    }
}

