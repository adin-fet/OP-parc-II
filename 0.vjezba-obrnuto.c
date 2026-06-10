/*
pr.) Napisati program koji uz koristenje fje void obrnitstr(char *)
izvrsi inverziju redoslijeda slova u rijeci.
*/

#include <stdio.h>
#define vel 100

int vel_str(char niz[]){
int i=0;
while (niz[i]!='\0') i++;
return i;
}

void kopiraj(char niz1[], char niz[]){
int i=0;
do{
niz[i]=niz1[i];
}while(niz1[i++]!='\0');
}

void obrnistr(char *niz) {
    int vel1 = vel_str(niz);
    char niz1[vel];

    int pisanje = vel1 - 1; // od desna prema lijevo u niz1 (ignorišemo '.')

    for (int p = 0; p < vel1 - 1; ) {
        // pronađi kraj riječi
        int k = p;
        while (k < vel1 - 1 && niz[k] != ' ') {
            k++;
        }
        // dužina trenutne riječi
        int duzina = k - p;

        // izračunaj gdje u niz1 pisati ovu riječ (s desna)
        pisanje -= duzina;

        // kopiraj riječ
        for (int i = 0; i < duzina; i++) {
            niz1[pisanje + i] = niz[p + i];
        }

        // dodaj razmak lijevo od nje (osim za prvu koja ide na kraj)
        if (pisanje > 0) {
            pisanje--;
            niz1[pisanje] = ' ';
        }

        // preskoči razmak u originalnom nizu
        p = k + 1;
    }

    niz1[vel1 - 1] = '.'; // vrati tačku na kraj
    kopiraj(niz1, niz);
}


void main(){
char niz[vel];

printf("Unesite rečenicu: ");
for (int i=0;i<99;i++){
niz[i]=getchar();
if (niz[i]=='.'){
    niz[i+1]='\0';
    break;
}
}

printf("\n%s\n",niz);
obrnistr(niz);
printf("\n%s\n",niz);
}