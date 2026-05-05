#include "conversions_menu.h"
#include "conversions.h"

void temp_menu() {

    char buffer[10];
    int option;

    printf("Digite [1] para converter de Farenheit\n");
    fgets(buffer, sizeof(buffer), stdin);

    option = atoi(buffer);

    switch(option) {
        case 1:
          farenheit_menu();
          break;  
    }

}

void farenheit_menu() {
    char buffer[10];
    int option;

    printf("Digite [1] para converter de Farenheit para Celsius\n");
    printf("Digite [2] para converter de Farenheit para Kelvin\n");
    fgets(buffer, sizeof(buffer), stdin);

    option = atoi(buffer);

    switch(option) {
        case 1:
            farenheit_conversion(CELSIUS);
            break;
        case 2:
            farenheit_conversion(KELVIN);
            break;
    }
}