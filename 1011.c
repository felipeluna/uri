#include <stdio.h>
#define PI 3.14159
double calc_vol(int r);
int main(int argc, const char *argv[])
{
    int r;
    double result;
    scanf("%d",&r);
    result = calc_vol(r); 
    printf("VOLUME = %.3f\n",result);

    return 0;
}
double calc_vol(int r)
{
    double ret;
    ret = (4.0/3) * PI * r * r * r;
    return ret;
}

