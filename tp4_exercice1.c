#include<stdio.h>
#include<stdlib.h>
#include"tp4.h"


int main() {
	HEURE HeureDebut = {12,45};
	HEURE HeureFin;
	HEURE Duree = {0,30};

	HeureFin.heure = HeureDebut.heure + Duree.heure;
	HeureFin.minute = HeureDebut.minute + Duree.minute;

	if (HeureFin.minute >= 60) {
		HeureFin.heure = HeureFin.heure + (HeureFin.minute / 60);
		HeureFin.minute = HeureFin.minute % 60;
		
	}
	if (HeureFin.heure >= 24) {
		HeureFin.heure = HeureFin.heure % 24;
	}

	printf("Heure de fin : %d:%d",HeureFin);

}
