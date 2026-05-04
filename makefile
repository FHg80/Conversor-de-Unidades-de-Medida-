conversions.o: conversions.c
	gcc -c conversions.c -o conversions.o
conversions_menu.o: conversions_menu.c 
	gcc -c conversions_menu.c -o conversions_menu.o
conversor.o: conversor.c
	gcc -c conversor.c -o conversor.o
conversor: conversions.o conversor.o conversions_menu.o
	gcc conversions_menu.o conversions.o conversor.o -o conversor