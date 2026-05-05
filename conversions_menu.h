#pragma once

#include <stdio.h>
#include <stdlib.h>

enum Options {
    CELSIUS = 'C',
    KELVIN = 'K'
};

void temp_menu();
void farenheit_menu();