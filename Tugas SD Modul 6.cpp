#include<stdio.h>
#include<conio.h>
#include<string.h>

char balik(char K[50]);
char cek(char O[50],char P[50]);

int main()

{
char K[50],L[50];

printf("Masukkan kalimat : "); gets(m);

strcpy(K,L);

balik(K);

cek(K,L);

getch();

printf("Masukkan kalimat : "); gets(m);
strcpy(L,K);

balik(L);

cek(K,L);


getch();

}


char balik(char x[50])


{

strrev(x);

}


char cek(char O[50],char P[50])


{


if(strcmp(O,P)==0)


{


printf("\nKalimat tersebut adalah palindrom\n\n");


}


else


{

printf("\nKalimat tersebut bukan palindrom\n\n");

}

}

