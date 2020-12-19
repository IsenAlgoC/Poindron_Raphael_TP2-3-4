#include <stdlib.h>
#include <stdio.h>
#include <limits.h>


int main() {
	int a=0;
	unsigned short int n = 0;
	scanf_s("%hu", &n);
	for (int i = 1; i <= n ; i++) { a = a + i; }
	printf("%d somme des entiers de 1 a n \n\n",a);


	unsigned int b = 0;
	int j = 0;
	while (INT_MAX-b>=j){
		j += 1;
		b = b + j;}
	printf("%d somme des entiers sans depassement \n", b);
	printf("%d derniere valeur de j \n", j);
	printf("%d\n", INT_MAX);
}
