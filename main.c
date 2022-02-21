#include <stdlib.h>
#include <stdio.h>

unsigned long long silnia(int x)
{
    if(x==1)
    {
        return 1;
    }
    else
    {
        return x*silnia(x-1);
    }

}

int main()
{
    int x;
    printf("Podaj x (liczbe na ktorej trzeba przeprowadzic operacje silni): ");
    scanf("%d", &x);
    printf("Wynik: %llu\n", silnia(x));
}
