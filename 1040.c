#include <stdio.h>

float calculateAverage(float a, float b, float c, float d);

int main(int argc, const char *argv[])
{
    float gradeOne, gradeTwo, gradeThree, gradeFour, gradeFinalOne, gradeFinalTwo;
    scanf("%f %f %f %f",&gradeOne, &gradeTwo, &gradeThree, &gradeFour);
    gradeFinalOne = calculateAverage(gradeOne, gradeTwo, gradeThree, gradeFour); 
    printf("Media: %.1f\n",gradeFinalOne);
    if (gradeFinalOne >= 7.0) 
    {
        printf("Aluno aprovado.\n");
    }
    else if (gradeFinalOne < 5.0) 
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%f",&gradeFinalTwo); 
        printf("Nota do exame: %.1f\n",gradeFinalTwo);
        gradeFinalOne = (gradeFinalOne + gradeFinalTwo)/2;         
        if (gradeFinalOne >= 5.0) 
        {
            printf("Aluno aprovado.\n");
        }
        else
        {        
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",gradeFinalOne);

    }

return 0;
}


float calculateAverage(float a, float b, float c, float d)
{
    float result = ((a/10) * 2) + ((b/10) * 3) + ((c/10) * 4) + ((d/10) * 1);
    return result;
}
