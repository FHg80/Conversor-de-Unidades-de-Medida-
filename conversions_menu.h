#pragma once

#include <stdio.h>
#include <stdlib.h>

enum Options {
    CELSIUS = 'C',
    KELVIN = 'K',
    FARENHEIT = 'F'
};

void temp_menu();
void select_menu(char option);