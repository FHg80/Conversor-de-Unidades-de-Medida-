#include <stdio.h>
#include <stdlib.h>

#include "conversions.h"

int main() {
    char buffer[10];
    int option = 0;
  
    printf("Digite 1 para converter de Farenheit para Celsius.\n");
    fgets(buffer, sizeof(buffer), stdin);

    option = atoi(buffer);

    switch(option) {
        case 1:
            farenheit_celsius();
            break;
    }

    return 0;
}