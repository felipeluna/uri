#include <stdio.h>

int cmpfunc (const void * a, const void * b)
{
    if(*(float*)a == *(float)b)
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

int main(int argc, const char *argv[])
{
    float a = 90.0;
    double b = 60.0;
    printf("%.1f\n",a+b/2);
    
    return 0;
}
