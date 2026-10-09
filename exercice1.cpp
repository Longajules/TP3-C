#include <iostream>
#include <random>
#include <stdio.h>


int conversionHeureMinute(int minute, int heure) {

	minute = 60 * heure;

	return minute;
}


int main() {

	int heure = 0;
	int seconde = 0;
	int minute = 0;

	printf("donnez valeur a convertir :");
	scanf_s("%d", &heure);

	minute = conversionHeureMinute(minute, heure);
	printf("%d heure faut %d minutes", heure, minute);


	return 0;
}

