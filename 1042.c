#include <stdio.h>

void sort(int a, int b, int c);
int main(int argc, const char *argv[])
{
    int a, b, c;
    scanf("%d %d %d",&a, &b, &c);
    sort(a,b,c);
    return 0;
}

void sort(int a, int b, int c)
{

    int first, second, third;

    if (a <= b) 
    {
        if (a <= c) 
        {
            //a smallest
            first = a;
            if (b <= c) 
            {
                second = b;
                third = c;
            }
            else
            {
                second = c;
                third = b;
            }
        }
        else
            //c smallest
        {
            first = c;
            second = a;
            third = b;
        }
    }
    else
    {
        if (b <= c) 
        {
            //b smallest
            first = b;
            if (a <= c) 
            {
                second = a;
                third = c;
            }
            else
            {
                second = c;
                third = a;
            }
        }
        else
        {
            first = c;
            second = b;
            third = a;
        }
    } 

    //print results
    printf("%d\n",first);
    printf("%d\n",second);
    printf("%d\n",third);
    printf("\n");
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%d\n",c);




}
