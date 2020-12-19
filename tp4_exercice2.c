#include<stdio.h>
#include<stdlib.h>
#define SEPARATEUR '/'
#define TAILLETAB1 20

int main() {

	int Mytab[TAILLETAB1];

	for (int i = 0; i <= 19; i++) {
		Mytab[i] = i+1;
		printf("%d %c ", Mytab[i],SEPARATEUR);
	}
	printf("\n");
	for (int j = 19; j >= 0; j--) {
		int*Myptr = Mytab[j];
		printf("%d %c ", Myptr, SEPARATEUR);
	}
}