/*
4.) Napisati funkcija zamijeni koja kao parametar uzima pokazivac na string, a koja zamjenjuje
sva prazna mjesta znakon '_' i vraca broj takvih zamijenjenih mjesta.
*/

#include <stdio.h>

int zamijeni(char *niz){
int a=0;
for (int i=0;niz[i]!='\0';i++){
if (*(niz+i)==' '){
    *(niz+i)='_';
    a++;
}
}
return a;
}

void main(){
char niz[100];
int razmak;

for (int i=0;i<99;i++){
niz[i]=getchar();
if (niz[i]=='.'){
    niz[i+1]='\0';
    break;
}
}

printf("%s", niz);
razmak=zamijeni(niz);

printf("\n%s\n%d", niz,razmak);

}