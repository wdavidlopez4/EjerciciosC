/**
 * @file conversionTemperaturas.c
 * @author william lopez
 * @brief conversion de temperaturas
 * @version 0.1
 * @date 2022-05-23
 * @copyright Copyright (c) 2022
 * 
 * este programa permite convertir de frados F a C
 * comienza con grados de valor 300 y finaliza cuando lleque a 0
 * ademas, va disminullendo de 20 en 20 hasta llegar a 0
 */

#include<stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP 20

main()
{
    float celsius;

    for(int fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
    {
        celsius = (5.0/9.0) * fahr - 32;
        printf("%3d, \t %3f \n", fahr, celsius);
    }
}