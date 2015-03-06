#include <stdio.h>

int isTriangle(float a, float b, float c);
int main(int argc, const char *argv[])
{
    float a, b, c, area, perimeter;
    int isTriangleInt;
    scanf("%f %f %f",&a, &b, &c);
    isTriangleInt = isTriangle(a,b,c);
    if (isTriangleInt) 
    {
        perimeter = a+b+c;
        printf("Perimetro = %.1f\n", perimeter);
    }
    else
    {
        area = ((a+b)/2.0)*c;
        printf("Area = %.1f\n", area);
    }
    return 0;
}


int isTriangle(float a, float b, float c)
{
    int ret = 0;
    if (((a + b) > c) && ((a + c) > b) && ((b + c) > a))
    {
        ret = 1;
    }
    return ret;
}
