#include <stdio.h>
#include <stdlib.h>

#include "conversions_menu.h"

int main() {
    char buffer[10];
    int option = 0;
  
    printf("Digite 1 para conversão de temperatura:\n");
    fgets(buffer, sizeof(buffer), stdin);

    option = atoi(buffer);

    switch(option) {
        case 1:
            temp_menu();
            break;
    }

    return 0;
}