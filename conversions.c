#include "conversions.h"

void farenheit_celsius() {
    char buffer[10];
    double temp_f = 0;
    double temp_c = 0;

    printf("Insira a temperatura em Farenheit:");
    fgets(buffer, sizeof(buffer), stdin);
    temp_f = strtod(buffer, NULL);

    temp_c = (temp_f - 32)/1.8;

    printf("%.2f Graus Celsius\n", temp_c);
    
}