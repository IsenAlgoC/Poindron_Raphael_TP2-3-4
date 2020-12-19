#include<stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <ctype.h>



int main() {
	char nom[20];
	char prenom[20];
	char sexe;

	printf("ecriver votre nom de famille\n");
	scanf_s("%s", nom,_countof(nom));

	printf("ecriver votre prenom\n");
	scanf_s("%s",prenom,_countof(prenom));
	
	
	printf("donner voter sexe H pour homme et F pour femme\n");
	sexe = (char)_getch();
	sexe = toupper(sexe);

	_putch(sexe);
	_putch('\r');
	_putch('\n');

	switch (sexe) {
	case'H':
		printf("Monsoeur %s %s",nom,prenom);
		break;
	case 'F':
		printf("Madame %s %s",nom,prenom);
		break;
	}
}