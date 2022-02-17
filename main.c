#include <stdio.h>
#include <stdlib.h>

int main()

{
int a, b, wynik, dzialanie;
printf("Kalkulator mnozacy, dodajacy, odejmujacy\n");
printf("Wprowadz liczbe a:\n");
scanf("%d", &a);
printf("Jesli chcesz pomnozyc liczbe a z b wybierz 1,\n jezeli chcesz odjac liczbe b od liczby a wybierz 2,\n jesli chcesz dodac liczbe b do liczby a wybierz 3,\n jezeli chcesz podzielic a przez b wybierz 4.\n ");
scanf("%d", &dzialanie);
printf("Wprowadz liczbe b:\n");
scanf("%d", &b);
if(dzialanie==1)
{
    wynik=a*b;
}
else if(dzialanie==2)
{
    wynik=(a-b);
}
else if(dzialanie==3)
{
    wynik=(a+b);
}
else if(dzialanie==4)
{
    if(b==0)
    {
        printf("Nie wolno dzielic przez zero!!!");
    }
    else
    {
        wynik=(a/b);
    }
}
printf("%d", wynik);
}
