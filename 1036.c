#include <math.h>
#include <stdio.h>
void bhaskara(float a, float b, float c);
int main(int argc, const char *argv[])
{
    float a, b, c;
    scanf("%f %f %f",&a,&b,&c);
    bhaskara(a,b,c);
    return 0;
}
void bhaskara(float a, float b, float c)
{
    float dois_a, delta, r1, r2;
    dois_a = 2 * a;
    delta = ((b * b) - (4 * a * c));
    if (dois_a == 0) 
    {
        printf("Impossivel calcular\n");
    }
    else if (delta < 0) 
    {
        printf("Impossivel calcular\n");
    }
    else 
    {
        r1 = ((b * -1) + sqrt(delta))/dois_a;
        r2 = ((b * -1) - sqrt(delta))/dois_a;
        printf("R1 = %.5f\n",r1);
        printf("R2 = %.5f\n",r2);
    }
}

