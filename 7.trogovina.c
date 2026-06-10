/*
7.) Napisati program za dodavanje novih proizvoda u trgovinu koristeći strukture i funkcije.
Definirajte strukturu Product koja sadrži polja za ID proizvoda, naziv proizvoda i cijenu. Kreirajte
funkciju addProduct koja prima pokazivač na niz struktura Product, veličinu niza, novi ID, naziv i
cijenu proizvoda, te dodaje novi proizvod u niz. Kreirajte funkciju printProducts koja prima niz
struktura Product i njegovu veličinu te ispisuje podatke o svim proizvodima. U glavnom
programu kreirajte niz struktura Product, dodajte nekoliko proizvoda pomoću funkcije
addProduct i ispišite ih pomoću funkcije printProducts.
*/

#include <stdio.h>

struct Product{
    int ID;
    char naziv[20];
    double cijena;
};

void unesi(char ime[]){
for (int i=0;i<19;i++){
ime[i]=getchar();
if (ime[i]=='\n'){
    ime[i]='\0';
    break;
}
}
}

void addProduct (struct Product *proizvodi, int vel, int id, char ime[], double c){
for(int i=0;i<vel;i++){
    if (proizvodi[i].ID==0){
        proizvodi[i].ID=id;
        proizvodi[i].cijena=c;
        for(int j=0;ime[j]!='\0';j++) proizvodi[i].naziv[j]=ime[j];
        break;
    }
    printf("\nNiz je pun!\n");
}

}

void printaj(struct Product *proizvodi, int vel){
for (int i=0;i<vel;i++){
if (proizvodi[i].ID!=0){
    printf("\n-----------------------------------------------------");
    printf("\nID: %d",proizvodi[i].ID);
    printf("\nNaziv: %s",proizvodi[i].naziv);
    printf("\nCijena: %.2f",proizvodi[i].cijena);
    printf("\n-----------------------------------------------------");
}
}

}

void main(){
int a;
struct Product proizvodi[50]={0};

printf("Koliko proizvoda želite unijeti? ");
scanf("%d",&a);

for (int i=0;i<a;i++){
    int ID;
    char naziv[30];
    double cijena;

    printf("\nProizvod %d\nID: ",i+1);
    scanf("%d",&ID);
    getchar(); //korištena AI asistencija XD, kada korisnik pritisne enter ono ostaje u bufferu pa da ne pravi probleme prilikom unosa naziva
    printf("Naziv: ");
    unesi (naziv);
    printf("Cijena: ");
    scanf("%lf", &cijena);

    addProduct(proizvodi, 20, ID, naziv, cijena);
}

printaj(proizvodi, 20);
}