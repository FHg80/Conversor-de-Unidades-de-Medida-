#include "conversions_menu.h"
#include "conversions.h"

void temp_menu() {

    char buffer[10];
    int option;

    printf("Digite [1] para converter de Farenheit\n");
    printf("Digite [2] para converter de Celsius\n");
    fgets(buffer, sizeof(buffer), stdin);

    option = atoi(buffer);

    switch(option) {
        case 1:
          select_menu(FARENHEIT);
          break;  
        case 2:
          select_menu(CELSIUS);
          break;
    }

}

void select_menu(char option) {
    char buffer[10];
    int temp_option;

    switch(option) {
        case FARENHEIT:
            printf("Digite [1] para converter de Farenheit para Celsius\n");
            printf("Digite [2] para converter de Farenheit para Kelvin\n");
            fgets(buffer, sizeof(buffer), stdin);

            temp_option = atoi(buffer);

            switch(temp_option) {
                case 1:
                    farenheit_conversion(CELSIUS);
                    break;
                case 2:
                    farenheit_conversion(KELVIN);
                    break;
            }
            break;
        case CELSIUS:
            printf("Digite [1] para converter de Celsius para Farenheit\n");
            printf("Digite [2] para converter de Celsius para Kelvin\n");
            fgets(buffer, sizeof(buffer), stdin);

            temp_option = atoi(buffer);

            switch(temp_option) {
                case 1:
                    celsius_conversion(FARENHEIT);
                    break;
                case 2: 
                    celsius_conversion(KELVIN);
                    break;
            }

    }
}

