#include <stdio.h>
#include "funs.h"

int phi(long int n){
	int ilosc=1;
	for (int i=2; i<n; i++){
	//alg Ueklidesa
		int a=i, b=n;
		while (a!=b){ 
		if (a<b)
		b=b-a;

		else a=a-b;
		}
		if (a==1) 
		ilosc++;
		//printf("Wartosc funkcji Eulera wynosi %d\n", ilosc);
	}
return ilosc;
}

