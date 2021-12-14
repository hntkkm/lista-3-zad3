#include <stdio.h>
#include "funs.h"


int main(void){
	long int n;
	printf("Podaj liczbę\n");
	scanf("%ld",&n);

	printf("Wartosc funkcji to %d\n",phi(n));
}
