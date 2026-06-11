/*
12.) Napisati program koji će omogućiti unos elemenata u niz, izračunati sumu parnih i sumu
neparnih elemenata niza, te ispisati ove sume na ekran.
A. Program treba da radi na sljedeći način:
B. Korisnik unosi broj elemenata niza.
C. Korisnik unosi vrijednosti elemenata niza.
D. Program izračunava sumu parnih i sumu neparnih elemenata niza.
E. Na kraju, program ispisuje sumu parnih i sumu neparnih elemenata na ekran.
*/

#include <stdio.h>

void main(){
int niz[100];
int a, suma_p=0, suma_n=0;

printf("Unesite broj elemenata: ");
scanf("%d",&a);

for (int i=0;i<a;i++){
printf("%d. element: ",i+1);
scanf("%d",&niz[i]);
}

for (int i=0;i<a;i+=2) suma_n+=niz[i];
for(int i=1;i<a;i+=2) suma_p+=niz[i];

printf("Suma parnih elemenata: %d\nSuma neparnih elemenata: %d",suma_p, suma_n);
}