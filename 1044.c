#include <stdio.h>

int main(int argc, const char *argv[])
{
    int a, b, tmp;
    scanf("%d %d",&a, &b);
    if (b > a) 
    {
       tmp = b;
       b = a;
       a = tmp;
    }

    if (a%b == 0) 
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    return 0;
}
