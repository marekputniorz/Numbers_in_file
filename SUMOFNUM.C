#include <stdio.h>

int main() {
    FILE *F;
    char nazev_vstup[20];
    char nazev_vystup[20];
    int cislo;
    int sum = 0;

    system("cls");
    printf("Zadej nazev vstupniho souboru: ");
    scanf("%s", nazev_vstup);
    F = fopen(nazev_vstup, "rt");

    if(F == NULL){
     printf("Soubor se nepodarilo otevrit\n");
     system("pause");
     exit(1);
    }

    while (fscanf(F, "%d", &cislo) == 1) {
	sum += cislo;
    }

    printf("Zadej nazev vystupniho souboru: ");
    scanf("%s", nazev_vystup);
    F = fopen(nazev_vystup, "wt");

    if(F == NULL){
     printf("Soubor se nepodarilo otevrit\n");
     system("pause");
     exit(1);
    }

    fprintf(F, "soucet je: %d", sum);
    system("pause");
}