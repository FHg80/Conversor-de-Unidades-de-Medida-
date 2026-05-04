conversions.o: conversions.c
	gcc -c conversions.c -o conversions.o
conversor.o: conversor.c
	gcc -c conversor.c -o conversor.o
conversor: conversions.o conversor.o
	gcc conversions.o conversor.o -o conversor