#include <stdio.h>
int how_long(double a, double b, int dis);
int main(int argc, const char *argv[])
{
    int dis, res;
    double a, b;
    a = 60;//km/h
    b = 90;//km/h
    scanf("%d",&dis);
    res = how_long(a,b,dis);
    
    printf("%d minutos\n",res);
    return 0;
}

int how_long(double a, double  b, int dis)
{
    int res;
    res = dis/(b-a) * 60;
    return res;
}
