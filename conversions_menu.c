#include "conversions_menu.h"
#include "conversions.h"

void temp_menu() {

    char buffer[10];
    int option;

    printf("Digite 1 para converter de Farenheit\n");
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

    printf("Digite 1 para converter de Farenheit para Celsius\n");
    fgets(buffer, sizeof(buffer), stdin);

    option = atoi(buffer);

    switch(option) {
        case 1:
            farenheit_celsius();
            break;
    }
}