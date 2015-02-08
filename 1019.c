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
    int a[] = {3600, 60, 1};
    int b[3];
    int i;
    for (i = 0; i < 3; i++) 
    {
        b[i] = time / a[i];
        time = time % a[i];
    }
    printf("%d:%d:%d\n",b[0],b[1],b[2]);

}
