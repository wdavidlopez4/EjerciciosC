/**
 * @file conversionTemperatura.c
 * @author william lopez
 * @brief conversion de temperaturas
 * @version 0.1
 * @date 2022-05-19
 * 
 * @copyright Copyright (c) 2022
 * 
 * programa para convertir de C - F 
 * Comienza en temperatura de 0 y termina en 300 en saltos de 20
 * formula (°C × 9/5) + 32 = °F
 */

#include <stdio.h>

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    celsius = lower;

    while (celsius <= upper)
    {
        fahr = (celsius * (9.0/5.0)) + 32;
        printf("%4.0f \t %4.4f \n", celsius, fahr);

        celsius = celsius + step;
    }
}