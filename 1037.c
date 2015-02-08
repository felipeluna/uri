#include <stdio.h>
void solve(float input);
int main(int argc, const char *argv[])
{
    float input;
    scanf("%f",&input);
    solve(input);
    return 0;
}
void solve(float input)
{
    if (input >= 0 && input <= 25) 
    {
        printf("Intervalo [0,25]\n");
    }
    else if (input > 25 && input <= 50) 
    {
        printf("Intervalo (25,50]\n");
    }
    else if (input > 50 && input <= 75) 
    {
        printf("Intervalo (50,75]\n");
    }
    else if (input > 75 && input <= 100)         
    {
        printf("Intervalo (75,100]\n");
    }
    else 
    {
        printf("Fora de invervalo\n");
    }
}

