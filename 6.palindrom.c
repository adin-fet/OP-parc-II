/*
6.) Napisati program koji provjerava da li je uneseni string PALINDROM.
*/

#include <stdio.h>
#define vel 100

int velicina(char niz[]){
int i=-1;
while (niz[++i]!='\0');
return i;
}

void kopija(char o[],char c[]){
for(int i=0;i<vel;i++){
    if (o[i]==' ') continue;
    else if(o[i]=='\0'){
        c[i]='\0';
        break;
    }
    else c[i]=o[i];
}
}

void obrnt(char niz1[], char niz2[], int duz){
for (int i=0;i<duz;i++){
    if (niz1[i]>='A' && niz1[i]<='Z') niz1[i]+='a'-'A';
    niz2[i]=niz1[duz-1-i];
}
}

int provjera(char niz[]){
char niz1[vel], niz2[vel];

kopija (niz, niz1);

int duz=velicina(niz1);

obrnt(niz1, niz2, duz);

for(int i=0;i<duz;i++){
    if (niz1[i]!=niz2[i]) return 0;
}
return 1;
}


void main(){
char niz[vel];

printf("Unesite recenicu: ");
for(int i=0;i<99;++i){
    niz[i]=getchar();
    if(niz[i]=='.'){
        niz[i+1]='\0';
        break;
    }
}

if (provjera(niz)) printf("String je palindrom!");
else printf("String nije palindrom!");
}
