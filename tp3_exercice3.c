#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <ctype.h>
//#include <locale.h>

int main() {
	//setlocale(LC_ALL, "fr-FR");
	float moy = 0;
	float val = 0;
	float sum = 0;
	int n = 1;
	int i = 1;
	int c;
	int absence = 0;
	

	while ((i<=30)) {
		printf("entrer la note numero %d : ",i);
		scanf_s("%f", &val);

		if ( (val >= 0) && (val <= 20)) {

			sum  = sum + val;
			moy = sum / n;
			n = n + 1 ;
			i = i + 1;
		}
		else {
			printf("vous avez tape une note invalide, l'eleve etait-il (A)bsent ou voulez vous arreter la saisie (O)ui (N)on? : A/O/N \n");
			printf("taper A pour absent, O pour arreter la saisie et N pour poursuivre. A/O/N :");
			c = (char)_getch();
			c = toupper(c);

			_putch(c);
			_putch('\r');
			_putch('\n');
			
			switch (c) {
			case'A': 
				absence = absence + 1;
				i=i+1;
				break;
			case 'O':
				i = 45;
				break;
			case'N':
				break;
			}
		}
	}
	printf("\nla moyenne est de %f \n", moy);
}