/*
2.) Napisati program koji ucitava recenicu ( moguce da imamo karakter space) te tu recenicu
ispiuje u obrnutom redoslijedu.
*/

#include <stdio.h>

int vel_str(char niz[]){
int i=0;
while (niz[i]!='\0') i++;
return i;
}

void main(){
char niz[100];
int vel;

printf("Unesite rečenicu: ");

for(int i=0;i<99;i++){
niz[i]=getchar();
if (niz[i]=='.'){
    niz[i+1]='\0';
    break;
}
}
printf("%s\n", niz);

vel = vel_str(niz);

for(int i=vel-1;i>=0;i--){
printf("%c",niz[i]);
}
}