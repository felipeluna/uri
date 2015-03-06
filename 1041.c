#include <stdio.h>
int main(int argc, const char *argv[])
{
    float x, y;
    scanf("%f %f", &x, &y);
    if ( x > 0 && y > 0) 
    {
        printf("Q1\n");
    }
    else if (x > 0 && y < 0) 
    {
        printf("Q4\n");
    }
    else if (x < 0 && y > 0) 
    {
         printf("Q2\n");
    }
    else if (x < 0 && y < 0) 
    {
        printf("Q3\n");
    }
    else if (x == 0 && y == 0) 
    {
        printf("Origem\n");
    }
    //If the point is over X axis write "Eixo X", else if the point is over Y axis write "Eixo Y".
    else if (x == 0 && ( y > 0 || y < 0)) 
    {
        printf("Eixo Y\n");      
    }
    else if (y == 0 && ( x > 0 || x < 0)) 
    {
        printf("Eixo X\n");
    }
    return 0;
}
