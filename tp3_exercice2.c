#include <stdio.h>
#include <stdlib.h>

int main() {
	unsigned int n = 2868838400;
	unsigned int o = 0;
	unsigned int b = 0;
	o = sizeof(n);
	b = 8 * o;
	printf("le nombre d'octets est de : %u \n", o);
	printf("le nombre de bits est de : %u \n", b);
	

	for (int compteur = 0; compteur <= b-1; compteur++) {
		if (((n >> compteur) & 1) == 1) {
			printf("bit %d : ON \n",compteur);
		}
		else {
			printf("bit %d : OFF \n",compteur);
		}
	}
	printf("bye \n");
}
