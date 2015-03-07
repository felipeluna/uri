#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b);
int main(int argc, const char *argv[])
{
    float a, b, c;
    scanf("%f %f %f",&a, &b, &c);
    float inputArray[3] = {a,b,c};
    qsort(inputArray, 3, sizeof(float),cmpfunc);
    a = inputArray[0];
    b = inputArray[1];
    c = inputArray[2];
    if (a >= (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        if ((a*a) == ((b*b) + (c*c)))
        {
            printf("TRIANGULO RETANGULO\n");
        }
        if ((a*a) > ((b*b) + (c*c)))
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if ((a*a) < ((b*b) + (c*c)))
        {
            printf("TRIANGULO ACUTANGULO\n");
        }
        if (a == b && b == c)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        if ((a == b && a != c) || (a == c && a != b) || (b == c && b != a))
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    return 0;
}

int cmpfunc (const void * a, const void * b)
{
    if(*(float*)a == *(float*)b)
    {
        return 0;
    }
    else
    {
        if (*(float*)a < *(float*)b)
        {
            return 1;
        }
        else
        {
            return -1;
        }
    }
}
