#include <stdio.h>
void calculo(int time);
int main(int argc, const char *argv[])
{
    int time;
    scanf("%d",&time);
    calculo(time);
    return 0;
}
void calculo(int time)
{
    int a[] = {365, 30, 1};
    int b[3];
    int i;
    for (i = 0; i < 3; i++) 
    {
        b[i] = time / a[i];
        time = time % a[i];
    }
    printf("%d ano(s)\n",b[0]);
    printf("%d mes(es)\n",b[1]);
    printf("%d dia(s)\n",b[2]);

}
