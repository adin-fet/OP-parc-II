/*
5.) Napisati program koji uz koristenje fje void obrnitstr(char *) izvrsi inverziju redoslijeda slova u
rijeci.
*/

#include <stdio.h>

int duzina(char str[]){
int i=-1;
while(str[++i]!='\0');
return i;
}

void kopiraj(char org[], char cpy[]){
int i=0;
for (; org[i]!='\0';i++) cpy[i]=org[i];
cpy[i]=org[i];
}

void obrnistr(char niz[]){
int a=duzina(niz);
char niz1[20];
for (int i=0;i<a;i++){
niz1[a-1-i]=niz[i];
}
kopiraj(niz1,niz);
}

void main(){
char rijec[20];

scanf("%s",&rijec);

obrnistr(rijec);
printf("\n%s",rijec);

}