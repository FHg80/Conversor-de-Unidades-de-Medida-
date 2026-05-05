#include "conversions.h"
#include "conversions_menu.h"

void farenheit_conversion(char option) {
    char buffer[10];
    double temp_f = 0;
    double new_temp = 0;

    printf("Insira a temperatura em Farenheit:");
    fgets(buffer, sizeof(buffer), stdin);
    temp_f = strtod(buffer, NULL);

    switch(option) {
        case CELSIUS:
            new_temp = (temp_f - 32)/1.8;
            printf("%.2f Graus Celsius\n", new_temp);
            break;
        case KELVIN:
            new_temp = (((temp_f - 32)*5)/9) + 273.15;
            printf("%.2f Graus Kelvin\n", new_temp);
            break;
    }    
}

void celsius_conversion(char option) {
    char buffer[10];
    double temp_c = 0;
    double new_temp = 0;

    printf("Insira a temperatura em Celsius:");
    fgets(buffer, sizeof(buffer), stdin);

    temp_c = strtod(buffer, NULL);

    switch(option) {
        case FARENHEIT:
          new_temp = (temp_c * 1.8) + 32;
          printf("%.2f Graus Farenheit\n", new_temp);
          break;
        case KELVIN:
          new_temp = temp_c + 273.15;
          printf("%.2f Graus Kelvin\n", new_temp);
          break;      
    }

}

void kelvin_conversion(char option) {
    char buffer[10];
    double temp_k = 0;
    double new_temp = 0;

    printf("Insira a temperatura em Kelvin:");
    fgets(buffer, sizeof(buffer), stdin);

    temp_k = strtod(buffer, NULL);

    switch(option) {
        case FARENHEIT:
            new_temp = (temp_k * 1.8) - 459.67;
            printf("%.2f Graus Farenheit\n", new_temp);
            break;
        case CELSIUS:
            new_temp = temp_k - 273.15;
            printf("%.2f Graus Celsius\n", new_temp);
            break;
    }
}
