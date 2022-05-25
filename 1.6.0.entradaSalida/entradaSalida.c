/**
 * @file entradaSalida.c
 * @author wdavidlopez4
 * @brief entrada y salida de caracteres
 * @version 0.1
 * @date 2022-05-25
 * @copyright Copyright (c) 2022
 * 
 * este programa tiene la intencion de verificar que la expresión getchar ( ) ! = EOF es 0 o 1.
 * 
 */

#include <stdio.h>

main()
{
    int numero = getchar() != EOF;
    printf("%d", numero);
}