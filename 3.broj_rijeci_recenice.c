/*
3.) Napisati program koji broji koliko rijeci imamo u jednoj recenici. Iskljucivo karakter ‘.’ smatrati
kao karakterom koji oznacava kraj recenice.
Npr, Auto mi se pokvarilo. Ova recenica sadrzi 4 rijeci.
*/

#include <stdio.h>

int br_rijeci (char niz[]){
int broj=0;
for (int i=0;niz[i]!='\0';i++){
if (niz[i]==' ' || niz[i]=='.') broj++;
}
return broj;
}

void main(){
char niz[100];
int br;

for (int i=0;i<99;i++){
niz[i]=getchar();
if (niz[i]=='.'){
    niz[i+1]='\0';
    break;
}
}

br=br_rijeci(niz);
printf("%d\n%s",br,niz);
}