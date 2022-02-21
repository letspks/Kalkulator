#include <stdio.h>
#include <stdlib.h>

int main()

{
float b=0, wynik=0;
int operacja=9;
printf("Kalkulator mnozacy, dodajacy, odejmujacy, dzielacy\n");
printf("Dostepne operacje:\n");
printf("0.Podaj wynik\n");
printf("1.Dodawanie\n");
printf("2.Odejmowanie\n");
printf("3.Mnozenie\n");
printf("4.Dzielenie\n");
printf("Wprowadz liczbe poczatkowa: ");
scanf("%f", &wynik);
while(operacja!=0)
{
    printf("Wybierz operacje (0, 1, 2, 3, 4): ");
    scanf("%d", &operacja);
    if (operacja == 0)
    {
        printf("Wynik to: %f", wynik);
        exit(0);
    }
    printf("Wpisz druga liczbe: ");
    scanf("%f", &b);
        switch (operacja)
        {
        case 1:
            wynik=b+wynik;
            break;
        case 2:
            wynik=wynik-b;
            break;
        case 3:
            wynik=wynik*b;
            break;
        case 4:
            if(b==0)
            {
                printf("UWAGA, DZIELENIE PRZEZ 0!!!\n Wybierz ponownie operacje\n");
                break;
            }
            else
            {
                wynik=wynik/b;
                break;
            }
        default:
            printf("Nie rozpoznano operacji.\n");
        }
}
}
