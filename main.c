#include <stdio.h>
#include <stdlib.h>

int main()

{
int a, b, wynik, dzialanie;
printf("Kalkulator mnozacy, dodajacy, odejmujacy\n");
printf("Wprowadz liczbe a:\n");
scanf("%d", &a);
printf("Wprowadz liczbe b:\n");
scanf("%d", &b);
printf("Jesli chcesz pomnozyc liczbe a z b wybierz 1,\n jezeli chcesz odjac liczbe b od liczby a wybierz 2,\n jesli chcesz dodac liczbe b do liczby a wybierz 3. ");
scanf("%d", &dzialanie);
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
printf("%d", wynik);
}
