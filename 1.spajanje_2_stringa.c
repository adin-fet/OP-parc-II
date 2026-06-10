/*
1.) Napisati program koji spaja dva stringa tj. kopira drugi string na kraj prvog stringa. Potrebno
je implementirati funkciju spoji_string koja prima dva stringa i na kraj prvog stringa dodaje drugi
string, te zatim ispisuje string koji je nadovezan. Izmedju dva stringa treba da se nalazi karakter
space. Oba stringa korisniku omoguciti da unese.
*/

#include <stdio.h>

int vel_str(char niz[]){
int i=0;
while(niz[i]!='\0') i++;
return i;
}

void spoji_string(char prvi[], char drugi[]){
int a=vel_str(prvi);
int b=vel_str(drugi);
prvi[a]=' ';
for (int i=0;i<=b;i++){
prvi[a+1+i]=drugi[i];
}
}

void main(){
char prvi[20], drugi[20];

printf("Unesite prvi string: ");
scanf("%s", &prvi);
printf("Unesite drugi string: ");
scanf("%s", &drugi);

spoji_string(prvi, drugi);

printf("%s\n%s", prvi, drugi);


}