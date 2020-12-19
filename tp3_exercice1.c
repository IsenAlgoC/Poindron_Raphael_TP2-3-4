#include <stdio.h>
#include <stdlib.h>
#include <math.h>


#define carre(x)  (x) * (x)




int main() {
	int Nb = 5;
	int b = 0;
	b = carre(Nb);
	printf("la  racine carre de %d est : %d \n",Nb,b);
	// pas la bonne valeur avec (Nb+1) ==> la multiplication ne prend que 1*n
	// on met des parenthèse autour des x 
}