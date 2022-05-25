/**
 * @file copiarEntradaEnSalida.c
 * @author wdavidlopez4
 * @brief copiar la entrada en la salida
 * @version 0.1
 * @date 2022-05-25
 * @copyright Copyright (c) 2022
 * 
 * este programa consiste en copiar la entrada en la salida, es decir,
 * simplemente si la entrada es "hola mundo" entonces la salida es "hola mundo" 
 */

#include<stdio.h>

main()
{
    int a;

    while ((a = getchar()) != EOF)
    {
        putchar(a);
    }
    
}