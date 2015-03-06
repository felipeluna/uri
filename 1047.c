#include <stdio.h>

int hourToMinute(int hours, int minutes);
void differenceBetweenHours(int minutesOne, int minutesTwo);
int main(int argc, const char *argv[])
{
    int h1, m1, h2, m2, start, end;
    scanf("%d %d %d %d",&h1, &m1, &h2,&m2);
    start = hourToMinute(h1, m1);
    end = hourToMinute(h2, m2);
    differenceBetweenHours(start, end);
    return 0;
}


int hourToMinute(int hours, int minutes)
{
    int newMinutes;
    newMinutes = hours*60 + minutes;
    return newMinutes;
}

void differenceBetweenHours(int minutesOne, int minutesTwo)
{
    int difference;
    int hours, minutes;

    difference = minutesTwo - minutesOne;
    if (difference == 0)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    }
    else if (difference < 0) 
    {
        //game finished in other day
        difference = (24*60) + difference;
        hours = difference/60;
        minutes = difference%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hours, minutes);
    }
    else
    {
        hours = difference/60;
        minutes = difference%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hours, minutes);
    }
}
