#include <stdio.h>
void calculo(int dinheiros);
int main(int argc, const char *argv[])
{
    int dinheiros;
    scanf("%d",&dinheiros);
    printf("%d\n",dinheiros);
    calculo(dinheiros);
    return 0;
}
void calculo(int dinheiros)
{
    int a[] = { 100, 50, 20, 10, 5, 2, 1 };
    int i, atual;
    for (i = 0; i < 7; i++) {
        atual = dinheiros / a[i];
        dinheiros = dinheiros % a[i];
        printf("%d nota(s) de R$ %d,00\n",atual,a[i]);
    }
}
