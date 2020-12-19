#include <stdio.h>
#include <stdlib.h>

int main() {
	char mot[20];

	printf("ecriver votre mot\n");
	scanf_s("%s", mot, _countof(mot));

	for (int j = 19; j >= 0; j--) {
		char* Myptr = mot[j];
		printf("%s", Myptr);
		if (){}
	}
}