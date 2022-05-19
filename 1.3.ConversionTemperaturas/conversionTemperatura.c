/**
 * @file conversionTemperatura.c
 * @author william lopez
 * @brief conversion de temperatura
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * programa que convierte de grados F a C
 * el valor minimo es 0 y el maximo es 300 con saltos de 20 en 20 grados
 * la siquiente es la formula utilizada °C = (5/9) (°F -32)
 */

#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    printf("Fahrenheit \t Celsius \n");

    while(fahr <= upper)
    {
        celsius = (5.0/9.0) * (fahr - 32);
        printf("%4.0f \t\t %4.4f \n", fahr, celsius);
        fahr = fahr + step;
    }
}