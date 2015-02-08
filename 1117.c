#include <stdio.h>

int validate (float value);
int main(int argc, const char *argv[])
{
    double input, v1, v2, v3, v4,  media;
    
    scanf("%lf",&input);
    v1 = validate(input);
    while(!v1)
    {
        printf("nota invalida\n");
                
        scanf("%lf",&input);
        v1 = validate(input);
        v3 = input;    
    }
    scanf("%lf",&input);
    v2 = validate(input);

    while(!v2)
    {
        printf("nota invalida\n");
                
        scanf("%lf",&input);
        v2 = validate(input);
        v4 = input;
     }
    media = (v3 + v4)/2; 
    printf("media = %.2f\n",media);
    

    
    return 0;
}

int validate (float value)
{
    int ret;
    if (value < 0.0) 
    {
        ret = 0;
    }
    else if (value > 10.0) 
    {
        ret = 0;
    }
    else
    {
        ret = 1;
    }
    return ret;
}
